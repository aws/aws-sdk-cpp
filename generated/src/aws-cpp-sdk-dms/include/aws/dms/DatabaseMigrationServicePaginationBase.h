/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/dms/model/DescribeApplicableIndividualAssessmentsPaginationTraits.h>
#include <aws/dms/model/DescribeCertificatesPaginationTraits.h>
#include <aws/dms/model/DescribeConnectionsPaginationTraits.h>
#include <aws/dms/model/DescribeDataMigrationsPaginationTraits.h>
#include <aws/dms/model/DescribeDataProvidersPaginationTraits.h>
#include <aws/dms/model/DescribeEndpointSettingsPaginationTraits.h>
#include <aws/dms/model/DescribeEndpointTypesPaginationTraits.h>
#include <aws/dms/model/DescribeEndpointsPaginationTraits.h>
#include <aws/dms/model/DescribeEngineVersionsPaginationTraits.h>
#include <aws/dms/model/DescribeEventSubscriptionsPaginationTraits.h>
#include <aws/dms/model/DescribeEventsPaginationTraits.h>
#include <aws/dms/model/DescribeExtensionPackAssociationsPaginationTraits.h>
#include <aws/dms/model/DescribeFleetAdvisorCollectorsPaginationTraits.h>
#include <aws/dms/model/DescribeFleetAdvisorDatabasesPaginationTraits.h>
#include <aws/dms/model/DescribeFleetAdvisorLsaAnalysisPaginationTraits.h>
#include <aws/dms/model/DescribeFleetAdvisorSchemaObjectSummaryPaginationTraits.h>
#include <aws/dms/model/DescribeFleetAdvisorSchemasPaginationTraits.h>
#include <aws/dms/model/DescribeInstanceProfilesPaginationTraits.h>
#include <aws/dms/model/DescribeMetadataModelAssessmentsPaginationTraits.h>
#include <aws/dms/model/DescribeMetadataModelChildrenPaginationTraits.h>
#include <aws/dms/model/DescribeMetadataModelConversionsPaginationTraits.h>
#include <aws/dms/model/DescribeMetadataModelCreationsPaginationTraits.h>
#include <aws/dms/model/DescribeMetadataModelExportsAsScriptPaginationTraits.h>
#include <aws/dms/model/DescribeMetadataModelExportsToTargetPaginationTraits.h>
#include <aws/dms/model/DescribeMetadataModelImportsPaginationTraits.h>
#include <aws/dms/model/DescribeMigrationProjectsPaginationTraits.h>
#include <aws/dms/model/DescribeOrderableReplicationInstancesPaginationTraits.h>
#include <aws/dms/model/DescribePendingMaintenanceActionsPaginationTraits.h>
#include <aws/dms/model/DescribeRecommendationLimitationsPaginationTraits.h>
#include <aws/dms/model/DescribeRecommendationsPaginationTraits.h>
#include <aws/dms/model/DescribeReplicationConfigsPaginationTraits.h>
#include <aws/dms/model/DescribeReplicationInstanceTaskLogsPaginationTraits.h>
#include <aws/dms/model/DescribeReplicationInstancesPaginationTraits.h>
#include <aws/dms/model/DescribeReplicationSubnetGroupsPaginationTraits.h>
#include <aws/dms/model/DescribeReplicationTableStatisticsPaginationTraits.h>
#include <aws/dms/model/DescribeReplicationTaskAssessmentResultsPaginationTraits.h>
#include <aws/dms/model/DescribeReplicationTaskAssessmentRunsPaginationTraits.h>
#include <aws/dms/model/DescribeReplicationTaskIndividualAssessmentsPaginationTraits.h>
#include <aws/dms/model/DescribeReplicationTasksPaginationTraits.h>
#include <aws/dms/model/DescribeReplicationsPaginationTraits.h>
#include <aws/dms/model/DescribeSchemasPaginationTraits.h>
#include <aws/dms/model/DescribeTableStatisticsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace DatabaseMigrationService {

class DatabaseMigrationServiceClient;

template <typename DerivedClient>
class DatabaseMigrationServicePaginationBase {
 public:
  /**
   * Create a paginator for DescribeApplicableIndividualAssessments operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeApplicableIndividualAssessmentsRequest,
                                    Pagination::DescribeApplicableIndividualAssessmentsPaginationTraits<DerivedClient>>
  DescribeApplicableIndividualAssessmentsPaginator(const Model::DescribeApplicableIndividualAssessmentsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeApplicableIndividualAssessmentsRequest,
                                             Pagination::DescribeApplicableIndividualAssessmentsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeCertificates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeCertificatesRequest,
                                    Pagination::DescribeCertificatesPaginationTraits<DerivedClient>>
  DescribeCertificatesPaginator(const Model::DescribeCertificatesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeCertificatesRequest,
                                             Pagination::DescribeCertificatesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeConnections operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeConnectionsRequest,
                                    Pagination::DescribeConnectionsPaginationTraits<DerivedClient>>
  DescribeConnectionsPaginator(const Model::DescribeConnectionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeConnectionsRequest,
                                             Pagination::DescribeConnectionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeDataMigrations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDataMigrationsRequest,
                                    Pagination::DescribeDataMigrationsPaginationTraits<DerivedClient>>
  DescribeDataMigrationsPaginator(const Model::DescribeDataMigrationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDataMigrationsRequest,
                                             Pagination::DescribeDataMigrationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeDataProviders operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDataProvidersRequest,
                                    Pagination::DescribeDataProvidersPaginationTraits<DerivedClient>>
  DescribeDataProvidersPaginator(const Model::DescribeDataProvidersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDataProvidersRequest,
                                             Pagination::DescribeDataProvidersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeEndpoints operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeEndpointsRequest,
                                    Pagination::DescribeEndpointsPaginationTraits<DerivedClient>>
  DescribeEndpointsPaginator(const Model::DescribeEndpointsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeEndpointsRequest,
                                             Pagination::DescribeEndpointsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeEndpointSettings operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeEndpointSettingsRequest,
                                    Pagination::DescribeEndpointSettingsPaginationTraits<DerivedClient>>
  DescribeEndpointSettingsPaginator(const Model::DescribeEndpointSettingsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeEndpointSettingsRequest,
                                             Pagination::DescribeEndpointSettingsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeEndpointTypes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeEndpointTypesRequest,
                                    Pagination::DescribeEndpointTypesPaginationTraits<DerivedClient>>
  DescribeEndpointTypesPaginator(const Model::DescribeEndpointTypesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeEndpointTypesRequest,
                                             Pagination::DescribeEndpointTypesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeEngineVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeEngineVersionsRequest,
                                    Pagination::DescribeEngineVersionsPaginationTraits<DerivedClient>>
  DescribeEngineVersionsPaginator(const Model::DescribeEngineVersionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeEngineVersionsRequest,
                                             Pagination::DescribeEngineVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeEvents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeEventsRequest, Pagination::DescribeEventsPaginationTraits<DerivedClient>>
  DescribeEventsPaginator(const Model::DescribeEventsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeEventsRequest,
                                             Pagination::DescribeEventsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for DescribeEventSubscriptions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeEventSubscriptionsRequest,
                                    Pagination::DescribeEventSubscriptionsPaginationTraits<DerivedClient>>
  DescribeEventSubscriptionsPaginator(const Model::DescribeEventSubscriptionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeEventSubscriptionsRequest,
                                             Pagination::DescribeEventSubscriptionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeExtensionPackAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeExtensionPackAssociationsRequest,
                                    Pagination::DescribeExtensionPackAssociationsPaginationTraits<DerivedClient>>
  DescribeExtensionPackAssociationsPaginator(const Model::DescribeExtensionPackAssociationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeExtensionPackAssociationsRequest,
                                             Pagination::DescribeExtensionPackAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeFleetAdvisorCollectors operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeFleetAdvisorCollectorsRequest,
                                    Pagination::DescribeFleetAdvisorCollectorsPaginationTraits<DerivedClient>>
  DescribeFleetAdvisorCollectorsPaginator(const Model::DescribeFleetAdvisorCollectorsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeFleetAdvisorCollectorsRequest,
                                             Pagination::DescribeFleetAdvisorCollectorsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeFleetAdvisorDatabases operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeFleetAdvisorDatabasesRequest,
                                    Pagination::DescribeFleetAdvisorDatabasesPaginationTraits<DerivedClient>>
  DescribeFleetAdvisorDatabasesPaginator(const Model::DescribeFleetAdvisorDatabasesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeFleetAdvisorDatabasesRequest,
                                             Pagination::DescribeFleetAdvisorDatabasesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeFleetAdvisorLsaAnalysis operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeFleetAdvisorLsaAnalysisRequest,
                                    Pagination::DescribeFleetAdvisorLsaAnalysisPaginationTraits<DerivedClient>>
  DescribeFleetAdvisorLsaAnalysisPaginator(const Model::DescribeFleetAdvisorLsaAnalysisRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeFleetAdvisorLsaAnalysisRequest,
                                             Pagination::DescribeFleetAdvisorLsaAnalysisPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeFleetAdvisorSchemaObjectSummary operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeFleetAdvisorSchemaObjectSummaryRequest,
                                    Pagination::DescribeFleetAdvisorSchemaObjectSummaryPaginationTraits<DerivedClient>>
  DescribeFleetAdvisorSchemaObjectSummaryPaginator(const Model::DescribeFleetAdvisorSchemaObjectSummaryRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeFleetAdvisorSchemaObjectSummaryRequest,
                                             Pagination::DescribeFleetAdvisorSchemaObjectSummaryPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeFleetAdvisorSchemas operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeFleetAdvisorSchemasRequest,
                                    Pagination::DescribeFleetAdvisorSchemasPaginationTraits<DerivedClient>>
  DescribeFleetAdvisorSchemasPaginator(const Model::DescribeFleetAdvisorSchemasRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeFleetAdvisorSchemasRequest,
                                             Pagination::DescribeFleetAdvisorSchemasPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeInstanceProfiles operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeInstanceProfilesRequest,
                                    Pagination::DescribeInstanceProfilesPaginationTraits<DerivedClient>>
  DescribeInstanceProfilesPaginator(const Model::DescribeInstanceProfilesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeInstanceProfilesRequest,
                                             Pagination::DescribeInstanceProfilesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeMetadataModelAssessments operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeMetadataModelAssessmentsRequest,
                                    Pagination::DescribeMetadataModelAssessmentsPaginationTraits<DerivedClient>>
  DescribeMetadataModelAssessmentsPaginator(const Model::DescribeMetadataModelAssessmentsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeMetadataModelAssessmentsRequest,
                                             Pagination::DescribeMetadataModelAssessmentsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeMetadataModelChildren operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeMetadataModelChildrenRequest,
                                    Pagination::DescribeMetadataModelChildrenPaginationTraits<DerivedClient>>
  DescribeMetadataModelChildrenPaginator(const Model::DescribeMetadataModelChildrenRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeMetadataModelChildrenRequest,
                                             Pagination::DescribeMetadataModelChildrenPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeMetadataModelConversions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeMetadataModelConversionsRequest,
                                    Pagination::DescribeMetadataModelConversionsPaginationTraits<DerivedClient>>
  DescribeMetadataModelConversionsPaginator(const Model::DescribeMetadataModelConversionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeMetadataModelConversionsRequest,
                                             Pagination::DescribeMetadataModelConversionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeMetadataModelCreations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeMetadataModelCreationsRequest,
                                    Pagination::DescribeMetadataModelCreationsPaginationTraits<DerivedClient>>
  DescribeMetadataModelCreationsPaginator(const Model::DescribeMetadataModelCreationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeMetadataModelCreationsRequest,
                                             Pagination::DescribeMetadataModelCreationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeMetadataModelExportsAsScript operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeMetadataModelExportsAsScriptRequest,
                                    Pagination::DescribeMetadataModelExportsAsScriptPaginationTraits<DerivedClient>>
  DescribeMetadataModelExportsAsScriptPaginator(const Model::DescribeMetadataModelExportsAsScriptRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeMetadataModelExportsAsScriptRequest,
                                             Pagination::DescribeMetadataModelExportsAsScriptPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeMetadataModelExportsToTarget operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeMetadataModelExportsToTargetRequest,
                                    Pagination::DescribeMetadataModelExportsToTargetPaginationTraits<DerivedClient>>
  DescribeMetadataModelExportsToTargetPaginator(const Model::DescribeMetadataModelExportsToTargetRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeMetadataModelExportsToTargetRequest,
                                             Pagination::DescribeMetadataModelExportsToTargetPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeMetadataModelImports operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeMetadataModelImportsRequest,
                                    Pagination::DescribeMetadataModelImportsPaginationTraits<DerivedClient>>
  DescribeMetadataModelImportsPaginator(const Model::DescribeMetadataModelImportsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeMetadataModelImportsRequest,
                                             Pagination::DescribeMetadataModelImportsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeMigrationProjects operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeMigrationProjectsRequest,
                                    Pagination::DescribeMigrationProjectsPaginationTraits<DerivedClient>>
  DescribeMigrationProjectsPaginator(const Model::DescribeMigrationProjectsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeMigrationProjectsRequest,
                                             Pagination::DescribeMigrationProjectsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeOrderableReplicationInstances operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeOrderableReplicationInstancesRequest,
                                    Pagination::DescribeOrderableReplicationInstancesPaginationTraits<DerivedClient>>
  DescribeOrderableReplicationInstancesPaginator(const Model::DescribeOrderableReplicationInstancesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeOrderableReplicationInstancesRequest,
                                             Pagination::DescribeOrderableReplicationInstancesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribePendingMaintenanceActions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribePendingMaintenanceActionsRequest,
                                    Pagination::DescribePendingMaintenanceActionsPaginationTraits<DerivedClient>>
  DescribePendingMaintenanceActionsPaginator(const Model::DescribePendingMaintenanceActionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribePendingMaintenanceActionsRequest,
                                             Pagination::DescribePendingMaintenanceActionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeRecommendationLimitations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeRecommendationLimitationsRequest,
                                    Pagination::DescribeRecommendationLimitationsPaginationTraits<DerivedClient>>
  DescribeRecommendationLimitationsPaginator(const Model::DescribeRecommendationLimitationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeRecommendationLimitationsRequest,
                                             Pagination::DescribeRecommendationLimitationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeRecommendations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeRecommendationsRequest,
                                    Pagination::DescribeRecommendationsPaginationTraits<DerivedClient>>
  DescribeRecommendationsPaginator(const Model::DescribeRecommendationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeRecommendationsRequest,
                                             Pagination::DescribeRecommendationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeReplicationConfigs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeReplicationConfigsRequest,
                                    Pagination::DescribeReplicationConfigsPaginationTraits<DerivedClient>>
  DescribeReplicationConfigsPaginator(const Model::DescribeReplicationConfigsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeReplicationConfigsRequest,
                                             Pagination::DescribeReplicationConfigsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeReplicationInstances operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeReplicationInstancesRequest,
                                    Pagination::DescribeReplicationInstancesPaginationTraits<DerivedClient>>
  DescribeReplicationInstancesPaginator(const Model::DescribeReplicationInstancesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeReplicationInstancesRequest,
                                             Pagination::DescribeReplicationInstancesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeReplicationInstanceTaskLogs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeReplicationInstanceTaskLogsRequest,
                                    Pagination::DescribeReplicationInstanceTaskLogsPaginationTraits<DerivedClient>>
  DescribeReplicationInstanceTaskLogsPaginator(const Model::DescribeReplicationInstanceTaskLogsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeReplicationInstanceTaskLogsRequest,
                                             Pagination::DescribeReplicationInstanceTaskLogsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeReplications operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeReplicationsRequest,
                                    Pagination::DescribeReplicationsPaginationTraits<DerivedClient>>
  DescribeReplicationsPaginator(const Model::DescribeReplicationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeReplicationsRequest,
                                             Pagination::DescribeReplicationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeReplicationSubnetGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeReplicationSubnetGroupsRequest,
                                    Pagination::DescribeReplicationSubnetGroupsPaginationTraits<DerivedClient>>
  DescribeReplicationSubnetGroupsPaginator(const Model::DescribeReplicationSubnetGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeReplicationSubnetGroupsRequest,
                                             Pagination::DescribeReplicationSubnetGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeReplicationTableStatistics operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeReplicationTableStatisticsRequest,
                                    Pagination::DescribeReplicationTableStatisticsPaginationTraits<DerivedClient>>
  DescribeReplicationTableStatisticsPaginator(const Model::DescribeReplicationTableStatisticsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeReplicationTableStatisticsRequest,
                                             Pagination::DescribeReplicationTableStatisticsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeReplicationTaskAssessmentResults operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeReplicationTaskAssessmentResultsRequest,
                                    Pagination::DescribeReplicationTaskAssessmentResultsPaginationTraits<DerivedClient>>
  DescribeReplicationTaskAssessmentResultsPaginator(const Model::DescribeReplicationTaskAssessmentResultsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeReplicationTaskAssessmentResultsRequest,
                                             Pagination::DescribeReplicationTaskAssessmentResultsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeReplicationTaskAssessmentRuns operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeReplicationTaskAssessmentRunsRequest,
                                    Pagination::DescribeReplicationTaskAssessmentRunsPaginationTraits<DerivedClient>>
  DescribeReplicationTaskAssessmentRunsPaginator(const Model::DescribeReplicationTaskAssessmentRunsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeReplicationTaskAssessmentRunsRequest,
                                             Pagination::DescribeReplicationTaskAssessmentRunsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeReplicationTaskIndividualAssessments operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeReplicationTaskIndividualAssessmentsRequest,
                                    Pagination::DescribeReplicationTaskIndividualAssessmentsPaginationTraits<DerivedClient>>
  DescribeReplicationTaskIndividualAssessmentsPaginator(const Model::DescribeReplicationTaskIndividualAssessmentsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeReplicationTaskIndividualAssessmentsRequest,
                                             Pagination::DescribeReplicationTaskIndividualAssessmentsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeReplicationTasks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeReplicationTasksRequest,
                                    Pagination::DescribeReplicationTasksPaginationTraits<DerivedClient>>
  DescribeReplicationTasksPaginator(const Model::DescribeReplicationTasksRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeReplicationTasksRequest,
                                             Pagination::DescribeReplicationTasksPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeSchemas operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeSchemasRequest,
                                    Pagination::DescribeSchemasPaginationTraits<DerivedClient>>
  DescribeSchemasPaginator(const Model::DescribeSchemasRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeSchemasRequest,
                                             Pagination::DescribeSchemasPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for DescribeTableStatistics operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeTableStatisticsRequest,
                                    Pagination::DescribeTableStatisticsPaginationTraits<DerivedClient>>
  DescribeTableStatisticsPaginator(const Model::DescribeTableStatisticsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeTableStatisticsRequest,
                                             Pagination::DescribeTableStatisticsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace DatabaseMigrationService
}  // namespace Aws
