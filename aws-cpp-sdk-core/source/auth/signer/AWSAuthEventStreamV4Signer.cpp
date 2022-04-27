/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/auth/signer/AWSAuthEventStreamV4Signer.h>
#include <aws/core/auth/signer/AWSAuthSignerCommon.h>

#include <aws/core/auth/AWSCredentialsProvider.h>
#include <aws/core/http/HttpRequest.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/crypto/Sha256HMAC.h>
#include <aws/core/utils/stream/PreallocatedStreamBuf.h>
#include <aws/core/utils/event/EventMessage.h>
#include <aws/core/utils/event/EventHeader.h>

#include <aws/crt/auth/Credentials.h>
#include <aws/crt/http/HttpRequestResponse.h>

#include <iomanip>
#include <cstring>

using namespace Aws;
using namespace Aws::Client;
using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Utils;
using namespace Aws::Utils::Logging;

static const char* EQ = "=";
static const char* AWS_HMAC_SHA256 = "AWS4-HMAC-SHA256";
static const char* EVENT_STREAM_CONTENT_SHA256 = "STREAMING-AWS4-HMAC-SHA256-EVENTS";
static const char* EVENT_STREAM_PAYLOAD = "AWS4-HMAC-SHA256-PAYLOAD";
static const char* AWS4_REQUEST = "aws4_request";
static const char* SIGNED_HEADERS = "SignedHeaders";
static const char* CREDENTIAL = "Credential";
static const char* NEWLINE = "\n";
static const char* X_AMZN_TRACE_ID = "x-amzn-trace-id";
static const char* X_AMZ_CONTENT_SHA256 = "x-amz-content-sha256";
static const char* SIGNING_KEY = "AWS4";
static const char* SIMPLE_DATE_FORMAT_STR = "%Y%m%d";

static const char v4LogTag[] = "AWSAuthV4Signer";
static const char v4AsymmetricLogTag[] = "AWSAuthSymmetricV4Signer";
static const char v4StreamingLogTag[] = "AWSAuthEventStreamV4Signer";

namespace Aws
{
    namespace Auth
    {
        const char SIGV4_SIGNER[] = "SignatureV4";
        const char ASYMMETRIC_SIGV4_SIGNER[] = "AsymmetricSignatureV4";
        const char EVENTSTREAM_SIGV4_SIGNER[] = "EventStreamSignatureV4";
        const char EVENTSTREAM_SIGNATURE_HEADER[] = ":chunk-signature";
        const char EVENTSTREAM_DATE_HEADER[] = ":date";
        const char BEARER_SIGNER[] = "Bearer";
        const char NULL_SIGNER[] = "NullSigner";
    }
}

AWSAuthEventStreamV4Signer::AWSAuthEventStreamV4Signer(const std::shared_ptr<Auth::AWSCredentialsProvider>&
        credentialsProvider, const char* serviceName, const Aws::String& region) :
    m_serviceName(serviceName),
    m_region(region),
    m_credentialsProvider(credentialsProvider)
{

    m_unsignedHeaders.emplace_back(X_AMZN_TRACE_ID);
    m_unsignedHeaders.emplace_back(USER_AGENT_HEADER);
}

bool AWSAuthEventStreamV4Signer::SignRequest(Aws::Http::HttpRequest& request, const char* region, const char* serviceName, bool /* signBody */) const
{
    AWSCredentials credentials = m_credentialsProvider->GetAWSCredentials();

    //don't sign anonymous requests
    if (credentials.GetAWSAccessKeyId().empty() || credentials.GetAWSSecretKey().empty())
    {
        return true;
    }

    if (!credentials.GetSessionToken().empty())
    {
        request.SetAwsSessionToken(credentials.GetSessionToken());
    }

    request.SetHeaderValue(X_AMZ_CONTENT_SHA256, EVENT_STREAM_CONTENT_SHA256);

    //calculate date header to use in internal signature (this also goes into date header).
    DateTime now = GetSigningTimestamp();
    Aws::String dateHeaderValue = now.ToGmtString(DateFormat::ISO_8601_BASIC);
    request.SetHeaderValue(AWS_DATE_HEADER, dateHeaderValue);

    Aws::StringStream headersStream;
    Aws::StringStream signedHeadersStream;

    for (const auto& header : Aws::Auth::Common::CanonicalizeHeaders(request.GetHeaders()))
    {
        if(ShouldSignHeader(header.first))
        {
            headersStream << header.first.c_str() << ":" << header.second.c_str() << NEWLINE;
            signedHeadersStream << header.first.c_str() << ";";
        }
    }

    Aws::String canonicalHeadersString = headersStream.str();
    AWS_LOGSTREAM_DEBUG(v4StreamingLogTag, "Canonical Header String: " << canonicalHeadersString);

    //calculate signed headers parameter
    Aws::String signedHeadersValue = signedHeadersStream.str();
    //remove that last semi-colon
    if (!signedHeadersValue.empty())
    {
        signedHeadersValue.pop_back();
    }

    AWS_LOGSTREAM_DEBUG(v4StreamingLogTag, "Signed Headers value:" << signedHeadersValue);

    //generate generalized canonicalized request string.
    Aws::String canonicalRequestString = Aws::Auth::Common::CanonicalizeRequestSigningString(request, true/* m_urlEscapePath */);

    //append v4 stuff to the canonical request string.
    canonicalRequestString.append(canonicalHeadersString);
    canonicalRequestString.append(NEWLINE);
    canonicalRequestString.append(signedHeadersValue);
    canonicalRequestString.append(NEWLINE);
    canonicalRequestString.append(EVENT_STREAM_CONTENT_SHA256);

    AWS_LOGSTREAM_DEBUG(v4StreamingLogTag, "Canonical Request String: " << canonicalRequestString);

    //now compute sha256 on that request string
    auto hashResult = m_hash.Calculate(canonicalRequestString);
    if (!hashResult.IsSuccess())
    {
        AWS_LOGSTREAM_ERROR(v4StreamingLogTag, "Failed to hash (sha256) request string");
        AWS_LOGSTREAM_DEBUG(v4StreamingLogTag, "The request string is: \"" << canonicalRequestString << "\"");
        return false;
    }

    auto sha256Digest = hashResult.GetResult();
    Aws::String canonicalRequestHash = HashingUtils::HexEncode(sha256Digest);
    Aws::String simpleDate = now.ToGmtString(SIMPLE_DATE_FORMAT_STR);

    Aws::String signingRegion = region ? region : m_region;
    Aws::String signingServiceName = serviceName ? serviceName : m_serviceName;
    Aws::String stringToSign = GenerateStringToSign(dateHeaderValue, simpleDate, canonicalRequestHash, signingRegion, signingServiceName);
    auto finalSignature = GenerateSignature(credentials, stringToSign, simpleDate, signingRegion, signingServiceName);

    Aws::StringStream ss;
    ss << AWS_HMAC_SHA256 << " " << CREDENTIAL << EQ << credentials.GetAWSAccessKeyId() << "/" << simpleDate
        << "/" << signingRegion << "/" << signingServiceName << "/" << AWS4_REQUEST << ", " << SIGNED_HEADERS << EQ
        << signedHeadersValue << ", " << SIGNATURE << EQ << HashingUtils::HexEncode(finalSignature);

    auto awsAuthString = ss.str();
    AWS_LOGSTREAM_DEBUG(v4StreamingLogTag, "Signing request with: " << awsAuthString);
    request.SetAwsAuthorization(awsAuthString);
    request.SetSigningAccessKey(credentials.GetAWSAccessKeyId());
    request.SetSigningRegion(signingRegion);
    return true;
}

// this works regardless if the current machine is Big/Little Endian
static void WriteBigEndian(Aws::String& str, uint64_t n)
{
    int shift = 56;
    while(shift >= 0)
    {
        str.push_back((n >> shift) & 0xFF);
        shift -= 8;
    }
}

bool AWSAuthEventStreamV4Signer::SignEventMessage(Event::Message& message, Aws::String& priorSignature) const
{
    using Event::EventHeaderValue;

    Aws::StringStream stringToSign;
    stringToSign << EVENT_STREAM_PAYLOAD << NEWLINE;
    const DateTime now = GetSigningTimestamp();
    const auto simpleDate = now.ToGmtString(SIMPLE_DATE_FORMAT_STR);
    stringToSign << now.ToGmtString(DateFormat::ISO_8601_BASIC) << NEWLINE
        <<  simpleDate << "/" << m_region << "/"
        << m_serviceName << "/aws4_request" << NEWLINE << priorSignature << NEWLINE;


    Aws::String nonSignatureHeaders;
    nonSignatureHeaders.push_back(char(sizeof(EVENTSTREAM_DATE_HEADER) - 1)); // length of the string
    nonSignatureHeaders += EVENTSTREAM_DATE_HEADER;
    nonSignatureHeaders.push_back(static_cast<char>(EventHeaderValue::EventHeaderType::TIMESTAMP)); // type of the value
    WriteBigEndian(nonSignatureHeaders, static_cast<uint64_t>(now.Millis())); // the value of the timestamp in big-endian

    auto hashOutcome = m_hash.Calculate(nonSignatureHeaders);
    if (!hashOutcome.IsSuccess())
    {
        AWS_LOGSTREAM_ERROR(v4StreamingLogTag, "Failed to hash (sha256) non-signature headers.");
        return false;
    }

    const auto nonSignatureHeadersHash = hashOutcome.GetResult();
    stringToSign << HashingUtils::HexEncode(nonSignatureHeadersHash) << NEWLINE;

    if (message.GetEventPayload().empty())
    {
        AWS_LOGSTREAM_WARN(v4StreamingLogTag, "Attempting to sign an empty message (no payload and no headers). "
                "It is unlikely that this is the intended behavior.");
    }
    else
    {
        // use a preallocatedStreamBuf to avoid making a copy.
        // The Hashing API requires either Aws::String or IStream as input.
        // TODO: the hashing API should be accept 'unsigned char*' as input.
        Utils::Stream::PreallocatedStreamBuf streamBuf(message.GetEventPayload().data(), message.GetEventPayload().size());
        Aws::IOStream payload(&streamBuf);
        hashOutcome = m_hash.Calculate(payload);

        if (!hashOutcome.IsSuccess())
        {
            AWS_LOGSTREAM_ERROR(v4StreamingLogTag, "Failed to hash (sha256) non-signature headers.");
            return false;
        }
        const auto payloadHash = hashOutcome.GetResult();
        stringToSign << HashingUtils::HexEncode(payloadHash);
        AWS_LOGSTREAM_DEBUG(v4StreamingLogTag, "Payload hash  - " << HashingUtils::HexEncode(payloadHash));
    }

    Aws::Utils::ByteBuffer finalSignatureDigest = GenerateSignature(m_credentialsProvider->GetAWSCredentials(), stringToSign.str(), simpleDate, m_region, m_serviceName);
    const auto finalSignature = HashingUtils::HexEncode(finalSignatureDigest);
    AWS_LOGSTREAM_DEBUG(v4StreamingLogTag, "Final computed signing hash: " << finalSignature);
    priorSignature = finalSignature;

    message.InsertEventHeader(EVENTSTREAM_DATE_HEADER, EventHeaderValue(now.Millis(), EventHeaderValue::EventHeaderType::TIMESTAMP));
    message.InsertEventHeader(EVENTSTREAM_SIGNATURE_HEADER, std::move(finalSignatureDigest));

    AWS_LOGSTREAM_INFO(v4StreamingLogTag, "Event chunk final signature - " << finalSignature);
    return true;
}

bool AWSAuthEventStreamV4Signer::ShouldSignHeader(const Aws::String& header) const
{
    return std::find(m_unsignedHeaders.cbegin(), m_unsignedHeaders.cend(), Aws::Utils::StringUtils::ToLower(header.c_str())) == m_unsignedHeaders.cend();
}

Aws::Utils::ByteBuffer AWSAuthEventStreamV4Signer::GenerateSignature(const AWSCredentials& credentials, const Aws::String& stringToSign,
        const Aws::String& simpleDate, const Aws::String& region, const Aws::String& serviceName) const
{
    Utils::Threading::ReaderLockGuard guard(m_derivedKeyLock);
    const auto& secretKey = credentials.GetAWSSecretKey();
    if (secretKey != m_currentSecretKey || simpleDate != m_currentDateStr)
    {
        guard.UpgradeToWriterLock();
        // double-checked lock to prevent updating twice
        if (m_currentDateStr != simpleDate || m_currentSecretKey != secretKey)
        {
            m_currentSecretKey = secretKey;
            m_currentDateStr = simpleDate;
            m_derivedKey = ComputeHash(m_currentSecretKey, m_currentDateStr, region, serviceName);
        }

    }
    return GenerateSignature(stringToSign, m_derivedKey);
}

Aws::Utils::ByteBuffer AWSAuthEventStreamV4Signer::GenerateSignature(const Aws::String& stringToSign, const ByteBuffer& key) const
{
    AWS_LOGSTREAM_DEBUG(v4StreamingLogTag, "Final String to sign: " << stringToSign);

    Aws::StringStream ss;

    auto hashResult = m_HMAC.Calculate(ByteBuffer((unsigned char*)stringToSign.c_str(), stringToSign.length()), key);
    if (!hashResult.IsSuccess())
    {
        AWS_LOGSTREAM_ERROR(v4StreamingLogTag, "Unable to hmac (sha256) final string");
        AWS_LOGSTREAM_DEBUG(v4StreamingLogTag, "The final string is: \"" << stringToSign << "\"");
        return {};
    }

    return hashResult.GetResult();
}

Aws::String AWSAuthEventStreamV4Signer::GenerateStringToSign(const Aws::String& dateValue, const Aws::String& simpleDate,
        const Aws::String& canonicalRequestHash, const Aws::String& region, const Aws::String& serviceName) const
{
    //generate the actual string we will use in signing the final request.
    Aws::StringStream ss;

    ss << AWS_HMAC_SHA256 << NEWLINE << dateValue << NEWLINE << simpleDate << "/" << region << "/"
        << serviceName << "/" << AWS4_REQUEST << NEWLINE << canonicalRequestHash;

    return ss.str();
}

Aws::Utils::ByteBuffer AWSAuthEventStreamV4Signer::ComputeHash(const Aws::String& secretKey,
        const Aws::String& simpleDate, const Aws::String& region, const Aws::String& serviceName) const
{
    Aws::String signingKey(SIGNING_KEY);
    signingKey.append(secretKey);
    auto hashResult = m_HMAC.Calculate(ByteBuffer((unsigned char*)simpleDate.c_str(), simpleDate.length()),
            ByteBuffer((unsigned char*)signingKey.c_str(), signingKey.length()));

    if (!hashResult.IsSuccess())
    {
        AWS_LOGSTREAM_ERROR(v4StreamingLogTag, "Failed to HMAC (SHA256) date string \"" << simpleDate << "\"");
        return {};
    }

    auto kDate = hashResult.GetResult();
    hashResult = m_HMAC.Calculate(ByteBuffer((unsigned char*)region.c_str(), region.length()), kDate);
    if (!hashResult.IsSuccess())
    {
        AWS_LOGSTREAM_ERROR(v4StreamingLogTag, "Failed to HMAC (SHA256) region string \"" << region << "\"");
        return {};
    }

    auto kRegion = hashResult.GetResult();
    hashResult = m_HMAC.Calculate(ByteBuffer((unsigned char*)serviceName.c_str(), serviceName.length()), kRegion);
    if (!hashResult.IsSuccess())
    {
        AWS_LOGSTREAM_ERROR(v4StreamingLogTag, "Failed to HMAC (SHA256) service string \"" << m_serviceName << "\"");
        return {};
    }

    auto kService = hashResult.GetResult();
    hashResult = m_HMAC.Calculate(ByteBuffer((unsigned char*)AWS4_REQUEST, strlen(AWS4_REQUEST)), kService);
    if (!hashResult.IsSuccess())
    {
        AWS_LOGSTREAM_ERROR(v4StreamingLogTag, "Unable to HMAC (SHA256) request string");
        AWS_LOGSTREAM_DEBUG(v4StreamingLogTag, "The request string is: \"" << AWS4_REQUEST << "\"");
        return {};
    }
    return hashResult.GetResult();
}
