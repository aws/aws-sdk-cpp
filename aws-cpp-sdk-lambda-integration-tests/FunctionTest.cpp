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
#include <fstream>

#include <aws/external/gtest.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/platform/Platform.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSSet.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/ratelimiter/DefaultRateLimiter.h>
#include <aws/core/utils/HashingUtils.h>

#include <aws/lambda/LambdaClient.h>
#include <aws/lambda/model/DeleteFunctionRequest.h>
#include <aws/lambda/model/GetFunctionRequest.h>
#include <aws/lambda/model/CreateFunctionRequest.h>
#include <aws/lambda/model/ListFunctionsRequest.h>
#include <aws/lambda/model/InvokeRequest.h>
#include <aws/lambda/model/AddPermissionRequest.h>
#include <aws/lambda/model/GetPolicyRequest.h>
#include <aws/lambda/model/GetFunctionConfigurationRequest.h>
#include <aws/lambda/model/RemovePermissionRequest.h>
#include <aws/lambda/model/CreateEventSourceMappingRequest.h>
#include <aws/lambda/model/GetEventSourceMappingRequest.h>
#include <aws/lambda/model/UpdateEventSourceMappingRequest.h>
#include <aws/lambda/model/DeleteEventSourceMappingRequest.h>

#include <aws/kinesis/KinesisClient.h>
#include <aws/kinesis/model/CreateStreamRequest.h>
#include <aws/kinesis/model/DescribeStreamRequest.h>
#include <aws/kinesis/model/DeleteStreamRequest.h>

#include <aws/iam/IAMClient.h>
#include <aws/iam/model/GetRoleRequest.h>

#include <aws/access-management/AccessManagementClient.h>
#include <aws/cognito-identity/CognitoIdentityClient.h>
#include <aws/testing/TestingEnvironment.h>
#include <aws/core/utils/UUID.h>

using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Client;
using namespace Aws::Lambda;
using namespace Aws::Lambda::Model;
using namespace Aws::Kinesis;
using namespace Aws::Kinesis::Model;
using namespace Aws::IAM;
using namespace Aws::IAM::Model;
using namespace Aws::CognitoIdentity;

namespace {

static const char BASE_KINESIS_STREAM_NAME[] = "AWSNativeSDKIntegrationTest";
static const char BASE_SIMPLE_FUNCTION[] = "TestSimple";
static const char BASE_HANDLED_ERROR_FUNCTION[] = "TestHandledError";
static const char SIMPLE_FUNCTION_CODE[] = RESOURCES_DIR "/succeed.zip";
static const char HANDLED_ERROR_FUNCTION_CODE[] = RESOURCES_DIR "/handled.zip";
static const char ALLOCATION_TAG[] = "FunctionTest";
static const char BASE_IAM_ROLE_NAME[] = "AWSNativeSDKLambdaIntegrationTestRole";

class FunctionTest : public ::testing::Test {

public:
    static std::shared_ptr<LambdaClient> m_client;
    static std::shared_ptr<KinesisClient> m_kinesis_client;
    static std::shared_ptr<Aws::Utils::RateLimits::RateLimiterInterface> m_limiter;
    static std::shared_ptr<Aws::IAM::Model::Role> m_role;
    static std::shared_ptr<Aws::IAM::IAMClient> m_iamClient;
    static std::shared_ptr<Aws::AccessManagement::AccessManagementClient> m_accessManagementClient;
    static std::map<Aws::String, Aws::String> functionArnMapping;
    Aws::String m_UUID;

protected:
    Aws::String BuildResourceName(const char* baseName)
    {
        return Aws::Testing::GetAwsResourcePrefix() + baseName + m_UUID;
    }

    static Aws::String MakeFilePath(const Aws::String& localFile)
    {
        #ifdef __ANDROID__
            return Aws::Platform::GetCacheDirectory() + localFile;
        #else
            return localFile;
        #endif
    }

    void SetUp()
    {
        m_UUID = Aws::Utils::UUID::RandomUUID();
        CreateFunction(BuildResourceName(BASE_SIMPLE_FUNCTION), SIMPLE_FUNCTION_CODE);
    }

    void TearDown()
    {
        DeleteFunction(BuildResourceName(BASE_SIMPLE_FUNCTION)); 
    }

    static void SetUpTestCase()
    {
        m_limiter = Aws::MakeShared<Aws::Utils::RateLimits::DefaultRateLimiter<>>(ALLOCATION_TAG, 200000);

        // Create a client
        ClientConfiguration config;
        config.scheme = Scheme::HTTPS;
        config.connectTimeoutMs = 30000;
        config.requestTimeoutMs = 30000;
        config.readRateLimiter = m_limiter;
        config.writeRateLimiter = m_limiter;

        //to test proxy functionality, uncomment the next two lines.
        m_client = Aws::MakeShared<LambdaClient>(ALLOCATION_TAG, config);
        m_kinesis_client = Aws::MakeShared<KinesisClient>(ALLOCATION_TAG, config);

        //Create our IAM Role, so that the Lambda tests have the right policies.
        m_role = Aws::MakeShared<Aws::IAM::Model::Role>(ALLOCATION_TAG);
        ClientConfiguration clientConfig;
        m_iamClient = Aws::MakeShared<Aws::IAM::IAMClient>(ALLOCATION_TAG, clientConfig);
        auto cognitoClient = Aws::MakeShared<CognitoIdentityClient>(ALLOCATION_TAG);
        m_accessManagementClient = Aws::MakeShared<Aws::AccessManagement::AccessManagementClient>(ALLOCATION_TAG, m_iamClient, cognitoClient);
        m_accessManagementClient->GetRole(BASE_IAM_ROLE_NAME, *m_role);
    }

    static void TearDownTestCase()
    {
        // Return the memory claimed for static variables to memory manager before shutting down memory manager.
        // Otherwise there will be double free crash.
        functionArnMapping.clear();
        m_limiter = nullptr;
        m_client = nullptr;
        m_kinesis_client = nullptr;
        m_role = nullptr;
        m_iamClient = nullptr;
        m_accessManagementClient = nullptr;
    }

    enum class ResourceStatusType
    {
        READY,
        NOT_FOUND
    };

    static void WaitForFunctionStatus(Aws::String functionName, ResourceStatusType status)
    {
        bool done = false;
        while(!done)
        {
            ListFunctionsRequest listFunctionsRequest;
            ListFunctionsOutcome listFunctionsOutcome = m_client->ListFunctions(listFunctionsRequest);

            EXPECT_TRUE(listFunctionsOutcome.IsSuccess());

            auto functions = listFunctionsOutcome.GetResult().GetFunctions();

            auto iter = std::find_if(functions.cbegin(), 
                                     functions.cend(), 
                                     [=](const FunctionConfiguration& function){ return function.GetFunctionName() == functionName; });

            switch(status)
            {
            case ResourceStatusType::READY:
                if(iter != functions.cend())
                {
                    return;
                }
                break;

            case ResourceStatusType::NOT_FOUND:
                if(iter == functions.cend())
                {
                    return;
                }
                break;
            }

            std::this_thread::sleep_for(std::chrono::seconds(1));	    
        }
    }

    static void DeleteFunction(Aws::String functionName)
    {
        DeleteFunctionRequest deleteFunctionRequest;
        deleteFunctionRequest.SetFunctionName(functionName);
        bool done = false;
        while(!done)    
        {    
            DeleteFunctionOutcome deleteFunctionOutcome = m_client->DeleteFunction(deleteFunctionRequest);    
            if (deleteFunctionOutcome.IsSuccess())    
            {    
                done = true;    
            }    
            else    
            {    
                //Look at the specific error, from here:  http://docs.aws.amazon.com/lambda/latest/dg/API_DeleteFunction.html    
                //Some we will want to handle by aborting, others we can continue to spin on.    
                auto errCode = deleteFunctionOutcome.GetError().GetErrorType();    
                switch (errCode)    
                {    
                    case LambdaErrors::RESOURCE_NOT_FOUND:    
                        //The function was already deleted or not present.    
                        done = true;    
                        break;    
                    case LambdaErrors::TOO_MANY_REQUESTS:    
                        //This is OK; Keep spinning.    
                        break;    
                    default:    
                        //Something bad happened, and we can't commit to this being successful.    
                        FAIL();    
                        break;    
                }    
            }    
        }
    }

    static void CreateFunction(Aws::String functionName,Aws::String zipLocation)
    {
        //Get the ARN off the IAM role.  We'll need this for creating the functions.
        auto & roleARN = m_role->GetArn();

        //Now attempt to create the function.
        CreateFunctionRequest createFunctionRequest;
        createFunctionRequest.SetHandler("test.handler");
        createFunctionRequest.SetFunctionName(functionName);
        createFunctionRequest.SetRole(roleARN);
        FunctionCode functionCode;

        auto filePath = MakeFilePath(zipLocation);
        std::ifstream fc(filePath.c_str(), std::ios_base::in | std::ios_base::binary);
        Aws::StringStream buffer;
        buffer << fc.rdbuf();

        functionCode.SetZipFile(Aws::Utils::ByteBuffer((unsigned char*)buffer.str().c_str(), buffer.str().length()));
        createFunctionRequest.SetCode(functionCode);
        createFunctionRequest.SetRuntime(Aws::Lambda::Model::Runtime::nodejs8_10);

        CreateFunctionOutcome createFunctionOutcome = m_client->CreateFunction(createFunctionRequest);
        ASSERT_TRUE(createFunctionOutcome.IsSuccess());
        ASSERT_EQ(functionName,createFunctionOutcome.GetResult().GetFunctionName());
        ASSERT_EQ("test.handler",createFunctionOutcome.GetResult().GetHandler());
        ASSERT_EQ(roleARN,createFunctionOutcome.GetResult().GetRole());
        ASSERT_EQ(Aws::Lambda::Model::Runtime::nodejs8_10, createFunctionOutcome.GetResult().GetRuntime());
        functionArnMapping[functionName] = createFunctionOutcome.GetResult().GetFunctionArn();

        WaitForFunctionStatus(functionName, ResourceStatusType::READY);
    }
};

std::shared_ptr<LambdaClient> FunctionTest::m_client(nullptr);
std::shared_ptr<KinesisClient> FunctionTest::m_kinesis_client(nullptr);
std::shared_ptr<Aws::Utils::RateLimits::RateLimiterInterface> FunctionTest::m_limiter(nullptr);
std::shared_ptr<Aws::IAM::Model::Role> FunctionTest::m_role(nullptr);
std::shared_ptr<Aws::IAM::IAMClient> FunctionTest::m_iamClient(nullptr);
std::shared_ptr< Aws::AccessManagement::AccessManagementClient > FunctionTest::m_accessManagementClient(nullptr);
std::map<Aws::String, Aws::String> FunctionTest::functionArnMapping;

TEST_F(FunctionTest, TestListFunction)
{
    ListFunctionsRequest listFunctionsRequest;
    ListFunctionsOutcome listFunctionsOutcome = m_client->ListFunctions(listFunctionsRequest);

    EXPECT_TRUE(listFunctionsOutcome.IsSuccess());
    //We are just going to make sure the simple function above is in the list
    Aws::Vector <FunctionConfiguration> filteredFunctionConfigurations;
    auto functions = listFunctionsOutcome.GetResult().GetFunctions();
    Aws::String simpleFunctionName = BuildResourceName(BASE_SIMPLE_FUNCTION);
    std::copy_if(functions.cbegin(), functions.cend(),
        std::back_inserter(filteredFunctionConfigurations),
        [=](const FunctionConfiguration& function) { return function.GetFunctionName().find(simpleFunctionName) == 0;});

    ASSERT_EQ(1uL, filteredFunctionConfigurations.size());
    EXPECT_EQ(simpleFunctionName, filteredFunctionConfigurations[0].GetFunctionName());
}

TEST_F(FunctionTest, TestGetFunction)
{
    Aws::String simpleFunctionName = BuildResourceName(BASE_SIMPLE_FUNCTION);

    GetFunctionRequest getFunctionRequest;
    getFunctionRequest.SetFunctionName(simpleFunctionName);
    GetFunctionOutcome getFunctionOutcome = m_client->GetFunction(getFunctionRequest);
    EXPECT_TRUE(getFunctionOutcome.IsSuccess());

    GetFunctionResult getFunctionResult = getFunctionOutcome.GetResult();
    EXPECT_EQ(Runtime::nodejs8_10, getFunctionResult.GetConfiguration().GetRuntime());
    EXPECT_EQ("test.handler",getFunctionResult.GetConfiguration().GetHandler());
    EXPECT_EQ(simpleFunctionName,getFunctionResult.GetConfiguration().GetFunctionName());
    //Just see that is looks like an aws url
    EXPECT_NE(std::string::npos, getFunctionResult.GetCode().GetLocation().find("amazonaws"));
    EXPECT_EQ("S3", getFunctionResult.GetCode().GetRepositoryType());
}

TEST_F(FunctionTest, TestGetFunctionConfiguration)
{
    Aws::String simpleFunctionName = BuildResourceName(BASE_SIMPLE_FUNCTION);

    GetFunctionConfigurationRequest getFunctionConfigurationRequest;
    getFunctionConfigurationRequest.SetFunctionName(simpleFunctionName);
    GetFunctionConfigurationOutcome getFunctionConfigurationOutcome = m_client->GetFunctionConfiguration(getFunctionConfigurationRequest); 
    EXPECT_TRUE(getFunctionConfigurationOutcome.IsSuccess());

    GetFunctionConfigurationResult getFunctionConfigurationResult = getFunctionConfigurationOutcome.GetResult();
    EXPECT_EQ(Runtime::nodejs8_10, getFunctionConfigurationResult.GetRuntime());
    EXPECT_EQ("test.handler",getFunctionConfigurationResult.GetHandler());
    EXPECT_EQ(simpleFunctionName,getFunctionConfigurationResult.GetFunctionName());
}


TEST_F(FunctionTest, TestInvokeEvent)
{
    Aws::String simpleFunctionName = BuildResourceName(BASE_SIMPLE_FUNCTION);

    InvokeRequest invokeRequest;
    invokeRequest.SetFunctionName(simpleFunctionName);
    invokeRequest.SetInvocationType(InvocationType::Event);

    InvokeOutcome invokeOutcome = m_client->Invoke(invokeRequest);
    EXPECT_TRUE(invokeOutcome.IsSuccess());
    EXPECT_EQ(202,invokeOutcome.GetResult().GetStatusCode());
}

TEST_F(FunctionTest, TestInvokeEventFromARN)
{
    Aws::String simpleFunctionName = BuildResourceName(BASE_SIMPLE_FUNCTION);

    InvokeRequest invokeRequest;
    invokeRequest.SetFunctionName(functionArnMapping[simpleFunctionName]);
    invokeRequest.SetInvocationType(InvocationType::Event);

    InvokeOutcome invokeOutcome = m_client->Invoke(invokeRequest);
    EXPECT_TRUE(invokeOutcome.IsSuccess());
    EXPECT_EQ(202,invokeOutcome.GetResult().GetStatusCode());
}


TEST_F(FunctionTest, TestInvokeDryRun)
{
    InvokeRequest invokeRequest;
    invokeRequest.SetFunctionName(BuildResourceName(BASE_SIMPLE_FUNCTION));
    invokeRequest.SetInvocationType(InvocationType::DryRun);

    InvokeOutcome invokeOutcome = m_client->Invoke(invokeRequest);
    EXPECT_TRUE(invokeOutcome.IsSuccess());
    EXPECT_EQ(204,invokeOutcome.GetResult().GetStatusCode());
}

TEST_F(FunctionTest, TestInvokeSync)
{
    InvokeRequest invokeRequest;
    invokeRequest.SetFunctionName(BuildResourceName(BASE_SIMPLE_FUNCTION));
    invokeRequest.SetInvocationType(InvocationType::RequestResponse);
    invokeRequest.SetContentType("application/javascript");
    invokeRequest.SetLogType(LogType::Tail);
    std::shared_ptr<Aws::IOStream> payload = Aws::MakeShared<Aws::StringStream>("FunctionTest");
    Aws::Utils::Json::JsonValue jsonPayload;
    jsonPayload.WithString("input", "ThePayload");
    *payload << jsonPayload.View().WriteReadable();
    invokeRequest.SetBody(payload);


    InvokeOutcome invokeOutcome = m_client->Invoke(invokeRequest);
    EXPECT_TRUE(invokeOutcome.IsSuccess());
    auto &result = invokeOutcome.GetResult();
    EXPECT_EQ(200,result.GetStatusCode());

    //Decode the log result header and ensure our test line is in it
    Aws::StringStream ss;
    auto byteLogResult = Aws::Utils::HashingUtils::Base64Decode(result.GetLogResult());

    for(unsigned i = 0; i < byteLogResult.GetLength(); i++)
    {
        ss << byteLogResult.GetItem(i);
    }
    //The log has lots of time stamps and other non-predictable information
    //We are just going to look for the presence of the log line printed by our function
    EXPECT_NE(std::string::npos,ss.str().find("TESTTEST"));

    ss.str("");

    //Our 'happy case' script simply echos the input to the output, so we should get the same thing here that we
    //sent above
    auto jsonResponse = Aws::Utils::Json::JsonValue(result.GetPayload());
    EXPECT_EQ("ThePayload", jsonResponse.View().GetString("input"));
}


TEST_F(FunctionTest, TestInvokeSyncHandledFunctionError)
{
    CreateFunction(BuildResourceName(BASE_HANDLED_ERROR_FUNCTION), HANDLED_ERROR_FUNCTION_CODE);

    InvokeRequest invokeRequest;
    invokeRequest.SetFunctionName(BuildResourceName(BASE_HANDLED_ERROR_FUNCTION));
    invokeRequest.SetInvocationType(InvocationType::RequestResponse);
    invokeRequest.SetContentType("application/javascript");
    invokeRequest.SetLogType(LogType::Tail);
    std::shared_ptr<Aws::IOStream> payload = Aws::MakeShared<Aws::StringStream>("FunctionTest");
    Aws::Utils::Json::JsonValue jsonPayload;
    jsonPayload.WithString("input", "ThePayload");
    *payload << jsonPayload.View().WriteReadable();
    invokeRequest.SetBody(payload);


    InvokeOutcome invokeOutcome = m_client->Invoke(invokeRequest);
    EXPECT_TRUE(invokeOutcome.IsSuccess());
    const auto& result = invokeOutcome.GetResult();
    EXPECT_EQ(200,result.GetStatusCode());

    //This is the same as the last test, but we should have a FunctionError
    EXPECT_EQ("Handled", result.GetFunctionError());

    DeleteFunction(BuildResourceName(BASE_HANDLED_ERROR_FUNCTION));
}

TEST_F(FunctionTest, TestPermissions)
{
    Aws::String simpleFunctionName = BuildResourceName(BASE_SIMPLE_FUNCTION);

    AddPermissionRequest addPermissionRequest;
    addPermissionRequest.SetFunctionName(simpleFunctionName);
    addPermissionRequest.SetAction("lambda:Invoke");
    addPermissionRequest.SetPrincipal("s3.amazonaws.com");
    addPermissionRequest.SetStatementId("12345");

    auto outcome = m_client->AddPermission(addPermissionRequest);
    ASSERT_TRUE(outcome.IsSuccess());

    AddPermissionResult result = outcome.GetResult();
    auto statement = Aws::Utils::Json::JsonValue(result.GetStatement());

    EXPECT_EQ("12345",statement.View().GetString("Sid"));
    EXPECT_NE(std::string::npos, statement.View().GetString("Resource").find(simpleFunctionName));


    Aws::Lambda::Model::GetPolicyRequest getPolicyRequest;
    getPolicyRequest.SetFunctionName(simpleFunctionName);
    auto getPolicyOutcome = m_client->GetPolicy(getPolicyRequest);
    //If this fails, stop.
    ASSERT_TRUE(getPolicyOutcome.IsSuccess());
    Aws::Lambda::Model::GetPolicyResult getPolicyResult = getPolicyOutcome.GetResult();
    auto getPolicyStatement = Aws::Utils::Json::JsonValue(getPolicyResult.GetPolicy());

    EXPECT_EQ("12345", getPolicyStatement.View().GetArray("Statement").GetItem(0).GetString("Sid"));
    EXPECT_EQ("lambda:Invoke", getPolicyStatement.View().GetArray("Statement").GetItem(0).GetString("Action"));

    RemovePermissionRequest removePermissionRequest;
    removePermissionRequest.SetFunctionName(simpleFunctionName);
    removePermissionRequest.SetStatementId("12345");
    auto removePermissionOutcome = m_client->RemovePermission(removePermissionRequest);
    EXPECT_TRUE(removePermissionOutcome.IsSuccess());

    
    auto getRemovedPolicyOutcome = m_client->GetPolicy(getPolicyRequest);
    //lambda used to return an empty string here, now it doesn't but we aren't entirely sure if this is the expected behavior
    //or a regression. For now just handle both gracefully.
    if (!getRemovedPolicyOutcome.IsSuccess())
    {
       EXPECT_EQ(LambdaErrors::RESOURCE_NOT_FOUND, getRemovedPolicyOutcome.GetError().GetErrorType());
    }
    //Now we should get an empty policy a GetPolicy because we just removed it
    else
    {
        Aws::Lambda::Model::GetPolicyResult getRemovedPolicyResult = getRemovedPolicyOutcome.GetResult();
        auto getNewPolicy = Aws::Utils::Json::JsonValue(getRemovedPolicyResult.GetPolicy());
        EXPECT_EQ(0uL, getNewPolicy.View().GetArray("Statement").GetLength());
    }
}

TEST_F(FunctionTest, TestEventSources) 
{
    Aws::String simpleFunctionName = BuildResourceName(BASE_SIMPLE_FUNCTION);

    //Attempt to get the ARN of the stream we created during the init.
    DescribeStreamRequest describeStreamRequest;
    describeStreamRequest.SetStreamName(BASE_KINESIS_STREAM_NAME);

    Aws::String streamARN;
    bool done = false;
    while(!done)
    {
        DescribeStreamOutcome describeStreamOutcome = m_kinesis_client->DescribeStream(describeStreamRequest);
        if (describeStreamOutcome.IsSuccess())
        {
            done = true;
            DescribeStreamResult result = describeStreamOutcome.GetResult();
            const StreamDescription & description = result.GetStreamDescription();
            streamARN = description.GetStreamARN();
        }
        else
        {
            auto errCode = describeStreamOutcome.GetError().GetErrorType();
            ASSERT_TRUE(KinesisErrors::LIMIT_EXCEEDED == errCode);
            //If the limit was exceeded, wait and try again.
            std::this_thread::sleep_for(std::chrono::seconds(1));
        }
    }

    CreateEventSourceMappingRequest createEventSourceMappingRequest;
    createEventSourceMappingRequest.SetFunctionName(simpleFunctionName);
    createEventSourceMappingRequest.SetEnabled(false);
    //Not a real stream
    createEventSourceMappingRequest.SetEventSourceArn(streamARN);
    createEventSourceMappingRequest.SetStartingPosition(EventSourcePosition::LATEST);
    createEventSourceMappingRequest.SetBatchSize(99);

    CreateEventSourceMappingOutcome createOutcome = m_client->CreateEventSourceMapping(createEventSourceMappingRequest);
    Aws::String createdMappingUUID;
    if(createOutcome.IsSuccess())
    {
        CreateEventSourceMappingResult createResult = createOutcome.GetResult();
        EXPECT_EQ(99,createResult.GetBatchSize());
        EXPECT_NE(std::string::npos,createResult.GetFunctionArn().find(simpleFunctionName));
        EXPECT_EQ("Creating",createResult.GetState());
        EXPECT_EQ(streamARN,createResult.GetEventSourceArn());
        createdMappingUUID = createResult.GetUUID();
    }
    else
    {
        //This means the mapping still exists from a previous failed test. We'll skip the CreatedResult test, but continue with the existing mapping.
        //This should only happen during dev after test failures
        auto message = createOutcome.GetError().GetMessage();
        createdMappingUUID = message.substr(message.length()-36);
    }

    GetEventSourceMappingRequest getRequest;
    getRequest.SetUUID(createdMappingUUID);
    GetEventSourceMappingOutcome getEventSourceMappingOutcome = m_client->GetEventSourceMapping(getRequest);
    EXPECT_TRUE(getEventSourceMappingOutcome.IsSuccess());
    GetEventSourceMappingResult getResult = getEventSourceMappingOutcome.GetResult();
    EXPECT_EQ(99, getResult.GetBatchSize());
    EXPECT_NE(std::string::npos, getResult.GetFunctionArn().find(simpleFunctionName));

    //We're not actually changing anything, we're just testing a successful call and result
    UpdateEventSourceMappingRequest updateRequest;
    updateRequest.SetUUID(createdMappingUUID);
    updateRequest.SetEnabled(false);
    UpdateEventSourceMappingOutcome updateOutcome = m_client->UpdateEventSourceMapping(updateRequest);
    EXPECT_TRUE(updateOutcome.IsSuccess());
    UpdateEventSourceMappingResult updateResult = updateOutcome.GetResult();
    EXPECT_NE("Disabled",updateResult.GetState());//This may be 'Updating' or 'Disabling'

    DeleteEventSourceMappingRequest deleteRequest;
    deleteRequest.SetUUID(createdMappingUUID);
    DeleteEventSourceMappingOutcome deleteOutcome = m_client->DeleteEventSourceMapping(deleteRequest);
    EXPECT_TRUE(deleteOutcome.IsSuccess());
}

} // anonymous namespace

