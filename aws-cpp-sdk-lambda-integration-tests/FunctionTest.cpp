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
#include <aws/access-management/AccessManagementClient.h>
#include <aws/cognito-identity/CognitoIdentityClient.h>

using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Client;
using namespace Aws::Lambda;
using namespace Aws::Lambda::Model;
using namespace Aws::Kinesis;
using namespace Aws::Kinesis::Model;
using namespace Aws::CognitoIdentity;


#define TEST_FUNCTION_PREFIX  "IntegrationTest_"
#define KINESIS_STREAM_NAME  "AWSNativeSDKIntegrationTest"

//fill these in before running the test.
static const char* SIMPLE_FUNCTION = TEST_FUNCTION_PREFIX "Simple";
static const char* HANDLED_ERROR_FUNCTION = TEST_FUNCTION_PREFIX "HandledError";
static const char* UNHANDLED_ERROR_FUNCTION = TEST_FUNCTION_PREFIX "UnhandledError";

static const char* SIMPLE_FUNCTION_CODE = RESOURCES_DIR "/succeed.zip";
static const char* HANDLED_ERROR_FUNCTION_CODE = RESOURCES_DIR "/handled.zip";
static const char* UNHANDLED_ERROR_FUNCTION_CODE = RESOURCES_DIR "/unhandled.zip";

static const char* ALLOCATION_TAG = "FunctionTest";

static const char* IAM_ROLE_NAME = "AWSNativeSDKLambdaIntegrationTestRole";
static const char* IAM_POLICY_ARN = "arn:aws:iam::aws:policy/service-role/AWSLambdaKinesisExecutionRole";


namespace {

class FunctionTest : public ::testing::Test {

public:
    static std::shared_ptr<LambdaClient> m_client;
    static std::shared_ptr<KinesisClient> m_kinesis_client;
    static std::shared_ptr<Aws::Utils::RateLimits::RateLimiterInterface> m_limiter;
    static std::shared_ptr<Aws::IAM::Model::Role> m_role;
    static std::shared_ptr<Aws::AccessManagement::AccessManagementClient> m_accessManagementClient;
    static Aws::Map<Aws::String, Aws::String> functionArnMapping;

protected:

    static Aws::String MakeFilePath(const Aws::String& localFile)
    {
        #ifdef __ANDROID__
            return Aws::Platform::GetCacheDirectory() + localFile;
        #else
            return localFile;
        #endif
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
        auto iamClient = Aws::MakeShared<Aws::IAM::IAMClient>(ALLOCATION_TAG, clientConfig);
        auto cognitoClient = Aws::MakeShared<CognitoIdentityClient>(ALLOCATION_TAG);
        m_accessManagementClient = Aws::MakeShared<Aws::AccessManagement::AccessManagementClient>(ALLOCATION_TAG, iamClient, cognitoClient);
        
        DeleteIAMRole();
        CreateIAMRole();

        DeleteKinesisStream();
        CreateKinesisStream();

        // delete all functions, just in case
        DeleteAllFunctions();
        CreateAllFunctions();
    }

    static void TearDownTestCase()
    {
        DeleteAllFunctions();
        DeleteKinesisStream();
        DeleteIAMRole();

        m_limiter = nullptr;
        m_client = nullptr;
        m_kinesis_client = nullptr;
        m_role = nullptr;
        m_accessManagementClient = nullptr;
    }

    static void CreateAllFunctions()
    {
        CreateFunction(SIMPLE_FUNCTION, SIMPLE_FUNCTION_CODE);
        CreateFunction(HANDLED_ERROR_FUNCTION, HANDLED_ERROR_FUNCTION_CODE);
        CreateFunction(UNHANDLED_ERROR_FUNCTION, UNHANDLED_ERROR_FUNCTION_CODE);
    }

    static void DeleteAllFunctions()
    {
        DeleteFunction(SIMPLE_FUNCTION);
        DeleteFunction(HANDLED_ERROR_FUNCTION);
        DeleteFunction(UNHANDLED_ERROR_FUNCTION);
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

        WaitForFunctionStatus(functionName, ResourceStatusType::NOT_FOUND);
    }

    static void CreateFunction(Aws::String functionName,Aws::String zipLocation)
    {
        //Get the ARN off the IAM role.  We'll need this for creating the functions.
        auto & roleARN = m_role->GetArn();

	    std::cout << "Creating function " << functionName << " from location " << zipLocation << " with role arn " << roleARN << std::endl;

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

	    std::cout << "read zip file " << filePath << " of length " << buffer.str().length() << std::endl;

        functionCode.SetZipFile(Aws::Utils::ByteBuffer((unsigned char*)buffer.str().c_str(), buffer.str().length()));
        createFunctionRequest.SetCode(functionCode);
        createFunctionRequest.SetRuntime(Aws::Lambda::Model::Runtime::nodejs);

        CreateFunctionOutcome createFunctionOutcome = m_client->CreateFunction(createFunctionRequest);
        ASSERT_TRUE(createFunctionOutcome.IsSuccess());
        ASSERT_EQ(functionName,createFunctionOutcome.GetResult().GetFunctionName());
        ASSERT_EQ("test.handler",createFunctionOutcome.GetResult().GetHandler());
        ASSERT_EQ(roleARN,createFunctionOutcome.GetResult().GetRole());
        ASSERT_EQ("nodejs", Aws::Lambda::Model::RuntimeMapper::GetNameForRuntime(createFunctionOutcome.GetResult().GetRuntime()));
        functionArnMapping[functionName] = createFunctionOutcome.GetResult().GetFunctionArn();

        WaitForFunctionStatus(functionName, ResourceStatusType::READY);
    }

    static void CreateKinesisStream()
    {
        CreateStreamRequest createStreamRequest;
        createStreamRequest.SetStreamName(KINESIS_STREAM_NAME);
        createStreamRequest.SetShardCount(1);
        CreateStreamOutcome createOutcome = m_kinesis_client->CreateStream(createStreamRequest);
        if(!createOutcome.IsSuccess())
        {
            ASSERT_EQ(KinesisErrors::RESOURCE_IN_USE, createOutcome.GetError().GetErrorType());
        }

        WaitForKinesisStream(KINESIS_STREAM_NAME, ResourceStatusType::READY);

    }

    static void WaitForKinesisStream(const Aws::String& streamName, ResourceStatusType status)
    {
        DescribeStreamRequest describeStreamRequest;
        describeStreamRequest.SetStreamName(streamName);

        bool done = false;
        while(!done)
        {
            DescribeStreamOutcome describeStreamOutcome = m_kinesis_client->DescribeStream(describeStreamRequest);

            switch(status)
            {
            case ResourceStatusType::NOT_FOUND:
                if(!describeStreamOutcome.IsSuccess())
                {
                    return;
                }
                break;

            case ResourceStatusType::READY:
                if(describeStreamOutcome.IsSuccess())
                {
                    auto streamStatus = describeStreamOutcome.GetResult().GetStreamDescription().GetStreamStatus();
                    if(streamStatus == StreamStatus::ACTIVE)
                    {
                        return;
                    }
                }
                break;
            }

            std::this_thread::sleep_for(std::chrono::seconds(1));
        }
    }

    static void DeleteKinesisStream()
    {
        DeleteStreamRequest deleteStreamRequest;
        deleteStreamRequest.SetStreamName(KINESIS_STREAM_NAME);
        m_kinesis_client->DeleteStream(deleteStreamRequest);

        WaitForKinesisStream(KINESIS_STREAM_NAME, ResourceStatusType::NOT_FOUND);
    }

    static void CreateIAMRole()
    {
        //Who can assume this role, and what access conditions exist?
        char const * trustRelationship = 
            "{"
              "\"Version\": \"2012-10-17\","
              "\"Statement\": ["
                "{"
                   "\"Sid\": \"\","
                   "\"Effect\": \"Allow\","
                   "\"Principal\": {"
                     "\"Service\": \"lambda.amazonaws.com\""
                   "},"
                   "\"Action\": \"sts:AssumeRole\""
                "}"
              "]"
            "}";
        const bool roleCreationSuccessful = m_accessManagementClient->CreateRole(IAM_ROLE_NAME, trustRelationship, *m_role);
        ASSERT_TRUE(roleCreationSuccessful);

        //Apply the policy ARN saying what this role is allowed to do.
        const bool policyApplied = m_accessManagementClient->AttachPolicyToRole(IAM_POLICY_ARN, IAM_ROLE_NAME);
        ASSERT_TRUE(policyApplied);
    }

    static void DeleteIAMRole()
    {
        //This will return true even if the IAM role never existed.
        const bool removedSuccessfully = m_accessManagementClient->DeleteRole(IAM_ROLE_NAME);
        ASSERT_TRUE(removedSuccessfully);
    }
};

std::shared_ptr<LambdaClient> FunctionTest::m_client(nullptr);
std::shared_ptr<KinesisClient> FunctionTest::m_kinesis_client(nullptr);
std::shared_ptr<Aws::Utils::RateLimits::RateLimiterInterface> FunctionTest::m_limiter(nullptr);
std::shared_ptr<Aws::IAM::Model::Role> FunctionTest::m_role(nullptr);
std::shared_ptr< Aws::AccessManagement::AccessManagementClient > FunctionTest::m_accessManagementClient(nullptr);
Aws::Map<Aws::String, Aws::String> FunctionTest::functionArnMapping;


TEST_F(FunctionTest, TestListFunction)
{
    ListFunctionsRequest listFunctionsRequest;
    ListFunctionsOutcome listFunctionsOutcome = m_client->ListFunctions(listFunctionsRequest);

    EXPECT_TRUE(listFunctionsOutcome.IsSuccess());
    //We are just going to make sure the simple function above is in the list
    Aws::Vector <FunctionConfiguration> filteredFunctionConfigurations;
    auto functions =listFunctionsOutcome.GetResult().GetFunctions();
    std::copy_if(functions.cbegin(), functions.cend(),
    std::back_inserter(filteredFunctionConfigurations),
    [](const FunctionConfiguration& function) { return function.GetFunctionName().find(SIMPLE_FUNCTION) == 0;});

    ASSERT_EQ(1uL, filteredFunctionConfigurations.size());
    EXPECT_EQ(SIMPLE_FUNCTION, filteredFunctionConfigurations[0].GetFunctionName());
}

TEST_F(FunctionTest, TestGetFunction)
{
    GetFunctionRequest getFunctionRequest;
    getFunctionRequest.SetFunctionName(SIMPLE_FUNCTION);
    GetFunctionOutcome getFunctionOutcome = m_client->GetFunction(getFunctionRequest);
    EXPECT_TRUE(getFunctionOutcome.IsSuccess());

    GetFunctionResult getFunctionResult = getFunctionOutcome.GetResult();
    EXPECT_EQ(Runtime::nodejs, getFunctionResult.GetConfiguration().GetRuntime());
    EXPECT_EQ("test.handler",getFunctionResult.GetConfiguration().GetHandler());
    EXPECT_EQ(SIMPLE_FUNCTION,getFunctionResult.GetConfiguration().GetFunctionName());
    //Just see that is looks like an aws url
    EXPECT_NE(std::string::npos, getFunctionResult.GetCode().GetLocation().find("amazonaws"));
    EXPECT_EQ("S3", getFunctionResult.GetCode().GetRepositoryType());
}

TEST_F(FunctionTest, TestGetFunctionConfiguration)
{
    GetFunctionConfigurationRequest getFunctionConfigurationRequest;
    getFunctionConfigurationRequest.SetFunctionName(SIMPLE_FUNCTION);
    GetFunctionConfigurationOutcome getFunctionConfigurationOutcome = m_client->GetFunctionConfiguration(getFunctionConfigurationRequest); 
    EXPECT_TRUE(getFunctionConfigurationOutcome.IsSuccess());

    GetFunctionConfigurationResult getFunctionConfigurationResult = getFunctionConfigurationOutcome.GetResult();
    EXPECT_EQ(Runtime::nodejs, getFunctionConfigurationResult.GetRuntime());
    EXPECT_EQ("test.handler",getFunctionConfigurationResult.GetHandler());
    EXPECT_EQ(SIMPLE_FUNCTION,getFunctionConfigurationResult.GetFunctionName());
}


TEST_F(FunctionTest, TestInvokeEvent)
{
    InvokeRequest invokeRequest;
    invokeRequest.SetFunctionName(SIMPLE_FUNCTION);
    invokeRequest.SetInvocationType(InvocationType::Event);

    InvokeOutcome invokeOutcome = m_client->Invoke(invokeRequest);
    EXPECT_TRUE(invokeOutcome.IsSuccess());
    EXPECT_EQ(202,invokeOutcome.GetResult().GetStatusCode());
}

TEST_F(FunctionTest, TestInvokeEventFromARN)
{
    InvokeRequest invokeRequest;
    invokeRequest.SetFunctionName(functionArnMapping[SIMPLE_FUNCTION]);
    invokeRequest.SetInvocationType(InvocationType::Event);

    InvokeOutcome invokeOutcome = m_client->Invoke(invokeRequest);
    EXPECT_TRUE(invokeOutcome.IsSuccess());
    EXPECT_EQ(202,invokeOutcome.GetResult().GetStatusCode());
}


TEST_F(FunctionTest, TestInvokeDryRun)
{
    InvokeRequest invokeRequest;
    invokeRequest.SetFunctionName(SIMPLE_FUNCTION);
    invokeRequest.SetInvocationType(InvocationType::DryRun);

    InvokeOutcome invokeOutcome = m_client->Invoke(invokeRequest);
    EXPECT_TRUE(invokeOutcome.IsSuccess());
    EXPECT_EQ(204,invokeOutcome.GetResult().GetStatusCode());
}

TEST_F(FunctionTest, TestInvokeSync)
{
    InvokeRequest invokeRequest;
    invokeRequest.SetFunctionName(SIMPLE_FUNCTION);
    invokeRequest.SetInvocationType(InvocationType::RequestResponse);
    invokeRequest.SetContentType("application/javascript");
    invokeRequest.SetLogType(LogType::Tail);
    std::shared_ptr<Aws::IOStream> payload = Aws::MakeShared<Aws::StringStream>("FunctionTest");
    Aws::Utils::Json::JsonValue jsonPayload;
    jsonPayload.WithString("input", "ThePayload");
    *payload << jsonPayload.WriteReadable();
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
    EXPECT_EQ("ThePayload", jsonResponse.GetString("input"));
}


TEST_F(FunctionTest, TestInvokeSyncHandledFunctionError)
{
    InvokeRequest invokeRequest;
    invokeRequest.SetFunctionName(HANDLED_ERROR_FUNCTION);
    invokeRequest.SetInvocationType(InvocationType::RequestResponse);
    invokeRequest.SetContentType("application/javascript");
    invokeRequest.SetLogType(LogType::Tail);
    std::shared_ptr<Aws::IOStream> payload = Aws::MakeShared<Aws::StringStream>("FunctionTest");
    Aws::Utils::Json::JsonValue jsonPayload;
    jsonPayload.WithString("input", "ThePayload");
    *payload << jsonPayload.WriteReadable();
    invokeRequest.SetBody(payload);


    InvokeOutcome invokeOutcome = m_client->Invoke(invokeRequest);
    EXPECT_TRUE(invokeOutcome.IsSuccess());
    const auto& result = invokeOutcome.GetResult();
    EXPECT_EQ(200,result.GetStatusCode());

    //This is the same as the last test, but we should have a FunctionError
    EXPECT_EQ("Handled", result.GetFunctionError());

}

TEST_F(FunctionTest, TestInvokeSyncUnhandledFunctionError)
{
    InvokeRequest invokeRequest;
    invokeRequest.SetFunctionName(UNHANDLED_ERROR_FUNCTION);
    invokeRequest.SetInvocationType(InvocationType::RequestResponse);
    invokeRequest.SetContentType("application/javascript");
    invokeRequest.SetLogType(LogType::Tail);
    std::shared_ptr<Aws::IOStream> payload = Aws::MakeShared<Aws::StringStream>("FunctionTest");
    Aws::Utils::Json::JsonValue jsonPayload;
    jsonPayload.WithString("input", "ThePayload");
    *payload << jsonPayload.WriteReadable();
    invokeRequest.SetBody(payload);

    InvokeOutcome invokeOutcome = m_client->Invoke(invokeRequest);
    EXPECT_TRUE(invokeOutcome.IsSuccess());
    const auto& result = invokeOutcome.GetResult();
    EXPECT_EQ(200,result.GetStatusCode());

    //This is the same as the last test, but we should have an unhandled FunctionError
    //This test is unhandled because it times out
    EXPECT_EQ("Unhandled", result.GetFunctionError());

}

TEST_F(FunctionTest, TestPermissions)
{
    AddPermissionRequest addPermissionRequest;
    addPermissionRequest.SetFunctionName(SIMPLE_FUNCTION);
    addPermissionRequest.SetAction("lambda:Invoke");
    addPermissionRequest.SetPrincipal("s3.amazonaws.com");
    addPermissionRequest.SetStatementId("12345");

    auto outcome = m_client->AddPermission(addPermissionRequest);
    ASSERT_TRUE(outcome.IsSuccess());

    AddPermissionResult result = outcome.GetResult();
    auto statement = Aws::Utils::Json::JsonValue(result.GetStatement());

    EXPECT_EQ("12345",statement.GetString("Sid"));
    EXPECT_NE(std::string::npos, statement.GetString("Resource").find(SIMPLE_FUNCTION));


    GetPolicyRequest getPolicyRequest;
    getPolicyRequest.SetFunctionName(SIMPLE_FUNCTION);
    auto getPolicyOutcome = m_client->GetPolicy(getPolicyRequest);
    //If this fails, stop.
    ASSERT_TRUE(getPolicyOutcome.IsSuccess());
    GetPolicyResult getPolicyResult = getPolicyOutcome.GetResult();
    auto getPolicyStatement = Aws::Utils::Json::JsonValue(getPolicyResult.GetPolicy());

    EXPECT_EQ("12345", getPolicyStatement.GetArray("Statement").GetItem(0).GetString("Sid"));
    EXPECT_EQ("lambda:Invoke", getPolicyStatement.GetArray("Statement").GetItem(0).GetString("Action"));

    RemovePermissionRequest removePermissionRequest;
    removePermissionRequest.SetFunctionName(SIMPLE_FUNCTION);
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
        GetPolicyResult getRemovedPolicyResult = getRemovedPolicyOutcome.GetResult();
        auto getNewPolicy = Aws::Utils::Json::JsonValue(getRemovedPolicyResult.GetPolicy());
        EXPECT_EQ(0uL, getNewPolicy.GetArray("Statement").GetLength());
    }
}

TEST_F(FunctionTest, TestEventSources) 
{
    //Attempt to get the ARN of the stream we created during the init.
    DescribeStreamRequest describeStreamRequest;
    describeStreamRequest.SetStreamName(KINESIS_STREAM_NAME);

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
    createEventSourceMappingRequest.SetFunctionName(SIMPLE_FUNCTION);
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
        EXPECT_NE(std::string::npos,createResult.GetFunctionArn().find(SIMPLE_FUNCTION));
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
    EXPECT_NE(std::string::npos, getResult.GetFunctionArn().find(SIMPLE_FUNCTION));

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

