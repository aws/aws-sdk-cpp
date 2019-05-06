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
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <aws/dynamodb/DynamoDBClient.h>
#include <aws/dynamodb/DynamoDBEndpoint.h>
#include <aws/dynamodb/DynamoDBErrorMarshaller.h>
#include <aws/dynamodb/model/BatchGetItemRequest.h>
#include <aws/dynamodb/model/BatchWriteItemRequest.h>
#include <aws/dynamodb/model/CreateBackupRequest.h>
#include <aws/dynamodb/model/CreateGlobalTableRequest.h>
#include <aws/dynamodb/model/CreateTableRequest.h>
#include <aws/dynamodb/model/DeleteBackupRequest.h>
#include <aws/dynamodb/model/DeleteItemRequest.h>
#include <aws/dynamodb/model/DeleteTableRequest.h>
#include <aws/dynamodb/model/DescribeBackupRequest.h>
#include <aws/dynamodb/model/DescribeContinuousBackupsRequest.h>
#include <aws/dynamodb/model/DescribeEndpointsRequest.h>
#include <aws/dynamodb/model/DescribeGlobalTableRequest.h>
#include <aws/dynamodb/model/DescribeGlobalTableSettingsRequest.h>
#include <aws/dynamodb/model/DescribeLimitsRequest.h>
#include <aws/dynamodb/model/DescribeTableRequest.h>
#include <aws/dynamodb/model/DescribeTimeToLiveRequest.h>
#include <aws/dynamodb/model/GetItemRequest.h>
#include <aws/dynamodb/model/ListBackupsRequest.h>
#include <aws/dynamodb/model/ListGlobalTablesRequest.h>
#include <aws/dynamodb/model/ListTablesRequest.h>
#include <aws/dynamodb/model/ListTagsOfResourceRequest.h>
#include <aws/dynamodb/model/PutItemRequest.h>
#include <aws/dynamodb/model/QueryRequest.h>
#include <aws/dynamodb/model/RestoreTableFromBackupRequest.h>
#include <aws/dynamodb/model/RestoreTableToPointInTimeRequest.h>
#include <aws/dynamodb/model/ScanRequest.h>
#include <aws/dynamodb/model/TagResourceRequest.h>
#include <aws/dynamodb/model/TransactGetItemsRequest.h>
#include <aws/dynamodb/model/TransactWriteItemsRequest.h>
#include <aws/dynamodb/model/UntagResourceRequest.h>
#include <aws/dynamodb/model/UpdateContinuousBackupsRequest.h>
#include <aws/dynamodb/model/UpdateGlobalTableRequest.h>
#include <aws/dynamodb/model/UpdateGlobalTableSettingsRequest.h>
#include <aws/dynamodb/model/UpdateItemRequest.h>
#include <aws/dynamodb/model/UpdateTableRequest.h>
#include <aws/dynamodb/model/UpdateTimeToLiveRequest.h>

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
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<DynamoDBErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

DynamoDBClient::DynamoDBClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<DynamoDBErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

DynamoDBClient::DynamoDBClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
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
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + DynamoDBEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
  if (!config.endpointOverride.empty())
  {
    m_enableEndpointDiscovery = false;
  }
  else
  {
    m_enableEndpointDiscovery = config.enableEndpointDiscovery;
  }
}

void DynamoDBClient::OverrideEndpoint(const Aws::String& endpoint)
{
  if (endpoint.compare(0, 7, "http://") == 0 || endpoint.compare(0, 8, "https://") == 0)
  {
      m_uri = endpoint;
  }
  else
  {
      m_uri = m_configScheme + "://" + endpoint;
  }
  m_enableEndpointDiscovery = false;
}

BatchGetItemOutcome DynamoDBClient::BatchGetItem(const BatchGetItemRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  if (m_enableEndpointDiscovery)
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("BatchGetItem", "Making request to cached endpoint: " << endpoint);
      uri = endpoint;
    }
    else
    {
      AWS_LOGSTREAM_TRACE("BatchGetItem", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
      DescribeEndpointsRequest endpointRequest;
      auto endpointOutcome = DescribeEndpoints(endpointRequest);
      if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
      {
        const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];
        m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
        uri = item.GetAddress();
        AWS_LOGSTREAM_TRACE("BatchGetItem", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else 
      {
        AWS_LOGSTREAM_ERROR("BatchGetItem", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  auto task = Aws::MakeShared< std::packaged_task< BatchGetItemOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetItem(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClient::BatchGetItemAsync(const BatchGetItemRequest& request, const BatchGetItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchGetItemAsyncHelper( request, handler, context ); } );
}

void DynamoDBClient::BatchGetItemAsyncHelper(const BatchGetItemRequest& request, const BatchGetItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchGetItem(request), context);
}

BatchWriteItemOutcome DynamoDBClient::BatchWriteItem(const BatchWriteItemRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  if (m_enableEndpointDiscovery)
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("BatchWriteItem", "Making request to cached endpoint: " << endpoint);
      uri = endpoint;
    }
    else
    {
      AWS_LOGSTREAM_TRACE("BatchWriteItem", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
      DescribeEndpointsRequest endpointRequest;
      auto endpointOutcome = DescribeEndpoints(endpointRequest);
      if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
      {
        const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];
        m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
        uri = item.GetAddress();
        AWS_LOGSTREAM_TRACE("BatchWriteItem", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else 
      {
        AWS_LOGSTREAM_ERROR("BatchWriteItem", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  auto task = Aws::MakeShared< std::packaged_task< BatchWriteItemOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchWriteItem(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClient::BatchWriteItemAsync(const BatchWriteItemRequest& request, const BatchWriteItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchWriteItemAsyncHelper( request, handler, context ); } );
}

void DynamoDBClient::BatchWriteItemAsyncHelper(const BatchWriteItemRequest& request, const BatchWriteItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchWriteItem(request), context);
}

CreateBackupOutcome DynamoDBClient::CreateBackup(const CreateBackupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  if (m_enableEndpointDiscovery)
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("CreateBackup", "Making request to cached endpoint: " << endpoint);
      uri = endpoint;
    }
    else
    {
      AWS_LOGSTREAM_TRACE("CreateBackup", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
      DescribeEndpointsRequest endpointRequest;
      auto endpointOutcome = DescribeEndpoints(endpointRequest);
      if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
      {
        const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];
        m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
        uri = item.GetAddress();
        AWS_LOGSTREAM_TRACE("CreateBackup", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else 
      {
        AWS_LOGSTREAM_ERROR("CreateBackup", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateBackupOutcome(CreateBackupResult(outcome.GetResult()));
  }
  else
  {
    return CreateBackupOutcome(outcome.GetError());
  }
}

CreateBackupOutcomeCallable DynamoDBClient::CreateBackupCallable(const CreateBackupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateBackupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateBackup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClient::CreateBackupAsync(const CreateBackupRequest& request, const CreateBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateBackupAsyncHelper( request, handler, context ); } );
}

void DynamoDBClient::CreateBackupAsyncHelper(const CreateBackupRequest& request, const CreateBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateBackup(request), context);
}

CreateGlobalTableOutcome DynamoDBClient::CreateGlobalTable(const CreateGlobalTableRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  if (m_enableEndpointDiscovery)
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("CreateGlobalTable", "Making request to cached endpoint: " << endpoint);
      uri = endpoint;
    }
    else
    {
      AWS_LOGSTREAM_TRACE("CreateGlobalTable", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
      DescribeEndpointsRequest endpointRequest;
      auto endpointOutcome = DescribeEndpoints(endpointRequest);
      if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
      {
        const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];
        m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
        uri = item.GetAddress();
        AWS_LOGSTREAM_TRACE("CreateGlobalTable", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else 
      {
        AWS_LOGSTREAM_ERROR("CreateGlobalTable", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateGlobalTableOutcome(CreateGlobalTableResult(outcome.GetResult()));
  }
  else
  {
    return CreateGlobalTableOutcome(outcome.GetError());
  }
}

CreateGlobalTableOutcomeCallable DynamoDBClient::CreateGlobalTableCallable(const CreateGlobalTableRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateGlobalTableOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateGlobalTable(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClient::CreateGlobalTableAsync(const CreateGlobalTableRequest& request, const CreateGlobalTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateGlobalTableAsyncHelper( request, handler, context ); } );
}

void DynamoDBClient::CreateGlobalTableAsyncHelper(const CreateGlobalTableRequest& request, const CreateGlobalTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateGlobalTable(request), context);
}

CreateTableOutcome DynamoDBClient::CreateTable(const CreateTableRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  if (m_enableEndpointDiscovery)
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("CreateTable", "Making request to cached endpoint: " << endpoint);
      uri = endpoint;
    }
    else
    {
      AWS_LOGSTREAM_TRACE("CreateTable", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
      DescribeEndpointsRequest endpointRequest;
      auto endpointOutcome = DescribeEndpoints(endpointRequest);
      if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
      {
        const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];
        m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
        uri = item.GetAddress();
        AWS_LOGSTREAM_TRACE("CreateTable", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else 
      {
        AWS_LOGSTREAM_ERROR("CreateTable", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  auto task = Aws::MakeShared< std::packaged_task< CreateTableOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTable(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClient::CreateTableAsync(const CreateTableRequest& request, const CreateTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateTableAsyncHelper( request, handler, context ); } );
}

void DynamoDBClient::CreateTableAsyncHelper(const CreateTableRequest& request, const CreateTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateTable(request), context);
}

DeleteBackupOutcome DynamoDBClient::DeleteBackup(const DeleteBackupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  if (m_enableEndpointDiscovery)
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("DeleteBackup", "Making request to cached endpoint: " << endpoint);
      uri = endpoint;
    }
    else
    {
      AWS_LOGSTREAM_TRACE("DeleteBackup", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
      DescribeEndpointsRequest endpointRequest;
      auto endpointOutcome = DescribeEndpoints(endpointRequest);
      if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
      {
        const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];
        m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
        uri = item.GetAddress();
        AWS_LOGSTREAM_TRACE("DeleteBackup", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else 
      {
        AWS_LOGSTREAM_ERROR("DeleteBackup", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteBackupOutcome(DeleteBackupResult(outcome.GetResult()));
  }
  else
  {
    return DeleteBackupOutcome(outcome.GetError());
  }
}

DeleteBackupOutcomeCallable DynamoDBClient::DeleteBackupCallable(const DeleteBackupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBackupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBackup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClient::DeleteBackupAsync(const DeleteBackupRequest& request, const DeleteBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteBackupAsyncHelper( request, handler, context ); } );
}

void DynamoDBClient::DeleteBackupAsyncHelper(const DeleteBackupRequest& request, const DeleteBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteBackup(request), context);
}

DeleteItemOutcome DynamoDBClient::DeleteItem(const DeleteItemRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  if (m_enableEndpointDiscovery)
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("DeleteItem", "Making request to cached endpoint: " << endpoint);
      uri = endpoint;
    }
    else
    {
      AWS_LOGSTREAM_TRACE("DeleteItem", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
      DescribeEndpointsRequest endpointRequest;
      auto endpointOutcome = DescribeEndpoints(endpointRequest);
      if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
      {
        const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];
        m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
        uri = item.GetAddress();
        AWS_LOGSTREAM_TRACE("DeleteItem", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else 
      {
        AWS_LOGSTREAM_ERROR("DeleteItem", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  auto task = Aws::MakeShared< std::packaged_task< DeleteItemOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteItem(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClient::DeleteItemAsync(const DeleteItemRequest& request, const DeleteItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteItemAsyncHelper( request, handler, context ); } );
}

void DynamoDBClient::DeleteItemAsyncHelper(const DeleteItemRequest& request, const DeleteItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteItem(request), context);
}

DeleteTableOutcome DynamoDBClient::DeleteTable(const DeleteTableRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  if (m_enableEndpointDiscovery)
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("DeleteTable", "Making request to cached endpoint: " << endpoint);
      uri = endpoint;
    }
    else
    {
      AWS_LOGSTREAM_TRACE("DeleteTable", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
      DescribeEndpointsRequest endpointRequest;
      auto endpointOutcome = DescribeEndpoints(endpointRequest);
      if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
      {
        const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];
        m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
        uri = item.GetAddress();
        AWS_LOGSTREAM_TRACE("DeleteTable", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else 
      {
        AWS_LOGSTREAM_ERROR("DeleteTable", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  auto task = Aws::MakeShared< std::packaged_task< DeleteTableOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTable(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClient::DeleteTableAsync(const DeleteTableRequest& request, const DeleteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteTableAsyncHelper( request, handler, context ); } );
}

void DynamoDBClient::DeleteTableAsyncHelper(const DeleteTableRequest& request, const DeleteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteTable(request), context);
}

DescribeBackupOutcome DynamoDBClient::DescribeBackup(const DescribeBackupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  if (m_enableEndpointDiscovery)
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("DescribeBackup", "Making request to cached endpoint: " << endpoint);
      uri = endpoint;
    }
    else
    {
      AWS_LOGSTREAM_TRACE("DescribeBackup", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
      DescribeEndpointsRequest endpointRequest;
      auto endpointOutcome = DescribeEndpoints(endpointRequest);
      if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
      {
        const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];
        m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
        uri = item.GetAddress();
        AWS_LOGSTREAM_TRACE("DescribeBackup", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else 
      {
        AWS_LOGSTREAM_ERROR("DescribeBackup", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeBackupOutcome(DescribeBackupResult(outcome.GetResult()));
  }
  else
  {
    return DescribeBackupOutcome(outcome.GetError());
  }
}

DescribeBackupOutcomeCallable DynamoDBClient::DescribeBackupCallable(const DescribeBackupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeBackupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeBackup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClient::DescribeBackupAsync(const DescribeBackupRequest& request, const DescribeBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeBackupAsyncHelper( request, handler, context ); } );
}

void DynamoDBClient::DescribeBackupAsyncHelper(const DescribeBackupRequest& request, const DescribeBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeBackup(request), context);
}

DescribeContinuousBackupsOutcome DynamoDBClient::DescribeContinuousBackups(const DescribeContinuousBackupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  if (m_enableEndpointDiscovery)
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("DescribeContinuousBackups", "Making request to cached endpoint: " << endpoint);
      uri = endpoint;
    }
    else
    {
      AWS_LOGSTREAM_TRACE("DescribeContinuousBackups", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
      DescribeEndpointsRequest endpointRequest;
      auto endpointOutcome = DescribeEndpoints(endpointRequest);
      if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
      {
        const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];
        m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
        uri = item.GetAddress();
        AWS_LOGSTREAM_TRACE("DescribeContinuousBackups", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else 
      {
        AWS_LOGSTREAM_ERROR("DescribeContinuousBackups", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeContinuousBackupsOutcome(DescribeContinuousBackupsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeContinuousBackupsOutcome(outcome.GetError());
  }
}

DescribeContinuousBackupsOutcomeCallable DynamoDBClient::DescribeContinuousBackupsCallable(const DescribeContinuousBackupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeContinuousBackupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeContinuousBackups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClient::DescribeContinuousBackupsAsync(const DescribeContinuousBackupsRequest& request, const DescribeContinuousBackupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeContinuousBackupsAsyncHelper( request, handler, context ); } );
}

void DynamoDBClient::DescribeContinuousBackupsAsyncHelper(const DescribeContinuousBackupsRequest& request, const DescribeContinuousBackupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeContinuousBackups(request), context);
}

DescribeEndpointsOutcome DynamoDBClient::DescribeEndpoints(const DescribeEndpointsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeEndpointsOutcome(DescribeEndpointsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeEndpointsOutcome(outcome.GetError());
  }
}

DescribeEndpointsOutcomeCallable DynamoDBClient::DescribeEndpointsCallable(const DescribeEndpointsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEndpointsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEndpoints(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClient::DescribeEndpointsAsync(const DescribeEndpointsRequest& request, const DescribeEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeEndpointsAsyncHelper( request, handler, context ); } );
}

void DynamoDBClient::DescribeEndpointsAsyncHelper(const DescribeEndpointsRequest& request, const DescribeEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeEndpoints(request), context);
}

DescribeGlobalTableOutcome DynamoDBClient::DescribeGlobalTable(const DescribeGlobalTableRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  if (m_enableEndpointDiscovery)
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("DescribeGlobalTable", "Making request to cached endpoint: " << endpoint);
      uri = endpoint;
    }
    else
    {
      AWS_LOGSTREAM_TRACE("DescribeGlobalTable", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
      DescribeEndpointsRequest endpointRequest;
      auto endpointOutcome = DescribeEndpoints(endpointRequest);
      if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
      {
        const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];
        m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
        uri = item.GetAddress();
        AWS_LOGSTREAM_TRACE("DescribeGlobalTable", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else 
      {
        AWS_LOGSTREAM_ERROR("DescribeGlobalTable", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeGlobalTableOutcome(DescribeGlobalTableResult(outcome.GetResult()));
  }
  else
  {
    return DescribeGlobalTableOutcome(outcome.GetError());
  }
}

DescribeGlobalTableOutcomeCallable DynamoDBClient::DescribeGlobalTableCallable(const DescribeGlobalTableRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeGlobalTableOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeGlobalTable(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClient::DescribeGlobalTableAsync(const DescribeGlobalTableRequest& request, const DescribeGlobalTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeGlobalTableAsyncHelper( request, handler, context ); } );
}

void DynamoDBClient::DescribeGlobalTableAsyncHelper(const DescribeGlobalTableRequest& request, const DescribeGlobalTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeGlobalTable(request), context);
}

DescribeGlobalTableSettingsOutcome DynamoDBClient::DescribeGlobalTableSettings(const DescribeGlobalTableSettingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  if (m_enableEndpointDiscovery)
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("DescribeGlobalTableSettings", "Making request to cached endpoint: " << endpoint);
      uri = endpoint;
    }
    else
    {
      AWS_LOGSTREAM_TRACE("DescribeGlobalTableSettings", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
      DescribeEndpointsRequest endpointRequest;
      auto endpointOutcome = DescribeEndpoints(endpointRequest);
      if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
      {
        const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];
        m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
        uri = item.GetAddress();
        AWS_LOGSTREAM_TRACE("DescribeGlobalTableSettings", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else 
      {
        AWS_LOGSTREAM_ERROR("DescribeGlobalTableSettings", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeGlobalTableSettingsOutcome(DescribeGlobalTableSettingsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeGlobalTableSettingsOutcome(outcome.GetError());
  }
}

DescribeGlobalTableSettingsOutcomeCallable DynamoDBClient::DescribeGlobalTableSettingsCallable(const DescribeGlobalTableSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeGlobalTableSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeGlobalTableSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClient::DescribeGlobalTableSettingsAsync(const DescribeGlobalTableSettingsRequest& request, const DescribeGlobalTableSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeGlobalTableSettingsAsyncHelper( request, handler, context ); } );
}

void DynamoDBClient::DescribeGlobalTableSettingsAsyncHelper(const DescribeGlobalTableSettingsRequest& request, const DescribeGlobalTableSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeGlobalTableSettings(request), context);
}

DescribeLimitsOutcome DynamoDBClient::DescribeLimits(const DescribeLimitsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  if (m_enableEndpointDiscovery)
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("DescribeLimits", "Making request to cached endpoint: " << endpoint);
      uri = endpoint;
    }
    else
    {
      AWS_LOGSTREAM_TRACE("DescribeLimits", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
      DescribeEndpointsRequest endpointRequest;
      auto endpointOutcome = DescribeEndpoints(endpointRequest);
      if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
      {
        const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];
        m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
        uri = item.GetAddress();
        AWS_LOGSTREAM_TRACE("DescribeLimits", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else 
      {
        AWS_LOGSTREAM_ERROR("DescribeLimits", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeLimitsOutcome(DescribeLimitsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeLimitsOutcome(outcome.GetError());
  }
}

DescribeLimitsOutcomeCallable DynamoDBClient::DescribeLimitsCallable(const DescribeLimitsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLimitsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLimits(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClient::DescribeLimitsAsync(const DescribeLimitsRequest& request, const DescribeLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeLimitsAsyncHelper( request, handler, context ); } );
}

void DynamoDBClient::DescribeLimitsAsyncHelper(const DescribeLimitsRequest& request, const DescribeLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeLimits(request), context);
}

DescribeTableOutcome DynamoDBClient::DescribeTable(const DescribeTableRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  if (m_enableEndpointDiscovery)
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("DescribeTable", "Making request to cached endpoint: " << endpoint);
      uri = endpoint;
    }
    else
    {
      AWS_LOGSTREAM_TRACE("DescribeTable", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
      DescribeEndpointsRequest endpointRequest;
      auto endpointOutcome = DescribeEndpoints(endpointRequest);
      if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
      {
        const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];
        m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
        uri = item.GetAddress();
        AWS_LOGSTREAM_TRACE("DescribeTable", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else 
      {
        AWS_LOGSTREAM_ERROR("DescribeTable", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  auto task = Aws::MakeShared< std::packaged_task< DescribeTableOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTable(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClient::DescribeTableAsync(const DescribeTableRequest& request, const DescribeTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeTableAsyncHelper( request, handler, context ); } );
}

void DynamoDBClient::DescribeTableAsyncHelper(const DescribeTableRequest& request, const DescribeTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeTable(request), context);
}

DescribeTimeToLiveOutcome DynamoDBClient::DescribeTimeToLive(const DescribeTimeToLiveRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  if (m_enableEndpointDiscovery)
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("DescribeTimeToLive", "Making request to cached endpoint: " << endpoint);
      uri = endpoint;
    }
    else
    {
      AWS_LOGSTREAM_TRACE("DescribeTimeToLive", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
      DescribeEndpointsRequest endpointRequest;
      auto endpointOutcome = DescribeEndpoints(endpointRequest);
      if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
      {
        const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];
        m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
        uri = item.GetAddress();
        AWS_LOGSTREAM_TRACE("DescribeTimeToLive", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else 
      {
        AWS_LOGSTREAM_ERROR("DescribeTimeToLive", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeTimeToLiveOutcome(DescribeTimeToLiveResult(outcome.GetResult()));
  }
  else
  {
    return DescribeTimeToLiveOutcome(outcome.GetError());
  }
}

DescribeTimeToLiveOutcomeCallable DynamoDBClient::DescribeTimeToLiveCallable(const DescribeTimeToLiveRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTimeToLiveOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTimeToLive(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClient::DescribeTimeToLiveAsync(const DescribeTimeToLiveRequest& request, const DescribeTimeToLiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeTimeToLiveAsyncHelper( request, handler, context ); } );
}

void DynamoDBClient::DescribeTimeToLiveAsyncHelper(const DescribeTimeToLiveRequest& request, const DescribeTimeToLiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeTimeToLive(request), context);
}

GetItemOutcome DynamoDBClient::GetItem(const GetItemRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  if (m_enableEndpointDiscovery)
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("GetItem", "Making request to cached endpoint: " << endpoint);
      uri = endpoint;
    }
    else
    {
      AWS_LOGSTREAM_TRACE("GetItem", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
      DescribeEndpointsRequest endpointRequest;
      auto endpointOutcome = DescribeEndpoints(endpointRequest);
      if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
      {
        const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];
        m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
        uri = item.GetAddress();
        AWS_LOGSTREAM_TRACE("GetItem", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else 
      {
        AWS_LOGSTREAM_ERROR("GetItem", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  auto task = Aws::MakeShared< std::packaged_task< GetItemOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetItem(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClient::GetItemAsync(const GetItemRequest& request, const GetItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetItemAsyncHelper( request, handler, context ); } );
}

void DynamoDBClient::GetItemAsyncHelper(const GetItemRequest& request, const GetItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetItem(request), context);
}

ListBackupsOutcome DynamoDBClient::ListBackups(const ListBackupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  if (m_enableEndpointDiscovery)
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("ListBackups", "Making request to cached endpoint: " << endpoint);
      uri = endpoint;
    }
    else
    {
      AWS_LOGSTREAM_TRACE("ListBackups", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
      DescribeEndpointsRequest endpointRequest;
      auto endpointOutcome = DescribeEndpoints(endpointRequest);
      if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
      {
        const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];
        m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
        uri = item.GetAddress();
        AWS_LOGSTREAM_TRACE("ListBackups", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else 
      {
        AWS_LOGSTREAM_ERROR("ListBackups", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListBackupsOutcome(ListBackupsResult(outcome.GetResult()));
  }
  else
  {
    return ListBackupsOutcome(outcome.GetError());
  }
}

ListBackupsOutcomeCallable DynamoDBClient::ListBackupsCallable(const ListBackupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListBackupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListBackups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClient::ListBackupsAsync(const ListBackupsRequest& request, const ListBackupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListBackupsAsyncHelper( request, handler, context ); } );
}

void DynamoDBClient::ListBackupsAsyncHelper(const ListBackupsRequest& request, const ListBackupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListBackups(request), context);
}

ListGlobalTablesOutcome DynamoDBClient::ListGlobalTables(const ListGlobalTablesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  if (m_enableEndpointDiscovery)
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("ListGlobalTables", "Making request to cached endpoint: " << endpoint);
      uri = endpoint;
    }
    else
    {
      AWS_LOGSTREAM_TRACE("ListGlobalTables", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
      DescribeEndpointsRequest endpointRequest;
      auto endpointOutcome = DescribeEndpoints(endpointRequest);
      if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
      {
        const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];
        m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
        uri = item.GetAddress();
        AWS_LOGSTREAM_TRACE("ListGlobalTables", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else 
      {
        AWS_LOGSTREAM_ERROR("ListGlobalTables", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListGlobalTablesOutcome(ListGlobalTablesResult(outcome.GetResult()));
  }
  else
  {
    return ListGlobalTablesOutcome(outcome.GetError());
  }
}

ListGlobalTablesOutcomeCallable DynamoDBClient::ListGlobalTablesCallable(const ListGlobalTablesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListGlobalTablesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListGlobalTables(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClient::ListGlobalTablesAsync(const ListGlobalTablesRequest& request, const ListGlobalTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListGlobalTablesAsyncHelper( request, handler, context ); } );
}

void DynamoDBClient::ListGlobalTablesAsyncHelper(const ListGlobalTablesRequest& request, const ListGlobalTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListGlobalTables(request), context);
}

ListTablesOutcome DynamoDBClient::ListTables(const ListTablesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  if (m_enableEndpointDiscovery)
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("ListTables", "Making request to cached endpoint: " << endpoint);
      uri = endpoint;
    }
    else
    {
      AWS_LOGSTREAM_TRACE("ListTables", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
      DescribeEndpointsRequest endpointRequest;
      auto endpointOutcome = DescribeEndpoints(endpointRequest);
      if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
      {
        const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];
        m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
        uri = item.GetAddress();
        AWS_LOGSTREAM_TRACE("ListTables", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else 
      {
        AWS_LOGSTREAM_ERROR("ListTables", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  auto task = Aws::MakeShared< std::packaged_task< ListTablesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTables(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClient::ListTablesAsync(const ListTablesRequest& request, const ListTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTablesAsyncHelper( request, handler, context ); } );
}

void DynamoDBClient::ListTablesAsyncHelper(const ListTablesRequest& request, const ListTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTables(request), context);
}

ListTagsOfResourceOutcome DynamoDBClient::ListTagsOfResource(const ListTagsOfResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  if (m_enableEndpointDiscovery)
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("ListTagsOfResource", "Making request to cached endpoint: " << endpoint);
      uri = endpoint;
    }
    else
    {
      AWS_LOGSTREAM_TRACE("ListTagsOfResource", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
      DescribeEndpointsRequest endpointRequest;
      auto endpointOutcome = DescribeEndpoints(endpointRequest);
      if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
      {
        const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];
        m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
        uri = item.GetAddress();
        AWS_LOGSTREAM_TRACE("ListTagsOfResource", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else 
      {
        AWS_LOGSTREAM_ERROR("ListTagsOfResource", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListTagsOfResourceOutcome(ListTagsOfResourceResult(outcome.GetResult()));
  }
  else
  {
    return ListTagsOfResourceOutcome(outcome.GetError());
  }
}

ListTagsOfResourceOutcomeCallable DynamoDBClient::ListTagsOfResourceCallable(const ListTagsOfResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsOfResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsOfResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClient::ListTagsOfResourceAsync(const ListTagsOfResourceRequest& request, const ListTagsOfResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsOfResourceAsyncHelper( request, handler, context ); } );
}

void DynamoDBClient::ListTagsOfResourceAsyncHelper(const ListTagsOfResourceRequest& request, const ListTagsOfResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsOfResource(request), context);
}

PutItemOutcome DynamoDBClient::PutItem(const PutItemRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  if (m_enableEndpointDiscovery)
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("PutItem", "Making request to cached endpoint: " << endpoint);
      uri = endpoint;
    }
    else
    {
      AWS_LOGSTREAM_TRACE("PutItem", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
      DescribeEndpointsRequest endpointRequest;
      auto endpointOutcome = DescribeEndpoints(endpointRequest);
      if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
      {
        const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];
        m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
        uri = item.GetAddress();
        AWS_LOGSTREAM_TRACE("PutItem", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else 
      {
        AWS_LOGSTREAM_ERROR("PutItem", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  auto task = Aws::MakeShared< std::packaged_task< PutItemOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutItem(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClient::PutItemAsync(const PutItemRequest& request, const PutItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutItemAsyncHelper( request, handler, context ); } );
}

void DynamoDBClient::PutItemAsyncHelper(const PutItemRequest& request, const PutItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutItem(request), context);
}

QueryOutcome DynamoDBClient::Query(const QueryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  if (m_enableEndpointDiscovery)
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("Query", "Making request to cached endpoint: " << endpoint);
      uri = endpoint;
    }
    else
    {
      AWS_LOGSTREAM_TRACE("Query", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
      DescribeEndpointsRequest endpointRequest;
      auto endpointOutcome = DescribeEndpoints(endpointRequest);
      if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
      {
        const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];
        m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
        uri = item.GetAddress();
        AWS_LOGSTREAM_TRACE("Query", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else 
      {
        AWS_LOGSTREAM_ERROR("Query", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  auto task = Aws::MakeShared< std::packaged_task< QueryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->Query(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClient::QueryAsync(const QueryRequest& request, const QueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->QueryAsyncHelper( request, handler, context ); } );
}

void DynamoDBClient::QueryAsyncHelper(const QueryRequest& request, const QueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, Query(request), context);
}

RestoreTableFromBackupOutcome DynamoDBClient::RestoreTableFromBackup(const RestoreTableFromBackupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  if (m_enableEndpointDiscovery)
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("RestoreTableFromBackup", "Making request to cached endpoint: " << endpoint);
      uri = endpoint;
    }
    else
    {
      AWS_LOGSTREAM_TRACE("RestoreTableFromBackup", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
      DescribeEndpointsRequest endpointRequest;
      auto endpointOutcome = DescribeEndpoints(endpointRequest);
      if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
      {
        const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];
        m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
        uri = item.GetAddress();
        AWS_LOGSTREAM_TRACE("RestoreTableFromBackup", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else 
      {
        AWS_LOGSTREAM_ERROR("RestoreTableFromBackup", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RestoreTableFromBackupOutcome(RestoreTableFromBackupResult(outcome.GetResult()));
  }
  else
  {
    return RestoreTableFromBackupOutcome(outcome.GetError());
  }
}

RestoreTableFromBackupOutcomeCallable DynamoDBClient::RestoreTableFromBackupCallable(const RestoreTableFromBackupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RestoreTableFromBackupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RestoreTableFromBackup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClient::RestoreTableFromBackupAsync(const RestoreTableFromBackupRequest& request, const RestoreTableFromBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RestoreTableFromBackupAsyncHelper( request, handler, context ); } );
}

void DynamoDBClient::RestoreTableFromBackupAsyncHelper(const RestoreTableFromBackupRequest& request, const RestoreTableFromBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RestoreTableFromBackup(request), context);
}

RestoreTableToPointInTimeOutcome DynamoDBClient::RestoreTableToPointInTime(const RestoreTableToPointInTimeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  if (m_enableEndpointDiscovery)
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("RestoreTableToPointInTime", "Making request to cached endpoint: " << endpoint);
      uri = endpoint;
    }
    else
    {
      AWS_LOGSTREAM_TRACE("RestoreTableToPointInTime", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
      DescribeEndpointsRequest endpointRequest;
      auto endpointOutcome = DescribeEndpoints(endpointRequest);
      if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
      {
        const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];
        m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
        uri = item.GetAddress();
        AWS_LOGSTREAM_TRACE("RestoreTableToPointInTime", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else 
      {
        AWS_LOGSTREAM_ERROR("RestoreTableToPointInTime", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RestoreTableToPointInTimeOutcome(RestoreTableToPointInTimeResult(outcome.GetResult()));
  }
  else
  {
    return RestoreTableToPointInTimeOutcome(outcome.GetError());
  }
}

RestoreTableToPointInTimeOutcomeCallable DynamoDBClient::RestoreTableToPointInTimeCallable(const RestoreTableToPointInTimeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RestoreTableToPointInTimeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RestoreTableToPointInTime(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClient::RestoreTableToPointInTimeAsync(const RestoreTableToPointInTimeRequest& request, const RestoreTableToPointInTimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RestoreTableToPointInTimeAsyncHelper( request, handler, context ); } );
}

void DynamoDBClient::RestoreTableToPointInTimeAsyncHelper(const RestoreTableToPointInTimeRequest& request, const RestoreTableToPointInTimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RestoreTableToPointInTime(request), context);
}

ScanOutcome DynamoDBClient::Scan(const ScanRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  if (m_enableEndpointDiscovery)
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("Scan", "Making request to cached endpoint: " << endpoint);
      uri = endpoint;
    }
    else
    {
      AWS_LOGSTREAM_TRACE("Scan", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
      DescribeEndpointsRequest endpointRequest;
      auto endpointOutcome = DescribeEndpoints(endpointRequest);
      if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
      {
        const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];
        m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
        uri = item.GetAddress();
        AWS_LOGSTREAM_TRACE("Scan", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else 
      {
        AWS_LOGSTREAM_ERROR("Scan", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  auto task = Aws::MakeShared< std::packaged_task< ScanOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->Scan(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClient::ScanAsync(const ScanRequest& request, const ScanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ScanAsyncHelper( request, handler, context ); } );
}

void DynamoDBClient::ScanAsyncHelper(const ScanRequest& request, const ScanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, Scan(request), context);
}

TagResourceOutcome DynamoDBClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  if (m_enableEndpointDiscovery)
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("TagResource", "Making request to cached endpoint: " << endpoint);
      uri = endpoint;
    }
    else
    {
      AWS_LOGSTREAM_TRACE("TagResource", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
      DescribeEndpointsRequest endpointRequest;
      auto endpointOutcome = DescribeEndpoints(endpointRequest);
      if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
      {
        const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];
        m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
        uri = item.GetAddress();
        AWS_LOGSTREAM_TRACE("TagResource", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else 
      {
        AWS_LOGSTREAM_ERROR("TagResource", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return TagResourceOutcome(NoResult());
  }
  else
  {
    return TagResourceOutcome(outcome.GetError());
  }
}

TagResourceOutcomeCallable DynamoDBClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void DynamoDBClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

TransactGetItemsOutcome DynamoDBClient::TransactGetItems(const TransactGetItemsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  if (m_enableEndpointDiscovery)
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("TransactGetItems", "Making request to cached endpoint: " << endpoint);
      uri = endpoint;
    }
    else
    {
      AWS_LOGSTREAM_TRACE("TransactGetItems", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
      DescribeEndpointsRequest endpointRequest;
      auto endpointOutcome = DescribeEndpoints(endpointRequest);
      if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
      {
        const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];
        m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
        uri = item.GetAddress();
        AWS_LOGSTREAM_TRACE("TransactGetItems", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else 
      {
        AWS_LOGSTREAM_ERROR("TransactGetItems", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return TransactGetItemsOutcome(TransactGetItemsResult(outcome.GetResult()));
  }
  else
  {
    return TransactGetItemsOutcome(outcome.GetError());
  }
}

TransactGetItemsOutcomeCallable DynamoDBClient::TransactGetItemsCallable(const TransactGetItemsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TransactGetItemsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TransactGetItems(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClient::TransactGetItemsAsync(const TransactGetItemsRequest& request, const TransactGetItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TransactGetItemsAsyncHelper( request, handler, context ); } );
}

void DynamoDBClient::TransactGetItemsAsyncHelper(const TransactGetItemsRequest& request, const TransactGetItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TransactGetItems(request), context);
}

TransactWriteItemsOutcome DynamoDBClient::TransactWriteItems(const TransactWriteItemsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  if (m_enableEndpointDiscovery)
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("TransactWriteItems", "Making request to cached endpoint: " << endpoint);
      uri = endpoint;
    }
    else
    {
      AWS_LOGSTREAM_TRACE("TransactWriteItems", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
      DescribeEndpointsRequest endpointRequest;
      auto endpointOutcome = DescribeEndpoints(endpointRequest);
      if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
      {
        const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];
        m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
        uri = item.GetAddress();
        AWS_LOGSTREAM_TRACE("TransactWriteItems", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else 
      {
        AWS_LOGSTREAM_ERROR("TransactWriteItems", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return TransactWriteItemsOutcome(TransactWriteItemsResult(outcome.GetResult()));
  }
  else
  {
    return TransactWriteItemsOutcome(outcome.GetError());
  }
}

TransactWriteItemsOutcomeCallable DynamoDBClient::TransactWriteItemsCallable(const TransactWriteItemsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TransactWriteItemsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TransactWriteItems(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClient::TransactWriteItemsAsync(const TransactWriteItemsRequest& request, const TransactWriteItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TransactWriteItemsAsyncHelper( request, handler, context ); } );
}

void DynamoDBClient::TransactWriteItemsAsyncHelper(const TransactWriteItemsRequest& request, const TransactWriteItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TransactWriteItems(request), context);
}

UntagResourceOutcome DynamoDBClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  if (m_enableEndpointDiscovery)
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("UntagResource", "Making request to cached endpoint: " << endpoint);
      uri = endpoint;
    }
    else
    {
      AWS_LOGSTREAM_TRACE("UntagResource", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
      DescribeEndpointsRequest endpointRequest;
      auto endpointOutcome = DescribeEndpoints(endpointRequest);
      if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
      {
        const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];
        m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
        uri = item.GetAddress();
        AWS_LOGSTREAM_TRACE("UntagResource", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else 
      {
        AWS_LOGSTREAM_ERROR("UntagResource", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UntagResourceOutcome(NoResult());
  }
  else
  {
    return UntagResourceOutcome(outcome.GetError());
  }
}

UntagResourceOutcomeCallable DynamoDBClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void DynamoDBClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateContinuousBackupsOutcome DynamoDBClient::UpdateContinuousBackups(const UpdateContinuousBackupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  if (m_enableEndpointDiscovery)
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("UpdateContinuousBackups", "Making request to cached endpoint: " << endpoint);
      uri = endpoint;
    }
    else
    {
      AWS_LOGSTREAM_TRACE("UpdateContinuousBackups", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
      DescribeEndpointsRequest endpointRequest;
      auto endpointOutcome = DescribeEndpoints(endpointRequest);
      if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
      {
        const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];
        m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
        uri = item.GetAddress();
        AWS_LOGSTREAM_TRACE("UpdateContinuousBackups", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else 
      {
        AWS_LOGSTREAM_ERROR("UpdateContinuousBackups", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateContinuousBackupsOutcome(UpdateContinuousBackupsResult(outcome.GetResult()));
  }
  else
  {
    return UpdateContinuousBackupsOutcome(outcome.GetError());
  }
}

UpdateContinuousBackupsOutcomeCallable DynamoDBClient::UpdateContinuousBackupsCallable(const UpdateContinuousBackupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateContinuousBackupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateContinuousBackups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClient::UpdateContinuousBackupsAsync(const UpdateContinuousBackupsRequest& request, const UpdateContinuousBackupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateContinuousBackupsAsyncHelper( request, handler, context ); } );
}

void DynamoDBClient::UpdateContinuousBackupsAsyncHelper(const UpdateContinuousBackupsRequest& request, const UpdateContinuousBackupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateContinuousBackups(request), context);
}

UpdateGlobalTableOutcome DynamoDBClient::UpdateGlobalTable(const UpdateGlobalTableRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  if (m_enableEndpointDiscovery)
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("UpdateGlobalTable", "Making request to cached endpoint: " << endpoint);
      uri = endpoint;
    }
    else
    {
      AWS_LOGSTREAM_TRACE("UpdateGlobalTable", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
      DescribeEndpointsRequest endpointRequest;
      auto endpointOutcome = DescribeEndpoints(endpointRequest);
      if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
      {
        const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];
        m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
        uri = item.GetAddress();
        AWS_LOGSTREAM_TRACE("UpdateGlobalTable", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else 
      {
        AWS_LOGSTREAM_ERROR("UpdateGlobalTable", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateGlobalTableOutcome(UpdateGlobalTableResult(outcome.GetResult()));
  }
  else
  {
    return UpdateGlobalTableOutcome(outcome.GetError());
  }
}

UpdateGlobalTableOutcomeCallable DynamoDBClient::UpdateGlobalTableCallable(const UpdateGlobalTableRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateGlobalTableOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateGlobalTable(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClient::UpdateGlobalTableAsync(const UpdateGlobalTableRequest& request, const UpdateGlobalTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateGlobalTableAsyncHelper( request, handler, context ); } );
}

void DynamoDBClient::UpdateGlobalTableAsyncHelper(const UpdateGlobalTableRequest& request, const UpdateGlobalTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateGlobalTable(request), context);
}

UpdateGlobalTableSettingsOutcome DynamoDBClient::UpdateGlobalTableSettings(const UpdateGlobalTableSettingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  if (m_enableEndpointDiscovery)
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("UpdateGlobalTableSettings", "Making request to cached endpoint: " << endpoint);
      uri = endpoint;
    }
    else
    {
      AWS_LOGSTREAM_TRACE("UpdateGlobalTableSettings", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
      DescribeEndpointsRequest endpointRequest;
      auto endpointOutcome = DescribeEndpoints(endpointRequest);
      if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
      {
        const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];
        m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
        uri = item.GetAddress();
        AWS_LOGSTREAM_TRACE("UpdateGlobalTableSettings", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else 
      {
        AWS_LOGSTREAM_ERROR("UpdateGlobalTableSettings", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateGlobalTableSettingsOutcome(UpdateGlobalTableSettingsResult(outcome.GetResult()));
  }
  else
  {
    return UpdateGlobalTableSettingsOutcome(outcome.GetError());
  }
}

UpdateGlobalTableSettingsOutcomeCallable DynamoDBClient::UpdateGlobalTableSettingsCallable(const UpdateGlobalTableSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateGlobalTableSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateGlobalTableSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClient::UpdateGlobalTableSettingsAsync(const UpdateGlobalTableSettingsRequest& request, const UpdateGlobalTableSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateGlobalTableSettingsAsyncHelper( request, handler, context ); } );
}

void DynamoDBClient::UpdateGlobalTableSettingsAsyncHelper(const UpdateGlobalTableSettingsRequest& request, const UpdateGlobalTableSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateGlobalTableSettings(request), context);
}

UpdateItemOutcome DynamoDBClient::UpdateItem(const UpdateItemRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  if (m_enableEndpointDiscovery)
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("UpdateItem", "Making request to cached endpoint: " << endpoint);
      uri = endpoint;
    }
    else
    {
      AWS_LOGSTREAM_TRACE("UpdateItem", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
      DescribeEndpointsRequest endpointRequest;
      auto endpointOutcome = DescribeEndpoints(endpointRequest);
      if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
      {
        const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];
        m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
        uri = item.GetAddress();
        AWS_LOGSTREAM_TRACE("UpdateItem", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else 
      {
        AWS_LOGSTREAM_ERROR("UpdateItem", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  auto task = Aws::MakeShared< std::packaged_task< UpdateItemOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateItem(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClient::UpdateItemAsync(const UpdateItemRequest& request, const UpdateItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateItemAsyncHelper( request, handler, context ); } );
}

void DynamoDBClient::UpdateItemAsyncHelper(const UpdateItemRequest& request, const UpdateItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateItem(request), context);
}

UpdateTableOutcome DynamoDBClient::UpdateTable(const UpdateTableRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  if (m_enableEndpointDiscovery)
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("UpdateTable", "Making request to cached endpoint: " << endpoint);
      uri = endpoint;
    }
    else
    {
      AWS_LOGSTREAM_TRACE("UpdateTable", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
      DescribeEndpointsRequest endpointRequest;
      auto endpointOutcome = DescribeEndpoints(endpointRequest);
      if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
      {
        const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];
        m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
        uri = item.GetAddress();
        AWS_LOGSTREAM_TRACE("UpdateTable", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else 
      {
        AWS_LOGSTREAM_ERROR("UpdateTable", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  auto task = Aws::MakeShared< std::packaged_task< UpdateTableOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateTable(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClient::UpdateTableAsync(const UpdateTableRequest& request, const UpdateTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateTableAsyncHelper( request, handler, context ); } );
}

void DynamoDBClient::UpdateTableAsyncHelper(const UpdateTableRequest& request, const UpdateTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateTable(request), context);
}

UpdateTimeToLiveOutcome DynamoDBClient::UpdateTimeToLive(const UpdateTimeToLiveRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  if (m_enableEndpointDiscovery)
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("UpdateTimeToLive", "Making request to cached endpoint: " << endpoint);
      uri = endpoint;
    }
    else
    {
      AWS_LOGSTREAM_TRACE("UpdateTimeToLive", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
      DescribeEndpointsRequest endpointRequest;
      auto endpointOutcome = DescribeEndpoints(endpointRequest);
      if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
      {
        const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];
        m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
        uri = item.GetAddress();
        AWS_LOGSTREAM_TRACE("UpdateTimeToLive", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else 
      {
        AWS_LOGSTREAM_ERROR("UpdateTimeToLive", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateTimeToLiveOutcome(UpdateTimeToLiveResult(outcome.GetResult()));
  }
  else
  {
    return UpdateTimeToLiveOutcome(outcome.GetError());
  }
}

UpdateTimeToLiveOutcomeCallable DynamoDBClient::UpdateTimeToLiveCallable(const UpdateTimeToLiveRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateTimeToLiveOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateTimeToLive(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClient::UpdateTimeToLiveAsync(const UpdateTimeToLiveRequest& request, const UpdateTimeToLiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateTimeToLiveAsyncHelper( request, handler, context ); } );
}

void DynamoDBClient::UpdateTimeToLiveAsyncHelper(const UpdateTimeToLiveRequest& request, const UpdateTimeToLiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateTimeToLive(request), context);
}

