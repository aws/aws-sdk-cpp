/*
* Copyright 2010-2018 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/client/AWSError.h>
#include <aws/testing/mocks/aws/client/MockAWSClient.h>
#include <aws/testing/platform/PlatformTesting.h>
#include <aws/core/platform/Environment.h>
#include <aws/core/monitoring/CoreMetrics.h>
#include <aws/core/monitoring/MonitoringInterface.h>
#include <aws/core/monitoring/MonitoringFactory.h>
#include <aws/core/monitoring/MonitoringManager.h>
#include <aws/core/monitoring/DefaultMonitoring.h>
#include <aws/core/net/SimpleUDP.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/threading/ThreadTask.h>
#include <aws/core/utils/json/JsonSerializer.h>

#if 0
using namespace Aws::Utils;
using namespace Aws::Utils::Threading;
using namespace Aws::Monitoring;
using namespace Aws::Net;

static const char ALLOCATION_TAG[] = "MonitoringTest";
static const char URI_STRING[] = "http://domain.com/something";

static std::queue<AWSError<CoreErrors>> errorQueue;

class MockServiceClient: public  MockAWSClient
{
public:
    MockServiceClient(const Aws::String serviceName, const ClientConfiguration& config):
        MockAWSClient(config), m_serviceName(serviceName) {}

    inline const char* GetServiceClientName() const override {return m_serviceName.c_str(); }

protected:
    AWSError<CoreErrors> BuildAWSError(const std::shared_ptr<HttpResponse>& response) const override
    {
        if (errorQueue.size() > 0)
        {
            auto err = errorQueue.front();
            errorQueue.pop();
            return err;
        }

        if (response->HasClientError())
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

private:
    Aws::String m_serviceName;
};

class MockServiceRequest : public AmazonWebServiceRequest
{
public:
    MockServiceRequest(const Aws::String& requestName) : m_shouldComputeMd5(false), m_requestName(requestName) { }
    std::shared_ptr<Aws::IOStream> GetBody() const override { return m_body; }
    void SetBody(const std::shared_ptr<Aws::IOStream>& body) { m_body = body; }
    HeaderValueCollection GetHeaders() const override { return m_headers; }
    void SetHeaders(const HeaderValueCollection& value) { m_headers = value; }
    bool ShouldComputeContentMd5() const override { return m_shouldComputeMd5; }
    void SetComputeContentMd5(bool value) { m_shouldComputeMd5 = value; }
    virtual const char* GetServiceRequestName() const override { return m_requestName.c_str(); }

private:
    std::shared_ptr<Aws::IOStream> m_body;
    HeaderValueCollection m_headers;
    bool m_shouldComputeMd5;
    Aws::String m_requestName;
};

class MonitoringEndToEndTestSuite : public ::testing::Test
{
protected:
    std::shared_ptr<MockHttpClient> mockHttpClient;
    std::shared_ptr<MockHttpClientFactory> mockHttpClientFactory;
    Aws::UniquePtr<MockServiceClient> mockClient;
    Aws::String originalEnabled;
    Aws::String originalClientId;
    Aws::String originalHost;
    unsigned short originalPort;

    void SetUp()
    {
        mockHttpClient = Aws::MakeShared<MockHttpClient>(ALLOCATION_TAG);
        mockHttpClientFactory = Aws::MakeShared<MockHttpClientFactory>(ALLOCATION_TAG);
        mockHttpClientFactory->SetClient(mockHttpClient);
        SetHttpClientFactory(mockHttpClientFactory);

        originalEnabled = Aws::Environment::GetEnv(DefaultMonitoring::DEFAULT_CSM_ENVIRONMENT_VAR_ENABLED);
        originalClientId = Aws::Environment::GetEnv(DefaultMonitoring::DEFAULT_CSM_ENVIRONMENT_VAR_CLIENT_ID);
        originalHost = Aws::Environment::GetEnv(DefaultMonitoring::DEFAULT_CSM_ENVIRONMENT_VAR_HOST);
        originalPort = static_cast<short>(StringUtils::ConvertToInt32(Aws::Environment::GetEnv(DefaultMonitoring::DEFAULT_CSM_ENVIRONMENT_VAR_PORT).c_str()));

        Aws::Environment::SetEnv(DefaultMonitoring::DEFAULT_CSM_ENVIRONMENT_VAR_ENABLED, "true", 1);
        Aws::Environment::SetEnv(DefaultMonitoring::DEFAULT_CSM_ENVIRONMENT_VAR_CLIENT_ID, "CppCSMTest", 1);
        Aws::Environment::SetEnv(DefaultMonitoring::DEFAULT_CSM_ENVIRONMENT_VAR_HOST, "127.0.0.1", 1);
        Aws::Environment::SetEnv(DefaultMonitoring::DEFAULT_CSM_ENVIRONMENT_VAR_PORT, "6666", 1);

        Aws::Monitoring::CleanupMonitoring();
        std::vector<MonitoringFactoryCreateFunction> factoryFunctions;
        Aws::Monitoring::InitMonitoring(factoryFunctions);
    }

    void TearDown()
    {
        Aws::Environment::SetEnv(DefaultMonitoring::DEFAULT_CSM_ENVIRONMENT_VAR_ENABLED, originalEnabled.c_str(), 1);
        Aws::Environment::SetEnv(DefaultMonitoring::DEFAULT_CSM_ENVIRONMENT_VAR_CLIENT_ID, originalClientId.c_str(), 1);
        Aws::Environment::SetEnv(DefaultMonitoring::DEFAULT_CSM_ENVIRONMENT_VAR_HOST, originalHost.c_str(), 1);
        Aws::Environment::SetEnv(DefaultMonitoring::DEFAULT_CSM_ENVIRONMENT_VAR_PORT, StringUtils::to_string(originalPort).c_str(), 1);

        mockClient = nullptr;
        mockHttpClient = nullptr;
        mockHttpClientFactory = nullptr;

        CleanupHttp();
        InitHttp();
    }

    void SetServiceClient(const Aws::String& serviceName, const Aws::String& region)
    {
        mockClient = nullptr;
        ClientConfiguration config;
        config.scheme = Scheme::HTTP;
        config.connectTimeoutMs = 30000;
        config.requestTimeoutMs = 30000;
        config.region = region;
        auto countedRetryStrategy = Aws::MakeShared<CountedRetryStrategy>(ALLOCATION_TAG, 1/*max retries equals 1 means at most 2 attempts*/);
        config.retryStrategy = std::static_pointer_cast<DefaultRetryStrategy>(countedRetryStrategy);
        mockClient = Aws::MakeUnique<MockServiceClient>(ALLOCATION_TAG, serviceName, config);
    }

    void QueueMockResponse(HttpResponseCode code, const HeaderValueCollection& headers)
    {
        auto httpRequest = CreateHttpRequest(URI(URI_STRING),
            HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        auto httpResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, httpRequest);
        httpResponse->SetResponseCode(code);
        httpResponse->GetResponseBody() << "";
        for (auto&& header : headers)
        {
            httpResponse->AddHeader(header.first, header.second);
        }
        mockHttpClient->AddResponseToReturn(httpResponse);
    }

    void QueueMockAWSError(const HeaderValueCollection& headers, Aws::Http::HttpResponseCode httpCode, bool isRetryable,
        CoreErrors errorCode, const Aws::String& exceptionName, const Aws::String& errorMessage)
    {
        auto err = AWSError<CoreErrors>(errorCode, exceptionName, errorMessage, isRetryable);
        err.SetResponseCode(httpCode);
        err.SetResponseHeaders(headers);
        errorQueue.push(err);
    }

    void DefaultMonitoringCommonAssert(Aws::Utils::Json::JsonValue& json, const Aws::String& apiName, const Aws::String& type)
    {
        ASSERT_TRUE(json.View().ValueExists("Service"));
        ASSERT_STREQ(mockClient->GetServiceClientName(), json.View().GetString("Service").c_str());

        ASSERT_TRUE(json.View().ValueExists("Api"));
        ASSERT_STREQ(apiName.c_str(), json.View().GetString("Api").c_str());

        ASSERT_TRUE(json.View().ValueExists("ClientId"));
        ASSERT_STREQ(Aws::Environment::GetEnv(DefaultMonitoring::DEFAULT_CSM_ENVIRONMENT_VAR_CLIENT_ID).c_str(), json.View().GetString("ClientId").c_str());

        ASSERT_TRUE(json.View().ValueExists("Timestamp"));

        ASSERT_TRUE(json.View().ValueExists("Type"));
        ASSERT_STREQ(type.c_str(), json.View().GetString("Type").c_str());

        ASSERT_TRUE(json.View().ValueExists("Version"));
        ASSERT_EQ(Aws::Monitoring::DefaultMonitoring::GetVersion(), json.View().GetInteger("Version"));

        ASSERT_TRUE(json.View().ValueExists("UserAgent"));
    }

    void DefaultMonitoringAttemptAssert(Aws::Utils::Json::JsonValue& json, Aws::Http::HttpResponseCode responseCode, const Aws::String& region)
    {
        ASSERT_TRUE(json.View().ValueExists("AttemptLatency"));

        ASSERT_TRUE(json.View().ValueExists("AccessKey"));
        ASSERT_STREQ(MockAWSClient::GetMockAccessKey(), json.View().GetString("AccessKey").c_str());

        ASSERT_TRUE(json.View().ValueExists("Region"));
        ASSERT_STREQ(region.c_str(), json.View().GetString("Region").c_str());

        ASSERT_TRUE(json.View().ValueExists("Fqdn"));
        ASSERT_STREQ("domain.com", json.View().GetString("Fqdn").c_str());

        ASSERT_TRUE(json.View().ValueExists("HttpStatusCode"));
        ASSERT_EQ(static_cast<int>(responseCode), json.View().GetInteger("HttpStatusCode"));
    }

    void DefaultMonitoringApiCallAssert(Aws::Utils::Json::JsonValue& json, Aws::Http::HttpResponseCode responseCode, const Aws::String& region, int attemptCount, int maxRetriesExceeded)
    {
        ASSERT_TRUE(json.View().ValueExists("Latency"));
        ASSERT_TRUE(json.View().ValueExists("AttemptCount"));
        ASSERT_EQ(attemptCount, json.View().GetInteger("AttemptCount"));
        ASSERT_TRUE(json.View().ValueExists("Region"));
        ASSERT_STREQ(region.c_str(), json.View().GetString("Region").c_str());
        ASSERT_TRUE(json.View().ValueExists("MaxRetriesExceeded"));
        ASSERT_EQ(maxRetriesExceeded, json.View().GetInteger("MaxRetriesExceeded"));

        ASSERT_TRUE(json.View().ValueExists("FinalHttpStatusCode"));
        ASSERT_EQ(static_cast<int>(responseCode), json.View().GetInteger("FinalHttpStatusCode"));
    }
};

TEST_F(MonitoringEndToEndTestSuite, TestMockDynamoDbSingleAttemptSucceeded)
{
    Threading::DefaultExecutor exec;
    Threading::Semaphore ev(0, 1);
    Threading::Semaphore sync(0, 1);
    int packetsNum = 2;
    Aws::Vector<Aws::String> results;
    auto ListenerAgent = [&] {
        Aws::Net::SimpleUDP serverUDP(true/*IPV4*/, Aws::Net::UDP_BUFFER_SIZE/*SENDBUF*/, Aws::Net::UDP_BUFFER_SIZE/*RECVBUF*/, true/*NOBLOCKING*/);
        ASSERT_EQ(0, serverUDP.BindToLocalHost(static_cast<unsigned short>(StringUtils::ConvertToInt32(Aws::Environment::GetEnv(DefaultMonitoring::DEFAULT_CSM_ENVIRONMENT_VAR_PORT).c_str()))));
        sync.ReleaseAll(); // I am ready to receive now, you can start sending...
        uint8_t buffer[Aws::Net::UDP_BUFFER_SIZE];
        for (int i = 0; i < packetsNum; i++)
        {
            int dataLen;
            while ((dataLen = serverUDP.ReceiveDataFrom(nullptr, nullptr, buffer, sizeof(buffer))) == -1);
            results.push_back(Aws::String(reinterpret_cast<const char*>(buffer), dataLen));
        }
        ev.ReleaseAll(); // I received all metrics, you can do comparison...
    };
    exec.Submit(ListenerAgent);

    sync.WaitOne(); // Waiting for agent to be ready to receive...
    SetServiceClient("DynamoDb", Aws::Region::US_EAST_1);
    MockServiceRequest request("PutItem");
    HeaderValueCollection responseHeaders;
    QueueMockResponse(HttpResponseCode::OK, responseHeaders);
    auto outcome = mockClient->MakeRequest(request);

    ev.WaitOne(); // Waiting for agent to receive all metrics...

    ASSERT_EQ(2u, results.size());
    Aws::Utils::Json::JsonValue attempt(results[0]);
    Aws::Utils::Json::JsonValue api(results[1]);

    // 7 common items in CommonAssert + 5 attempt required items for attempt in AttemptAssert.
    ASSERT_EQ(12u, attempt.View().GetAllObjects().size());
    DefaultMonitoringCommonAssert(attempt, request.GetServiceRequestName(), "ApiCallAttempt");
    DefaultMonitoringAttemptAssert(attempt, HttpResponseCode::OK, Aws::Region::US_EAST_1);

    // 7 common items in CommonAssert + 5 api required items in ApiCallAssert
    ASSERT_EQ(12u, api.View().GetAllObjects().size());
    DefaultMonitoringCommonAssert(api, request.GetServiceRequestName(), "ApiCall");
    DefaultMonitoringApiCallAssert(api, HttpResponseCode::OK, Aws::Region::US_EAST_1, 1/*AttemptCount*/, 0/*maxRetriesExceeded*/);

    ASSERT_EQ(api.View().GetString("Timestamp"), attempt.View().GetString("Timestamp"));
    ASSERT_GE(api.View().GetInt64("Latency"), attempt.View().GetInt64("AttemptLatency"));
}

TEST_F(MonitoringEndToEndTestSuite, TestMockDynamoDbTwoAttemptsFailedThenSucceeded)
{
    Threading::DefaultExecutor exec;
    Threading::Semaphore ev(0, 1);
    Threading::Semaphore sync(0, 1);
    int packetsNum = 3;
    Aws::Vector<Aws::String> results;
    auto ListenerAgent = [&] {
        Aws::Net::SimpleUDP serverUDP(true/*IPV4*/, Aws::Net::UDP_BUFFER_SIZE/*SENDBUF*/, Aws::Net::UDP_BUFFER_SIZE/*RECVBUF*/, true/*NOBLOCKING*/);
        ASSERT_EQ(0, serverUDP.BindToLocalHost(static_cast<unsigned short>(StringUtils::ConvertToInt32(Aws::Environment::GetEnv(DefaultMonitoring::DEFAULT_CSM_ENVIRONMENT_VAR_PORT).c_str()))));
        sync.ReleaseAll();
        uint8_t buffer[Aws::Net::UDP_BUFFER_SIZE];
        for (int i = 0; i < packetsNum; i++)
        {
            int dataLen;
            while ((dataLen = serverUDP.ReceiveDataFrom(nullptr, nullptr, buffer, sizeof(buffer))) == -1);
            results.push_back(Aws::String(reinterpret_cast<const char*>(buffer), dataLen));
        }
        ev.ReleaseAll();
    };
    exec.Submit(ListenerAgent);
    sync.WaitOne();
    SetServiceClient("DynamoDb", Aws::Region::US_WEST_2);
    MockServiceRequest request("PutItem");
    HeaderValueCollection responseHeaders;
    QueueMockResponse(HttpResponseCode::BAD_REQUEST, responseHeaders);
    QueueMockResponse(HttpResponseCode::OK, responseHeaders);
    QueueMockAWSError(responseHeaders, HttpResponseCode::BAD_REQUEST, true, CoreErrors::INVALID_PARAMETER_VALUE, "ProvisionedThroughputExceededException", "BlahBlah");
    auto outcome = mockClient->MakeRequest(request);

    ev.WaitOne();

    ASSERT_EQ(3u, results.size());
    Aws::Utils::Json::JsonValue attemptFail(results[0]);
    Aws::Utils::Json::JsonValue attemptSuccess(results[1]);
    Aws::Utils::Json::JsonValue api(results[2]);

    // 7 common items in CommonAssert + 5 attempt required items for attempt in AttemptAssert + 1 AwsException + 1 AwsExceptionMessage
    ASSERT_EQ(14u, attemptFail.View().GetAllObjects().size());
    DefaultMonitoringCommonAssert(attemptFail, request.GetServiceRequestName(), "ApiCallAttempt");
    DefaultMonitoringAttemptAssert(attemptFail, HttpResponseCode::BAD_REQUEST, Aws::Region::US_WEST_2);
    ASSERT_TRUE(attemptFail.View().ValueExists("AwsException"));
    ASSERT_STREQ("ProvisionedThroughputExceededException", attemptFail.View().GetString("AwsException").c_str());
    ASSERT_TRUE(attemptFail.View().ValueExists("AwsExceptionMessage"));
    ASSERT_STREQ("BlahBlah", attemptFail.View().GetString("AwsExceptionMessage").c_str());

    // 7 common items in CommonAssert + 5 attempt required items for attempt in AttemptAssert
    ASSERT_EQ(12u, attemptSuccess.View().GetAllObjects().size());
    DefaultMonitoringCommonAssert(attemptSuccess, request.GetServiceRequestName(), "ApiCallAttempt");
    DefaultMonitoringAttemptAssert(attemptSuccess, HttpResponseCode::OK, Aws::Region::US_WEST_2);

    // 7 common items in CommonAssert + 5 api required items in ApiCallAssert
    ASSERT_EQ(12u, api.View().GetAllObjects().size());
    DefaultMonitoringCommonAssert(api, request.GetServiceRequestName(), "ApiCall");
    DefaultMonitoringApiCallAssert(api, HttpResponseCode::OK, Aws::Region::US_WEST_2, 2/*AttemptCount*/, 0/*maxRetriesExceeded*/);

    ASSERT_EQ(api.View().GetString("Timestamp"), attemptFail.View().GetString("Timestamp"));
    ASSERT_LE(api.View().GetString("Timestamp"), attemptSuccess.View().GetString("Timestamp"));
    ASSERT_GE(api.View().GetInt64("Latency"), attemptFail.View().GetInt64("AttemptLatency") + attemptSuccess.View().GetInt64("AttemptLatency"));
}

TEST_F(MonitoringEndToEndTestSuite, TestMockS3TwoAttemptsFailedThenSucceeded)
{
    Threading::DefaultExecutor exec;
    Threading::Semaphore ev(0, 1);
    Threading::Semaphore sync(0, 1);
    int packetsNum = 3;
    Aws::Vector<Aws::String> results;
    auto ListenerAgent = [&] {
        auto serverUDP = Aws::MakeUnique<Aws::Net::SimpleUDP>(ALLOCATION_TAG, true/*IPV4*/, Aws::Net::UDP_BUFFER_SIZE/*SENDBUF*/, Aws::Net::UDP_BUFFER_SIZE/*RECVBUF*/, true/*NOBLOCKING*/);
        ASSERT_EQ(0, serverUDP->BindToLocalHost(static_cast<unsigned short>(StringUtils::ConvertToInt32(Aws::Environment::GetEnv(DefaultMonitoring::DEFAULT_CSM_ENVIRONMENT_VAR_PORT).c_str()))));
        sync.ReleaseAll();
        uint8_t buffer[Aws::Net::UDP_BUFFER_SIZE];
        for (int i = 0; i < packetsNum; i++)
        {
            int dataLen;
            while ((dataLen = serverUDP->ReceiveDataFrom(nullptr, nullptr, buffer, sizeof(buffer))) == -1);
            results.push_back(Aws::String(reinterpret_cast<const char*>(buffer), dataLen));
        }
        ev.ReleaseAll();
    };
    exec.Submit(ListenerAgent);
    sync.WaitOne();
    SetServiceClient("S3", Aws::Region::US_WEST_2);
    MockServiceRequest request("PutObject");
    HeaderValueCollection responseHeaders;
    QueueMockResponse(HttpResponseCode::BAD_REQUEST, responseHeaders);
    QueueMockResponse(HttpResponseCode::OK, responseHeaders);
    QueueMockAWSError(responseHeaders, HttpResponseCode::BAD_REQUEST, true, CoreErrors::NETWORK_CONNECTION, "", "Can't resolve DNS");
    auto outcome = mockClient->MakeRequest(request);

    ev.WaitOne();

    ASSERT_EQ(3u, results.size());
    Aws::Utils::Json::JsonValue attemptFail(results[0]);
    Aws::Utils::Json::JsonValue attemptSuccess(results[1]);
    Aws::Utils::Json::JsonValue api(results[2]);

    // 7 common items in CommonAssert + 5 attempt required items for attempt in AttemptAssert + 1 SdkExceptionMessage
    ASSERT_EQ(13u, attemptFail.View().GetAllObjects().size());
    DefaultMonitoringCommonAssert(attemptFail, request.GetServiceRequestName(), "ApiCallAttempt");
    DefaultMonitoringAttemptAssert(attemptFail, HttpResponseCode::BAD_REQUEST, Aws::Region::US_WEST_2);
    ASSERT_TRUE(attemptFail.View().ValueExists("SdkExceptionMessage"));
    ASSERT_STREQ("Can't resolve DNS", attemptFail.View().GetString("SdkExceptionMessage").c_str());

    // 7 common items in CommonAssert + 5 attempt required items for attempt in AttemptAssert
    ASSERT_EQ(12u, attemptSuccess.View().GetAllObjects().size());
    DefaultMonitoringCommonAssert(attemptSuccess, request.GetServiceRequestName(), "ApiCallAttempt");
    DefaultMonitoringAttemptAssert(attemptSuccess, HttpResponseCode::OK, Aws::Region::US_WEST_2);

    // 7 common items in CommonAssert + 5 api required items in ApiCallAssert
    ASSERT_EQ(12u, api.View().GetAllObjects().size());
    DefaultMonitoringCommonAssert(api, request.GetServiceRequestName(), "ApiCall");
    DefaultMonitoringApiCallAssert(api, HttpResponseCode::OK, Aws::Region::US_WEST_2, 2/*AttemptCount*/, 0/*maxRetriesExceeded*/);

    ASSERT_EQ(api.View().GetString("Timestamp"), attemptFail.View().GetString("Timestamp"));
    ASSERT_LE(api.View().GetString("Timestamp"), attemptSuccess.View().GetString("Timestamp"));
    ASSERT_GE(api.View().GetInt64("Latency"), attemptFail.View().GetInt64("AttemptLatency") + attemptSuccess.View().GetInt64("AttemptLatency"));
}

TEST_F(MonitoringEndToEndTestSuite, TestMockS3TwoAttemptsFailedThenFailed)
{
    Threading::DefaultExecutor exec;
    Threading::Semaphore ev(0, 1);
    Threading::Semaphore sync(0, 1);
    int packetsNum = 3;
    Aws::Vector<Aws::String> results;
    auto ListenerAgent = [&] {
        auto serverUDP = Aws::MakeUnique<Aws::Net::SimpleUDP>(ALLOCATION_TAG, true/*IPV4*/, Aws::Net::UDP_BUFFER_SIZE/*SENDBUF*/, Aws::Net::UDP_BUFFER_SIZE/*RECVBUF*/, true/*NOBLOCKING*/);
        ASSERT_EQ(0, serverUDP->BindToLocalHost(static_cast<unsigned short>(StringUtils::ConvertToInt32(Aws::Environment::GetEnv(DefaultMonitoring::DEFAULT_CSM_ENVIRONMENT_VAR_PORT).c_str()))));
        sync.ReleaseAll();
        uint8_t buffer[Aws::Net::UDP_BUFFER_SIZE];
        for (int i = 0; i < packetsNum; i++)
        {
            int dataLen;
            while ((dataLen = serverUDP->ReceiveDataFrom(nullptr, nullptr, buffer, sizeof(buffer))) == -1);
            results.push_back(Aws::String(reinterpret_cast<const char*>(buffer), dataLen));
        }
        ev.ReleaseAll();
    };
    exec.Submit(ListenerAgent);
    sync.WaitOne();
    SetServiceClient("S3", Aws::Region::US_WEST_2);
    MockServiceRequest request("PutObject");
    HeaderValueCollection responseHeaders;
    QueueMockResponse(HttpResponseCode::BAD_REQUEST, responseHeaders);
    QueueMockResponse(HttpResponseCode::BAD_REQUEST, responseHeaders);
    QueueMockAWSError(responseHeaders, HttpResponseCode::BAD_REQUEST, true, CoreErrors::NETWORK_CONNECTION, "", "Can't resolve DNS");
    QueueMockAWSError(responseHeaders, HttpResponseCode::BAD_REQUEST, true, CoreErrors::NETWORK_CONNECTION, "", "Can't connect to destination");

    auto outcome = mockClient->MakeRequest(request);

    ev.WaitOne();

    ASSERT_EQ(3u, results.size());
    Aws::Utils::Json::JsonValue attemptFail(results[0]);
    Aws::Utils::Json::JsonValue attemptFail2(results[1]);
    Aws::Utils::Json::JsonValue api(results[2]);

    // 7 common items in CommonAssert + 5 attempt required items for attempt in AttemptAssert + 1 SdkExceptionMessage
    ASSERT_EQ(13u, attemptFail.View().GetAllObjects().size());
    DefaultMonitoringCommonAssert(attemptFail, request.GetServiceRequestName(), "ApiCallAttempt");
    DefaultMonitoringAttemptAssert(attemptFail, HttpResponseCode::BAD_REQUEST, Aws::Region::US_WEST_2);
    ASSERT_TRUE(attemptFail.View().ValueExists("SdkExceptionMessage"));
    ASSERT_STREQ("Can't resolve DNS", attemptFail.View().GetString("SdkExceptionMessage").c_str());

    // 7 common items in CommonAssert + 5 attempt required items for attempt in AttemptAssert + 1 SdkExceptionMessage
    ASSERT_EQ(13u, attemptFail2.View().GetAllObjects().size());
    DefaultMonitoringCommonAssert(attemptFail2, request.GetServiceRequestName(), "ApiCallAttempt");
    DefaultMonitoringAttemptAssert(attemptFail2, HttpResponseCode::BAD_REQUEST, Aws::Region::US_WEST_2);
    ASSERT_TRUE(attemptFail2.View().ValueExists("SdkExceptionMessage"));
    ASSERT_STREQ("Can't connect to destination", attemptFail2.View().GetString("SdkExceptionMessage").c_str());


    // 7 common items in CommonAssert + 5 api required items in ApiCallAssert + 1 FinalSdkExceptionMessage
    ASSERT_EQ(13u, api.View().GetAllObjects().size());
    DefaultMonitoringCommonAssert(api, request.GetServiceRequestName(), "ApiCall");
    DefaultMonitoringApiCallAssert(api, HttpResponseCode::BAD_REQUEST, Aws::Region::US_WEST_2, 2/*AttemptCount*/, 1/*maxRetriesExceeded*/);
    ASSERT_TRUE(api.View().ValueExists("FinalSdkExceptionMessage"));
    ASSERT_STREQ("Can't connect to destination", api.View().GetString("FinalSdkExceptionMessage").c_str());

    ASSERT_EQ(api.View().GetString("Timestamp"), attemptFail.View().GetString("Timestamp"));
    ASSERT_LE(api.View().GetString("Timestamp"), attemptFail2.View().GetString("Timestamp"));
    ASSERT_GE(api.View().GetInt64("Latency"), attemptFail.View().GetInt64("AttemptLatency") + attemptFail2.View().GetInt64("AttemptLatency"));
}
#endif
