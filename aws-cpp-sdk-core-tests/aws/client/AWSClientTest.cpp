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

#define AWS_DISABLE_DEPRECATION
#include <aws/external/gtest.h>
#include <aws/core/http/standard/StandardHttpRequest.h>
#include <aws/core/http/standard/StandardHttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/Globals.h>
#include <aws/testing/mocks/http/MockHttpClient.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/testing/mocks/aws/client/MockAWSClient.h>
#include <aws/testing/platform/PlatformTesting.h>
#include <aws/core/platform/FileSystem.h>
#include <aws/core/auth/AWSCredentialsProvider.h>
#include <aws/core/platform/Environment.h>
#include <fstream>

using Aws::Utils::DateTime;
using Aws::Utils::DateFormat;

static const char ALLOCATION_TAG[] = "AWSClientTest";

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
        auto httpResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, httpRequest);
        httpResponse->SetResponseCode(code);
        httpResponse->GetResponseBody() << "";
        for(auto&& header : headers)
        {
            httpResponse->AddHeader(header.first, header.second);
        }
        mockHttpClient->AddResponseToReturn(httpResponse);
    }
};

class AWSConfigTestSuite : public ::testing::Test
{
protected:
    Aws::String m_storedAwsConfigFileEnvVar;

    void SetUp()
    {
        m_storedAwsConfigFileEnvVar = Aws::Environment::GetEnv("AWS_CONFIG_FILE");
        auto profileDirectory = Aws::Auth::ProfileConfigFileAWSCredentialsProvider::GetProfileDirectory();
        Aws::FileSystem::CreateDirectoryIfNotExists(profileDirectory.c_str());
    }

    void TearDown()
    {
        if(m_storedAwsConfigFileEnvVar.empty())
        {
            Aws::Environment::UnSetEnv("AWS_CONFIG_FILE");
        }
        else
        {
            Aws::Environment::SetEnv("AWS_CONFIG_FILE", m_storedAwsConfigFileEnvVar.c_str(), 1/*override*/);
        }
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

TEST(AWSClientTest, TestHostHeaderWithNonStandardHttpPort)
{
    Standard::StandardHttpRequest r1("http://example.amazonaws.com:8080", HttpMethod::HTTP_GET);
    auto host = r1.GetHeaderValue(Aws::Http::HOST_HEADER);
    ASSERT_STREQ("example.amazonaws.com:8080", host.c_str());

    Standard::StandardHttpRequest r2("https://example.amazonaws.com:8888", HttpMethod::HTTP_GET);
    host = r2.GetHeaderValue(Aws::Http::HOST_HEADER);
    ASSERT_STREQ("example.amazonaws.com:8888", host.c_str());
}

TEST(AWSClientTest, TestHostHeaderWithStandardHttpPort)
{
    Standard::StandardHttpRequest r1("http://example.amazonaws.com:80", HttpMethod::HTTP_GET);
    auto host = r1.GetHeaderValue(Aws::Http::HOST_HEADER);
    ASSERT_STREQ("example.amazonaws.com", host.c_str());

    // 443 without HTTPS
    Standard::StandardHttpRequest r2("http://example.amazonaws.com:443", HttpMethod::HTTP_GET);
    host = r2.GetHeaderValue(Aws::Http::HOST_HEADER);
    ASSERT_STREQ("example.amazonaws.com:443", host.c_str());

    Standard::StandardHttpRequest r3("https://example.amazonaws.com:443", HttpMethod::HTTP_GET);
    host = r3.GetHeaderValue(Aws::Http::HOST_HEADER);
    ASSERT_STREQ("example.amazonaws.com", host.c_str());

    // HTTPS with port 80
    Standard::StandardHttpRequest r4("https://example.amazonaws.com:80", HttpMethod::HTTP_GET);
    host = r4.GetHeaderValue(Aws::Http::HOST_HEADER);
    ASSERT_STREQ("example.amazonaws.com:80", host.c_str());
}

TEST(AWSClientTest, TestOverflowContainer)
{
    auto container = Aws::GetEnumOverflowContainer();
    const auto hashcode = 42;
    const auto enumValue = "hunter2";
    container->StoreOverflow(hashcode, enumValue);
    ASSERT_STREQ(enumValue, container->RetrieveOverflow(hashcode).c_str());
}

TEST_F(AWSConfigTestSuite, TestClientConfigurationWithNonExistentProfile)
{
    // create a config file with profile named Dijkstra
    Aws::String configFileName = Aws::Auth::GetConfigProfileFilename() + "Test";
    Aws::Environment::SetEnv("AWS_CONFIG_FILE", configFileName.c_str(), 1/*overwrite*/);

    Aws::OFStream configFileNew(configFileName.c_str(), Aws::OFStream::out | Aws::OFStream::trunc);
    configFileNew << "[Dijkstra]" << std::endl;
    configFileNew << "region = " << Aws::Region::US_WEST_2 << std::endl;

    configFileNew.flush();
    configFileNew.close();

    Aws::Client::ClientConfiguration config("Edsger");
    EXPECT_EQ(Aws::Region::US_EAST_1, config.region);

    // cleanup
    Aws::Environment::UnSetEnv("AWS_CONFIG_FILE");
    Aws::FileSystem::RemoveFileIfExists(configFileName.c_str());
}

TEST_F(AWSConfigTestSuite, TestClientConfigurationWithNonExistentConfigFile)
{
    Aws::Environment::SetEnv("AWS_CONFIG_FILE", "WhatAreTheChances", 1/*overwrite*/);

    Aws::Client::ClientConfiguration config("default");
    EXPECT_EQ(Aws::Region::US_EAST_1, config.region);
    Aws::Environment::UnSetEnv("AWS_CONFIG_FILE");
}

TEST_F(AWSConfigTestSuite, TestClientConfigurationSetsRegionToProfile)
{
    // create a config file with profile named Dijkstra
    Aws::String configFileName = Aws::Auth::GetConfigProfileFilename() + "Test";
    Aws::Environment::SetEnv("AWS_CONFIG_FILE", configFileName.c_str(), 1/*overwrite*/);

    Aws::OFStream configFileNew(configFileName.c_str(), Aws::OFStream::out | Aws::OFStream::trunc);
    configFileNew << "[Dijkstra]" << std::endl;
    configFileNew << "region = " << Aws::Region::US_WEST_2 << std::endl;

    configFileNew.flush();
    configFileNew.close();

    Aws::Client::ClientConfiguration config("Dijkstra");
    EXPECT_EQ(Aws::Region::US_WEST_2, config.region);

    // cleanup
    Aws::Environment::UnSetEnv("AWS_CONFIG_FILE");
    Aws::FileSystem::RemoveFileIfExists(configFileName.c_str());
}
