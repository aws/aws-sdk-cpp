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
#include <aws/dynamodb/model/UpdateKinesisStreamingDestinationRequest.h>
#include <aws/dynamodb/model/UpdateTableRequest.h>
#include <aws/dynamodb/model/UpdateTableReplicaAutoScalingRequest.h>
#include <aws/dynamodb/model/UpdateTimeToLiveRequest.h>

#include <smithy/tracing/TracingUtils.h>


using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::DynamoDB;
using namespace Aws::DynamoDB::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws
{
  namespace DynamoDB
  {
    const char SERVICE_NAME[] = "dynamodb";
    const char ALLOCATION_TAG[] = "DynamoDBClient";
  }
}
const char* DynamoDBClient::GetServiceName() {return SERVICE_NAME;}
const char* DynamoDBClient::GetAllocationTag() {return ALLOCATION_TAG;}

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
  m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<DynamoDBEndpointProvider>(ALLOCATION_TAG))
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
    m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<DynamoDBEndpointProvider>(ALLOCATION_TAG))
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
    m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<DynamoDBEndpointProvider>(ALLOCATION_TAG))
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
  ShutdownSdkClient(this, -1);
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
  AWS_OPERATION_GUARD(BatchExecuteStatement);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchExecuteStatement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, BatchExecuteStatement, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, BatchExecuteStatement, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".BatchExecuteStatement",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<BatchExecuteStatementOutcome>(
    [&]()-> BatchExecuteStatementOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchExecuteStatement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return BatchExecuteStatementOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

BatchGetItemOutcome DynamoDBClient::BatchGetItem(const BatchGetItemRequest& request) const
{
  AWS_OPERATION_GUARD(BatchGetItem);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchGetItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, BatchGetItem, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, BatchGetItem, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".BatchGetItem",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<BatchGetItemOutcome>(
    [&]()-> BatchGetItemOutcome {
      ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
      const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value() && m_clientConfiguration.endpointOverride.empty();
      if (enableEndpointDiscovery)
      {
          Aws::String endpointKey = "Shared";
          Aws::String endpoint;
          if (m_endpointsCache.Get(endpointKey, endpoint))
          {
              AWS_LOGSTREAM_TRACE("BatchGetItem", "Making request to cached endpoint: " << endpoint);
              endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + endpoint;
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
                  endpointResolutionOutcome = endpointOutcome.GetError();
              }
          }
      }
      if (!enableEndpointDiscovery || !endpointResolutionOutcome.IsSuccess() || endpointResolutionOutcome.GetResult().GetURL().empty()) {
          endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
              [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
              TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
              *meter,
              {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      }
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchGetItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return BatchGetItemOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

BatchWriteItemOutcome DynamoDBClient::BatchWriteItem(const BatchWriteItemRequest& request) const
{
  AWS_OPERATION_GUARD(BatchWriteItem);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchWriteItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, BatchWriteItem, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, BatchWriteItem, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".BatchWriteItem",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<BatchWriteItemOutcome>(
    [&]()-> BatchWriteItemOutcome {
      ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
      const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value() && m_clientConfiguration.endpointOverride.empty();
      if (enableEndpointDiscovery)
      {
          Aws::String endpointKey = "Shared";
          Aws::String endpoint;
          if (m_endpointsCache.Get(endpointKey, endpoint))
          {
              AWS_LOGSTREAM_TRACE("BatchWriteItem", "Making request to cached endpoint: " << endpoint);
              endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + endpoint;
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
                  endpointResolutionOutcome = endpointOutcome.GetError();
              }
          }
      }
      if (!enableEndpointDiscovery || !endpointResolutionOutcome.IsSuccess() || endpointResolutionOutcome.GetResult().GetURL().empty()) {
          endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
              [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
              TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
              *meter,
              {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      }
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchWriteItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return BatchWriteItemOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateBackupOutcome DynamoDBClient::CreateBackup(const CreateBackupRequest& request) const
{
  AWS_OPERATION_GUARD(CreateBackup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateBackup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateBackup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateBackup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateBackup",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateBackupOutcome>(
    [&]()-> CreateBackupOutcome {
      ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
      const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value() && m_clientConfiguration.endpointOverride.empty();
      if (enableEndpointDiscovery)
      {
          Aws::String endpointKey = "Shared";
          Aws::String endpoint;
          if (m_endpointsCache.Get(endpointKey, endpoint))
          {
              AWS_LOGSTREAM_TRACE("CreateBackup", "Making request to cached endpoint: " << endpoint);
              endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + endpoint;
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
                  endpointResolutionOutcome = endpointOutcome.GetError();
              }
          }
      }
      if (!enableEndpointDiscovery || !endpointResolutionOutcome.IsSuccess() || endpointResolutionOutcome.GetResult().GetURL().empty()) {
          endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
              [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
              TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
              *meter,
              {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      }
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateBackup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return CreateBackupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateGlobalTableOutcome DynamoDBClient::CreateGlobalTable(const CreateGlobalTableRequest& request) const
{
  AWS_OPERATION_GUARD(CreateGlobalTable);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateGlobalTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateGlobalTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateGlobalTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateGlobalTable",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateGlobalTableOutcome>(
    [&]()-> CreateGlobalTableOutcome {
      ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
      const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value() && m_clientConfiguration.endpointOverride.empty();
      if (enableEndpointDiscovery)
      {
          Aws::String endpointKey = "Shared";
          Aws::String endpoint;
          if (m_endpointsCache.Get(endpointKey, endpoint))
          {
              AWS_LOGSTREAM_TRACE("CreateGlobalTable", "Making request to cached endpoint: " << endpoint);
              endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + endpoint;
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
                  endpointResolutionOutcome = endpointOutcome.GetError();
              }
          }
      }
      if (!enableEndpointDiscovery || !endpointResolutionOutcome.IsSuccess() || endpointResolutionOutcome.GetResult().GetURL().empty()) {
          endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
              [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
              TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
              *meter,
              {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      }
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateGlobalTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return CreateGlobalTableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateTableOutcome DynamoDBClient::CreateTable(const CreateTableRequest& request) const
{
  AWS_OPERATION_GUARD(CreateTable);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateTable",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateTableOutcome>(
    [&]()-> CreateTableOutcome {
      ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
      const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value() && m_clientConfiguration.endpointOverride.empty();
      if (enableEndpointDiscovery)
      {
          Aws::String endpointKey = "Shared";
          Aws::String endpoint;
          if (m_endpointsCache.Get(endpointKey, endpoint))
          {
              AWS_LOGSTREAM_TRACE("CreateTable", "Making request to cached endpoint: " << endpoint);
              endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + endpoint;
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
                  endpointResolutionOutcome = endpointOutcome.GetError();
              }
          }
      }
      if (!enableEndpointDiscovery || !endpointResolutionOutcome.IsSuccess() || endpointResolutionOutcome.GetResult().GetURL().empty()) {
          endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
              [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
              TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
              *meter,
              {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      }
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return CreateTableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteBackupOutcome DynamoDBClient::DeleteBackup(const DeleteBackupRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteBackup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBackup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteBackup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteBackup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteBackup",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteBackupOutcome>(
    [&]()-> DeleteBackupOutcome {
      ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
      const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value() && m_clientConfiguration.endpointOverride.empty();
      if (enableEndpointDiscovery)
      {
          Aws::String endpointKey = "Shared";
          Aws::String endpoint;
          if (m_endpointsCache.Get(endpointKey, endpoint))
          {
              AWS_LOGSTREAM_TRACE("DeleteBackup", "Making request to cached endpoint: " << endpoint);
              endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + endpoint;
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
                  endpointResolutionOutcome = endpointOutcome.GetError();
              }
          }
      }
      if (!enableEndpointDiscovery || !endpointResolutionOutcome.IsSuccess() || endpointResolutionOutcome.GetResult().GetURL().empty()) {
          endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
              [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
              TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
              *meter,
              {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      }
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBackup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DeleteBackupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteItemOutcome DynamoDBClient::DeleteItem(const DeleteItemRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteItem);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteItem, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteItem, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteItem",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteItemOutcome>(
    [&]()-> DeleteItemOutcome {
      ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
      const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value() && m_clientConfiguration.endpointOverride.empty();
      if (enableEndpointDiscovery)
      {
          Aws::String endpointKey = "Shared";
          Aws::String endpoint;
          if (m_endpointsCache.Get(endpointKey, endpoint))
          {
              AWS_LOGSTREAM_TRACE("DeleteItem", "Making request to cached endpoint: " << endpoint);
              endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + endpoint;
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
                  endpointResolutionOutcome = endpointOutcome.GetError();
              }
          }
      }
      if (!enableEndpointDiscovery || !endpointResolutionOutcome.IsSuccess() || endpointResolutionOutcome.GetResult().GetURL().empty()) {
          endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
              [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
              TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
              *meter,
              {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      }
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DeleteItemOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteTableOutcome DynamoDBClient::DeleteTable(const DeleteTableRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteTable);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteTable",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteTableOutcome>(
    [&]()-> DeleteTableOutcome {
      ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
      const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value() && m_clientConfiguration.endpointOverride.empty();
      if (enableEndpointDiscovery)
      {
          Aws::String endpointKey = "Shared";
          Aws::String endpoint;
          if (m_endpointsCache.Get(endpointKey, endpoint))
          {
              AWS_LOGSTREAM_TRACE("DeleteTable", "Making request to cached endpoint: " << endpoint);
              endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + endpoint;
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
                  endpointResolutionOutcome = endpointOutcome.GetError();
              }
          }
      }
      if (!enableEndpointDiscovery || !endpointResolutionOutcome.IsSuccess() || endpointResolutionOutcome.GetResult().GetURL().empty()) {
          endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
              [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
              TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
              *meter,
              {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      }
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DeleteTableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeBackupOutcome DynamoDBClient::DescribeBackup(const DescribeBackupRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeBackup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeBackup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeBackup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeBackup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeBackup",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeBackupOutcome>(
    [&]()-> DescribeBackupOutcome {
      ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
      const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value() && m_clientConfiguration.endpointOverride.empty();
      if (enableEndpointDiscovery)
      {
          Aws::String endpointKey = "Shared";
          Aws::String endpoint;
          if (m_endpointsCache.Get(endpointKey, endpoint))
          {
              AWS_LOGSTREAM_TRACE("DescribeBackup", "Making request to cached endpoint: " << endpoint);
              endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + endpoint;
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
                  endpointResolutionOutcome = endpointOutcome.GetError();
              }
          }
      }
      if (!enableEndpointDiscovery || !endpointResolutionOutcome.IsSuccess() || endpointResolutionOutcome.GetResult().GetURL().empty()) {
          endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
              [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
              TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
              *meter,
              {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      }
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeBackup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeBackupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeContinuousBackupsOutcome DynamoDBClient::DescribeContinuousBackups(const DescribeContinuousBackupsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeContinuousBackups);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeContinuousBackups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeContinuousBackups, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeContinuousBackups, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeContinuousBackups",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeContinuousBackupsOutcome>(
    [&]()-> DescribeContinuousBackupsOutcome {
      ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
      const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value() && m_clientConfiguration.endpointOverride.empty();
      if (enableEndpointDiscovery)
      {
          Aws::String endpointKey = "Shared";
          Aws::String endpoint;
          if (m_endpointsCache.Get(endpointKey, endpoint))
          {
              AWS_LOGSTREAM_TRACE("DescribeContinuousBackups", "Making request to cached endpoint: " << endpoint);
              endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + endpoint;
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
                  endpointResolutionOutcome = endpointOutcome.GetError();
              }
          }
      }
      if (!enableEndpointDiscovery || !endpointResolutionOutcome.IsSuccess() || endpointResolutionOutcome.GetResult().GetURL().empty()) {
          endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
              [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
              TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
              *meter,
              {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      }
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeContinuousBackups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeContinuousBackupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeContributorInsightsOutcome DynamoDBClient::DescribeContributorInsights(const DescribeContributorInsightsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeContributorInsights);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeContributorInsights, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeContributorInsights, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeContributorInsights, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeContributorInsights",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeContributorInsightsOutcome>(
    [&]()-> DescribeContributorInsightsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeContributorInsights, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeContributorInsightsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeEndpointsOutcome DynamoDBClient::DescribeEndpoints(const DescribeEndpointsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeEndpoints);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeEndpoints, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeEndpoints, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeEndpoints",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeEndpointsOutcome>(
    [&]()-> DescribeEndpointsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeEndpointsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeExportOutcome DynamoDBClient::DescribeExport(const DescribeExportRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeExport);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeExport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeExport, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeExport, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeExport",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeExportOutcome>(
    [&]()-> DescribeExportOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeExport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeExportOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeGlobalTableOutcome DynamoDBClient::DescribeGlobalTable(const DescribeGlobalTableRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeGlobalTable);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeGlobalTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeGlobalTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeGlobalTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeGlobalTable",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeGlobalTableOutcome>(
    [&]()-> DescribeGlobalTableOutcome {
      ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
      const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value() && m_clientConfiguration.endpointOverride.empty();
      if (enableEndpointDiscovery)
      {
          Aws::String endpointKey = "Shared";
          Aws::String endpoint;
          if (m_endpointsCache.Get(endpointKey, endpoint))
          {
              AWS_LOGSTREAM_TRACE("DescribeGlobalTable", "Making request to cached endpoint: " << endpoint);
              endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + endpoint;
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
                  endpointResolutionOutcome = endpointOutcome.GetError();
              }
          }
      }
      if (!enableEndpointDiscovery || !endpointResolutionOutcome.IsSuccess() || endpointResolutionOutcome.GetResult().GetURL().empty()) {
          endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
              [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
              TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
              *meter,
              {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      }
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeGlobalTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeGlobalTableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeGlobalTableSettingsOutcome DynamoDBClient::DescribeGlobalTableSettings(const DescribeGlobalTableSettingsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeGlobalTableSettings);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeGlobalTableSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeGlobalTableSettings, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeGlobalTableSettings, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeGlobalTableSettings",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeGlobalTableSettingsOutcome>(
    [&]()-> DescribeGlobalTableSettingsOutcome {
      ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
      const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value() && m_clientConfiguration.endpointOverride.empty();
      if (enableEndpointDiscovery)
      {
          Aws::String endpointKey = "Shared";
          Aws::String endpoint;
          if (m_endpointsCache.Get(endpointKey, endpoint))
          {
              AWS_LOGSTREAM_TRACE("DescribeGlobalTableSettings", "Making request to cached endpoint: " << endpoint);
              endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + endpoint;
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
                  endpointResolutionOutcome = endpointOutcome.GetError();
              }
          }
      }
      if (!enableEndpointDiscovery || !endpointResolutionOutcome.IsSuccess() || endpointResolutionOutcome.GetResult().GetURL().empty()) {
          endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
              [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
              TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
              *meter,
              {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      }
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeGlobalTableSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeGlobalTableSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeImportOutcome DynamoDBClient::DescribeImport(const DescribeImportRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeImport);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeImport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeImport, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeImport, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeImport",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeImportOutcome>(
    [&]()-> DescribeImportOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeImport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeImportOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeKinesisStreamingDestinationOutcome DynamoDBClient::DescribeKinesisStreamingDestination(const DescribeKinesisStreamingDestinationRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeKinesisStreamingDestination);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeKinesisStreamingDestination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeKinesisStreamingDestination, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeKinesisStreamingDestination, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeKinesisStreamingDestination",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeKinesisStreamingDestinationOutcome>(
    [&]()-> DescribeKinesisStreamingDestinationOutcome {
      ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
      const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value() && m_clientConfiguration.endpointOverride.empty();
      if (enableEndpointDiscovery)
      {
          Aws::String endpointKey = "Shared";
          Aws::String endpoint;
          if (m_endpointsCache.Get(endpointKey, endpoint))
          {
              AWS_LOGSTREAM_TRACE("DescribeKinesisStreamingDestination", "Making request to cached endpoint: " << endpoint);
              endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + endpoint;
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
                  endpointResolutionOutcome = endpointOutcome.GetError();
              }
          }
      }
      if (!enableEndpointDiscovery || !endpointResolutionOutcome.IsSuccess() || endpointResolutionOutcome.GetResult().GetURL().empty()) {
          endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
              [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
              TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
              *meter,
              {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      }
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeKinesisStreamingDestination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeKinesisStreamingDestinationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeLimitsOutcome DynamoDBClient::DescribeLimits(const DescribeLimitsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeLimits);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeLimits, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeLimits, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeLimits, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeLimits",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeLimitsOutcome>(
    [&]()-> DescribeLimitsOutcome {
      ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
      const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value() && m_clientConfiguration.endpointOverride.empty();
      if (enableEndpointDiscovery)
      {
          Aws::String endpointKey = "Shared";
          Aws::String endpoint;
          if (m_endpointsCache.Get(endpointKey, endpoint))
          {
              AWS_LOGSTREAM_TRACE("DescribeLimits", "Making request to cached endpoint: " << endpoint);
              endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + endpoint;
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
                  endpointResolutionOutcome = endpointOutcome.GetError();
              }
          }
      }
      if (!enableEndpointDiscovery || !endpointResolutionOutcome.IsSuccess() || endpointResolutionOutcome.GetResult().GetURL().empty()) {
          endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
              [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
              TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
              *meter,
              {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      }
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeLimits, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeLimitsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeTableOutcome DynamoDBClient::DescribeTable(const DescribeTableRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeTable);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeTable",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeTableOutcome>(
    [&]()-> DescribeTableOutcome {
      ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
      const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value() && m_clientConfiguration.endpointOverride.empty();
      if (enableEndpointDiscovery)
      {
          Aws::String endpointKey = "Shared";
          Aws::String endpoint;
          if (m_endpointsCache.Get(endpointKey, endpoint))
          {
              AWS_LOGSTREAM_TRACE("DescribeTable", "Making request to cached endpoint: " << endpoint);
              endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + endpoint;
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
                  endpointResolutionOutcome = endpointOutcome.GetError();
              }
          }
      }
      if (!enableEndpointDiscovery || !endpointResolutionOutcome.IsSuccess() || endpointResolutionOutcome.GetResult().GetURL().empty()) {
          endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
              [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
              TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
              *meter,
              {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      }
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeTableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeTableReplicaAutoScalingOutcome DynamoDBClient::DescribeTableReplicaAutoScaling(const DescribeTableReplicaAutoScalingRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeTableReplicaAutoScaling);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTableReplicaAutoScaling, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeTableReplicaAutoScaling, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeTableReplicaAutoScaling, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeTableReplicaAutoScaling",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeTableReplicaAutoScalingOutcome>(
    [&]()-> DescribeTableReplicaAutoScalingOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTableReplicaAutoScaling, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeTableReplicaAutoScalingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeTimeToLiveOutcome DynamoDBClient::DescribeTimeToLive(const DescribeTimeToLiveRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeTimeToLive);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTimeToLive, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeTimeToLive, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeTimeToLive, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeTimeToLive",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeTimeToLiveOutcome>(
    [&]()-> DescribeTimeToLiveOutcome {
      ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
      const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value() && m_clientConfiguration.endpointOverride.empty();
      if (enableEndpointDiscovery)
      {
          Aws::String endpointKey = "Shared";
          Aws::String endpoint;
          if (m_endpointsCache.Get(endpointKey, endpoint))
          {
              AWS_LOGSTREAM_TRACE("DescribeTimeToLive", "Making request to cached endpoint: " << endpoint);
              endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + endpoint;
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
                  endpointResolutionOutcome = endpointOutcome.GetError();
              }
          }
      }
      if (!enableEndpointDiscovery || !endpointResolutionOutcome.IsSuccess() || endpointResolutionOutcome.GetResult().GetURL().empty()) {
          endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
              [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
              TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
              *meter,
              {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      }
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTimeToLive, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DescribeTimeToLiveOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DisableKinesisStreamingDestinationOutcome DynamoDBClient::DisableKinesisStreamingDestination(const DisableKinesisStreamingDestinationRequest& request) const
{
  AWS_OPERATION_GUARD(DisableKinesisStreamingDestination);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisableKinesisStreamingDestination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DisableKinesisStreamingDestination, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DisableKinesisStreamingDestination, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DisableKinesisStreamingDestination",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DisableKinesisStreamingDestinationOutcome>(
    [&]()-> DisableKinesisStreamingDestinationOutcome {
      ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
      const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value() && m_clientConfiguration.endpointOverride.empty();
      if (enableEndpointDiscovery)
      {
          Aws::String endpointKey = "Shared";
          Aws::String endpoint;
          if (m_endpointsCache.Get(endpointKey, endpoint))
          {
              AWS_LOGSTREAM_TRACE("DisableKinesisStreamingDestination", "Making request to cached endpoint: " << endpoint);
              endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + endpoint;
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
                  endpointResolutionOutcome = endpointOutcome.GetError();
              }
          }
      }
      if (!enableEndpointDiscovery || !endpointResolutionOutcome.IsSuccess() || endpointResolutionOutcome.GetResult().GetURL().empty()) {
          endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
              [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
              TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
              *meter,
              {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      }
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisableKinesisStreamingDestination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return DisableKinesisStreamingDestinationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

EnableKinesisStreamingDestinationOutcome DynamoDBClient::EnableKinesisStreamingDestination(const EnableKinesisStreamingDestinationRequest& request) const
{
  AWS_OPERATION_GUARD(EnableKinesisStreamingDestination);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, EnableKinesisStreamingDestination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, EnableKinesisStreamingDestination, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, EnableKinesisStreamingDestination, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".EnableKinesisStreamingDestination",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<EnableKinesisStreamingDestinationOutcome>(
    [&]()-> EnableKinesisStreamingDestinationOutcome {
      ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
      const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value() && m_clientConfiguration.endpointOverride.empty();
      if (enableEndpointDiscovery)
      {
          Aws::String endpointKey = "Shared";
          Aws::String endpoint;
          if (m_endpointsCache.Get(endpointKey, endpoint))
          {
              AWS_LOGSTREAM_TRACE("EnableKinesisStreamingDestination", "Making request to cached endpoint: " << endpoint);
              endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + endpoint;
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
                  endpointResolutionOutcome = endpointOutcome.GetError();
              }
          }
      }
      if (!enableEndpointDiscovery || !endpointResolutionOutcome.IsSuccess() || endpointResolutionOutcome.GetResult().GetURL().empty()) {
          endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
              [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
              TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
              *meter,
              {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      }
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, EnableKinesisStreamingDestination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return EnableKinesisStreamingDestinationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ExecuteStatementOutcome DynamoDBClient::ExecuteStatement(const ExecuteStatementRequest& request) const
{
  AWS_OPERATION_GUARD(ExecuteStatement);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ExecuteStatement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ExecuteStatement, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ExecuteStatement, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ExecuteStatement",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ExecuteStatementOutcome>(
    [&]()-> ExecuteStatementOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ExecuteStatement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ExecuteStatementOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ExecuteTransactionOutcome DynamoDBClient::ExecuteTransaction(const ExecuteTransactionRequest& request) const
{
  AWS_OPERATION_GUARD(ExecuteTransaction);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ExecuteTransaction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ExecuteTransaction, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ExecuteTransaction, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ExecuteTransaction",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ExecuteTransactionOutcome>(
    [&]()-> ExecuteTransactionOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ExecuteTransaction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ExecuteTransactionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ExportTableToPointInTimeOutcome DynamoDBClient::ExportTableToPointInTime(const ExportTableToPointInTimeRequest& request) const
{
  AWS_OPERATION_GUARD(ExportTableToPointInTime);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ExportTableToPointInTime, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ExportTableToPointInTime, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ExportTableToPointInTime, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ExportTableToPointInTime",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ExportTableToPointInTimeOutcome>(
    [&]()-> ExportTableToPointInTimeOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ExportTableToPointInTime, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ExportTableToPointInTimeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetItemOutcome DynamoDBClient::GetItem(const GetItemRequest& request) const
{
  AWS_OPERATION_GUARD(GetItem);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetItem, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetItem, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetItem",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetItemOutcome>(
    [&]()-> GetItemOutcome {
      ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
      const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value() && m_clientConfiguration.endpointOverride.empty();
      if (enableEndpointDiscovery)
      {
          Aws::String endpointKey = "Shared";
          Aws::String endpoint;
          if (m_endpointsCache.Get(endpointKey, endpoint))
          {
              AWS_LOGSTREAM_TRACE("GetItem", "Making request to cached endpoint: " << endpoint);
              endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + endpoint;
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
                  endpointResolutionOutcome = endpointOutcome.GetError();
              }
          }
      }
      if (!enableEndpointDiscovery || !endpointResolutionOutcome.IsSuccess() || endpointResolutionOutcome.GetResult().GetURL().empty()) {
          endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
              [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
              TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
              *meter,
              {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      }
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return GetItemOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ImportTableOutcome DynamoDBClient::ImportTable(const ImportTableRequest& request) const
{
  AWS_OPERATION_GUARD(ImportTable);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ImportTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ImportTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ImportTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ImportTable",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ImportTableOutcome>(
    [&]()-> ImportTableOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ImportTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ImportTableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListBackupsOutcome DynamoDBClient::ListBackups(const ListBackupsRequest& request) const
{
  AWS_OPERATION_GUARD(ListBackups);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBackups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListBackups, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListBackups, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListBackups",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListBackupsOutcome>(
    [&]()-> ListBackupsOutcome {
      ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
      const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value() && m_clientConfiguration.endpointOverride.empty();
      if (enableEndpointDiscovery)
      {
          Aws::String endpointKey = "Shared";
          Aws::String endpoint;
          if (m_endpointsCache.Get(endpointKey, endpoint))
          {
              AWS_LOGSTREAM_TRACE("ListBackups", "Making request to cached endpoint: " << endpoint);
              endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + endpoint;
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
                  endpointResolutionOutcome = endpointOutcome.GetError();
              }
          }
      }
      if (!enableEndpointDiscovery || !endpointResolutionOutcome.IsSuccess() || endpointResolutionOutcome.GetResult().GetURL().empty()) {
          endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
              [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
              TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
              *meter,
              {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      }
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListBackups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ListBackupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListContributorInsightsOutcome DynamoDBClient::ListContributorInsights(const ListContributorInsightsRequest& request) const
{
  AWS_OPERATION_GUARD(ListContributorInsights);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListContributorInsights, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListContributorInsights, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListContributorInsights, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListContributorInsights",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListContributorInsightsOutcome>(
    [&]()-> ListContributorInsightsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListContributorInsights, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ListContributorInsightsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListExportsOutcome DynamoDBClient::ListExports(const ListExportsRequest& request) const
{
  AWS_OPERATION_GUARD(ListExports);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListExports, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListExports, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListExports, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListExports",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListExportsOutcome>(
    [&]()-> ListExportsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListExports, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ListExportsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListGlobalTablesOutcome DynamoDBClient::ListGlobalTables(const ListGlobalTablesRequest& request) const
{
  AWS_OPERATION_GUARD(ListGlobalTables);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListGlobalTables, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListGlobalTables, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListGlobalTables, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListGlobalTables",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListGlobalTablesOutcome>(
    [&]()-> ListGlobalTablesOutcome {
      ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
      const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value() && m_clientConfiguration.endpointOverride.empty();
      if (enableEndpointDiscovery)
      {
          Aws::String endpointKey = "Shared";
          Aws::String endpoint;
          if (m_endpointsCache.Get(endpointKey, endpoint))
          {
              AWS_LOGSTREAM_TRACE("ListGlobalTables", "Making request to cached endpoint: " << endpoint);
              endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + endpoint;
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
                  endpointResolutionOutcome = endpointOutcome.GetError();
              }
          }
      }
      if (!enableEndpointDiscovery || !endpointResolutionOutcome.IsSuccess() || endpointResolutionOutcome.GetResult().GetURL().empty()) {
          endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
              [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
              TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
              *meter,
              {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      }
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListGlobalTables, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ListGlobalTablesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListImportsOutcome DynamoDBClient::ListImports(const ListImportsRequest& request) const
{
  AWS_OPERATION_GUARD(ListImports);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListImports, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListImports, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListImports, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListImports",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListImportsOutcome>(
    [&]()-> ListImportsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListImports, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ListImportsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTablesOutcome DynamoDBClient::ListTables(const ListTablesRequest& request) const
{
  AWS_OPERATION_GUARD(ListTables);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTables, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListTables, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTables, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTables",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTablesOutcome>(
    [&]()-> ListTablesOutcome {
      ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
      const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value() && m_clientConfiguration.endpointOverride.empty();
      if (enableEndpointDiscovery)
      {
          Aws::String endpointKey = "Shared";
          Aws::String endpoint;
          if (m_endpointsCache.Get(endpointKey, endpoint))
          {
              AWS_LOGSTREAM_TRACE("ListTables", "Making request to cached endpoint: " << endpoint);
              endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + endpoint;
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
                  endpointResolutionOutcome = endpointOutcome.GetError();
              }
          }
      }
      if (!enableEndpointDiscovery || !endpointResolutionOutcome.IsSuccess() || endpointResolutionOutcome.GetResult().GetURL().empty()) {
          endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
              [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
              TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
              *meter,
              {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      }
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTables, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ListTablesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTagsOfResourceOutcome DynamoDBClient::ListTagsOfResource(const ListTagsOfResourceRequest& request) const
{
  AWS_OPERATION_GUARD(ListTagsOfResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsOfResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListTagsOfResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTagsOfResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTagsOfResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTagsOfResourceOutcome>(
    [&]()-> ListTagsOfResourceOutcome {
      ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
      const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value() && m_clientConfiguration.endpointOverride.empty();
      if (enableEndpointDiscovery)
      {
          Aws::String endpointKey = "Shared";
          Aws::String endpoint;
          if (m_endpointsCache.Get(endpointKey, endpoint))
          {
              AWS_LOGSTREAM_TRACE("ListTagsOfResource", "Making request to cached endpoint: " << endpoint);
              endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + endpoint;
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
                  endpointResolutionOutcome = endpointOutcome.GetError();
              }
          }
      }
      if (!enableEndpointDiscovery || !endpointResolutionOutcome.IsSuccess() || endpointResolutionOutcome.GetResult().GetURL().empty()) {
          endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
              [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
              TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
              *meter,
              {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      }
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsOfResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ListTagsOfResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutItemOutcome DynamoDBClient::PutItem(const PutItemRequest& request) const
{
  AWS_OPERATION_GUARD(PutItem);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, PutItem, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutItem, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PutItem",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutItemOutcome>(
    [&]()-> PutItemOutcome {
      ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
      const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value() && m_clientConfiguration.endpointOverride.empty();
      if (enableEndpointDiscovery)
      {
          Aws::String endpointKey = "Shared";
          Aws::String endpoint;
          if (m_endpointsCache.Get(endpointKey, endpoint))
          {
              AWS_LOGSTREAM_TRACE("PutItem", "Making request to cached endpoint: " << endpoint);
              endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + endpoint;
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
                  endpointResolutionOutcome = endpointOutcome.GetError();
              }
          }
      }
      if (!enableEndpointDiscovery || !endpointResolutionOutcome.IsSuccess() || endpointResolutionOutcome.GetResult().GetURL().empty()) {
          endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
              [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
              TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
              *meter,
              {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      }
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return PutItemOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

QueryOutcome DynamoDBClient::Query(const QueryRequest& request) const
{
  AWS_OPERATION_GUARD(Query);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, Query, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, Query, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, Query, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".Query",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<QueryOutcome>(
    [&]()-> QueryOutcome {
      ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
      const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value() && m_clientConfiguration.endpointOverride.empty();
      if (enableEndpointDiscovery)
      {
          Aws::String endpointKey = "Shared";
          Aws::String endpoint;
          if (m_endpointsCache.Get(endpointKey, endpoint))
          {
              AWS_LOGSTREAM_TRACE("Query", "Making request to cached endpoint: " << endpoint);
              endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + endpoint;
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
                  endpointResolutionOutcome = endpointOutcome.GetError();
              }
          }
      }
      if (!enableEndpointDiscovery || !endpointResolutionOutcome.IsSuccess() || endpointResolutionOutcome.GetResult().GetURL().empty()) {
          endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
              [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
              TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
              *meter,
              {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      }
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, Query, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return QueryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

RestoreTableFromBackupOutcome DynamoDBClient::RestoreTableFromBackup(const RestoreTableFromBackupRequest& request) const
{
  AWS_OPERATION_GUARD(RestoreTableFromBackup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RestoreTableFromBackup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, RestoreTableFromBackup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, RestoreTableFromBackup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".RestoreTableFromBackup",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<RestoreTableFromBackupOutcome>(
    [&]()-> RestoreTableFromBackupOutcome {
      ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
      const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value() && m_clientConfiguration.endpointOverride.empty();
      if (enableEndpointDiscovery)
      {
          Aws::String endpointKey = "Shared";
          Aws::String endpoint;
          if (m_endpointsCache.Get(endpointKey, endpoint))
          {
              AWS_LOGSTREAM_TRACE("RestoreTableFromBackup", "Making request to cached endpoint: " << endpoint);
              endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + endpoint;
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
                  endpointResolutionOutcome = endpointOutcome.GetError();
              }
          }
      }
      if (!enableEndpointDiscovery || !endpointResolutionOutcome.IsSuccess() || endpointResolutionOutcome.GetResult().GetURL().empty()) {
          endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
              [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
              TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
              *meter,
              {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      }
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RestoreTableFromBackup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return RestoreTableFromBackupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

RestoreTableToPointInTimeOutcome DynamoDBClient::RestoreTableToPointInTime(const RestoreTableToPointInTimeRequest& request) const
{
  AWS_OPERATION_GUARD(RestoreTableToPointInTime);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RestoreTableToPointInTime, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, RestoreTableToPointInTime, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, RestoreTableToPointInTime, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".RestoreTableToPointInTime",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<RestoreTableToPointInTimeOutcome>(
    [&]()-> RestoreTableToPointInTimeOutcome {
      ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
      const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value() && m_clientConfiguration.endpointOverride.empty();
      if (enableEndpointDiscovery)
      {
          Aws::String endpointKey = "Shared";
          Aws::String endpoint;
          if (m_endpointsCache.Get(endpointKey, endpoint))
          {
              AWS_LOGSTREAM_TRACE("RestoreTableToPointInTime", "Making request to cached endpoint: " << endpoint);
              endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + endpoint;
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
                  endpointResolutionOutcome = endpointOutcome.GetError();
              }
          }
      }
      if (!enableEndpointDiscovery || !endpointResolutionOutcome.IsSuccess() || endpointResolutionOutcome.GetResult().GetURL().empty()) {
          endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
              [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
              TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
              *meter,
              {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      }
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RestoreTableToPointInTime, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return RestoreTableToPointInTimeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ScanOutcome DynamoDBClient::Scan(const ScanRequest& request) const
{
  AWS_OPERATION_GUARD(Scan);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, Scan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, Scan, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, Scan, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".Scan",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ScanOutcome>(
    [&]()-> ScanOutcome {
      ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
      const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value() && m_clientConfiguration.endpointOverride.empty();
      if (enableEndpointDiscovery)
      {
          Aws::String endpointKey = "Shared";
          Aws::String endpoint;
          if (m_endpointsCache.Get(endpointKey, endpoint))
          {
              AWS_LOGSTREAM_TRACE("Scan", "Making request to cached endpoint: " << endpoint);
              endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + endpoint;
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
                  endpointResolutionOutcome = endpointOutcome.GetError();
              }
          }
      }
      if (!enableEndpointDiscovery || !endpointResolutionOutcome.IsSuccess() || endpointResolutionOutcome.GetResult().GetURL().empty()) {
          endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
              [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
              TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
              *meter,
              {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      }
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, Scan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return ScanOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TagResourceOutcome DynamoDBClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(TagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".TagResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<TagResourceOutcome>(
    [&]()-> TagResourceOutcome {
      ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
      const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value() && m_clientConfiguration.endpointOverride.empty();
      if (enableEndpointDiscovery)
      {
          Aws::String endpointKey = "Shared";
          Aws::String endpoint;
          if (m_endpointsCache.Get(endpointKey, endpoint))
          {
              AWS_LOGSTREAM_TRACE("TagResource", "Making request to cached endpoint: " << endpoint);
              endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + endpoint;
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
                  endpointResolutionOutcome = endpointOutcome.GetError();
              }
          }
      }
      if (!enableEndpointDiscovery || !endpointResolutionOutcome.IsSuccess() || endpointResolutionOutcome.GetResult().GetURL().empty()) {
          endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
              [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
              TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
              *meter,
              {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      }
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TransactGetItemsOutcome DynamoDBClient::TransactGetItems(const TransactGetItemsRequest& request) const
{
  AWS_OPERATION_GUARD(TransactGetItems);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TransactGetItems, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, TransactGetItems, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, TransactGetItems, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".TransactGetItems",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<TransactGetItemsOutcome>(
    [&]()-> TransactGetItemsOutcome {
      ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
      const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value() && m_clientConfiguration.endpointOverride.empty();
      if (enableEndpointDiscovery)
      {
          Aws::String endpointKey = "Shared";
          Aws::String endpoint;
          if (m_endpointsCache.Get(endpointKey, endpoint))
          {
              AWS_LOGSTREAM_TRACE("TransactGetItems", "Making request to cached endpoint: " << endpoint);
              endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + endpoint;
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
                  endpointResolutionOutcome = endpointOutcome.GetError();
              }
          }
      }
      if (!enableEndpointDiscovery || !endpointResolutionOutcome.IsSuccess() || endpointResolutionOutcome.GetResult().GetURL().empty()) {
          endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
              [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
              TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
              *meter,
              {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      }
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TransactGetItems, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return TransactGetItemsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TransactWriteItemsOutcome DynamoDBClient::TransactWriteItems(const TransactWriteItemsRequest& request) const
{
  AWS_OPERATION_GUARD(TransactWriteItems);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TransactWriteItems, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, TransactWriteItems, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, TransactWriteItems, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".TransactWriteItems",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<TransactWriteItemsOutcome>(
    [&]()-> TransactWriteItemsOutcome {
      ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
      const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value() && m_clientConfiguration.endpointOverride.empty();
      if (enableEndpointDiscovery)
      {
          Aws::String endpointKey = "Shared";
          Aws::String endpoint;
          if (m_endpointsCache.Get(endpointKey, endpoint))
          {
              AWS_LOGSTREAM_TRACE("TransactWriteItems", "Making request to cached endpoint: " << endpoint);
              endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + endpoint;
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
                  endpointResolutionOutcome = endpointOutcome.GetError();
              }
          }
      }
      if (!enableEndpointDiscovery || !endpointResolutionOutcome.IsSuccess() || endpointResolutionOutcome.GetResult().GetURL().empty()) {
          endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
              [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
              TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
              *meter,
              {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      }
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TransactWriteItems, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return TransactWriteItemsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UntagResourceOutcome DynamoDBClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(UntagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UntagResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UntagResourceOutcome>(
    [&]()-> UntagResourceOutcome {
      ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
      const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value() && m_clientConfiguration.endpointOverride.empty();
      if (enableEndpointDiscovery)
      {
          Aws::String endpointKey = "Shared";
          Aws::String endpoint;
          if (m_endpointsCache.Get(endpointKey, endpoint))
          {
              AWS_LOGSTREAM_TRACE("UntagResource", "Making request to cached endpoint: " << endpoint);
              endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + endpoint;
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
                  endpointResolutionOutcome = endpointOutcome.GetError();
              }
          }
      }
      if (!enableEndpointDiscovery || !endpointResolutionOutcome.IsSuccess() || endpointResolutionOutcome.GetResult().GetURL().empty()) {
          endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
              [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
              TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
              *meter,
              {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      }
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateContinuousBackupsOutcome DynamoDBClient::UpdateContinuousBackups(const UpdateContinuousBackupsRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateContinuousBackups);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateContinuousBackups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateContinuousBackups, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateContinuousBackups, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateContinuousBackups",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateContinuousBackupsOutcome>(
    [&]()-> UpdateContinuousBackupsOutcome {
      ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
      const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value() && m_clientConfiguration.endpointOverride.empty();
      if (enableEndpointDiscovery)
      {
          Aws::String endpointKey = "Shared";
          Aws::String endpoint;
          if (m_endpointsCache.Get(endpointKey, endpoint))
          {
              AWS_LOGSTREAM_TRACE("UpdateContinuousBackups", "Making request to cached endpoint: " << endpoint);
              endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + endpoint;
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
                  endpointResolutionOutcome = endpointOutcome.GetError();
              }
          }
      }
      if (!enableEndpointDiscovery || !endpointResolutionOutcome.IsSuccess() || endpointResolutionOutcome.GetResult().GetURL().empty()) {
          endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
              [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
              TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
              *meter,
              {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      }
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateContinuousBackups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return UpdateContinuousBackupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateContributorInsightsOutcome DynamoDBClient::UpdateContributorInsights(const UpdateContributorInsightsRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateContributorInsights);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateContributorInsights, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateContributorInsights, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateContributorInsights, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateContributorInsights",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateContributorInsightsOutcome>(
    [&]()-> UpdateContributorInsightsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateContributorInsights, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return UpdateContributorInsightsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateGlobalTableOutcome DynamoDBClient::UpdateGlobalTable(const UpdateGlobalTableRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateGlobalTable);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateGlobalTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateGlobalTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateGlobalTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateGlobalTable",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateGlobalTableOutcome>(
    [&]()-> UpdateGlobalTableOutcome {
      ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
      const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value() && m_clientConfiguration.endpointOverride.empty();
      if (enableEndpointDiscovery)
      {
          Aws::String endpointKey = "Shared";
          Aws::String endpoint;
          if (m_endpointsCache.Get(endpointKey, endpoint))
          {
              AWS_LOGSTREAM_TRACE("UpdateGlobalTable", "Making request to cached endpoint: " << endpoint);
              endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + endpoint;
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
                  endpointResolutionOutcome = endpointOutcome.GetError();
              }
          }
      }
      if (!enableEndpointDiscovery || !endpointResolutionOutcome.IsSuccess() || endpointResolutionOutcome.GetResult().GetURL().empty()) {
          endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
              [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
              TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
              *meter,
              {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      }
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateGlobalTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return UpdateGlobalTableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateGlobalTableSettingsOutcome DynamoDBClient::UpdateGlobalTableSettings(const UpdateGlobalTableSettingsRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateGlobalTableSettings);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateGlobalTableSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateGlobalTableSettings, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateGlobalTableSettings, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateGlobalTableSettings",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateGlobalTableSettingsOutcome>(
    [&]()-> UpdateGlobalTableSettingsOutcome {
      ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
      const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value() && m_clientConfiguration.endpointOverride.empty();
      if (enableEndpointDiscovery)
      {
          Aws::String endpointKey = "Shared";
          Aws::String endpoint;
          if (m_endpointsCache.Get(endpointKey, endpoint))
          {
              AWS_LOGSTREAM_TRACE("UpdateGlobalTableSettings", "Making request to cached endpoint: " << endpoint);
              endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + endpoint;
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
                  endpointResolutionOutcome = endpointOutcome.GetError();
              }
          }
      }
      if (!enableEndpointDiscovery || !endpointResolutionOutcome.IsSuccess() || endpointResolutionOutcome.GetResult().GetURL().empty()) {
          endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
              [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
              TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
              *meter,
              {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      }
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateGlobalTableSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return UpdateGlobalTableSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateItemOutcome DynamoDBClient::UpdateItem(const UpdateItemRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateItem);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateItem, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateItem, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateItem",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateItemOutcome>(
    [&]()-> UpdateItemOutcome {
      ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
      const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value() && m_clientConfiguration.endpointOverride.empty();
      if (enableEndpointDiscovery)
      {
          Aws::String endpointKey = "Shared";
          Aws::String endpoint;
          if (m_endpointsCache.Get(endpointKey, endpoint))
          {
              AWS_LOGSTREAM_TRACE("UpdateItem", "Making request to cached endpoint: " << endpoint);
              endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + endpoint;
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
                  endpointResolutionOutcome = endpointOutcome.GetError();
              }
          }
      }
      if (!enableEndpointDiscovery || !endpointResolutionOutcome.IsSuccess() || endpointResolutionOutcome.GetResult().GetURL().empty()) {
          endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
              [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
              TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
              *meter,
              {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      }
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return UpdateItemOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateKinesisStreamingDestinationOutcome DynamoDBClient::UpdateKinesisStreamingDestination(const UpdateKinesisStreamingDestinationRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateKinesisStreamingDestination);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateKinesisStreamingDestination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateKinesisStreamingDestination, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateKinesisStreamingDestination, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateKinesisStreamingDestination",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateKinesisStreamingDestinationOutcome>(
    [&]()-> UpdateKinesisStreamingDestinationOutcome {
      ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
      const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value() && m_clientConfiguration.endpointOverride.empty();
      if (enableEndpointDiscovery)
      {
          Aws::String endpointKey = "Shared";
          Aws::String endpoint;
          if (m_endpointsCache.Get(endpointKey, endpoint))
          {
              AWS_LOGSTREAM_TRACE("UpdateKinesisStreamingDestination", "Making request to cached endpoint: " << endpoint);
              endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + endpoint;
              endpointResolutionOutcome.GetResult().SetURI(endpoint);
          }
          else
          {
              AWS_LOGSTREAM_TRACE("UpdateKinesisStreamingDestination", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
              DescribeEndpointsRequest endpointRequest;
              auto endpointOutcome = DescribeEndpoints(endpointRequest);
              if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
              {
                  const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];

                  m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
                  endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + item.GetAddress();
                  AWS_LOGSTREAM_TRACE("UpdateKinesisStreamingDestination", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
                  endpointResolutionOutcome.GetResult().SetURI(endpoint);
              }
              else
              {
                  AWS_LOGSTREAM_ERROR("UpdateKinesisStreamingDestination", "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
                  endpointResolutionOutcome = endpointOutcome.GetError();
              }
          }
      }
      if (!enableEndpointDiscovery || !endpointResolutionOutcome.IsSuccess() || endpointResolutionOutcome.GetResult().GetURL().empty()) {
          endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
              [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
              TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
              *meter,
              {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      }
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateKinesisStreamingDestination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return UpdateKinesisStreamingDestinationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateTableOutcome DynamoDBClient::UpdateTable(const UpdateTableRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateTable);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateTable",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateTableOutcome>(
    [&]()-> UpdateTableOutcome {
      ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
      const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value() && m_clientConfiguration.endpointOverride.empty();
      if (enableEndpointDiscovery)
      {
          Aws::String endpointKey = "Shared";
          Aws::String endpoint;
          if (m_endpointsCache.Get(endpointKey, endpoint))
          {
              AWS_LOGSTREAM_TRACE("UpdateTable", "Making request to cached endpoint: " << endpoint);
              endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + endpoint;
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
                  endpointResolutionOutcome = endpointOutcome.GetError();
              }
          }
      }
      if (!enableEndpointDiscovery || !endpointResolutionOutcome.IsSuccess() || endpointResolutionOutcome.GetResult().GetURL().empty()) {
          endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
              [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
              TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
              *meter,
              {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      }
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return UpdateTableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateTableReplicaAutoScalingOutcome DynamoDBClient::UpdateTableReplicaAutoScaling(const UpdateTableReplicaAutoScalingRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateTableReplicaAutoScaling);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateTableReplicaAutoScaling, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateTableReplicaAutoScaling, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateTableReplicaAutoScaling, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateTableReplicaAutoScaling",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateTableReplicaAutoScalingOutcome>(
    [&]()-> UpdateTableReplicaAutoScalingOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateTableReplicaAutoScaling, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return UpdateTableReplicaAutoScalingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateTimeToLiveOutcome DynamoDBClient::UpdateTimeToLive(const UpdateTimeToLiveRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateTimeToLive);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateTimeToLive, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateTimeToLive, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateTimeToLive, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateTimeToLive",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateTimeToLiveOutcome>(
    [&]()-> UpdateTimeToLiveOutcome {
      ResolveEndpointOutcome endpointResolutionOutcome = Aws::Endpoint::AWSEndpoint();
      const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value() && m_clientConfiguration.endpointOverride.empty();
      if (enableEndpointDiscovery)
      {
          Aws::String endpointKey = "Shared";
          Aws::String endpoint;
          if (m_endpointsCache.Get(endpointKey, endpoint))
          {
              AWS_LOGSTREAM_TRACE("UpdateTimeToLive", "Making request to cached endpoint: " << endpoint);
              endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + endpoint;
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
                  endpointResolutionOutcome = endpointOutcome.GetError();
              }
          }
      }
      if (!enableEndpointDiscovery || !endpointResolutionOutcome.IsSuccess() || endpointResolutionOutcome.GetResult().GetURL().empty()) {
          endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
              [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
              TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
              *meter,
              {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      }
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateTimeToLive, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      return UpdateTimeToLiveOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

