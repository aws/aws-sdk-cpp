/*
 * Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/core/client/AWSClient.h>
#include <aws/core/AmazonWebServiceRequest.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/auth/AWSAuthSignerProvider.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/AWSErrorMarshaller.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/crypto/MD5.h>
#include <thread>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/crypto/Factories.h>
#include <aws/core/http/URI.h>

using namespace Aws;
using namespace Aws::Client;
using namespace Aws::Http;
using namespace Aws::Utils;
using namespace Aws::Utils::Json;
using namespace Aws::Utils::Xml;

static const int SUCCESS_RESPONSE_MIN = 200;
static const int SUCCESS_RESPONSE_MAX = 299;

static const char AWS_CLIENT_LOG_TAG[] = "AWSClient";
//4 Minutes
static const std::chrono::milliseconds TIME_DIFF_MAX = std::chrono::minutes(4); 
//-4 Minutes
static const std::chrono::milliseconds TIME_DIFF_MIN = std::chrono::minutes(-4);

std::atomic<int> AWSClient::s_refCount(0);

static CoreErrors GuessBodylessErrorType(Aws::Http::HttpResponseCode responseCode)
{
    switch (responseCode)
    {
    case HttpResponseCode::FORBIDDEN:
    case HttpResponseCode::UNAUTHORIZED:
        return CoreErrors::ACCESS_DENIED;
    case HttpResponseCode::NOT_FOUND:
        return CoreErrors::RESOURCE_NOT_FOUND;
    default:
        return CoreErrors::UNKNOWN;
    }    
}

void AWSClient::InitializeGlobalStatics()
{
    int currentRefCount = s_refCount.load();
    if (!currentRefCount)
    {      
        int expectedRefCount = 0;    
        Utils::EnumParseOverflowContainer* expectedPtrValue = nullptr;
        Utils::EnumParseOverflowContainer* container = Aws::New<Utils::EnumParseOverflowContainer>(AWS_CLIENT_LOG_TAG);
        if (!s_refCount.compare_exchange_strong(expectedRefCount, 1) ||
             !Aws::CheckAndSwapEnumOverflowContainer(expectedPtrValue, container))
        {
            Aws::Delete(container);
        }        
    }
    else
    {
        ++s_refCount;
    }
}

void AWSClient::CleanupGlobalStatics()
{
    int currentRefCount = s_refCount.load(); 
    Utils::EnumParseOverflowContainer* expectedPtrValue = Aws::GetEnumOverflowContainer();

    if (currentRefCount == 1)
    {
        if (s_refCount.compare_exchange_strong(currentRefCount, 0) &&
            Aws::CheckAndSwapEnumOverflowContainer(expectedPtrValue, nullptr))
        {
            Aws::Delete(expectedPtrValue);           
            return;
        }        
    }

    --s_refCount;
}

AWSClient::AWSClient(const Aws::Client::ClientConfiguration& configuration,
    const std::shared_ptr<Aws::Client::AWSAuthSigner>& signer,
    const std::shared_ptr<AWSErrorMarshaller>& errorMarshaller) :
    m_httpClient(CreateHttpClient(configuration)),
    m_signerProvider(Aws::MakeUnique<Aws::Auth::DefaultAuthSignerProvider>(AWS_CLIENT_LOG_TAG, signer)),
    m_errorMarshaller(errorMarshaller),
    m_retryStrategy(configuration.retryStrategy),
    m_writeRateLimiter(configuration.writeRateLimiter),
    m_readRateLimiter(configuration.readRateLimiter),
    m_userAgent(configuration.userAgent),
    m_hash(Aws::Utils::Crypto::CreateMD5Implementation()),
    m_enableClockSkewAdjustment(configuration.enableClockSkewAdjustment)
{
    InitializeGlobalStatics();
}

AWSClient::AWSClient(const Aws::Client::ClientConfiguration& configuration,
    const std::shared_ptr<Aws::Auth::AWSAuthSignerProvider>& signerProvider,
    const std::shared_ptr<AWSErrorMarshaller>& errorMarshaller) :
    m_httpClient(CreateHttpClient(configuration)),
    m_signerProvider(signerProvider),
    m_errorMarshaller(errorMarshaller),
    m_retryStrategy(configuration.retryStrategy),
    m_writeRateLimiter(configuration.writeRateLimiter),
    m_readRateLimiter(configuration.readRateLimiter),
    m_userAgent(configuration.userAgent),
    m_hash(Aws::Utils::Crypto::CreateMD5Implementation()),
    m_enableClockSkewAdjustment(configuration.enableClockSkewAdjustment)
{
    InitializeGlobalStatics();
}


AWSClient::~AWSClient()
{
    CleanupGlobalStatics();
}

void AWSClient::DisableRequestProcessing() 
{ 
    m_httpClient->DisableRequestProcessing(); 
}

void AWSClient::EnableRequestProcessing() 
{ 
    m_httpClient->EnableRequestProcessing();
}

Aws::Client::AWSAuthSigner* AWSClient::GetSignerByName(const char* name) const
{
    const auto& signer =  m_signerProvider->GetSigner(name);
    return signer ? signer.get() : nullptr;
}

HttpResponseOutcome AWSClient::AttemptExhaustively(const Aws::Http::URI& uri,
    const Aws::AmazonWebServiceRequest& request,
    HttpMethod method,
    const char* signerName) const
{
    for (long retries = 0;; retries++)
    {
        HttpResponseOutcome outcome = AttemptOneRequest(uri, request, method, signerName);
        if (outcome.IsSuccess())
        {
            AWS_LOGSTREAM_TRACE(AWS_CLIENT_LOG_TAG, "Request successful returning.");
            return outcome;
        }
        else if (!m_httpClient->IsRequestProcessingEnabled())
        {
            AWS_LOGSTREAM_TRACE(AWS_CLIENT_LOG_TAG, "Request was cancelled externally.");
            return outcome;
        }
        else
        {
            long sleepMillis = m_retryStrategy->CalculateDelayBeforeNextRetry(outcome.GetError(), retries);
            if (m_enableClockSkewAdjustment)
            {
                auto signer = GetSignerByName(signerName);
                //detect clock skew and try to correct.            
                AWS_LOGSTREAM_WARN(AWS_CLIENT_LOG_TAG, "If the signature check failed. This could be because of a time skew. Attempting to adjust the signer.");
                const Http::HeaderValueCollection& headers = outcome.GetError().GetResponseHeaders();
                auto awsDateHeaderIter = headers.find(StringUtils::ToLower(Http::AWS_DATE_HEADER));
                auto dateHeaderIter = headers.find(StringUtils::ToLower(Http::DATE_HEADER));

                DateTime serverTime;
                if (awsDateHeaderIter != headers.end())
                {
                    serverTime = DateTime(awsDateHeaderIter->second.c_str(), DateFormat::AutoDetect);
                }
                else if (dateHeaderIter != headers.end())
                {
                    serverTime = DateTime(dateHeaderIter->second.c_str(), DateFormat::AutoDetect);
                }

                const auto signingTimestamp = signer->GetSigningTimestamp();
                if (!serverTime.WasParseSuccessful() || serverTime == DateTime())
                {
                    AWS_LOGSTREAM_DEBUG(AWS_CLIENT_LOG_TAG, "Date header was not found in the response, can't attempt to detect clock skew");
                    serverTime = signingTimestamp;
                }

                AWS_LOGSTREAM_DEBUG(AWS_CLIENT_LOG_TAG, "Server time is " << serverTime.ToGmtString(DateFormat::RFC822) << ", while client time is " << DateTime::Now().ToGmtString(DateFormat::RFC822));
                auto diff = DateTime::Diff(serverTime, signingTimestamp);
                //only try again if clock skew was the cause of the error.
                if(diff >= TIME_DIFF_MAX || diff <= TIME_DIFF_MIN)
                {
                    diff = DateTime::Diff(serverTime, DateTime::Now());
                    AWS_LOGSTREAM_INFO(AWS_CLIENT_LOG_TAG, "Computed time difference as " << diff.count() << " milliseconds. Adjusting signer with the skew.");
                    signer->SetClockSkew(diff);
                    auto newError = AWSError<CoreErrors>(
                            outcome.GetError().GetErrorType(), outcome.GetError().GetExceptionName(), outcome.GetError().GetMessage(), true);
                    newError.SetResponseHeaders(outcome.GetError().GetResponseHeaders());
                    newError.SetResponseCode(outcome.GetError().GetResponseCode());
                    outcome = newError;
                    //don't sleep at all if clock skew was the problem.
                    sleepMillis = 0;
                }
            }

            if (!m_retryStrategy->ShouldRetry(outcome.GetError(), retries)) return outcome;
        
            AWS_LOGSTREAM_WARN(AWS_CLIENT_LOG_TAG, "Request failed, now waiting " << sleepMillis << " ms before attempting again.");
            if(request.GetBody())
            {
                request.GetBody()->clear();
                request.GetBody()->seekg(0);
            }

            if (request.GetRequestRetryHandler())
            {
                request.GetRequestRetryHandler()(request);
            }

            m_httpClient->RetryRequestSleep(std::chrono::milliseconds(sleepMillis));
        }
    }
}

HttpResponseOutcome AWSClient::AttemptExhaustively(const Aws::Http::URI& uri, HttpMethod method, const char* signerName, const char* requestName) const
{
    for (long retries = 0;; retries++)
    {
        HttpResponseOutcome outcome = AttemptOneRequest(uri, method, signerName, requestName);
        if (outcome.IsSuccess() || !m_retryStrategy->ShouldRetry(outcome.GetError(), retries))
        {
            return outcome;
        }
        else
        {
            long sleepMillis = m_retryStrategy->CalculateDelayBeforeNextRetry(outcome.GetError(), retries);
            m_httpClient->RetryRequestSleep(std::chrono::milliseconds(sleepMillis));
        }
    }
}

static bool DoesResponseGenerateError(const std::shared_ptr<HttpResponse>& response)
{
    if (!response) return true;

    int responseCode = static_cast<int>(response->GetResponseCode());
    return response == nullptr || responseCode < SUCCESS_RESPONSE_MIN || responseCode > SUCCESS_RESPONSE_MAX;

}

HttpResponseOutcome AWSClient::AttemptOneRequest(const Aws::Http::URI& uri,
    const Aws::AmazonWebServiceRequest& request,
    HttpMethod method,
    const char* signerName) const
{
    std::shared_ptr<HttpRequest> httpRequest(CreateHttpRequest(uri, method, request.GetResponseStreamFactory()));
    BuildHttpRequest(request, httpRequest);
    auto signer = GetSignerByName(signerName);
    if (!signer->SignRequest(*httpRequest, request.SignBody()))
    {
        AWS_LOGSTREAM_ERROR(AWS_CLIENT_LOG_TAG, "Request signing failed. Returning error.");
        return HttpResponseOutcome(); // TODO: make a real error when error revamp reaches branch (SIGNING_ERROR)
    }

    AWS_LOGSTREAM_DEBUG(AWS_CLIENT_LOG_TAG, "Request Successfully signed");
    std::shared_ptr<HttpResponse> httpResponse(
        m_httpClient->MakeRequest(*httpRequest, m_readRateLimiter.get(), m_writeRateLimiter.get()));

    if (DoesResponseGenerateError(httpResponse))
    {
        AWS_LOGSTREAM_DEBUG(AWS_CLIENT_LOG_TAG, "Request returned error. Attempting to generate appropriate error codes from response");
        return HttpResponseOutcome(BuildAWSError(httpResponse));
    }

    AWS_LOGSTREAM_DEBUG(AWS_CLIENT_LOG_TAG, "Request returned successful response.");

    return HttpResponseOutcome(httpResponse);
}

HttpResponseOutcome AWSClient::AttemptOneRequest(const Aws::Http::URI& uri, HttpMethod method, const char* signerName, const char* requestName) const
{
    AWS_UNREFERENCED_PARAM(requestName);

    std::shared_ptr<HttpRequest> httpRequest(CreateHttpRequest(uri, method, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod));
    auto signer = GetSignerByName(signerName);
    if (!signer->SignRequest(*httpRequest))
    {
        AWS_LOGSTREAM_ERROR(AWS_CLIENT_LOG_TAG, "Request signing failed. Returning error.");
        return HttpResponseOutcome(); // TODO: make a real error when error revamp reaches branch (SIGNING_ERROR)
    }

    //user agent and headers like that shouldn't be signed for the sake of compatibility with proxies which MAY mutate that header.
    AddCommonHeaders(*httpRequest);

    AWS_LOGSTREAM_DEBUG(AWS_CLIENT_LOG_TAG, "Request Successfully signed");
    std::shared_ptr<HttpResponse> httpResponse(
        m_httpClient->MakeRequest(*httpRequest, m_readRateLimiter.get(), m_writeRateLimiter.get()));

    if (DoesResponseGenerateError(httpResponse))
    {
        AWS_LOGSTREAM_DEBUG(AWS_CLIENT_LOG_TAG, "Request returned error. Attempting to generate appropriate error codes from response");
        return HttpResponseOutcome(BuildAWSError(httpResponse));
    }

    AWS_LOGSTREAM_DEBUG(AWS_CLIENT_LOG_TAG, "Request returned successful response.");

    return HttpResponseOutcome(httpResponse);
}

StreamOutcome AWSClient::MakeRequestWithUnparsedResponse(const Aws::Http::URI& uri,
    const Aws::AmazonWebServiceRequest& request,
    Http::HttpMethod method,
    const char* signerName) const
{
    HttpResponseOutcome httpResponseOutcome = AttemptExhaustively(uri, request, method, signerName);
    if (httpResponseOutcome.IsSuccess())
    {
        return StreamOutcome(AmazonWebServiceResult<Stream::ResponseStream>(
            httpResponseOutcome.GetResult()->SwapResponseStreamOwnership(),
            httpResponseOutcome.GetResult()->GetHeaders(), httpResponseOutcome.GetResult()->GetResponseCode()));
    }

    return StreamOutcome(httpResponseOutcome.GetError());
}

StreamOutcome AWSClient::MakeRequestWithUnparsedResponse(const Aws::Http::URI& uri, Http::HttpMethod method, 
        const char* signerName, const char* requestName) const
{
    HttpResponseOutcome httpResponseOutcome = AttemptExhaustively(uri, method, signerName, requestName);
    if (httpResponseOutcome.IsSuccess())
    {
        return StreamOutcome(AmazonWebServiceResult<Stream::ResponseStream>(
            httpResponseOutcome.GetResult()->SwapResponseStreamOwnership(),
            httpResponseOutcome.GetResult()->GetHeaders(), httpResponseOutcome.GetResult()->GetResponseCode()));
    }

    return StreamOutcome(httpResponseOutcome.GetError());
}

void AWSClient::AddHeadersToRequest(const std::shared_ptr<Aws::Http::HttpRequest>& httpRequest,
    const Http::HeaderValueCollection& headerValues) const
{
    for (auto const& headerValue : headerValues)
    {
        httpRequest->SetHeaderValue(headerValue.first, headerValue.second);
    }

    AddCommonHeaders(*httpRequest);

}

void AWSClient::AddContentBodyToRequest(const std::shared_ptr<Aws::Http::HttpRequest>& httpRequest,
    const std::shared_ptr<Aws::IOStream>& body, bool needsContentMd5) const
{
    httpRequest->AddContentBody(body);

    //If there is no body, we have a content length of 0
    //note: we also used to remove content-type, but S3 actually needs content-type on InitiateMultipartUpload and it isn't
    //forbiden by the spec. If we start getting weird errors related to this, make sure it isn't caused by this removal.
    if (!body)
    {
        AWS_LOGSTREAM_TRACE(AWS_CLIENT_LOG_TAG, "No content body, content-length headers");

        if(httpRequest->GetMethod() == HttpMethod::HTTP_POST || httpRequest->GetMethod() == HttpMethod::HTTP_PUT)
        {        
            httpRequest->SetHeaderValue(Http::CONTENT_LENGTH_HEADER, "0");        
        }
        else
        {
            httpRequest->DeleteHeader(Http::CONTENT_LENGTH_HEADER);
        }
    }

    //in the scenario where we are adding a content body as a stream, the request object likely already
    //has a content-length header set and we don't want to seek the stream just to find this information.
    if (body && !httpRequest->HasHeader(Http::CONTENT_LENGTH_HEADER))
    {
        AWS_LOGSTREAM_TRACE(AWS_CLIENT_LOG_TAG, "Found body, but content-length has not been set, attempting to compute content-length");
        body->seekg(0, body->end);
        auto streamSize = body->tellg();
        body->seekg(0, body->beg);
        Aws::StringStream ss;
        ss << streamSize;
        httpRequest->SetContentLength(ss.str());
    }

    if (needsContentMd5 && body && !httpRequest->HasHeader(Http::CONTENT_MD5_HEADER))
    {
        AWS_LOGSTREAM_TRACE(AWS_CLIENT_LOG_TAG, "Found body, and content-md5 needs to be set" <<
            ", attempting to compute content-md5");

        //changing the internal state of the hash computation is not a logical state
        //change as far as constness goes for this class. Due to the platform specificness
        //of hash computations, we can't control the fact that computing a hash mutates
        //state on some platforms such as windows (but that isn't a concern of this class.
        auto md5HashResult = const_cast<AWSClient*>(this)->m_hash->Calculate(*body);
        body->clear();
        if (md5HashResult.IsSuccess())
        {
            httpRequest->SetHeaderValue(Http::CONTENT_MD5_HEADER, HashingUtils::Base64Encode(md5HashResult.GetResult()));
        }
    }
}

void AWSClient::BuildHttpRequest(const Aws::AmazonWebServiceRequest& request,
    const std::shared_ptr<HttpRequest>& httpRequest) const
{
    //do headers first since the request likely will set content-length as it's own header.
    AddHeadersToRequest(httpRequest, request.GetHeaders());
    AddContentBodyToRequest(httpRequest, request.GetBody(), request.ShouldComputeContentMd5());

    // Pass along handlers for processing data sent/received in bytes
    httpRequest->SetDataReceivedEventHandler(request.GetDataReceivedEventHandler());
    httpRequest->SetDataSentEventHandler(request.GetDataSentEventHandler());
    httpRequest->SetContinueRequestHandle(request.GetContinueRequestHandler());

    request.AddQueryStringParameters(httpRequest->GetUri());
}

void AWSClient::AddCommonHeaders(HttpRequest& httpRequest) const
{
    httpRequest.SetUserAgent(m_userAgent);
}

Aws::String AWSClient::GeneratePresignedUrl(URI& uri, HttpMethod method, long long expirationInSeconds)
{
    std::shared_ptr<HttpRequest> request = CreateHttpRequest(uri, method, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
    auto signer = GetSignerByName(Aws::Auth::SIGV4_SIGNER);
    if (signer->PresignRequest(*request, expirationInSeconds))
    {
        return request->GetURIString();
    }

    return "";
}

Aws::String AWSClient::GeneratePresignedUrl(Aws::Http::URI& uri, Aws::Http::HttpMethod method, const char* region, const char* serviceName, long long expirationInSeconds) const
{
    std::shared_ptr<HttpRequest> request = CreateHttpRequest(uri, method, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
    auto signer = GetSignerByName(Aws::Auth::SIGV4_SIGNER);
    if (signer->PresignRequest(*request, region, serviceName, expirationInSeconds))
    {
        return request->GetURIString();
    }

    return "";
}

Aws::String AWSClient::GeneratePresignedUrl(URI& uri, HttpMethod method, const char* region, long long expirationInSeconds) const
{
    std::shared_ptr<HttpRequest> request = CreateHttpRequest(uri, method, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
    auto signer = GetSignerByName(Aws::Auth::SIGV4_SIGNER);
    if (signer->PresignRequest(*request, region, expirationInSeconds))
    {
        return request->GetURIString();
    }

    return "";
}

Aws::String AWSClient::GeneratePresignedUrl(const Aws::AmazonWebServiceRequest& request, Aws::Http::URI& uri, Aws::Http::HttpMethod method, const char* region,
    const Aws::Http::QueryStringParameterCollection& extraParams, long long expirationInSeconds) const
{
    std::shared_ptr<HttpRequest> httpRequest =
        ConvertToRequestForPresigning(request, uri, method, extraParams);
    auto signer = GetSignerByName(Aws::Auth::SIGV4_SIGNER);
    if (signer->PresignRequest(*httpRequest, region, expirationInSeconds))
    {
        return httpRequest->GetURIString();
    }

    return "";
}

Aws::String AWSClient::GeneratePresignedUrl(const Aws::AmazonWebServiceRequest& request, Aws::Http::URI& uri, Aws::Http::HttpMethod method, const char* region, const char* serviceName,
const Aws::Http::QueryStringParameterCollection& extraParams, long long expirationInSeconds) const
{
    std::shared_ptr<HttpRequest> httpRequest =
        ConvertToRequestForPresigning(request, uri, method, extraParams);
    auto signer = GetSignerByName(Aws::Auth::SIGV4_SIGNER);
    if (signer->PresignRequest(*httpRequest, region, serviceName, expirationInSeconds))
    {
        return httpRequest->GetURIString();
    }

    return "";
}

Aws::String AWSClient::GeneratePresignedUrl(const Aws::AmazonWebServiceRequest& request, Aws::Http::URI& uri, Aws::Http::HttpMethod method,
    const Aws::Http::QueryStringParameterCollection& extraParams, long long expirationInSeconds) const
{
    std::shared_ptr<HttpRequest> httpRequest =
        ConvertToRequestForPresigning(request, uri, method, extraParams);
    auto signer = GetSignerByName(Aws::Auth::SIGV4_SIGNER);
    if (signer->PresignRequest(*httpRequest, expirationInSeconds))
    {
        return httpRequest->GetURIString();
    }

    return "";
}

std::shared_ptr<Aws::Http::HttpRequest> AWSClient::ConvertToRequestForPresigning(const Aws::AmazonWebServiceRequest& request, Aws::Http::URI& uri,
    Aws::Http::HttpMethod method, const Aws::Http::QueryStringParameterCollection& extraParams) const
{
    request.PutToPresignedUrl(uri);
    std::shared_ptr<HttpRequest> httpRequest = CreateHttpRequest(uri, method, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
    
    for (auto& param : extraParams)
    {
        httpRequest->AddQueryStringParameter(param.first.c_str(), param.second);
    }

    return httpRequest;
}


////////////////////////////////////////////////////////////////////////////
AWSJsonClient::AWSJsonClient(const Aws::Client::ClientConfiguration& configuration,
    const std::shared_ptr<Aws::Client::AWSAuthSigner>& signer,
    const std::shared_ptr<AWSErrorMarshaller>& errorMarshaller) :
    BASECLASS(configuration, signer, errorMarshaller)
{
}

AWSJsonClient::AWSJsonClient(const Aws::Client::ClientConfiguration& configuration,
    const std::shared_ptr<Aws::Auth::AWSAuthSignerProvider>& signerProvider,
    const std::shared_ptr<AWSErrorMarshaller>& errorMarshaller) :
    BASECLASS(configuration, signerProvider, errorMarshaller)
{
}


JsonOutcome AWSJsonClient::MakeRequest(const Aws::Http::URI& uri,
    const Aws::AmazonWebServiceRequest& request,
    Http::HttpMethod method,
    const char* signerName) const
{
    HttpResponseOutcome httpOutcome(BASECLASS::AttemptExhaustively(uri, request, method, signerName));
    if (!httpOutcome.IsSuccess())
    {
        return JsonOutcome(httpOutcome.GetError());
    }

    if (httpOutcome.GetResult()->GetResponseBody().tellp() > 0)
        //this is stupid, but gcc doesn't pick up the covariant on the dereference so we have to give it a little hint.
        return JsonOutcome(AmazonWebServiceResult<JsonValue>(JsonValue(httpOutcome.GetResult()->GetResponseBody()),
        httpOutcome.GetResult()->GetHeaders(),
        httpOutcome.GetResult()->GetResponseCode()));

    else
        return JsonOutcome(AmazonWebServiceResult<JsonValue>(JsonValue(), httpOutcome.GetResult()->GetHeaders()));
}

JsonOutcome AWSJsonClient::MakeRequest(const Aws::Http::URI& uri,
    Http::HttpMethod method,
    const char* signerName,
    const char* requestName) const
{
    HttpResponseOutcome httpOutcome(BASECLASS::AttemptExhaustively(uri, method, signerName, requestName));
    if (!httpOutcome.IsSuccess())
    {
        return JsonOutcome(httpOutcome.GetError());
    }

    if (httpOutcome.GetResult()->GetResponseBody().tellp() > 0)
    {
        JsonValue jsonValue(httpOutcome.GetResult()->GetResponseBody());
        if (!jsonValue.WasParseSuccessful())
        {
            return JsonOutcome(AWSError<CoreErrors>(CoreErrors::UNKNOWN, "Json Parser Error", jsonValue.GetErrorMessage(), false));
        }

        //this is stupid, but gcc doesn't pick up the covariant on the dereference so we have to give it a little hint.
        return JsonOutcome(AmazonWebServiceResult<JsonValue>(std::move(jsonValue),
            httpOutcome.GetResult()->GetHeaders(),
            httpOutcome.GetResult()->GetResponseCode()));
    }

    return JsonOutcome(AmazonWebServiceResult<JsonValue>(JsonValue(), httpOutcome.GetResult()->GetHeaders()));
}


static bool isRetryableHttpResponseCode(HttpResponseCode responseCode)
{
    return
        responseCode == HttpResponseCode::INTERNAL_SERVER_ERROR ||
        responseCode == HttpResponseCode::SERVICE_UNAVAILABLE ||
        responseCode == HttpResponseCode::GATEWAY_TIMEOUT;
}

AWSError<CoreErrors> AWSJsonClient::BuildAWSError(
    const std::shared_ptr<Aws::Http::HttpResponse>& httpResponse) const
{
    AWSError<CoreErrors> error;
    if (!httpResponse)
    {
        error = AWSError<CoreErrors>(CoreErrors::NETWORK_CONNECTION, "", "Unable to connect to endpoint", true);
        return error;
    }
    
    else if (!httpResponse->GetResponseBody() || httpResponse->GetResponseBody().tellp() < 1)
    {
        auto responseCode = httpResponse->GetResponseCode();
        auto errorCode = GuessBodylessErrorType(responseCode);

        Aws::StringStream ss;
        ss << "No response body. Response code: " << static_cast< uint32_t >(responseCode);
        AWS_LOGSTREAM_ERROR(AWS_CLIENT_LOG_TAG, ss.str().c_str());
        error = AWSError<CoreErrors>(errorCode, "", ss.str(),
            isRetryableHttpResponseCode(responseCode));
    }
    else
    {
        assert(httpResponse->GetResponseCode() != HttpResponseCode::OK);
        error = GetErrorMarshaller()->Marshall(*httpResponse);
    }

    error.SetResponseHeaders(httpResponse->GetHeaders());
    error.SetResponseCode(httpResponse->GetResponseCode());

    return error;
}

/////////////////////////////////////////////////////////////////////////////////////////
AWSXMLClient::AWSXMLClient(const Aws::Client::ClientConfiguration& configuration,
    const std::shared_ptr<Aws::Client::AWSAuthSigner>& signer,
    const std::shared_ptr<AWSErrorMarshaller>& errorMarshaller) :
    BASECLASS(configuration, signer, errorMarshaller)
{
}

AWSXMLClient::AWSXMLClient(const Aws::Client::ClientConfiguration& configuration,
    const std::shared_ptr<Aws::Auth::AWSAuthSignerProvider>& signerProvider,
    const std::shared_ptr<AWSErrorMarshaller>& errorMarshaller) :
    BASECLASS(configuration, signerProvider, errorMarshaller)
{
}

XmlOutcome AWSXMLClient::MakeRequest(const Aws::Http::URI& uri,
    const Aws::AmazonWebServiceRequest& request,
    Http::HttpMethod method,
    const char* signerName) const
{
    HttpResponseOutcome httpOutcome(BASECLASS::AttemptExhaustively(uri, request, method, signerName));
    if (!httpOutcome.IsSuccess())
    {
        return XmlOutcome(httpOutcome.GetError());
    }

    if (httpOutcome.GetResult()->GetResponseBody().tellp() > 0)
    {
        XmlDocument xmlDoc = XmlDocument::CreateFromXmlStream(httpOutcome.GetResult()->GetResponseBody());

        if (!xmlDoc.WasParseSuccessful())
        {
            AWS_LOGSTREAM_ERROR(AWS_CLIENT_LOG_TAG, "Xml parsing for error failed with message " << xmlDoc.GetErrorMessage().c_str());
            return AWSError<CoreErrors>(CoreErrors::UNKNOWN, "Xml Parse Error", xmlDoc.GetErrorMessage(), false);
        }

        return XmlOutcome(AmazonWebServiceResult<XmlDocument>(std::move(xmlDoc),
            httpOutcome.GetResult()->GetHeaders(), httpOutcome.GetResult()->GetResponseCode()));
    }

    return XmlOutcome(AmazonWebServiceResult<XmlDocument>(XmlDocument(), httpOutcome.GetResult()->GetHeaders()));
}

XmlOutcome AWSXMLClient::MakeRequest(const Aws::Http::URI& uri,
    Http::HttpMethod method,
    const char* signerName,
    const char* requestName) const
{
    HttpResponseOutcome httpOutcome(BASECLASS::AttemptExhaustively(uri, method, signerName, requestName));
    if (!httpOutcome.IsSuccess())
    {
        return XmlOutcome(httpOutcome.GetError());
    }

    if (httpOutcome.GetResult()->GetResponseBody().tellp() > 0)
    {
        return XmlOutcome(AmazonWebServiceResult<XmlDocument>(
            XmlDocument::CreateFromXmlStream(httpOutcome.GetResult()->GetResponseBody()),
            httpOutcome.GetResult()->GetHeaders(), httpOutcome.GetResult()->GetResponseCode()));
    }

    return XmlOutcome(AmazonWebServiceResult<XmlDocument>(XmlDocument(), httpOutcome.GetResult()->GetHeaders()));
}

AWSError<CoreErrors> AWSXMLClient::BuildAWSError(const std::shared_ptr<Http::HttpResponse>& httpResponse) const
{    
    if (!httpResponse)
    {
        return AWSError<CoreErrors>(CoreErrors::NETWORK_CONNECTION, "", "Unable to connect to endpoint", true);
    }

    AWSError<CoreErrors> error;

    if (httpResponse->GetResponseBody().tellp() < 1)
    {
        auto responseCode = httpResponse->GetResponseCode();
        auto errorCode = GuessBodylessErrorType(responseCode);

        Aws::StringStream ss;
        ss << "No response body. Response code: " << static_cast< uint32_t >(responseCode);
        AWS_LOGSTREAM_ERROR(AWS_CLIENT_LOG_TAG, ss.str().c_str());
        error = AWSError<CoreErrors>(errorCode, "", ss.str(),
            isRetryableHttpResponseCode(responseCode));
    }
    else
    {
        assert(httpResponse->GetResponseCode() != HttpResponseCode::OK);

        // When trying to build an AWS Error from a response which is an FStream, we need to rewind the
        // file pointer back to the beginning in order to correctly read the input using the XML string iterator
        if ((httpResponse->GetResponseBody().tellp() > 0)
            && (httpResponse->GetResponseBody().tellg() > 0))
        {
            httpResponse->GetResponseBody().seekg(0);
        }

        error = GetErrorMarshaller()->Marshall(*httpResponse);
    }

    error.SetResponseHeaders(httpResponse->GetHeaders());
    error.SetResponseCode(httpResponse->GetResponseCode());
    return error;
}
