/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/dms/DatabaseMigrationServiceErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/dms/DatabaseMigrationServiceEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in DatabaseMigrationServiceClient header */
#include <aws/dms/model/AddTagsToResourceResult.h>
#include <aws/dms/model/ApplyPendingMaintenanceActionResult.h>
#include <aws/dms/model/BatchStartRecommendationsResult.h>
#include <aws/dms/model/CancelReplicationTaskAssessmentRunResult.h>
#include <aws/dms/model/CreateDataProviderResult.h>
#include <aws/dms/model/CreateEndpointResult.h>
#include <aws/dms/model/CreateEventSubscriptionResult.h>
#include <aws/dms/model/CreateFleetAdvisorCollectorResult.h>
#include <aws/dms/model/CreateInstanceProfileResult.h>
#include <aws/dms/model/CreateMigrationProjectResult.h>
#include <aws/dms/model/CreateReplicationConfigResult.h>
#include <aws/dms/model/CreateReplicationInstanceResult.h>
#include <aws/dms/model/CreateReplicationSubnetGroupResult.h>
#include <aws/dms/model/CreateReplicationTaskResult.h>
#include <aws/dms/model/DeleteCertificateResult.h>
#include <aws/dms/model/DeleteConnectionResult.h>
#include <aws/dms/model/DeleteDataProviderResult.h>
#include <aws/dms/model/DeleteEndpointResult.h>
#include <aws/dms/model/DeleteEventSubscriptionResult.h>
#include <aws/dms/model/DeleteFleetAdvisorDatabasesResult.h>
#include <aws/dms/model/DeleteInstanceProfileResult.h>
#include <aws/dms/model/DeleteMigrationProjectResult.h>
#include <aws/dms/model/DeleteReplicationConfigResult.h>
#include <aws/dms/model/DeleteReplicationInstanceResult.h>
#include <aws/dms/model/DeleteReplicationSubnetGroupResult.h>
#include <aws/dms/model/DeleteReplicationTaskResult.h>
#include <aws/dms/model/DeleteReplicationTaskAssessmentRunResult.h>
#include <aws/dms/model/DescribeAccountAttributesResult.h>
#include <aws/dms/model/DescribeApplicableIndividualAssessmentsResult.h>
#include <aws/dms/model/DescribeCertificatesResult.h>
#include <aws/dms/model/DescribeConnectionsResult.h>
#include <aws/dms/model/DescribeConversionConfigurationResult.h>
#include <aws/dms/model/DescribeDataProvidersResult.h>
#include <aws/dms/model/DescribeEndpointSettingsResult.h>
#include <aws/dms/model/DescribeEndpointTypesResult.h>
#include <aws/dms/model/DescribeEndpointsResult.h>
#include <aws/dms/model/DescribeEngineVersionsResult.h>
#include <aws/dms/model/DescribeEventCategoriesResult.h>
#include <aws/dms/model/DescribeEventSubscriptionsResult.h>
#include <aws/dms/model/DescribeEventsResult.h>
#include <aws/dms/model/DescribeExtensionPackAssociationsResult.h>
#include <aws/dms/model/DescribeFleetAdvisorCollectorsResult.h>
#include <aws/dms/model/DescribeFleetAdvisorDatabasesResult.h>
#include <aws/dms/model/DescribeFleetAdvisorLsaAnalysisResult.h>
#include <aws/dms/model/DescribeFleetAdvisorSchemaObjectSummaryResult.h>
#include <aws/dms/model/DescribeFleetAdvisorSchemasResult.h>
#include <aws/dms/model/DescribeInstanceProfilesResult.h>
#include <aws/dms/model/DescribeMetadataModelAssessmentsResult.h>
#include <aws/dms/model/DescribeMetadataModelConversionsResult.h>
#include <aws/dms/model/DescribeMetadataModelExportsAsScriptResult.h>
#include <aws/dms/model/DescribeMetadataModelExportsToTargetResult.h>
#include <aws/dms/model/DescribeMetadataModelImportsResult.h>
#include <aws/dms/model/DescribeMigrationProjectsResult.h>
#include <aws/dms/model/DescribeOrderableReplicationInstancesResult.h>
#include <aws/dms/model/DescribePendingMaintenanceActionsResult.h>
#include <aws/dms/model/DescribeRecommendationLimitationsResult.h>
#include <aws/dms/model/DescribeRecommendationsResult.h>
#include <aws/dms/model/DescribeRefreshSchemasStatusResult.h>
#include <aws/dms/model/DescribeReplicationConfigsResult.h>
#include <aws/dms/model/DescribeReplicationInstanceTaskLogsResult.h>
#include <aws/dms/model/DescribeReplicationInstancesResult.h>
#include <aws/dms/model/DescribeReplicationSubnetGroupsResult.h>
#include <aws/dms/model/DescribeReplicationTableStatisticsResult.h>
#include <aws/dms/model/DescribeReplicationTaskAssessmentResultsResult.h>
#include <aws/dms/model/DescribeReplicationTaskAssessmentRunsResult.h>
#include <aws/dms/model/DescribeReplicationTaskIndividualAssessmentsResult.h>
#include <aws/dms/model/DescribeReplicationTasksResult.h>
#include <aws/dms/model/DescribeReplicationsResult.h>
#include <aws/dms/model/DescribeSchemasResult.h>
#include <aws/dms/model/DescribeTableStatisticsResult.h>
#include <aws/dms/model/ExportMetadataModelAssessmentResult.h>
#include <aws/dms/model/ImportCertificateResult.h>
#include <aws/dms/model/ListTagsForResourceResult.h>
#include <aws/dms/model/ModifyConversionConfigurationResult.h>
#include <aws/dms/model/ModifyDataProviderResult.h>
#include <aws/dms/model/ModifyEndpointResult.h>
#include <aws/dms/model/ModifyEventSubscriptionResult.h>
#include <aws/dms/model/ModifyInstanceProfileResult.h>
#include <aws/dms/model/ModifyMigrationProjectResult.h>
#include <aws/dms/model/ModifyReplicationConfigResult.h>
#include <aws/dms/model/ModifyReplicationInstanceResult.h>
#include <aws/dms/model/ModifyReplicationSubnetGroupResult.h>
#include <aws/dms/model/ModifyReplicationTaskResult.h>
#include <aws/dms/model/MoveReplicationTaskResult.h>
#include <aws/dms/model/RebootReplicationInstanceResult.h>
#include <aws/dms/model/RefreshSchemasResult.h>
#include <aws/dms/model/ReloadReplicationTablesResult.h>
#include <aws/dms/model/ReloadTablesResult.h>
#include <aws/dms/model/RemoveTagsFromResourceResult.h>
#include <aws/dms/model/RunFleetAdvisorLsaAnalysisResult.h>
#include <aws/dms/model/StartExtensionPackAssociationResult.h>
#include <aws/dms/model/StartMetadataModelAssessmentResult.h>
#include <aws/dms/model/StartMetadataModelConversionResult.h>
#include <aws/dms/model/StartMetadataModelExportAsScriptResult.h>
#include <aws/dms/model/StartMetadataModelExportToTargetResult.h>
#include <aws/dms/model/StartMetadataModelImportResult.h>
#include <aws/dms/model/StartReplicationResult.h>
#include <aws/dms/model/StartReplicationTaskResult.h>
#include <aws/dms/model/StartReplicationTaskAssessmentResult.h>
#include <aws/dms/model/StartReplicationTaskAssessmentRunResult.h>
#include <aws/dms/model/StopReplicationResult.h>
#include <aws/dms/model/StopReplicationTaskResult.h>
#include <aws/dms/model/TestConnectionResult.h>
#include <aws/dms/model/UpdateSubscriptionsToEventBridgeResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in DatabaseMigrationServiceClient header */

namespace Aws
{
  namespace Http
  {
    class HttpClient;
    class HttpClientFactory;
  } // namespace Http

  namespace Utils
  {
    template< typename R, typename E> class Outcome;

    namespace Threading
    {
      class Executor;
    } // namespace Threading
  } // namespace Utils

  namespace Auth
  {
    class AWSCredentials;
    class AWSCredentialsProvider;
  } // namespace Auth

  namespace Client
  {
    class RetryStrategy;
  } // namespace Client

  namespace DatabaseMigrationService
  {
    using DatabaseMigrationServiceClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using DatabaseMigrationServiceEndpointProviderBase = Aws::DatabaseMigrationService::Endpoint::DatabaseMigrationServiceEndpointProviderBase;
    using DatabaseMigrationServiceEndpointProvider = Aws::DatabaseMigrationService::Endpoint::DatabaseMigrationServiceEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in DatabaseMigrationServiceClient header */
      class AddTagsToResourceRequest;
      class ApplyPendingMaintenanceActionRequest;
      class BatchStartRecommendationsRequest;
      class CancelReplicationTaskAssessmentRunRequest;
      class CreateDataProviderRequest;
      class CreateEndpointRequest;
      class CreateEventSubscriptionRequest;
      class CreateFleetAdvisorCollectorRequest;
      class CreateInstanceProfileRequest;
      class CreateMigrationProjectRequest;
      class CreateReplicationConfigRequest;
      class CreateReplicationInstanceRequest;
      class CreateReplicationSubnetGroupRequest;
      class CreateReplicationTaskRequest;
      class DeleteCertificateRequest;
      class DeleteConnectionRequest;
      class DeleteDataProviderRequest;
      class DeleteEndpointRequest;
      class DeleteEventSubscriptionRequest;
      class DeleteFleetAdvisorCollectorRequest;
      class DeleteFleetAdvisorDatabasesRequest;
      class DeleteInstanceProfileRequest;
      class DeleteMigrationProjectRequest;
      class DeleteReplicationConfigRequest;
      class DeleteReplicationInstanceRequest;
      class DeleteReplicationSubnetGroupRequest;
      class DeleteReplicationTaskRequest;
      class DeleteReplicationTaskAssessmentRunRequest;
      class DescribeAccountAttributesRequest;
      class DescribeApplicableIndividualAssessmentsRequest;
      class DescribeCertificatesRequest;
      class DescribeConnectionsRequest;
      class DescribeConversionConfigurationRequest;
      class DescribeDataProvidersRequest;
      class DescribeEndpointSettingsRequest;
      class DescribeEndpointTypesRequest;
      class DescribeEndpointsRequest;
      class DescribeEngineVersionsRequest;
      class DescribeEventCategoriesRequest;
      class DescribeEventSubscriptionsRequest;
      class DescribeEventsRequest;
      class DescribeExtensionPackAssociationsRequest;
      class DescribeFleetAdvisorCollectorsRequest;
      class DescribeFleetAdvisorDatabasesRequest;
      class DescribeFleetAdvisorLsaAnalysisRequest;
      class DescribeFleetAdvisorSchemaObjectSummaryRequest;
      class DescribeFleetAdvisorSchemasRequest;
      class DescribeInstanceProfilesRequest;
      class DescribeMetadataModelAssessmentsRequest;
      class DescribeMetadataModelConversionsRequest;
      class DescribeMetadataModelExportsAsScriptRequest;
      class DescribeMetadataModelExportsToTargetRequest;
      class DescribeMetadataModelImportsRequest;
      class DescribeMigrationProjectsRequest;
      class DescribeOrderableReplicationInstancesRequest;
      class DescribePendingMaintenanceActionsRequest;
      class DescribeRecommendationLimitationsRequest;
      class DescribeRecommendationsRequest;
      class DescribeRefreshSchemasStatusRequest;
      class DescribeReplicationConfigsRequest;
      class DescribeReplicationInstanceTaskLogsRequest;
      class DescribeReplicationInstancesRequest;
      class DescribeReplicationSubnetGroupsRequest;
      class DescribeReplicationTableStatisticsRequest;
      class DescribeReplicationTaskAssessmentResultsRequest;
      class DescribeReplicationTaskAssessmentRunsRequest;
      class DescribeReplicationTaskIndividualAssessmentsRequest;
      class DescribeReplicationTasksRequest;
      class DescribeReplicationsRequest;
      class DescribeSchemasRequest;
      class DescribeTableStatisticsRequest;
      class ExportMetadataModelAssessmentRequest;
      class ImportCertificateRequest;
      class ListTagsForResourceRequest;
      class ModifyConversionConfigurationRequest;
      class ModifyDataProviderRequest;
      class ModifyEndpointRequest;
      class ModifyEventSubscriptionRequest;
      class ModifyInstanceProfileRequest;
      class ModifyMigrationProjectRequest;
      class ModifyReplicationConfigRequest;
      class ModifyReplicationInstanceRequest;
      class ModifyReplicationSubnetGroupRequest;
      class ModifyReplicationTaskRequest;
      class MoveReplicationTaskRequest;
      class RebootReplicationInstanceRequest;
      class RefreshSchemasRequest;
      class ReloadReplicationTablesRequest;
      class ReloadTablesRequest;
      class RemoveTagsFromResourceRequest;
      class RunFleetAdvisorLsaAnalysisRequest;
      class StartExtensionPackAssociationRequest;
      class StartMetadataModelAssessmentRequest;
      class StartMetadataModelConversionRequest;
      class StartMetadataModelExportAsScriptRequest;
      class StartMetadataModelExportToTargetRequest;
      class StartMetadataModelImportRequest;
      class StartRecommendationsRequest;
      class StartReplicationRequest;
      class StartReplicationTaskRequest;
      class StartReplicationTaskAssessmentRequest;
      class StartReplicationTaskAssessmentRunRequest;
      class StopReplicationRequest;
      class StopReplicationTaskRequest;
      class TestConnectionRequest;
      class UpdateSubscriptionsToEventBridgeRequest;
      /* End of service model forward declarations required in DatabaseMigrationServiceClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AddTagsToResourceResult, DatabaseMigrationServiceError> AddTagsToResourceOutcome;
      typedef Aws::Utils::Outcome<ApplyPendingMaintenanceActionResult, DatabaseMigrationServiceError> ApplyPendingMaintenanceActionOutcome;
      typedef Aws::Utils::Outcome<BatchStartRecommendationsResult, DatabaseMigrationServiceError> BatchStartRecommendationsOutcome;
      typedef Aws::Utils::Outcome<CancelReplicationTaskAssessmentRunResult, DatabaseMigrationServiceError> CancelReplicationTaskAssessmentRunOutcome;
      typedef Aws::Utils::Outcome<CreateDataProviderResult, DatabaseMigrationServiceError> CreateDataProviderOutcome;
      typedef Aws::Utils::Outcome<CreateEndpointResult, DatabaseMigrationServiceError> CreateEndpointOutcome;
      typedef Aws::Utils::Outcome<CreateEventSubscriptionResult, DatabaseMigrationServiceError> CreateEventSubscriptionOutcome;
      typedef Aws::Utils::Outcome<CreateFleetAdvisorCollectorResult, DatabaseMigrationServiceError> CreateFleetAdvisorCollectorOutcome;
      typedef Aws::Utils::Outcome<CreateInstanceProfileResult, DatabaseMigrationServiceError> CreateInstanceProfileOutcome;
      typedef Aws::Utils::Outcome<CreateMigrationProjectResult, DatabaseMigrationServiceError> CreateMigrationProjectOutcome;
      typedef Aws::Utils::Outcome<CreateReplicationConfigResult, DatabaseMigrationServiceError> CreateReplicationConfigOutcome;
      typedef Aws::Utils::Outcome<CreateReplicationInstanceResult, DatabaseMigrationServiceError> CreateReplicationInstanceOutcome;
      typedef Aws::Utils::Outcome<CreateReplicationSubnetGroupResult, DatabaseMigrationServiceError> CreateReplicationSubnetGroupOutcome;
      typedef Aws::Utils::Outcome<CreateReplicationTaskResult, DatabaseMigrationServiceError> CreateReplicationTaskOutcome;
      typedef Aws::Utils::Outcome<DeleteCertificateResult, DatabaseMigrationServiceError> DeleteCertificateOutcome;
      typedef Aws::Utils::Outcome<DeleteConnectionResult, DatabaseMigrationServiceError> DeleteConnectionOutcome;
      typedef Aws::Utils::Outcome<DeleteDataProviderResult, DatabaseMigrationServiceError> DeleteDataProviderOutcome;
      typedef Aws::Utils::Outcome<DeleteEndpointResult, DatabaseMigrationServiceError> DeleteEndpointOutcome;
      typedef Aws::Utils::Outcome<DeleteEventSubscriptionResult, DatabaseMigrationServiceError> DeleteEventSubscriptionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, DatabaseMigrationServiceError> DeleteFleetAdvisorCollectorOutcome;
      typedef Aws::Utils::Outcome<DeleteFleetAdvisorDatabasesResult, DatabaseMigrationServiceError> DeleteFleetAdvisorDatabasesOutcome;
      typedef Aws::Utils::Outcome<DeleteInstanceProfileResult, DatabaseMigrationServiceError> DeleteInstanceProfileOutcome;
      typedef Aws::Utils::Outcome<DeleteMigrationProjectResult, DatabaseMigrationServiceError> DeleteMigrationProjectOutcome;
      typedef Aws::Utils::Outcome<DeleteReplicationConfigResult, DatabaseMigrationServiceError> DeleteReplicationConfigOutcome;
      typedef Aws::Utils::Outcome<DeleteReplicationInstanceResult, DatabaseMigrationServiceError> DeleteReplicationInstanceOutcome;
      typedef Aws::Utils::Outcome<DeleteReplicationSubnetGroupResult, DatabaseMigrationServiceError> DeleteReplicationSubnetGroupOutcome;
      typedef Aws::Utils::Outcome<DeleteReplicationTaskResult, DatabaseMigrationServiceError> DeleteReplicationTaskOutcome;
      typedef Aws::Utils::Outcome<DeleteReplicationTaskAssessmentRunResult, DatabaseMigrationServiceError> DeleteReplicationTaskAssessmentRunOutcome;
      typedef Aws::Utils::Outcome<DescribeAccountAttributesResult, DatabaseMigrationServiceError> DescribeAccountAttributesOutcome;
      typedef Aws::Utils::Outcome<DescribeApplicableIndividualAssessmentsResult, DatabaseMigrationServiceError> DescribeApplicableIndividualAssessmentsOutcome;
      typedef Aws::Utils::Outcome<DescribeCertificatesResult, DatabaseMigrationServiceError> DescribeCertificatesOutcome;
      typedef Aws::Utils::Outcome<DescribeConnectionsResult, DatabaseMigrationServiceError> DescribeConnectionsOutcome;
      typedef Aws::Utils::Outcome<DescribeConversionConfigurationResult, DatabaseMigrationServiceError> DescribeConversionConfigurationOutcome;
      typedef Aws::Utils::Outcome<DescribeDataProvidersResult, DatabaseMigrationServiceError> DescribeDataProvidersOutcome;
      typedef Aws::Utils::Outcome<DescribeEndpointSettingsResult, DatabaseMigrationServiceError> DescribeEndpointSettingsOutcome;
      typedef Aws::Utils::Outcome<DescribeEndpointTypesResult, DatabaseMigrationServiceError> DescribeEndpointTypesOutcome;
      typedef Aws::Utils::Outcome<DescribeEndpointsResult, DatabaseMigrationServiceError> DescribeEndpointsOutcome;
      typedef Aws::Utils::Outcome<DescribeEngineVersionsResult, DatabaseMigrationServiceError> DescribeEngineVersionsOutcome;
      typedef Aws::Utils::Outcome<DescribeEventCategoriesResult, DatabaseMigrationServiceError> DescribeEventCategoriesOutcome;
      typedef Aws::Utils::Outcome<DescribeEventSubscriptionsResult, DatabaseMigrationServiceError> DescribeEventSubscriptionsOutcome;
      typedef Aws::Utils::Outcome<DescribeEventsResult, DatabaseMigrationServiceError> DescribeEventsOutcome;
      typedef Aws::Utils::Outcome<DescribeExtensionPackAssociationsResult, DatabaseMigrationServiceError> DescribeExtensionPackAssociationsOutcome;
      typedef Aws::Utils::Outcome<DescribeFleetAdvisorCollectorsResult, DatabaseMigrationServiceError> DescribeFleetAdvisorCollectorsOutcome;
      typedef Aws::Utils::Outcome<DescribeFleetAdvisorDatabasesResult, DatabaseMigrationServiceError> DescribeFleetAdvisorDatabasesOutcome;
      typedef Aws::Utils::Outcome<DescribeFleetAdvisorLsaAnalysisResult, DatabaseMigrationServiceError> DescribeFleetAdvisorLsaAnalysisOutcome;
      typedef Aws::Utils::Outcome<DescribeFleetAdvisorSchemaObjectSummaryResult, DatabaseMigrationServiceError> DescribeFleetAdvisorSchemaObjectSummaryOutcome;
      typedef Aws::Utils::Outcome<DescribeFleetAdvisorSchemasResult, DatabaseMigrationServiceError> DescribeFleetAdvisorSchemasOutcome;
      typedef Aws::Utils::Outcome<DescribeInstanceProfilesResult, DatabaseMigrationServiceError> DescribeInstanceProfilesOutcome;
      typedef Aws::Utils::Outcome<DescribeMetadataModelAssessmentsResult, DatabaseMigrationServiceError> DescribeMetadataModelAssessmentsOutcome;
      typedef Aws::Utils::Outcome<DescribeMetadataModelConversionsResult, DatabaseMigrationServiceError> DescribeMetadataModelConversionsOutcome;
      typedef Aws::Utils::Outcome<DescribeMetadataModelExportsAsScriptResult, DatabaseMigrationServiceError> DescribeMetadataModelExportsAsScriptOutcome;
      typedef Aws::Utils::Outcome<DescribeMetadataModelExportsToTargetResult, DatabaseMigrationServiceError> DescribeMetadataModelExportsToTargetOutcome;
      typedef Aws::Utils::Outcome<DescribeMetadataModelImportsResult, DatabaseMigrationServiceError> DescribeMetadataModelImportsOutcome;
      typedef Aws::Utils::Outcome<DescribeMigrationProjectsResult, DatabaseMigrationServiceError> DescribeMigrationProjectsOutcome;
      typedef Aws::Utils::Outcome<DescribeOrderableReplicationInstancesResult, DatabaseMigrationServiceError> DescribeOrderableReplicationInstancesOutcome;
      typedef Aws::Utils::Outcome<DescribePendingMaintenanceActionsResult, DatabaseMigrationServiceError> DescribePendingMaintenanceActionsOutcome;
      typedef Aws::Utils::Outcome<DescribeRecommendationLimitationsResult, DatabaseMigrationServiceError> DescribeRecommendationLimitationsOutcome;
      typedef Aws::Utils::Outcome<DescribeRecommendationsResult, DatabaseMigrationServiceError> DescribeRecommendationsOutcome;
      typedef Aws::Utils::Outcome<DescribeRefreshSchemasStatusResult, DatabaseMigrationServiceError> DescribeRefreshSchemasStatusOutcome;
      typedef Aws::Utils::Outcome<DescribeReplicationConfigsResult, DatabaseMigrationServiceError> DescribeReplicationConfigsOutcome;
      typedef Aws::Utils::Outcome<DescribeReplicationInstanceTaskLogsResult, DatabaseMigrationServiceError> DescribeReplicationInstanceTaskLogsOutcome;
      typedef Aws::Utils::Outcome<DescribeReplicationInstancesResult, DatabaseMigrationServiceError> DescribeReplicationInstancesOutcome;
      typedef Aws::Utils::Outcome<DescribeReplicationSubnetGroupsResult, DatabaseMigrationServiceError> DescribeReplicationSubnetGroupsOutcome;
      typedef Aws::Utils::Outcome<DescribeReplicationTableStatisticsResult, DatabaseMigrationServiceError> DescribeReplicationTableStatisticsOutcome;
      typedef Aws::Utils::Outcome<DescribeReplicationTaskAssessmentResultsResult, DatabaseMigrationServiceError> DescribeReplicationTaskAssessmentResultsOutcome;
      typedef Aws::Utils::Outcome<DescribeReplicationTaskAssessmentRunsResult, DatabaseMigrationServiceError> DescribeReplicationTaskAssessmentRunsOutcome;
      typedef Aws::Utils::Outcome<DescribeReplicationTaskIndividualAssessmentsResult, DatabaseMigrationServiceError> DescribeReplicationTaskIndividualAssessmentsOutcome;
      typedef Aws::Utils::Outcome<DescribeReplicationTasksResult, DatabaseMigrationServiceError> DescribeReplicationTasksOutcome;
      typedef Aws::Utils::Outcome<DescribeReplicationsResult, DatabaseMigrationServiceError> DescribeReplicationsOutcome;
      typedef Aws::Utils::Outcome<DescribeSchemasResult, DatabaseMigrationServiceError> DescribeSchemasOutcome;
      typedef Aws::Utils::Outcome<DescribeTableStatisticsResult, DatabaseMigrationServiceError> DescribeTableStatisticsOutcome;
      typedef Aws::Utils::Outcome<ExportMetadataModelAssessmentResult, DatabaseMigrationServiceError> ExportMetadataModelAssessmentOutcome;
      typedef Aws::Utils::Outcome<ImportCertificateResult, DatabaseMigrationServiceError> ImportCertificateOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, DatabaseMigrationServiceError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ModifyConversionConfigurationResult, DatabaseMigrationServiceError> ModifyConversionConfigurationOutcome;
      typedef Aws::Utils::Outcome<ModifyDataProviderResult, DatabaseMigrationServiceError> ModifyDataProviderOutcome;
      typedef Aws::Utils::Outcome<ModifyEndpointResult, DatabaseMigrationServiceError> ModifyEndpointOutcome;
      typedef Aws::Utils::Outcome<ModifyEventSubscriptionResult, DatabaseMigrationServiceError> ModifyEventSubscriptionOutcome;
      typedef Aws::Utils::Outcome<ModifyInstanceProfileResult, DatabaseMigrationServiceError> ModifyInstanceProfileOutcome;
      typedef Aws::Utils::Outcome<ModifyMigrationProjectResult, DatabaseMigrationServiceError> ModifyMigrationProjectOutcome;
      typedef Aws::Utils::Outcome<ModifyReplicationConfigResult, DatabaseMigrationServiceError> ModifyReplicationConfigOutcome;
      typedef Aws::Utils::Outcome<ModifyReplicationInstanceResult, DatabaseMigrationServiceError> ModifyReplicationInstanceOutcome;
      typedef Aws::Utils::Outcome<ModifyReplicationSubnetGroupResult, DatabaseMigrationServiceError> ModifyReplicationSubnetGroupOutcome;
      typedef Aws::Utils::Outcome<ModifyReplicationTaskResult, DatabaseMigrationServiceError> ModifyReplicationTaskOutcome;
      typedef Aws::Utils::Outcome<MoveReplicationTaskResult, DatabaseMigrationServiceError> MoveReplicationTaskOutcome;
      typedef Aws::Utils::Outcome<RebootReplicationInstanceResult, DatabaseMigrationServiceError> RebootReplicationInstanceOutcome;
      typedef Aws::Utils::Outcome<RefreshSchemasResult, DatabaseMigrationServiceError> RefreshSchemasOutcome;
      typedef Aws::Utils::Outcome<ReloadReplicationTablesResult, DatabaseMigrationServiceError> ReloadReplicationTablesOutcome;
      typedef Aws::Utils::Outcome<ReloadTablesResult, DatabaseMigrationServiceError> ReloadTablesOutcome;
      typedef Aws::Utils::Outcome<RemoveTagsFromResourceResult, DatabaseMigrationServiceError> RemoveTagsFromResourceOutcome;
      typedef Aws::Utils::Outcome<RunFleetAdvisorLsaAnalysisResult, DatabaseMigrationServiceError> RunFleetAdvisorLsaAnalysisOutcome;
      typedef Aws::Utils::Outcome<StartExtensionPackAssociationResult, DatabaseMigrationServiceError> StartExtensionPackAssociationOutcome;
      typedef Aws::Utils::Outcome<StartMetadataModelAssessmentResult, DatabaseMigrationServiceError> StartMetadataModelAssessmentOutcome;
      typedef Aws::Utils::Outcome<StartMetadataModelConversionResult, DatabaseMigrationServiceError> StartMetadataModelConversionOutcome;
      typedef Aws::Utils::Outcome<StartMetadataModelExportAsScriptResult, DatabaseMigrationServiceError> StartMetadataModelExportAsScriptOutcome;
      typedef Aws::Utils::Outcome<StartMetadataModelExportToTargetResult, DatabaseMigrationServiceError> StartMetadataModelExportToTargetOutcome;
      typedef Aws::Utils::Outcome<StartMetadataModelImportResult, DatabaseMigrationServiceError> StartMetadataModelImportOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, DatabaseMigrationServiceError> StartRecommendationsOutcome;
      typedef Aws::Utils::Outcome<StartReplicationResult, DatabaseMigrationServiceError> StartReplicationOutcome;
      typedef Aws::Utils::Outcome<StartReplicationTaskResult, DatabaseMigrationServiceError> StartReplicationTaskOutcome;
      typedef Aws::Utils::Outcome<StartReplicationTaskAssessmentResult, DatabaseMigrationServiceError> StartReplicationTaskAssessmentOutcome;
      typedef Aws::Utils::Outcome<StartReplicationTaskAssessmentRunResult, DatabaseMigrationServiceError> StartReplicationTaskAssessmentRunOutcome;
      typedef Aws::Utils::Outcome<StopReplicationResult, DatabaseMigrationServiceError> StopReplicationOutcome;
      typedef Aws::Utils::Outcome<StopReplicationTaskResult, DatabaseMigrationServiceError> StopReplicationTaskOutcome;
      typedef Aws::Utils::Outcome<TestConnectionResult, DatabaseMigrationServiceError> TestConnectionOutcome;
      typedef Aws::Utils::Outcome<UpdateSubscriptionsToEventBridgeResult, DatabaseMigrationServiceError> UpdateSubscriptionsToEventBridgeOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AddTagsToResourceOutcome> AddTagsToResourceOutcomeCallable;
      typedef std::future<ApplyPendingMaintenanceActionOutcome> ApplyPendingMaintenanceActionOutcomeCallable;
      typedef std::future<BatchStartRecommendationsOutcome> BatchStartRecommendationsOutcomeCallable;
      typedef std::future<CancelReplicationTaskAssessmentRunOutcome> CancelReplicationTaskAssessmentRunOutcomeCallable;
      typedef std::future<CreateDataProviderOutcome> CreateDataProviderOutcomeCallable;
      typedef std::future<CreateEndpointOutcome> CreateEndpointOutcomeCallable;
      typedef std::future<CreateEventSubscriptionOutcome> CreateEventSubscriptionOutcomeCallable;
      typedef std::future<CreateFleetAdvisorCollectorOutcome> CreateFleetAdvisorCollectorOutcomeCallable;
      typedef std::future<CreateInstanceProfileOutcome> CreateInstanceProfileOutcomeCallable;
      typedef std::future<CreateMigrationProjectOutcome> CreateMigrationProjectOutcomeCallable;
      typedef std::future<CreateReplicationConfigOutcome> CreateReplicationConfigOutcomeCallable;
      typedef std::future<CreateReplicationInstanceOutcome> CreateReplicationInstanceOutcomeCallable;
      typedef std::future<CreateReplicationSubnetGroupOutcome> CreateReplicationSubnetGroupOutcomeCallable;
      typedef std::future<CreateReplicationTaskOutcome> CreateReplicationTaskOutcomeCallable;
      typedef std::future<DeleteCertificateOutcome> DeleteCertificateOutcomeCallable;
      typedef std::future<DeleteConnectionOutcome> DeleteConnectionOutcomeCallable;
      typedef std::future<DeleteDataProviderOutcome> DeleteDataProviderOutcomeCallable;
      typedef std::future<DeleteEndpointOutcome> DeleteEndpointOutcomeCallable;
      typedef std::future<DeleteEventSubscriptionOutcome> DeleteEventSubscriptionOutcomeCallable;
      typedef std::future<DeleteFleetAdvisorCollectorOutcome> DeleteFleetAdvisorCollectorOutcomeCallable;
      typedef std::future<DeleteFleetAdvisorDatabasesOutcome> DeleteFleetAdvisorDatabasesOutcomeCallable;
      typedef std::future<DeleteInstanceProfileOutcome> DeleteInstanceProfileOutcomeCallable;
      typedef std::future<DeleteMigrationProjectOutcome> DeleteMigrationProjectOutcomeCallable;
      typedef std::future<DeleteReplicationConfigOutcome> DeleteReplicationConfigOutcomeCallable;
      typedef std::future<DeleteReplicationInstanceOutcome> DeleteReplicationInstanceOutcomeCallable;
      typedef std::future<DeleteReplicationSubnetGroupOutcome> DeleteReplicationSubnetGroupOutcomeCallable;
      typedef std::future<DeleteReplicationTaskOutcome> DeleteReplicationTaskOutcomeCallable;
      typedef std::future<DeleteReplicationTaskAssessmentRunOutcome> DeleteReplicationTaskAssessmentRunOutcomeCallable;
      typedef std::future<DescribeAccountAttributesOutcome> DescribeAccountAttributesOutcomeCallable;
      typedef std::future<DescribeApplicableIndividualAssessmentsOutcome> DescribeApplicableIndividualAssessmentsOutcomeCallable;
      typedef std::future<DescribeCertificatesOutcome> DescribeCertificatesOutcomeCallable;
      typedef std::future<DescribeConnectionsOutcome> DescribeConnectionsOutcomeCallable;
      typedef std::future<DescribeConversionConfigurationOutcome> DescribeConversionConfigurationOutcomeCallable;
      typedef std::future<DescribeDataProvidersOutcome> DescribeDataProvidersOutcomeCallable;
      typedef std::future<DescribeEndpointSettingsOutcome> DescribeEndpointSettingsOutcomeCallable;
      typedef std::future<DescribeEndpointTypesOutcome> DescribeEndpointTypesOutcomeCallable;
      typedef std::future<DescribeEndpointsOutcome> DescribeEndpointsOutcomeCallable;
      typedef std::future<DescribeEngineVersionsOutcome> DescribeEngineVersionsOutcomeCallable;
      typedef std::future<DescribeEventCategoriesOutcome> DescribeEventCategoriesOutcomeCallable;
      typedef std::future<DescribeEventSubscriptionsOutcome> DescribeEventSubscriptionsOutcomeCallable;
      typedef std::future<DescribeEventsOutcome> DescribeEventsOutcomeCallable;
      typedef std::future<DescribeExtensionPackAssociationsOutcome> DescribeExtensionPackAssociationsOutcomeCallable;
      typedef std::future<DescribeFleetAdvisorCollectorsOutcome> DescribeFleetAdvisorCollectorsOutcomeCallable;
      typedef std::future<DescribeFleetAdvisorDatabasesOutcome> DescribeFleetAdvisorDatabasesOutcomeCallable;
      typedef std::future<DescribeFleetAdvisorLsaAnalysisOutcome> DescribeFleetAdvisorLsaAnalysisOutcomeCallable;
      typedef std::future<DescribeFleetAdvisorSchemaObjectSummaryOutcome> DescribeFleetAdvisorSchemaObjectSummaryOutcomeCallable;
      typedef std::future<DescribeFleetAdvisorSchemasOutcome> DescribeFleetAdvisorSchemasOutcomeCallable;
      typedef std::future<DescribeInstanceProfilesOutcome> DescribeInstanceProfilesOutcomeCallable;
      typedef std::future<DescribeMetadataModelAssessmentsOutcome> DescribeMetadataModelAssessmentsOutcomeCallable;
      typedef std::future<DescribeMetadataModelConversionsOutcome> DescribeMetadataModelConversionsOutcomeCallable;
      typedef std::future<DescribeMetadataModelExportsAsScriptOutcome> DescribeMetadataModelExportsAsScriptOutcomeCallable;
      typedef std::future<DescribeMetadataModelExportsToTargetOutcome> DescribeMetadataModelExportsToTargetOutcomeCallable;
      typedef std::future<DescribeMetadataModelImportsOutcome> DescribeMetadataModelImportsOutcomeCallable;
      typedef std::future<DescribeMigrationProjectsOutcome> DescribeMigrationProjectsOutcomeCallable;
      typedef std::future<DescribeOrderableReplicationInstancesOutcome> DescribeOrderableReplicationInstancesOutcomeCallable;
      typedef std::future<DescribePendingMaintenanceActionsOutcome> DescribePendingMaintenanceActionsOutcomeCallable;
      typedef std::future<DescribeRecommendationLimitationsOutcome> DescribeRecommendationLimitationsOutcomeCallable;
      typedef std::future<DescribeRecommendationsOutcome> DescribeRecommendationsOutcomeCallable;
      typedef std::future<DescribeRefreshSchemasStatusOutcome> DescribeRefreshSchemasStatusOutcomeCallable;
      typedef std::future<DescribeReplicationConfigsOutcome> DescribeReplicationConfigsOutcomeCallable;
      typedef std::future<DescribeReplicationInstanceTaskLogsOutcome> DescribeReplicationInstanceTaskLogsOutcomeCallable;
      typedef std::future<DescribeReplicationInstancesOutcome> DescribeReplicationInstancesOutcomeCallable;
      typedef std::future<DescribeReplicationSubnetGroupsOutcome> DescribeReplicationSubnetGroupsOutcomeCallable;
      typedef std::future<DescribeReplicationTableStatisticsOutcome> DescribeReplicationTableStatisticsOutcomeCallable;
      typedef std::future<DescribeReplicationTaskAssessmentResultsOutcome> DescribeReplicationTaskAssessmentResultsOutcomeCallable;
      typedef std::future<DescribeReplicationTaskAssessmentRunsOutcome> DescribeReplicationTaskAssessmentRunsOutcomeCallable;
      typedef std::future<DescribeReplicationTaskIndividualAssessmentsOutcome> DescribeReplicationTaskIndividualAssessmentsOutcomeCallable;
      typedef std::future<DescribeReplicationTasksOutcome> DescribeReplicationTasksOutcomeCallable;
      typedef std::future<DescribeReplicationsOutcome> DescribeReplicationsOutcomeCallable;
      typedef std::future<DescribeSchemasOutcome> DescribeSchemasOutcomeCallable;
      typedef std::future<DescribeTableStatisticsOutcome> DescribeTableStatisticsOutcomeCallable;
      typedef std::future<ExportMetadataModelAssessmentOutcome> ExportMetadataModelAssessmentOutcomeCallable;
      typedef std::future<ImportCertificateOutcome> ImportCertificateOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ModifyConversionConfigurationOutcome> ModifyConversionConfigurationOutcomeCallable;
      typedef std::future<ModifyDataProviderOutcome> ModifyDataProviderOutcomeCallable;
      typedef std::future<ModifyEndpointOutcome> ModifyEndpointOutcomeCallable;
      typedef std::future<ModifyEventSubscriptionOutcome> ModifyEventSubscriptionOutcomeCallable;
      typedef std::future<ModifyInstanceProfileOutcome> ModifyInstanceProfileOutcomeCallable;
      typedef std::future<ModifyMigrationProjectOutcome> ModifyMigrationProjectOutcomeCallable;
      typedef std::future<ModifyReplicationConfigOutcome> ModifyReplicationConfigOutcomeCallable;
      typedef std::future<ModifyReplicationInstanceOutcome> ModifyReplicationInstanceOutcomeCallable;
      typedef std::future<ModifyReplicationSubnetGroupOutcome> ModifyReplicationSubnetGroupOutcomeCallable;
      typedef std::future<ModifyReplicationTaskOutcome> ModifyReplicationTaskOutcomeCallable;
      typedef std::future<MoveReplicationTaskOutcome> MoveReplicationTaskOutcomeCallable;
      typedef std::future<RebootReplicationInstanceOutcome> RebootReplicationInstanceOutcomeCallable;
      typedef std::future<RefreshSchemasOutcome> RefreshSchemasOutcomeCallable;
      typedef std::future<ReloadReplicationTablesOutcome> ReloadReplicationTablesOutcomeCallable;
      typedef std::future<ReloadTablesOutcome> ReloadTablesOutcomeCallable;
      typedef std::future<RemoveTagsFromResourceOutcome> RemoveTagsFromResourceOutcomeCallable;
      typedef std::future<RunFleetAdvisorLsaAnalysisOutcome> RunFleetAdvisorLsaAnalysisOutcomeCallable;
      typedef std::future<StartExtensionPackAssociationOutcome> StartExtensionPackAssociationOutcomeCallable;
      typedef std::future<StartMetadataModelAssessmentOutcome> StartMetadataModelAssessmentOutcomeCallable;
      typedef std::future<StartMetadataModelConversionOutcome> StartMetadataModelConversionOutcomeCallable;
      typedef std::future<StartMetadataModelExportAsScriptOutcome> StartMetadataModelExportAsScriptOutcomeCallable;
      typedef std::future<StartMetadataModelExportToTargetOutcome> StartMetadataModelExportToTargetOutcomeCallable;
      typedef std::future<StartMetadataModelImportOutcome> StartMetadataModelImportOutcomeCallable;
      typedef std::future<StartRecommendationsOutcome> StartRecommendationsOutcomeCallable;
      typedef std::future<StartReplicationOutcome> StartReplicationOutcomeCallable;
      typedef std::future<StartReplicationTaskOutcome> StartReplicationTaskOutcomeCallable;
      typedef std::future<StartReplicationTaskAssessmentOutcome> StartReplicationTaskAssessmentOutcomeCallable;
      typedef std::future<StartReplicationTaskAssessmentRunOutcome> StartReplicationTaskAssessmentRunOutcomeCallable;
      typedef std::future<StopReplicationOutcome> StopReplicationOutcomeCallable;
      typedef std::future<StopReplicationTaskOutcome> StopReplicationTaskOutcomeCallable;
      typedef std::future<TestConnectionOutcome> TestConnectionOutcomeCallable;
      typedef std::future<UpdateSubscriptionsToEventBridgeOutcome> UpdateSubscriptionsToEventBridgeOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class DatabaseMigrationServiceClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::AddTagsToResourceRequest&, const Model::AddTagsToResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddTagsToResourceResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::ApplyPendingMaintenanceActionRequest&, const Model::ApplyPendingMaintenanceActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ApplyPendingMaintenanceActionResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::BatchStartRecommendationsRequest&, const Model::BatchStartRecommendationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchStartRecommendationsResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::CancelReplicationTaskAssessmentRunRequest&, const Model::CancelReplicationTaskAssessmentRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelReplicationTaskAssessmentRunResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::CreateDataProviderRequest&, const Model::CreateDataProviderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDataProviderResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::CreateEndpointRequest&, const Model::CreateEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEndpointResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::CreateEventSubscriptionRequest&, const Model::CreateEventSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEventSubscriptionResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::CreateFleetAdvisorCollectorRequest&, const Model::CreateFleetAdvisorCollectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFleetAdvisorCollectorResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::CreateInstanceProfileRequest&, const Model::CreateInstanceProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateInstanceProfileResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::CreateMigrationProjectRequest&, const Model::CreateMigrationProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMigrationProjectResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::CreateReplicationConfigRequest&, const Model::CreateReplicationConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateReplicationConfigResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::CreateReplicationInstanceRequest&, const Model::CreateReplicationInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateReplicationInstanceResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::CreateReplicationSubnetGroupRequest&, const Model::CreateReplicationSubnetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateReplicationSubnetGroupResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::CreateReplicationTaskRequest&, const Model::CreateReplicationTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateReplicationTaskResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DeleteCertificateRequest&, const Model::DeleteCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCertificateResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DeleteConnectionRequest&, const Model::DeleteConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConnectionResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DeleteDataProviderRequest&, const Model::DeleteDataProviderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDataProviderResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DeleteEndpointRequest&, const Model::DeleteEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEndpointResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DeleteEventSubscriptionRequest&, const Model::DeleteEventSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEventSubscriptionResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DeleteFleetAdvisorCollectorRequest&, const Model::DeleteFleetAdvisorCollectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFleetAdvisorCollectorResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DeleteFleetAdvisorDatabasesRequest&, const Model::DeleteFleetAdvisorDatabasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFleetAdvisorDatabasesResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DeleteInstanceProfileRequest&, const Model::DeleteInstanceProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteInstanceProfileResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DeleteMigrationProjectRequest&, const Model::DeleteMigrationProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMigrationProjectResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DeleteReplicationConfigRequest&, const Model::DeleteReplicationConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteReplicationConfigResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DeleteReplicationInstanceRequest&, const Model::DeleteReplicationInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteReplicationInstanceResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DeleteReplicationSubnetGroupRequest&, const Model::DeleteReplicationSubnetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteReplicationSubnetGroupResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DeleteReplicationTaskRequest&, const Model::DeleteReplicationTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteReplicationTaskResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DeleteReplicationTaskAssessmentRunRequest&, const Model::DeleteReplicationTaskAssessmentRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteReplicationTaskAssessmentRunResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DescribeAccountAttributesRequest&, const Model::DescribeAccountAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAccountAttributesResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DescribeApplicableIndividualAssessmentsRequest&, const Model::DescribeApplicableIndividualAssessmentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeApplicableIndividualAssessmentsResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DescribeCertificatesRequest&, const Model::DescribeCertificatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCertificatesResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DescribeConnectionsRequest&, const Model::DescribeConnectionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeConnectionsResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DescribeConversionConfigurationRequest&, const Model::DescribeConversionConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeConversionConfigurationResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DescribeDataProvidersRequest&, const Model::DescribeDataProvidersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDataProvidersResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DescribeEndpointSettingsRequest&, const Model::DescribeEndpointSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEndpointSettingsResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DescribeEndpointTypesRequest&, const Model::DescribeEndpointTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEndpointTypesResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DescribeEndpointsRequest&, const Model::DescribeEndpointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEndpointsResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DescribeEngineVersionsRequest&, const Model::DescribeEngineVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEngineVersionsResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DescribeEventCategoriesRequest&, const Model::DescribeEventCategoriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEventCategoriesResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DescribeEventSubscriptionsRequest&, const Model::DescribeEventSubscriptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEventSubscriptionsResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DescribeEventsRequest&, const Model::DescribeEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEventsResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DescribeExtensionPackAssociationsRequest&, const Model::DescribeExtensionPackAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeExtensionPackAssociationsResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DescribeFleetAdvisorCollectorsRequest&, const Model::DescribeFleetAdvisorCollectorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFleetAdvisorCollectorsResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DescribeFleetAdvisorDatabasesRequest&, const Model::DescribeFleetAdvisorDatabasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFleetAdvisorDatabasesResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DescribeFleetAdvisorLsaAnalysisRequest&, const Model::DescribeFleetAdvisorLsaAnalysisOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFleetAdvisorLsaAnalysisResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DescribeFleetAdvisorSchemaObjectSummaryRequest&, const Model::DescribeFleetAdvisorSchemaObjectSummaryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFleetAdvisorSchemaObjectSummaryResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DescribeFleetAdvisorSchemasRequest&, const Model::DescribeFleetAdvisorSchemasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFleetAdvisorSchemasResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DescribeInstanceProfilesRequest&, const Model::DescribeInstanceProfilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInstanceProfilesResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DescribeMetadataModelAssessmentsRequest&, const Model::DescribeMetadataModelAssessmentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMetadataModelAssessmentsResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DescribeMetadataModelConversionsRequest&, const Model::DescribeMetadataModelConversionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMetadataModelConversionsResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DescribeMetadataModelExportsAsScriptRequest&, const Model::DescribeMetadataModelExportsAsScriptOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMetadataModelExportsAsScriptResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DescribeMetadataModelExportsToTargetRequest&, const Model::DescribeMetadataModelExportsToTargetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMetadataModelExportsToTargetResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DescribeMetadataModelImportsRequest&, const Model::DescribeMetadataModelImportsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMetadataModelImportsResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DescribeMigrationProjectsRequest&, const Model::DescribeMigrationProjectsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMigrationProjectsResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DescribeOrderableReplicationInstancesRequest&, const Model::DescribeOrderableReplicationInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeOrderableReplicationInstancesResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DescribePendingMaintenanceActionsRequest&, const Model::DescribePendingMaintenanceActionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePendingMaintenanceActionsResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DescribeRecommendationLimitationsRequest&, const Model::DescribeRecommendationLimitationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRecommendationLimitationsResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DescribeRecommendationsRequest&, const Model::DescribeRecommendationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRecommendationsResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DescribeRefreshSchemasStatusRequest&, const Model::DescribeRefreshSchemasStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRefreshSchemasStatusResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DescribeReplicationConfigsRequest&, const Model::DescribeReplicationConfigsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReplicationConfigsResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DescribeReplicationInstanceTaskLogsRequest&, const Model::DescribeReplicationInstanceTaskLogsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReplicationInstanceTaskLogsResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DescribeReplicationInstancesRequest&, const Model::DescribeReplicationInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReplicationInstancesResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DescribeReplicationSubnetGroupsRequest&, const Model::DescribeReplicationSubnetGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReplicationSubnetGroupsResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DescribeReplicationTableStatisticsRequest&, const Model::DescribeReplicationTableStatisticsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReplicationTableStatisticsResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DescribeReplicationTaskAssessmentResultsRequest&, const Model::DescribeReplicationTaskAssessmentResultsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReplicationTaskAssessmentResultsResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DescribeReplicationTaskAssessmentRunsRequest&, const Model::DescribeReplicationTaskAssessmentRunsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReplicationTaskAssessmentRunsResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DescribeReplicationTaskIndividualAssessmentsRequest&, const Model::DescribeReplicationTaskIndividualAssessmentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReplicationTaskIndividualAssessmentsResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DescribeReplicationTasksRequest&, const Model::DescribeReplicationTasksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReplicationTasksResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DescribeReplicationsRequest&, const Model::DescribeReplicationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReplicationsResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DescribeSchemasRequest&, const Model::DescribeSchemasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSchemasResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::DescribeTableStatisticsRequest&, const Model::DescribeTableStatisticsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTableStatisticsResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::ExportMetadataModelAssessmentRequest&, const Model::ExportMetadataModelAssessmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExportMetadataModelAssessmentResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::ImportCertificateRequest&, const Model::ImportCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportCertificateResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::ModifyConversionConfigurationRequest&, const Model::ModifyConversionConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyConversionConfigurationResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::ModifyDataProviderRequest&, const Model::ModifyDataProviderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyDataProviderResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::ModifyEndpointRequest&, const Model::ModifyEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyEndpointResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::ModifyEventSubscriptionRequest&, const Model::ModifyEventSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyEventSubscriptionResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::ModifyInstanceProfileRequest&, const Model::ModifyInstanceProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyInstanceProfileResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::ModifyMigrationProjectRequest&, const Model::ModifyMigrationProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyMigrationProjectResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::ModifyReplicationConfigRequest&, const Model::ModifyReplicationConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyReplicationConfigResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::ModifyReplicationInstanceRequest&, const Model::ModifyReplicationInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyReplicationInstanceResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::ModifyReplicationSubnetGroupRequest&, const Model::ModifyReplicationSubnetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyReplicationSubnetGroupResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::ModifyReplicationTaskRequest&, const Model::ModifyReplicationTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyReplicationTaskResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::MoveReplicationTaskRequest&, const Model::MoveReplicationTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > MoveReplicationTaskResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::RebootReplicationInstanceRequest&, const Model::RebootReplicationInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RebootReplicationInstanceResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::RefreshSchemasRequest&, const Model::RefreshSchemasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RefreshSchemasResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::ReloadReplicationTablesRequest&, const Model::ReloadReplicationTablesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ReloadReplicationTablesResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::ReloadTablesRequest&, const Model::ReloadTablesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ReloadTablesResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::RemoveTagsFromResourceRequest&, const Model::RemoveTagsFromResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveTagsFromResourceResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::RunFleetAdvisorLsaAnalysisRequest&, const Model::RunFleetAdvisorLsaAnalysisOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RunFleetAdvisorLsaAnalysisResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::StartExtensionPackAssociationRequest&, const Model::StartExtensionPackAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartExtensionPackAssociationResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::StartMetadataModelAssessmentRequest&, const Model::StartMetadataModelAssessmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartMetadataModelAssessmentResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::StartMetadataModelConversionRequest&, const Model::StartMetadataModelConversionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartMetadataModelConversionResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::StartMetadataModelExportAsScriptRequest&, const Model::StartMetadataModelExportAsScriptOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartMetadataModelExportAsScriptResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::StartMetadataModelExportToTargetRequest&, const Model::StartMetadataModelExportToTargetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartMetadataModelExportToTargetResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::StartMetadataModelImportRequest&, const Model::StartMetadataModelImportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartMetadataModelImportResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::StartRecommendationsRequest&, const Model::StartRecommendationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartRecommendationsResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::StartReplicationRequest&, const Model::StartReplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartReplicationResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::StartReplicationTaskRequest&, const Model::StartReplicationTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartReplicationTaskResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::StartReplicationTaskAssessmentRequest&, const Model::StartReplicationTaskAssessmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartReplicationTaskAssessmentResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::StartReplicationTaskAssessmentRunRequest&, const Model::StartReplicationTaskAssessmentRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartReplicationTaskAssessmentRunResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::StopReplicationRequest&, const Model::StopReplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopReplicationResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::StopReplicationTaskRequest&, const Model::StopReplicationTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopReplicationTaskResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::TestConnectionRequest&, const Model::TestConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TestConnectionResponseReceivedHandler;
    typedef std::function<void(const DatabaseMigrationServiceClient*, const Model::UpdateSubscriptionsToEventBridgeRequest&, const Model::UpdateSubscriptionsToEventBridgeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSubscriptionsToEventBridgeResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace DatabaseMigrationService
} // namespace Aws
