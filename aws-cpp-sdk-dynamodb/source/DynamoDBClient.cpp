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
#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/dynamodb/DynamoDBClient.h>
#include <aws/dynamodb/DynamoDBEndpoint.h>
#include <aws/dynamodb/DynamoDBErrorMarshaller.h>
#include <aws/dynamodb/model/BatchGetItemRequest.h>
#include <aws/dynamodb/model/BatchWriteItemRequest.h>
#include <aws/dynamodb/model/CreateTableRequest.h>
#include <aws/dynamodb/model/DeleteItemRequest.h>
#include <aws/dynamodb/model/DeleteTableRequest.h>
#include <aws/dynamodb/model/DescribeTableRequest.h>
#include <aws/dynamodb/model/GetItemRequest.h>
#include <aws/dynamodb/model/ListTablesRequest.h>
#include <aws/dynamodb/model/PutItemRequest.h>
#include <aws/dynamodb/model/QueryRequest.h>
#include <aws/dynamodb/model/ScanRequest.h>
#include <aws/dynamodb/model/UpdateItemRequest.h>
#include <aws/dynamodb/model/UpdateTableRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::DynamoDB;
using namespace Aws::DynamoDB::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "dynamodb";
static const char* ALLOCATION_TAG = "DynamoDBClient";

DynamoDBClient::DynamoDBClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG), SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<DynamoDBErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

DynamoDBClient::DynamoDBClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<DynamoDBErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

DynamoDBClient::DynamoDBClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration, const std::shared_ptr<HttpClientFactory const>& httpClientFactory) :
  BASECLASS(httpClientFactory != nullptr ? httpClientFactory : Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<DynamoDBErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

DynamoDBClient::~DynamoDBClient()
{
}

void DynamoDBClient::init(const ClientConfiguration& config)
{
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty())
  {
    ss << DynamoDBEndpoint::ForRegion(config.region);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}

BatchGetItemOutcome DynamoDBClient::BatchGetItem(const BatchGetItemRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return BatchGetItemOutcome(BatchGetItemResult(outcome.GetResult()));
  }
  else
  {
    return BatchGetItemOutcome(outcome.GetError());
  }
}

BatchGetItemOutcomeCallable DynamoDBClient::BatchGetItemCallable(const BatchGetItemRequest& request) const
{
  return std::async(std::launch::async, &DynamoDBClient::BatchGetItem, this, request);
}

void DynamoDBClient::BatchGetItemAsync(const BatchGetItemRequest& request) const
{
  m_executor->Submit(&DynamoDBClient::BatchGetItemAsyncHelper, this, request);
}

void DynamoDBClient::BatchGetItemAsyncHelper(const BatchGetItemRequest& request) const
{
  m_onBatchGetItemOutcomeReceived(this, request, BatchGetItem(request));
}

BatchWriteItemOutcome DynamoDBClient::BatchWriteItem(const BatchWriteItemRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return BatchWriteItemOutcome(BatchWriteItemResult(outcome.GetResult()));
  }
  else
  {
    return BatchWriteItemOutcome(outcome.GetError());
  }
}

BatchWriteItemOutcomeCallable DynamoDBClient::BatchWriteItemCallable(const BatchWriteItemRequest& request) const
{
  return std::async(std::launch::async, &DynamoDBClient::BatchWriteItem, this, request);
}

void DynamoDBClient::BatchWriteItemAsync(const BatchWriteItemRequest& request) const
{
  m_executor->Submit(&DynamoDBClient::BatchWriteItemAsyncHelper, this, request);
}

void DynamoDBClient::BatchWriteItemAsyncHelper(const BatchWriteItemRequest& request) const
{
  m_onBatchWriteItemOutcomeReceived(this, request, BatchWriteItem(request));
}

CreateTableOutcome DynamoDBClient::CreateTable(const CreateTableRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateTableOutcome(CreateTableResult(outcome.GetResult()));
  }
  else
  {
    return CreateTableOutcome(outcome.GetError());
  }
}

CreateTableOutcomeCallable DynamoDBClient::CreateTableCallable(const CreateTableRequest& request) const
{
  return std::async(std::launch::async, &DynamoDBClient::CreateTable, this, request);
}

void DynamoDBClient::CreateTableAsync(const CreateTableRequest& request) const
{
  m_executor->Submit(&DynamoDBClient::CreateTableAsyncHelper, this, request);
}

void DynamoDBClient::CreateTableAsyncHelper(const CreateTableRequest& request) const
{
  m_onCreateTableOutcomeReceived(this, request, CreateTable(request));
}

DeleteItemOutcome DynamoDBClient::DeleteItem(const DeleteItemRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteItemOutcome(DeleteItemResult(outcome.GetResult()));
  }
  else
  {
    return DeleteItemOutcome(outcome.GetError());
  }
}

DeleteItemOutcomeCallable DynamoDBClient::DeleteItemCallable(const DeleteItemRequest& request) const
{
  return std::async(std::launch::async, &DynamoDBClient::DeleteItem, this, request);
}

void DynamoDBClient::DeleteItemAsync(const DeleteItemRequest& request) const
{
  m_executor->Submit(&DynamoDBClient::DeleteItemAsyncHelper, this, request);
}

void DynamoDBClient::DeleteItemAsyncHelper(const DeleteItemRequest& request) const
{
  m_onDeleteItemOutcomeReceived(this, request, DeleteItem(request));
}

DeleteTableOutcome DynamoDBClient::DeleteTable(const DeleteTableRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteTableOutcome(DeleteTableResult(outcome.GetResult()));
  }
  else
  {
    return DeleteTableOutcome(outcome.GetError());
  }
}

DeleteTableOutcomeCallable DynamoDBClient::DeleteTableCallable(const DeleteTableRequest& request) const
{
  return std::async(std::launch::async, &DynamoDBClient::DeleteTable, this, request);
}

void DynamoDBClient::DeleteTableAsync(const DeleteTableRequest& request) const
{
  m_executor->Submit(&DynamoDBClient::DeleteTableAsyncHelper, this, request);
}

void DynamoDBClient::DeleteTableAsyncHelper(const DeleteTableRequest& request) const
{
  m_onDeleteTableOutcomeReceived(this, request, DeleteTable(request));
}

DescribeTableOutcome DynamoDBClient::DescribeTable(const DescribeTableRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeTableOutcome(DescribeTableResult(outcome.GetResult()));
  }
  else
  {
    return DescribeTableOutcome(outcome.GetError());
  }
}

DescribeTableOutcomeCallable DynamoDBClient::DescribeTableCallable(const DescribeTableRequest& request) const
{
  return std::async(std::launch::async, &DynamoDBClient::DescribeTable, this, request);
}

void DynamoDBClient::DescribeTableAsync(const DescribeTableRequest& request) const
{
  m_executor->Submit(&DynamoDBClient::DescribeTableAsyncHelper, this, request);
}

void DynamoDBClient::DescribeTableAsyncHelper(const DescribeTableRequest& request) const
{
  m_onDescribeTableOutcomeReceived(this, request, DescribeTable(request));
}

GetItemOutcome DynamoDBClient::GetItem(const GetItemRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetItemOutcome(GetItemResult(outcome.GetResult()));
  }
  else
  {
    return GetItemOutcome(outcome.GetError());
  }
}

GetItemOutcomeCallable DynamoDBClient::GetItemCallable(const GetItemRequest& request) const
{
  return std::async(std::launch::async, &DynamoDBClient::GetItem, this, request);
}

void DynamoDBClient::GetItemAsync(const GetItemRequest& request) const
{
  m_executor->Submit(&DynamoDBClient::GetItemAsyncHelper, this, request);
}

void DynamoDBClient::GetItemAsyncHelper(const GetItemRequest& request) const
{
  m_onGetItemOutcomeReceived(this, request, GetItem(request));
}

ListTablesOutcome DynamoDBClient::ListTables(const ListTablesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListTablesOutcome(ListTablesResult(outcome.GetResult()));
  }
  else
  {
    return ListTablesOutcome(outcome.GetError());
  }
}

ListTablesOutcomeCallable DynamoDBClient::ListTablesCallable(const ListTablesRequest& request) const
{
  return std::async(std::launch::async, &DynamoDBClient::ListTables, this, request);
}

void DynamoDBClient::ListTablesAsync(const ListTablesRequest& request) const
{
  m_executor->Submit(&DynamoDBClient::ListTablesAsyncHelper, this, request);
}

void DynamoDBClient::ListTablesAsyncHelper(const ListTablesRequest& request) const
{
  m_onListTablesOutcomeReceived(this, request, ListTables(request));
}

PutItemOutcome DynamoDBClient::PutItem(const PutItemRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return PutItemOutcome(PutItemResult(outcome.GetResult()));
  }
  else
  {
    return PutItemOutcome(outcome.GetError());
  }
}

PutItemOutcomeCallable DynamoDBClient::PutItemCallable(const PutItemRequest& request) const
{
  return std::async(std::launch::async, &DynamoDBClient::PutItem, this, request);
}

void DynamoDBClient::PutItemAsync(const PutItemRequest& request) const
{
  m_executor->Submit(&DynamoDBClient::PutItemAsyncHelper, this, request);
}

void DynamoDBClient::PutItemAsyncHelper(const PutItemRequest& request) const
{
  m_onPutItemOutcomeReceived(this, request, PutItem(request));
}

QueryOutcome DynamoDBClient::Query(const QueryRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return QueryOutcome(QueryResult(outcome.GetResult()));
  }
  else
  {
    return QueryOutcome(outcome.GetError());
  }
}

QueryOutcomeCallable DynamoDBClient::QueryCallable(const QueryRequest& request) const
{
  return std::async(std::launch::async, &DynamoDBClient::Query, this, request);
}

void DynamoDBClient::QueryAsync(const QueryRequest& request) const
{
  m_executor->Submit(&DynamoDBClient::QueryAsyncHelper, this, request);
}

void DynamoDBClient::QueryAsyncHelper(const QueryRequest& request) const
{
  m_onQueryOutcomeReceived(this, request, Query(request));
}

ScanOutcome DynamoDBClient::Scan(const ScanRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ScanOutcome(ScanResult(outcome.GetResult()));
  }
  else
  {
    return ScanOutcome(outcome.GetError());
  }
}

ScanOutcomeCallable DynamoDBClient::ScanCallable(const ScanRequest& request) const
{
  return std::async(std::launch::async, &DynamoDBClient::Scan, this, request);
}

void DynamoDBClient::ScanAsync(const ScanRequest& request) const
{
  m_executor->Submit(&DynamoDBClient::ScanAsyncHelper, this, request);
}

void DynamoDBClient::ScanAsyncHelper(const ScanRequest& request) const
{
  m_onScanOutcomeReceived(this, request, Scan(request));
}

UpdateItemOutcome DynamoDBClient::UpdateItem(const UpdateItemRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateItemOutcome(UpdateItemResult(outcome.GetResult()));
  }
  else
  {
    return UpdateItemOutcome(outcome.GetError());
  }
}

UpdateItemOutcomeCallable DynamoDBClient::UpdateItemCallable(const UpdateItemRequest& request) const
{
  return std::async(std::launch::async, &DynamoDBClient::UpdateItem, this, request);
}

void DynamoDBClient::UpdateItemAsync(const UpdateItemRequest& request) const
{
  m_executor->Submit(&DynamoDBClient::UpdateItemAsyncHelper, this, request);
}

void DynamoDBClient::UpdateItemAsyncHelper(const UpdateItemRequest& request) const
{
  m_onUpdateItemOutcomeReceived(this, request, UpdateItem(request));
}

UpdateTableOutcome DynamoDBClient::UpdateTable(const UpdateTableRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateTableOutcome(UpdateTableResult(outcome.GetResult()));
  }
  else
  {
    return UpdateTableOutcome(outcome.GetError());
  }
}

UpdateTableOutcomeCallable DynamoDBClient::UpdateTableCallable(const UpdateTableRequest& request) const
{
  return std::async(std::launch::async, &DynamoDBClient::UpdateTable, this, request);
}

void DynamoDBClient::UpdateTableAsync(const UpdateTableRequest& request) const
{
  m_executor->Submit(&DynamoDBClient::UpdateTableAsyncHelper, this, request);
}

void DynamoDBClient::UpdateTableAsyncHelper(const UpdateTableRequest& request) const
{
  m_onUpdateTableOutcomeReceived(this, request, UpdateTable(request));
}

