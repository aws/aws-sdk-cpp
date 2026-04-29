/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/platform/Environment.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/dynamodb/DynamoDBClient.h>
#include <aws/dynamodb/DynamoDBEndpointProvider.h>
#include <aws/dynamodb/DynamoDBErrorMarshaller.h>
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
#include <aws/dynamodb/model/DescribeTableReplicaAutoScalingRequest.h>
#include <aws/dynamodb/model/DescribeTableRequest.h>
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
#include <aws/dynamodb/model/UpdateTableReplicaAutoScalingRequest.h>
#include <aws/dynamodb/model/UpdateTableRequest.h>
#include <aws/dynamodb/model/UpdateTimeToLiveRequest.h>
#include <smithy/identity/resolver/built-in/AwsCredentialsProviderIdentityResolver.h>
#include <smithy/identity/resolver/built-in/DefaultAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/SimpleAwsCredentialIdentityResolver.h>
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

namespace Aws {
namespace DynamoDB {
const char ALLOCATION_TAG[] = "DynamoDBClient";
const char SERVICE_NAME[] = "dynamodb";
}  // namespace DynamoDB
}  // namespace Aws
const char* DynamoDBClient::GetServiceName() { return SERVICE_NAME; }
const char* DynamoDBClient::GetAllocationTag() { return ALLOCATION_TAG; }

DynamoDBClient::DynamoDBClient(const DynamoDB::DynamoDBClientConfiguration& clientConfiguration,
                               std::shared_ptr<DynamoDBEndpointProviderBase> endpointProvider)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "DynamoDB", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<DynamoDBErrorMarshaller>(ALLOCATION_TAG),
          endpointProvider ? endpointProvider : Aws::MakeShared<DynamoDBEndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region, clientConfiguration.credentialProviderConfig}},
          }) {}

DynamoDBClient::DynamoDBClient(const AWSCredentials& credentials, std::shared_ptr<DynamoDBEndpointProviderBase> endpointProvider,
                               const DynamoDB::DynamoDBClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "DynamoDB", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<DynamoDBErrorMarshaller>(ALLOCATION_TAG),
          endpointProvider ? endpointProvider : Aws::MakeShared<DynamoDBEndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials),
                                       GetServiceName(), clientConfiguration.region}},
          }) {}

DynamoDBClient::DynamoDBClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<DynamoDBEndpointProviderBase> endpointProvider,
                               const DynamoDB::DynamoDBClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "DynamoDB", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<DynamoDBErrorMarshaller>(ALLOCATION_TAG),
          endpointProvider ? endpointProvider : Aws::MakeShared<DynamoDBEndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider),
                                       GetServiceName(), clientConfiguration.region}},
          }) {}

/* Legacy constructors due deprecation */
DynamoDBClient::DynamoDBClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "DynamoDB", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<DynamoDBErrorMarshaller>(ALLOCATION_TAG), Aws::MakeShared<DynamoDBEndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region, clientConfiguration.credentialProviderConfig}},
          }) {}

DynamoDBClient::DynamoDBClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "DynamoDB", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<DynamoDBErrorMarshaller>(ALLOCATION_TAG), Aws::MakeShared<DynamoDBEndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials),
                                       GetServiceName(), clientConfiguration.region}},
          }) {}

DynamoDBClient::DynamoDBClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "DynamoDB", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<DynamoDBErrorMarshaller>(ALLOCATION_TAG), Aws::MakeShared<DynamoDBEndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider),
                                       GetServiceName(), clientConfiguration.region}},
          }) {}
/* End of legacy constructors due deprecation */

DynamoDBClient::~DynamoDBClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<DynamoDBEndpointProviderBase>& DynamoDBClient::accessEndpointProvider() { return m_endpointProvider; }

void DynamoDBClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
DynamoDBClient::InvokeOperationOutcome DynamoDBClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
                                                                              Aws::Http::HttpMethod httpMethod) const {
  auto operationName = request.GetServiceRequestName();
  auto serviceName = GetServiceClientName();

  AWS_OPERATION_GUARD_DYNAMIC(operationName);

  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_clientConfiguration.telemetryProvider, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(serviceName, {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(serviceName, {});
  AWS_OPERATION_CHECK_PTR_DYNAMIC(meter, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto span = tracer->CreateSpan(Aws::String(serviceName) + "." + operationName,
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);

  return TracingUtils::MakeCallWithTiming<InvokeOperationOutcome>(
      [&]() -> InvokeOperationOutcome {
        auto result =
            MakeRequestDeserialize(&request, operationName, httpMethod,
                                   [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void { AWS_UNREFERENCED_PARAM(resolvedEndpoint); });
        return result.IsSuccess() ? InvokeOperationOutcome(result.GetResultWithOwnership())
                                  : InvokeOperationOutcome(std::move(result.GetError()));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}
BatchExecuteStatementOutcome DynamoDBClient::BatchExecuteStatement(const BatchExecuteStatementRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchExecuteStatementOutcome(result.GetResultWithOwnership())
                            : BatchExecuteStatementOutcome(std::move(result.GetError()));
}
BatchGetItemOutcome DynamoDBClient::BatchGetItem(const BatchGetItemRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchGetItemOutcome(result.GetResultWithOwnership()) : BatchGetItemOutcome(std::move(result.GetError()));
}
BatchWriteItemOutcome DynamoDBClient::BatchWriteItem(const BatchWriteItemRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchWriteItemOutcome(result.GetResultWithOwnership()) : BatchWriteItemOutcome(std::move(result.GetError()));
}
CreateBackupOutcome DynamoDBClient::CreateBackup(const CreateBackupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateBackupOutcome(result.GetResultWithOwnership()) : CreateBackupOutcome(std::move(result.GetError()));
}
CreateGlobalTableOutcome DynamoDBClient::CreateGlobalTable(const CreateGlobalTableRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateGlobalTableOutcome(result.GetResultWithOwnership())
                            : CreateGlobalTableOutcome(std::move(result.GetError()));
}
CreateTableOutcome DynamoDBClient::CreateTable(const CreateTableRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateTableOutcome(result.GetResultWithOwnership()) : CreateTableOutcome(std::move(result.GetError()));
}
DeleteBackupOutcome DynamoDBClient::DeleteBackup(const DeleteBackupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteBackupOutcome(result.GetResultWithOwnership()) : DeleteBackupOutcome(std::move(result.GetError()));
}
DeleteItemOutcome DynamoDBClient::DeleteItem(const DeleteItemRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteItemOutcome(result.GetResultWithOwnership()) : DeleteItemOutcome(std::move(result.GetError()));
}
DeleteResourcePolicyOutcome DynamoDBClient::DeleteResourcePolicy(const DeleteResourcePolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteResourcePolicyOutcome(result.GetResultWithOwnership())
                            : DeleteResourcePolicyOutcome(std::move(result.GetError()));
}
DeleteTableOutcome DynamoDBClient::DeleteTable(const DeleteTableRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteTableOutcome(result.GetResultWithOwnership()) : DeleteTableOutcome(std::move(result.GetError()));
}
DescribeBackupOutcome DynamoDBClient::DescribeBackup(const DescribeBackupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeBackupOutcome(result.GetResultWithOwnership()) : DescribeBackupOutcome(std::move(result.GetError()));
}
DescribeContinuousBackupsOutcome DynamoDBClient::DescribeContinuousBackups(const DescribeContinuousBackupsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeContinuousBackupsOutcome(result.GetResultWithOwnership())
                            : DescribeContinuousBackupsOutcome(std::move(result.GetError()));
}
DescribeContributorInsightsOutcome DynamoDBClient::DescribeContributorInsights(const DescribeContributorInsightsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeContributorInsightsOutcome(result.GetResultWithOwnership())
                            : DescribeContributorInsightsOutcome(std::move(result.GetError()));
}
DescribeEndpointsOutcome DynamoDBClient::DescribeEndpoints(const DescribeEndpointsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeEndpointsOutcome(result.GetResultWithOwnership())
                            : DescribeEndpointsOutcome(std::move(result.GetError()));
}
DescribeExportOutcome DynamoDBClient::DescribeExport(const DescribeExportRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeExportOutcome(result.GetResultWithOwnership()) : DescribeExportOutcome(std::move(result.GetError()));
}
DescribeGlobalTableOutcome DynamoDBClient::DescribeGlobalTable(const DescribeGlobalTableRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeGlobalTableOutcome(result.GetResultWithOwnership())
                            : DescribeGlobalTableOutcome(std::move(result.GetError()));
}
DescribeGlobalTableSettingsOutcome DynamoDBClient::DescribeGlobalTableSettings(const DescribeGlobalTableSettingsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeGlobalTableSettingsOutcome(result.GetResultWithOwnership())
                            : DescribeGlobalTableSettingsOutcome(std::move(result.GetError()));
}
DescribeImportOutcome DynamoDBClient::DescribeImport(const DescribeImportRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeImportOutcome(result.GetResultWithOwnership()) : DescribeImportOutcome(std::move(result.GetError()));
}
DescribeKinesisStreamingDestinationOutcome DynamoDBClient::DescribeKinesisStreamingDestination(
    const DescribeKinesisStreamingDestinationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeKinesisStreamingDestinationOutcome(result.GetResultWithOwnership())
                            : DescribeKinesisStreamingDestinationOutcome(std::move(result.GetError()));
}
DescribeLimitsOutcome DynamoDBClient::DescribeLimits(const DescribeLimitsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeLimitsOutcome(result.GetResultWithOwnership()) : DescribeLimitsOutcome(std::move(result.GetError()));
}
DescribeTableOutcome DynamoDBClient::DescribeTable(const DescribeTableRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeTableOutcome(result.GetResultWithOwnership()) : DescribeTableOutcome(std::move(result.GetError()));
}
DescribeTableReplicaAutoScalingOutcome DynamoDBClient::DescribeTableReplicaAutoScaling(
    const DescribeTableReplicaAutoScalingRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeTableReplicaAutoScalingOutcome(result.GetResultWithOwnership())
                            : DescribeTableReplicaAutoScalingOutcome(std::move(result.GetError()));
}
DescribeTimeToLiveOutcome DynamoDBClient::DescribeTimeToLive(const DescribeTimeToLiveRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeTimeToLiveOutcome(result.GetResultWithOwnership())
                            : DescribeTimeToLiveOutcome(std::move(result.GetError()));
}
DisableKinesisStreamingDestinationOutcome DynamoDBClient::DisableKinesisStreamingDestination(
    const DisableKinesisStreamingDestinationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisableKinesisStreamingDestinationOutcome(result.GetResultWithOwnership())
                            : DisableKinesisStreamingDestinationOutcome(std::move(result.GetError()));
}
EnableKinesisStreamingDestinationOutcome DynamoDBClient::EnableKinesisStreamingDestination(
    const EnableKinesisStreamingDestinationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? EnableKinesisStreamingDestinationOutcome(result.GetResultWithOwnership())
                            : EnableKinesisStreamingDestinationOutcome(std::move(result.GetError()));
}
ExecuteStatementOutcome DynamoDBClient::ExecuteStatement(const ExecuteStatementRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ExecuteStatementOutcome(result.GetResultWithOwnership())
                            : ExecuteStatementOutcome(std::move(result.GetError()));
}
ExecuteTransactionOutcome DynamoDBClient::ExecuteTransaction(const ExecuteTransactionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ExecuteTransactionOutcome(result.GetResultWithOwnership())
                            : ExecuteTransactionOutcome(std::move(result.GetError()));
}
ExportTableToPointInTimeOutcome DynamoDBClient::ExportTableToPointInTime(const ExportTableToPointInTimeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ExportTableToPointInTimeOutcome(result.GetResultWithOwnership())
                            : ExportTableToPointInTimeOutcome(std::move(result.GetError()));
}
GetItemOutcome DynamoDBClient::GetItem(const GetItemRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetItemOutcome(result.GetResultWithOwnership()) : GetItemOutcome(std::move(result.GetError()));
}
GetResourcePolicyOutcome DynamoDBClient::GetResourcePolicy(const GetResourcePolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetResourcePolicyOutcome(result.GetResultWithOwnership())
                            : GetResourcePolicyOutcome(std::move(result.GetError()));
}
ImportTableOutcome DynamoDBClient::ImportTable(const ImportTableRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ImportTableOutcome(result.GetResultWithOwnership()) : ImportTableOutcome(std::move(result.GetError()));
}
ListBackupsOutcome DynamoDBClient::ListBackups(const ListBackupsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListBackupsOutcome(result.GetResultWithOwnership()) : ListBackupsOutcome(std::move(result.GetError()));
}
ListContributorInsightsOutcome DynamoDBClient::ListContributorInsights(const ListContributorInsightsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListContributorInsightsOutcome(result.GetResultWithOwnership())
                            : ListContributorInsightsOutcome(std::move(result.GetError()));
}
ListExportsOutcome DynamoDBClient::ListExports(const ListExportsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListExportsOutcome(result.GetResultWithOwnership()) : ListExportsOutcome(std::move(result.GetError()));
}
ListGlobalTablesOutcome DynamoDBClient::ListGlobalTables(const ListGlobalTablesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListGlobalTablesOutcome(result.GetResultWithOwnership())
                            : ListGlobalTablesOutcome(std::move(result.GetError()));
}
ListImportsOutcome DynamoDBClient::ListImports(const ListImportsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListImportsOutcome(result.GetResultWithOwnership()) : ListImportsOutcome(std::move(result.GetError()));
}
ListTablesOutcome DynamoDBClient::ListTables(const ListTablesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTablesOutcome(result.GetResultWithOwnership()) : ListTablesOutcome(std::move(result.GetError()));
}
ListTagsOfResourceOutcome DynamoDBClient::ListTagsOfResource(const ListTagsOfResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTagsOfResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsOfResourceOutcome(std::move(result.GetError()));
}
PutItemOutcome DynamoDBClient::PutItem(const PutItemRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutItemOutcome(result.GetResultWithOwnership()) : PutItemOutcome(std::move(result.GetError()));
}
PutResourcePolicyOutcome DynamoDBClient::PutResourcePolicy(const PutResourcePolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutResourcePolicyOutcome(result.GetResultWithOwnership())
                            : PutResourcePolicyOutcome(std::move(result.GetError()));
}
QueryOutcome DynamoDBClient::Query(const QueryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? QueryOutcome(result.GetResultWithOwnership()) : QueryOutcome(std::move(result.GetError()));
}
RestoreTableFromBackupOutcome DynamoDBClient::RestoreTableFromBackup(const RestoreTableFromBackupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RestoreTableFromBackupOutcome(result.GetResultWithOwnership())
                            : RestoreTableFromBackupOutcome(std::move(result.GetError()));
}
RestoreTableToPointInTimeOutcome DynamoDBClient::RestoreTableToPointInTime(const RestoreTableToPointInTimeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RestoreTableToPointInTimeOutcome(result.GetResultWithOwnership())
                            : RestoreTableToPointInTimeOutcome(std::move(result.GetError()));
}
ScanOutcome DynamoDBClient::Scan(const ScanRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ScanOutcome(result.GetResultWithOwnership()) : ScanOutcome(std::move(result.GetError()));
}
TagResourceOutcome DynamoDBClient::TagResource(const TagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}
TransactGetItemsOutcome DynamoDBClient::TransactGetItems(const TransactGetItemsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TransactGetItemsOutcome(result.GetResultWithOwnership())
                            : TransactGetItemsOutcome(std::move(result.GetError()));
}
TransactWriteItemsOutcome DynamoDBClient::TransactWriteItems(const TransactWriteItemsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TransactWriteItemsOutcome(result.GetResultWithOwnership())
                            : TransactWriteItemsOutcome(std::move(result.GetError()));
}
UntagResourceOutcome DynamoDBClient::UntagResource(const UntagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}
UpdateContinuousBackupsOutcome DynamoDBClient::UpdateContinuousBackups(const UpdateContinuousBackupsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateContinuousBackupsOutcome(result.GetResultWithOwnership())
                            : UpdateContinuousBackupsOutcome(std::move(result.GetError()));
}
UpdateContributorInsightsOutcome DynamoDBClient::UpdateContributorInsights(const UpdateContributorInsightsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateContributorInsightsOutcome(result.GetResultWithOwnership())
                            : UpdateContributorInsightsOutcome(std::move(result.GetError()));
}
UpdateGlobalTableOutcome DynamoDBClient::UpdateGlobalTable(const UpdateGlobalTableRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateGlobalTableOutcome(result.GetResultWithOwnership())
                            : UpdateGlobalTableOutcome(std::move(result.GetError()));
}
UpdateGlobalTableSettingsOutcome DynamoDBClient::UpdateGlobalTableSettings(const UpdateGlobalTableSettingsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateGlobalTableSettingsOutcome(result.GetResultWithOwnership())
                            : UpdateGlobalTableSettingsOutcome(std::move(result.GetError()));
}
UpdateItemOutcome DynamoDBClient::UpdateItem(const UpdateItemRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateItemOutcome(result.GetResultWithOwnership()) : UpdateItemOutcome(std::move(result.GetError()));
}
UpdateKinesisStreamingDestinationOutcome DynamoDBClient::UpdateKinesisStreamingDestination(
    const UpdateKinesisStreamingDestinationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateKinesisStreamingDestinationOutcome(result.GetResultWithOwnership())
                            : UpdateKinesisStreamingDestinationOutcome(std::move(result.GetError()));
}
UpdateTableOutcome DynamoDBClient::UpdateTable(const UpdateTableRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateTableOutcome(result.GetResultWithOwnership()) : UpdateTableOutcome(std::move(result.GetError()));
}
UpdateTableReplicaAutoScalingOutcome DynamoDBClient::UpdateTableReplicaAutoScaling(
    const UpdateTableReplicaAutoScalingRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateTableReplicaAutoScalingOutcome(result.GetResultWithOwnership())
                            : UpdateTableReplicaAutoScalingOutcome(std::move(result.GetError()));
}
UpdateTimeToLiveOutcome DynamoDBClient::UpdateTimeToLive(const UpdateTimeToLiveRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateTimeToLiveOutcome(result.GetResultWithOwnership())
                            : UpdateTimeToLiveOutcome(std::move(result.GetError()));
}

void DynamoDBClient::OptionallyUpdateDescribeEndpointsCache(Aws::Endpoint::AWSEndpoint& resolvedEndpoint, const Aws::String& operationName,
                                                            const Aws::String& endpointKey,
                                                            const Aws::DynamoDB::Model::DescribeEndpointsRequest& endpointRequest,
                                                            bool enforceDiscovery) const {
  const bool enableEndpointDiscovery = m_clientConfiguration.enableEndpointDiscovery &&
                                       m_clientConfiguration.enableEndpointDiscovery.value() &&
                                       m_clientConfiguration.endpointOverride.empty();
  if (enableEndpointDiscovery) {
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint)) {
      AWS_LOGSTREAM_TRACE(operationName.c_str(), "Making request to cached endpoint: " << endpoint);
      endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + endpoint;
      resolvedEndpoint.SetURI(endpoint);
    } else {
      AWS_LOGSTREAM_TRACE(operationName.c_str(),
                          "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
      auto endpointOutcome = DescribeEndpoints(endpointRequest);
      if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty()) {
        const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];
        m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
        endpoint = Aws::String(SchemeMapper::ToString(m_clientConfiguration.scheme)) + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE(operationName.c_str(),
                            "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes()
                                                                 << " minutes. Making request to newly discovered endpoint.");
        resolvedEndpoint.SetURI(endpoint);
      } else {
        if (enforceDiscovery) {
          AWS_LOGSTREAM_ERROR(operationName.c_str(), "Failed to discover endpoints " << endpointOutcome.GetError());
        } else {
          AWS_LOGSTREAM_ERROR(operationName.c_str(),
                              "Failed to discover endpoints "
                                  << endpointOutcome.GetError()
                                  << "\n Endpoint discovery is not required for this operation, falling back to the regional endpoint.");
        }
      }
    }
  }
}
