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


#include <aws/external/gtest.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/dynamodb/DynamoDBClient.h>
#include <aws/dynamodb/DynamoDBErrors.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/memory/stl/AWSSet.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/ratelimiter/DefaultRateLimiter.h>
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

#include <algorithm>

#ifdef _WIN32

#include <windows.h>
#include <Psapi.h>

#endif

using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Client;
using namespace Aws::DynamoDB;
using namespace Aws::DynamoDB::Model;

#define TEST_TABLE_PREFIX  "IntegrationTest_"

static const char* HASH_KEY_NAME = TEST_TABLE_PREFIX "HashKey";
static const char* INET_TEST_TABLE = TEST_TABLE_PREFIX "WinInetTest";
static const char* HTTP_TEST_TABLE = TEST_TABLE_PREFIX "WinHttpTest";
static const char* CURL_TEST_TABLE = TEST_TABLE_PREFIX "CurlTest";

static const char* ALLOCATION_TAG = "TableOperationTest";

const unsigned int TEST_CHECKS = 500;
const unsigned int MAX_CONNECTION_POWER = 8;

namespace {

    struct TimingInfo
    {
        TimingInfo() : m_tableCreateTime(0),
            m_putTime(0),
            m_getTime(0),
            m_updateTime(0),
            m_deleteTime(0),
            m_opsCount(0),
            m_fullTime(0)
        {

        }

        uint64_t GetMSTotal() const
        {
            return m_putTime + m_getTime + m_updateTime + m_deleteTime;
        }

        unsigned int GetIOPS() const
        {
            uint64_t msTotal = GetMSTotal();
            if (!msTotal)
            {
                return 0;
            }
            uint64_t iops = m_opsCount * 1000 / msTotal;
            return static_cast<unsigned int>(iops);
        }
        unsigned int m_tableCreateTime;
        unsigned int m_putTime;
        unsigned int m_getTime;
        unsigned int m_updateTime;
        unsigned int m_deleteTime;
        unsigned int m_opsCount;
        unsigned int m_fullTime;
    };

class InetHttpComparisonTest : public ::testing::Test {

public:
    static std::shared_ptr<DynamoDBClient> m_client;
    static std::shared_ptr<Aws::Utils::RateLimits::RateLimiterInterface> m_limiter;

    Aws::Vector<GetItemOutcome> getItemResultsFromCallbackTest;
    Aws::Vector<PutItemOutcome> putItemResultsFromCallbackTest;
    Aws::Vector<DeleteItemOutcome> deleteItemResultsFromCallbackTest;
    Aws::Vector<UpdateItemOutcome> updateItemResultsFromCallbackTest;

    //the idea here, is that the test will kick off a bunch of requests and need to wait for them to finish.
    //the test will call wait on the semaphore and when the callbacks have processed all MAX_TESTS of the requests, they will
    //signal allowing the test thread to continue on.
    std::mutex getItemResultMutex;
    std::condition_variable getItemResultSemaphore;

    std::mutex putItemResultMutex;
    std::condition_variable putItemResultSemaphore;

    std::mutex deleteItemResultMutex;
    std::condition_variable deleteItemResultSemaphore;

    std::mutex updateItemResultMutex;
    std::condition_variable updateItemResultSemaphore;

    void GetItemOutcomeReceived(const DynamoDBClient* sender, const GetItemRequest& request, const GetItemOutcome& outcome)
    {
        AWS_UNREFERENCED_PARAM(sender);
        AWS_UNREFERENCED_PARAM(request);

        std::lock_guard<std::mutex> locker(getItemResultMutex);
        getItemResultsFromCallbackTest.push_back(outcome);

        if (getItemResultsFromCallbackTest.size() == TEST_CHECKS)
        {
            getItemResultSemaphore.notify_all();
        }
    }

    void PutItemOutcomeReceived(const DynamoDBClient* sender, const PutItemRequest& request, const PutItemOutcome& outcome)
    {
        AWS_UNREFERENCED_PARAM(sender);
        AWS_UNREFERENCED_PARAM(request);

        std::lock_guard<std::mutex> locker(putItemResultMutex);
        putItemResultsFromCallbackTest.push_back(outcome);

        if (putItemResultsFromCallbackTest.size() == TEST_CHECKS)
        {
            putItemResultSemaphore.notify_all();
        }
    }

    void DeleteItemOutcomeReceived(const DynamoDBClient* sender, const DeleteItemRequest& request, const DeleteItemOutcome& outcome)
    {
        AWS_UNREFERENCED_PARAM(sender);
        AWS_UNREFERENCED_PARAM(request);

        std::lock_guard<std::mutex> locker(deleteItemResultMutex);
        deleteItemResultsFromCallbackTest.push_back(outcome);

        if (deleteItemResultsFromCallbackTest.size() == TEST_CHECKS)
        {
            deleteItemResultSemaphore.notify_all();
        }
    }

    void UpdateItemOutcomeReceived(const DynamoDBClient* sender, const UpdateItemRequest& request, const UpdateItemOutcome& outcome)
    {
        AWS_UNREFERENCED_PARAM(sender);
        AWS_UNREFERENCED_PARAM(request);

        std::lock_guard<std::mutex> locker(updateItemResultMutex);
        updateItemResultsFromCallbackTest.push_back(outcome);

        if (updateItemResultsFromCallbackTest.size() == TEST_CHECKS)
        {
            updateItemResultSemaphore.notify_all();
        }
    }

    void ResetCallbackOutcomes()
    {
        getItemResultsFromCallbackTest.clear();
        putItemResultsFromCallbackTest.clear();
        deleteItemResultsFromCallbackTest.clear();
        updateItemResultsFromCallbackTest.clear();
    }

protected:

    static void SetUpClient(Aws::Http::TransferLibType transferType, unsigned int maxConnections)
    {
        // Create a client
        ClientConfiguration config;
        config.endpointOverride = "";
        config.scheme = Scheme::HTTPS;
        config.connectTimeoutMs = 30000;
        config.requestTimeoutMs = 30000;
        config.readRateLimiter = m_limiter;
        config.writeRateLimiter = m_limiter;
        config.httpLibOverride = transferType;
        config.maxConnections = maxConnections;
        config.region = Aws::Region::US_WEST_1;

        m_client = Aws::MakeShared<DynamoDBClient>(ALLOCATION_TAG, config);
    }

    static void SetUpTestCase()
    {
        m_limiter = Aws::MakeShared<Aws::Utils::RateLimits::DefaultRateLimiter<>>(ALLOCATION_TAG, 200000);

        SetUpClient(Aws::Http::TransferLibType::DEFAULT_CLIENT, 2);

        // delete all tables, just in case
        DeleteAllTables();
    }

    static void TearDownTestCase()
    {
        DeleteAllTables();

        m_limiter = nullptr;
        m_client = nullptr;
    }

    static void DeleteAllTables()
    {
        DeleteTable(INET_TEST_TABLE);
        DeleteTable(HTTP_TEST_TABLE);
        DeleteTable(CURL_TEST_TABLE);
        std::string itableName(INET_TEST_TABLE + std::to_string(0));
        DeleteTable(itableName.c_str());
        for (unsigned int i = 0; i <= MAX_CONNECTION_POWER; ++i)
        {
            std::string tableName(HTTP_TEST_TABLE + std::to_string(2 << i));
            DeleteTable(tableName.c_str());
        }
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

        if (!deleteTableOutcome.IsSuccess())
        {
            // It's okay if the table has already beed deleted
            EXPECT_EQ(DynamoDBErrors::RESOURCE_NOT_FOUND, deleteTableOutcome.GetError().GetErrorType());
            return;
        }

        DescribeTableRequest describeTableRequest;
        describeTableRequest.SetTableName(tableName);
        bool shouldContinue = true;
        while (shouldContinue) 
        {
            DescribeTableOutcome outcome = m_client->DescribeTable(describeTableRequest);
            if (outcome.IsSuccess())
            {
                EXPECT_EQ(TableStatus::DELETING, outcome.GetResult().GetTable().GetTableStatus());
                std::this_thread::sleep_for(std::chrono::seconds(1));
            }
            else
            {
                EXPECT_EQ(DynamoDBErrors::RESOURCE_NOT_FOUND, outcome.GetError().GetErrorType());
                break;
            }
        }
    }

    DescribeTableResult WaitUntilActive(const Aws::String tableName)
    {
        DescribeTableRequest describeTableRequest;
        describeTableRequest.SetTableName(tableName);
        bool shouldContinue = true;
        DescribeTableOutcome outcome = m_client->DescribeTable(describeTableRequest);

        while (shouldContinue)
        {
            EXPECT_TRUE(outcome.IsSuccess());
            if (outcome.GetResult().GetTable().GetTableStatus() == TableStatus::ACTIVE)
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

    void PrintMemoryInfo()
    {
#ifdef _WIN32
        HANDLE hProcess;
        PROCESS_MEMORY_COUNTERS pmc;

        // Print the process identifier.

        DWORD processId = GetCurrentProcessId();
        std::cout << "Process ID: " << processId << std::endl;

        // Print information about the memory usage of the process.

        hProcess = OpenProcess(PROCESS_QUERY_INFORMATION |
            PROCESS_VM_READ,
            FALSE, processId);
        if (NULL == hProcess)
            return;

        if (GetProcessMemoryInfo(hProcess, &pmc, sizeof(pmc)))
        {
            std::cout << "PageFileUse " << pmc.PagefileUsage << std::endl;
            std::cout << "PeakPageFileUse " << pmc.PeakPagefileUsage << std::endl;
            std::cout << "PeakWorkingSetSize " << pmc.PeakWorkingSetSize << std::endl;
        }

        CloseHandle(hProcess);
#endif
    }

    void GetTableName(Aws::Http::TransferLibType aType, unsigned int maxConnections, Aws::String& outString)
    {
        switch (aType)
        {
            case Aws::Http::TransferLibType::WIN_INET_CLIENT:
            {
                outString = INET_TEST_TABLE;
            }
            break;
            case Aws::Http::TransferLibType::WIN_HTTP_CLIENT:
            {
                outString = HTTP_TEST_TABLE;
            }
            break;
            case Aws::Http::TransferLibType::CURL_CLIENT:
            {
                outString = CURL_TEST_TABLE;
            }
            break;
            default:
            {
                // Not handled
                return;
            }
        }
        outString.append(std::to_string(maxConnections).c_str());
    }

    void RunSharedTimingTest(Aws::Http::TransferLibType aType, unsigned int maxConnections)
    {
        using CLOCK = std::chrono::high_resolution_clock;
        SetUpClient(aType, maxConnections);
        Aws::String tableString;
        GetTableName(aType, maxConnections, tableString);

        auto startTime = CLOCK::now();
        std::cout << std::endl << "Testing " << tableString.c_str() << " with " << maxConnections << " connections" << std::endl;
        std::cout << "Pre test memory: " << std::endl;
        PrintMemoryInfo();
        TimingInfo results = GetTimingTestDataWithCallbacks(tableString.c_str());
        auto endTime = CLOCK::now();
        auto timeDiff = std::chrono::duration_cast<std::chrono::milliseconds>(endTime - startTime);
        std::cout << results.m_opsCount << " operations made in " << timeDiff.count() << " total ms." << std::endl;
        std::cout << "Table Create: " << results.m_tableCreateTime << " Put: " << results.m_putTime << " Get: " << results.m_getTime << " Update: " << results.m_updateTime << " Delete: " << results.m_deleteTime << " IOPS: " << results.GetIOPS() << std::endl;

        PrintMemoryInfo();

        DeleteTable(tableString.c_str());
    }

    TimingInfo GetTimingTestData(const char* tableName)
    {
        TimingInfo results;
        using CLOCK = std::chrono::high_resolution_clock;

        auto startTime = CLOCK::now();
        auto initialTime = startTime;
        CreateTable(tableName, TEST_CHECKS, TEST_CHECKS);
        auto endTime = CLOCK::now();
        auto diffTime = std::chrono::duration_cast<std::chrono::milliseconds>(endTime - startTime);

        results.m_tableCreateTime = static_cast<unsigned int>(diffTime.count());

        //now put TEST_CHECKS items in the table asynchronously
        Aws::String testValueColumnName = "TestValue";
        Aws::Vector<PutItemOutcomeCallable> putItemResults;
        Aws::StringStream ss;
        for (unsigned i = 0; i < TEST_CHECKS; ++i)
        {
            ++results.m_opsCount;
            ss << HASH_KEY_NAME << i;
            PutItemRequest putItemRequest;
            putItemRequest.SetTableName(tableName);
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

        startTime = CLOCK::now();
        //wait for put operations to finish
        //isn't c++ 11 nice!
        for (auto& putItemResult : putItemResults)
        {
            putItemResult.get();
        }
        endTime = CLOCK::now();
        diffTime = std::chrono::duration_cast<std::chrono::milliseconds>(endTime - startTime);
        results.m_putTime = static_cast<unsigned int>(diffTime.count());

        //now we get the items we were supposed to be putting and make sure
        //they were put successfully.
        Aws::Vector<GetItemOutcomeCallable> getItemOutcomes;
        for (unsigned i = 0; i < TEST_CHECKS; ++i)
        {
            ++results.m_opsCount;
            GetItemRequest getItemRequest;
            ss << HASH_KEY_NAME << i;
            AttributeValue hashKey;
            hashKey.SetS(ss.str());
            getItemRequest.AddKey(HASH_KEY_NAME, hashKey);
            getItemRequest.SetTableName(tableName);

            Aws::Vector<Aws::String> attributesToGet;
            attributesToGet.push_back(HASH_KEY_NAME);
            attributesToGet.push_back(testValueColumnName);
            ss.str("");
            getItemOutcomes.push_back(m_client->GetItemCallable(getItemRequest));
        }
        endTime = CLOCK::now();
        diffTime = std::chrono::duration_cast<std::chrono::milliseconds>(endTime - startTime);
        results.m_getTime = static_cast<unsigned int>(diffTime.count());
		
        //verify the values
        for (unsigned i = 0; i < TEST_CHECKS; ++i)
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
        scanRequest.WithTableName(tableName);

        ScanOutcome scanOutcome = m_client->Scan(scanRequest);
        EXPECT_TRUE(scanOutcome.IsSuccess());
        EXPECT_EQ(TEST_CHECKS, scanOutcome.GetResult().GetCount());

        //now update the existing values
        Aws::Vector<UpdateItemOutcomeCallable> updateItemOutcomes;
        for (unsigned i = 0; i < TEST_CHECKS; ++i)
        {
            ++results.m_opsCount;
            ss << HASH_KEY_NAME << i;
            AttributeValue hashKeyAttribute;
            hashKeyAttribute.SetS(ss.str());
            UpdateItemRequest updateItemRequest;
            updateItemRequest.SetTableName(tableName);
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

        startTime = CLOCK::now();
        //wait for operations to finish.
        for (auto& updateItemOutcome : updateItemOutcomes)
        {
            updateItemOutcome.get();
        }
        endTime = CLOCK::now();
        diffTime = std::chrono::duration_cast<std::chrono::milliseconds>(endTime - startTime);
        results.m_updateTime = static_cast<unsigned int>(diffTime.count());

        //now get the items again, making sure they were properly
        //updated.
        getItemOutcomes.clear();

        for (unsigned i = 0; i < TEST_CHECKS; ++i)
        {
            GetItemRequest getItemRequest;
            ss << HASH_KEY_NAME << i;
            AttributeValue hashKey;
            hashKey.SetS(ss.str());
            getItemRequest.AddKey(HASH_KEY_NAME, hashKey);
            getItemRequest.SetTableName(tableName);

            Aws::Vector<Aws::String> attributesToGet;
            attributesToGet.push_back(HASH_KEY_NAME);
            attributesToGet.push_back(testValueColumnName);
            ss.str("");
            getItemOutcomes.push_back(m_client->GetItemCallable(getItemRequest));
        }

        //verify values.
        for (unsigned i = 0; i < TEST_CHECKS; ++i)
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
        for (unsigned i = 0; i < TEST_CHECKS; ++i)
        {
            ++results.m_opsCount;
            DeleteItemRequest deleteItemRequest;
            ss << HASH_KEY_NAME << i;
            AttributeValue hashKey;
            hashKey.SetS(ss.str());
            deleteItemRequest.AddKey(HASH_KEY_NAME, hashKey);
            deleteItemRequest.SetTableName(tableName);
            deleteItemRequest.SetReturnValues(ReturnValue::ALL_OLD);
            ss.str("");

            deleteItemOutcomes.push_back(m_client->DeleteItemCallable(deleteItemRequest));
        }

        startTime = CLOCK::now();
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
        PrintMemoryInfo();
        endTime = CLOCK::now();
        diffTime = std::chrono::duration_cast<std::chrono::milliseconds>(endTime - startTime);
        results.m_deleteTime = static_cast<unsigned int>(diffTime.count());
        diffTime = std::chrono::duration_cast<std::chrono::milliseconds>(endTime - initialTime);
        results.m_fullTime = static_cast<unsigned int>(diffTime.count());
        return results;
    }

    TimingInfo GetTimingTestDataWithCallbacks(const char* tableName)
    {
        TimingInfo results;
        using CLOCK = std::chrono::high_resolution_clock;

        ResetCallbackOutcomes();

        auto startTime = CLOCK::now();
        auto initialTime = startTime;
        CreateTable(tableName, TEST_CHECKS, TEST_CHECKS);
        auto endTime = CLOCK::now();
        auto diffTime = std::chrono::duration_cast<std::chrono::milliseconds>(endTime - startTime);

        results.m_tableCreateTime = static_cast<unsigned int>(diffTime.count());

        //registering a member function is ugly business even in modern c++
        m_client->RegisterPutItemOutcomeReceivedHandler(std::bind(&InetHttpComparisonTest::PutItemOutcomeReceived, this, std::placeholders::_1, std::placeholders::_2, std::placeholders::_3));
        m_client->RegisterGetItemOutcomeReceivedHandler(std::bind(&InetHttpComparisonTest::GetItemOutcomeReceived, this, std::placeholders::_1, std::placeholders::_2, std::placeholders::_3));
        m_client->RegisterDeleteItemOutcomeReceivedHandler(std::bind(&InetHttpComparisonTest::DeleteItemOutcomeReceived, this, std::placeholders::_1, std::placeholders::_2, std::placeholders::_3));
        m_client->RegisterUpdateItemOutcomeReceivedHandler(std::bind(&InetHttpComparisonTest::UpdateItemOutcomeReceived, this, std::placeholders::_1, std::placeholders::_2, std::placeholders::_3));

        //now put 50 items in the table asynchronously
        Aws::String testValueColumnName = "TestValue";
        Aws::StringStream ss;
        for (unsigned i = 0; i < TEST_CHECKS; ++i)
        {
            ++results.m_opsCount;
            ss << HASH_KEY_NAME << i;
            PutItemRequest putItemRequest;
            putItemRequest.SetTableName(tableName);
            AttributeValue hashKeyAttribute;
            hashKeyAttribute.SetS(ss.str());
            ss.str("");
            putItemRequest.AddItem(HASH_KEY_NAME, hashKeyAttribute);
            AttributeValue testValueAttribute;
            ss << testValueColumnName << i;
            testValueAttribute.SetS(ss.str());
            putItemRequest.AddItem(testValueColumnName, testValueAttribute);
            ss.str("");
            m_client->PutItemAsync(putItemRequest);
        }

        startTime = CLOCK::now();
        //wait for the callbacks to finish.
        std::unique_lock<std::mutex> putItemResultLock(putItemResultMutex);
        putItemResultSemaphore.wait(putItemResultLock);

        endTime = CLOCK::now();
        diffTime = std::chrono::duration_cast<std::chrono::milliseconds>(endTime - startTime);
        results.m_putTime = static_cast<unsigned int>(diffTime.count());

        //now we get the items we were supposed to be putting and make sure
        //they were put successfully.
        for (unsigned i = 0; i < TEST_CHECKS; ++i)
        {
            ++results.m_opsCount;
            GetItemRequest getItemRequest;
            ss << HASH_KEY_NAME << i;
            AttributeValue hashKey;
            hashKey.SetS(ss.str());
            getItemRequest.AddKey(HASH_KEY_NAME, hashKey);
            getItemRequest.SetTableName(tableName);

            Aws::Vector<Aws::String> attributesToGet;
            attributesToGet.push_back(HASH_KEY_NAME);
            attributesToGet.push_back(testValueColumnName);
            ss.str("");
            m_client->GetItemAsync(getItemRequest);
        }

        startTime = CLOCK::now();
        //wait for the callbacks to finish.
        std::unique_lock<std::mutex> getItemResultLock(getItemResultMutex);
        getItemResultSemaphore.wait(getItemResultLock);

        endTime = CLOCK::now();
        diffTime = std::chrono::duration_cast<std::chrono::milliseconds>(endTime - startTime);
        results.m_getTime = static_cast<unsigned int>(diffTime.count());

        //now update the existing values
        for (unsigned i = 0; i < TEST_CHECKS; ++i)
        {
            ++results.m_opsCount;
            ss << HASH_KEY_NAME << i;
            AttributeValue hashKeyAttribute;
            hashKeyAttribute.SetS(ss.str());
            UpdateItemRequest updateItemRequest;
            updateItemRequest.SetTableName(tableName);
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
            m_client->UpdateItemAsync(updateItemRequest);
        }

        startTime = CLOCK::now();
        //wait for the callbacks to finish.
        std::unique_lock<std::mutex> updateItemResultLock(updateItemResultMutex);
        updateItemResultSemaphore.wait(updateItemResultLock);

        endTime = CLOCK::now();
        diffTime = std::chrono::duration_cast<std::chrono::milliseconds>(endTime - startTime);
        results.m_updateTime = static_cast<unsigned int>(diffTime.count());

        //now get the items again, making sure they were properly
        //updated.
        getItemResultsFromCallbackTest.clear();

        //now delete all the items we added.
        for (unsigned i = 0; i < TEST_CHECKS; ++i)
        {
            ++results.m_opsCount;
            DeleteItemRequest deleteItemRequest;
            ss << HASH_KEY_NAME << i;
            AttributeValue hashKey;
            hashKey.SetS(ss.str());
            deleteItemRequest.AddKey(HASH_KEY_NAME, hashKey);
            deleteItemRequest.SetTableName(tableName);
            deleteItemRequest.SetReturnValues(ReturnValue::ALL_OLD);
            ss.str("");
            m_client->DeleteItemAsync(deleteItemRequest);
        }

        startTime = CLOCK::now();
        //wait for the callbacks to finish.
        std::unique_lock<std::mutex> deleteItemResultLock(deleteItemResultMutex);
        deleteItemResultSemaphore.wait(deleteItemResultLock);

        endTime = CLOCK::now();
        diffTime = std::chrono::duration_cast<std::chrono::milliseconds>(endTime - startTime);
        results.m_deleteTime = static_cast<unsigned int>(diffTime.count());

        m_client->ClearAllGetItemOutcomeReceivedHandlers();
        m_client->ClearAllPutItemOutcomeReceivedHandlers();
        m_client->ClearAllDeleteItemOutcomeReceivedHandlers();
        m_client->ClearAllUpdateItemOutcomeReceivedHandlers();

        return results;
    }
};

std::shared_ptr<DynamoDBClient> InetHttpComparisonTest::m_client(nullptr);
std::shared_ptr<Aws::Utils::RateLimits::RateLimiterInterface> InetHttpComparisonTest::m_limiter(nullptr);

#ifdef _WIN32

TEST_F(InetHttpComparisonTest, TestInetHttpSequence)
{
    unsigned int numConnections = 2;
    unsigned int i = 0;
	
    // Inet 
    RunSharedTimingTest(Aws::Http::TransferLibType::WIN_INET_CLIENT, numConnections << i);

    for (i = 0; i <= MAX_CONNECTION_POWER; i += 1)
    {
        RunSharedTimingTest(Aws::Http::TransferLibType::WIN_HTTP_CLIENT, numConnections << i);
    }
}

// TODO add Curl test here


#endif


} // anonymous namespace

