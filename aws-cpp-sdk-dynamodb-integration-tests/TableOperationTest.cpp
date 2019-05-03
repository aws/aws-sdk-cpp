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
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/memory/stl/AWSSet.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/ratelimiter/DefaultRateLimiter.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/dynamodb/DynamoDBClient.h>
#include <aws/dynamodb/DynamoDBErrors.h>
#include <aws/dynamodb/model/CreateTableRequest.h>
#include <aws/dynamodb/model/DeleteTableRequest.h>
#include <aws/dynamodb/model/DescribeTableRequest.h>
#include <aws/dynamodb/model/ListTablesRequest.h>
#include <aws/dynamodb/model/UpdateTableRequest.h>
#include <aws/dynamodb/model/PutItemRequest.h>
#include <aws/dynamodb/model/GetItemRequest.h>
#include <aws/dynamodb/model/ScanRequest.h>
#include <aws/dynamodb/model/UpdateItemRequest.h>
#include <aws/dynamodb/model/DeleteItemRequest.h>
#include <aws/testing/TestingEnvironment.h>
#include <aws/core/utils/UUID.h>

#include <algorithm>

using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Client;
using namespace Aws::DynamoDB;
using namespace Aws::DynamoDB::Model;

#define TEST_TABLE_PREFIX  "IntegrationTest_"

//fill these in before running the test.
static const char HASH_KEY_NAME[] = "HashKey";
static const char ENDPOINT_OVERRIDE[] = ""; // Use localhost:8000 for DynamoDb Local

static const char BASE_SIMPLE_TABLE[] = "Simple";
static const char BASE_THROUGHPUT_TABLE[] = "Throughput";
static const char BASE_CONDITION_TABLE[] = "ConditionCheck";
static const char BASE_VALIDATION_TABLE[] = "Validation";
static const char BASE_CRUD_TEST_TABLE[] = "Crud";
static const char BASE_CRUD_CALLBACKS_TEST_TABLE[] = "Crud_WithCallbacks";
static const char BASE_THROTTLED_TEST_TABLE[] = "Throttled";
static const char BASE_LIMITER_TEST_TABLE[] = "Limiter";
static const char BASE_ATTRIBUTEVALUE_TEST_TABLE[] = "AttributeValue";

static const char ALLOCATION_TAG[] = "TableOperationTest";

namespace {

static std::string DYNAMODB_INTEGRATION_TEST_ID;

Aws::String GetTablePrefix()
{
    return Aws::Testing::GetAwsResourcePrefix() + TEST_TABLE_PREFIX + DYNAMODB_INTEGRATION_TEST_ID.c_str() + "_";
}

Aws::String BuildTableName(const char* baseName)
{
    return GetTablePrefix() + baseName;
}

class TableOperationTest : public ::testing::Test {

public:
    static std::shared_ptr<DynamoDBClient> m_client;
    static std::shared_ptr<Aws::Utils::RateLimits::RateLimiterInterface> m_limiter;

    Aws::Vector<GetItemOutcome> getItemResultsFromCallbackTest;
    Aws::Vector<PutItemOutcome> putItemResultsFromCallbackTest;
    Aws::Vector<DeleteItemOutcome> deleteItemResultsFromCallbackTest;
    Aws::Vector<UpdateItemOutcome> updateItemResultsFromCallbackTest;

    //the idea here, is that the test will kick off a bunch of requests and need to wait for them to finish.
    //the test will call wait on the semaphore and when the callbacks have processed all 50 of the requests, they will
    //signal allowing the test thread to continue on.
    std::mutex getItemResultMutex;
    std::condition_variable getItemResultSemaphore;

    std::mutex putItemResultMutex;
    std::condition_variable putItemResultSemaphore;

    std::mutex deleteItemResultMutex;
    std::condition_variable deleteItemResultSemaphore;

    std::mutex updateItemResultMutex;
    std::condition_variable updateItemResultSemaphore;

    void GetItemOutcomeReceived(const DynamoDBClient* sender, const GetItemRequest& request, const GetItemOutcome& outcome, const std::shared_ptr<const AsyncCallerContext>& context)
    {
        AWS_UNREFERENCED_PARAM(sender);
        AWS_UNREFERENCED_PARAM(request);
        AWS_UNREFERENCED_PARAM(context);

        std::lock_guard<std::mutex> locker(getItemResultMutex);
        getItemResultsFromCallbackTest.push_back(outcome);

        if (getItemResultsFromCallbackTest.size() == 50)
        {
            getItemResultSemaphore.notify_all();
        }
    }

    void PutItemOutcomeReceived(const DynamoDBClient* sender, const PutItemRequest& request, const PutItemOutcome& outcome, const std::shared_ptr<const AsyncCallerContext>& context)
    {
        AWS_UNREFERENCED_PARAM(sender);
        AWS_UNREFERENCED_PARAM(request);
        AWS_UNREFERENCED_PARAM(context);

        std::lock_guard<std::mutex> locker(putItemResultMutex);
        putItemResultsFromCallbackTest.push_back(outcome);

        if (putItemResultsFromCallbackTest.size() == 50)
        {
            putItemResultSemaphore.notify_all();
        }
    }

    void DeleteItemOutcomeReceived(const DynamoDBClient* sender, const DeleteItemRequest& request, const DeleteItemOutcome& outcome, const std::shared_ptr<const AsyncCallerContext>& context)
    {
        AWS_UNREFERENCED_PARAM(sender);
        AWS_UNREFERENCED_PARAM(request);
        AWS_UNREFERENCED_PARAM(context);

        std::lock_guard<std::mutex> locker(deleteItemResultMutex);
        deleteItemResultsFromCallbackTest.push_back(outcome);

        if (deleteItemResultsFromCallbackTest.size() == 50)
        {
            deleteItemResultSemaphore.notify_all();
        }
    }

    void UpdateItemOutcomeReceived(const DynamoDBClient* sender, const UpdateItemRequest& request, const UpdateItemOutcome& outcome, const std::shared_ptr<const AsyncCallerContext>& context)
    {
        AWS_UNREFERENCED_PARAM(sender);
        AWS_UNREFERENCED_PARAM(request);
        AWS_UNREFERENCED_PARAM(context);

        std::lock_guard<std::mutex> locker(updateItemResultMutex);
        updateItemResultsFromCallbackTest.push_back(outcome);

        if (updateItemResultsFromCallbackTest.size() == 50)
        {
            updateItemResultSemaphore.notify_all();
        }
    }

protected:

    static void SetUpClient(Aws::Http::TransferLibType transferType)
    {
        // Create a client
        ClientConfiguration config;
        config.endpointOverride = ENDPOINT_OVERRIDE;
        config.scheme = Scheme::HTTPS;
        config.connectTimeoutMs = 30000;
        config.requestTimeoutMs = 30000;
        config.readRateLimiter = m_limiter;
        config.writeRateLimiter = m_limiter;
        config.httpLibOverride = transferType;
        config.executor = Aws::MakeShared<Aws::Utils::Threading::PooledThreadExecutor>(ALLOCATION_TAG, 4);
        config.disableExpectHeader = true;

        //to test proxy functionality, uncomment the next two lines.
        //config.proxyHost = "localhost";
        //config.proxyPort = 8080;
        m_client = Aws::MakeShared<DynamoDBClient>(ALLOCATION_TAG, config);
    }

    static void SetUpTestCase()
    {
        m_limiter = Aws::MakeShared<Aws::Utils::RateLimits::DefaultRateLimiter<>>(ALLOCATION_TAG, 200000);
        SetUpClient(Aws::Http::TransferLibType::DEFAULT_CLIENT);
        DYNAMODB_INTEGRATION_TEST_ID = Aws::String(Aws::Utils::UUID::RandomUUID()).c_str();
    }

    static void TearDownTestCase()
    {
        DeleteAllTables();
        m_limiter = nullptr;
        m_client = nullptr;
    }

    static void DeleteAllTables()
    {
        DeleteTable(BuildTableName(BASE_SIMPLE_TABLE));
        DeleteTable(BuildTableName(BASE_THROUGHPUT_TABLE));
        DeleteTable(BuildTableName(BASE_CONDITION_TABLE));
        DeleteTable(BuildTableName(BASE_VALIDATION_TABLE));
        DeleteTable(BuildTableName(BASE_CRUD_TEST_TABLE));
        DeleteTable(BuildTableName(BASE_CRUD_CALLBACKS_TEST_TABLE));
        DeleteTable(BuildTableName(BASE_THROTTLED_TEST_TABLE));
        DeleteTable(BuildTableName(BASE_LIMITER_TEST_TABLE));
        DeleteTable(BuildTableName(BASE_ATTRIBUTEVALUE_TEST_TABLE));
    }

    void CreateTable(Aws::String tableName, long readCap, long writeCap)
    {
        //create a table and verify it's output
        CreateTableRequest createTableRequest;
        AttributeDefinition hashKey;
        hashKey.SetAttributeName(HASH_KEY_NAME);
        hashKey.SetAttributeType(ScalarAttributeType::S);
        createTableRequest.AddAttributeDefinitions(hashKey);
        KeySchemaElement hashKeySchemaElement;
        hashKeySchemaElement.WithAttributeName(HASH_KEY_NAME).WithKeyType(KeyType::HASH);
        createTableRequest.AddKeySchema(hashKeySchemaElement);
        ProvisionedThroughput provisionedThroughput;
        provisionedThroughput.SetReadCapacityUnits(readCap);
        provisionedThroughput.SetWriteCapacityUnits(writeCap);
        createTableRequest.WithProvisionedThroughput(provisionedThroughput);
        createTableRequest.WithTableName(tableName);

        CreateTableOutcome createTableOutcome = m_client->CreateTable(createTableRequest);
        if (createTableOutcome.IsSuccess())
        {
            ASSERT_EQ(tableName, createTableOutcome.GetResult().GetTableDescription().GetTableName());
        }
        else
        {
            ASSERT_EQ(createTableOutcome.GetError().GetErrorType(), DynamoDBErrors::RESOURCE_IN_USE);
        }
        //since we need to wait for the table to finish creating anyways,
        //let's go ahead and test describe table api while we are at it.
        WaitUntilActive(tableName);
    }

    static void DeleteTable(Aws::String tableName)
    {
        DeleteTableRequest deleteTableRequest;
        deleteTableRequest.SetTableName(tableName);

        DeleteTableOutcome deleteTableOutcome = m_client->DeleteTable(deleteTableRequest);
        ASSERT_TRUE(deleteTableOutcome.IsSuccess());
    }

    DescribeTableResult WaitUntilActive(const Aws::String tableName)
    {
        DescribeTableRequest describeTableRequest;
        describeTableRequest.SetTableName(tableName);
        bool shouldContinue = true;
        DescribeTableOutcome outcome = m_client->DescribeTable(describeTableRequest);

        while (shouldContinue)
        {     
            if (outcome.IsSuccess() && outcome.GetResult().GetTable().GetTableStatus() == TableStatus::ACTIVE)
            {
                break;
            }
            else
            {
                std::this_thread::sleep_for(std::chrono::seconds(1));
            }

            outcome = m_client->DescribeTable(describeTableRequest);
        }

        return outcome.GetResult();
    }
};

std::shared_ptr<DynamoDBClient> TableOperationTest::m_client(nullptr);
std::shared_ptr<Aws::Utils::RateLimits::RateLimiterInterface> TableOperationTest::m_limiter(nullptr);

TEST_F(TableOperationTest, TestListTable)
{
    AWS_LOGSTREAM_TRACE(ALLOCATION_TAG, "TestListTable")

    Aws::String simpleTableName = BuildTableName(BASE_SIMPLE_TABLE);
    CreateTable(simpleTableName, 10, 10);

    Aws::Vector<Aws::String> filteredTableNames;

    ListTablesRequest listTablesRequest;
    listTablesRequest.SetLimit(10);

    bool done = false;
    while(!done)
    {
        ListTablesOutcome listTablesOutcome = m_client->ListTables(listTablesRequest);
        EXPECT_TRUE(listTablesOutcome.IsSuccess());

        auto tableNames = listTablesOutcome.GetResult().GetTableNames();
        std::copy_if(tableNames.cbegin(),
                     tableNames.cend(),
                     std::back_inserter(filteredTableNames),
                     [](const Aws::String& tableName) { return tableName.find(GetTablePrefix()) == 0; });

        listTablesRequest.SetExclusiveStartTableName(listTablesOutcome.GetResult().GetLastEvaluatedTableName());
        done = listTablesRequest.GetExclusiveStartTableName().empty();
    }

    EXPECT_EQ(1uL, filteredTableNames.size());
    if(filteredTableNames.size() > 0)
    {
        EXPECT_EQ(simpleTableName, filteredTableNames[0]);
    }
}

TEST_F(TableOperationTest, TestUpdateThroughput)
{
    AWS_LOGSTREAM_TRACE(ALLOCATION_TAG, "TestUpdateThroughput")

    Aws::String simpleTableName = BuildTableName(BASE_THROUGHPUT_TABLE);
    CreateTable(simpleTableName, 10, 10);

    // Update the table and make sure it works.
    long newReadCapacity = 15;
    UpdateTableRequest updateTableRequest;
    updateTableRequest.SetTableName(simpleTableName);
    ProvisionedThroughput provisionedThroughput;
    provisionedThroughput.SetReadCapacityUnits(newReadCapacity);
    provisionedThroughput.SetWriteCapacityUnits(10); // TODO: Do we need this??
    updateTableRequest.SetProvisionedThroughput(provisionedThroughput);

    UpdateTableOutcome updateTableOutcome = m_client->UpdateTable(updateTableRequest);

    DescribeTableResult describeTableResult = WaitUntilActive(simpleTableName);

    //make sure update worked.
    EXPECT_EQ(newReadCapacity, describeTableResult.GetTable().GetProvisionedThroughput().GetReadCapacityUnits());
}

TEST_F(TableOperationTest, TestConditionalCheckFailure)
{
    AWS_LOGSTREAM_TRACE(ALLOCATION_TAG, "TestConditionalCheckFailure")

    Aws::String simpleTableName = BuildTableName(BASE_CONDITION_TABLE);
    CreateTable(simpleTableName, 10, 10);

    AttributeValue homer;
    homer.SetS("Homer");

    AttributeValue bart;
    bart.SetS("Bart");

    AttributeValue lisa;
    lisa.SetS("Lisa");

    AttributeValue hashKeyAttribute;
    hashKeyAttribute.SetS("TestItem");

    PutItemRequest putRequest;
    putRequest.SetTableName(simpleTableName);
    putRequest.AddItem(HASH_KEY_NAME, hashKeyAttribute);
    putRequest.AddItem("Simpson", homer);
    m_client->PutItem(putRequest);

    PutItemRequest badRequest;
    badRequest.SetTableName(simpleTableName);
    badRequest.AddItem(HASH_KEY_NAME, hashKeyAttribute);
    badRequest.AddItem("Simpson", bart);

    ExpectedAttributeValue expected;
    expected.SetValue(lisa);
    expected.SetComparisonOperator(ComparisonOperator::EQ);
    badRequest.AddExpected("Simpson", expected);
    PutItemOutcome result = m_client->PutItem(badRequest);
    ASSERT_FALSE(result.IsSuccess());
    ASSERT_EQ(DynamoDBErrors::CONDITIONAL_CHECK_FAILED, result.GetError().GetErrorType());
}

TEST_F(TableOperationTest, TestValidationError)
{
    AWS_LOGSTREAM_TRACE(ALLOCATION_TAG, "TestValidationError")

    Aws::String simpleTableName = BuildTableName(BASE_VALIDATION_TABLE);
    CreateTable(simpleTableName, 10, 10);

    AttributeValue hashKeyAttribute;
    hashKeyAttribute.SetS("someValue");

    PutItemRequest request;
    request.SetTableName(simpleTableName);
    request.AddItem("TotallyNotTheHashKey", hashKeyAttribute);

    PutItemOutcome result = m_client->PutItem(request);
    ASSERT_FALSE(result.IsSuccess());
    ASSERT_EQ(DynamoDBErrors::VALIDATION, result.GetError().GetErrorType());
}


TEST_F(TableOperationTest, TestThrottling)
{
    AWS_LOGSTREAM_TRACE(ALLOCATION_TAG, "TestThrottling")

    Aws::String throttledTestTableName = BuildTableName(BASE_THROTTLED_TEST_TABLE);
    CreateTable(throttledTestTableName, 1, 1);

    // Blast the table until it throttles
    Aws::String testValueColumnName = "TestValue";
    Aws::Vector<PutItemOutcomeCallable> putItemResults;
    Aws::StringStream ss;

    // Under ideal circumstances, Dynamo can offer up to 300 secs of bursting, so we must exceed that
    for (unsigned i = 0; i < 500; ++i)
    {
        ss << HASH_KEY_NAME << i;
        PutItemRequest putItemRequest;
        putItemRequest.SetTableName(throttledTestTableName);
        AttributeValue hashKeyAttribute;
        hashKeyAttribute.SetS(ss.str());
        ss.str("");
        putItemRequest.AddItem(HASH_KEY_NAME, hashKeyAttribute);
        AttributeValue testValueAttribute;
        ss << testValueColumnName << i;
        testValueAttribute.SetS(ss.str());
        putItemRequest.AddItem(testValueColumnName, testValueAttribute);
        ss.str("");

        putItemResults.push_back(m_client->PutItemCallable(putItemRequest));
    }

    int throttleCount = 0;
    for (auto& putItemResult : putItemResults)
    {
        PutItemOutcome outcome = putItemResult.get();
        if (!outcome.IsSuccess())
        {
            AWSError<DynamoDBErrors> error = outcome.GetError();
            if (error.GetErrorType() == DynamoDBErrors::PROVISIONED_THROUGHPUT_EXCEEDED)
            {
                if (++throttleCount >= 10)
                {
                    // Good, the client is doing what it is supposed to do.  No need to beat a dead horse.
                    // TODO: We need to stop the in-flight requests before the client gets deleted
                    break;
                }
            }
            else
            {
                FAIL() << "Unexpected Error: " << error.GetMessage();
            }
        }
    }
}

TEST_F(TableOperationTest, TestCrudOperations)
{
    AWS_LOGSTREAM_TRACE(ALLOCATION_TAG, "TestCrudOperations")

    Aws::String crudTestTableName = BuildTableName(BASE_CRUD_TEST_TABLE);
    CreateTable(crudTestTableName, 50, 50);

    //now put 50 items in the table asynchronously
    Aws::String testValueColumnName = "TestValue";
    Aws::Vector<PutItemOutcomeCallable> putItemResults;
    Aws::StringStream ss;
    for (unsigned i = 0; i < 50; ++i)
    {
        ss << HASH_KEY_NAME << i;
        PutItemRequest putItemRequest;
        putItemRequest.SetTableName(crudTestTableName);
        AttributeValue hashKeyAttribute;
        hashKeyAttribute.SetS(ss.str());
        ss.str("");
        putItemRequest.AddItem(HASH_KEY_NAME, hashKeyAttribute);
        AttributeValue testValueAttribute;
        ss << testValueColumnName << i;
        testValueAttribute.SetS(ss.str());
        putItemRequest.AddItem(testValueColumnName, testValueAttribute);
        ss.str("");

        putItemResults.push_back(m_client->PutItemCallable(putItemRequest));
    }

    //wait for put operations to finish
    //isn't c++ 11 nice!
    for (auto& putItemResult : putItemResults)
    {
        putItemResult.get();
    }

    //now we get the items we were supposed to be putting and make sure
    //they were put successfully.
    Aws::Vector<GetItemOutcomeCallable> getItemOutcomes;
    for (unsigned i = 0; i < 50; ++i)
    {
        GetItemRequest getItemRequest;
        ss << HASH_KEY_NAME << i;
        AttributeValue hashKey;
        hashKey.SetS(ss.str());
        getItemRequest.AddKey(HASH_KEY_NAME, hashKey);
        getItemRequest.SetTableName(crudTestTableName);

        Aws::Vector<Aws::String> attributesToGet;
        attributesToGet.push_back(HASH_KEY_NAME);
        attributesToGet.push_back(testValueColumnName);
        ss.str("");
        getItemOutcomes.push_back(m_client->GetItemCallable(getItemRequest));
    }

    //verify the values
    for (unsigned i = 0; i < 50; ++i)
    {
        GetItemOutcome outcome = getItemOutcomes[i].get();
        EXPECT_TRUE(outcome.IsSuccess());
        GetItemResult result = outcome.GetResult();
        ss << HASH_KEY_NAME << i;
        Aws::Map<Aws::String, AttributeValue> returnedItemCollection = result.GetItem();
        EXPECT_EQ(ss.str(), returnedItemCollection[HASH_KEY_NAME].GetS());
        ss.str("");
        ss << testValueColumnName << i;
        EXPECT_EQ(ss.str(), returnedItemCollection[testValueColumnName].GetS());
        ss.str("");
    }

    ScanRequest scanRequest;
    scanRequest.WithTableName(crudTestTableName);

    ScanOutcome scanOutcome = m_client->Scan(scanRequest);
    EXPECT_TRUE(scanOutcome.IsSuccess());
    EXPECT_EQ(50, scanOutcome.GetResult().GetCount());

    //now update the existing values
    Aws::Vector<UpdateItemOutcomeCallable> updateItemOutcomes;
    for (unsigned i = 0; i < 50; ++i)
    {
        ss << HASH_KEY_NAME << i;
        AttributeValue hashKeyAttribute;
        hashKeyAttribute.SetS(ss.str());
        UpdateItemRequest updateItemRequest;
        updateItemRequest.SetTableName(crudTestTableName);
        updateItemRequest.AddKey(HASH_KEY_NAME, AttributeValue(ss.str()));
        ss.str("");
        AttributeValueUpdate testValueAttribute;
        ss << testValueColumnName << i * 2;
        testValueAttribute.SetAction(AttributeAction::PUT);
        AttributeValue valueAttribute;
        valueAttribute.SetS(ss.str());
        testValueAttribute.SetValue(valueAttribute);
        updateItemRequest.AddAttributeUpdates(testValueColumnName, testValueAttribute);
        ss.str("");
        updateItemOutcomes.push_back(m_client->UpdateItemCallable(updateItemRequest));
    }

    //wait for operations to finish.
    for (auto& updateItemOutcome : updateItemOutcomes)
    {
        updateItemOutcome.get();
    }

    //now get the items again, making sure they were properly
    //updated.
    getItemOutcomes.clear();

    for (unsigned i = 0; i < 50; ++i)
    {
        GetItemRequest getItemRequest;
        ss << HASH_KEY_NAME << i;
        AttributeValue hashKey;
        hashKey.SetS(ss.str());
        getItemRequest.AddKey(HASH_KEY_NAME, hashKey);
        getItemRequest.SetTableName(crudTestTableName);

        Aws::Vector<Aws::String> attributesToGet;
        attributesToGet.push_back(HASH_KEY_NAME);
        attributesToGet.push_back(testValueColumnName);
        ss.str("");
        getItemOutcomes.push_back(m_client->GetItemCallable(getItemRequest));
    }

    //verify values.
    for (unsigned i = 0; i < 50; ++i)
    {
        GetItemOutcome outcome = getItemOutcomes[i].get();
        EXPECT_TRUE(outcome.IsSuccess());
        GetItemResult result = outcome.GetResult();
        ss << HASH_KEY_NAME << i;
        Aws::Map<Aws::String, AttributeValue> returnedItemCollection = result.GetItem();
        EXPECT_EQ(ss.str(), returnedItemCollection[HASH_KEY_NAME].GetS());
        ss.str("");
        ss << testValueColumnName << i * 2;
        EXPECT_EQ(ss.str(), returnedItemCollection[testValueColumnName].GetS());
        ss.str("");
    }

    //now delete all the items we added.
    Aws::Vector<DeleteItemOutcomeCallable> deleteItemOutcomes;
    for (unsigned i = 0; i < 50; ++i)
    {
        DeleteItemRequest deleteItemRequest;
        ss << HASH_KEY_NAME << i;
        AttributeValue hashKey;
        hashKey.SetS(ss.str());
        deleteItemRequest.AddKey(HASH_KEY_NAME, hashKey);
        deleteItemRequest.SetTableName(crudTestTableName);
        deleteItemRequest.SetReturnValues(ReturnValue::ALL_OLD);
        ss.str("");

        deleteItemOutcomes.push_back(m_client->DeleteItemCallable(deleteItemRequest));
    }

    //verify that we properly returned the old values.
    unsigned count = 0;
    for (DeleteItemOutcomeCallable& deleteItemOutcome : deleteItemOutcomes)
    {
        DeleteItemOutcome outcome = deleteItemOutcome.get();
        EXPECT_TRUE(outcome.IsSuccess());
        DeleteItemResult deleteItemResult = outcome.GetResult();
        Aws::Map<Aws::String, AttributeValue> attributes = deleteItemResult.GetAttributes();
        ss << HASH_KEY_NAME << count++;
        EXPECT_EQ(ss.str(), attributes[HASH_KEY_NAME].GetS());
        ss.str("");
    }
}

TEST_F(TableOperationTest, TestCrudOperationsWithCallbacks)
{
    AWS_LOGSTREAM_TRACE(ALLOCATION_TAG, "TestCrudOperationsWithCallbacks")

    Aws::String crudCallbacksTestTableName = BuildTableName(BASE_CRUD_CALLBACKS_TEST_TABLE);
    CreateTable(crudCallbacksTestTableName, 50, 50);

    //registering a member function is ugly business even in modern c++
    auto putItemHandler = std::bind(&TableOperationTest::PutItemOutcomeReceived, this, std::placeholders::_1, std::placeholders::_2,
                                    std::placeholders::_3, std::placeholders::_4);

    auto getItemHandler = std::bind(&TableOperationTest::GetItemOutcomeReceived, this, std::placeholders::_1, std::placeholders::_2,
            std::placeholders::_3, std::placeholders::_4);

    auto deleteItemHandler = std::bind(&TableOperationTest::DeleteItemOutcomeReceived, this, std::placeholders::_1, std::placeholders::_2,
            std::placeholders::_3, std::placeholders::_4);

    auto updateItemHandler = std::bind(&TableOperationTest::UpdateItemOutcomeReceived, this, std::placeholders::_1, std::placeholders::_2,
                                       std::placeholders::_3, std::placeholders::_4);
    //now put 50 items in the table asynchronously
    Aws::String testValueColumnName = "TestValue";
    Aws::StringStream ss;
    for (unsigned i = 0; i < 50; ++i)
    {
        ss << HASH_KEY_NAME << i;
        PutItemRequest putItemRequest;
        putItemRequest.SetTableName(crudCallbacksTestTableName);
        AttributeValue hashKeyAttribute;
        hashKeyAttribute.SetS(ss.str());
        ss.str("");
        putItemRequest.AddItem(HASH_KEY_NAME, hashKeyAttribute);
        AttributeValue testValueAttribute;
        ss << testValueColumnName << i;
        testValueAttribute.SetS(ss.str());
        putItemRequest.AddItem(testValueColumnName, testValueAttribute);
        ss.str("");
        m_client->PutItemAsync(putItemRequest, putItemHandler);
    }

    //wait for the callbacks to finish.
    std::unique_lock<std::mutex> putItemResultLock(putItemResultMutex);
    putItemResultSemaphore.wait(putItemResultLock);

    //now we get the items we were supposed to be putting and make sure
    //they were put successfully.
    for (unsigned i = 0; i < 50; ++i)
    {
        GetItemRequest getItemRequest;
        ss << HASH_KEY_NAME << i;
        AttributeValue hashKey;
        hashKey.SetS(ss.str());
        getItemRequest.AddKey(HASH_KEY_NAME, hashKey);
        getItemRequest.SetTableName(crudCallbacksTestTableName);

        Aws::Vector<Aws::String> attributesToGet;
        attributesToGet.push_back(HASH_KEY_NAME);
        attributesToGet.push_back(testValueColumnName);
        ss.str("");
        m_client->GetItemAsync(getItemRequest, getItemHandler);
    }

    //wait for the callbacks to finish.
    std::unique_lock<std::mutex> getItemResultLock(getItemResultMutex);
    getItemResultSemaphore.wait(getItemResultLock);

    Aws::Map<Aws::String, Aws::String> getItemResults;
    //The values are not in order, so let's verify the values by using a map.
    for (unsigned i = 0; i < 50; ++i)
    {
        GetItemOutcome outcome = getItemResultsFromCallbackTest[i];
        EXPECT_TRUE(outcome.IsSuccess());
        GetItemResult result = outcome.GetResult();
        Aws::Map<Aws::String, AttributeValue> returnedItemCollection = result.GetItem();
        getItemResults[returnedItemCollection[HASH_KEY_NAME].GetS()] = returnedItemCollection[testValueColumnName].GetS();
    }

    for (unsigned i = 0; i < 50; ++i)
    {
        ss << HASH_KEY_NAME << i;
        Aws::String hashKey = ss.str();
        ss.str("");
        ss << testValueColumnName << i;
        EXPECT_EQ(ss.str(), getItemResults[hashKey]);
        ss.str("");
    }

    ScanRequest scanRequest;
    scanRequest.WithTableName(crudCallbacksTestTableName);

    ScanOutcome scanOutcome = m_client->Scan(scanRequest);
    EXPECT_TRUE(scanOutcome.IsSuccess());
    EXPECT_EQ(50, scanOutcome.GetResult().GetCount());

    //now update the existing values
    for (unsigned i = 0; i < 50; ++i)
    {
        ss << HASH_KEY_NAME << i;
        AttributeValue hashKeyAttribute;
        hashKeyAttribute.SetS(ss.str());
        UpdateItemRequest updateItemRequest;
        updateItemRequest.SetTableName(crudCallbacksTestTableName);
        updateItemRequest.AddKey(HASH_KEY_NAME, AttributeValue(ss.str()));
        ss.str("");
        AttributeValueUpdate testValueAttribute;
        ss << testValueColumnName << i * 2;
        testValueAttribute.SetAction(AttributeAction::PUT);
        AttributeValue valueAttribute;
        valueAttribute.SetS(ss.str());
        testValueAttribute.SetValue(valueAttribute);
        updateItemRequest.AddAttributeUpdates(testValueColumnName, testValueAttribute);
        ss.str("");
        m_client->UpdateItemAsync(updateItemRequest, updateItemHandler);
    }

    //wait for the callbacks to finish.
    std::unique_lock<std::mutex> updateItemResultLock(updateItemResultMutex);
    updateItemResultSemaphore.wait(updateItemResultLock);

    //now get the items again, making sure they were properly
    //updated.
    getItemResultsFromCallbackTest.clear();
    getItemResults.clear();

    for (unsigned i = 0; i < 50; ++i)
    {
        GetItemRequest getItemRequest;
        ss << HASH_KEY_NAME << i;
        AttributeValue hashKey;
        hashKey.SetS(ss.str());
        getItemRequest.AddKey(HASH_KEY_NAME, hashKey);
        getItemRequest.SetTableName(crudCallbacksTestTableName);


        Aws::Vector<Aws::String> attributesToGet;
        attributesToGet.push_back(HASH_KEY_NAME);
        attributesToGet.push_back(testValueColumnName);
        ss.str("");
        m_client->GetItemAsync(getItemRequest, getItemHandler);
    }

    //wait for the callbacks to finish.
    getItemResultSemaphore.wait(getItemResultLock);

    //verify values.
    for (unsigned i = 0; i < 50; ++i)
    {
        GetItemOutcome outcome = getItemResultsFromCallbackTest[i];
        EXPECT_TRUE(outcome.IsSuccess());
        GetItemResult result = outcome.GetResult();
        Aws::Map<Aws::String, AttributeValue> returnedItemCollection = result.GetItem();
        getItemResults[returnedItemCollection[HASH_KEY_NAME].GetS()] = returnedItemCollection[testValueColumnName].GetS();
    }

    for (unsigned i = 0; i < 50; ++i)
    {
        ss << HASH_KEY_NAME << i;
        Aws::String hashKey = ss.str();
        ss.str("");
        ss << testValueColumnName << i * 2;
        EXPECT_EQ(ss.str(), getItemResults[hashKey]);
        ss.str("");
    }

    //now delete all the items we added.
    for (unsigned i = 0; i < 50; ++i)
    {
        DeleteItemRequest deleteItemRequest;
        ss << HASH_KEY_NAME << i;
        AttributeValue hashKey;
        hashKey.SetS(ss.str());
        deleteItemRequest.AddKey(HASH_KEY_NAME, hashKey);
        deleteItemRequest.SetTableName(crudCallbacksTestTableName);
        deleteItemRequest.SetReturnValues(ReturnValue::ALL_OLD);
        ss.str("");
        m_client->DeleteItemAsync(deleteItemRequest, deleteItemHandler);
    }

    //wait for the callbacks to finish.
    std::unique_lock<std::mutex> deleteItemResultLock(deleteItemResultMutex);
    deleteItemResultSemaphore.wait(deleteItemResultLock);

    //verify that we properly returned the old values.
    Aws::Set<Aws::String> deletedKeys;
    for (DeleteItemOutcome& deleteItemOutcome : deleteItemResultsFromCallbackTest)
    {
        EXPECT_TRUE(deleteItemOutcome.IsSuccess());
        DeleteItemResult deleteItemResult = deleteItemOutcome.GetResult();
        Aws::Map<Aws::String, AttributeValue> attributes = deleteItemResult.GetAttributes();
        deletedKeys.insert(attributes[HASH_KEY_NAME].GetS());
    }

    for (unsigned i = 0; i < 50; ++i)
    {
        ss << HASH_KEY_NAME << i;
        EXPECT_TRUE(deletedKeys.find(ss.str()) != deletedKeys.end());
        ss.str("");
    }
}

void PutBlobs(DynamoDBClient* client, uint32_t blobRowStartIndex)
{
    Aws::String testValueColumnName = "TestBlob";
    Aws::Vector<PutItemOutcomeCallable> putItemResults;
    Aws::StringStream ss;

    Aws::String limiterTestTableName = BuildTableName(BASE_LIMITER_TEST_TABLE);

    for (unsigned i = blobRowStartIndex; i < blobRowStartIndex + 20; ++i)
    {
        PutItemRequest putItemRequest;
        putItemRequest.SetTableName(limiterTestTableName);

        ss.str("");
        ss << HASH_KEY_NAME << i;
        AttributeValue hashKeyAttribute;
        hashKeyAttribute.SetS(ss.str());
        putItemRequest.AddItem(HASH_KEY_NAME, hashKeyAttribute);

        Aws::String blob(1000, 'a');
        ss.str("");
        ss << i << blob;
        AttributeValue testValueAttribute;
        testValueAttribute.SetS(ss.str());
        putItemRequest.AddItem(testValueColumnName, testValueAttribute);

        putItemResults.push_back(client->PutItemCallable(putItemRequest));
    }

    for (auto& putItemResult : putItemResults)
    {
        PutItemOutcome outcome = putItemResult.get();
        ASSERT_TRUE(outcome.IsSuccess());
    }
}

TEST_F(TableOperationTest, TestLimiter)
{
    AWS_LOGSTREAM_TRACE(ALLOCATION_TAG, "TestLimiter")

    using CLOCK = std::chrono::high_resolution_clock;

    Aws::String limiterTestTableName = BuildTableName(BASE_LIMITER_TEST_TABLE);
    CreateTable(limiterTestTableName, 100, 100);

    // set limiter to 1k/sec
    // each request is a Put of 1k of data + >600 from headers/misc and response data
    // so we expect 20 requests to take at least 30 seconds 
    m_limiter->SetRate(1000, true);

    auto startTime = CLOCK::now();

    PutBlobs(m_client.get(), 0);

    auto endTime = CLOCK::now();

    auto timeDifference = endTime - startTime;

    auto secondsElapsed = std::chrono::duration_cast<std::chrono::seconds>(timeDifference);
    ASSERT_TRUE(secondsElapsed.count() >= 29);

//  // try it with a much higher limit, should be fast
//  m_limiter->SetRate(100000, true);
//
//  auto startTime2 = CLOCK::now();
//
//  PutBlobs(m_client.get(), 20);
//
//  auto endTime2 = CLOCK::now();
//
//  auto timeDifference2 = endTime2 - startTime2;
//
//  auto secondsElapsed2 = std::chrono::duration_cast<std::chrono::seconds>(timeDifference2);
}

TEST_F(TableOperationTest, TestAttributeValues)
{
    AWS_LOGSTREAM_TRACE(ALLOCATION_TAG, "TestAttributeValues")

    Aws::String attributeValueTestTableName = BuildTableName(BASE_ATTRIBUTEVALUE_TEST_TABLE);
    CreateTable(attributeValueTestTableName, 50, 50);

    unsigned char buffer1[6] = { 20, 34, 54, 67, 10, 5 };
    const Aws::Utils::ByteBuffer byteBuffer1(buffer1, 6);
    unsigned char buffer2[6] = { 21, 35, 55, 68, 11, 6 };
    const Aws::Utils::ByteBuffer byteBuffer2(buffer2, 6);

    // create the Hash Key value
    AttributeValue hashKey("TestValue");

    // String Value
    {
        // Put
        PutItemRequest putItemRequest;
        putItemRequest.SetTableName(attributeValueTestTableName);
        putItemRequest.AddItem(HASH_KEY_NAME, hashKey);

        AttributeValue value;
        value.SetS("String Value");
        putItemRequest.AddItem("String", value);

        PutItemOutcome putOutcome = m_client->PutItem(putItemRequest);
        ASSERT_TRUE(putOutcome.IsSuccess());

        // Get
        GetItemRequest getItemRequest;
        getItemRequest.AddKey(HASH_KEY_NAME, hashKey);
        getItemRequest.SetTableName(attributeValueTestTableName);

        Aws::Vector<Aws::String> attributesToGet;
        attributesToGet.push_back(HASH_KEY_NAME);
        attributesToGet.push_back("String Value");
        GetItemOutcome getOutcome = m_client->GetItem(getItemRequest);
        ASSERT_TRUE(getOutcome.IsSuccess());

        // Parse
        GetItemResult result = getOutcome.GetResult();
        Aws::Map<Aws::String, AttributeValue> returnedItemCollection = result.GetItem();


        //getItemResults[returnedItemCollection[HASH_KEY_NAME].GetS()] = returnedItemCollection[testValueColumnName].GetS();

        //ReturnedItemCollection returnedItemCollection = result.GetItems();
        EXPECT_EQ("TestValue", returnedItemCollection[HASH_KEY_NAME].GetS());
        EXPECT_EQ("String Value", returnedItemCollection["String"].GetS());
    }

    // Number Value
    {
        // Update
        UpdateItemRequest updateItemRequest;
        updateItemRequest.SetTableName(attributeValueTestTableName);
        updateItemRequest.AddKey(HASH_KEY_NAME, hashKey);

        AttributeValue valueAttribute;
        valueAttribute.SetN("1001");

        AttributeValueUpdate testValueAttribute;
        testValueAttribute.SetValue(valueAttribute);

        updateItemRequest.AddAttributeUpdates("Number", testValueAttribute);

        UpdateItemOutcome updateOutcome = m_client->UpdateItem(updateItemRequest);
        ASSERT_TRUE(updateOutcome.IsSuccess());

        // Get
        GetItemRequest getItemRequest;
        getItemRequest.AddKey(HASH_KEY_NAME, hashKey);
        getItemRequest.SetTableName(attributeValueTestTableName);

        Aws::Vector<Aws::String> attributesToGet;
        attributesToGet.push_back(HASH_KEY_NAME);
        GetItemOutcome getOutcome = m_client->GetItem(getItemRequest);
        ASSERT_TRUE(getOutcome.IsSuccess());

        // Parse
        GetItemResult result = getOutcome.GetResult();
        auto returnedItemCollection = result.GetItem();
        EXPECT_EQ("TestValue", returnedItemCollection[HASH_KEY_NAME].GetS());
        EXPECT_EQ("String Value", returnedItemCollection["String"].GetS());
        EXPECT_EQ("1001", returnedItemCollection["Number"].GetN());
    }

    // ByteBuffer
    {
        // Update
        UpdateItemRequest updateItemRequest;
        updateItemRequest.SetTableName(attributeValueTestTableName);
        updateItemRequest.AddKey(HASH_KEY_NAME, hashKey);

        AttributeValue valueAttribute;
        valueAttribute.SetB(byteBuffer1);

        AttributeValueUpdate testValueAttribute;
        testValueAttribute.SetValue(valueAttribute);

        updateItemRequest.AddAttributeUpdates("ByteBuffer", testValueAttribute);

        UpdateItemOutcome updateOutcome = m_client->UpdateItem(updateItemRequest);
        ASSERT_TRUE(updateOutcome.IsSuccess());

        // Get
        GetItemRequest getItemRequest;
        getItemRequest.AddKey(HASH_KEY_NAME, hashKey);
        getItemRequest.SetTableName(attributeValueTestTableName);

        Aws::Vector<Aws::String> attributesToGet;
        attributesToGet.push_back(HASH_KEY_NAME);
        GetItemOutcome getOutcome = m_client->GetItem(getItemRequest);
        ASSERT_TRUE(getOutcome.IsSuccess());

        // Parse
        GetItemResult result = getOutcome.GetResult();
        auto returnedItemCollection = result.GetItem();
        EXPECT_EQ("TestValue", returnedItemCollection[HASH_KEY_NAME].GetS());
        EXPECT_EQ("String Value", returnedItemCollection["String"].GetS());
        EXPECT_EQ("1001", returnedItemCollection["Number"].GetN());
        EXPECT_EQ(byteBuffer1, returnedItemCollection["ByteBuffer"].GetB()); // on the 3rd day of xmas...
    }

    // StringSet
    {
        // Update
        UpdateItemRequest updateItemRequest;
        updateItemRequest.SetTableName(attributeValueTestTableName);
        updateItemRequest.AddKey(HASH_KEY_NAME, hashKey);

        const Aws::Vector<Aws::String> testStrings = { "test1", "test2" };
        AttributeValue valueAttribute;
        valueAttribute.SetSS(testStrings);

        AttributeValueUpdate testValueAttribute;
        testValueAttribute.SetValue(valueAttribute);

        updateItemRequest.AddAttributeUpdates("String Set", testValueAttribute);

        UpdateItemOutcome updateOutcome = m_client->UpdateItem(updateItemRequest);
        ASSERT_TRUE(updateOutcome.IsSuccess());

        // Get
        GetItemRequest getItemRequest;
        getItemRequest.AddKey(HASH_KEY_NAME, hashKey);
        getItemRequest.SetTableName(attributeValueTestTableName);

        Aws::Vector<Aws::String> attributesToGet;
        attributesToGet.push_back(HASH_KEY_NAME);
        GetItemOutcome getOutcome = m_client->GetItem(getItemRequest);
        ASSERT_TRUE(getOutcome.IsSuccess());

        // Parse
        GetItemResult result = getOutcome.GetResult();
        auto returnedItemCollection = result.GetItem();
        EXPECT_EQ("TestValue", returnedItemCollection[HASH_KEY_NAME].GetS());
        EXPECT_EQ("String Value", returnedItemCollection["String"].GetS());
        EXPECT_EQ("1001", returnedItemCollection["Number"].GetN());
        EXPECT_EQ(byteBuffer1, returnedItemCollection["ByteBuffer"].GetB());
        auto ss = returnedItemCollection["String Set"].GetSS();
        EXPECT_EQ(2u, ss.size());
        EXPECT_NE(ss.end(), std::find(ss.begin(), ss.end(), "test1"));
        EXPECT_NE(ss.end(), std::find(ss.begin(), ss.end(), "test2"));
    }

    // Number Set
    {
        // Update
        UpdateItemRequest updateItemRequest;
        updateItemRequest.SetTableName(attributeValueTestTableName);
        updateItemRequest.AddKey(HASH_KEY_NAME, hashKey);

        const Aws::Vector<Aws::String> testStrings = { "10", "20" };
        AttributeValue valueAttribute;
        valueAttribute.SetNS(testStrings);

        AttributeValueUpdate testValueAttribute;
        testValueAttribute.SetValue(valueAttribute);

        updateItemRequest.AddAttributeUpdates("Number Set", testValueAttribute);

        UpdateItemOutcome updateOutcome = m_client->UpdateItem(updateItemRequest);
        ASSERT_TRUE(updateOutcome.IsSuccess());

        // Get
        GetItemRequest getItemRequest;
        getItemRequest.AddKey(HASH_KEY_NAME, hashKey);
        getItemRequest.SetTableName(attributeValueTestTableName);

        Aws::Vector<Aws::String> attributesToGet;
        attributesToGet.push_back(HASH_KEY_NAME);
        GetItemOutcome getOutcome = m_client->GetItem(getItemRequest);
        ASSERT_TRUE(getOutcome.IsSuccess());

        // Parse
        GetItemResult result = getOutcome.GetResult();
        auto returnedItemCollection = result.GetItem();
        EXPECT_EQ("TestValue", returnedItemCollection[HASH_KEY_NAME].GetS());
        EXPECT_EQ("String Value", returnedItemCollection["String"].GetS());
        EXPECT_EQ("1001", returnedItemCollection["Number"].GetN());
        EXPECT_EQ(byteBuffer1, returnedItemCollection["ByteBuffer"].GetB());
        auto ss = returnedItemCollection["String Set"].GetSS();
        EXPECT_EQ(2u, ss.size());
        EXPECT_NE(ss.end(), std::find(ss.begin(), ss.end(), "test1"));
        EXPECT_NE(ss.end(), std::find(ss.begin(), ss.end(), "test2"));
        auto ns = returnedItemCollection["Number Set"].GetNS();
        EXPECT_EQ(2u, ns.size());
        EXPECT_NE(ns.end(), std::find(ns.begin(), ns.end(), "10"));
        EXPECT_NE(ns.end(), std::find(ns.begin(), ns.end(), "20"));
    }

    // ByteBuffer Set
    {
        // Update
        UpdateItemRequest updateItemRequest;
        updateItemRequest.SetTableName(attributeValueTestTableName);
        updateItemRequest.AddKey(HASH_KEY_NAME, hashKey);

        Aws::Vector<Aws::Utils::ByteBuffer> testBuffers = { byteBuffer1, byteBuffer2 };
        AttributeValue valueAttribute;
        valueAttribute.SetBS(testBuffers);

        AttributeValueUpdate testValueAttribute;
        testValueAttribute.SetValue(valueAttribute);

        updateItemRequest.AddAttributeUpdates("ByteBuffer Set", testValueAttribute);

        UpdateItemOutcome updateOutcome = m_client->UpdateItem(updateItemRequest);
        ASSERT_TRUE(updateOutcome.IsSuccess());

        // Get
        GetItemRequest getItemRequest;
        getItemRequest.AddKey(HASH_KEY_NAME, hashKey);
        getItemRequest.SetTableName(attributeValueTestTableName);

        Aws::Vector<Aws::String> attributesToGet;
        attributesToGet.push_back(HASH_KEY_NAME);
        GetItemOutcome getOutcome = m_client->GetItem(getItemRequest);
        ASSERT_TRUE(getOutcome.IsSuccess());

        // Parse
        GetItemResult result = getOutcome.GetResult();
        auto returnedItemCollection = result.GetItem();
        EXPECT_EQ("TestValue", returnedItemCollection[HASH_KEY_NAME].GetS());
        EXPECT_EQ("String Value", returnedItemCollection["String"].GetS());
        EXPECT_EQ("1001", returnedItemCollection["Number"].GetN());
        EXPECT_EQ(byteBuffer1, returnedItemCollection["ByteBuffer"].GetB());
        auto ss = returnedItemCollection["String Set"].GetSS();
        EXPECT_EQ(2u, ss.size());
        EXPECT_NE(ss.end(), std::find(ss.begin(), ss.end(), "test1"));
        EXPECT_NE(ss.end(), std::find(ss.begin(), ss.end(), "test2"));
        auto ns = returnedItemCollection["Number Set"].GetNS();
        EXPECT_EQ(2u, ns.size());
        EXPECT_NE(ns.end(), std::find(ns.begin(), ns.end(), "10"));
        EXPECT_NE(ns.end(), std::find(ns.begin(), ns.end(), "20"));
        auto bs = returnedItemCollection["ByteBuffer Set"].GetBS();
        EXPECT_EQ(2u, bs.size());
        EXPECT_NE(bs.end(), std::find(bs.begin(), bs.end(), byteBuffer1));
        EXPECT_NE(bs.end(), std::find(bs.begin(), bs.end(), byteBuffer2));
    }

    // Attribute Map
    {
        // Update
        UpdateItemRequest updateItemRequest;
        updateItemRequest.SetTableName(attributeValueTestTableName);
        updateItemRequest.AddKey(HASH_KEY_NAME, hashKey);

        AttributeValue valueAttribute;
        auto  barPtr = Aws::MakeShared<AttributeValue>("TableOperationTest", "bar");
        valueAttribute.AddMEntry("foo", barPtr);
        auto erniePtr = Aws::MakeShared<AttributeValue>("TableOperationTest", "ernie");
        valueAttribute.AddMEntry("bert", erniePtr);

        AttributeValueUpdate testValueAttribute;
        testValueAttribute.SetValue(valueAttribute);

        updateItemRequest.AddAttributeUpdates("Map", testValueAttribute);

        UpdateItemOutcome updateOutcome = m_client->UpdateItem(updateItemRequest);
        ASSERT_TRUE(updateOutcome.IsSuccess());

        // Get
        GetItemRequest getItemRequest;
        getItemRequest.AddKey(HASH_KEY_NAME, hashKey);
        getItemRequest.SetTableName(attributeValueTestTableName);

        Aws::Vector<Aws::String> attributesToGet;
        attributesToGet.push_back(HASH_KEY_NAME);
        GetItemOutcome getOutcome = m_client->GetItem(getItemRequest);
        ASSERT_TRUE(getOutcome.IsSuccess());

        // Parse
        GetItemResult result = getOutcome.GetResult();
        auto returnedItemCollection = result.GetItem();
        EXPECT_EQ("TestValue", returnedItemCollection[HASH_KEY_NAME].GetS());
        EXPECT_EQ("String Value", returnedItemCollection["String"].GetS());
        EXPECT_EQ("1001", returnedItemCollection["Number"].GetN());
        EXPECT_EQ(byteBuffer1, returnedItemCollection["ByteBuffer"].GetB());
        auto ss = returnedItemCollection["String Set"].GetSS();
        EXPECT_EQ(2u, ss.size());
        EXPECT_NE(ss.end(), std::find(ss.begin(), ss.end(), "test1"));
        EXPECT_NE(ss.end(), std::find(ss.begin(), ss.end(), "test2"));
        auto ns = returnedItemCollection["Number Set"].GetNS();
        EXPECT_EQ(2u, ns.size());
        EXPECT_NE(ns.end(), std::find(ns.begin(), ns.end(), "10"));
        EXPECT_NE(ns.end(), std::find(ns.begin(), ns.end(), "20"));
        auto bs = returnedItemCollection["ByteBuffer Set"].GetBS();
        EXPECT_EQ(2u, bs.size());
        EXPECT_NE(bs.end(), std::find(bs.begin(), bs.end(), byteBuffer1));
        EXPECT_NE(bs.end(), std::find(bs.begin(), bs.end(), byteBuffer2));
        const auto& m = returnedItemCollection["Map"].GetM();
        EXPECT_EQ(2u, m.size());
        ASSERT_NE(m.end(), m.find("foo"));
        ASSERT_EQ("bar", m.find("foo")->second->GetS());
        ASSERT_NE(m.end(), m.find("bert"));
        ASSERT_EQ("ernie", m.find("bert")->second->GetS());
    }

    // Empty Map
    {
        // Update
        UpdateItemRequest updateItemRequest;
        updateItemRequest.SetTableName(attributeValueTestTableName);
        updateItemRequest.AddKey(HASH_KEY_NAME, hashKey);

        Aws::String updateExpression = "SET EmptyMap = :map";
        updateItemRequest.SetUpdateExpression(updateExpression);

        Aws::Map<Aws::String, Aws::DynamoDB::Model::AttributeValue> expressionAttributeValues;
        AttributeValue mapValueAttribute;
        Aws::Map<Aws::String, const std::shared_ptr<Aws::DynamoDB::Model::AttributeValue>> emptyMap;
        mapValueAttribute.SetM(emptyMap);
        expressionAttributeValues[":map"] = mapValueAttribute;
        updateItemRequest.SetExpressionAttributeValues(expressionAttributeValues);

        UpdateItemOutcome updateOutcome = m_client->UpdateItem(updateItemRequest);
        ASSERT_TRUE(updateOutcome.IsSuccess());

        // Get
        GetItemRequest getItemRequest;
        getItemRequest.AddKey(HASH_KEY_NAME, hashKey);
        getItemRequest.SetTableName(attributeValueTestTableName);

        GetItemOutcome getOutcome = m_client->GetItem(getItemRequest);
        ASSERT_TRUE(getOutcome.IsSuccess());

        // Parse
        GetItemResult result = getOutcome.GetResult();
        auto returnedItemCollection = result.GetItem();
        ASSERT_TRUE(returnedItemCollection.find("EmptyMap") != returnedItemCollection.end());
        auto map = returnedItemCollection["EmptyMap"].GetM();
        ASSERT_EQ(0u, map.size());
    }

    // Attribute List
    {
        // Update
        UpdateItemRequest updateItemRequest;
        updateItemRequest.SetTableName(attributeValueTestTableName);
        updateItemRequest.AddKey(HASH_KEY_NAME, hashKey);

        AttributeValue valueAttribute;
        valueAttribute.AddLItem(Aws::MakeShared<AttributeValue>("TableOperationTest", "foo"))
            .AddLItem(Aws::MakeShared<AttributeValue>("TableOperationTest", "bar"));

        AttributeValueUpdate testValueAttribute;
        testValueAttribute.SetValue(valueAttribute);

        updateItemRequest.AddAttributeUpdates("List", testValueAttribute);

        UpdateItemOutcome updateOutcome = m_client->UpdateItem(updateItemRequest);
        ASSERT_TRUE(updateOutcome.IsSuccess());

        // Get
        GetItemRequest getItemRequest;
        getItemRequest.AddKey(HASH_KEY_NAME, hashKey);
        getItemRequest.SetTableName(attributeValueTestTableName);

        Aws::Vector<Aws::String> attributesToGet;
        attributesToGet.push_back(HASH_KEY_NAME);
        GetItemOutcome getOutcome = m_client->GetItem(getItemRequest);
        ASSERT_TRUE(getOutcome.IsSuccess());

        // Parse
        GetItemResult result = getOutcome.GetResult();
        auto returnedItemCollection = result.GetItem();
        EXPECT_EQ("TestValue", returnedItemCollection[HASH_KEY_NAME].GetS());
        EXPECT_EQ("String Value", returnedItemCollection["String"].GetS());
        EXPECT_EQ("1001", returnedItemCollection["Number"].GetN());
        EXPECT_EQ(byteBuffer1, returnedItemCollection["ByteBuffer"].GetB());
        auto ss = returnedItemCollection["String Set"].GetSS();
        EXPECT_EQ(2u, ss.size());
        EXPECT_NE(ss.end(), std::find(ss.begin(), ss.end(), "test1"));
        EXPECT_NE(ss.end(), std::find(ss.begin(), ss.end(), "test2"));
        auto ns = returnedItemCollection["Number Set"].GetNS();
        EXPECT_EQ(2u, ns.size());
        EXPECT_NE(ns.end(), std::find(ns.begin(), ns.end(), "10"));
        EXPECT_NE(ns.end(), std::find(ns.begin(), ns.end(), "20"));
        auto bs = returnedItemCollection["ByteBuffer Set"].GetBS();
        EXPECT_EQ(2u, bs.size());
        EXPECT_NE(bs.end(), std::find(bs.begin(), bs.end(), byteBuffer1));
        EXPECT_NE(bs.end(), std::find(bs.begin(), bs.end(), byteBuffer2));
        const auto& m = returnedItemCollection["Map"].GetM();

        EXPECT_EQ(2u, m.size());
        ASSERT_NE(m.end(), m.find("foo"));
        ASSERT_EQ("bar", m.find("foo")->second->GetS());
        ASSERT_NE(m.end(), m.find("bert"));
        ASSERT_EQ("ernie", m.find("bert")->second->GetS());
        auto list = returnedItemCollection["List"].GetL();
        ASSERT_EQ(2u, list.size());
        ASSERT_EQ("foo", list[0]->GetS());
        ASSERT_EQ("bar", list[1]->GetS());
    }

    // Empty List
    {
        // Update
        UpdateItemRequest updateItemRequest;
        updateItemRequest.SetTableName(attributeValueTestTableName);
        updateItemRequest.AddKey(HASH_KEY_NAME, hashKey);

        Aws::String updateExpression = "SET EmptyList = :list";
        updateItemRequest.SetUpdateExpression(updateExpression);

        Aws::Map<Aws::String, Aws::DynamoDB::Model::AttributeValue> expressionAttributeValues;
        AttributeValue listValueAttribute;
        Aws::Vector<std::shared_ptr<Aws::DynamoDB::Model::AttributeValue>> emptyList;
        listValueAttribute.SetL(emptyList);
        expressionAttributeValues[":list"] = listValueAttribute;
        updateItemRequest.SetExpressionAttributeValues(expressionAttributeValues);

        UpdateItemOutcome updateOutcome = m_client->UpdateItem(updateItemRequest);
        ASSERT_TRUE(updateOutcome.IsSuccess());

        // Get
        GetItemRequest getItemRequest;
        getItemRequest.AddKey(HASH_KEY_NAME, hashKey);
        getItemRequest.SetTableName(attributeValueTestTableName);

        GetItemOutcome getOutcome = m_client->GetItem(getItemRequest);
        ASSERT_TRUE(getOutcome.IsSuccess());

        // Parse
        GetItemResult result = getOutcome.GetResult();
        auto returnedItemCollection = result.GetItem();
        ASSERT_TRUE(returnedItemCollection.find("EmptyList") != returnedItemCollection.end());
        auto list = returnedItemCollection["EmptyList"].GetL();
        ASSERT_EQ(0u, list.size());
    }

    // Bool
    {
        // Update
        UpdateItemRequest updateItemRequest;
        updateItemRequest.SetTableName(attributeValueTestTableName);
        updateItemRequest.AddKey(HASH_KEY_NAME, hashKey);

        AttributeValue valueAttribute;
        valueAttribute.SetBool(true);

        AttributeValueUpdate testValueAttribute;
        testValueAttribute.SetValue(valueAttribute);

        updateItemRequest.AddAttributeUpdates("Bool", testValueAttribute);

        UpdateItemOutcome updateOutcome = m_client->UpdateItem(updateItemRequest);
        ASSERT_TRUE(updateOutcome.IsSuccess());

        // Get
        GetItemRequest getItemRequest;
        getItemRequest.AddKey(HASH_KEY_NAME, hashKey);
        getItemRequest.SetTableName(attributeValueTestTableName);

        Aws::Vector<Aws::String> attributesToGet;
        attributesToGet.push_back(HASH_KEY_NAME);
        GetItemOutcome getOutcome = m_client->GetItem(getItemRequest);
        ASSERT_TRUE(getOutcome.IsSuccess());

        // Parse
        GetItemResult result = getOutcome.GetResult();
        auto returnedItemCollection = result.GetItem();
        EXPECT_TRUE(returnedItemCollection["Bool"].GetBool());
    }

    // Null
    {
        // Update
        UpdateItemRequest updateItemRequest;
        updateItemRequest.SetTableName(attributeValueTestTableName);
        updateItemRequest.AddKey(HASH_KEY_NAME, hashKey);

        AttributeValue valueAttribute;
        valueAttribute.SetNull(true);

        AttributeValueUpdate testValueAttribute;
        testValueAttribute.SetValue(valueAttribute);

        updateItemRequest.AddAttributeUpdates("Null", testValueAttribute);

        UpdateItemOutcome updateOutcome = m_client->UpdateItem(updateItemRequest);
        ASSERT_TRUE(updateOutcome.IsSuccess());

        // Get
        GetItemRequest getItemRequest;
        getItemRequest.AddKey(HASH_KEY_NAME, hashKey);
        getItemRequest.SetTableName(attributeValueTestTableName);

        Aws::Vector<Aws::String> attributesToGet;
        attributesToGet.push_back(HASH_KEY_NAME);
        GetItemOutcome getOutcome = m_client->GetItem(getItemRequest);
        ASSERT_TRUE(getOutcome.IsSuccess());

        // Parse
        GetItemResult result = getOutcome.GetResult();
        auto returnedItemCollection = result.GetItem();
        EXPECT_TRUE(returnedItemCollection["Null"].GetNull());
    }
}
} // anonymous namespace

