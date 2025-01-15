/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
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
#include <aws/dynamodb/model/DeleteResourcePolicyRequest.h>
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
#include <aws/dynamodb/model/GetResourcePolicyRequest.h>
#include <aws/dynamodb/model/ImportTableRequest.h>
#include <aws/dynamodb/model/ListBackupsRequest.h>
#include <aws/dynamodb/model/ListContributorInsightsRequest.h>
#include <aws/dynamodb/model/ListExportsRequest.h>
#include <aws/dynamodb/model/ListGlobalTablesRequest.h>
#include <aws/dynamodb/model/ListImportsRequest.h>
#include <aws/dynamodb/model/ListTablesRequest.h>
#include <aws/dynamodb/model/ListTagsOfResourceRequest.h>
#include <aws/dynamodb/model/PutItemRequest.h>
#include <aws/dynamodb/model/PutResourcePolicyRequest.h>
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

#include <smithy/identity/resolver/built-in/SimpleAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/DefaultAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/AwsCredentialsProviderIdentityResolver.h>

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
    const char ALLOCATION_TAG[] = "DynamoDBClient";
    const char SERVICE_NAME[] = "dynamodb";
  }
}
const char* DynamoDBClient::GetServiceName() {return SERVICE_NAME;}
const char* DynamoDBClient::GetAllocationTag() {return ALLOCATION_TAG;}

DynamoDBClient::DynamoDBClient(const DynamoDB::DynamoDBClientConfiguration& clientConfiguration,
                           std::shared_ptr<DynamoDBEndpointProviderBase> endpointProvider) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "DynamoDB",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<DynamoDBErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<DynamoDBEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region}},
        })
{}

DynamoDBClient::DynamoDBClient(const AWSCredentials& credentials,
                           std::shared_ptr<DynamoDBEndpointProviderBase> endpointProvider,
                           const DynamoDB::DynamoDBClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "DynamoDB",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<DynamoDBErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<DynamoDBEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}},
        })
{}

DynamoDBClient::DynamoDBClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<DynamoDBEndpointProviderBase> endpointProvider,
                           const DynamoDB::DynamoDBClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "DynamoDB",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<DynamoDBErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<DynamoDBEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{ Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}

/* Legacy constructors due deprecation */
DynamoDBClient::DynamoDBClient(const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
      GetServiceName(),
      "DynamoDB",
      Aws::Http::CreateHttpClient(clientConfiguration),
      Aws::MakeShared<DynamoDBErrorMarshaller>(ALLOCATION_TAG),
      Aws::MakeShared<DynamoDBEndpointProvider>(ALLOCATION_TAG),
      Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
      {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::DefaultAwsCredentialIdentityResolver>(ALLOCATION_TAG), GetServiceName(), clientConfiguration.region}}
      })
{}

DynamoDBClient::DynamoDBClient(const AWSCredentials& credentials,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "DynamoDB",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<DynamoDBErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<DynamoDBEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}}
        })
{}

DynamoDBClient::DynamoDBClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "DynamoDB",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<DynamoDBErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<DynamoDBEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}
/* End of legacy constructors due deprecation */

DynamoDBClient::~DynamoDBClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<DynamoDBEndpointProviderBase>& DynamoDBClient::accessEndpointProvider()
{
  return m_endpointProvider;
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, BatchExecuteStatement, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, BatchExecuteStatement, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".BatchExecuteStatement",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<BatchExecuteStatementOutcome>(
    [&]()-> BatchExecuteStatementOutcome {
      return BatchExecuteStatementOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

BatchGetItemOutcome DynamoDBClient::BatchGetItem(const BatchGetItemRequest& request) const
{
  AWS_OPERATION_GUARD(BatchGetItem);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchGetItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, BatchGetItem, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, BatchGetItem, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".BatchGetItem",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<BatchGetItemOutcome>(
    [&]()-> BatchGetItemOutcome {
      return BatchGetItemOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    Aws::String endpointKey{"Shared"};
    DescribeEndpointsRequest endpointRequest{};
    this->OptionallyUpdateDescribeEndpointsCache(resolvedEndpoint, request.GetServiceRequestName(), endpointKey, endpointRequest, false);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

BatchWriteItemOutcome DynamoDBClient::BatchWriteItem(const BatchWriteItemRequest& request) const
{
  AWS_OPERATION_GUARD(BatchWriteItem);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchWriteItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, BatchWriteItem, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, BatchWriteItem, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".BatchWriteItem",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<BatchWriteItemOutcome>(
    [&]()-> BatchWriteItemOutcome {
      return BatchWriteItemOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    Aws::String endpointKey{"Shared"};
    DescribeEndpointsRequest endpointRequest{};
    this->OptionallyUpdateDescribeEndpointsCache(resolvedEndpoint, request.GetServiceRequestName(), endpointKey, endpointRequest, false);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateBackupOutcome DynamoDBClient::CreateBackup(const CreateBackupRequest& request) const
{
  AWS_OPERATION_GUARD(CreateBackup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateBackup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateBackup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateBackup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateBackup",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateBackupOutcome>(
    [&]()-> CreateBackupOutcome {
      return CreateBackupOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    Aws::String endpointKey{"Shared"};
    DescribeEndpointsRequest endpointRequest{};
    this->OptionallyUpdateDescribeEndpointsCache(resolvedEndpoint, request.GetServiceRequestName(), endpointKey, endpointRequest, false);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateGlobalTableOutcome DynamoDBClient::CreateGlobalTable(const CreateGlobalTableRequest& request) const
{
  AWS_OPERATION_GUARD(CreateGlobalTable);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateGlobalTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateGlobalTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateGlobalTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateGlobalTable",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateGlobalTableOutcome>(
    [&]()-> CreateGlobalTableOutcome {
      return CreateGlobalTableOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    Aws::String endpointKey{"Shared"};
    DescribeEndpointsRequest endpointRequest{};
    this->OptionallyUpdateDescribeEndpointsCache(resolvedEndpoint, request.GetServiceRequestName(), endpointKey, endpointRequest, false);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateTableOutcome DynamoDBClient::CreateTable(const CreateTableRequest& request) const
{
  AWS_OPERATION_GUARD(CreateTable);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateTable",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateTableOutcome>(
    [&]()-> CreateTableOutcome {
      return CreateTableOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    Aws::String endpointKey{"Shared"};
    DescribeEndpointsRequest endpointRequest{};
    this->OptionallyUpdateDescribeEndpointsCache(resolvedEndpoint, request.GetServiceRequestName(), endpointKey, endpointRequest, false);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteBackupOutcome DynamoDBClient::DeleteBackup(const DeleteBackupRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteBackup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBackup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteBackup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteBackup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteBackup",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteBackupOutcome>(
    [&]()-> DeleteBackupOutcome {
      return DeleteBackupOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    Aws::String endpointKey{"Shared"};
    DescribeEndpointsRequest endpointRequest{};
    this->OptionallyUpdateDescribeEndpointsCache(resolvedEndpoint, request.GetServiceRequestName(), endpointKey, endpointRequest, false);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteItemOutcome DynamoDBClient::DeleteItem(const DeleteItemRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteItem);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteItem, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteItem, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteItem",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteItemOutcome>(
    [&]()-> DeleteItemOutcome {
      return DeleteItemOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    Aws::String endpointKey{"Shared"};
    DescribeEndpointsRequest endpointRequest{};
    this->OptionallyUpdateDescribeEndpointsCache(resolvedEndpoint, request.GetServiceRequestName(), endpointKey, endpointRequest, false);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteResourcePolicyOutcome DynamoDBClient::DeleteResourcePolicy(const DeleteResourcePolicyRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteResourcePolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteResourcePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteResourcePolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteResourcePolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteResourcePolicy",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteResourcePolicyOutcome>(
    [&]()-> DeleteResourcePolicyOutcome {
      return DeleteResourcePolicyOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    Aws::String endpointKey{"Shared"};
    DescribeEndpointsRequest endpointRequest{};
    this->OptionallyUpdateDescribeEndpointsCache(resolvedEndpoint, request.GetServiceRequestName(), endpointKey, endpointRequest, false);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteTableOutcome DynamoDBClient::DeleteTable(const DeleteTableRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteTable);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteTable",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteTableOutcome>(
    [&]()-> DeleteTableOutcome {
      return DeleteTableOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    Aws::String endpointKey{"Shared"};
    DescribeEndpointsRequest endpointRequest{};
    this->OptionallyUpdateDescribeEndpointsCache(resolvedEndpoint, request.GetServiceRequestName(), endpointKey, endpointRequest, false);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeBackupOutcome DynamoDBClient::DescribeBackup(const DescribeBackupRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeBackup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeBackup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeBackup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeBackup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeBackup",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeBackupOutcome>(
    [&]()-> DescribeBackupOutcome {
      return DescribeBackupOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    Aws::String endpointKey{"Shared"};
    DescribeEndpointsRequest endpointRequest{};
    this->OptionallyUpdateDescribeEndpointsCache(resolvedEndpoint, request.GetServiceRequestName(), endpointKey, endpointRequest, false);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeContinuousBackupsOutcome DynamoDBClient::DescribeContinuousBackups(const DescribeContinuousBackupsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeContinuousBackups);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeContinuousBackups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeContinuousBackups, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeContinuousBackups, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeContinuousBackups",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeContinuousBackupsOutcome>(
    [&]()-> DescribeContinuousBackupsOutcome {
      return DescribeContinuousBackupsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    Aws::String endpointKey{"Shared"};
    DescribeEndpointsRequest endpointRequest{};
    this->OptionallyUpdateDescribeEndpointsCache(resolvedEndpoint, request.GetServiceRequestName(), endpointKey, endpointRequest, false);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeContributorInsightsOutcome DynamoDBClient::DescribeContributorInsights(const DescribeContributorInsightsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeContributorInsights);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeContributorInsights, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeContributorInsights, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeContributorInsights, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeContributorInsights",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeContributorInsightsOutcome>(
    [&]()-> DescribeContributorInsightsOutcome {
      return DescribeContributorInsightsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeEndpointsOutcome DynamoDBClient::DescribeEndpoints(const DescribeEndpointsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeEndpoints);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeEndpoints, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeEndpoints, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeEndpoints",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeEndpointsOutcome>(
    [&]()-> DescribeEndpointsOutcome {
      return DescribeEndpointsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeExportOutcome DynamoDBClient::DescribeExport(const DescribeExportRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeExport);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeExport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeExport, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeExport, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeExport",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeExportOutcome>(
    [&]()-> DescribeExportOutcome {
      return DescribeExportOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeGlobalTableOutcome DynamoDBClient::DescribeGlobalTable(const DescribeGlobalTableRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeGlobalTable);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeGlobalTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeGlobalTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeGlobalTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeGlobalTable",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeGlobalTableOutcome>(
    [&]()-> DescribeGlobalTableOutcome {
      return DescribeGlobalTableOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    Aws::String endpointKey{"Shared"};
    DescribeEndpointsRequest endpointRequest{};
    this->OptionallyUpdateDescribeEndpointsCache(resolvedEndpoint, request.GetServiceRequestName(), endpointKey, endpointRequest, false);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeGlobalTableSettingsOutcome DynamoDBClient::DescribeGlobalTableSettings(const DescribeGlobalTableSettingsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeGlobalTableSettings);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeGlobalTableSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeGlobalTableSettings, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeGlobalTableSettings, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeGlobalTableSettings",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeGlobalTableSettingsOutcome>(
    [&]()-> DescribeGlobalTableSettingsOutcome {
      return DescribeGlobalTableSettingsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    Aws::String endpointKey{"Shared"};
    DescribeEndpointsRequest endpointRequest{};
    this->OptionallyUpdateDescribeEndpointsCache(resolvedEndpoint, request.GetServiceRequestName(), endpointKey, endpointRequest, false);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeImportOutcome DynamoDBClient::DescribeImport(const DescribeImportRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeImport);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeImport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeImport, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeImport, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeImport",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeImportOutcome>(
    [&]()-> DescribeImportOutcome {
      return DescribeImportOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeKinesisStreamingDestinationOutcome DynamoDBClient::DescribeKinesisStreamingDestination(const DescribeKinesisStreamingDestinationRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeKinesisStreamingDestination);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeKinesisStreamingDestination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeKinesisStreamingDestination, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeKinesisStreamingDestination, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeKinesisStreamingDestination",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeKinesisStreamingDestinationOutcome>(
    [&]()-> DescribeKinesisStreamingDestinationOutcome {
      return DescribeKinesisStreamingDestinationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    Aws::String endpointKey{"Shared"};
    DescribeEndpointsRequest endpointRequest{};
    this->OptionallyUpdateDescribeEndpointsCache(resolvedEndpoint, request.GetServiceRequestName(), endpointKey, endpointRequest, false);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeLimitsOutcome DynamoDBClient::DescribeLimits(const DescribeLimitsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeLimits);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeLimits, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeLimits, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeLimits, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeLimits",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeLimitsOutcome>(
    [&]()-> DescribeLimitsOutcome {
      return DescribeLimitsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    Aws::String endpointKey{"Shared"};
    DescribeEndpointsRequest endpointRequest{};
    this->OptionallyUpdateDescribeEndpointsCache(resolvedEndpoint, request.GetServiceRequestName(), endpointKey, endpointRequest, false);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeTableOutcome DynamoDBClient::DescribeTable(const DescribeTableRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeTable);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeTable",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeTableOutcome>(
    [&]()-> DescribeTableOutcome {
      return DescribeTableOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    Aws::String endpointKey{"Shared"};
    DescribeEndpointsRequest endpointRequest{};
    this->OptionallyUpdateDescribeEndpointsCache(resolvedEndpoint, request.GetServiceRequestName(), endpointKey, endpointRequest, false);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeTableReplicaAutoScalingOutcome DynamoDBClient::DescribeTableReplicaAutoScaling(const DescribeTableReplicaAutoScalingRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeTableReplicaAutoScaling);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTableReplicaAutoScaling, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeTableReplicaAutoScaling, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeTableReplicaAutoScaling, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeTableReplicaAutoScaling",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeTableReplicaAutoScalingOutcome>(
    [&]()-> DescribeTableReplicaAutoScalingOutcome {
      return DescribeTableReplicaAutoScalingOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeTimeToLiveOutcome DynamoDBClient::DescribeTimeToLive(const DescribeTimeToLiveRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeTimeToLive);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTimeToLive, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeTimeToLive, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeTimeToLive, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeTimeToLive",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeTimeToLiveOutcome>(
    [&]()-> DescribeTimeToLiveOutcome {
      return DescribeTimeToLiveOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    Aws::String endpointKey{"Shared"};
    DescribeEndpointsRequest endpointRequest{};
    this->OptionallyUpdateDescribeEndpointsCache(resolvedEndpoint, request.GetServiceRequestName(), endpointKey, endpointRequest, false);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DisableKinesisStreamingDestinationOutcome DynamoDBClient::DisableKinesisStreamingDestination(const DisableKinesisStreamingDestinationRequest& request) const
{
  AWS_OPERATION_GUARD(DisableKinesisStreamingDestination);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisableKinesisStreamingDestination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DisableKinesisStreamingDestination, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DisableKinesisStreamingDestination, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DisableKinesisStreamingDestination",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DisableKinesisStreamingDestinationOutcome>(
    [&]()-> DisableKinesisStreamingDestinationOutcome {
      return DisableKinesisStreamingDestinationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    Aws::String endpointKey{"Shared"};
    DescribeEndpointsRequest endpointRequest{};
    this->OptionallyUpdateDescribeEndpointsCache(resolvedEndpoint, request.GetServiceRequestName(), endpointKey, endpointRequest, false);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

EnableKinesisStreamingDestinationOutcome DynamoDBClient::EnableKinesisStreamingDestination(const EnableKinesisStreamingDestinationRequest& request) const
{
  AWS_OPERATION_GUARD(EnableKinesisStreamingDestination);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, EnableKinesisStreamingDestination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, EnableKinesisStreamingDestination, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, EnableKinesisStreamingDestination, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".EnableKinesisStreamingDestination",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<EnableKinesisStreamingDestinationOutcome>(
    [&]()-> EnableKinesisStreamingDestinationOutcome {
      return EnableKinesisStreamingDestinationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    Aws::String endpointKey{"Shared"};
    DescribeEndpointsRequest endpointRequest{};
    this->OptionallyUpdateDescribeEndpointsCache(resolvedEndpoint, request.GetServiceRequestName(), endpointKey, endpointRequest, false);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ExecuteStatementOutcome DynamoDBClient::ExecuteStatement(const ExecuteStatementRequest& request) const
{
  AWS_OPERATION_GUARD(ExecuteStatement);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ExecuteStatement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ExecuteStatement, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ExecuteStatement, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ExecuteStatement",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ExecuteStatementOutcome>(
    [&]()-> ExecuteStatementOutcome {
      return ExecuteStatementOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ExecuteTransactionOutcome DynamoDBClient::ExecuteTransaction(const ExecuteTransactionRequest& request) const
{
  AWS_OPERATION_GUARD(ExecuteTransaction);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ExecuteTransaction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ExecuteTransaction, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ExecuteTransaction, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ExecuteTransaction",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ExecuteTransactionOutcome>(
    [&]()-> ExecuteTransactionOutcome {
      return ExecuteTransactionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ExportTableToPointInTimeOutcome DynamoDBClient::ExportTableToPointInTime(const ExportTableToPointInTimeRequest& request) const
{
  AWS_OPERATION_GUARD(ExportTableToPointInTime);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ExportTableToPointInTime, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ExportTableToPointInTime, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ExportTableToPointInTime, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ExportTableToPointInTime",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ExportTableToPointInTimeOutcome>(
    [&]()-> ExportTableToPointInTimeOutcome {
      return ExportTableToPointInTimeOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetItemOutcome DynamoDBClient::GetItem(const GetItemRequest& request) const
{
  AWS_OPERATION_GUARD(GetItem);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetItem, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetItem, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetItem",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetItemOutcome>(
    [&]()-> GetItemOutcome {
      return GetItemOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    Aws::String endpointKey{"Shared"};
    DescribeEndpointsRequest endpointRequest{};
    this->OptionallyUpdateDescribeEndpointsCache(resolvedEndpoint, request.GetServiceRequestName(), endpointKey, endpointRequest, false);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetResourcePolicyOutcome DynamoDBClient::GetResourcePolicy(const GetResourcePolicyRequest& request) const
{
  AWS_OPERATION_GUARD(GetResourcePolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetResourcePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetResourcePolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetResourcePolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetResourcePolicy",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetResourcePolicyOutcome>(
    [&]()-> GetResourcePolicyOutcome {
      return GetResourcePolicyOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    Aws::String endpointKey{"Shared"};
    DescribeEndpointsRequest endpointRequest{};
    this->OptionallyUpdateDescribeEndpointsCache(resolvedEndpoint, request.GetServiceRequestName(), endpointKey, endpointRequest, false);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ImportTableOutcome DynamoDBClient::ImportTable(const ImportTableRequest& request) const
{
  AWS_OPERATION_GUARD(ImportTable);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ImportTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ImportTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ImportTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ImportTable",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ImportTableOutcome>(
    [&]()-> ImportTableOutcome {
      return ImportTableOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListBackupsOutcome DynamoDBClient::ListBackups(const ListBackupsRequest& request) const
{
  AWS_OPERATION_GUARD(ListBackups);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBackups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListBackups, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListBackups, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListBackups",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListBackupsOutcome>(
    [&]()-> ListBackupsOutcome {
      return ListBackupsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    Aws::String endpointKey{"Shared"};
    DescribeEndpointsRequest endpointRequest{};
    this->OptionallyUpdateDescribeEndpointsCache(resolvedEndpoint, request.GetServiceRequestName(), endpointKey, endpointRequest, false);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListContributorInsightsOutcome DynamoDBClient::ListContributorInsights(const ListContributorInsightsRequest& request) const
{
  AWS_OPERATION_GUARD(ListContributorInsights);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListContributorInsights, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListContributorInsights, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListContributorInsights, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListContributorInsights",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListContributorInsightsOutcome>(
    [&]()-> ListContributorInsightsOutcome {
      return ListContributorInsightsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListExportsOutcome DynamoDBClient::ListExports(const ListExportsRequest& request) const
{
  AWS_OPERATION_GUARD(ListExports);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListExports, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListExports, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListExports, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListExports",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListExportsOutcome>(
    [&]()-> ListExportsOutcome {
      return ListExportsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListGlobalTablesOutcome DynamoDBClient::ListGlobalTables(const ListGlobalTablesRequest& request) const
{
  AWS_OPERATION_GUARD(ListGlobalTables);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListGlobalTables, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListGlobalTables, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListGlobalTables, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListGlobalTables",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListGlobalTablesOutcome>(
    [&]()-> ListGlobalTablesOutcome {
      return ListGlobalTablesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    Aws::String endpointKey{"Shared"};
    DescribeEndpointsRequest endpointRequest{};
    this->OptionallyUpdateDescribeEndpointsCache(resolvedEndpoint, request.GetServiceRequestName(), endpointKey, endpointRequest, false);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListImportsOutcome DynamoDBClient::ListImports(const ListImportsRequest& request) const
{
  AWS_OPERATION_GUARD(ListImports);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListImports, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListImports, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListImports, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListImports",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListImportsOutcome>(
    [&]()-> ListImportsOutcome {
      return ListImportsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTablesOutcome DynamoDBClient::ListTables(const ListTablesRequest& request) const
{
  AWS_OPERATION_GUARD(ListTables);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTables, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListTables, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTables, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTables",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTablesOutcome>(
    [&]()-> ListTablesOutcome {
      return ListTablesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    Aws::String endpointKey{"Shared"};
    DescribeEndpointsRequest endpointRequest{};
    this->OptionallyUpdateDescribeEndpointsCache(resolvedEndpoint, request.GetServiceRequestName(), endpointKey, endpointRequest, false);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTagsOfResourceOutcome DynamoDBClient::ListTagsOfResource(const ListTagsOfResourceRequest& request) const
{
  AWS_OPERATION_GUARD(ListTagsOfResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsOfResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListTagsOfResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTagsOfResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTagsOfResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTagsOfResourceOutcome>(
    [&]()-> ListTagsOfResourceOutcome {
      return ListTagsOfResourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    Aws::String endpointKey{"Shared"};
    DescribeEndpointsRequest endpointRequest{};
    this->OptionallyUpdateDescribeEndpointsCache(resolvedEndpoint, request.GetServiceRequestName(), endpointKey, endpointRequest, false);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutItemOutcome DynamoDBClient::PutItem(const PutItemRequest& request) const
{
  AWS_OPERATION_GUARD(PutItem);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, PutItem, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutItem, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PutItem",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutItemOutcome>(
    [&]()-> PutItemOutcome {
      return PutItemOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    Aws::String endpointKey{"Shared"};
    DescribeEndpointsRequest endpointRequest{};
    this->OptionallyUpdateDescribeEndpointsCache(resolvedEndpoint, request.GetServiceRequestName(), endpointKey, endpointRequest, false);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutResourcePolicyOutcome DynamoDBClient::PutResourcePolicy(const PutResourcePolicyRequest& request) const
{
  AWS_OPERATION_GUARD(PutResourcePolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutResourcePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, PutResourcePolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutResourcePolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PutResourcePolicy",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutResourcePolicyOutcome>(
    [&]()-> PutResourcePolicyOutcome {
      return PutResourcePolicyOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    Aws::String endpointKey{"Shared"};
    DescribeEndpointsRequest endpointRequest{};
    this->OptionallyUpdateDescribeEndpointsCache(resolvedEndpoint, request.GetServiceRequestName(), endpointKey, endpointRequest, false);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

QueryOutcome DynamoDBClient::Query(const QueryRequest& request) const
{
  AWS_OPERATION_GUARD(Query);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, Query, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, Query, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, Query, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".Query",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<QueryOutcome>(
    [&]()-> QueryOutcome {
      return QueryOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    Aws::String endpointKey{"Shared"};
    DescribeEndpointsRequest endpointRequest{};
    this->OptionallyUpdateDescribeEndpointsCache(resolvedEndpoint, request.GetServiceRequestName(), endpointKey, endpointRequest, false);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

RestoreTableFromBackupOutcome DynamoDBClient::RestoreTableFromBackup(const RestoreTableFromBackupRequest& request) const
{
  AWS_OPERATION_GUARD(RestoreTableFromBackup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RestoreTableFromBackup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, RestoreTableFromBackup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, RestoreTableFromBackup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".RestoreTableFromBackup",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<RestoreTableFromBackupOutcome>(
    [&]()-> RestoreTableFromBackupOutcome {
      return RestoreTableFromBackupOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    Aws::String endpointKey{"Shared"};
    DescribeEndpointsRequest endpointRequest{};
    this->OptionallyUpdateDescribeEndpointsCache(resolvedEndpoint, request.GetServiceRequestName(), endpointKey, endpointRequest, false);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

RestoreTableToPointInTimeOutcome DynamoDBClient::RestoreTableToPointInTime(const RestoreTableToPointInTimeRequest& request) const
{
  AWS_OPERATION_GUARD(RestoreTableToPointInTime);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RestoreTableToPointInTime, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, RestoreTableToPointInTime, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, RestoreTableToPointInTime, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".RestoreTableToPointInTime",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<RestoreTableToPointInTimeOutcome>(
    [&]()-> RestoreTableToPointInTimeOutcome {
      return RestoreTableToPointInTimeOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    Aws::String endpointKey{"Shared"};
    DescribeEndpointsRequest endpointRequest{};
    this->OptionallyUpdateDescribeEndpointsCache(resolvedEndpoint, request.GetServiceRequestName(), endpointKey, endpointRequest, false);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ScanOutcome DynamoDBClient::Scan(const ScanRequest& request) const
{
  AWS_OPERATION_GUARD(Scan);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, Scan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, Scan, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, Scan, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".Scan",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ScanOutcome>(
    [&]()-> ScanOutcome {
      return ScanOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    Aws::String endpointKey{"Shared"};
    DescribeEndpointsRequest endpointRequest{};
    this->OptionallyUpdateDescribeEndpointsCache(resolvedEndpoint, request.GetServiceRequestName(), endpointKey, endpointRequest, false);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TagResourceOutcome DynamoDBClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(TagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".TagResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<TagResourceOutcome>(
    [&]()-> TagResourceOutcome {
      return TagResourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    Aws::String endpointKey{"Shared"};
    DescribeEndpointsRequest endpointRequest{};
    this->OptionallyUpdateDescribeEndpointsCache(resolvedEndpoint, request.GetServiceRequestName(), endpointKey, endpointRequest, false);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TransactGetItemsOutcome DynamoDBClient::TransactGetItems(const TransactGetItemsRequest& request) const
{
  AWS_OPERATION_GUARD(TransactGetItems);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TransactGetItems, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, TransactGetItems, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, TransactGetItems, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".TransactGetItems",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<TransactGetItemsOutcome>(
    [&]()-> TransactGetItemsOutcome {
      return TransactGetItemsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    Aws::String endpointKey{"Shared"};
    DescribeEndpointsRequest endpointRequest{};
    this->OptionallyUpdateDescribeEndpointsCache(resolvedEndpoint, request.GetServiceRequestName(), endpointKey, endpointRequest, false);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TransactWriteItemsOutcome DynamoDBClient::TransactWriteItems(const TransactWriteItemsRequest& request) const
{
  AWS_OPERATION_GUARD(TransactWriteItems);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TransactWriteItems, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, TransactWriteItems, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, TransactWriteItems, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".TransactWriteItems",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<TransactWriteItemsOutcome>(
    [&]()-> TransactWriteItemsOutcome {
      return TransactWriteItemsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    Aws::String endpointKey{"Shared"};
    DescribeEndpointsRequest endpointRequest{};
    this->OptionallyUpdateDescribeEndpointsCache(resolvedEndpoint, request.GetServiceRequestName(), endpointKey, endpointRequest, false);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UntagResourceOutcome DynamoDBClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(UntagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UntagResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UntagResourceOutcome>(
    [&]()-> UntagResourceOutcome {
      return UntagResourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    Aws::String endpointKey{"Shared"};
    DescribeEndpointsRequest endpointRequest{};
    this->OptionallyUpdateDescribeEndpointsCache(resolvedEndpoint, request.GetServiceRequestName(), endpointKey, endpointRequest, false);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateContinuousBackupsOutcome DynamoDBClient::UpdateContinuousBackups(const UpdateContinuousBackupsRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateContinuousBackups);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateContinuousBackups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateContinuousBackups, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateContinuousBackups, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateContinuousBackups",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateContinuousBackupsOutcome>(
    [&]()-> UpdateContinuousBackupsOutcome {
      return UpdateContinuousBackupsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    Aws::String endpointKey{"Shared"};
    DescribeEndpointsRequest endpointRequest{};
    this->OptionallyUpdateDescribeEndpointsCache(resolvedEndpoint, request.GetServiceRequestName(), endpointKey, endpointRequest, false);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateContributorInsightsOutcome DynamoDBClient::UpdateContributorInsights(const UpdateContributorInsightsRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateContributorInsights);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateContributorInsights, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateContributorInsights, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateContributorInsights, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateContributorInsights",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateContributorInsightsOutcome>(
    [&]()-> UpdateContributorInsightsOutcome {
      return UpdateContributorInsightsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateGlobalTableOutcome DynamoDBClient::UpdateGlobalTable(const UpdateGlobalTableRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateGlobalTable);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateGlobalTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateGlobalTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateGlobalTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateGlobalTable",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateGlobalTableOutcome>(
    [&]()-> UpdateGlobalTableOutcome {
      return UpdateGlobalTableOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    Aws::String endpointKey{"Shared"};
    DescribeEndpointsRequest endpointRequest{};
    this->OptionallyUpdateDescribeEndpointsCache(resolvedEndpoint, request.GetServiceRequestName(), endpointKey, endpointRequest, false);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateGlobalTableSettingsOutcome DynamoDBClient::UpdateGlobalTableSettings(const UpdateGlobalTableSettingsRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateGlobalTableSettings);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateGlobalTableSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateGlobalTableSettings, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateGlobalTableSettings, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateGlobalTableSettings",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateGlobalTableSettingsOutcome>(
    [&]()-> UpdateGlobalTableSettingsOutcome {
      return UpdateGlobalTableSettingsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    Aws::String endpointKey{"Shared"};
    DescribeEndpointsRequest endpointRequest{};
    this->OptionallyUpdateDescribeEndpointsCache(resolvedEndpoint, request.GetServiceRequestName(), endpointKey, endpointRequest, false);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateItemOutcome DynamoDBClient::UpdateItem(const UpdateItemRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateItem);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateItem, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateItem, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateItem",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateItemOutcome>(
    [&]()-> UpdateItemOutcome {
      return UpdateItemOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    Aws::String endpointKey{"Shared"};
    DescribeEndpointsRequest endpointRequest{};
    this->OptionallyUpdateDescribeEndpointsCache(resolvedEndpoint, request.GetServiceRequestName(), endpointKey, endpointRequest, false);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateKinesisStreamingDestinationOutcome DynamoDBClient::UpdateKinesisStreamingDestination(const UpdateKinesisStreamingDestinationRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateKinesisStreamingDestination);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateKinesisStreamingDestination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateKinesisStreamingDestination, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateKinesisStreamingDestination, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateKinesisStreamingDestination",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateKinesisStreamingDestinationOutcome>(
    [&]()-> UpdateKinesisStreamingDestinationOutcome {
      return UpdateKinesisStreamingDestinationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    Aws::String endpointKey{"Shared"};
    DescribeEndpointsRequest endpointRequest{};
    this->OptionallyUpdateDescribeEndpointsCache(resolvedEndpoint, request.GetServiceRequestName(), endpointKey, endpointRequest, false);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateTableOutcome DynamoDBClient::UpdateTable(const UpdateTableRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateTable);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateTable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateTable, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateTable",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateTableOutcome>(
    [&]()-> UpdateTableOutcome {
      return UpdateTableOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    Aws::String endpointKey{"Shared"};
    DescribeEndpointsRequest endpointRequest{};
    this->OptionallyUpdateDescribeEndpointsCache(resolvedEndpoint, request.GetServiceRequestName(), endpointKey, endpointRequest, false);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateTableReplicaAutoScalingOutcome DynamoDBClient::UpdateTableReplicaAutoScaling(const UpdateTableReplicaAutoScalingRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateTableReplicaAutoScaling);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateTableReplicaAutoScaling, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateTableReplicaAutoScaling, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateTableReplicaAutoScaling, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateTableReplicaAutoScaling",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateTableReplicaAutoScalingOutcome>(
    [&]()-> UpdateTableReplicaAutoScalingOutcome {
      return UpdateTableReplicaAutoScalingOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateTimeToLiveOutcome DynamoDBClient::UpdateTimeToLive(const UpdateTimeToLiveRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateTimeToLive);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateTimeToLive, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateTimeToLive, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateTimeToLive, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateTimeToLive",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateTimeToLiveOutcome>(
    [&]()-> UpdateTimeToLiveOutcome {
      return UpdateTimeToLiveOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    Aws::String endpointKey{"Shared"};
    DescribeEndpointsRequest endpointRequest{};
    this->OptionallyUpdateDescribeEndpointsCache(resolvedEndpoint, request.GetServiceRequestName(), endpointKey, endpointRequest, false);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}


void DynamoDBClient::OptionallyUpdateDescribeEndpointsCache(Aws::Endpoint::AWSEndpoint& resolvedEndpoint,
    const Aws::String& operationName,
    const Aws::String& endpointKey,
    const Aws::DynamoDB::Model::DescribeEndpointsRequest& endpointRequest,
    bool enforceDiscovery) const
{
  const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery && m_clientConfiguration.enableEndpointDiscovery.value() && m_clientConfiguration.endpointOverride.empty();
  if (enableEndpointDiscovery)
  {
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
       AWS_LOGSTREAM_TRACE(operationName.c_str(), "Making request to cached endpoint: " << endpoint);
       endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + endpoint;
       resolvedEndpoint.SetURI(endpoint);
    }
    else
    {
      AWS_LOGSTREAM_TRACE(operationName.c_str(), "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
      auto endpointOutcome = DescribeEndpoints(endpointRequest);
      if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
      {
         const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];
         m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
         endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + item.GetAddress();
         AWS_LOGSTREAM_TRACE(operationName.c_str(), "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
         resolvedEndpoint.SetURI(endpoint);
      }
      else
      {
         if(enforceDiscovery)
         {
            AWS_LOGSTREAM_ERROR(operationName.c_str(), "Failed to discover endpoints " << endpointOutcome.GetError());
         }
         else
         {
            AWS_LOGSTREAM_ERROR(operationName.c_str(), "Failed to discover endpoints " << endpointOutcome.GetError() << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
         }
      }
    }
  }
}
