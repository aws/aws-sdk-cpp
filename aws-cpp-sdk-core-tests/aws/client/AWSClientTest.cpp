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

#include <aws/external/gtest.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/DefaultRetryStrategy.h>
#include <aws/core/AmazonWebServiceRequest.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/auth/AWSCredentialsProvider.h>
#include <aws/core/http/standard/StandardHttpRequest.h>
#include <aws/core/http/standard/StandardHttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/utils/memory/stl/AWSAllocator.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/Outcome.h>
#include <aws/testing/mocks/http/MockHttpClient.h>

using namespace Aws::Client;
using namespace Aws::Http::Standard;
using namespace Aws::Http;
using namespace Aws;
using Aws::Utils::DateTime;
using Aws::Utils::DateFormat;

const char* ALLOCATION_TAG = "AWSClientTest";

class AccessViolatingAWSClient : public AWSClient
{
public:
    AccessViolatingAWSClient() : AWSClient(
        ClientConfiguration(), std::shared_ptr<Aws::Auth::AWSAuthSignerProvider>(), nullptr)
    {
    }

    void InvokeBuildHttpRequest(const AmazonWebServiceRequest& request,
        const std::shared_ptr<HttpRequest>& httpRequest) const
    {
        BuildHttpRequest(request, httpRequest);
    }

protected:
    //we don't actually need this for anything, it's just here so we can compile.
    AWSError<CoreErrors> BuildAWSError(const std::shared_ptr<Aws::Http::HttpResponse>& response) const override
    {
        AWS_UNREFERENCED_PARAM(response);
        return AWSError<CoreErrors>(CoreErrors::INVALID_ACTION, false);
    }
};

 
class AmazonWebServiceRequestMock : public AmazonWebServiceRequest
{
public:
    AmazonWebServiceRequestMock() : m_shouldComputeMd5(false) { }
    std::shared_ptr<Aws::IOStream> GetBody() const override { return m_body; }
    void SetBody(const std::shared_ptr<Aws::IOStream>& body) { m_body = body; }
    HeaderValueCollection GetHeaders() const override { return m_headers; }
    void SetHeaders(const HeaderValueCollection& value) { m_headers = value; }
    bool ShouldComputeContentMd5() const override { return m_shouldComputeMd5; }
    void SetComputeContentMd5(bool value) { m_shouldComputeMd5 = value; }
    virtual const char* GetServiceRequestName() const override { return "AmazonWebServiceRequestMock"; }

private:
    std::shared_ptr<Aws::IOStream> m_body;
    HeaderValueCollection m_headers;
    bool m_shouldComputeMd5;
};

class CountedRetryStrategy : public DefaultRetryStrategy
{
public:
    CountedRetryStrategy() : m_attemptedRetries(0) {}
    bool ShouldRetry(const AWSError<CoreErrors>& error, long attemptedRetries) const override
    {
        if(DefaultRetryStrategy::ShouldRetry(error, attemptedRetries)) 
        {
            m_attemptedRetries = attemptedRetries + 1;
            return true;
        }
        return false;
    }
    int GetAttemptedRetriesCount() { return m_attemptedRetries; }
    void ResetAttemptedRetriesCount() { m_attemptedRetries = 0; }
private:
    mutable int m_attemptedRetries;
};

class MockAWSClient : AWSClient
{
    using DateTime = Aws::Utils::DateTime;
    using DateFormat = Aws::Utils::DateFormat;

public:
    MockAWSClient(const ClientConfiguration& config) : AWSClient(config, 
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, 
                Aws::MakeShared<Aws::Auth::SimpleAWSCredentialsProvider>(ALLOCATION_TAG, "AKIDEXAMPLE", 
                    "wJalrXUtnFEMI/K7MDENG+bPxRfiCYEXAMPLEKEY"), "service", "us-east-1"), nullptr) , 
        m_countedRetryStrategy(std::static_pointer_cast<CountedRetryStrategy>(config.retryStrategy)) { }

    Aws::Client::HttpResponseOutcome MakeRequest(const AmazonWebServiceRequest& request)
    {
        m_countedRetryStrategy->ResetAttemptedRetriesCount();
        const URI uri("domain.com/something");
        const auto method = HttpMethod::HTTP_GET;
        HttpResponseOutcome httpOutcome(AWSClient::AttemptExhaustively(uri, request, method, Aws::Auth::SIGV4_SIGNER));
        return httpOutcome;
    }

    int GetRequestAttemptedRetries()
    {
        return m_countedRetryStrategy->GetAttemptedRetriesCount();
    }

protected:
    std::shared_ptr<CountedRetryStrategy> m_countedRetryStrategy;
    AWSError<CoreErrors> BuildAWSError(const std::shared_ptr<HttpResponse>& response) const override
    {
        if (!response)
        {
            auto err = AWSError<CoreErrors>(CoreErrors::NETWORK_CONNECTION, "", "Unable to connect to endpoint", true);
            err.SetResponseCode(HttpResponseCode::INTERNAL_SERVER_ERROR);
            return err;
        }
        auto err = AWSError<CoreErrors>(CoreErrors::INVALID_ACTION, false);
        err.SetResponseHeaders(response->GetHeaders());
        err.SetResponseCode(response->GetResponseCode());
        return err;
    }
};

class AWSClientTestSuite : public ::testing::Test
{
protected:
    std::shared_ptr<MockHttpClient> mockHttpClient;
    std::shared_ptr<MockHttpClientFactory> mockHttpClientFactory;
    Aws::UniquePtr<MockAWSClient> client;

    void SetUp()
    {
        ClientConfiguration config;
        config.scheme = Scheme::HTTP;
        config.connectTimeoutMs = 30000;
        config.requestTimeoutMs = 30000;           
        auto countedRetryStrategy = Aws::MakeShared<CountedRetryStrategy>(ALLOCATION_TAG);
        config.retryStrategy = std::static_pointer_cast<DefaultRetryStrategy>(countedRetryStrategy);

        mockHttpClient = Aws::MakeShared<MockHttpClient>(ALLOCATION_TAG);
        mockHttpClientFactory = Aws::MakeShared<MockHttpClientFactory>(ALLOCATION_TAG);
        mockHttpClientFactory->SetClient(mockHttpClient);
        SetHttpClientFactory(mockHttpClientFactory);
        client = Aws::MakeUnique<MockAWSClient>(ALLOCATION_TAG, config);
    }

    void TearDown()
    {
        client = nullptr;
        mockHttpClient = nullptr;
        mockHttpClientFactory = nullptr;

        CleanupHttp();
        InitHttp();
    }

    void QueueMockResponse(HttpResponseCode code, const HeaderValueCollection& headers)
    {
        auto httpRequest = CreateHttpRequest(URI("http://www.uri.com/path/to/res"), 
                HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        auto httpResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, *httpRequest);
        httpResponse->SetResponseCode(code);
        httpResponse->GetResponseBody() << "";
        for(auto&& header : headers)
        {
            httpResponse->AddHeader(header.first, header.second);
        }
        mockHttpClient->AddResponseToReturn(httpResponse);
    }
};

TEST_F(AWSClientTestSuite, TestClockSkewOutsideAcceptableRange)
{
    HeaderValueCollection responseHeaders, requestHeaders;
    responseHeaders.emplace("Date", (DateTime::Now() + std::chrono::hours(1)).ToGmtString(DateFormat::RFC822)); // server is ahead of us by 1 hour
    AmazonWebServiceRequestMock request;
    requestHeaders.emplace("X-Amz-Date", DateTime::Now().ToGmtString(DateFormat::ISO_8601));
    request.SetHeaders(requestHeaders);
    QueueMockResponse(HttpResponseCode::BAD_REQUEST, responseHeaders);
    QueueMockResponse(HttpResponseCode::BAD_REQUEST, responseHeaders);
    auto outcome = client->MakeRequest(request);
    ASSERT_FALSE(outcome.IsSuccess());
    ASSERT_EQ(1, client->GetRequestAttemptedRetries());
}

TEST_F(AWSClientTestSuite, TestClockSkewWithinAcceptableRange)
{
    HeaderValueCollection responseHeaders, requestHeaders;
    responseHeaders.emplace("Date", (DateTime::Now() + std::chrono::minutes(2)).ToGmtString(DateFormat::RFC822)); // server is ahead of us by 2 minutes
    AmazonWebServiceRequestMock request;
    requestHeaders.emplace("X-Amz-Date", DateTime::Now().ToGmtString(DateFormat::ISO_8601));
    request.SetHeaders(requestHeaders);
    QueueMockResponse(HttpResponseCode::BAD_REQUEST, responseHeaders);
    auto outcome = client->MakeRequest(request);
    ASSERT_FALSE(outcome.IsSuccess());
    ASSERT_EQ(0, client->GetRequestAttemptedRetries());
}

TEST_F(AWSClientTestSuite, TestClockSkewConsecutiveRequests)
{
    // first request should set the skew offset and retry, but following requests should not
    HeaderValueCollection responseHeaders, requestHeaders;
    responseHeaders.emplace("Date", (DateTime::Now() + std::chrono::hours(1)).ToGmtString(DateFormat::RFC822)); // server is ahead of us by 1 hour
    AmazonWebServiceRequestMock request;
    requestHeaders.emplace("X-Amz-Date", DateTime::Now().ToGmtString(DateFormat::ISO_8601));
    request.SetHeaders(requestHeaders);
    QueueMockResponse(HttpResponseCode::BAD_REQUEST, responseHeaders);
    QueueMockResponse(HttpResponseCode::BAD_REQUEST, responseHeaders);
    auto outcome = client->MakeRequest(request);
    ASSERT_FALSE(outcome.IsSuccess());
    ASSERT_EQ(1, client->GetRequestAttemptedRetries());

    QueueMockResponse(HttpResponseCode::UNAUTHORIZED, responseHeaders);
    outcome = client->MakeRequest(request);
    ASSERT_FALSE(outcome.IsSuccess()); // should _not_ attempt to adjust clock skew and retry the request.
    ASSERT_EQ(HttpResponseCode::UNAUTHORIZED, outcome.GetError().GetResponseCode());
    ASSERT_EQ(0, client->GetRequestAttemptedRetries());

    QueueMockResponse(HttpResponseCode::FORBIDDEN, responseHeaders);
    outcome = client->MakeRequest(request);
    ASSERT_FALSE(outcome.IsSuccess()); // should _not_ attempt to adjust clock skew and retry the request.
    ASSERT_EQ(HttpResponseCode::FORBIDDEN, outcome.GetError().GetResponseCode());
    ASSERT_EQ(0, client->GetRequestAttemptedRetries()); 
}

TEST_F(AWSClientTestSuite, TestClockChangesAfterSkewHasBeenSet)
{
    // after making a request with a skewed clock, the client adjusts for the client's clock skew. However, 
    // later the client's clock is corrected via NTP for example or skewed even further. 
    // The skew should reflect the clock's changes.

    // make an initial request so that a skew adjustment is set
    HeaderValueCollection responseHeaders, requestHeaders;
    responseHeaders.emplace("Date", (DateTime::Now() + std::chrono::hours(1)).ToGmtString(DateFormat::RFC822)); // server is ahead of us by 1 hour
    AmazonWebServiceRequestMock request;
    requestHeaders.emplace("X-Amz-Date", DateTime::Now().ToGmtString(DateFormat::ISO_8601));
    request.SetHeaders(requestHeaders);
    QueueMockResponse(HttpResponseCode::BAD_REQUEST, responseHeaders);
    QueueMockResponse(HttpResponseCode::BAD_REQUEST, responseHeaders);
    auto outcome = client->MakeRequest(request);
    ASSERT_FALSE(outcome.IsSuccess());
    ASSERT_EQ(1, client->GetRequestAttemptedRetries());

    // make another request with the clock skewed even further
    responseHeaders.clear();
    responseHeaders.emplace("Date", (DateTime::Now() + std::chrono::hours(2)).ToGmtString(DateFormat::RFC822)); // server is ahead of us by 2 hours
    QueueMockResponse(HttpResponseCode::FORBIDDEN, responseHeaders);
    QueueMockResponse(HttpResponseCode::FORBIDDEN, responseHeaders);
    outcome = client->MakeRequest(request);
    ASSERT_FALSE(outcome.IsSuccess()); 
    ASSERT_EQ(1, client->GetRequestAttemptedRetries());

    // make another request with the clock in sync with the server
    responseHeaders.clear();
    responseHeaders.emplace("Date", DateTime::Now().ToGmtString(DateFormat::RFC822)); // server is in sync with client
    QueueMockResponse(HttpResponseCode::FORBIDDEN, responseHeaders);
    QueueMockResponse(HttpResponseCode::FORBIDDEN, responseHeaders);
    outcome = client->MakeRequest(request);
    ASSERT_FALSE(outcome.IsSuccess()); 
    ASSERT_EQ(1, client->GetRequestAttemptedRetries());
}

TEST(AWSClientTest, TestBuildHttpRequestWithHeadersOnly)
{
    HeaderValueCollection headerValues;
    headerValues["test1"] = "testValue1";
    headerValues["test2"] = "testValue2";

    AmazonWebServiceRequestMock amazonWebServiceRequest;
    amazonWebServiceRequest.SetHeaders(headerValues);

    URI uri("http://www.uri.com");
    std::shared_ptr<Standard::StandardHttpRequest> httpRequest = Aws::MakeShared<Standard::StandardHttpRequest>(ALLOCATION_TAG, uri, HttpMethod::HTTP_GET);

    //content-length and content-type should never be added if body is not set. if they are there they should be removed.
    AccessViolatingAWSClient awsClient;
    awsClient.InvokeBuildHttpRequest(amazonWebServiceRequest, httpRequest);

    ASSERT_TRUE(httpRequest->HasHeader("test1"));
    ASSERT_TRUE(httpRequest->HasHeader("test2"));
    ASSERT_TRUE(httpRequest->HasHeader(Http::USER_AGENT_HEADER));
    ASSERT_TRUE(httpRequest->HasHeader(Http::HOST_HEADER));
    ASSERT_FALSE(httpRequest->HasHeader(Http::CONTENT_TYPE_HEADER));
    ASSERT_FALSE(httpRequest->HasHeader(Http::CONTENT_LENGTH_HEADER));

    HeaderValueCollection finalHeaders = httpRequest->GetHeaders();
    ASSERT_EQ(4u, finalHeaders.size());
    ASSERT_EQ("testValue1", finalHeaders["test1"]);
    ASSERT_EQ("testValue2", finalHeaders["test2"]);
    ASSERT_EQ("www.uri.com", finalHeaders[Http::HOST_HEADER]);
    ASSERT_FALSE(finalHeaders[Http::USER_AGENT_HEADER].empty());

    headerValues[Http::CONTENT_LENGTH_HEADER] = "0";
    headerValues[Http::CONTENT_TYPE_HEADER] = "blah";

    httpRequest = Aws::MakeShared<Standard::StandardHttpRequest>(ALLOCATION_TAG, uri, HttpMethod::HTTP_GET);
    awsClient.InvokeBuildHttpRequest(amazonWebServiceRequest, httpRequest);

    ASSERT_TRUE(httpRequest->HasHeader("test1"));
    ASSERT_TRUE(httpRequest->HasHeader("test2"));
    ASSERT_TRUE(httpRequest->HasHeader(Http::USER_AGENT_HEADER));
    ASSERT_TRUE(httpRequest->HasHeader(Http::HOST_HEADER));
    ASSERT_FALSE(httpRequest->HasHeader(Http::CONTENT_TYPE_HEADER));
    ASSERT_FALSE(httpRequest->HasHeader(Http::CONTENT_LENGTH_HEADER));

    finalHeaders = httpRequest->GetHeaders();
    ASSERT_EQ(4u, finalHeaders.size());
    ASSERT_EQ("testValue1", finalHeaders["test1"]);
    ASSERT_EQ("testValue2", finalHeaders["test2"]);
    ASSERT_EQ("www.uri.com", finalHeaders[Http::HOST_HEADER]);
    ASSERT_FALSE(finalHeaders[Http::USER_AGENT_HEADER].empty());
	}

TEST(AWSClientTest, TestBuildHttpRequestWithHeadersAndBody)
{
    HeaderValueCollection headerValues;
    headerValues["test1"] = "testValue1";
    headerValues["test2"] = "testValue2";

    AmazonWebServiceRequestMock amazonWebServiceRequest;
    amazonWebServiceRequest.SetHeaders(headerValues);
    amazonWebServiceRequest.SetComputeContentMd5(true);

    std::shared_ptr<Aws::StringStream> ss = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG);
    *ss << "test";
    amazonWebServiceRequest.SetBody(ss);

    URI uri("http://www.uri.com");
    std::shared_ptr<Standard::StandardHttpRequest> httpRequest = Aws::MakeShared<Standard::StandardHttpRequest>(ALLOCATION_TAG, uri, HttpMethod::HTTP_GET);

    //content-length should be added if body is set. If it is not there is should be added.
    AccessViolatingAWSClient awsClient;
    awsClient.InvokeBuildHttpRequest(amazonWebServiceRequest, httpRequest);

    ASSERT_TRUE(httpRequest->HasHeader("test1"));
    ASSERT_TRUE(httpRequest->HasHeader("test2"));
    ASSERT_TRUE(httpRequest->HasHeader(Http::USER_AGENT_HEADER));
    ASSERT_TRUE(httpRequest->HasHeader(Http::HOST_HEADER));
    ASSERT_TRUE(httpRequest->HasHeader(Http::CONTENT_LENGTH_HEADER));
    ASSERT_TRUE(httpRequest->HasHeader(Http::CONTENT_MD5_HEADER));

    auto hashResult = Utils::HashingUtils::Base64Encode(Utils::HashingUtils::CalculateMD5(*ss));

    HeaderValueCollection finalHeaders = httpRequest->GetHeaders();
    ASSERT_EQ(6u, finalHeaders.size());
    ASSERT_EQ("testValue1", finalHeaders["test1"]);
    ASSERT_EQ("testValue2", finalHeaders["test2"]);
    ASSERT_EQ("www.uri.com", finalHeaders[Http::HOST_HEADER]);
    ASSERT_EQ(hashResult, finalHeaders[Http::CONTENT_MD5_HEADER]);
    ASSERT_FALSE(finalHeaders[Http::USER_AGENT_HEADER].empty());

    Aws::StringStream contentLengthExpected;
    contentLengthExpected << ss->str().length();
    ASSERT_EQ(contentLengthExpected.str(), finalHeaders[Http::CONTENT_LENGTH_HEADER]);  
}
