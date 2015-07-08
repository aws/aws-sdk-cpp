/*
  * Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
  *
  * Licensed under the Apache License, Version 2.0 (the "License").
  * You may not use this file except in compliance with the License.
  * A copy of the License is located at
  *
  *  http://aws.amazon.com/apache2.0
  *
  * or in the "license" file accompanying this file. This file is distributed
  * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
  * express or implied. See the License for the specific language governing
  * permissions and limitations under the License.
  */

#include <aws/core/auth/AWSAuthSigner.h>

#include <aws/core/auth/AWSCredentialsProvider.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/http/HttpRequest.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/crypto/Sha256.h>
#include <aws/core/utils/crypto/Sha256HMAC.h>

#include <cstdio>
#include <iomanip>
#include <math.h>
#include <string.h>

using namespace Aws;
using namespace Aws::Client;
using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Utils;
using namespace Aws::Utils::Logging;

static const char* AWS_ACCESS_KEY_ID = "AWSAccessKeyId";
static const char* SIGNATURE_METHOD = "SignatureMethod";
static const char* AWS3_HTTPS = "AWS3-HTTPS";
static const char* EQ = "=";
static const char* COMMA = ",";
static const char* HMAC_SHA256 = "HmacSHA256";
static const char* HMAC_SHA256_ALGORITHM = "Algorithm=HmacSHA256";
static const char* SIGNATURE = "Signature";
static const char* SIGNATURE_VERSION = "SignatureVersion";
static const char* TWO = "2";
static const char* TIMESTAMP = "Timestamp";
static const char* AWS_HMAC_SHA256 = "AWS4-HMAC-SHA256";
static const char* AWS4_REQUEST = "aws4_request";
static const char* SIGNED_HEADERS = "SignedHeaders";
static const char* CREDENTIAL = "Credential";
static const char* NEWLINE = "\n";

Aws::String CanonicalizeRequestSigningString(HttpRequest& request)
{
    request.CanonicalizeRequest();
    Aws::StringStream signingStringStream;
    signingStringStream << HttpMethodMapper::GetNameForHttpMethod(request.GetMethod());

    signingStringStream << NEWLINE << request.GetUri().GetPath() << NEWLINE;

    if (request.GetQueryString().size() > 1 && request.GetQueryString().find("=") != std::string::npos)
    {
        signingStringStream << request.GetQueryString().substr(1) << NEWLINE;
    }
    else if (request.GetQueryString().size() > 1)
    {
        signingStringStream << request.GetQueryString().substr(1) << "=" << NEWLINE;
    }
    else
    {
        signingStringStream << NEWLINE;
    }

    return signingStringStream.str();
}

static const char* v4LogTag = "AWSAuthV4Signer";

AWSAuthV4Signer::AWSAuthV4Signer(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider,
    const char* serviceName,
    Region region) :
    m_credentialsProvider(credentialsProvider),
    m_serviceName(serviceName),
    m_region(region),
    m_hash(Aws::MakeUnique<Aws::Utils::Crypto::Sha256>(v4LogTag)),
    m_HMAC(Aws::MakeUnique<Aws::Utils::Crypto::Sha256HMAC>(v4LogTag))
{
}

AWSAuthV4Signer::~AWSAuthV4Signer()
{
    // empty destructor in .cpp file to keep from needing the implementation of (AWSCredentialsProvider, Sha256, Sha256HMAC) in the header file 
}

bool AWSAuthV4Signer::SignRequest(Aws::Http::HttpRequest& request) const
{
    AWSCredentials credentials = m_credentialsProvider->GetAWSCredentials();

    if (!credentials.GetSessionToken().empty())
    {
        request.SetAwsSessionToken(credentials.GetSessionToken());
    }

    //calculate date header to use in internal signature (this also goes into date header).
    Aws::String dateHeaderValue = DateTime::CalculateGmtTimestampAsString("%Y%m%dT%H%M%SZ");
    request.SetHeaderValue(AWS_DATE_HEADER, dateHeaderValue);

    //compute hash on payload if it exists (I don't know what we'll do if this is a
    //file for an s3 post.
    auto hashResult = request.GetContentBody() ? m_hash->Calculate(*request.GetContentBody())
        : m_hash->Calculate("");
    if (!hashResult.IsSuccess())
    {
        AWS_LOGSTREAM_ERROR(v4LogTag, "Unable to hash (sha256) request body");
        return false;
    }

    ByteBuffer sha256Digest = hashResult.GetResult();

    Aws::String payloadHash(HashingUtils::HexEncode(sha256Digest));
    AWS_LOG_DEBUG(v4LogTag, "Calculated sha256 %s for payload.", payloadHash.c_str());

    request.SetHeaderValue("x-amz-content-sha256", payloadHash);

    Aws::StringStream headersStream;
    Aws::StringStream signedHeadersStream;

    for (const auto& header : request.GetHeaders())
    {
        headersStream << header.first << ":" << header.second << NEWLINE;
        signedHeadersStream << header.first << ";";
    }

    Aws::String canonicalHeadersString = headersStream.str();
    AWS_LOG_DEBUG(v4LogTag, "Canonical Header String: %s", canonicalHeadersString.c_str());

    //calculate signed headers parameter
    Aws::String signedHeadersValue = signedHeadersStream.str();
    //remove that last semi-colon
    signedHeadersValue.erase(signedHeadersValue.length() - 1);
    AWS_LOG_DEBUG(v4LogTag, "Signed Headers value: %s", signedHeadersValue.c_str());

    //generate generalized canonicalized request string.
    Aws::String canonicalRequestString = CanonicalizeRequestSigningString(request);

    //append v4 stuff to the canonical request string.
    canonicalRequestString.append(canonicalHeadersString);
    canonicalRequestString.append(NEWLINE);
    canonicalRequestString.append(signedHeadersValue);
    canonicalRequestString.append(NEWLINE);
    canonicalRequestString.append(payloadHash);
    AWS_LOG_DEBUG(v4LogTag, "Canonical Request String: %s", canonicalRequestString.c_str());

    //now compute sha256 on that request string
    hashResult = m_hash->Calculate(canonicalRequestString);
    if (!hashResult.IsSuccess())
    {
        AWS_LOGSTREAM_ERROR(v4LogTag, "Failed to hash (sha256) request string \"" << canonicalRequestString << "\"");
        return false;
    }

    sha256Digest = hashResult.GetResult();
    Aws::String cannonicalRequestHash = HashingUtils::HexEncode(sha256Digest);

    Aws::String simpleDate = DateTime::CalculateGmtTimestampAsString("%Y%m%d");

    Aws::String regionName = RegionMapper::GetRegionName(m_region);
    //generate the actual string we will use in signing the final request.
    Aws::StringStream ss;

    ss << AWS_HMAC_SHA256 << NEWLINE << dateHeaderValue << NEWLINE << simpleDate << "/" << regionName << "/"
        << m_serviceName << "/" << AWS4_REQUEST << NEWLINE << cannonicalRequestHash;

    Aws::String stringToSign = ss.str();
    AWS_LOG_DEBUG(v4LogTag, "Final String to sign: %s", stringToSign.c_str());
    ss.str("");

    //now we do the complicated part of deriving a signing key.
    Aws::String signingKey("AWS4");
    signingKey.append(credentials.GetAWSSecretKey());

    //we use digest only for the derivation process.
    hashResult = m_HMAC->Calculate(ByteBuffer((unsigned char*)simpleDate.c_str(), simpleDate.length()),
        ByteBuffer((unsigned char*)signingKey.c_str(), signingKey.length()));
    if (!hashResult.IsSuccess())
    {
        AWS_LOGSTREAM_ERROR(v4LogTag, "Failed to hmac (sha256) date string \"" << simpleDate << "\"");
        return false;
    }

    ByteBuffer kDate = hashResult.GetResult();
    hashResult = m_HMAC->Calculate(ByteBuffer((unsigned char*)regionName.c_str(), regionName.length()), kDate);
    if (!hashResult.IsSuccess())
    {
        AWS_LOGSTREAM_ERROR(v4LogTag, "Failed to hmac (sha256) region string \"" << regionName << "\"");
        return false;
    }

    ByteBuffer kRegion = hashResult.GetResult();
    hashResult = m_HMAC->Calculate(ByteBuffer((unsigned char*)m_serviceName.c_str(), m_serviceName.length()), kRegion);
    if (!hashResult.IsSuccess())
    {
        AWS_LOGSTREAM_ERROR(v4LogTag, "Failed to hmac (sha256) service string \"" << m_serviceName << "\"");
        return false;
    }

    ByteBuffer kService = hashResult.GetResult();
    hashResult = m_HMAC->Calculate(ByteBuffer((unsigned char*)AWS4_REQUEST, strlen(AWS4_REQUEST)), kService);
    if (!hashResult.IsSuccess())
    {
        AWS_LOGSTREAM_ERROR(v4LogTag, "Unable to hmac (sha256) request string \"" << AWS4_REQUEST << "\"");
        return false;
    }

    ByteBuffer kSigning = hashResult.GetResult();
    hashResult = m_HMAC->Calculate(ByteBuffer((unsigned char*)stringToSign.c_str(), stringToSign.length()), kSigning);
    if (!hashResult.IsSuccess())
    {
        AWS_LOGSTREAM_ERROR(v4LogTag, "Unable to hmac (sha256) final string \"" << stringToSign << "\"");
        return false;
    }

    //now we finally sign our request string with our hex encoded derived hash.
    ByteBuffer finalSigningDigest = hashResult.GetResult();

    Aws::String finalSigningHash = HashingUtils::HexEncode(finalSigningDigest);
    AWS_LOG_DEBUG(v4LogTag, "Final computed signing hash: %s", finalSigningHash.c_str());
    //add that the signature to the header
    ss << AWS_HMAC_SHA256 << " " << CREDENTIAL << EQ << credentials.GetAWSAccessKeyId() << "/" << simpleDate
        << "/" << regionName << "/" << m_serviceName << "/" << AWS4_REQUEST << ", " << SIGNED_HEADERS << EQ
        << signedHeadersValue << ", " << SIGNATURE << EQ << finalSigningHash;

    Aws::String awsAuthString = ss.str();
    AWS_LOG_DEBUG(v4LogTag, "Signing request with: %s", awsAuthString.c_str());
    request.SetAwsAuthorization(awsAuthString.c_str());

    return true;
}

static const char* v2LogTag = "AWSAuthV2Signer";

AWSAuthV2Signer::AWSAuthV2Signer(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider) :
m_credentialsProvider(credentialsProvider),
m_HMAC(Aws::MakeUnique<Aws::Utils::Crypto::Sha256HMAC>(v2LogTag))
{
}

AWSAuthV2Signer::AWSAuthV2Signer(const Aws::String& awsAccessKeyId, const Aws::String& awsSecretAccessKey) :
m_credentialsProvider(Aws::MakeShared<SimpleAWSCredentialsProvider>(v2LogTag, awsAccessKeyId, awsSecretAccessKey)),
m_HMAC(Aws::MakeUnique<Aws::Utils::Crypto::Sha256HMAC>(v2LogTag))
{
}

AWSAuthV2Signer::~AWSAuthV2Signer()
{
    // empty destructor in .cpp file to keep from needing the implementation of (AWSCredentialsProvider, Sha256HMAC) in the header file 
}

bool AWSAuthV2Signer::SignRequest(HttpRequest& request) const
{
    AWSCredentials credentials = m_credentialsProvider->GetAWSCredentials();

    //adding the 4 auth parameters is our responsibility
    request.AddQueryStringParameter(AWS_ACCESS_KEY_ID, credentials.GetAWSAccessKeyId());
    request.AddQueryStringParameter(SIGNATURE_METHOD, HMAC_SHA256);
    request.AddQueryStringParameter(SIGNATURE_VERSION, TWO);
    request.AddQueryStringParameter(TIMESTAMP, DateTime::CalculateGmtTimestampAsString("%Y-%m-%dT%H:%M:%SZ"));

    Aws::String canonicalRequestSigningString = CanonicalizeRequestSigningString(request);
    AWS_LOG_DEBUG(v2LogTag, "Computed signing string: %s", canonicalRequestSigningString.c_str());

    const Aws::String& secretKey = credentials.GetAWSSecretKey();

    auto hashResult = m_HMAC->Calculate(ByteBuffer((unsigned char*)canonicalRequestSigningString.c_str(), canonicalRequestSigningString.length()),
        ByteBuffer((unsigned char*)secretKey.c_str(), secretKey.length()));
    if (!hashResult.IsSuccess())
    {
        AWS_LOGSTREAM_ERROR(v2LogTag, "Unable to hmac (sha256) signing string \"" << canonicalRequestSigningString << "\"");
        return false;
    }

    ByteBuffer digest = hashResult.GetResult();

    Aws::String base64HMAC = HashingUtils::Base64Encode(digest);
    AWS_LOG_DEBUG(v2LogTag, "Computed hash: %s", base64HMAC.c_str());

    request.AddQueryStringParameter(SIGNATURE, base64HMAC);

    return true;
}

static const char* v3LogTag = "AWSAuthV3Signer";

AWSAuthV3Signer::AWSAuthV3Signer(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider) :
m_credentialsProvider(credentialsProvider),
m_HMAC(Aws::MakeUnique<Aws::Utils::Crypto::Sha256HMAC>(v3LogTag))
{
}

AWSAuthV3Signer::AWSAuthV3Signer(const Aws::String& awsAccessKeyId, const Aws::String& awsSecretAccessKey) :
m_credentialsProvider(Aws::MakeShared<SimpleAWSCredentialsProvider>(v3LogTag, awsAccessKeyId, awsSecretAccessKey)),
m_HMAC(Aws::MakeUnique<Aws::Utils::Crypto::Sha256HMAC>(v3LogTag))
{
}

AWSAuthV3Signer::~AWSAuthV3Signer()
{
    // empty destructor in .cpp file to keep from needing the implementation of (AWSCredentialsProvider, Sha256HMAC) in the header file 
}

bool AWSAuthV3Signer::SignRequest(HttpRequest& request) const
{
    Aws::String dateStamp = DateTime::CalculateGmtTimestampAsString("%a, %e %b %Y %H:%M:%S %Z");
    request.SetDate(dateStamp);

    //use timestamp to compute hmacSha256 using secret key.
    AWSCredentials credentials = m_credentialsProvider->GetAWSCredentials();
    const Aws::String& secretKey = credentials.GetAWSSecretKey();

    auto hashResult = m_HMAC->Calculate(ByteBuffer((unsigned char*)dateStamp.c_str(), dateStamp.length()),
        ByteBuffer((unsigned char*)secretKey.c_str(), secretKey.length()));
    if (!hashResult.IsSuccess())
    {
        AWS_LOGSTREAM_ERROR(v3LogTag, "Unable to hmac (sha256) date string \"" << dateStamp << "\"");
        return false;
    }

    ByteBuffer digest = hashResult.GetResult();

    Aws::String base64Hash = HashingUtils::Base64Encode(digest);
    AWS_LOG_DEBUG(v2LogTag, "Computed hash for request %s: ", base64Hash.c_str());

    //construct aws auth header.
    Aws::StringStream authHeaderBuf;

    authHeaderBuf << AWS3_HTTPS << " " << AWS_ACCESS_KEY_ID << EQ << credentials.GetAWSAccessKeyId() << COMMA
        << HMAC_SHA256_ALGORITHM << COMMA << SIGNATURE << EQ << base64Hash;

    //set aws auth header.
    Aws::String authHeader = authHeaderBuf.str();
    AWS_LOG_DEBUG(v2LogTag, "Setting auth header to %s: ", authHeader.c_str());

    request.SetAwsAuthorization(authHeader);

    return true;
}
