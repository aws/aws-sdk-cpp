/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/platform/Environment.h>

#include <aws/dynamodb/DynamoDBClient.h>
#include <aws/dynamodb/DynamoDBErrorMarshaller.h>
#include <aws/dynamodb/DynamoDBEndpointProvider.h>
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
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* DynamoDBClient::SERVICE_NAME = "dynamodb";
const char* DynamoDBClient::ALLOCATION_TAG = "DynamoDBClient";

DynamoDBClient::DynamoDBClient(const DynamoDB::DynamoDBClientConfiguration& clientConfiguration,
                               std::shared_ptr<DynamoDBEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<DynamoDBErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

DynamoDBClient::DynamoDBClient(const AWSCredentials& credentials,
                               std::shared_ptr<DynamoDBEndpointProviderBase> endpointProvider,
                               const DynamoDB::DynamoDBClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<DynamoDBErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

DynamoDBClient::DynamoDBClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<DynamoDBEndpointProviderBase> endpointProvider,
                               const DynamoDB::DynamoDBClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<DynamoDBErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  DynamoDBClient::DynamoDBClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<DynamoDBErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<DynamoDBEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

DynamoDBClient::DynamoDBClient(const AWSCredentials& credentials,
                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<DynamoDBErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<DynamoDBEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

DynamoDBClient::DynamoDBClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<DynamoDBErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<DynamoDBEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
DynamoDBClient::~DynamoDBClient()
{
}

std::shared_ptr<DynamoDBEndpointProviderBase>& DynamoDBClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void DynamoDBClient::init(const DynamoDB::DynamoDBClientConfiguration& config)
{
  AWSClient::SetServiceClientName("DynamoDB");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void DynamoDBClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

BatchExecuteStatementOutcome DynamoDBClient::BatchExecuteStatement(const BatchExecuteStatementRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchExecuteStatement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchExecuteStatement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return BatchExecuteStatementOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchExecuteStatementOutcomeCallable DynamoDBClient::BatchExecuteStatementCallable(const BatchExecuteStatementRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(BatchExecuteStatement, request, m_executor.get());
}

void DynamoDBClient::BatchExecuteStatementAsync(const BatchExecuteStatementRequest& request, const BatchExecuteStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(BatchExecuteStatement, request, handler, context, m_executor.get());
}

BatchGetItemOutcome DynamoDBClient::BatchGetItem(const BatchGetItemRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchGetItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
  if (m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value())
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("BatchGetItem", "Making request to cached endpoint: " << endpoint);
      endpointResolutionOutcome.GetResult().SetURI(endpoint);
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
        endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("BatchGetItem", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
        endpointResolutionOutcome.GetResult().SetURI(endpoint);
      }
      else
      {
        AWS_LOGSTREAM_ERROR("BatchGetItem", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  if (endpointResolutionOutcome.GetResult().GetURL().empty()) {
    endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  }
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchGetItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return BatchGetItemOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchGetItemOutcomeCallable DynamoDBClient::BatchGetItemCallable(const BatchGetItemRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(BatchGetItem, request, m_executor.get());
}

void DynamoDBClient::BatchGetItemAsync(const BatchGetItemRequest& request, const BatchGetItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(BatchGetItem, request, handler, context, m_executor.get());
}

BatchWriteItemOutcome DynamoDBClient::BatchWriteItem(const BatchWriteItemRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchWriteItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
  if (m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value())
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("BatchWriteItem", "Making request to cached endpoint: " << endpoint);
      endpointResolutionOutcome.GetResult().SetURI(endpoint);
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
        endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("BatchWriteItem", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
        endpointResolutionOutcome.GetResult().SetURI(endpoint);
      }
      else
      {
        AWS_LOGSTREAM_ERROR("BatchWriteItem", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  if (endpointResolutionOutcome.GetResult().GetURL().empty()) {
    endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  }
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchWriteItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return BatchWriteItemOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchWriteItemOutcomeCallable DynamoDBClient::BatchWriteItemCallable(const BatchWriteItemRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(BatchWriteItem, request, m_executor.get());
}

void DynamoDBClient::BatchWriteItemAsync(const BatchWriteItemRequest& request, const BatchWriteItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(BatchWriteItem, request, handler, context, m_executor.get());
}

CreateBackupOutcome DynamoDBClient::CreateBackup(const CreateBackupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateBackup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
  if (m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value())
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("CreateBackup", "Making request to cached endpoint: " << endpoint);
      endpointResolutionOutcome.GetResult().SetURI(endpoint);
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
        endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("CreateBackup", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
        endpointResolutionOutcome.GetResult().SetURI(endpoint);
      }
      else
      {
        AWS_LOGSTREAM_ERROR("CreateBackup", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  if (endpointResolutionOutcome.GetResult().GetURL().empty()) {
    endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  }
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateBackup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateBackupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateBackupOutcomeCallable DynamoDBClient::CreateBackupCallable(const CreateBackupRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(CreateBackup, request, m_executor.get());
}

void DynamoDBClient::CreateBackupAsync(const CreateBackupRequest& request, const CreateBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(CreateBackup, request, handler, context, m_executor.get());
}

CreateGlobalTableOutcome DynamoDBClient::CreateGlobalTable(const CreateGlobalTableRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateGlobalTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
  if (m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value())
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("CreateGlobalTable", "Making request to cached endpoint: " << endpoint);
      endpointResolutionOutcome.GetResult().SetURI(endpoint);
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
        endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("CreateGlobalTable", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
        endpointResolutionOutcome.GetResult().SetURI(endpoint);
      }
      else
      {
        AWS_LOGSTREAM_ERROR("CreateGlobalTable", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  if (endpointResolutionOutcome.GetResult().GetURL().empty()) {
    endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  }
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateGlobalTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateGlobalTableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateGlobalTableOutcomeCallable DynamoDBClient::CreateGlobalTableCallable(const CreateGlobalTableRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(CreateGlobalTable, request, m_executor.get());
}

void DynamoDBClient::CreateGlobalTableAsync(const CreateGlobalTableRequest& request, const CreateGlobalTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(CreateGlobalTable, request, handler, context, m_executor.get());
}

CreateTableOutcome DynamoDBClient::CreateTable(const CreateTableRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
  if (m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value())
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("CreateTable", "Making request to cached endpoint: " << endpoint);
      endpointResolutionOutcome.GetResult().SetURI(endpoint);
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
        endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("CreateTable", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
        endpointResolutionOutcome.GetResult().SetURI(endpoint);
      }
      else
      {
        AWS_LOGSTREAM_ERROR("CreateTable", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  if (endpointResolutionOutcome.GetResult().GetURL().empty()) {
    endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  }
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateTableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateTableOutcomeCallable DynamoDBClient::CreateTableCallable(const CreateTableRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(CreateTable, request, m_executor.get());
}

void DynamoDBClient::CreateTableAsync(const CreateTableRequest& request, const CreateTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(CreateTable, request, handler, context, m_executor.get());
}

DeleteBackupOutcome DynamoDBClient::DeleteBackup(const DeleteBackupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBackup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
  if (m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value())
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("DeleteBackup", "Making request to cached endpoint: " << endpoint);
      endpointResolutionOutcome.GetResult().SetURI(endpoint);
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
        endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("DeleteBackup", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
        endpointResolutionOutcome.GetResult().SetURI(endpoint);
      }
      else
      {
        AWS_LOGSTREAM_ERROR("DeleteBackup", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  if (endpointResolutionOutcome.GetResult().GetURL().empty()) {
    endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  }
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBackup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteBackupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteBackupOutcomeCallable DynamoDBClient::DeleteBackupCallable(const DeleteBackupRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DeleteBackup, request, m_executor.get());
}

void DynamoDBClient::DeleteBackupAsync(const DeleteBackupRequest& request, const DeleteBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DeleteBackup, request, handler, context, m_executor.get());
}

DeleteItemOutcome DynamoDBClient::DeleteItem(const DeleteItemRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
  if (m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value())
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("DeleteItem", "Making request to cached endpoint: " << endpoint);
      endpointResolutionOutcome.GetResult().SetURI(endpoint);
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
        endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("DeleteItem", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
        endpointResolutionOutcome.GetResult().SetURI(endpoint);
      }
      else
      {
        AWS_LOGSTREAM_ERROR("DeleteItem", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  if (endpointResolutionOutcome.GetResult().GetURL().empty()) {
    endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  }
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteItemOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteItemOutcomeCallable DynamoDBClient::DeleteItemCallable(const DeleteItemRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DeleteItem, request, m_executor.get());
}

void DynamoDBClient::DeleteItemAsync(const DeleteItemRequest& request, const DeleteItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DeleteItem, request, handler, context, m_executor.get());
}

DeleteTableOutcome DynamoDBClient::DeleteTable(const DeleteTableRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
  if (m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value())
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("DeleteTable", "Making request to cached endpoint: " << endpoint);
      endpointResolutionOutcome.GetResult().SetURI(endpoint);
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
        endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("DeleteTable", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
        endpointResolutionOutcome.GetResult().SetURI(endpoint);
      }
      else
      {
        AWS_LOGSTREAM_ERROR("DeleteTable", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  if (endpointResolutionOutcome.GetResult().GetURL().empty()) {
    endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  }
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteTableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteTableOutcomeCallable DynamoDBClient::DeleteTableCallable(const DeleteTableRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DeleteTable, request, m_executor.get());
}

void DynamoDBClient::DeleteTableAsync(const DeleteTableRequest& request, const DeleteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DeleteTable, request, handler, context, m_executor.get());
}

DescribeBackupOutcome DynamoDBClient::DescribeBackup(const DescribeBackupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeBackup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
  if (m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value())
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("DescribeBackup", "Making request to cached endpoint: " << endpoint);
      endpointResolutionOutcome.GetResult().SetURI(endpoint);
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
        endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("DescribeBackup", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
        endpointResolutionOutcome.GetResult().SetURI(endpoint);
      }
      else
      {
        AWS_LOGSTREAM_ERROR("DescribeBackup", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  if (endpointResolutionOutcome.GetResult().GetURL().empty()) {
    endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  }
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeBackup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeBackupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeBackupOutcomeCallable DynamoDBClient::DescribeBackupCallable(const DescribeBackupRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DescribeBackup, request, m_executor.get());
}

void DynamoDBClient::DescribeBackupAsync(const DescribeBackupRequest& request, const DescribeBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DescribeBackup, request, handler, context, m_executor.get());
}

DescribeContinuousBackupsOutcome DynamoDBClient::DescribeContinuousBackups(const DescribeContinuousBackupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeContinuousBackups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
  if (m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value())
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("DescribeContinuousBackups", "Making request to cached endpoint: " << endpoint);
      endpointResolutionOutcome.GetResult().SetURI(endpoint);
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
        endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("DescribeContinuousBackups", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
        endpointResolutionOutcome.GetResult().SetURI(endpoint);
      }
      else
      {
        AWS_LOGSTREAM_ERROR("DescribeContinuousBackups", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  if (endpointResolutionOutcome.GetResult().GetURL().empty()) {
    endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  }
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeContinuousBackups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeContinuousBackupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeContinuousBackupsOutcomeCallable DynamoDBClient::DescribeContinuousBackupsCallable(const DescribeContinuousBackupsRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DescribeContinuousBackups, request, m_executor.get());
}

void DynamoDBClient::DescribeContinuousBackupsAsync(const DescribeContinuousBackupsRequest& request, const DescribeContinuousBackupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DescribeContinuousBackups, request, handler, context, m_executor.get());
}

DescribeContributorInsightsOutcome DynamoDBClient::DescribeContributorInsights(const DescribeContributorInsightsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeContributorInsights, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeContributorInsights, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeContributorInsightsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeContributorInsightsOutcomeCallable DynamoDBClient::DescribeContributorInsightsCallable(const DescribeContributorInsightsRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DescribeContributorInsights, request, m_executor.get());
}

void DynamoDBClient::DescribeContributorInsightsAsync(const DescribeContributorInsightsRequest& request, const DescribeContributorInsightsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DescribeContributorInsights, request, handler, context, m_executor.get());
}

DescribeEndpointsOutcome DynamoDBClient::DescribeEndpoints(const DescribeEndpointsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeEndpointsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEndpointsOutcomeCallable DynamoDBClient::DescribeEndpointsCallable(const DescribeEndpointsRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DescribeEndpoints, request, m_executor.get());
}

void DynamoDBClient::DescribeEndpointsAsync(const DescribeEndpointsRequest& request, const DescribeEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DescribeEndpoints, request, handler, context, m_executor.get());
}

DescribeExportOutcome DynamoDBClient::DescribeExport(const DescribeExportRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeExport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeExport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeExportOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeExportOutcomeCallable DynamoDBClient::DescribeExportCallable(const DescribeExportRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DescribeExport, request, m_executor.get());
}

void DynamoDBClient::DescribeExportAsync(const DescribeExportRequest& request, const DescribeExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DescribeExport, request, handler, context, m_executor.get());
}

DescribeGlobalTableOutcome DynamoDBClient::DescribeGlobalTable(const DescribeGlobalTableRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeGlobalTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
  if (m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value())
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("DescribeGlobalTable", "Making request to cached endpoint: " << endpoint);
      endpointResolutionOutcome.GetResult().SetURI(endpoint);
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
        endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("DescribeGlobalTable", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
        endpointResolutionOutcome.GetResult().SetURI(endpoint);
      }
      else
      {
        AWS_LOGSTREAM_ERROR("DescribeGlobalTable", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  if (endpointResolutionOutcome.GetResult().GetURL().empty()) {
    endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  }
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeGlobalTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeGlobalTableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeGlobalTableOutcomeCallable DynamoDBClient::DescribeGlobalTableCallable(const DescribeGlobalTableRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DescribeGlobalTable, request, m_executor.get());
}

void DynamoDBClient::DescribeGlobalTableAsync(const DescribeGlobalTableRequest& request, const DescribeGlobalTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DescribeGlobalTable, request, handler, context, m_executor.get());
}

DescribeGlobalTableSettingsOutcome DynamoDBClient::DescribeGlobalTableSettings(const DescribeGlobalTableSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeGlobalTableSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
  if (m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value())
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("DescribeGlobalTableSettings", "Making request to cached endpoint: " << endpoint);
      endpointResolutionOutcome.GetResult().SetURI(endpoint);
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
        endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("DescribeGlobalTableSettings", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
        endpointResolutionOutcome.GetResult().SetURI(endpoint);
      }
      else
      {
        AWS_LOGSTREAM_ERROR("DescribeGlobalTableSettings", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  if (endpointResolutionOutcome.GetResult().GetURL().empty()) {
    endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  }
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeGlobalTableSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeGlobalTableSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeGlobalTableSettingsOutcomeCallable DynamoDBClient::DescribeGlobalTableSettingsCallable(const DescribeGlobalTableSettingsRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DescribeGlobalTableSettings, request, m_executor.get());
}

void DynamoDBClient::DescribeGlobalTableSettingsAsync(const DescribeGlobalTableSettingsRequest& request, const DescribeGlobalTableSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DescribeGlobalTableSettings, request, handler, context, m_executor.get());
}

DescribeImportOutcome DynamoDBClient::DescribeImport(const DescribeImportRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeImport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeImport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeImportOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeImportOutcomeCallable DynamoDBClient::DescribeImportCallable(const DescribeImportRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DescribeImport, request, m_executor.get());
}

void DynamoDBClient::DescribeImportAsync(const DescribeImportRequest& request, const DescribeImportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DescribeImport, request, handler, context, m_executor.get());
}

DescribeKinesisStreamingDestinationOutcome DynamoDBClient::DescribeKinesisStreamingDestination(const DescribeKinesisStreamingDestinationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeKinesisStreamingDestination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
  if (m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value())
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("DescribeKinesisStreamingDestination", "Making request to cached endpoint: " << endpoint);
      endpointResolutionOutcome.GetResult().SetURI(endpoint);
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
        endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("DescribeKinesisStreamingDestination", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
        endpointResolutionOutcome.GetResult().SetURI(endpoint);
      }
      else
      {
        AWS_LOGSTREAM_ERROR("DescribeKinesisStreamingDestination", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  if (endpointResolutionOutcome.GetResult().GetURL().empty()) {
    endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  }
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeKinesisStreamingDestination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeKinesisStreamingDestinationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeKinesisStreamingDestinationOutcomeCallable DynamoDBClient::DescribeKinesisStreamingDestinationCallable(const DescribeKinesisStreamingDestinationRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DescribeKinesisStreamingDestination, request, m_executor.get());
}

void DynamoDBClient::DescribeKinesisStreamingDestinationAsync(const DescribeKinesisStreamingDestinationRequest& request, const DescribeKinesisStreamingDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DescribeKinesisStreamingDestination, request, handler, context, m_executor.get());
}

DescribeLimitsOutcome DynamoDBClient::DescribeLimits(const DescribeLimitsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeLimits, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
  if (m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value())
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("DescribeLimits", "Making request to cached endpoint: " << endpoint);
      endpointResolutionOutcome.GetResult().SetURI(endpoint);
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
        endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("DescribeLimits", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
        endpointResolutionOutcome.GetResult().SetURI(endpoint);
      }
      else
      {
        AWS_LOGSTREAM_ERROR("DescribeLimits", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  if (endpointResolutionOutcome.GetResult().GetURL().empty()) {
    endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  }
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeLimits, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeLimitsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeLimitsOutcomeCallable DynamoDBClient::DescribeLimitsCallable(const DescribeLimitsRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DescribeLimits, request, m_executor.get());
}

void DynamoDBClient::DescribeLimitsAsync(const DescribeLimitsRequest& request, const DescribeLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DescribeLimits, request, handler, context, m_executor.get());
}

DescribeTableOutcome DynamoDBClient::DescribeTable(const DescribeTableRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
  if (m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value())
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("DescribeTable", "Making request to cached endpoint: " << endpoint);
      endpointResolutionOutcome.GetResult().SetURI(endpoint);
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
        endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("DescribeTable", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
        endpointResolutionOutcome.GetResult().SetURI(endpoint);
      }
      else
      {
        AWS_LOGSTREAM_ERROR("DescribeTable", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  if (endpointResolutionOutcome.GetResult().GetURL().empty()) {
    endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  }
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeTableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeTableOutcomeCallable DynamoDBClient::DescribeTableCallable(const DescribeTableRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DescribeTable, request, m_executor.get());
}

void DynamoDBClient::DescribeTableAsync(const DescribeTableRequest& request, const DescribeTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DescribeTable, request, handler, context, m_executor.get());
}

DescribeTableReplicaAutoScalingOutcome DynamoDBClient::DescribeTableReplicaAutoScaling(const DescribeTableReplicaAutoScalingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTableReplicaAutoScaling, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTableReplicaAutoScaling, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeTableReplicaAutoScalingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeTableReplicaAutoScalingOutcomeCallable DynamoDBClient::DescribeTableReplicaAutoScalingCallable(const DescribeTableReplicaAutoScalingRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DescribeTableReplicaAutoScaling, request, m_executor.get());
}

void DynamoDBClient::DescribeTableReplicaAutoScalingAsync(const DescribeTableReplicaAutoScalingRequest& request, const DescribeTableReplicaAutoScalingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DescribeTableReplicaAutoScaling, request, handler, context, m_executor.get());
}

DescribeTimeToLiveOutcome DynamoDBClient::DescribeTimeToLive(const DescribeTimeToLiveRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTimeToLive, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
  if (m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value())
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("DescribeTimeToLive", "Making request to cached endpoint: " << endpoint);
      endpointResolutionOutcome.GetResult().SetURI(endpoint);
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
        endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("DescribeTimeToLive", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
        endpointResolutionOutcome.GetResult().SetURI(endpoint);
      }
      else
      {
        AWS_LOGSTREAM_ERROR("DescribeTimeToLive", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  if (endpointResolutionOutcome.GetResult().GetURL().empty()) {
    endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  }
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTimeToLive, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeTimeToLiveOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeTimeToLiveOutcomeCallable DynamoDBClient::DescribeTimeToLiveCallable(const DescribeTimeToLiveRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DescribeTimeToLive, request, m_executor.get());
}

void DynamoDBClient::DescribeTimeToLiveAsync(const DescribeTimeToLiveRequest& request, const DescribeTimeToLiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DescribeTimeToLive, request, handler, context, m_executor.get());
}

DisableKinesisStreamingDestinationOutcome DynamoDBClient::DisableKinesisStreamingDestination(const DisableKinesisStreamingDestinationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisableKinesisStreamingDestination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
  if (m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value())
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("DisableKinesisStreamingDestination", "Making request to cached endpoint: " << endpoint);
      endpointResolutionOutcome.GetResult().SetURI(endpoint);
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
        endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("DisableKinesisStreamingDestination", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
        endpointResolutionOutcome.GetResult().SetURI(endpoint);
      }
      else
      {
        AWS_LOGSTREAM_ERROR("DisableKinesisStreamingDestination", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  if (endpointResolutionOutcome.GetResult().GetURL().empty()) {
    endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  }
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisableKinesisStreamingDestination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisableKinesisStreamingDestinationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisableKinesisStreamingDestinationOutcomeCallable DynamoDBClient::DisableKinesisStreamingDestinationCallable(const DisableKinesisStreamingDestinationRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DisableKinesisStreamingDestination, request, m_executor.get());
}

void DynamoDBClient::DisableKinesisStreamingDestinationAsync(const DisableKinesisStreamingDestinationRequest& request, const DisableKinesisStreamingDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DisableKinesisStreamingDestination, request, handler, context, m_executor.get());
}

EnableKinesisStreamingDestinationOutcome DynamoDBClient::EnableKinesisStreamingDestination(const EnableKinesisStreamingDestinationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, EnableKinesisStreamingDestination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
  if (m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value())
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("EnableKinesisStreamingDestination", "Making request to cached endpoint: " << endpoint);
      endpointResolutionOutcome.GetResult().SetURI(endpoint);
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
        endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("EnableKinesisStreamingDestination", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
        endpointResolutionOutcome.GetResult().SetURI(endpoint);
      }
      else
      {
        AWS_LOGSTREAM_ERROR("EnableKinesisStreamingDestination", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  if (endpointResolutionOutcome.GetResult().GetURL().empty()) {
    endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  }
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, EnableKinesisStreamingDestination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return EnableKinesisStreamingDestinationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

EnableKinesisStreamingDestinationOutcomeCallable DynamoDBClient::EnableKinesisStreamingDestinationCallable(const EnableKinesisStreamingDestinationRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(EnableKinesisStreamingDestination, request, m_executor.get());
}

void DynamoDBClient::EnableKinesisStreamingDestinationAsync(const EnableKinesisStreamingDestinationRequest& request, const EnableKinesisStreamingDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(EnableKinesisStreamingDestination, request, handler, context, m_executor.get());
}

ExecuteStatementOutcome DynamoDBClient::ExecuteStatement(const ExecuteStatementRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ExecuteStatement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ExecuteStatement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ExecuteStatementOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ExecuteStatementOutcomeCallable DynamoDBClient::ExecuteStatementCallable(const ExecuteStatementRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ExecuteStatement, request, m_executor.get());
}

void DynamoDBClient::ExecuteStatementAsync(const ExecuteStatementRequest& request, const ExecuteStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ExecuteStatement, request, handler, context, m_executor.get());
}

ExecuteTransactionOutcome DynamoDBClient::ExecuteTransaction(const ExecuteTransactionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ExecuteTransaction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ExecuteTransaction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ExecuteTransactionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ExecuteTransactionOutcomeCallable DynamoDBClient::ExecuteTransactionCallable(const ExecuteTransactionRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ExecuteTransaction, request, m_executor.get());
}

void DynamoDBClient::ExecuteTransactionAsync(const ExecuteTransactionRequest& request, const ExecuteTransactionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ExecuteTransaction, request, handler, context, m_executor.get());
}

ExportTableToPointInTimeOutcome DynamoDBClient::ExportTableToPointInTime(const ExportTableToPointInTimeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ExportTableToPointInTime, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ExportTableToPointInTime, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ExportTableToPointInTimeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ExportTableToPointInTimeOutcomeCallable DynamoDBClient::ExportTableToPointInTimeCallable(const ExportTableToPointInTimeRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ExportTableToPointInTime, request, m_executor.get());
}

void DynamoDBClient::ExportTableToPointInTimeAsync(const ExportTableToPointInTimeRequest& request, const ExportTableToPointInTimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ExportTableToPointInTime, request, handler, context, m_executor.get());
}

GetItemOutcome DynamoDBClient::GetItem(const GetItemRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
  if (m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value())
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("GetItem", "Making request to cached endpoint: " << endpoint);
      endpointResolutionOutcome.GetResult().SetURI(endpoint);
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
        endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("GetItem", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
        endpointResolutionOutcome.GetResult().SetURI(endpoint);
      }
      else
      {
        AWS_LOGSTREAM_ERROR("GetItem", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  if (endpointResolutionOutcome.GetResult().GetURL().empty()) {
    endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  }
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetItemOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetItemOutcomeCallable DynamoDBClient::GetItemCallable(const GetItemRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(GetItem, request, m_executor.get());
}

void DynamoDBClient::GetItemAsync(const GetItemRequest& request, const GetItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(GetItem, request, handler, context, m_executor.get());
}

ImportTableOutcome DynamoDBClient::ImportTable(const ImportTableRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ImportTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ImportTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ImportTableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ImportTableOutcomeCallable DynamoDBClient::ImportTableCallable(const ImportTableRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ImportTable, request, m_executor.get());
}

void DynamoDBClient::ImportTableAsync(const ImportTableRequest& request, const ImportTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ImportTable, request, handler, context, m_executor.get());
}

ListBackupsOutcome DynamoDBClient::ListBackups(const ListBackupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBackups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
  if (m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value())
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("ListBackups", "Making request to cached endpoint: " << endpoint);
      endpointResolutionOutcome.GetResult().SetURI(endpoint);
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
        endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("ListBackups", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
        endpointResolutionOutcome.GetResult().SetURI(endpoint);
      }
      else
      {
        AWS_LOGSTREAM_ERROR("ListBackups", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  if (endpointResolutionOutcome.GetResult().GetURL().empty()) {
    endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  }
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListBackups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListBackupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListBackupsOutcomeCallable DynamoDBClient::ListBackupsCallable(const ListBackupsRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListBackups, request, m_executor.get());
}

void DynamoDBClient::ListBackupsAsync(const ListBackupsRequest& request, const ListBackupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListBackups, request, handler, context, m_executor.get());
}

ListContributorInsightsOutcome DynamoDBClient::ListContributorInsights(const ListContributorInsightsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListContributorInsights, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListContributorInsights, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListContributorInsightsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListContributorInsightsOutcomeCallable DynamoDBClient::ListContributorInsightsCallable(const ListContributorInsightsRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListContributorInsights, request, m_executor.get());
}

void DynamoDBClient::ListContributorInsightsAsync(const ListContributorInsightsRequest& request, const ListContributorInsightsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListContributorInsights, request, handler, context, m_executor.get());
}

ListExportsOutcome DynamoDBClient::ListExports(const ListExportsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListExports, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListExports, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListExportsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListExportsOutcomeCallable DynamoDBClient::ListExportsCallable(const ListExportsRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListExports, request, m_executor.get());
}

void DynamoDBClient::ListExportsAsync(const ListExportsRequest& request, const ListExportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListExports, request, handler, context, m_executor.get());
}

ListGlobalTablesOutcome DynamoDBClient::ListGlobalTables(const ListGlobalTablesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListGlobalTables, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
  if (m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value())
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("ListGlobalTables", "Making request to cached endpoint: " << endpoint);
      endpointResolutionOutcome.GetResult().SetURI(endpoint);
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
        endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("ListGlobalTables", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
        endpointResolutionOutcome.GetResult().SetURI(endpoint);
      }
      else
      {
        AWS_LOGSTREAM_ERROR("ListGlobalTables", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  if (endpointResolutionOutcome.GetResult().GetURL().empty()) {
    endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  }
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListGlobalTables, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListGlobalTablesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListGlobalTablesOutcomeCallable DynamoDBClient::ListGlobalTablesCallable(const ListGlobalTablesRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListGlobalTables, request, m_executor.get());
}

void DynamoDBClient::ListGlobalTablesAsync(const ListGlobalTablesRequest& request, const ListGlobalTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListGlobalTables, request, handler, context, m_executor.get());
}

ListImportsOutcome DynamoDBClient::ListImports(const ListImportsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListImports, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListImports, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListImportsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListImportsOutcomeCallable DynamoDBClient::ListImportsCallable(const ListImportsRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListImports, request, m_executor.get());
}

void DynamoDBClient::ListImportsAsync(const ListImportsRequest& request, const ListImportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListImports, request, handler, context, m_executor.get());
}

ListTablesOutcome DynamoDBClient::ListTables(const ListTablesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTables, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
  if (m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value())
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("ListTables", "Making request to cached endpoint: " << endpoint);
      endpointResolutionOutcome.GetResult().SetURI(endpoint);
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
        endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("ListTables", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
        endpointResolutionOutcome.GetResult().SetURI(endpoint);
      }
      else
      {
        AWS_LOGSTREAM_ERROR("ListTables", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  if (endpointResolutionOutcome.GetResult().GetURL().empty()) {
    endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  }
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTables, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTablesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTablesOutcomeCallable DynamoDBClient::ListTablesCallable(const ListTablesRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListTables, request, m_executor.get());
}

void DynamoDBClient::ListTablesAsync(const ListTablesRequest& request, const ListTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListTables, request, handler, context, m_executor.get());
}

ListTagsOfResourceOutcome DynamoDBClient::ListTagsOfResource(const ListTagsOfResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsOfResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
  if (m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value())
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("ListTagsOfResource", "Making request to cached endpoint: " << endpoint);
      endpointResolutionOutcome.GetResult().SetURI(endpoint);
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
        endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("ListTagsOfResource", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
        endpointResolutionOutcome.GetResult().SetURI(endpoint);
      }
      else
      {
        AWS_LOGSTREAM_ERROR("ListTagsOfResource", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  if (endpointResolutionOutcome.GetResult().GetURL().empty()) {
    endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  }
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsOfResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTagsOfResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsOfResourceOutcomeCallable DynamoDBClient::ListTagsOfResourceCallable(const ListTagsOfResourceRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListTagsOfResource, request, m_executor.get());
}

void DynamoDBClient::ListTagsOfResourceAsync(const ListTagsOfResourceRequest& request, const ListTagsOfResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListTagsOfResource, request, handler, context, m_executor.get());
}

PutItemOutcome DynamoDBClient::PutItem(const PutItemRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
  if (m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value())
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("PutItem", "Making request to cached endpoint: " << endpoint);
      endpointResolutionOutcome.GetResult().SetURI(endpoint);
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
        endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("PutItem", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
        endpointResolutionOutcome.GetResult().SetURI(endpoint);
      }
      else
      {
        AWS_LOGSTREAM_ERROR("PutItem", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  if (endpointResolutionOutcome.GetResult().GetURL().empty()) {
    endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  }
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutItemOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutItemOutcomeCallable DynamoDBClient::PutItemCallable(const PutItemRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(PutItem, request, m_executor.get());
}

void DynamoDBClient::PutItemAsync(const PutItemRequest& request, const PutItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(PutItem, request, handler, context, m_executor.get());
}

QueryOutcome DynamoDBClient::Query(const QueryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, Query, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
  if (m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value())
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("Query", "Making request to cached endpoint: " << endpoint);
      endpointResolutionOutcome.GetResult().SetURI(endpoint);
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
        endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("Query", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
        endpointResolutionOutcome.GetResult().SetURI(endpoint);
      }
      else
      {
        AWS_LOGSTREAM_ERROR("Query", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  if (endpointResolutionOutcome.GetResult().GetURL().empty()) {
    endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  }
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, Query, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return QueryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

QueryOutcomeCallable DynamoDBClient::QueryCallable(const QueryRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(Query, request, m_executor.get());
}

void DynamoDBClient::QueryAsync(const QueryRequest& request, const QueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(Query, request, handler, context, m_executor.get());
}

RestoreTableFromBackupOutcome DynamoDBClient::RestoreTableFromBackup(const RestoreTableFromBackupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RestoreTableFromBackup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
  if (m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value())
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("RestoreTableFromBackup", "Making request to cached endpoint: " << endpoint);
      endpointResolutionOutcome.GetResult().SetURI(endpoint);
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
        endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("RestoreTableFromBackup", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
        endpointResolutionOutcome.GetResult().SetURI(endpoint);
      }
      else
      {
        AWS_LOGSTREAM_ERROR("RestoreTableFromBackup", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  if (endpointResolutionOutcome.GetResult().GetURL().empty()) {
    endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  }
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RestoreTableFromBackup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RestoreTableFromBackupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RestoreTableFromBackupOutcomeCallable DynamoDBClient::RestoreTableFromBackupCallable(const RestoreTableFromBackupRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(RestoreTableFromBackup, request, m_executor.get());
}

void DynamoDBClient::RestoreTableFromBackupAsync(const RestoreTableFromBackupRequest& request, const RestoreTableFromBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(RestoreTableFromBackup, request, handler, context, m_executor.get());
}

RestoreTableToPointInTimeOutcome DynamoDBClient::RestoreTableToPointInTime(const RestoreTableToPointInTimeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RestoreTableToPointInTime, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
  if (m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value())
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("RestoreTableToPointInTime", "Making request to cached endpoint: " << endpoint);
      endpointResolutionOutcome.GetResult().SetURI(endpoint);
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
        endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("RestoreTableToPointInTime", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
        endpointResolutionOutcome.GetResult().SetURI(endpoint);
      }
      else
      {
        AWS_LOGSTREAM_ERROR("RestoreTableToPointInTime", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  if (endpointResolutionOutcome.GetResult().GetURL().empty()) {
    endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  }
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RestoreTableToPointInTime, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RestoreTableToPointInTimeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RestoreTableToPointInTimeOutcomeCallable DynamoDBClient::RestoreTableToPointInTimeCallable(const RestoreTableToPointInTimeRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(RestoreTableToPointInTime, request, m_executor.get());
}

void DynamoDBClient::RestoreTableToPointInTimeAsync(const RestoreTableToPointInTimeRequest& request, const RestoreTableToPointInTimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(RestoreTableToPointInTime, request, handler, context, m_executor.get());
}

ScanOutcome DynamoDBClient::Scan(const ScanRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, Scan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
  if (m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value())
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("Scan", "Making request to cached endpoint: " << endpoint);
      endpointResolutionOutcome.GetResult().SetURI(endpoint);
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
        endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("Scan", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
        endpointResolutionOutcome.GetResult().SetURI(endpoint);
      }
      else
      {
        AWS_LOGSTREAM_ERROR("Scan", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  if (endpointResolutionOutcome.GetResult().GetURL().empty()) {
    endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  }
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, Scan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ScanOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ScanOutcomeCallable DynamoDBClient::ScanCallable(const ScanRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(Scan, request, m_executor.get());
}

void DynamoDBClient::ScanAsync(const ScanRequest& request, const ScanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(Scan, request, handler, context, m_executor.get());
}

TagResourceOutcome DynamoDBClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
  if (m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value())
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("TagResource", "Making request to cached endpoint: " << endpoint);
      endpointResolutionOutcome.GetResult().SetURI(endpoint);
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
        endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("TagResource", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
        endpointResolutionOutcome.GetResult().SetURI(endpoint);
      }
      else
      {
        AWS_LOGSTREAM_ERROR("TagResource", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  if (endpointResolutionOutcome.GetResult().GetURL().empty()) {
    endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  }
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable DynamoDBClient::TagResourceCallable(const TagResourceRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(TagResource, request, m_executor.get());
}

void DynamoDBClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(TagResource, request, handler, context, m_executor.get());
}

TransactGetItemsOutcome DynamoDBClient::TransactGetItems(const TransactGetItemsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TransactGetItems, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
  if (m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value())
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("TransactGetItems", "Making request to cached endpoint: " << endpoint);
      endpointResolutionOutcome.GetResult().SetURI(endpoint);
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
        endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("TransactGetItems", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
        endpointResolutionOutcome.GetResult().SetURI(endpoint);
      }
      else
      {
        AWS_LOGSTREAM_ERROR("TransactGetItems", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  if (endpointResolutionOutcome.GetResult().GetURL().empty()) {
    endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  }
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TransactGetItems, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return TransactGetItemsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TransactGetItemsOutcomeCallable DynamoDBClient::TransactGetItemsCallable(const TransactGetItemsRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(TransactGetItems, request, m_executor.get());
}

void DynamoDBClient::TransactGetItemsAsync(const TransactGetItemsRequest& request, const TransactGetItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(TransactGetItems, request, handler, context, m_executor.get());
}

TransactWriteItemsOutcome DynamoDBClient::TransactWriteItems(const TransactWriteItemsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TransactWriteItems, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
  if (m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value())
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("TransactWriteItems", "Making request to cached endpoint: " << endpoint);
      endpointResolutionOutcome.GetResult().SetURI(endpoint);
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
        endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("TransactWriteItems", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
        endpointResolutionOutcome.GetResult().SetURI(endpoint);
      }
      else
      {
        AWS_LOGSTREAM_ERROR("TransactWriteItems", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  if (endpointResolutionOutcome.GetResult().GetURL().empty()) {
    endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  }
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TransactWriteItems, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return TransactWriteItemsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TransactWriteItemsOutcomeCallable DynamoDBClient::TransactWriteItemsCallable(const TransactWriteItemsRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(TransactWriteItems, request, m_executor.get());
}

void DynamoDBClient::TransactWriteItemsAsync(const TransactWriteItemsRequest& request, const TransactWriteItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(TransactWriteItems, request, handler, context, m_executor.get());
}

UntagResourceOutcome DynamoDBClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
  if (m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value())
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("UntagResource", "Making request to cached endpoint: " << endpoint);
      endpointResolutionOutcome.GetResult().SetURI(endpoint);
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
        endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("UntagResource", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
        endpointResolutionOutcome.GetResult().SetURI(endpoint);
      }
      else
      {
        AWS_LOGSTREAM_ERROR("UntagResource", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  if (endpointResolutionOutcome.GetResult().GetURL().empty()) {
    endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  }
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable DynamoDBClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(UntagResource, request, m_executor.get());
}

void DynamoDBClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(UntagResource, request, handler, context, m_executor.get());
}

UpdateContinuousBackupsOutcome DynamoDBClient::UpdateContinuousBackups(const UpdateContinuousBackupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateContinuousBackups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
  if (m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value())
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("UpdateContinuousBackups", "Making request to cached endpoint: " << endpoint);
      endpointResolutionOutcome.GetResult().SetURI(endpoint);
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
        endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("UpdateContinuousBackups", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
        endpointResolutionOutcome.GetResult().SetURI(endpoint);
      }
      else
      {
        AWS_LOGSTREAM_ERROR("UpdateContinuousBackups", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  if (endpointResolutionOutcome.GetResult().GetURL().empty()) {
    endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  }
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateContinuousBackups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateContinuousBackupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateContinuousBackupsOutcomeCallable DynamoDBClient::UpdateContinuousBackupsCallable(const UpdateContinuousBackupsRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(UpdateContinuousBackups, request, m_executor.get());
}

void DynamoDBClient::UpdateContinuousBackupsAsync(const UpdateContinuousBackupsRequest& request, const UpdateContinuousBackupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(UpdateContinuousBackups, request, handler, context, m_executor.get());
}

UpdateContributorInsightsOutcome DynamoDBClient::UpdateContributorInsights(const UpdateContributorInsightsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateContributorInsights, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateContributorInsights, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateContributorInsightsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateContributorInsightsOutcomeCallable DynamoDBClient::UpdateContributorInsightsCallable(const UpdateContributorInsightsRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(UpdateContributorInsights, request, m_executor.get());
}

void DynamoDBClient::UpdateContributorInsightsAsync(const UpdateContributorInsightsRequest& request, const UpdateContributorInsightsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(UpdateContributorInsights, request, handler, context, m_executor.get());
}

UpdateGlobalTableOutcome DynamoDBClient::UpdateGlobalTable(const UpdateGlobalTableRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateGlobalTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
  if (m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value())
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("UpdateGlobalTable", "Making request to cached endpoint: " << endpoint);
      endpointResolutionOutcome.GetResult().SetURI(endpoint);
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
        endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("UpdateGlobalTable", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
        endpointResolutionOutcome.GetResult().SetURI(endpoint);
      }
      else
      {
        AWS_LOGSTREAM_ERROR("UpdateGlobalTable", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  if (endpointResolutionOutcome.GetResult().GetURL().empty()) {
    endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  }
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateGlobalTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateGlobalTableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateGlobalTableOutcomeCallable DynamoDBClient::UpdateGlobalTableCallable(const UpdateGlobalTableRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(UpdateGlobalTable, request, m_executor.get());
}

void DynamoDBClient::UpdateGlobalTableAsync(const UpdateGlobalTableRequest& request, const UpdateGlobalTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(UpdateGlobalTable, request, handler, context, m_executor.get());
}

UpdateGlobalTableSettingsOutcome DynamoDBClient::UpdateGlobalTableSettings(const UpdateGlobalTableSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateGlobalTableSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
  if (m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value())
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("UpdateGlobalTableSettings", "Making request to cached endpoint: " << endpoint);
      endpointResolutionOutcome.GetResult().SetURI(endpoint);
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
        endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("UpdateGlobalTableSettings", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
        endpointResolutionOutcome.GetResult().SetURI(endpoint);
      }
      else
      {
        AWS_LOGSTREAM_ERROR("UpdateGlobalTableSettings", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  if (endpointResolutionOutcome.GetResult().GetURL().empty()) {
    endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  }
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateGlobalTableSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateGlobalTableSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateGlobalTableSettingsOutcomeCallable DynamoDBClient::UpdateGlobalTableSettingsCallable(const UpdateGlobalTableSettingsRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(UpdateGlobalTableSettings, request, m_executor.get());
}

void DynamoDBClient::UpdateGlobalTableSettingsAsync(const UpdateGlobalTableSettingsRequest& request, const UpdateGlobalTableSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(UpdateGlobalTableSettings, request, handler, context, m_executor.get());
}

UpdateItemOutcome DynamoDBClient::UpdateItem(const UpdateItemRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
  if (m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value())
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("UpdateItem", "Making request to cached endpoint: " << endpoint);
      endpointResolutionOutcome.GetResult().SetURI(endpoint);
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
        endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("UpdateItem", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
        endpointResolutionOutcome.GetResult().SetURI(endpoint);
      }
      else
      {
        AWS_LOGSTREAM_ERROR("UpdateItem", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  if (endpointResolutionOutcome.GetResult().GetURL().empty()) {
    endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  }
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateItemOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateItemOutcomeCallable DynamoDBClient::UpdateItemCallable(const UpdateItemRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(UpdateItem, request, m_executor.get());
}

void DynamoDBClient::UpdateItemAsync(const UpdateItemRequest& request, const UpdateItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(UpdateItem, request, handler, context, m_executor.get());
}

UpdateTableOutcome DynamoDBClient::UpdateTable(const UpdateTableRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
  if (m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value())
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("UpdateTable", "Making request to cached endpoint: " << endpoint);
      endpointResolutionOutcome.GetResult().SetURI(endpoint);
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
        endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("UpdateTable", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
        endpointResolutionOutcome.GetResult().SetURI(endpoint);
      }
      else
      {
        AWS_LOGSTREAM_ERROR("UpdateTable", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  if (endpointResolutionOutcome.GetResult().GetURL().empty()) {
    endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  }
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateTableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateTableOutcomeCallable DynamoDBClient::UpdateTableCallable(const UpdateTableRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(UpdateTable, request, m_executor.get());
}

void DynamoDBClient::UpdateTableAsync(const UpdateTableRequest& request, const UpdateTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(UpdateTable, request, handler, context, m_executor.get());
}

UpdateTableReplicaAutoScalingOutcome DynamoDBClient::UpdateTableReplicaAutoScaling(const UpdateTableReplicaAutoScalingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateTableReplicaAutoScaling, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateTableReplicaAutoScaling, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateTableReplicaAutoScalingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateTableReplicaAutoScalingOutcomeCallable DynamoDBClient::UpdateTableReplicaAutoScalingCallable(const UpdateTableReplicaAutoScalingRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(UpdateTableReplicaAutoScaling, request, m_executor.get());
}

void DynamoDBClient::UpdateTableReplicaAutoScalingAsync(const UpdateTableReplicaAutoScalingRequest& request, const UpdateTableReplicaAutoScalingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(UpdateTableReplicaAutoScaling, request, handler, context, m_executor.get());
}

UpdateTimeToLiveOutcome DynamoDBClient::UpdateTimeToLive(const UpdateTimeToLiveRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateTimeToLive, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
  if (m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value())
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("UpdateTimeToLive", "Making request to cached endpoint: " << endpoint);
      endpointResolutionOutcome.GetResult().SetURI(endpoint);
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
        endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("UpdateTimeToLive", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
        endpointResolutionOutcome.GetResult().SetURI(endpoint);
      }
      else
      {
        AWS_LOGSTREAM_ERROR("UpdateTimeToLive", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
      }
    }
  }
  if (endpointResolutionOutcome.GetResult().GetURL().empty()) {
    endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  }
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateTimeToLive, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateTimeToLiveOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateTimeToLiveOutcomeCallable DynamoDBClient::UpdateTimeToLiveCallable(const UpdateTimeToLiveRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(UpdateTimeToLive, request, m_executor.get());
}

void DynamoDBClient::UpdateTimeToLiveAsync(const UpdateTimeToLiveRequest& request, const UpdateTimeToLiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(UpdateTimeToLive, request, handler, context, m_executor.get());
}

