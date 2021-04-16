/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

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
#include <aws/core/auth/AWSCredentialsProvider.h>
#include <fstream>
#include <thread>
#include <aws/core/utils/logging/LogMacros.h>

// TODO: temporary fix for naming conflicts for Windows.
#ifdef _WIN32
#ifdef GetMessage
#undef GetMessage
#endif
#endif

using namespace Aws;
using namespace Aws::Client;
using namespace Aws::Http;
using namespace Aws::Http::Standard;

using Aws::Utils::DateTime;
using Aws::Utils::DateFormat;
using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Http::Standard;

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
        httpRequest->SetResolvedRemoteHost("127.0.0.1");
        auto httpResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, httpRequest);
        httpResponse->SetResponseCode(code);
        httpResponse->GetResponseBody() << "";
        for(auto&& header : headers)
        {
            httpResponse->AddHeader(header.first, header.second);
        }
        mockHttpClient->AddResponseToReturn(httpResponse);
    }

    void QueueMockResponse(const AWSError<CoreErrors>& clientError, const HeaderValueCollection& headers)
    {
        auto httpRequest = CreateHttpRequest(URI("http://www.uri.com/path/to/res"),
                HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        auto httpResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, httpRequest);
        httpResponse->SetClientErrorType(clientError.GetErrorType());
        httpResponse->SetClientErrorMessage(clientError.GetMessage());
        httpResponse->GetResponseBody() << "";
        for(auto&& header : headers)
        {
            httpResponse->AddHeader(header.first, header.second);
        }
        mockHttpClient->AddResponseToReturn(httpResponse);
    }

    Aws::String ExtractFromRequestInfo(const Aws::String& requestInfo, const Aws::String& key)
    {
        auto iter = requestInfo.find(key + "=");
        if (iter == Aws::String::npos)
        {
            return {};
        }
        Aws::String substr = requestInfo.substr(iter + key.size() + 1);
        substr.erase(std::find_if(substr.begin(), substr.end(), [](char ch) {return ch == ';';} ), substr.end());
        return substr;
    }
};

class AWSConfigTestSuite : public ::testing::Test
{
protected:
    void SetUp()
    {
        SaveEnvironmentVariable("AWS_CONFIG_FILE");
        SaveEnvironmentVariable("AWS_DEFAULT_PROFILE");
        SaveEnvironmentVariable("AWS_PROFILE");
        SaveEnvironmentVariable("AWS_DEFAULT_REGION");
        SaveEnvironmentVariable("AWS_REGION");

        Aws::StringStream ss;
        ss << Aws::Auth::GetConfigProfileFilename() + "_blah" << std::this_thread::get_id();
        m_configFileName = ss.str();
        Aws::Environment::SetEnv("AWS_CONFIG_FILE", m_configFileName.c_str(), 1);
        Aws::Environment::UnSetEnv("AWS_DEFAULT_PROFILE");
        Aws::Environment::UnSetEnv("AWS_PROFILE");
        Aws::Environment::UnSetEnv("AWS_DEFAULT_REGION");
        Aws::Environment::UnSetEnv("AWS_REGION");

        auto profileDirectory = Aws::Auth::ProfileConfigFileAWSCredentialsProvider::GetProfileDirectory();
        Aws::FileSystem::CreateDirectoryIfNotExists(profileDirectory.c_str());
    }

    void TearDown()
    {
        RestoreEnvironmentVariables();
     }

    void SaveEnvironmentVariable(const char* variableName)
    {
        m_environment.emplace_back(variableName, Aws::Environment::GetEnv(variableName));
    }

    void RestoreEnvironmentVariables()
    {
        for(const auto& iter : m_environment)
        {
            if(iter.second.empty())
            {
                Aws::Environment::UnSetEnv(iter.first);
            }
            else
            {
                Aws::Environment::SetEnv(iter.first, iter.second.c_str(), 1/*override*/);
            }
        }
    }

    Aws::Vector<std::pair<const char*, Aws::String>> m_environment;
    Aws::String m_configFileName;
};

TEST_F(AWSClientTestSuite, TestValidateInvalidURI)
{
    const Aws::Http::URI uri("-west-3.domain.com/something");
    AmazonWebServiceRequestMock request;
    auto outcome = client->MakeRequest(uri, request);
    ASSERT_FALSE(outcome.IsSuccess());
    ASSERT_EQ(CoreErrors::VALIDATION, outcome.GetError().GetErrorType());
}

TEST_F(AWSClientTestSuite, TestClockSkewOutsideAcceptableRange)
{
    HeaderValueCollection responseHeaders;
    responseHeaders.emplace("Date", (DateTime::Now() + std::chrono::hours(1)).ToGmtString(DateFormat::RFC822)); // server is ahead of us by 1 hour
    AmazonWebServiceRequestMock request;
    QueueMockResponse(HttpResponseCode::BAD_REQUEST, responseHeaders);
    QueueMockResponse(HttpResponseCode::BAD_REQUEST, responseHeaders);
    auto outcome = client->MakeRequest(request);
    ASSERT_FALSE(outcome.IsSuccess());
    ASSERT_EQ(1, client->GetRequestAttemptedRetries());
}

TEST_F(AWSClientTestSuite, TestClockSkewWithinAcceptableRange)
{
    HeaderValueCollection responseHeaders;
    responseHeaders.emplace("Date", (DateTime::Now() + std::chrono::minutes(2)).ToGmtString(DateFormat::RFC822)); // server is ahead of us by 2 minutes
    AmazonWebServiceRequestMock request;
    QueueMockResponse(HttpResponseCode::BAD_REQUEST, responseHeaders);
    auto outcome = client->MakeRequest(request);
    ASSERT_FALSE(outcome.IsSuccess());
    ASSERT_EQ(0, client->GetRequestAttemptedRetries());
}

TEST_F(AWSClientTestSuite, TestClockSkewConsecutiveRequests)
{
    // first request should set the skew offset and retry, but following requests should not
    HeaderValueCollection responseHeaders;
    responseHeaders.emplace("Date", (DateTime::Now() + std::chrono::hours(1)).ToGmtString(DateFormat::RFC822)); // server is ahead of us by 1 hour
    AmazonWebServiceRequestMock request;
    QueueMockResponse(HttpResponseCode::BAD_REQUEST, responseHeaders);
    QueueMockResponse(HttpResponseCode::BAD_REQUEST, responseHeaders);
    auto outcome = client->MakeRequest(request);
    ASSERT_FALSE(outcome.IsSuccess());
    ASSERT_EQ(1, client->GetRequestAttemptedRetries());

    QueueMockResponse(HttpResponseCode::UNAUTHORIZED, responseHeaders);
    outcome = client->MakeRequest(request);
    ASSERT_FALSE(outcome.IsSuccess()); // should _not_ attempt to adjust clock skew and retry the request.
    ASSERT_EQ(HttpResponseCode::UNAUTHORIZED, outcome.GetError().GetResponseCode());
    ASSERT_STREQ("127.0.0.1", outcome.GetError().GetRemoteHostIpAddress().c_str());
    ASSERT_EQ(0, client->GetRequestAttemptedRetries());

    QueueMockResponse(HttpResponseCode::FORBIDDEN, responseHeaders);
    outcome = client->MakeRequest(request);
    ASSERT_FALSE(outcome.IsSuccess()); // should _not_ attempt to adjust clock skew and retry the request.
    ASSERT_EQ(HttpResponseCode::FORBIDDEN, outcome.GetError().GetResponseCode());
    ASSERT_STREQ("127.0.0.1", outcome.GetError().GetRemoteHostIpAddress().c_str());
    ASSERT_EQ(0, client->GetRequestAttemptedRetries());
}

TEST_F(AWSClientTestSuite, TestClockChangesAfterSkewHasBeenSet)
{
    // after making a request with a skewed clock, the client adjusts for the client's clock skew. However,
    // later the client's clock is corrected via NTP for example or skewed even further.
    // The skew should reflect the clock's changes.

    // make an initial request so that a skew adjustment is set
    HeaderValueCollection responseHeaders;
    responseHeaders.emplace("Date", (DateTime::Now() + std::chrono::hours(1)).ToGmtString(DateFormat::RFC822)); // server is ahead of us by 1 hour
    AmazonWebServiceRequestMock request;
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

TEST_F(AWSClientTestSuite, TestRetryHeaders)
{
    // The first server time is ahead of us by 1 hour.
    DateTime serverTime1 = DateTime::Now() + std::chrono::hours(1);
    QueueMockResponse(HttpResponseCode::REQUEST_NOT_MADE, HeaderValueCollection{std::make_pair("Date", serverTime1.ToGmtString(DateFormat::RFC822))});
    // The second server time is ahead of us by 2 hour.
    DateTime serverTime2 = DateTime::Now() + std::chrono::hours(2);
    QueueMockResponse(HttpResponseCode::REQUEST_NOT_MADE, HeaderValueCollection{std::make_pair("Date", serverTime2.ToGmtString(DateFormat::RFC822))});
    // The third server time is ahead of us by 3 hour.
    DateTime serverTime3 = DateTime::Now() + std::chrono::hours(3);
    QueueMockResponse(HttpResponseCode::OK, HeaderValueCollection{std::make_pair("Date", serverTime3.ToGmtString(DateFormat::RFC822))});
    AmazonWebServiceRequestMock request;
    auto outcome = client->MakeRequest(request);
    ASSERT_TRUE(outcome.IsSuccess());
    ASSERT_EQ(2, client->GetRequestAttemptedRetries());
    const auto& requests = mockHttpClient->GetAllRequestsMade();
    ASSERT_EQ(3u, requests.size());
    // The first request to send.
    Aws::String invocationId = requests[0].GetHeaders()[Http::SDK_INVOCATION_ID_HEADER];
    Aws::String requestInfo = requests[0].GetHeaders()[Http::SDK_REQUEST_HEADER];
    ASSERT_TRUE(ExtractFromRequestInfo(requestInfo, "ttl").empty());
    ASSERT_STREQ("1", ExtractFromRequestInfo(requestInfo, "attempt").c_str());
    ASSERT_TRUE(ExtractFromRequestInfo(requestInfo, "max").empty());
    // The second request to send.
    ASSERT_STREQ(invocationId.c_str(), requests[1].GetHeaders()[Http::SDK_INVOCATION_ID_HEADER].c_str());
    requestInfo = requests[1].GetHeaders()[Http::SDK_REQUEST_HEADER];
    Aws::String ttl = ExtractFromRequestInfo(requestInfo, "ttl");
    ASSERT_FALSE(ttl.empty());
    auto diff = DateTime::Diff(DateTime(ttl, DateFormat::ISO_8601_BASIC), serverTime1 + std::chrono::milliseconds(30000)); // request timeout is 30,000 ms.
    ASSERT_LT(diff, std::chrono::seconds(2));
    ASSERT_GT(diff, std::chrono::seconds(-2));
    ASSERT_STREQ("2", ExtractFromRequestInfo(requestInfo, "attempt").c_str());
    ASSERT_STREQ("11", ExtractFromRequestInfo(requestInfo, "max").c_str());
    // The third request to send.
    ASSERT_STREQ(invocationId.c_str(), requests[2].GetHeaders()[Http::SDK_INVOCATION_ID_HEADER].c_str());
    requestInfo = requests[2].GetHeaders()[Http::SDK_REQUEST_HEADER];
    ttl = ExtractFromRequestInfo(requestInfo, "ttl");
    ASSERT_FALSE(ttl.empty());
    diff = DateTime::Diff(DateTime(ttl, DateFormat::ISO_8601_BASIC), serverTime2 + std::chrono::milliseconds(30000)); // request timeout is 30,000 ms.
    ASSERT_LT(diff, std::chrono::seconds(2));
    ASSERT_GT(diff, std::chrono::seconds(-2));
    ASSERT_STREQ("3", ExtractFromRequestInfo(requestInfo, "attempt").c_str());
    ASSERT_STREQ("11", ExtractFromRequestInfo(requestInfo, "max").c_str());
}

TEST_F(AWSClientTestSuite, TestRetryURIs)
{
    HeaderValueCollection responseHeaders;
    responseHeaders.emplace("Date", (DateTime::Now() + std::chrono::hours(1)).ToGmtString(DateFormat::RFC822)); // server is ahead of us by 1 hour
    QueueMockResponse(HttpResponseCode::INTERNAL_SERVER_ERROR, responseHeaders);
    QueueMockResponse(HttpResponseCode::INTERNAL_SERVER_ERROR, responseHeaders);
    URI uri("http://www.uri.com/path with space/to/res");
    AmazonWebServiceRequestMock request;
    auto outcome = client->MakeRequest(uri, request);
    ASSERT_FALSE(outcome.IsSuccess());
    ASSERT_EQ(1, client->GetRequestAttemptedRetries());
    const auto& requests = mockHttpClient->GetAllRequestsMade();
    ASSERT_EQ(2u, requests.size());
    // Let's make sure the URIs for each attempt of retries are identical.
    // Especially when we have escape characters in the path: we will not encode the path here, instead, the underlying HTTP client will do that.
    ASSERT_EQ(uri, requests[0].GetUri());
    ASSERT_EQ(uri, requests[1].GetUri());
}

TEST_F(AWSClientTestSuite, TestStandardRetryStrategy)
{
    ClientConfiguration config;
    auto retryQuotaContainer = Aws::MakeShared<DefaultRetryQuotaContainer>(ALLOCATION_TAG); // 500 tokens in total
    auto countedRetryStrategy = Aws::MakeShared<CountedStandardRetryStrategy>(ALLOCATION_TAG, retryQuotaContainer);
    config.retryStrategy = countedRetryStrategy;
    MockAWSClientWithStandardRetryStrategy clientWithStandardRetryStrategy(config);

    // 1. Successful request.
    HeaderValueCollection responseHeaders;
    QueueMockResponse(HttpResponseCode::OK, responseHeaders);
    AmazonWebServiceRequestMock request;
    auto outcome = clientWithStandardRetryStrategy.MakeRequest(request);
    ASSERT_TRUE(outcome.IsSuccess());
    ASSERT_EQ(0, clientWithStandardRetryStrategy.GetRequestAttemptedRetries());
    ASSERT_EQ(500, clientWithStandardRetryStrategy.GetRetryQuotaContainer()->GetRetryQuota());

    // 2. Fail due to max attempts reached.
    AWSError<CoreErrors> connectionError(CoreErrors::NETWORK_CONNECTION, true);
    AWSError<CoreErrors> requestTimeoutError(CoreErrors::REQUEST_TIMEOUT, true);
    QueueMockResponse(connectionError, responseHeaders); // Acquire 5 tokens
    QueueMockResponse(requestTimeoutError, responseHeaders); // Acquire 10 tokens
    QueueMockResponse(connectionError, responseHeaders); // Max attempts reached, will not acquire more tokens
    outcome = clientWithStandardRetryStrategy.MakeRequest(request);
    ASSERT_FALSE(outcome.IsSuccess());
    ASSERT_EQ(2, clientWithStandardRetryStrategy.GetRequestAttemptedRetries());
    ASSERT_EQ(485, clientWithStandardRetryStrategy.GetRetryQuotaContainer()->GetRetryQuota());

    // 3. Retry eventually succeeds.
    QueueMockResponse(connectionError, responseHeaders); // Acquire 5 tokens
    QueueMockResponse(requestTimeoutError, responseHeaders); // Acquire 10 tokens
    QueueMockResponse(HttpResponseCode::OK, responseHeaders); // Release 10 tokens
    outcome = clientWithStandardRetryStrategy.MakeRequest(request);
    ASSERT_TRUE(outcome.IsSuccess());
    ASSERT_EQ(2, clientWithStandardRetryStrategy.GetRequestAttemptedRetries());
    ASSERT_EQ(480, clientWithStandardRetryStrategy.GetRetryQuotaContainer()->GetRetryQuota());

    // 4. Retry Quota reached after a single retry.
    ASSERT_TRUE(clientWithStandardRetryStrategy.GetRetryQuotaContainer()->AcquireRetryQuota(473)); // Acquire 473 tokens
    QueueMockResponse(connectionError, responseHeaders); // Acquire 5 tokens
    QueueMockResponse(connectionError, responseHeaders); // Not able to acquire more tokens
    outcome = clientWithStandardRetryStrategy.MakeRequest(request);
    ASSERT_FALSE(outcome.IsSuccess());
    ASSERT_EQ(1, clientWithStandardRetryStrategy.GetRequestAttemptedRetries());
    ASSERT_EQ(2, clientWithStandardRetryStrategy.GetRetryQuotaContainer()->GetRetryQuota());

    // 5. No retries at all.
    QueueMockResponse(connectionError, responseHeaders); // Acquire 5 tokens
    outcome = clientWithStandardRetryStrategy.MakeRequest(request);
    ASSERT_FALSE(outcome.IsSuccess());
    ASSERT_EQ(0, clientWithStandardRetryStrategy.GetRequestAttemptedRetries());
    ASSERT_EQ(2, clientWithStandardRetryStrategy.GetRetryQuotaContainer()->GetRetryQuota());

    // 6. Successful request.
    QueueMockResponse(HttpResponseCode::OK, responseHeaders); // Release 1 token
    outcome = clientWithStandardRetryStrategy.MakeRequest(request);
    ASSERT_TRUE(outcome.IsSuccess());
    ASSERT_EQ(0, clientWithStandardRetryStrategy.GetRequestAttemptedRetries());
    ASSERT_EQ(3, clientWithStandardRetryStrategy.GetRetryQuotaContainer()->GetRetryQuota());
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
    Aws::OFStream configFileNew(m_configFileName.c_str(), Aws::OFStream::out | Aws::OFStream::trunc);
    configFileNew << "[Dijkstra]" << std::endl;
    configFileNew << "region = " << Aws::Region::US_WEST_2 << std::endl;

    configFileNew.flush();
    configFileNew.close();
    Aws::Config::ReloadCachedConfigFile();

    Aws::Client::ClientConfiguration config("Edsger");
    EXPECT_EQ(Aws::Region::US_EAST_1, config.region);
    EXPECT_STREQ("default", config.profileName.c_str());

    // cleanup
    Aws::FileSystem::RemoveFileIfExists(m_configFileName.c_str());
}

TEST_F(AWSConfigTestSuite, TestClientConfigurationWithNonExistentConfigFile)
{
    Aws::Environment::SetEnv("AWS_CONFIG_FILE", "WhatAreTheChances", 1/*overwrite*/);
    Aws::Config::ReloadCachedConfigFile();

    Aws::Client::ClientConfiguration config("default");
    EXPECT_EQ(Aws::Region::US_EAST_1, config.region);
    EXPECT_STREQ("default", config.profileName.c_str());
}

TEST_F(AWSConfigTestSuite, TestClientConfigurationSetsRegionToProfile)
{
    // create a config file with profile named Dijkstra
    Aws::OFStream configFileNew(m_configFileName.c_str(), Aws::OFStream::out | Aws::OFStream::trunc);
    configFileNew << "[Dijkstra]" << std::endl;
    configFileNew << "region = " << Aws::Region::US_WEST_2 << std::endl;

    configFileNew.flush();
    configFileNew.close();
    Aws::Config::ReloadCachedConfigFile();

    Aws::Client::ClientConfiguration config("Dijkstra");
    EXPECT_EQ(Aws::Region::US_WEST_2, config.region);
    EXPECT_STREQ("Dijkstra", config.profileName.c_str());

    // cleanup
    Aws::FileSystem::RemoveFileIfExists(m_configFileName.c_str());
}

class AWSRegionTest : public ::testing::Test
{
public:
    void SetUp()
    {
        SaveEnvironmentVariable("AWS_CONFIG_FILE");
        SaveEnvironmentVariable("AWS_DEFAULT_PROFILE");
        SaveEnvironmentVariable("AWS_PROFILE");
        SaveEnvironmentVariable("AWS_DEFAULT_REGION");
        SaveEnvironmentVariable("AWS_REGION");
        SaveEnvironmentVariable("AWS_EC2_METADATA_DISABLED");

        Aws::StringStream ss;
        ss << Aws::Auth::GetConfigProfileFilename() + "_blah" << std::this_thread::get_id();
        m_configFileName = ss.str();
        Aws::Environment::SetEnv("AWS_CONFIG_FILE", m_configFileName.c_str(), 1);
        Aws::Environment::UnSetEnv("AWS_DEFAULT_PROFILE");
        Aws::Environment::UnSetEnv("AWS_PROFILE");
        Aws::Environment::UnSetEnv("AWS_DEFAULT_REGION");
        Aws::Environment::UnSetEnv("AWS_REGION");

        auto profileDirectory = ProfileConfigFileAWSCredentialsProvider::GetProfileDirectory();
        Aws::FileSystem::CreateDirectoryIfNotExists(profileDirectory.c_str());
    }

    void TearDown()
    {
        RestoreEnvironmentVariables();
    }

    void SaveEnvironmentVariable(const char* variableName)
    {
        m_environment.emplace_back(variableName, Aws::Environment::GetEnv(variableName));
    }

    void RestoreEnvironmentVariables()
    {
        for(const auto& iter : m_environment)
        {
            if(iter.second.empty())
            {
                Aws::Environment::UnSetEnv(iter.first);
            }
            else
            {
                Aws::Environment::SetEnv(iter.first, iter.second.c_str(), 1);
            }
        }
    }

    Aws::Vector<std::pair<const char*, Aws::String>> m_environment;
    Aws::String m_configFileName;
    std::shared_ptr<MockHttpClient> mockHttpClient;
    std::shared_ptr<MockHttpClientFactory> mockHttpClientFactory;
};

TEST_F(AWSRegionTest, TestResolveRegionFromEnvironment)
{
    Aws::Environment::SetEnv("AWS_DEFAULT_REGION", "my-test-non-existing-region", 1);
    Aws::OFStream configFile(m_configFileName.c_str(), Aws::OFStream::out | Aws::OFStream::trunc);
    configFile << "[default]" << std::endl;
    configFile << "region = cn-north-1" << std::endl;
    configFile.close();

    Aws::Config::ReloadCachedConfigFile();

    Aws::Client::ClientConfiguration config;
    ASSERT_STREQ("my-test-non-existing-region", config.region.c_str());

    Aws::Environment::UnSetEnv("AWS_DEFAULT_REGION");
    Aws::Environment::SetEnv("AWS_REGION", "my-test-another-non-existing-region", 1);

    Aws::Config::ReloadCachedConfigFile();

    Aws::Client::ClientConfiguration anotherConfig;
    ASSERT_STREQ("my-test-another-non-existing-region", anotherConfig.region.c_str());

    Aws::FileSystem::RemoveFileIfExists(m_configFileName.c_str());
}

TEST_F(AWSRegionTest, TestResolveRegionFromConfigFile)
{
    Aws::Environment::UnSetEnv("AWS_DEFAULT_REGION");
    Aws::Environment::UnSetEnv("AWS_REGION");
    Aws::OFStream configFile(m_configFileName.c_str(), Aws::OFStream::out | Aws::OFStream::trunc);
    configFile << "[default]" << std::endl;
    configFile << "region = my-test-non-existing-region-blah" << std::endl;
    configFile.close();

    Aws::Config::ReloadCachedConfigFile();

    Aws::Client::ClientConfiguration config;
    ASSERT_STREQ("my-test-non-existing-region-blah", config.region.c_str());

    Aws::FileSystem::RemoveFileIfExists(m_configFileName.c_str());
}

TEST_F(AWSRegionTest, TestResolveRegionFromEC2InstanceMetadata)
{
    mockHttpClient = Aws::MakeShared<MockHttpClient>(ALLOCATION_TAG);
    mockHttpClientFactory = Aws::MakeShared<MockHttpClientFactory>(ALLOCATION_TAG);
    mockHttpClientFactory->SetClient(mockHttpClient);
    SetHttpClientFactory(mockHttpClientFactory);

    // Region provider is initiated during Aws::Init(), after settting mock http client,
    // we need to re-initiate it.
    Aws::Internal::CleanupEC2MetadataClient();
    Aws::Internal::InitEC2MetadataClient();

    Aws::Environment::UnSetEnv("AWS_DEFAULT_REGION");
    Aws::Environment::UnSetEnv("AWS_REGION");
    // We set AWS_EC2_METADATA_DISABLED=true Aws::Testing::InitPlatformTest, we need to set it to false explicitly for this test.
    Aws::Environment::UnSetEnv("AWS_EC2_METADATA_DISABLED");
    Aws::OFStream configFile(m_configFileName.c_str(), Aws::OFStream::out | Aws::OFStream::trunc);
    configFile << "[default]" << std::endl;
    configFile.close();

    Aws::Config::ReloadCachedConfigFile();

    // This mocked URI is used to initiate http response and has nothing to do with the requested URI actually sent out.
    std::shared_ptr<HttpRequest> regionRequest = CreateHttpRequest(URI("http://169.254.169.254/latest/meta-data/placement/availability-zone"),
            HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
    std::shared_ptr<StandardHttpResponse> regionResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, regionRequest);
    regionResponse->SetResponseCode(HttpResponseCode::OK);
    regionResponse->GetResponseBody() << "us-west-123";
    mockHttpClient->Reset();
    mockHttpClient->AddResponseToReturn(regionResponse);

    Aws::Client::ClientConfiguration config;
    ASSERT_STREQ("us-west-123", config.region.c_str());

    Aws::FileSystem::RemoveFileIfExists(m_configFileName.c_str());

    // Reset Http client factory, and reset region provider to use normal http client.
    mockHttpClient = nullptr;
    mockHttpClientFactory = nullptr;
    CleanupHttp();
    InitHttp();
    Aws::Internal::CleanupEC2MetadataClient();
    Aws::Internal::InitEC2MetadataClient();
}

TEST_F(AWSRegionTest, TestResolveDefaultRegion)
{
    Aws::Environment::UnSetEnv("AWS_DEFAULT_REGION");
    Aws::Environment::UnSetEnv("AWS_REGION");
    Aws::OFStream configFile(m_configFileName.c_str(), Aws::OFStream::out | Aws::OFStream::trunc);
    configFile << "[default]" << std::endl;
    configFile.close();

    Aws::Config::ReloadCachedConfigFile();

    Aws::Client::ClientConfiguration config;
    ASSERT_STREQ("us-east-1", config.region.c_str());

    Aws::FileSystem::RemoveFileIfExists(m_configFileName.c_str());
}
