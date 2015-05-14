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

#include <SchemaSetup.h>

#include <aws/core/auth/AWSCredentialsProvider.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/dynamodb/DynamoDBClient.h>
#include <aws/dynamodb/DynamoDBErrors.h>
#include <aws/dynamodb/model/CreateTableRequest.h>
#include <aws/dynamodb/model/CreateTableResult.h>
#include <aws/dynamodb/model/DeleteTableRequest.h>
#include <aws/dynamodb/model/DeleteTableResult.h>
#include <aws/dynamodb/model/DescribeTableRequest.h>
#include <aws/dynamodb/model/DescribeTableResult.h>

#include <memory>
#include <aws/core/utils/memory/stl/AWSString.h>

using namespace Aws::Utils;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::DynamoDB;
using namespace Aws::DynamoDB::Model;
using namespace Aws::Http;

namespace Aws
{
namespace Example1
{

const char *ExampleTableName = "PlayerData";
const char *IdentityColumnName = "Identity";
const char *DeveloperCredentialsProfileName = "example1developer";

static const char* SchemaTag = "Schema";

enum class TableStatusWaitUntil
{
    ACTIVE,
    GONE
};

void WaitOnTableStatus(const std::unique_ptr<DynamoDBClient>& client, const char* tableName, TableStatusWaitUntil status)
{
    DescribeTableRequest describeTableRequest;
    describeTableRequest.SetTableName(tableName);
    bool done = false;
    while (!done) 
    {
        DescribeTableOutcome outcome = client->DescribeTable(describeTableRequest);

        switch(status)
        {
            case TableStatusWaitUntil::GONE:
                if (outcome.IsSuccess())
                {
                    AWS_LOGSTREAM_INFO(SchemaTag, ExampleTableName << " table not yet deleted, waiting.");
                    std::this_thread::sleep_for(std::chrono::seconds(1));
                }
                else
                {
                    assert(DynamoDBErrors::RESOURCE_NOT_FOUND == outcome.GetError().GetErrorType());
                    done = true;
                }
                break;

            case TableStatusWaitUntil::ACTIVE:
                assert(outcome.IsSuccess());
                if (outcome.GetResult().GetTable().GetTableStatus() == TableStatus::ACTIVE)
                {
                    done = true;
                }
                else
                {
                    AWS_LOGSTREAM_INFO(SchemaTag, ExampleTableName << " table not yet active, waiting.");
                    std::this_thread::sleep_for(std::chrono::seconds(1));
                }
                break;

            default:
                break;
        }
    }
}

bool DropPlayerDataTable(const std::unique_ptr<DynamoDBClient>& client)
{
    AWS_LOGSTREAM_INFO(SchemaTag, "Dropping old table: " << ExampleTableName);

    DeleteTableRequest deleteTableRequest;
    deleteTableRequest.SetTableName(ExampleTableName);

    DeleteTableOutcome deleteTableOutcome = client->DeleteTable(deleteTableRequest);
    if (!deleteTableOutcome.IsSuccess())
    {
        AWSError<DynamoDBErrors> error = deleteTableOutcome.GetError();
        AWS_LOGSTREAM_ERROR(SchemaTag, "Failed to drop old table: " << ExampleTableName << ": " << error.GetMessage() << "(" << error.GetExceptionName() << ")");
        return false;
    }

    WaitOnTableStatus(client, ExampleTableName, TableStatusWaitUntil::GONE);

    return true;
}

bool CreatePlayerDataTable(const std::unique_ptr<DynamoDBClient>& client)
{
    AWS_LOGSTREAM_INFO(SchemaTag, "Creating " << ExampleTableName << " table");

    // Build the create request
    CreateTableRequest createTableRequest;

    AttributeDefinition identityAttribute;
    identityAttribute.SetAttributeName(IdentityColumnName);
    identityAttribute.SetAttributeType(ScalarAttributeType::S);

    KeySchemaElement identityKeySchemaElement;
    identityKeySchemaElement.WithAttributeName(IdentityColumnName).WithKeyType(KeyType::HASH);

    ProvisionedThroughput provisionedThroughput;
    provisionedThroughput.SetReadCapacityUnits(5);
    provisionedThroughput.SetWriteCapacityUnits(1);

    createTableRequest.AddAttributeDefinitions(identityAttribute);
    createTableRequest.AddKeySchema(identityKeySchemaElement);
    createTableRequest.WithProvisionedThroughput(provisionedThroughput);
    createTableRequest.WithTableName(ExampleTableName);

    CreateTableOutcome createTableOutcome = client->CreateTable(createTableRequest);
    assert(createTableOutcome.IsSuccess() || createTableOutcome.GetError().GetErrorType() == DynamoDBErrors::RESOURCE_IN_USE);

    if(!createTableOutcome.IsSuccess())
    {
        AWSError<DynamoDBErrors> error = createTableOutcome.GetError();
        AWS_LOGSTREAM_ERROR(SchemaTag, "Failed to create table: " << ExampleTableName << ": " << error.GetMessage().c_str() << "(" << error.GetExceptionName() << ")");
        return false;
    }

    // Wait for table to become active
    WaitOnTableStatus(client, ExampleTableName, TableStatusWaitUntil::ACTIVE);

    return true;
}

bool InitializePlayerDataSchema(void)
{
    AWS_LOGSTREAM_INFO(SchemaTag, "Checking schema");

    ClientConfiguration config;
    config.scheme = Scheme::HTTP;
    config.connectTimeoutMs = 30000;
    config.requestTimeoutMs = 30000;
    auto credentialsProvider = std::make_shared<ProfileConfigFileAWSCredentialsProvider>(DeveloperCredentialsProfileName);
    std::unique_ptr<DynamoDBClient> client(new DynamoDBClient(credentialsProvider, config));

    DescribeTableRequest describeTableRequest;
    describeTableRequest.SetTableName(ExampleTableName);
    DescribeTableOutcome outcome = client->DescribeTable(describeTableRequest);

    // does the table exist with the properties we expect it to have?
    if(outcome.IsSuccess())
    {
        const TableDescription& description = outcome.GetResult().GetTable();
        if(description.GetAttributeDefinitions().size() == 1)
        {
            const AttributeDefinition& attributeDef = description.GetAttributeDefinitions()[0];
            if(attributeDef.GetAttributeName() == IdentityColumnName && attributeDef.GetAttributeType() == ScalarAttributeType::S)
            {
                if(description.GetTableStatus() == TableStatus::ACTIVE)
                {
                    AWS_LOGSTREAM_INFO(SchemaTag, "Valid schema exists, skipping creation step");
                    return true;
                }
            }
        }
    }

    AWS_LOGSTREAM_INFO(SchemaTag, "No valid schema found");

    // Delete if a non-matching version of the table was found
    if(outcome.IsSuccess())
    {
        if(!DropPlayerDataTable(client))
        {
            return false;
        }
    }

    // Create the table
    return CreatePlayerDataTable(client);
}


} // namespace Example1
} // namespace Aws

