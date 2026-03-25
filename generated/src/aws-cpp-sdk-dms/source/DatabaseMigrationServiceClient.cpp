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
  return AddTagsToResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ApplyPendingMaintenanceActionOutcome DatabaseMigrationServiceClient::ApplyPendingMaintenanceAction(
    const ApplyPendingMaintenanceActionRequest& request) const {
  return ApplyPendingMaintenanceActionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchStartRecommendationsOutcome DatabaseMigrationServiceClient::BatchStartRecommendations(
    const BatchStartRecommendationsRequest& request) const {
  return BatchStartRecommendationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CancelMetadataModelConversionOutcome DatabaseMigrationServiceClient::CancelMetadataModelConversion(
    const CancelMetadataModelConversionRequest& request) const {
  return CancelMetadataModelConversionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CancelMetadataModelCreationOutcome DatabaseMigrationServiceClient::CancelMetadataModelCreation(
    const CancelMetadataModelCreationRequest& request) const {
  return CancelMetadataModelCreationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CancelReplicationTaskAssessmentRunOutcome DatabaseMigrationServiceClient::CancelReplicationTaskAssessmentRun(
    const CancelReplicationTaskAssessmentRunRequest& request) const {
  return CancelReplicationTaskAssessmentRunOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDataMigrationOutcome DatabaseMigrationServiceClient::CreateDataMigration(const CreateDataMigrationRequest& request) const {
  return CreateDataMigrationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDataProviderOutcome DatabaseMigrationServiceClient::CreateDataProvider(const CreateDataProviderRequest& request) const {
  return CreateDataProviderOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateEndpointOutcome DatabaseMigrationServiceClient::CreateEndpoint(const CreateEndpointRequest& request) const {
  return CreateEndpointOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateEventSubscriptionOutcome DatabaseMigrationServiceClient::CreateEventSubscription(
    const CreateEventSubscriptionRequest& request) const {
  return CreateEventSubscriptionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateFleetAdvisorCollectorOutcome DatabaseMigrationServiceClient::CreateFleetAdvisorCollector(
    const CreateFleetAdvisorCollectorRequest& request) const {
  return CreateFleetAdvisorCollectorOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateInstanceProfileOutcome DatabaseMigrationServiceClient::CreateInstanceProfile(const CreateInstanceProfileRequest& request) const {
  return CreateInstanceProfileOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateMigrationProjectOutcome DatabaseMigrationServiceClient::CreateMigrationProject(const CreateMigrationProjectRequest& request) const {
  return CreateMigrationProjectOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateReplicationConfigOutcome DatabaseMigrationServiceClient::CreateReplicationConfig(
    const CreateReplicationConfigRequest& request) const {
  return CreateReplicationConfigOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateReplicationInstanceOutcome DatabaseMigrationServiceClient::CreateReplicationInstance(
    const CreateReplicationInstanceRequest& request) const {
  return CreateReplicationInstanceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateReplicationSubnetGroupOutcome DatabaseMigrationServiceClient::CreateReplicationSubnetGroup(
    const CreateReplicationSubnetGroupRequest& request) const {
  return CreateReplicationSubnetGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateReplicationTaskOutcome DatabaseMigrationServiceClient::CreateReplicationTask(const CreateReplicationTaskRequest& request) const {
  return CreateReplicationTaskOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteCertificateOutcome DatabaseMigrationServiceClient::DeleteCertificate(const DeleteCertificateRequest& request) const {
  return DeleteCertificateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteConnectionOutcome DatabaseMigrationServiceClient::DeleteConnection(const DeleteConnectionRequest& request) const {
  return DeleteConnectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDataMigrationOutcome DatabaseMigrationServiceClient::DeleteDataMigration(const DeleteDataMigrationRequest& request) const {
  return DeleteDataMigrationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDataProviderOutcome DatabaseMigrationServiceClient::DeleteDataProvider(const DeleteDataProviderRequest& request) const {
  return DeleteDataProviderOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteEndpointOutcome DatabaseMigrationServiceClient::DeleteEndpoint(const DeleteEndpointRequest& request) const {
  return DeleteEndpointOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteEventSubscriptionOutcome DatabaseMigrationServiceClient::DeleteEventSubscription(
    const DeleteEventSubscriptionRequest& request) const {
  return DeleteEventSubscriptionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteFleetAdvisorCollectorOutcome DatabaseMigrationServiceClient::DeleteFleetAdvisorCollector(
    const DeleteFleetAdvisorCollectorRequest& request) const {
  return DeleteFleetAdvisorCollectorOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteFleetAdvisorDatabasesOutcome DatabaseMigrationServiceClient::DeleteFleetAdvisorDatabases(
    const DeleteFleetAdvisorDatabasesRequest& request) const {
  return DeleteFleetAdvisorDatabasesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteInstanceProfileOutcome DatabaseMigrationServiceClient::DeleteInstanceProfile(const DeleteInstanceProfileRequest& request) const {
  return DeleteInstanceProfileOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteMigrationProjectOutcome DatabaseMigrationServiceClient::DeleteMigrationProject(const DeleteMigrationProjectRequest& request) const {
  return DeleteMigrationProjectOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteReplicationConfigOutcome DatabaseMigrationServiceClient::DeleteReplicationConfig(
    const DeleteReplicationConfigRequest& request) const {
  return DeleteReplicationConfigOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteReplicationInstanceOutcome DatabaseMigrationServiceClient::DeleteReplicationInstance(
    const DeleteReplicationInstanceRequest& request) const {
  return DeleteReplicationInstanceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteReplicationSubnetGroupOutcome DatabaseMigrationServiceClient::DeleteReplicationSubnetGroup(
    const DeleteReplicationSubnetGroupRequest& request) const {
  return DeleteReplicationSubnetGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteReplicationTaskOutcome DatabaseMigrationServiceClient::DeleteReplicationTask(const DeleteReplicationTaskRequest& request) const {
  return DeleteReplicationTaskOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteReplicationTaskAssessmentRunOutcome DatabaseMigrationServiceClient::DeleteReplicationTaskAssessmentRun(
    const DeleteReplicationTaskAssessmentRunRequest& request) const {
  return DeleteReplicationTaskAssessmentRunOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAccountAttributesOutcome DatabaseMigrationServiceClient::DescribeAccountAttributes(
    const DescribeAccountAttributesRequest& request) const {
  return DescribeAccountAttributesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeApplicableIndividualAssessmentsOutcome DatabaseMigrationServiceClient::DescribeApplicableIndividualAssessments(
    const DescribeApplicableIndividualAssessmentsRequest& request) const {
  return DescribeApplicableIndividualAssessmentsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeCertificatesOutcome DatabaseMigrationServiceClient::DescribeCertificates(const DescribeCertificatesRequest& request) const {
  return DescribeCertificatesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeConnectionsOutcome DatabaseMigrationServiceClient::DescribeConnections(const DescribeConnectionsRequest& request) const {
  return DescribeConnectionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeConversionConfigurationOutcome DatabaseMigrationServiceClient::DescribeConversionConfiguration(
    const DescribeConversionConfigurationRequest& request) const {
  return DescribeConversionConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDataMigrationsOutcome DatabaseMigrationServiceClient::DescribeDataMigrations(const DescribeDataMigrationsRequest& request) const {
  return DescribeDataMigrationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDataProvidersOutcome DatabaseMigrationServiceClient::DescribeDataProviders(const DescribeDataProvidersRequest& request) const {
  return DescribeDataProvidersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeEndpointSettingsOutcome DatabaseMigrationServiceClient::DescribeEndpointSettings(
    const DescribeEndpointSettingsRequest& request) const {
  return DescribeEndpointSettingsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeEndpointTypesOutcome DatabaseMigrationServiceClient::DescribeEndpointTypes(const DescribeEndpointTypesRequest& request) const {
  return DescribeEndpointTypesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeEndpointsOutcome DatabaseMigrationServiceClient::DescribeEndpoints(const DescribeEndpointsRequest& request) const {
  return DescribeEndpointsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeEngineVersionsOutcome DatabaseMigrationServiceClient::DescribeEngineVersions(const DescribeEngineVersionsRequest& request) const {
  return DescribeEngineVersionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeEventCategoriesOutcome DatabaseMigrationServiceClient::DescribeEventCategories(
    const DescribeEventCategoriesRequest& request) const {
  return DescribeEventCategoriesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeEventSubscriptionsOutcome DatabaseMigrationServiceClient::DescribeEventSubscriptions(
    const DescribeEventSubscriptionsRequest& request) const {
  return DescribeEventSubscriptionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeEventsOutcome DatabaseMigrationServiceClient::DescribeEvents(const DescribeEventsRequest& request) const {
  return DescribeEventsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeExtensionPackAssociationsOutcome DatabaseMigrationServiceClient::DescribeExtensionPackAssociations(
    const DescribeExtensionPackAssociationsRequest& request) const {
  return DescribeExtensionPackAssociationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeFleetAdvisorCollectorsOutcome DatabaseMigrationServiceClient::DescribeFleetAdvisorCollectors(
    const DescribeFleetAdvisorCollectorsRequest& request) const {
  return DescribeFleetAdvisorCollectorsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeFleetAdvisorDatabasesOutcome DatabaseMigrationServiceClient::DescribeFleetAdvisorDatabases(
    const DescribeFleetAdvisorDatabasesRequest& request) const {
  return DescribeFleetAdvisorDatabasesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeFleetAdvisorLsaAnalysisOutcome DatabaseMigrationServiceClient::DescribeFleetAdvisorLsaAnalysis(
    const DescribeFleetAdvisorLsaAnalysisRequest& request) const {
  return DescribeFleetAdvisorLsaAnalysisOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeFleetAdvisorSchemaObjectSummaryOutcome DatabaseMigrationServiceClient::DescribeFleetAdvisorSchemaObjectSummary(
    const DescribeFleetAdvisorSchemaObjectSummaryRequest& request) const {
  return DescribeFleetAdvisorSchemaObjectSummaryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeFleetAdvisorSchemasOutcome DatabaseMigrationServiceClient::DescribeFleetAdvisorSchemas(
    const DescribeFleetAdvisorSchemasRequest& request) const {
  return DescribeFleetAdvisorSchemasOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeInstanceProfilesOutcome DatabaseMigrationServiceClient::DescribeInstanceProfiles(
    const DescribeInstanceProfilesRequest& request) const {
  return DescribeInstanceProfilesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeMetadataModelOutcome DatabaseMigrationServiceClient::DescribeMetadataModel(const DescribeMetadataModelRequest& request) const {
  return DescribeMetadataModelOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeMetadataModelAssessmentsOutcome DatabaseMigrationServiceClient::DescribeMetadataModelAssessments(
    const DescribeMetadataModelAssessmentsRequest& request) const {
  return DescribeMetadataModelAssessmentsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeMetadataModelChildrenOutcome DatabaseMigrationServiceClient::DescribeMetadataModelChildren(
    const DescribeMetadataModelChildrenRequest& request) const {
  return DescribeMetadataModelChildrenOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeMetadataModelConversionsOutcome DatabaseMigrationServiceClient::DescribeMetadataModelConversions(
    const DescribeMetadataModelConversionsRequest& request) const {
  return DescribeMetadataModelConversionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeMetadataModelCreationsOutcome DatabaseMigrationServiceClient::DescribeMetadataModelCreations(
    const DescribeMetadataModelCreationsRequest& request) const {
  return DescribeMetadataModelCreationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeMetadataModelExportsAsScriptOutcome DatabaseMigrationServiceClient::DescribeMetadataModelExportsAsScript(
    const DescribeMetadataModelExportsAsScriptRequest& request) const {
  return DescribeMetadataModelExportsAsScriptOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeMetadataModelExportsToTargetOutcome DatabaseMigrationServiceClient::DescribeMetadataModelExportsToTarget(
    const DescribeMetadataModelExportsToTargetRequest& request) const {
  return DescribeMetadataModelExportsToTargetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeMetadataModelImportsOutcome DatabaseMigrationServiceClient::DescribeMetadataModelImports(
    const DescribeMetadataModelImportsRequest& request) const {
  return DescribeMetadataModelImportsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeMigrationProjectsOutcome DatabaseMigrationServiceClient::DescribeMigrationProjects(
    const DescribeMigrationProjectsRequest& request) const {
  return DescribeMigrationProjectsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeOrderableReplicationInstancesOutcome DatabaseMigrationServiceClient::DescribeOrderableReplicationInstances(
    const DescribeOrderableReplicationInstancesRequest& request) const {
  return DescribeOrderableReplicationInstancesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribePendingMaintenanceActionsOutcome DatabaseMigrationServiceClient::DescribePendingMaintenanceActions(
    const DescribePendingMaintenanceActionsRequest& request) const {
  return DescribePendingMaintenanceActionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeRecommendationLimitationsOutcome DatabaseMigrationServiceClient::DescribeRecommendationLimitations(
    const DescribeRecommendationLimitationsRequest& request) const {
  return DescribeRecommendationLimitationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeRecommendationsOutcome DatabaseMigrationServiceClient::DescribeRecommendations(
    const DescribeRecommendationsRequest& request) const {
  return DescribeRecommendationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeRefreshSchemasStatusOutcome DatabaseMigrationServiceClient::DescribeRefreshSchemasStatus(
    const DescribeRefreshSchemasStatusRequest& request) const {
  return DescribeRefreshSchemasStatusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeReplicationConfigsOutcome DatabaseMigrationServiceClient::DescribeReplicationConfigs(
    const DescribeReplicationConfigsRequest& request) const {
  return DescribeReplicationConfigsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeReplicationInstanceTaskLogsOutcome DatabaseMigrationServiceClient::DescribeReplicationInstanceTaskLogs(
    const DescribeReplicationInstanceTaskLogsRequest& request) const {
  return DescribeReplicationInstanceTaskLogsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeReplicationInstancesOutcome DatabaseMigrationServiceClient::DescribeReplicationInstances(
    const DescribeReplicationInstancesRequest& request) const {
  return DescribeReplicationInstancesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeReplicationSubnetGroupsOutcome DatabaseMigrationServiceClient::DescribeReplicationSubnetGroups(
    const DescribeReplicationSubnetGroupsRequest& request) const {
  return DescribeReplicationSubnetGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeReplicationTableStatisticsOutcome DatabaseMigrationServiceClient::DescribeReplicationTableStatistics(
    const DescribeReplicationTableStatisticsRequest& request) const {
  return DescribeReplicationTableStatisticsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeReplicationTaskAssessmentResultsOutcome DatabaseMigrationServiceClient::DescribeReplicationTaskAssessmentResults(
    const DescribeReplicationTaskAssessmentResultsRequest& request) const {
  return DescribeReplicationTaskAssessmentResultsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeReplicationTaskAssessmentRunsOutcome DatabaseMigrationServiceClient::DescribeReplicationTaskAssessmentRuns(
    const DescribeReplicationTaskAssessmentRunsRequest& request) const {
  return DescribeReplicationTaskAssessmentRunsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeReplicationTaskIndividualAssessmentsOutcome DatabaseMigrationServiceClient::DescribeReplicationTaskIndividualAssessments(
    const DescribeReplicationTaskIndividualAssessmentsRequest& request) const {
  return DescribeReplicationTaskIndividualAssessmentsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeReplicationTasksOutcome DatabaseMigrationServiceClient::DescribeReplicationTasks(
    const DescribeReplicationTasksRequest& request) const {
  return DescribeReplicationTasksOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeReplicationsOutcome DatabaseMigrationServiceClient::DescribeReplications(const DescribeReplicationsRequest& request) const {
  return DescribeReplicationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeSchemasOutcome DatabaseMigrationServiceClient::DescribeSchemas(const DescribeSchemasRequest& request) const {
  return DescribeSchemasOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeTableStatisticsOutcome DatabaseMigrationServiceClient::DescribeTableStatistics(
    const DescribeTableStatisticsRequest& request) const {
  return DescribeTableStatisticsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ExportMetadataModelAssessmentOutcome DatabaseMigrationServiceClient::ExportMetadataModelAssessment(
    const ExportMetadataModelAssessmentRequest& request) const {
  return ExportMetadataModelAssessmentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetTargetSelectionRulesOutcome DatabaseMigrationServiceClient::GetTargetSelectionRules(
    const GetTargetSelectionRulesRequest& request) const {
  return GetTargetSelectionRulesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ImportCertificateOutcome DatabaseMigrationServiceClient::ImportCertificate(const ImportCertificateRequest& request) const {
  return ImportCertificateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome DatabaseMigrationServiceClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyConversionConfigurationOutcome DatabaseMigrationServiceClient::ModifyConversionConfiguration(
    const ModifyConversionConfigurationRequest& request) const {
  return ModifyConversionConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyDataMigrationOutcome DatabaseMigrationServiceClient::ModifyDataMigration(const ModifyDataMigrationRequest& request) const {
  return ModifyDataMigrationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyDataProviderOutcome DatabaseMigrationServiceClient::ModifyDataProvider(const ModifyDataProviderRequest& request) const {
  return ModifyDataProviderOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyEndpointOutcome DatabaseMigrationServiceClient::ModifyEndpoint(const ModifyEndpointRequest& request) const {
  return ModifyEndpointOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyEventSubscriptionOutcome DatabaseMigrationServiceClient::ModifyEventSubscription(
    const ModifyEventSubscriptionRequest& request) const {
  return ModifyEventSubscriptionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyInstanceProfileOutcome DatabaseMigrationServiceClient::ModifyInstanceProfile(const ModifyInstanceProfileRequest& request) const {
  return ModifyInstanceProfileOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyMigrationProjectOutcome DatabaseMigrationServiceClient::ModifyMigrationProject(const ModifyMigrationProjectRequest& request) const {
  return ModifyMigrationProjectOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyReplicationConfigOutcome DatabaseMigrationServiceClient::ModifyReplicationConfig(
    const ModifyReplicationConfigRequest& request) const {
  return ModifyReplicationConfigOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyReplicationInstanceOutcome DatabaseMigrationServiceClient::ModifyReplicationInstance(
    const ModifyReplicationInstanceRequest& request) const {
  return ModifyReplicationInstanceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyReplicationSubnetGroupOutcome DatabaseMigrationServiceClient::ModifyReplicationSubnetGroup(
    const ModifyReplicationSubnetGroupRequest& request) const {
  return ModifyReplicationSubnetGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyReplicationTaskOutcome DatabaseMigrationServiceClient::ModifyReplicationTask(const ModifyReplicationTaskRequest& request) const {
  return ModifyReplicationTaskOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

MoveReplicationTaskOutcome DatabaseMigrationServiceClient::MoveReplicationTask(const MoveReplicationTaskRequest& request) const {
  return MoveReplicationTaskOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RebootReplicationInstanceOutcome DatabaseMigrationServiceClient::RebootReplicationInstance(
    const RebootReplicationInstanceRequest& request) const {
  return RebootReplicationInstanceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RefreshSchemasOutcome DatabaseMigrationServiceClient::RefreshSchemas(const RefreshSchemasRequest& request) const {
  return RefreshSchemasOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ReloadReplicationTablesOutcome DatabaseMigrationServiceClient::ReloadReplicationTables(
    const ReloadReplicationTablesRequest& request) const {
  return ReloadReplicationTablesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ReloadTablesOutcome DatabaseMigrationServiceClient::ReloadTables(const ReloadTablesRequest& request) const {
  return ReloadTablesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RemoveTagsFromResourceOutcome DatabaseMigrationServiceClient::RemoveTagsFromResource(const RemoveTagsFromResourceRequest& request) const {
  return RemoveTagsFromResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RunFleetAdvisorLsaAnalysisOutcome DatabaseMigrationServiceClient::RunFleetAdvisorLsaAnalysis(
    const RunFleetAdvisorLsaAnalysisRequest& request) const {
  return RunFleetAdvisorLsaAnalysisOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartDataMigrationOutcome DatabaseMigrationServiceClient::StartDataMigration(const StartDataMigrationRequest& request) const {
  return StartDataMigrationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartExtensionPackAssociationOutcome DatabaseMigrationServiceClient::StartExtensionPackAssociation(
    const StartExtensionPackAssociationRequest& request) const {
  return StartExtensionPackAssociationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartMetadataModelAssessmentOutcome DatabaseMigrationServiceClient::StartMetadataModelAssessment(
    const StartMetadataModelAssessmentRequest& request) const {
  return StartMetadataModelAssessmentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartMetadataModelConversionOutcome DatabaseMigrationServiceClient::StartMetadataModelConversion(
    const StartMetadataModelConversionRequest& request) const {
  return StartMetadataModelConversionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartMetadataModelCreationOutcome DatabaseMigrationServiceClient::StartMetadataModelCreation(
    const StartMetadataModelCreationRequest& request) const {
  return StartMetadataModelCreationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartMetadataModelExportAsScriptOutcome DatabaseMigrationServiceClient::StartMetadataModelExportAsScript(
    const StartMetadataModelExportAsScriptRequest& request) const {
  return StartMetadataModelExportAsScriptOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartMetadataModelExportToTargetOutcome DatabaseMigrationServiceClient::StartMetadataModelExportToTarget(
    const StartMetadataModelExportToTargetRequest& request) const {
  return StartMetadataModelExportToTargetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartMetadataModelImportOutcome DatabaseMigrationServiceClient::StartMetadataModelImport(
    const StartMetadataModelImportRequest& request) const {
  return StartMetadataModelImportOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartRecommendationsOutcome DatabaseMigrationServiceClient::StartRecommendations(const StartRecommendationsRequest& request) const {
  return StartRecommendationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartReplicationOutcome DatabaseMigrationServiceClient::StartReplication(const StartReplicationRequest& request) const {
  return StartReplicationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartReplicationTaskOutcome DatabaseMigrationServiceClient::StartReplicationTask(const StartReplicationTaskRequest& request) const {
  return StartReplicationTaskOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartReplicationTaskAssessmentOutcome DatabaseMigrationServiceClient::StartReplicationTaskAssessment(
    const StartReplicationTaskAssessmentRequest& request) const {
  return StartReplicationTaskAssessmentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartReplicationTaskAssessmentRunOutcome DatabaseMigrationServiceClient::StartReplicationTaskAssessmentRun(
    const StartReplicationTaskAssessmentRunRequest& request) const {
  return StartReplicationTaskAssessmentRunOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopDataMigrationOutcome DatabaseMigrationServiceClient::StopDataMigration(const StopDataMigrationRequest& request) const {
  return StopDataMigrationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopReplicationOutcome DatabaseMigrationServiceClient::StopReplication(const StopReplicationRequest& request) const {
  return StopReplicationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopReplicationTaskOutcome DatabaseMigrationServiceClient::StopReplicationTask(const StopReplicationTaskRequest& request) const {
  return StopReplicationTaskOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TestConnectionOutcome DatabaseMigrationServiceClient::TestConnection(const TestConnectionRequest& request) const {
  return TestConnectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateSubscriptionsToEventBridgeOutcome DatabaseMigrationServiceClient::UpdateSubscriptionsToEventBridge(
    const UpdateSubscriptionsToEventBridgeRequest& request) const {
  return UpdateSubscriptionsToEventBridgeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
