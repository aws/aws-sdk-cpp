/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
#include <aws/core/platform/Environment.h>

#include <aws/dynamodb/DynamoDBClient.h>
#include <aws/dynamodb/DynamoDBEndpoint.h>
#include <aws/dynamodb/DynamoDBErrorMarshaller.h>
#include <aws/dynamodb/model/BatchExecuteStatementRequest.h>
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
#include <aws/dynamodb/model/DescribeContributorInsightsRequest.h>
#include <aws/dynamodb/model/DescribeEndpointsRequest.h>
#include <aws/dynamodb/model/DescribeExportRequest.h>
#include <aws/dynamodb/model/DescribeGlobalTableRequest.h>
#include <aws/dynamodb/model/DescribeGlobalTableSettingsRequest.h>
#include <aws/dynamodb/model/DescribeImportRequest.h>
#include <aws/dynamodb/model/DescribeKinesisStreamingDestinationRequest.h>
#include <aws/dynamodb/model/DescribeLimitsRequest.h>
#include <aws/dynamodb/model/DescribeTableRequest.h>
#include <aws/dynamodb/model/DescribeTableReplicaAutoScalingRequest.h>
#include <aws/dynamodb/model/DescribeTimeToLiveRequest.h>
#include <aws/dynamodb/model/DisableKinesisStreamingDestinationRequest.h>
#include <aws/dynamodb/model/EnableKinesisStreamingDestinationRequest.h>
#include <aws/dynamodb/model/ExecuteStatementRequest.h>
#include <aws/dynamodb/model/ExecuteTransactionRequest.h>
#include <aws/dynamodb/model/ExportTableToPointInTimeRequest.h>
#include <aws/dynamodb/model/GetItemRequest.h>
#include <aws/dynamodb/model/ImportTableRequest.h>
#include <aws/dynamodb/model/ListBackupsRequest.h>
#include <aws/dynamodb/model/ListContributorInsightsRequest.h>
#include <aws/dynamodb/model/ListExportsRequest.h>
#include <aws/dynamodb/model/ListGlobalTablesRequest.h>
#include <aws/dynamodb/model/ListImportsRequest.h>
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
#include <aws/dynamodb/model/UpdateContributorInsightsRequest.h>
#include <aws/dynamodb/model/UpdateGlobalTableRequest.h>
#include <aws/dynamodb/model/UpdateGlobalTableSettingsRequest.h>
#include <aws/dynamodb/model/UpdateItemRequest.h>
#include <aws/dynamodb/model/UpdateTableRequest.h>
#include <aws/dynamodb/model/UpdateTableReplicaAutoScalingRequest.h>
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
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<DynamoDBErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

DynamoDBClient::DynamoDBClient(const AWSCredentials& credentials,
                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<DynamoDBErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

DynamoDBClient::DynamoDBClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<DynamoDBErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

DynamoDBClient::~DynamoDBClient()
{
}

void DynamoDBClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("DynamoDB");
  LoadDynamoDBSpecificConfig(config);
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + DynamoDBEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void DynamoDBClient::LoadDynamoDBSpecificConfig(const Aws::Client::ClientConfiguration& clientConfiguration)
{
  if (!clientConfiguration.endpointOverride.empty())
  {
    m_enableEndpointDiscovery = false;
  }
  else if (clientConfiguration.enableEndpointDiscovery)
  {
    m_enableEndpointDiscovery = clientConfiguration.enableEndpointDiscovery.value();
  }
  else
  {
    m_enableEndpointDiscovery = false;

    Aws::String enableEndpointDiscovery = Aws::Environment::GetEnv("AWS_ENABLE_ENDPOINT_DISCOVERY");
    if (enableEndpointDiscovery.empty())
    {
      enableEndpointDiscovery = Aws::Config::GetCachedConfigValue(clientConfiguration.profileName, "endpoint_discovery_enabled");
    }

    if (enableEndpointDiscovery == "true")
    {
      m_enableEndpointDiscovery = true;
    }
    else if (enableEndpointDiscovery == "false")
    {
      m_enableEndpointDiscovery = false;
    }
    else if (!enableEndpointDiscovery.empty())
    {
      AWS_LOGSTREAM_WARN("DynamoDBClient", R"(Using the SDK default configuration for Endpoint Discovery. )"
        R"(Make sure your environment variable "AWS_ENABLE_ENDPOINT_DISCOVERY" or )"
        R"(your config file's variable "endpoint_discovery_enabled" are explicitly set to "true" or "false" (case-sensitive) or not set at all.)");
    }
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

BatchExecuteStatementOutcome DynamoDBClient::BatchExecuteStatement(const BatchExecuteStatementRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return BatchExecuteStatementOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchExecuteStatementOutcomeCallable DynamoDBClient::BatchExecuteStatementCallable(const BatchExecuteStatementRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchExecuteStatementOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchExecuteStatement(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClientBatchExecuteStatementAsyncHelper(DynamoDBClient const * const clientThis, const BatchExecuteStatementRequest& request, const BatchExecuteStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchExecuteStatement(request), context);
}

void DynamoDBClient::BatchExecuteStatementAsync(const BatchExecuteStatementRequest& request, const BatchExecuteStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DynamoDBClientBatchExecuteStatementAsyncHelper( this, request, handler, context ); } );
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
      uri = m_configScheme + "://" + endpoint;
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
        uri = m_configScheme + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("BatchGetItem", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else
      {
        AWS_LOGSTREAM_ERROR("BatchGetItem", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  return BatchGetItemOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchGetItemOutcomeCallable DynamoDBClient::BatchGetItemCallable(const BatchGetItemRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetItemOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetItem(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClientBatchGetItemAsyncHelper(DynamoDBClient const * const clientThis, const BatchGetItemRequest& request, const BatchGetItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchGetItem(request), context);
}

void DynamoDBClient::BatchGetItemAsync(const BatchGetItemRequest& request, const BatchGetItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DynamoDBClientBatchGetItemAsyncHelper( this, request, handler, context ); } );
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
      uri = m_configScheme + "://" + endpoint;
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
        uri = m_configScheme + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("BatchWriteItem", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else
      {
        AWS_LOGSTREAM_ERROR("BatchWriteItem", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  return BatchWriteItemOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchWriteItemOutcomeCallable DynamoDBClient::BatchWriteItemCallable(const BatchWriteItemRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchWriteItemOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchWriteItem(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClientBatchWriteItemAsyncHelper(DynamoDBClient const * const clientThis, const BatchWriteItemRequest& request, const BatchWriteItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchWriteItem(request), context);
}

void DynamoDBClient::BatchWriteItemAsync(const BatchWriteItemRequest& request, const BatchWriteItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DynamoDBClientBatchWriteItemAsyncHelper( this, request, handler, context ); } );
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
      uri = m_configScheme + "://" + endpoint;
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
        uri = m_configScheme + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("CreateBackup", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else
      {
        AWS_LOGSTREAM_ERROR("CreateBackup", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  return CreateBackupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateBackupOutcomeCallable DynamoDBClient::CreateBackupCallable(const CreateBackupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateBackupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateBackup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClientCreateBackupAsyncHelper(DynamoDBClient const * const clientThis, const CreateBackupRequest& request, const CreateBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateBackup(request), context);
}

void DynamoDBClient::CreateBackupAsync(const CreateBackupRequest& request, const CreateBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DynamoDBClientCreateBackupAsyncHelper( this, request, handler, context ); } );
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
      uri = m_configScheme + "://" + endpoint;
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
        uri = m_configScheme + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("CreateGlobalTable", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else
      {
        AWS_LOGSTREAM_ERROR("CreateGlobalTable", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  return CreateGlobalTableOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateGlobalTableOutcomeCallable DynamoDBClient::CreateGlobalTableCallable(const CreateGlobalTableRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateGlobalTableOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateGlobalTable(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClientCreateGlobalTableAsyncHelper(DynamoDBClient const * const clientThis, const CreateGlobalTableRequest& request, const CreateGlobalTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateGlobalTable(request), context);
}

void DynamoDBClient::CreateGlobalTableAsync(const CreateGlobalTableRequest& request, const CreateGlobalTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DynamoDBClientCreateGlobalTableAsyncHelper( this, request, handler, context ); } );
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
      uri = m_configScheme + "://" + endpoint;
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
        uri = m_configScheme + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("CreateTable", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else
      {
        AWS_LOGSTREAM_ERROR("CreateTable", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  return CreateTableOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateTableOutcomeCallable DynamoDBClient::CreateTableCallable(const CreateTableRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTableOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTable(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClientCreateTableAsyncHelper(DynamoDBClient const * const clientThis, const CreateTableRequest& request, const CreateTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateTable(request), context);
}

void DynamoDBClient::CreateTableAsync(const CreateTableRequest& request, const CreateTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DynamoDBClientCreateTableAsyncHelper( this, request, handler, context ); } );
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
      uri = m_configScheme + "://" + endpoint;
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
        uri = m_configScheme + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("DeleteBackup", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else
      {
        AWS_LOGSTREAM_ERROR("DeleteBackup", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  return DeleteBackupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteBackupOutcomeCallable DynamoDBClient::DeleteBackupCallable(const DeleteBackupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBackupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBackup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClientDeleteBackupAsyncHelper(DynamoDBClient const * const clientThis, const DeleteBackupRequest& request, const DeleteBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteBackup(request), context);
}

void DynamoDBClient::DeleteBackupAsync(const DeleteBackupRequest& request, const DeleteBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DynamoDBClientDeleteBackupAsyncHelper( this, request, handler, context ); } );
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
      uri = m_configScheme + "://" + endpoint;
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
        uri = m_configScheme + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("DeleteItem", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else
      {
        AWS_LOGSTREAM_ERROR("DeleteItem", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  return DeleteItemOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteItemOutcomeCallable DynamoDBClient::DeleteItemCallable(const DeleteItemRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteItemOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteItem(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClientDeleteItemAsyncHelper(DynamoDBClient const * const clientThis, const DeleteItemRequest& request, const DeleteItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteItem(request), context);
}

void DynamoDBClient::DeleteItemAsync(const DeleteItemRequest& request, const DeleteItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DynamoDBClientDeleteItemAsyncHelper( this, request, handler, context ); } );
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
      uri = m_configScheme + "://" + endpoint;
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
        uri = m_configScheme + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("DeleteTable", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else
      {
        AWS_LOGSTREAM_ERROR("DeleteTable", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  return DeleteTableOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteTableOutcomeCallable DynamoDBClient::DeleteTableCallable(const DeleteTableRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTableOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTable(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClientDeleteTableAsyncHelper(DynamoDBClient const * const clientThis, const DeleteTableRequest& request, const DeleteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteTable(request), context);
}

void DynamoDBClient::DeleteTableAsync(const DeleteTableRequest& request, const DeleteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DynamoDBClientDeleteTableAsyncHelper( this, request, handler, context ); } );
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
      uri = m_configScheme + "://" + endpoint;
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
        uri = m_configScheme + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("DescribeBackup", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else
      {
        AWS_LOGSTREAM_ERROR("DescribeBackup", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  return DescribeBackupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeBackupOutcomeCallable DynamoDBClient::DescribeBackupCallable(const DescribeBackupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeBackupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeBackup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClientDescribeBackupAsyncHelper(DynamoDBClient const * const clientThis, const DescribeBackupRequest& request, const DescribeBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeBackup(request), context);
}

void DynamoDBClient::DescribeBackupAsync(const DescribeBackupRequest& request, const DescribeBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DynamoDBClientDescribeBackupAsyncHelper( this, request, handler, context ); } );
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
      uri = m_configScheme + "://" + endpoint;
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
        uri = m_configScheme + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("DescribeContinuousBackups", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else
      {
        AWS_LOGSTREAM_ERROR("DescribeContinuousBackups", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  return DescribeContinuousBackupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeContinuousBackupsOutcomeCallable DynamoDBClient::DescribeContinuousBackupsCallable(const DescribeContinuousBackupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeContinuousBackupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeContinuousBackups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClientDescribeContinuousBackupsAsyncHelper(DynamoDBClient const * const clientThis, const DescribeContinuousBackupsRequest& request, const DescribeContinuousBackupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeContinuousBackups(request), context);
}

void DynamoDBClient::DescribeContinuousBackupsAsync(const DescribeContinuousBackupsRequest& request, const DescribeContinuousBackupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DynamoDBClientDescribeContinuousBackupsAsyncHelper( this, request, handler, context ); } );
}

DescribeContributorInsightsOutcome DynamoDBClient::DescribeContributorInsights(const DescribeContributorInsightsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeContributorInsightsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeContributorInsightsOutcomeCallable DynamoDBClient::DescribeContributorInsightsCallable(const DescribeContributorInsightsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeContributorInsightsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeContributorInsights(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClientDescribeContributorInsightsAsyncHelper(DynamoDBClient const * const clientThis, const DescribeContributorInsightsRequest& request, const DescribeContributorInsightsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeContributorInsights(request), context);
}

void DynamoDBClient::DescribeContributorInsightsAsync(const DescribeContributorInsightsRequest& request, const DescribeContributorInsightsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DynamoDBClientDescribeContributorInsightsAsyncHelper( this, request, handler, context ); } );
}

DescribeEndpointsOutcome DynamoDBClient::DescribeEndpoints(const DescribeEndpointsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeEndpointsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEndpointsOutcomeCallable DynamoDBClient::DescribeEndpointsCallable(const DescribeEndpointsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEndpointsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEndpoints(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClientDescribeEndpointsAsyncHelper(DynamoDBClient const * const clientThis, const DescribeEndpointsRequest& request, const DescribeEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeEndpoints(request), context);
}

void DynamoDBClient::DescribeEndpointsAsync(const DescribeEndpointsRequest& request, const DescribeEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DynamoDBClientDescribeEndpointsAsyncHelper( this, request, handler, context ); } );
}

DescribeExportOutcome DynamoDBClient::DescribeExport(const DescribeExportRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeExportOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeExportOutcomeCallable DynamoDBClient::DescribeExportCallable(const DescribeExportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeExportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeExport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClientDescribeExportAsyncHelper(DynamoDBClient const * const clientThis, const DescribeExportRequest& request, const DescribeExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeExport(request), context);
}

void DynamoDBClient::DescribeExportAsync(const DescribeExportRequest& request, const DescribeExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DynamoDBClientDescribeExportAsyncHelper( this, request, handler, context ); } );
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
      uri = m_configScheme + "://" + endpoint;
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
        uri = m_configScheme + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("DescribeGlobalTable", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else
      {
        AWS_LOGSTREAM_ERROR("DescribeGlobalTable", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  return DescribeGlobalTableOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeGlobalTableOutcomeCallable DynamoDBClient::DescribeGlobalTableCallable(const DescribeGlobalTableRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeGlobalTableOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeGlobalTable(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClientDescribeGlobalTableAsyncHelper(DynamoDBClient const * const clientThis, const DescribeGlobalTableRequest& request, const DescribeGlobalTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeGlobalTable(request), context);
}

void DynamoDBClient::DescribeGlobalTableAsync(const DescribeGlobalTableRequest& request, const DescribeGlobalTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DynamoDBClientDescribeGlobalTableAsyncHelper( this, request, handler, context ); } );
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
      uri = m_configScheme + "://" + endpoint;
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
        uri = m_configScheme + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("DescribeGlobalTableSettings", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else
      {
        AWS_LOGSTREAM_ERROR("DescribeGlobalTableSettings", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  return DescribeGlobalTableSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeGlobalTableSettingsOutcomeCallable DynamoDBClient::DescribeGlobalTableSettingsCallable(const DescribeGlobalTableSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeGlobalTableSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeGlobalTableSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClientDescribeGlobalTableSettingsAsyncHelper(DynamoDBClient const * const clientThis, const DescribeGlobalTableSettingsRequest& request, const DescribeGlobalTableSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeGlobalTableSettings(request), context);
}

void DynamoDBClient::DescribeGlobalTableSettingsAsync(const DescribeGlobalTableSettingsRequest& request, const DescribeGlobalTableSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DynamoDBClientDescribeGlobalTableSettingsAsyncHelper( this, request, handler, context ); } );
}

DescribeImportOutcome DynamoDBClient::DescribeImport(const DescribeImportRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeImportOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeImportOutcomeCallable DynamoDBClient::DescribeImportCallable(const DescribeImportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeImportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeImport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClientDescribeImportAsyncHelper(DynamoDBClient const * const clientThis, const DescribeImportRequest& request, const DescribeImportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeImport(request), context);
}

void DynamoDBClient::DescribeImportAsync(const DescribeImportRequest& request, const DescribeImportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DynamoDBClientDescribeImportAsyncHelper( this, request, handler, context ); } );
}

DescribeKinesisStreamingDestinationOutcome DynamoDBClient::DescribeKinesisStreamingDestination(const DescribeKinesisStreamingDestinationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  if (m_enableEndpointDiscovery)
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("DescribeKinesisStreamingDestination", "Making request to cached endpoint: " << endpoint);
      uri = m_configScheme + "://" + endpoint;
    }
    else
    {
      AWS_LOGSTREAM_TRACE("DescribeKinesisStreamingDestination", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
      DescribeEndpointsRequest endpointRequest;
      auto endpointOutcome = DescribeEndpoints(endpointRequest);
      if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
      {
        const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];
        m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
        uri = m_configScheme + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("DescribeKinesisStreamingDestination", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else
      {
        AWS_LOGSTREAM_ERROR("DescribeKinesisStreamingDestination", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  return DescribeKinesisStreamingDestinationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeKinesisStreamingDestinationOutcomeCallable DynamoDBClient::DescribeKinesisStreamingDestinationCallable(const DescribeKinesisStreamingDestinationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeKinesisStreamingDestinationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeKinesisStreamingDestination(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClientDescribeKinesisStreamingDestinationAsyncHelper(DynamoDBClient const * const clientThis, const DescribeKinesisStreamingDestinationRequest& request, const DescribeKinesisStreamingDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeKinesisStreamingDestination(request), context);
}

void DynamoDBClient::DescribeKinesisStreamingDestinationAsync(const DescribeKinesisStreamingDestinationRequest& request, const DescribeKinesisStreamingDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DynamoDBClientDescribeKinesisStreamingDestinationAsyncHelper( this, request, handler, context ); } );
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
      uri = m_configScheme + "://" + endpoint;
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
        uri = m_configScheme + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("DescribeLimits", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else
      {
        AWS_LOGSTREAM_ERROR("DescribeLimits", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  return DescribeLimitsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeLimitsOutcomeCallable DynamoDBClient::DescribeLimitsCallable(const DescribeLimitsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLimitsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLimits(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClientDescribeLimitsAsyncHelper(DynamoDBClient const * const clientThis, const DescribeLimitsRequest& request, const DescribeLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeLimits(request), context);
}

void DynamoDBClient::DescribeLimitsAsync(const DescribeLimitsRequest& request, const DescribeLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DynamoDBClientDescribeLimitsAsyncHelper( this, request, handler, context ); } );
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
      uri = m_configScheme + "://" + endpoint;
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
        uri = m_configScheme + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("DescribeTable", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else
      {
        AWS_LOGSTREAM_ERROR("DescribeTable", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  return DescribeTableOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeTableOutcomeCallable DynamoDBClient::DescribeTableCallable(const DescribeTableRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTableOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTable(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClientDescribeTableAsyncHelper(DynamoDBClient const * const clientThis, const DescribeTableRequest& request, const DescribeTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeTable(request), context);
}

void DynamoDBClient::DescribeTableAsync(const DescribeTableRequest& request, const DescribeTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DynamoDBClientDescribeTableAsyncHelper( this, request, handler, context ); } );
}

DescribeTableReplicaAutoScalingOutcome DynamoDBClient::DescribeTableReplicaAutoScaling(const DescribeTableReplicaAutoScalingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeTableReplicaAutoScalingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeTableReplicaAutoScalingOutcomeCallable DynamoDBClient::DescribeTableReplicaAutoScalingCallable(const DescribeTableReplicaAutoScalingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTableReplicaAutoScalingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTableReplicaAutoScaling(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClientDescribeTableReplicaAutoScalingAsyncHelper(DynamoDBClient const * const clientThis, const DescribeTableReplicaAutoScalingRequest& request, const DescribeTableReplicaAutoScalingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeTableReplicaAutoScaling(request), context);
}

void DynamoDBClient::DescribeTableReplicaAutoScalingAsync(const DescribeTableReplicaAutoScalingRequest& request, const DescribeTableReplicaAutoScalingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DynamoDBClientDescribeTableReplicaAutoScalingAsyncHelper( this, request, handler, context ); } );
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
      uri = m_configScheme + "://" + endpoint;
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
        uri = m_configScheme + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("DescribeTimeToLive", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else
      {
        AWS_LOGSTREAM_ERROR("DescribeTimeToLive", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  return DescribeTimeToLiveOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeTimeToLiveOutcomeCallable DynamoDBClient::DescribeTimeToLiveCallable(const DescribeTimeToLiveRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTimeToLiveOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTimeToLive(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClientDescribeTimeToLiveAsyncHelper(DynamoDBClient const * const clientThis, const DescribeTimeToLiveRequest& request, const DescribeTimeToLiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeTimeToLive(request), context);
}

void DynamoDBClient::DescribeTimeToLiveAsync(const DescribeTimeToLiveRequest& request, const DescribeTimeToLiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DynamoDBClientDescribeTimeToLiveAsyncHelper( this, request, handler, context ); } );
}

DisableKinesisStreamingDestinationOutcome DynamoDBClient::DisableKinesisStreamingDestination(const DisableKinesisStreamingDestinationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  if (m_enableEndpointDiscovery)
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("DisableKinesisStreamingDestination", "Making request to cached endpoint: " << endpoint);
      uri = m_configScheme + "://" + endpoint;
    }
    else
    {
      AWS_LOGSTREAM_TRACE("DisableKinesisStreamingDestination", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
      DescribeEndpointsRequest endpointRequest;
      auto endpointOutcome = DescribeEndpoints(endpointRequest);
      if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
      {
        const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];
        m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
        uri = m_configScheme + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("DisableKinesisStreamingDestination", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else
      {
        AWS_LOGSTREAM_ERROR("DisableKinesisStreamingDestination", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  return DisableKinesisStreamingDestinationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisableKinesisStreamingDestinationOutcomeCallable DynamoDBClient::DisableKinesisStreamingDestinationCallable(const DisableKinesisStreamingDestinationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisableKinesisStreamingDestinationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisableKinesisStreamingDestination(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClientDisableKinesisStreamingDestinationAsyncHelper(DynamoDBClient const * const clientThis, const DisableKinesisStreamingDestinationRequest& request, const DisableKinesisStreamingDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisableKinesisStreamingDestination(request), context);
}

void DynamoDBClient::DisableKinesisStreamingDestinationAsync(const DisableKinesisStreamingDestinationRequest& request, const DisableKinesisStreamingDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DynamoDBClientDisableKinesisStreamingDestinationAsyncHelper( this, request, handler, context ); } );
}

EnableKinesisStreamingDestinationOutcome DynamoDBClient::EnableKinesisStreamingDestination(const EnableKinesisStreamingDestinationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  if (m_enableEndpointDiscovery)
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("EnableKinesisStreamingDestination", "Making request to cached endpoint: " << endpoint);
      uri = m_configScheme + "://" + endpoint;
    }
    else
    {
      AWS_LOGSTREAM_TRACE("EnableKinesisStreamingDestination", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
      DescribeEndpointsRequest endpointRequest;
      auto endpointOutcome = DescribeEndpoints(endpointRequest);
      if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
      {
        const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];
        m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
        uri = m_configScheme + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("EnableKinesisStreamingDestination", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else
      {
        AWS_LOGSTREAM_ERROR("EnableKinesisStreamingDestination", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  return EnableKinesisStreamingDestinationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

EnableKinesisStreamingDestinationOutcomeCallable DynamoDBClient::EnableKinesisStreamingDestinationCallable(const EnableKinesisStreamingDestinationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnableKinesisStreamingDestinationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnableKinesisStreamingDestination(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClientEnableKinesisStreamingDestinationAsyncHelper(DynamoDBClient const * const clientThis, const EnableKinesisStreamingDestinationRequest& request, const EnableKinesisStreamingDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->EnableKinesisStreamingDestination(request), context);
}

void DynamoDBClient::EnableKinesisStreamingDestinationAsync(const EnableKinesisStreamingDestinationRequest& request, const EnableKinesisStreamingDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DynamoDBClientEnableKinesisStreamingDestinationAsyncHelper( this, request, handler, context ); } );
}

ExecuteStatementOutcome DynamoDBClient::ExecuteStatement(const ExecuteStatementRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ExecuteStatementOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ExecuteStatementOutcomeCallable DynamoDBClient::ExecuteStatementCallable(const ExecuteStatementRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ExecuteStatementOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ExecuteStatement(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClientExecuteStatementAsyncHelper(DynamoDBClient const * const clientThis, const ExecuteStatementRequest& request, const ExecuteStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ExecuteStatement(request), context);
}

void DynamoDBClient::ExecuteStatementAsync(const ExecuteStatementRequest& request, const ExecuteStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DynamoDBClientExecuteStatementAsyncHelper( this, request, handler, context ); } );
}

ExecuteTransactionOutcome DynamoDBClient::ExecuteTransaction(const ExecuteTransactionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ExecuteTransactionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ExecuteTransactionOutcomeCallable DynamoDBClient::ExecuteTransactionCallable(const ExecuteTransactionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ExecuteTransactionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ExecuteTransaction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClientExecuteTransactionAsyncHelper(DynamoDBClient const * const clientThis, const ExecuteTransactionRequest& request, const ExecuteTransactionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ExecuteTransaction(request), context);
}

void DynamoDBClient::ExecuteTransactionAsync(const ExecuteTransactionRequest& request, const ExecuteTransactionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DynamoDBClientExecuteTransactionAsyncHelper( this, request, handler, context ); } );
}

ExportTableToPointInTimeOutcome DynamoDBClient::ExportTableToPointInTime(const ExportTableToPointInTimeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ExportTableToPointInTimeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ExportTableToPointInTimeOutcomeCallable DynamoDBClient::ExportTableToPointInTimeCallable(const ExportTableToPointInTimeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ExportTableToPointInTimeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ExportTableToPointInTime(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClientExportTableToPointInTimeAsyncHelper(DynamoDBClient const * const clientThis, const ExportTableToPointInTimeRequest& request, const ExportTableToPointInTimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ExportTableToPointInTime(request), context);
}

void DynamoDBClient::ExportTableToPointInTimeAsync(const ExportTableToPointInTimeRequest& request, const ExportTableToPointInTimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DynamoDBClientExportTableToPointInTimeAsyncHelper( this, request, handler, context ); } );
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
      uri = m_configScheme + "://" + endpoint;
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
        uri = m_configScheme + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("GetItem", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else
      {
        AWS_LOGSTREAM_ERROR("GetItem", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  return GetItemOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetItemOutcomeCallable DynamoDBClient::GetItemCallable(const GetItemRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetItemOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetItem(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClientGetItemAsyncHelper(DynamoDBClient const * const clientThis, const GetItemRequest& request, const GetItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetItem(request), context);
}

void DynamoDBClient::GetItemAsync(const GetItemRequest& request, const GetItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DynamoDBClientGetItemAsyncHelper( this, request, handler, context ); } );
}

ImportTableOutcome DynamoDBClient::ImportTable(const ImportTableRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ImportTableOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ImportTableOutcomeCallable DynamoDBClient::ImportTableCallable(const ImportTableRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ImportTableOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ImportTable(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClientImportTableAsyncHelper(DynamoDBClient const * const clientThis, const ImportTableRequest& request, const ImportTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ImportTable(request), context);
}

void DynamoDBClient::ImportTableAsync(const ImportTableRequest& request, const ImportTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DynamoDBClientImportTableAsyncHelper( this, request, handler, context ); } );
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
      uri = m_configScheme + "://" + endpoint;
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
        uri = m_configScheme + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("ListBackups", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else
      {
        AWS_LOGSTREAM_ERROR("ListBackups", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  return ListBackupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListBackupsOutcomeCallable DynamoDBClient::ListBackupsCallable(const ListBackupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListBackupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListBackups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClientListBackupsAsyncHelper(DynamoDBClient const * const clientThis, const ListBackupsRequest& request, const ListBackupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListBackups(request), context);
}

void DynamoDBClient::ListBackupsAsync(const ListBackupsRequest& request, const ListBackupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DynamoDBClientListBackupsAsyncHelper( this, request, handler, context ); } );
}

ListContributorInsightsOutcome DynamoDBClient::ListContributorInsights(const ListContributorInsightsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListContributorInsightsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListContributorInsightsOutcomeCallable DynamoDBClient::ListContributorInsightsCallable(const ListContributorInsightsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListContributorInsightsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListContributorInsights(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClientListContributorInsightsAsyncHelper(DynamoDBClient const * const clientThis, const ListContributorInsightsRequest& request, const ListContributorInsightsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListContributorInsights(request), context);
}

void DynamoDBClient::ListContributorInsightsAsync(const ListContributorInsightsRequest& request, const ListContributorInsightsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DynamoDBClientListContributorInsightsAsyncHelper( this, request, handler, context ); } );
}

ListExportsOutcome DynamoDBClient::ListExports(const ListExportsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListExportsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListExportsOutcomeCallable DynamoDBClient::ListExportsCallable(const ListExportsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListExportsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListExports(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClientListExportsAsyncHelper(DynamoDBClient const * const clientThis, const ListExportsRequest& request, const ListExportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListExports(request), context);
}

void DynamoDBClient::ListExportsAsync(const ListExportsRequest& request, const ListExportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DynamoDBClientListExportsAsyncHelper( this, request, handler, context ); } );
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
      uri = m_configScheme + "://" + endpoint;
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
        uri = m_configScheme + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("ListGlobalTables", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else
      {
        AWS_LOGSTREAM_ERROR("ListGlobalTables", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  return ListGlobalTablesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListGlobalTablesOutcomeCallable DynamoDBClient::ListGlobalTablesCallable(const ListGlobalTablesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListGlobalTablesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListGlobalTables(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClientListGlobalTablesAsyncHelper(DynamoDBClient const * const clientThis, const ListGlobalTablesRequest& request, const ListGlobalTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListGlobalTables(request), context);
}

void DynamoDBClient::ListGlobalTablesAsync(const ListGlobalTablesRequest& request, const ListGlobalTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DynamoDBClientListGlobalTablesAsyncHelper( this, request, handler, context ); } );
}

ListImportsOutcome DynamoDBClient::ListImports(const ListImportsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListImportsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListImportsOutcomeCallable DynamoDBClient::ListImportsCallable(const ListImportsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListImportsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListImports(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClientListImportsAsyncHelper(DynamoDBClient const * const clientThis, const ListImportsRequest& request, const ListImportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListImports(request), context);
}

void DynamoDBClient::ListImportsAsync(const ListImportsRequest& request, const ListImportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DynamoDBClientListImportsAsyncHelper( this, request, handler, context ); } );
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
      uri = m_configScheme + "://" + endpoint;
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
        uri = m_configScheme + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("ListTables", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else
      {
        AWS_LOGSTREAM_ERROR("ListTables", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  return ListTablesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTablesOutcomeCallable DynamoDBClient::ListTablesCallable(const ListTablesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTablesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTables(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClientListTablesAsyncHelper(DynamoDBClient const * const clientThis, const ListTablesRequest& request, const ListTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTables(request), context);
}

void DynamoDBClient::ListTablesAsync(const ListTablesRequest& request, const ListTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DynamoDBClientListTablesAsyncHelper( this, request, handler, context ); } );
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
      uri = m_configScheme + "://" + endpoint;
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
        uri = m_configScheme + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("ListTagsOfResource", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else
      {
        AWS_LOGSTREAM_ERROR("ListTagsOfResource", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  return ListTagsOfResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsOfResourceOutcomeCallable DynamoDBClient::ListTagsOfResourceCallable(const ListTagsOfResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsOfResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsOfResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClientListTagsOfResourceAsyncHelper(DynamoDBClient const * const clientThis, const ListTagsOfResourceRequest& request, const ListTagsOfResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsOfResource(request), context);
}

void DynamoDBClient::ListTagsOfResourceAsync(const ListTagsOfResourceRequest& request, const ListTagsOfResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DynamoDBClientListTagsOfResourceAsyncHelper( this, request, handler, context ); } );
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
      uri = m_configScheme + "://" + endpoint;
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
        uri = m_configScheme + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("PutItem", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else
      {
        AWS_LOGSTREAM_ERROR("PutItem", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  return PutItemOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutItemOutcomeCallable DynamoDBClient::PutItemCallable(const PutItemRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutItemOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutItem(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClientPutItemAsyncHelper(DynamoDBClient const * const clientThis, const PutItemRequest& request, const PutItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutItem(request), context);
}

void DynamoDBClient::PutItemAsync(const PutItemRequest& request, const PutItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DynamoDBClientPutItemAsyncHelper( this, request, handler, context ); } );
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
      uri = m_configScheme + "://" + endpoint;
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
        uri = m_configScheme + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("Query", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else
      {
        AWS_LOGSTREAM_ERROR("Query", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  return QueryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

QueryOutcomeCallable DynamoDBClient::QueryCallable(const QueryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< QueryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->Query(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClientQueryAsyncHelper(DynamoDBClient const * const clientThis, const QueryRequest& request, const QueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->Query(request), context);
}

void DynamoDBClient::QueryAsync(const QueryRequest& request, const QueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DynamoDBClientQueryAsyncHelper( this, request, handler, context ); } );
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
      uri = m_configScheme + "://" + endpoint;
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
        uri = m_configScheme + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("RestoreTableFromBackup", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else
      {
        AWS_LOGSTREAM_ERROR("RestoreTableFromBackup", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  return RestoreTableFromBackupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RestoreTableFromBackupOutcomeCallable DynamoDBClient::RestoreTableFromBackupCallable(const RestoreTableFromBackupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RestoreTableFromBackupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RestoreTableFromBackup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClientRestoreTableFromBackupAsyncHelper(DynamoDBClient const * const clientThis, const RestoreTableFromBackupRequest& request, const RestoreTableFromBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RestoreTableFromBackup(request), context);
}

void DynamoDBClient::RestoreTableFromBackupAsync(const RestoreTableFromBackupRequest& request, const RestoreTableFromBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DynamoDBClientRestoreTableFromBackupAsyncHelper( this, request, handler, context ); } );
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
      uri = m_configScheme + "://" + endpoint;
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
        uri = m_configScheme + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("RestoreTableToPointInTime", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else
      {
        AWS_LOGSTREAM_ERROR("RestoreTableToPointInTime", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  return RestoreTableToPointInTimeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RestoreTableToPointInTimeOutcomeCallable DynamoDBClient::RestoreTableToPointInTimeCallable(const RestoreTableToPointInTimeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RestoreTableToPointInTimeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RestoreTableToPointInTime(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClientRestoreTableToPointInTimeAsyncHelper(DynamoDBClient const * const clientThis, const RestoreTableToPointInTimeRequest& request, const RestoreTableToPointInTimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RestoreTableToPointInTime(request), context);
}

void DynamoDBClient::RestoreTableToPointInTimeAsync(const RestoreTableToPointInTimeRequest& request, const RestoreTableToPointInTimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DynamoDBClientRestoreTableToPointInTimeAsyncHelper( this, request, handler, context ); } );
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
      uri = m_configScheme + "://" + endpoint;
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
        uri = m_configScheme + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("Scan", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else
      {
        AWS_LOGSTREAM_ERROR("Scan", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  return ScanOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ScanOutcomeCallable DynamoDBClient::ScanCallable(const ScanRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ScanOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->Scan(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClientScanAsyncHelper(DynamoDBClient const * const clientThis, const ScanRequest& request, const ScanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->Scan(request), context);
}

void DynamoDBClient::ScanAsync(const ScanRequest& request, const ScanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DynamoDBClientScanAsyncHelper( this, request, handler, context ); } );
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
      uri = m_configScheme + "://" + endpoint;
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
        uri = m_configScheme + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("TagResource", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else
      {
        AWS_LOGSTREAM_ERROR("TagResource", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable DynamoDBClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClientTagResourceAsyncHelper(DynamoDBClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void DynamoDBClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DynamoDBClientTagResourceAsyncHelper( this, request, handler, context ); } );
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
      uri = m_configScheme + "://" + endpoint;
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
        uri = m_configScheme + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("TransactGetItems", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else
      {
        AWS_LOGSTREAM_ERROR("TransactGetItems", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  return TransactGetItemsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TransactGetItemsOutcomeCallable DynamoDBClient::TransactGetItemsCallable(const TransactGetItemsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TransactGetItemsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TransactGetItems(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClientTransactGetItemsAsyncHelper(DynamoDBClient const * const clientThis, const TransactGetItemsRequest& request, const TransactGetItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TransactGetItems(request), context);
}

void DynamoDBClient::TransactGetItemsAsync(const TransactGetItemsRequest& request, const TransactGetItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DynamoDBClientTransactGetItemsAsyncHelper( this, request, handler, context ); } );
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
      uri = m_configScheme + "://" + endpoint;
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
        uri = m_configScheme + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("TransactWriteItems", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else
      {
        AWS_LOGSTREAM_ERROR("TransactWriteItems", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  return TransactWriteItemsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TransactWriteItemsOutcomeCallable DynamoDBClient::TransactWriteItemsCallable(const TransactWriteItemsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TransactWriteItemsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TransactWriteItems(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClientTransactWriteItemsAsyncHelper(DynamoDBClient const * const clientThis, const TransactWriteItemsRequest& request, const TransactWriteItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TransactWriteItems(request), context);
}

void DynamoDBClient::TransactWriteItemsAsync(const TransactWriteItemsRequest& request, const TransactWriteItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DynamoDBClientTransactWriteItemsAsyncHelper( this, request, handler, context ); } );
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
      uri = m_configScheme + "://" + endpoint;
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
        uri = m_configScheme + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("UntagResource", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else
      {
        AWS_LOGSTREAM_ERROR("UntagResource", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable DynamoDBClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClientUntagResourceAsyncHelper(DynamoDBClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void DynamoDBClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DynamoDBClientUntagResourceAsyncHelper( this, request, handler, context ); } );
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
      uri = m_configScheme + "://" + endpoint;
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
        uri = m_configScheme + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("UpdateContinuousBackups", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else
      {
        AWS_LOGSTREAM_ERROR("UpdateContinuousBackups", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  return UpdateContinuousBackupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateContinuousBackupsOutcomeCallable DynamoDBClient::UpdateContinuousBackupsCallable(const UpdateContinuousBackupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateContinuousBackupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateContinuousBackups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClientUpdateContinuousBackupsAsyncHelper(DynamoDBClient const * const clientThis, const UpdateContinuousBackupsRequest& request, const UpdateContinuousBackupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateContinuousBackups(request), context);
}

void DynamoDBClient::UpdateContinuousBackupsAsync(const UpdateContinuousBackupsRequest& request, const UpdateContinuousBackupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DynamoDBClientUpdateContinuousBackupsAsyncHelper( this, request, handler, context ); } );
}

UpdateContributorInsightsOutcome DynamoDBClient::UpdateContributorInsights(const UpdateContributorInsightsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateContributorInsightsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateContributorInsightsOutcomeCallable DynamoDBClient::UpdateContributorInsightsCallable(const UpdateContributorInsightsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateContributorInsightsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateContributorInsights(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClientUpdateContributorInsightsAsyncHelper(DynamoDBClient const * const clientThis, const UpdateContributorInsightsRequest& request, const UpdateContributorInsightsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateContributorInsights(request), context);
}

void DynamoDBClient::UpdateContributorInsightsAsync(const UpdateContributorInsightsRequest& request, const UpdateContributorInsightsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DynamoDBClientUpdateContributorInsightsAsyncHelper( this, request, handler, context ); } );
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
      uri = m_configScheme + "://" + endpoint;
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
        uri = m_configScheme + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("UpdateGlobalTable", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else
      {
        AWS_LOGSTREAM_ERROR("UpdateGlobalTable", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  return UpdateGlobalTableOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateGlobalTableOutcomeCallable DynamoDBClient::UpdateGlobalTableCallable(const UpdateGlobalTableRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateGlobalTableOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateGlobalTable(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClientUpdateGlobalTableAsyncHelper(DynamoDBClient const * const clientThis, const UpdateGlobalTableRequest& request, const UpdateGlobalTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateGlobalTable(request), context);
}

void DynamoDBClient::UpdateGlobalTableAsync(const UpdateGlobalTableRequest& request, const UpdateGlobalTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DynamoDBClientUpdateGlobalTableAsyncHelper( this, request, handler, context ); } );
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
      uri = m_configScheme + "://" + endpoint;
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
        uri = m_configScheme + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("UpdateGlobalTableSettings", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else
      {
        AWS_LOGSTREAM_ERROR("UpdateGlobalTableSettings", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  return UpdateGlobalTableSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateGlobalTableSettingsOutcomeCallable DynamoDBClient::UpdateGlobalTableSettingsCallable(const UpdateGlobalTableSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateGlobalTableSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateGlobalTableSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClientUpdateGlobalTableSettingsAsyncHelper(DynamoDBClient const * const clientThis, const UpdateGlobalTableSettingsRequest& request, const UpdateGlobalTableSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateGlobalTableSettings(request), context);
}

void DynamoDBClient::UpdateGlobalTableSettingsAsync(const UpdateGlobalTableSettingsRequest& request, const UpdateGlobalTableSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DynamoDBClientUpdateGlobalTableSettingsAsyncHelper( this, request, handler, context ); } );
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
      uri = m_configScheme + "://" + endpoint;
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
        uri = m_configScheme + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("UpdateItem", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else
      {
        AWS_LOGSTREAM_ERROR("UpdateItem", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  return UpdateItemOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateItemOutcomeCallable DynamoDBClient::UpdateItemCallable(const UpdateItemRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateItemOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateItem(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClientUpdateItemAsyncHelper(DynamoDBClient const * const clientThis, const UpdateItemRequest& request, const UpdateItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateItem(request), context);
}

void DynamoDBClient::UpdateItemAsync(const UpdateItemRequest& request, const UpdateItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DynamoDBClientUpdateItemAsyncHelper( this, request, handler, context ); } );
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
      uri = m_configScheme + "://" + endpoint;
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
        uri = m_configScheme + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("UpdateTable", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else
      {
        AWS_LOGSTREAM_ERROR("UpdateTable", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  return UpdateTableOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateTableOutcomeCallable DynamoDBClient::UpdateTableCallable(const UpdateTableRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateTableOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateTable(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClientUpdateTableAsyncHelper(DynamoDBClient const * const clientThis, const UpdateTableRequest& request, const UpdateTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateTable(request), context);
}

void DynamoDBClient::UpdateTableAsync(const UpdateTableRequest& request, const UpdateTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DynamoDBClientUpdateTableAsyncHelper( this, request, handler, context ); } );
}

UpdateTableReplicaAutoScalingOutcome DynamoDBClient::UpdateTableReplicaAutoScaling(const UpdateTableReplicaAutoScalingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateTableReplicaAutoScalingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateTableReplicaAutoScalingOutcomeCallable DynamoDBClient::UpdateTableReplicaAutoScalingCallable(const UpdateTableReplicaAutoScalingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateTableReplicaAutoScalingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateTableReplicaAutoScaling(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClientUpdateTableReplicaAutoScalingAsyncHelper(DynamoDBClient const * const clientThis, const UpdateTableReplicaAutoScalingRequest& request, const UpdateTableReplicaAutoScalingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateTableReplicaAutoScaling(request), context);
}

void DynamoDBClient::UpdateTableReplicaAutoScalingAsync(const UpdateTableReplicaAutoScalingRequest& request, const UpdateTableReplicaAutoScalingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DynamoDBClientUpdateTableReplicaAutoScalingAsyncHelper( this, request, handler, context ); } );
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
      uri = m_configScheme + "://" + endpoint;
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
        uri = m_configScheme + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("UpdateTimeToLive", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else
      {
        AWS_LOGSTREAM_ERROR("UpdateTimeToLive", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  return UpdateTimeToLiveOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateTimeToLiveOutcomeCallable DynamoDBClient::UpdateTimeToLiveCallable(const UpdateTimeToLiveRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateTimeToLiveOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateTimeToLive(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DynamoDBClientUpdateTimeToLiveAsyncHelper(DynamoDBClient const * const clientThis, const UpdateTimeToLiveRequest& request, const UpdateTimeToLiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateTimeToLive(request), context);
}

void DynamoDBClient::UpdateTimeToLiveAsync(const UpdateTimeToLiveRequest& request, const UpdateTimeToLiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DynamoDBClientUpdateTimeToLiveAsyncHelper( this, request, handler, context ); } );
}

