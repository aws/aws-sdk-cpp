/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/dms/DatabaseMigrationServiceClient.h>
#include <aws/dms/DatabaseMigrationServiceEndpointProvider.h>
#include <aws/dms/DatabaseMigrationServiceErrorMarshaller.h>
#include <aws/dms/model/AddTagsToResourceRequest.h>
#include <aws/dms/model/ApplyPendingMaintenanceActionRequest.h>
#include <aws/dms/model/BatchStartRecommendationsRequest.h>
#include <aws/dms/model/CancelMetadataModelConversionRequest.h>
#include <aws/dms/model/CancelMetadataModelCreationRequest.h>
#include <aws/dms/model/CancelReplicationTaskAssessmentRunRequest.h>
#include <aws/dms/model/CreateDataMigrationRequest.h>
#include <aws/dms/model/CreateDataProviderRequest.h>
#include <aws/dms/model/CreateEndpointRequest.h>
#include <aws/dms/model/CreateEventSubscriptionRequest.h>
#include <aws/dms/model/CreateFleetAdvisorCollectorRequest.h>
#include <aws/dms/model/CreateInstanceProfileRequest.h>
#include <aws/dms/model/CreateMigrationProjectRequest.h>
#include <aws/dms/model/CreateReplicationConfigRequest.h>
#include <aws/dms/model/CreateReplicationInstanceRequest.h>
#include <aws/dms/model/CreateReplicationSubnetGroupRequest.h>
#include <aws/dms/model/CreateReplicationTaskRequest.h>
#include <aws/dms/model/DeleteCertificateRequest.h>
#include <aws/dms/model/DeleteConnectionRequest.h>
#include <aws/dms/model/DeleteDataMigrationRequest.h>
#include <aws/dms/model/DeleteDataProviderRequest.h>
#include <aws/dms/model/DeleteEndpointRequest.h>
#include <aws/dms/model/DeleteEventSubscriptionRequest.h>
#include <aws/dms/model/DeleteFleetAdvisorCollectorRequest.h>
#include <aws/dms/model/DeleteFleetAdvisorDatabasesRequest.h>
#include <aws/dms/model/DeleteInstanceProfileRequest.h>
#include <aws/dms/model/DeleteMigrationProjectRequest.h>
#include <aws/dms/model/DeleteReplicationConfigRequest.h>
#include <aws/dms/model/DeleteReplicationInstanceRequest.h>
#include <aws/dms/model/DeleteReplicationSubnetGroupRequest.h>
#include <aws/dms/model/DeleteReplicationTaskAssessmentRunRequest.h>
#include <aws/dms/model/DeleteReplicationTaskRequest.h>
#include <aws/dms/model/DescribeAccountAttributesRequest.h>
#include <aws/dms/model/DescribeApplicableIndividualAssessmentsRequest.h>
#include <aws/dms/model/DescribeCertificatesRequest.h>
#include <aws/dms/model/DescribeConnectionsRequest.h>
#include <aws/dms/model/DescribeConversionConfigurationRequest.h>
#include <aws/dms/model/DescribeDataMigrationsRequest.h>
#include <aws/dms/model/DescribeDataProvidersRequest.h>
#include <aws/dms/model/DescribeEndpointSettingsRequest.h>
#include <aws/dms/model/DescribeEndpointTypesRequest.h>
#include <aws/dms/model/DescribeEndpointsRequest.h>
#include <aws/dms/model/DescribeEngineVersionsRequest.h>
#include <aws/dms/model/DescribeEventCategoriesRequest.h>
#include <aws/dms/model/DescribeEventSubscriptionsRequest.h>
#include <aws/dms/model/DescribeEventsRequest.h>
#include <aws/dms/model/DescribeExtensionPackAssociationsRequest.h>
#include <aws/dms/model/DescribeFleetAdvisorCollectorsRequest.h>
#include <aws/dms/model/DescribeFleetAdvisorDatabasesRequest.h>
#include <aws/dms/model/DescribeFleetAdvisorLsaAnalysisRequest.h>
#include <aws/dms/model/DescribeFleetAdvisorSchemaObjectSummaryRequest.h>
#include <aws/dms/model/DescribeFleetAdvisorSchemasRequest.h>
#include <aws/dms/model/DescribeInstanceProfilesRequest.h>
#include <aws/dms/model/DescribeMetadataModelAssessmentsRequest.h>
#include <aws/dms/model/DescribeMetadataModelChildrenRequest.h>
#include <aws/dms/model/DescribeMetadataModelConversionsRequest.h>
#include <aws/dms/model/DescribeMetadataModelCreationsRequest.h>
#include <aws/dms/model/DescribeMetadataModelExportsAsScriptRequest.h>
#include <aws/dms/model/DescribeMetadataModelExportsToTargetRequest.h>
#include <aws/dms/model/DescribeMetadataModelImportsRequest.h>
#include <aws/dms/model/DescribeMetadataModelRequest.h>
#include <aws/dms/model/DescribeMigrationProjectsRequest.h>
#include <aws/dms/model/DescribeOrderableReplicationInstancesRequest.h>
#include <aws/dms/model/DescribePendingMaintenanceActionsRequest.h>
#include <aws/dms/model/DescribeRecommendationLimitationsRequest.h>
#include <aws/dms/model/DescribeRecommendationsRequest.h>
#include <aws/dms/model/DescribeRefreshSchemasStatusRequest.h>
#include <aws/dms/model/DescribeReplicationConfigsRequest.h>
#include <aws/dms/model/DescribeReplicationInstanceTaskLogsRequest.h>
#include <aws/dms/model/DescribeReplicationInstancesRequest.h>
#include <aws/dms/model/DescribeReplicationSubnetGroupsRequest.h>
#include <aws/dms/model/DescribeReplicationTableStatisticsRequest.h>
#include <aws/dms/model/DescribeReplicationTaskAssessmentResultsRequest.h>
#include <aws/dms/model/DescribeReplicationTaskAssessmentRunsRequest.h>
#include <aws/dms/model/DescribeReplicationTaskIndividualAssessmentsRequest.h>
#include <aws/dms/model/DescribeReplicationTasksRequest.h>
#include <aws/dms/model/DescribeReplicationsRequest.h>
#include <aws/dms/model/DescribeSchemasRequest.h>
#include <aws/dms/model/DescribeTableStatisticsRequest.h>
#include <aws/dms/model/ExportMetadataModelAssessmentRequest.h>
#include <aws/dms/model/GetTargetSelectionRulesRequest.h>
#include <aws/dms/model/ImportCertificateRequest.h>
#include <aws/dms/model/ListTagsForResourceRequest.h>
#include <aws/dms/model/ModifyConversionConfigurationRequest.h>
#include <aws/dms/model/ModifyDataMigrationRequest.h>
#include <aws/dms/model/ModifyDataProviderRequest.h>
#include <aws/dms/model/ModifyEndpointRequest.h>
#include <aws/dms/model/ModifyEventSubscriptionRequest.h>
#include <aws/dms/model/ModifyInstanceProfileRequest.h>
#include <aws/dms/model/ModifyMigrationProjectRequest.h>
#include <aws/dms/model/ModifyReplicationConfigRequest.h>
#include <aws/dms/model/ModifyReplicationInstanceRequest.h>
#include <aws/dms/model/ModifyReplicationSubnetGroupRequest.h>
#include <aws/dms/model/ModifyReplicationTaskRequest.h>
#include <aws/dms/model/MoveReplicationTaskRequest.h>
#include <aws/dms/model/RebootReplicationInstanceRequest.h>
#include <aws/dms/model/RefreshSchemasRequest.h>
#include <aws/dms/model/ReloadReplicationTablesRequest.h>
#include <aws/dms/model/ReloadTablesRequest.h>
#include <aws/dms/model/RemoveTagsFromResourceRequest.h>
#include <aws/dms/model/RunFleetAdvisorLsaAnalysisRequest.h>
#include <aws/dms/model/StartDataMigrationRequest.h>
#include <aws/dms/model/StartExtensionPackAssociationRequest.h>
#include <aws/dms/model/StartMetadataModelAssessmentRequest.h>
#include <aws/dms/model/StartMetadataModelConversionRequest.h>
#include <aws/dms/model/StartMetadataModelCreationRequest.h>
#include <aws/dms/model/StartMetadataModelExportAsScriptRequest.h>
#include <aws/dms/model/StartMetadataModelExportToTargetRequest.h>
#include <aws/dms/model/StartMetadataModelImportRequest.h>
#include <aws/dms/model/StartRecommendationsRequest.h>
#include <aws/dms/model/StartReplicationRequest.h>
#include <aws/dms/model/StartReplicationTaskAssessmentRequest.h>
#include <aws/dms/model/StartReplicationTaskAssessmentRunRequest.h>
#include <aws/dms/model/StartReplicationTaskRequest.h>
#include <aws/dms/model/StopDataMigrationRequest.h>
#include <aws/dms/model/StopReplicationRequest.h>
#include <aws/dms/model/StopReplicationTaskRequest.h>
#include <aws/dms/model/TestConnectionRequest.h>
#include <aws/dms/model/UpdateSubscriptionsToEventBridgeRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::DatabaseMigrationService;
using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace DatabaseMigrationService {
const char SERVICE_NAME[] = "dms";
const char ALLOCATION_TAG[] = "DatabaseMigrationServiceClient";
}  // namespace DatabaseMigrationService
}  // namespace Aws
const char* DatabaseMigrationServiceClient::GetServiceName() { return SERVICE_NAME; }
const char* DatabaseMigrationServiceClient::GetAllocationTag() { return ALLOCATION_TAG; }

DatabaseMigrationServiceClient::DatabaseMigrationServiceClient(
    const DatabaseMigrationService::DatabaseMigrationServiceClientConfiguration& clientConfiguration,
    std::shared_ptr<DatabaseMigrationServiceEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DatabaseMigrationServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<DatabaseMigrationServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

DatabaseMigrationServiceClient::DatabaseMigrationServiceClient(
    const AWSCredentials& credentials, std::shared_ptr<DatabaseMigrationServiceEndpointProviderBase> endpointProvider,
    const DatabaseMigrationService::DatabaseMigrationServiceClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DatabaseMigrationServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<DatabaseMigrationServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

DatabaseMigrationServiceClient::DatabaseMigrationServiceClient(
    const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
    std::shared_ptr<DatabaseMigrationServiceEndpointProviderBase> endpointProvider,
    const DatabaseMigrationService::DatabaseMigrationServiceClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DatabaseMigrationServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<DatabaseMigrationServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
DatabaseMigrationServiceClient::DatabaseMigrationServiceClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DatabaseMigrationServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<DatabaseMigrationServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

DatabaseMigrationServiceClient::DatabaseMigrationServiceClient(const AWSCredentials& credentials,
                                                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DatabaseMigrationServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<DatabaseMigrationServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

DatabaseMigrationServiceClient::DatabaseMigrationServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DatabaseMigrationServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<DatabaseMigrationServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
DatabaseMigrationServiceClient::~DatabaseMigrationServiceClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<DatabaseMigrationServiceEndpointProviderBase>& DatabaseMigrationServiceClient::accessEndpointProvider() {
  return m_endpointProvider;
}

void DatabaseMigrationServiceClient::init(const DatabaseMigrationService::DatabaseMigrationServiceClientConfiguration& config) {
  AWSClient::SetServiceClientName("Database Migration Service");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "dms");
}

void DatabaseMigrationServiceClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
DatabaseMigrationServiceClient::InvokeOperationOutcome DatabaseMigrationServiceClient::InvokeServiceOperation(
    const AmazonWebServiceRequest& request, Aws::Http::HttpMethod httpMethod) const {
  auto operationName = request.GetServiceRequestName();
  auto serviceName = GetServiceClientName();

  AWS_OPERATION_GUARD_DYNAMIC(operationName);

  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_endpointProvider, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_telemetryProvider, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto tracer = m_telemetryProvider->getTracer(serviceName, {});
  auto meter = m_telemetryProvider->getMeter(serviceName, {});
  AWS_OPERATION_CHECK_PTR_DYNAMIC(meter, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto span = tracer->CreateSpan(Aws::String(serviceName) + "." + operationName,
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);

  return TracingUtils::MakeCallWithTiming<InvokeOperationOutcome>(
      [&]() -> InvokeOperationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});

        AWS_OPERATION_CHECK_SUCCESS_DYNAMIC(endpointResolutionOutcome, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                            endpointResolutionOutcome.GetError().GetMessage());

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

AddTagsToResourceOutcome DatabaseMigrationServiceClient::AddTagsToResource(const AddTagsToResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AddTagsToResourceOutcome(result.GetResultWithOwnership())
                            : AddTagsToResourceOutcome(std::move(result.GetError()));
}

ApplyPendingMaintenanceActionOutcome DatabaseMigrationServiceClient::ApplyPendingMaintenanceAction(
    const ApplyPendingMaintenanceActionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ApplyPendingMaintenanceActionOutcome(result.GetResultWithOwnership())
                            : ApplyPendingMaintenanceActionOutcome(std::move(result.GetError()));
}

BatchStartRecommendationsOutcome DatabaseMigrationServiceClient::BatchStartRecommendations(
    const BatchStartRecommendationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchStartRecommendationsOutcome(result.GetResultWithOwnership())
                            : BatchStartRecommendationsOutcome(std::move(result.GetError()));
}

CancelMetadataModelConversionOutcome DatabaseMigrationServiceClient::CancelMetadataModelConversion(
    const CancelMetadataModelConversionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CancelMetadataModelConversionOutcome(result.GetResultWithOwnership())
                            : CancelMetadataModelConversionOutcome(std::move(result.GetError()));
}

CancelMetadataModelCreationOutcome DatabaseMigrationServiceClient::CancelMetadataModelCreation(
    const CancelMetadataModelCreationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CancelMetadataModelCreationOutcome(result.GetResultWithOwnership())
                            : CancelMetadataModelCreationOutcome(std::move(result.GetError()));
}

CancelReplicationTaskAssessmentRunOutcome DatabaseMigrationServiceClient::CancelReplicationTaskAssessmentRun(
    const CancelReplicationTaskAssessmentRunRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CancelReplicationTaskAssessmentRunOutcome(result.GetResultWithOwnership())
                            : CancelReplicationTaskAssessmentRunOutcome(std::move(result.GetError()));
}

CreateDataMigrationOutcome DatabaseMigrationServiceClient::CreateDataMigration(const CreateDataMigrationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDataMigrationOutcome(result.GetResultWithOwnership())
                            : CreateDataMigrationOutcome(std::move(result.GetError()));
}

CreateDataProviderOutcome DatabaseMigrationServiceClient::CreateDataProvider(const CreateDataProviderRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDataProviderOutcome(result.GetResultWithOwnership())
                            : CreateDataProviderOutcome(std::move(result.GetError()));
}

CreateEndpointOutcome DatabaseMigrationServiceClient::CreateEndpoint(const CreateEndpointRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateEndpointOutcome(result.GetResultWithOwnership()) : CreateEndpointOutcome(std::move(result.GetError()));
}

CreateEventSubscriptionOutcome DatabaseMigrationServiceClient::CreateEventSubscription(
    const CreateEventSubscriptionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateEventSubscriptionOutcome(result.GetResultWithOwnership())
                            : CreateEventSubscriptionOutcome(std::move(result.GetError()));
}

CreateFleetAdvisorCollectorOutcome DatabaseMigrationServiceClient::CreateFleetAdvisorCollector(
    const CreateFleetAdvisorCollectorRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateFleetAdvisorCollectorOutcome(result.GetResultWithOwnership())
                            : CreateFleetAdvisorCollectorOutcome(std::move(result.GetError()));
}

CreateInstanceProfileOutcome DatabaseMigrationServiceClient::CreateInstanceProfile(const CreateInstanceProfileRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateInstanceProfileOutcome(result.GetResultWithOwnership())
                            : CreateInstanceProfileOutcome(std::move(result.GetError()));
}

CreateMigrationProjectOutcome DatabaseMigrationServiceClient::CreateMigrationProject(const CreateMigrationProjectRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateMigrationProjectOutcome(result.GetResultWithOwnership())
                            : CreateMigrationProjectOutcome(std::move(result.GetError()));
}

CreateReplicationConfigOutcome DatabaseMigrationServiceClient::CreateReplicationConfig(
    const CreateReplicationConfigRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateReplicationConfigOutcome(result.GetResultWithOwnership())
                            : CreateReplicationConfigOutcome(std::move(result.GetError()));
}

CreateReplicationInstanceOutcome DatabaseMigrationServiceClient::CreateReplicationInstance(
    const CreateReplicationInstanceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateReplicationInstanceOutcome(result.GetResultWithOwnership())
                            : CreateReplicationInstanceOutcome(std::move(result.GetError()));
}

CreateReplicationSubnetGroupOutcome DatabaseMigrationServiceClient::CreateReplicationSubnetGroup(
    const CreateReplicationSubnetGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateReplicationSubnetGroupOutcome(result.GetResultWithOwnership())
                            : CreateReplicationSubnetGroupOutcome(std::move(result.GetError()));
}

CreateReplicationTaskOutcome DatabaseMigrationServiceClient::CreateReplicationTask(const CreateReplicationTaskRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateReplicationTaskOutcome(result.GetResultWithOwnership())
                            : CreateReplicationTaskOutcome(std::move(result.GetError()));
}

DeleteCertificateOutcome DatabaseMigrationServiceClient::DeleteCertificate(const DeleteCertificateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteCertificateOutcome(result.GetResultWithOwnership())
                            : DeleteCertificateOutcome(std::move(result.GetError()));
}

DeleteConnectionOutcome DatabaseMigrationServiceClient::DeleteConnection(const DeleteConnectionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteConnectionOutcome(result.GetResultWithOwnership())
                            : DeleteConnectionOutcome(std::move(result.GetError()));
}

DeleteDataMigrationOutcome DatabaseMigrationServiceClient::DeleteDataMigration(const DeleteDataMigrationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteDataMigrationOutcome(result.GetResultWithOwnership())
                            : DeleteDataMigrationOutcome(std::move(result.GetError()));
}

DeleteDataProviderOutcome DatabaseMigrationServiceClient::DeleteDataProvider(const DeleteDataProviderRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteDataProviderOutcome(result.GetResultWithOwnership())
                            : DeleteDataProviderOutcome(std::move(result.GetError()));
}

DeleteEndpointOutcome DatabaseMigrationServiceClient::DeleteEndpoint(const DeleteEndpointRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteEndpointOutcome(result.GetResultWithOwnership()) : DeleteEndpointOutcome(std::move(result.GetError()));
}

DeleteEventSubscriptionOutcome DatabaseMigrationServiceClient::DeleteEventSubscription(
    const DeleteEventSubscriptionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteEventSubscriptionOutcome(result.GetResultWithOwnership())
                            : DeleteEventSubscriptionOutcome(std::move(result.GetError()));
}

DeleteFleetAdvisorCollectorOutcome DatabaseMigrationServiceClient::DeleteFleetAdvisorCollector(
    const DeleteFleetAdvisorCollectorRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteFleetAdvisorCollectorOutcome(result.GetResultWithOwnership())
                            : DeleteFleetAdvisorCollectorOutcome(std::move(result.GetError()));
}

DeleteFleetAdvisorDatabasesOutcome DatabaseMigrationServiceClient::DeleteFleetAdvisorDatabases(
    const DeleteFleetAdvisorDatabasesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteFleetAdvisorDatabasesOutcome(result.GetResultWithOwnership())
                            : DeleteFleetAdvisorDatabasesOutcome(std::move(result.GetError()));
}

DeleteInstanceProfileOutcome DatabaseMigrationServiceClient::DeleteInstanceProfile(const DeleteInstanceProfileRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteInstanceProfileOutcome(result.GetResultWithOwnership())
                            : DeleteInstanceProfileOutcome(std::move(result.GetError()));
}

DeleteMigrationProjectOutcome DatabaseMigrationServiceClient::DeleteMigrationProject(const DeleteMigrationProjectRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteMigrationProjectOutcome(result.GetResultWithOwnership())
                            : DeleteMigrationProjectOutcome(std::move(result.GetError()));
}

DeleteReplicationConfigOutcome DatabaseMigrationServiceClient::DeleteReplicationConfig(
    const DeleteReplicationConfigRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteReplicationConfigOutcome(result.GetResultWithOwnership())
                            : DeleteReplicationConfigOutcome(std::move(result.GetError()));
}

DeleteReplicationInstanceOutcome DatabaseMigrationServiceClient::DeleteReplicationInstance(
    const DeleteReplicationInstanceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteReplicationInstanceOutcome(result.GetResultWithOwnership())
                            : DeleteReplicationInstanceOutcome(std::move(result.GetError()));
}

DeleteReplicationSubnetGroupOutcome DatabaseMigrationServiceClient::DeleteReplicationSubnetGroup(
    const DeleteReplicationSubnetGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteReplicationSubnetGroupOutcome(result.GetResultWithOwnership())
                            : DeleteReplicationSubnetGroupOutcome(std::move(result.GetError()));
}

DeleteReplicationTaskOutcome DatabaseMigrationServiceClient::DeleteReplicationTask(const DeleteReplicationTaskRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteReplicationTaskOutcome(result.GetResultWithOwnership())
                            : DeleteReplicationTaskOutcome(std::move(result.GetError()));
}

DeleteReplicationTaskAssessmentRunOutcome DatabaseMigrationServiceClient::DeleteReplicationTaskAssessmentRun(
    const DeleteReplicationTaskAssessmentRunRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteReplicationTaskAssessmentRunOutcome(result.GetResultWithOwnership())
                            : DeleteReplicationTaskAssessmentRunOutcome(std::move(result.GetError()));
}

DescribeAccountAttributesOutcome DatabaseMigrationServiceClient::DescribeAccountAttributes(
    const DescribeAccountAttributesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeAccountAttributesOutcome(result.GetResultWithOwnership())
                            : DescribeAccountAttributesOutcome(std::move(result.GetError()));
}

DescribeApplicableIndividualAssessmentsOutcome DatabaseMigrationServiceClient::DescribeApplicableIndividualAssessments(
    const DescribeApplicableIndividualAssessmentsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeApplicableIndividualAssessmentsOutcome(result.GetResultWithOwnership())
                            : DescribeApplicableIndividualAssessmentsOutcome(std::move(result.GetError()));
}

DescribeCertificatesOutcome DatabaseMigrationServiceClient::DescribeCertificates(const DescribeCertificatesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeCertificatesOutcome(result.GetResultWithOwnership())
                            : DescribeCertificatesOutcome(std::move(result.GetError()));
}

DescribeConnectionsOutcome DatabaseMigrationServiceClient::DescribeConnections(const DescribeConnectionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeConnectionsOutcome(result.GetResultWithOwnership())
                            : DescribeConnectionsOutcome(std::move(result.GetError()));
}

DescribeConversionConfigurationOutcome DatabaseMigrationServiceClient::DescribeConversionConfiguration(
    const DescribeConversionConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeConversionConfigurationOutcome(result.GetResultWithOwnership())
                            : DescribeConversionConfigurationOutcome(std::move(result.GetError()));
}

DescribeDataMigrationsOutcome DatabaseMigrationServiceClient::DescribeDataMigrations(const DescribeDataMigrationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeDataMigrationsOutcome(result.GetResultWithOwnership())
                            : DescribeDataMigrationsOutcome(std::move(result.GetError()));
}

DescribeDataProvidersOutcome DatabaseMigrationServiceClient::DescribeDataProviders(const DescribeDataProvidersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeDataProvidersOutcome(result.GetResultWithOwnership())
                            : DescribeDataProvidersOutcome(std::move(result.GetError()));
}

DescribeEndpointSettingsOutcome DatabaseMigrationServiceClient::DescribeEndpointSettings(
    const DescribeEndpointSettingsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeEndpointSettingsOutcome(result.GetResultWithOwnership())
                            : DescribeEndpointSettingsOutcome(std::move(result.GetError()));
}

DescribeEndpointTypesOutcome DatabaseMigrationServiceClient::DescribeEndpointTypes(const DescribeEndpointTypesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeEndpointTypesOutcome(result.GetResultWithOwnership())
                            : DescribeEndpointTypesOutcome(std::move(result.GetError()));
}

DescribeEndpointsOutcome DatabaseMigrationServiceClient::DescribeEndpoints(const DescribeEndpointsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeEndpointsOutcome(result.GetResultWithOwnership())
                            : DescribeEndpointsOutcome(std::move(result.GetError()));
}

DescribeEngineVersionsOutcome DatabaseMigrationServiceClient::DescribeEngineVersions(const DescribeEngineVersionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeEngineVersionsOutcome(result.GetResultWithOwnership())
                            : DescribeEngineVersionsOutcome(std::move(result.GetError()));
}

DescribeEventCategoriesOutcome DatabaseMigrationServiceClient::DescribeEventCategories(
    const DescribeEventCategoriesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeEventCategoriesOutcome(result.GetResultWithOwnership())
                            : DescribeEventCategoriesOutcome(std::move(result.GetError()));
}

DescribeEventSubscriptionsOutcome DatabaseMigrationServiceClient::DescribeEventSubscriptions(
    const DescribeEventSubscriptionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeEventSubscriptionsOutcome(result.GetResultWithOwnership())
                            : DescribeEventSubscriptionsOutcome(std::move(result.GetError()));
}

DescribeEventsOutcome DatabaseMigrationServiceClient::DescribeEvents(const DescribeEventsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeEventsOutcome(result.GetResultWithOwnership()) : DescribeEventsOutcome(std::move(result.GetError()));
}

DescribeExtensionPackAssociationsOutcome DatabaseMigrationServiceClient::DescribeExtensionPackAssociations(
    const DescribeExtensionPackAssociationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeExtensionPackAssociationsOutcome(result.GetResultWithOwnership())
                            : DescribeExtensionPackAssociationsOutcome(std::move(result.GetError()));
}

DescribeFleetAdvisorCollectorsOutcome DatabaseMigrationServiceClient::DescribeFleetAdvisorCollectors(
    const DescribeFleetAdvisorCollectorsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeFleetAdvisorCollectorsOutcome(result.GetResultWithOwnership())
                            : DescribeFleetAdvisorCollectorsOutcome(std::move(result.GetError()));
}

DescribeFleetAdvisorDatabasesOutcome DatabaseMigrationServiceClient::DescribeFleetAdvisorDatabases(
    const DescribeFleetAdvisorDatabasesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeFleetAdvisorDatabasesOutcome(result.GetResultWithOwnership())
                            : DescribeFleetAdvisorDatabasesOutcome(std::move(result.GetError()));
}

DescribeFleetAdvisorLsaAnalysisOutcome DatabaseMigrationServiceClient::DescribeFleetAdvisorLsaAnalysis(
    const DescribeFleetAdvisorLsaAnalysisRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeFleetAdvisorLsaAnalysisOutcome(result.GetResultWithOwnership())
                            : DescribeFleetAdvisorLsaAnalysisOutcome(std::move(result.GetError()));
}

DescribeFleetAdvisorSchemaObjectSummaryOutcome DatabaseMigrationServiceClient::DescribeFleetAdvisorSchemaObjectSummary(
    const DescribeFleetAdvisorSchemaObjectSummaryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeFleetAdvisorSchemaObjectSummaryOutcome(result.GetResultWithOwnership())
                            : DescribeFleetAdvisorSchemaObjectSummaryOutcome(std::move(result.GetError()));
}

DescribeFleetAdvisorSchemasOutcome DatabaseMigrationServiceClient::DescribeFleetAdvisorSchemas(
    const DescribeFleetAdvisorSchemasRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeFleetAdvisorSchemasOutcome(result.GetResultWithOwnership())
                            : DescribeFleetAdvisorSchemasOutcome(std::move(result.GetError()));
}

DescribeInstanceProfilesOutcome DatabaseMigrationServiceClient::DescribeInstanceProfiles(
    const DescribeInstanceProfilesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeInstanceProfilesOutcome(result.GetResultWithOwnership())
                            : DescribeInstanceProfilesOutcome(std::move(result.GetError()));
}

DescribeMetadataModelOutcome DatabaseMigrationServiceClient::DescribeMetadataModel(const DescribeMetadataModelRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeMetadataModelOutcome(result.GetResultWithOwnership())
                            : DescribeMetadataModelOutcome(std::move(result.GetError()));
}

DescribeMetadataModelAssessmentsOutcome DatabaseMigrationServiceClient::DescribeMetadataModelAssessments(
    const DescribeMetadataModelAssessmentsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeMetadataModelAssessmentsOutcome(result.GetResultWithOwnership())
                            : DescribeMetadataModelAssessmentsOutcome(std::move(result.GetError()));
}

DescribeMetadataModelChildrenOutcome DatabaseMigrationServiceClient::DescribeMetadataModelChildren(
    const DescribeMetadataModelChildrenRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeMetadataModelChildrenOutcome(result.GetResultWithOwnership())
                            : DescribeMetadataModelChildrenOutcome(std::move(result.GetError()));
}

DescribeMetadataModelConversionsOutcome DatabaseMigrationServiceClient::DescribeMetadataModelConversions(
    const DescribeMetadataModelConversionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeMetadataModelConversionsOutcome(result.GetResultWithOwnership())
                            : DescribeMetadataModelConversionsOutcome(std::move(result.GetError()));
}

DescribeMetadataModelCreationsOutcome DatabaseMigrationServiceClient::DescribeMetadataModelCreations(
    const DescribeMetadataModelCreationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeMetadataModelCreationsOutcome(result.GetResultWithOwnership())
                            : DescribeMetadataModelCreationsOutcome(std::move(result.GetError()));
}

DescribeMetadataModelExportsAsScriptOutcome DatabaseMigrationServiceClient::DescribeMetadataModelExportsAsScript(
    const DescribeMetadataModelExportsAsScriptRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeMetadataModelExportsAsScriptOutcome(result.GetResultWithOwnership())
                            : DescribeMetadataModelExportsAsScriptOutcome(std::move(result.GetError()));
}

DescribeMetadataModelExportsToTargetOutcome DatabaseMigrationServiceClient::DescribeMetadataModelExportsToTarget(
    const DescribeMetadataModelExportsToTargetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeMetadataModelExportsToTargetOutcome(result.GetResultWithOwnership())
                            : DescribeMetadataModelExportsToTargetOutcome(std::move(result.GetError()));
}

DescribeMetadataModelImportsOutcome DatabaseMigrationServiceClient::DescribeMetadataModelImports(
    const DescribeMetadataModelImportsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeMetadataModelImportsOutcome(result.GetResultWithOwnership())
                            : DescribeMetadataModelImportsOutcome(std::move(result.GetError()));
}

DescribeMigrationProjectsOutcome DatabaseMigrationServiceClient::DescribeMigrationProjects(
    const DescribeMigrationProjectsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeMigrationProjectsOutcome(result.GetResultWithOwnership())
                            : DescribeMigrationProjectsOutcome(std::move(result.GetError()));
}

DescribeOrderableReplicationInstancesOutcome DatabaseMigrationServiceClient::DescribeOrderableReplicationInstances(
    const DescribeOrderableReplicationInstancesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeOrderableReplicationInstancesOutcome(result.GetResultWithOwnership())
                            : DescribeOrderableReplicationInstancesOutcome(std::move(result.GetError()));
}

DescribePendingMaintenanceActionsOutcome DatabaseMigrationServiceClient::DescribePendingMaintenanceActions(
    const DescribePendingMaintenanceActionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribePendingMaintenanceActionsOutcome(result.GetResultWithOwnership())
                            : DescribePendingMaintenanceActionsOutcome(std::move(result.GetError()));
}

DescribeRecommendationLimitationsOutcome DatabaseMigrationServiceClient::DescribeRecommendationLimitations(
    const DescribeRecommendationLimitationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeRecommendationLimitationsOutcome(result.GetResultWithOwnership())
                            : DescribeRecommendationLimitationsOutcome(std::move(result.GetError()));
}

DescribeRecommendationsOutcome DatabaseMigrationServiceClient::DescribeRecommendations(
    const DescribeRecommendationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeRecommendationsOutcome(result.GetResultWithOwnership())
                            : DescribeRecommendationsOutcome(std::move(result.GetError()));
}

DescribeRefreshSchemasStatusOutcome DatabaseMigrationServiceClient::DescribeRefreshSchemasStatus(
    const DescribeRefreshSchemasStatusRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeRefreshSchemasStatusOutcome(result.GetResultWithOwnership())
                            : DescribeRefreshSchemasStatusOutcome(std::move(result.GetError()));
}

DescribeReplicationConfigsOutcome DatabaseMigrationServiceClient::DescribeReplicationConfigs(
    const DescribeReplicationConfigsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeReplicationConfigsOutcome(result.GetResultWithOwnership())
                            : DescribeReplicationConfigsOutcome(std::move(result.GetError()));
}

DescribeReplicationInstanceTaskLogsOutcome DatabaseMigrationServiceClient::DescribeReplicationInstanceTaskLogs(
    const DescribeReplicationInstanceTaskLogsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeReplicationInstanceTaskLogsOutcome(result.GetResultWithOwnership())
                            : DescribeReplicationInstanceTaskLogsOutcome(std::move(result.GetError()));
}

DescribeReplicationInstancesOutcome DatabaseMigrationServiceClient::DescribeReplicationInstances(
    const DescribeReplicationInstancesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeReplicationInstancesOutcome(result.GetResultWithOwnership())
                            : DescribeReplicationInstancesOutcome(std::move(result.GetError()));
}

DescribeReplicationSubnetGroupsOutcome DatabaseMigrationServiceClient::DescribeReplicationSubnetGroups(
    const DescribeReplicationSubnetGroupsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeReplicationSubnetGroupsOutcome(result.GetResultWithOwnership())
                            : DescribeReplicationSubnetGroupsOutcome(std::move(result.GetError()));
}

DescribeReplicationTableStatisticsOutcome DatabaseMigrationServiceClient::DescribeReplicationTableStatistics(
    const DescribeReplicationTableStatisticsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeReplicationTableStatisticsOutcome(result.GetResultWithOwnership())
                            : DescribeReplicationTableStatisticsOutcome(std::move(result.GetError()));
}

DescribeReplicationTaskAssessmentResultsOutcome DatabaseMigrationServiceClient::DescribeReplicationTaskAssessmentResults(
    const DescribeReplicationTaskAssessmentResultsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeReplicationTaskAssessmentResultsOutcome(result.GetResultWithOwnership())
                            : DescribeReplicationTaskAssessmentResultsOutcome(std::move(result.GetError()));
}

DescribeReplicationTaskAssessmentRunsOutcome DatabaseMigrationServiceClient::DescribeReplicationTaskAssessmentRuns(
    const DescribeReplicationTaskAssessmentRunsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeReplicationTaskAssessmentRunsOutcome(result.GetResultWithOwnership())
                            : DescribeReplicationTaskAssessmentRunsOutcome(std::move(result.GetError()));
}

DescribeReplicationTaskIndividualAssessmentsOutcome DatabaseMigrationServiceClient::DescribeReplicationTaskIndividualAssessments(
    const DescribeReplicationTaskIndividualAssessmentsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeReplicationTaskIndividualAssessmentsOutcome(result.GetResultWithOwnership())
                            : DescribeReplicationTaskIndividualAssessmentsOutcome(std::move(result.GetError()));
}

DescribeReplicationTasksOutcome DatabaseMigrationServiceClient::DescribeReplicationTasks(
    const DescribeReplicationTasksRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeReplicationTasksOutcome(result.GetResultWithOwnership())
                            : DescribeReplicationTasksOutcome(std::move(result.GetError()));
}

DescribeReplicationsOutcome DatabaseMigrationServiceClient::DescribeReplications(const DescribeReplicationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeReplicationsOutcome(result.GetResultWithOwnership())
                            : DescribeReplicationsOutcome(std::move(result.GetError()));
}

DescribeSchemasOutcome DatabaseMigrationServiceClient::DescribeSchemas(const DescribeSchemasRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeSchemasOutcome(result.GetResultWithOwnership())
                            : DescribeSchemasOutcome(std::move(result.GetError()));
}

DescribeTableStatisticsOutcome DatabaseMigrationServiceClient::DescribeTableStatistics(
    const DescribeTableStatisticsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeTableStatisticsOutcome(result.GetResultWithOwnership())
                            : DescribeTableStatisticsOutcome(std::move(result.GetError()));
}

ExportMetadataModelAssessmentOutcome DatabaseMigrationServiceClient::ExportMetadataModelAssessment(
    const ExportMetadataModelAssessmentRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ExportMetadataModelAssessmentOutcome(result.GetResultWithOwnership())
                            : ExportMetadataModelAssessmentOutcome(std::move(result.GetError()));
}

GetTargetSelectionRulesOutcome DatabaseMigrationServiceClient::GetTargetSelectionRules(
    const GetTargetSelectionRulesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetTargetSelectionRulesOutcome(result.GetResultWithOwnership())
                            : GetTargetSelectionRulesOutcome(std::move(result.GetError()));
}

ImportCertificateOutcome DatabaseMigrationServiceClient::ImportCertificate(const ImportCertificateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ImportCertificateOutcome(result.GetResultWithOwnership())
                            : ImportCertificateOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome DatabaseMigrationServiceClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

ModifyConversionConfigurationOutcome DatabaseMigrationServiceClient::ModifyConversionConfiguration(
    const ModifyConversionConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyConversionConfigurationOutcome(result.GetResultWithOwnership())
                            : ModifyConversionConfigurationOutcome(std::move(result.GetError()));
}

ModifyDataMigrationOutcome DatabaseMigrationServiceClient::ModifyDataMigration(const ModifyDataMigrationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyDataMigrationOutcome(result.GetResultWithOwnership())
                            : ModifyDataMigrationOutcome(std::move(result.GetError()));
}

ModifyDataProviderOutcome DatabaseMigrationServiceClient::ModifyDataProvider(const ModifyDataProviderRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyDataProviderOutcome(result.GetResultWithOwnership())
                            : ModifyDataProviderOutcome(std::move(result.GetError()));
}

ModifyEndpointOutcome DatabaseMigrationServiceClient::ModifyEndpoint(const ModifyEndpointRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyEndpointOutcome(result.GetResultWithOwnership()) : ModifyEndpointOutcome(std::move(result.GetError()));
}

ModifyEventSubscriptionOutcome DatabaseMigrationServiceClient::ModifyEventSubscription(
    const ModifyEventSubscriptionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyEventSubscriptionOutcome(result.GetResultWithOwnership())
                            : ModifyEventSubscriptionOutcome(std::move(result.GetError()));
}

ModifyInstanceProfileOutcome DatabaseMigrationServiceClient::ModifyInstanceProfile(const ModifyInstanceProfileRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyInstanceProfileOutcome(result.GetResultWithOwnership())
                            : ModifyInstanceProfileOutcome(std::move(result.GetError()));
}

ModifyMigrationProjectOutcome DatabaseMigrationServiceClient::ModifyMigrationProject(const ModifyMigrationProjectRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyMigrationProjectOutcome(result.GetResultWithOwnership())
                            : ModifyMigrationProjectOutcome(std::move(result.GetError()));
}

ModifyReplicationConfigOutcome DatabaseMigrationServiceClient::ModifyReplicationConfig(
    const ModifyReplicationConfigRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyReplicationConfigOutcome(result.GetResultWithOwnership())
                            : ModifyReplicationConfigOutcome(std::move(result.GetError()));
}

ModifyReplicationInstanceOutcome DatabaseMigrationServiceClient::ModifyReplicationInstance(
    const ModifyReplicationInstanceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyReplicationInstanceOutcome(result.GetResultWithOwnership())
                            : ModifyReplicationInstanceOutcome(std::move(result.GetError()));
}

ModifyReplicationSubnetGroupOutcome DatabaseMigrationServiceClient::ModifyReplicationSubnetGroup(
    const ModifyReplicationSubnetGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyReplicationSubnetGroupOutcome(result.GetResultWithOwnership())
                            : ModifyReplicationSubnetGroupOutcome(std::move(result.GetError()));
}

ModifyReplicationTaskOutcome DatabaseMigrationServiceClient::ModifyReplicationTask(const ModifyReplicationTaskRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyReplicationTaskOutcome(result.GetResultWithOwnership())
                            : ModifyReplicationTaskOutcome(std::move(result.GetError()));
}

MoveReplicationTaskOutcome DatabaseMigrationServiceClient::MoveReplicationTask(const MoveReplicationTaskRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? MoveReplicationTaskOutcome(result.GetResultWithOwnership())
                            : MoveReplicationTaskOutcome(std::move(result.GetError()));
}

RebootReplicationInstanceOutcome DatabaseMigrationServiceClient::RebootReplicationInstance(
    const RebootReplicationInstanceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RebootReplicationInstanceOutcome(result.GetResultWithOwnership())
                            : RebootReplicationInstanceOutcome(std::move(result.GetError()));
}

RefreshSchemasOutcome DatabaseMigrationServiceClient::RefreshSchemas(const RefreshSchemasRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RefreshSchemasOutcome(result.GetResultWithOwnership()) : RefreshSchemasOutcome(std::move(result.GetError()));
}

ReloadReplicationTablesOutcome DatabaseMigrationServiceClient::ReloadReplicationTables(
    const ReloadReplicationTablesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ReloadReplicationTablesOutcome(result.GetResultWithOwnership())
                            : ReloadReplicationTablesOutcome(std::move(result.GetError()));
}

ReloadTablesOutcome DatabaseMigrationServiceClient::ReloadTables(const ReloadTablesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ReloadTablesOutcome(result.GetResultWithOwnership()) : ReloadTablesOutcome(std::move(result.GetError()));
}

RemoveTagsFromResourceOutcome DatabaseMigrationServiceClient::RemoveTagsFromResource(const RemoveTagsFromResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RemoveTagsFromResourceOutcome(result.GetResultWithOwnership())
                            : RemoveTagsFromResourceOutcome(std::move(result.GetError()));
}

RunFleetAdvisorLsaAnalysisOutcome DatabaseMigrationServiceClient::RunFleetAdvisorLsaAnalysis(
    const RunFleetAdvisorLsaAnalysisRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RunFleetAdvisorLsaAnalysisOutcome(result.GetResultWithOwnership())
                            : RunFleetAdvisorLsaAnalysisOutcome(std::move(result.GetError()));
}

StartDataMigrationOutcome DatabaseMigrationServiceClient::StartDataMigration(const StartDataMigrationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartDataMigrationOutcome(result.GetResultWithOwnership())
                            : StartDataMigrationOutcome(std::move(result.GetError()));
}

StartExtensionPackAssociationOutcome DatabaseMigrationServiceClient::StartExtensionPackAssociation(
    const StartExtensionPackAssociationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartExtensionPackAssociationOutcome(result.GetResultWithOwnership())
                            : StartExtensionPackAssociationOutcome(std::move(result.GetError()));
}

StartMetadataModelAssessmentOutcome DatabaseMigrationServiceClient::StartMetadataModelAssessment(
    const StartMetadataModelAssessmentRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartMetadataModelAssessmentOutcome(result.GetResultWithOwnership())
                            : StartMetadataModelAssessmentOutcome(std::move(result.GetError()));
}

StartMetadataModelConversionOutcome DatabaseMigrationServiceClient::StartMetadataModelConversion(
    const StartMetadataModelConversionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartMetadataModelConversionOutcome(result.GetResultWithOwnership())
                            : StartMetadataModelConversionOutcome(std::move(result.GetError()));
}

StartMetadataModelCreationOutcome DatabaseMigrationServiceClient::StartMetadataModelCreation(
    const StartMetadataModelCreationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartMetadataModelCreationOutcome(result.GetResultWithOwnership())
                            : StartMetadataModelCreationOutcome(std::move(result.GetError()));
}

StartMetadataModelExportAsScriptOutcome DatabaseMigrationServiceClient::StartMetadataModelExportAsScript(
    const StartMetadataModelExportAsScriptRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartMetadataModelExportAsScriptOutcome(result.GetResultWithOwnership())
                            : StartMetadataModelExportAsScriptOutcome(std::move(result.GetError()));
}

StartMetadataModelExportToTargetOutcome DatabaseMigrationServiceClient::StartMetadataModelExportToTarget(
    const StartMetadataModelExportToTargetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartMetadataModelExportToTargetOutcome(result.GetResultWithOwnership())
                            : StartMetadataModelExportToTargetOutcome(std::move(result.GetError()));
}

StartMetadataModelImportOutcome DatabaseMigrationServiceClient::StartMetadataModelImport(
    const StartMetadataModelImportRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartMetadataModelImportOutcome(result.GetResultWithOwnership())
                            : StartMetadataModelImportOutcome(std::move(result.GetError()));
}

StartRecommendationsOutcome DatabaseMigrationServiceClient::StartRecommendations(const StartRecommendationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartRecommendationsOutcome(result.GetResultWithOwnership())
                            : StartRecommendationsOutcome(std::move(result.GetError()));
}

StartReplicationOutcome DatabaseMigrationServiceClient::StartReplication(const StartReplicationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartReplicationOutcome(result.GetResultWithOwnership())
                            : StartReplicationOutcome(std::move(result.GetError()));
}

StartReplicationTaskOutcome DatabaseMigrationServiceClient::StartReplicationTask(const StartReplicationTaskRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartReplicationTaskOutcome(result.GetResultWithOwnership())
                            : StartReplicationTaskOutcome(std::move(result.GetError()));
}

StartReplicationTaskAssessmentOutcome DatabaseMigrationServiceClient::StartReplicationTaskAssessment(
    const StartReplicationTaskAssessmentRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartReplicationTaskAssessmentOutcome(result.GetResultWithOwnership())
                            : StartReplicationTaskAssessmentOutcome(std::move(result.GetError()));
}

StartReplicationTaskAssessmentRunOutcome DatabaseMigrationServiceClient::StartReplicationTaskAssessmentRun(
    const StartReplicationTaskAssessmentRunRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartReplicationTaskAssessmentRunOutcome(result.GetResultWithOwnership())
                            : StartReplicationTaskAssessmentRunOutcome(std::move(result.GetError()));
}

StopDataMigrationOutcome DatabaseMigrationServiceClient::StopDataMigration(const StopDataMigrationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopDataMigrationOutcome(result.GetResultWithOwnership())
                            : StopDataMigrationOutcome(std::move(result.GetError()));
}

StopReplicationOutcome DatabaseMigrationServiceClient::StopReplication(const StopReplicationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopReplicationOutcome(result.GetResultWithOwnership())
                            : StopReplicationOutcome(std::move(result.GetError()));
}

StopReplicationTaskOutcome DatabaseMigrationServiceClient::StopReplicationTask(const StopReplicationTaskRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopReplicationTaskOutcome(result.GetResultWithOwnership())
                            : StopReplicationTaskOutcome(std::move(result.GetError()));
}

TestConnectionOutcome DatabaseMigrationServiceClient::TestConnection(const TestConnectionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TestConnectionOutcome(result.GetResultWithOwnership()) : TestConnectionOutcome(std::move(result.GetError()));
}

UpdateSubscriptionsToEventBridgeOutcome DatabaseMigrationServiceClient::UpdateSubscriptionsToEventBridge(
    const UpdateSubscriptionsToEventBridgeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateSubscriptionsToEventBridgeOutcome(result.GetResultWithOwnership())
                            : UpdateSubscriptionsToEventBridgeOutcome(std::move(result.GetError()));
}
