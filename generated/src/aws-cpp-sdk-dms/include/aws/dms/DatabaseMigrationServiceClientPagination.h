/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/dms/DatabaseMigrationServiceClient.h>
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

namespace Aws {
namespace DatabaseMigrationService {

using DescribeApplicableIndividualAssessmentsPaginator =
    Aws::Utils::Pagination::Paginator<DatabaseMigrationServiceClient, Model::DescribeApplicableIndividualAssessmentsRequest,
                                      Pagination::DescribeApplicableIndividualAssessmentsPaginationTraits<DatabaseMigrationServiceClient>>;
using DescribeCertificatesPaginator =
    Aws::Utils::Pagination::Paginator<DatabaseMigrationServiceClient, Model::DescribeCertificatesRequest,
                                      Pagination::DescribeCertificatesPaginationTraits<DatabaseMigrationServiceClient>>;
using DescribeConnectionsPaginator =
    Aws::Utils::Pagination::Paginator<DatabaseMigrationServiceClient, Model::DescribeConnectionsRequest,
                                      Pagination::DescribeConnectionsPaginationTraits<DatabaseMigrationServiceClient>>;
using DescribeDataMigrationsPaginator =
    Aws::Utils::Pagination::Paginator<DatabaseMigrationServiceClient, Model::DescribeDataMigrationsRequest,
                                      Pagination::DescribeDataMigrationsPaginationTraits<DatabaseMigrationServiceClient>>;
using DescribeDataProvidersPaginator =
    Aws::Utils::Pagination::Paginator<DatabaseMigrationServiceClient, Model::DescribeDataProvidersRequest,
                                      Pagination::DescribeDataProvidersPaginationTraits<DatabaseMigrationServiceClient>>;
using DescribeEndpointsPaginator =
    Aws::Utils::Pagination::Paginator<DatabaseMigrationServiceClient, Model::DescribeEndpointsRequest,
                                      Pagination::DescribeEndpointsPaginationTraits<DatabaseMigrationServiceClient>>;
using DescribeEndpointSettingsPaginator =
    Aws::Utils::Pagination::Paginator<DatabaseMigrationServiceClient, Model::DescribeEndpointSettingsRequest,
                                      Pagination::DescribeEndpointSettingsPaginationTraits<DatabaseMigrationServiceClient>>;
using DescribeEndpointTypesPaginator =
    Aws::Utils::Pagination::Paginator<DatabaseMigrationServiceClient, Model::DescribeEndpointTypesRequest,
                                      Pagination::DescribeEndpointTypesPaginationTraits<DatabaseMigrationServiceClient>>;
using DescribeEngineVersionsPaginator =
    Aws::Utils::Pagination::Paginator<DatabaseMigrationServiceClient, Model::DescribeEngineVersionsRequest,
                                      Pagination::DescribeEngineVersionsPaginationTraits<DatabaseMigrationServiceClient>>;
using DescribeEventsPaginator =
    Aws::Utils::Pagination::Paginator<DatabaseMigrationServiceClient, Model::DescribeEventsRequest,
                                      Pagination::DescribeEventsPaginationTraits<DatabaseMigrationServiceClient>>;
using DescribeEventSubscriptionsPaginator =
    Aws::Utils::Pagination::Paginator<DatabaseMigrationServiceClient, Model::DescribeEventSubscriptionsRequest,
                                      Pagination::DescribeEventSubscriptionsPaginationTraits<DatabaseMigrationServiceClient>>;
using DescribeExtensionPackAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<DatabaseMigrationServiceClient, Model::DescribeExtensionPackAssociationsRequest,
                                      Pagination::DescribeExtensionPackAssociationsPaginationTraits<DatabaseMigrationServiceClient>>;
using DescribeFleetAdvisorCollectorsPaginator =
    Aws::Utils::Pagination::Paginator<DatabaseMigrationServiceClient, Model::DescribeFleetAdvisorCollectorsRequest,
                                      Pagination::DescribeFleetAdvisorCollectorsPaginationTraits<DatabaseMigrationServiceClient>>;
using DescribeFleetAdvisorDatabasesPaginator =
    Aws::Utils::Pagination::Paginator<DatabaseMigrationServiceClient, Model::DescribeFleetAdvisorDatabasesRequest,
                                      Pagination::DescribeFleetAdvisorDatabasesPaginationTraits<DatabaseMigrationServiceClient>>;
using DescribeFleetAdvisorLsaAnalysisPaginator =
    Aws::Utils::Pagination::Paginator<DatabaseMigrationServiceClient, Model::DescribeFleetAdvisorLsaAnalysisRequest,
                                      Pagination::DescribeFleetAdvisorLsaAnalysisPaginationTraits<DatabaseMigrationServiceClient>>;
using DescribeFleetAdvisorSchemaObjectSummaryPaginator =
    Aws::Utils::Pagination::Paginator<DatabaseMigrationServiceClient, Model::DescribeFleetAdvisorSchemaObjectSummaryRequest,
                                      Pagination::DescribeFleetAdvisorSchemaObjectSummaryPaginationTraits<DatabaseMigrationServiceClient>>;
using DescribeFleetAdvisorSchemasPaginator =
    Aws::Utils::Pagination::Paginator<DatabaseMigrationServiceClient, Model::DescribeFleetAdvisorSchemasRequest,
                                      Pagination::DescribeFleetAdvisorSchemasPaginationTraits<DatabaseMigrationServiceClient>>;
using DescribeInstanceProfilesPaginator =
    Aws::Utils::Pagination::Paginator<DatabaseMigrationServiceClient, Model::DescribeInstanceProfilesRequest,
                                      Pagination::DescribeInstanceProfilesPaginationTraits<DatabaseMigrationServiceClient>>;
using DescribeMetadataModelAssessmentsPaginator =
    Aws::Utils::Pagination::Paginator<DatabaseMigrationServiceClient, Model::DescribeMetadataModelAssessmentsRequest,
                                      Pagination::DescribeMetadataModelAssessmentsPaginationTraits<DatabaseMigrationServiceClient>>;
using DescribeMetadataModelChildrenPaginator =
    Aws::Utils::Pagination::Paginator<DatabaseMigrationServiceClient, Model::DescribeMetadataModelChildrenRequest,
                                      Pagination::DescribeMetadataModelChildrenPaginationTraits<DatabaseMigrationServiceClient>>;
using DescribeMetadataModelConversionsPaginator =
    Aws::Utils::Pagination::Paginator<DatabaseMigrationServiceClient, Model::DescribeMetadataModelConversionsRequest,
                                      Pagination::DescribeMetadataModelConversionsPaginationTraits<DatabaseMigrationServiceClient>>;
using DescribeMetadataModelCreationsPaginator =
    Aws::Utils::Pagination::Paginator<DatabaseMigrationServiceClient, Model::DescribeMetadataModelCreationsRequest,
                                      Pagination::DescribeMetadataModelCreationsPaginationTraits<DatabaseMigrationServiceClient>>;
using DescribeMetadataModelExportsAsScriptPaginator =
    Aws::Utils::Pagination::Paginator<DatabaseMigrationServiceClient, Model::DescribeMetadataModelExportsAsScriptRequest,
                                      Pagination::DescribeMetadataModelExportsAsScriptPaginationTraits<DatabaseMigrationServiceClient>>;
using DescribeMetadataModelExportsToTargetPaginator =
    Aws::Utils::Pagination::Paginator<DatabaseMigrationServiceClient, Model::DescribeMetadataModelExportsToTargetRequest,
                                      Pagination::DescribeMetadataModelExportsToTargetPaginationTraits<DatabaseMigrationServiceClient>>;
using DescribeMetadataModelImportsPaginator =
    Aws::Utils::Pagination::Paginator<DatabaseMigrationServiceClient, Model::DescribeMetadataModelImportsRequest,
                                      Pagination::DescribeMetadataModelImportsPaginationTraits<DatabaseMigrationServiceClient>>;
using DescribeMigrationProjectsPaginator =
    Aws::Utils::Pagination::Paginator<DatabaseMigrationServiceClient, Model::DescribeMigrationProjectsRequest,
                                      Pagination::DescribeMigrationProjectsPaginationTraits<DatabaseMigrationServiceClient>>;
using DescribeOrderableReplicationInstancesPaginator =
    Aws::Utils::Pagination::Paginator<DatabaseMigrationServiceClient, Model::DescribeOrderableReplicationInstancesRequest,
                                      Pagination::DescribeOrderableReplicationInstancesPaginationTraits<DatabaseMigrationServiceClient>>;
using DescribePendingMaintenanceActionsPaginator =
    Aws::Utils::Pagination::Paginator<DatabaseMigrationServiceClient, Model::DescribePendingMaintenanceActionsRequest,
                                      Pagination::DescribePendingMaintenanceActionsPaginationTraits<DatabaseMigrationServiceClient>>;
using DescribeRecommendationLimitationsPaginator =
    Aws::Utils::Pagination::Paginator<DatabaseMigrationServiceClient, Model::DescribeRecommendationLimitationsRequest,
                                      Pagination::DescribeRecommendationLimitationsPaginationTraits<DatabaseMigrationServiceClient>>;
using DescribeRecommendationsPaginator =
    Aws::Utils::Pagination::Paginator<DatabaseMigrationServiceClient, Model::DescribeRecommendationsRequest,
                                      Pagination::DescribeRecommendationsPaginationTraits<DatabaseMigrationServiceClient>>;
using DescribeReplicationConfigsPaginator =
    Aws::Utils::Pagination::Paginator<DatabaseMigrationServiceClient, Model::DescribeReplicationConfigsRequest,
                                      Pagination::DescribeReplicationConfigsPaginationTraits<DatabaseMigrationServiceClient>>;
using DescribeReplicationInstancesPaginator =
    Aws::Utils::Pagination::Paginator<DatabaseMigrationServiceClient, Model::DescribeReplicationInstancesRequest,
                                      Pagination::DescribeReplicationInstancesPaginationTraits<DatabaseMigrationServiceClient>>;
using DescribeReplicationInstanceTaskLogsPaginator =
    Aws::Utils::Pagination::Paginator<DatabaseMigrationServiceClient, Model::DescribeReplicationInstanceTaskLogsRequest,
                                      Pagination::DescribeReplicationInstanceTaskLogsPaginationTraits<DatabaseMigrationServiceClient>>;
using DescribeReplicationsPaginator =
    Aws::Utils::Pagination::Paginator<DatabaseMigrationServiceClient, Model::DescribeReplicationsRequest,
                                      Pagination::DescribeReplicationsPaginationTraits<DatabaseMigrationServiceClient>>;
using DescribeReplicationSubnetGroupsPaginator =
    Aws::Utils::Pagination::Paginator<DatabaseMigrationServiceClient, Model::DescribeReplicationSubnetGroupsRequest,
                                      Pagination::DescribeReplicationSubnetGroupsPaginationTraits<DatabaseMigrationServiceClient>>;
using DescribeReplicationTableStatisticsPaginator =
    Aws::Utils::Pagination::Paginator<DatabaseMigrationServiceClient, Model::DescribeReplicationTableStatisticsRequest,
                                      Pagination::DescribeReplicationTableStatisticsPaginationTraits<DatabaseMigrationServiceClient>>;
using DescribeReplicationTaskAssessmentResultsPaginator =
    Aws::Utils::Pagination::Paginator<DatabaseMigrationServiceClient, Model::DescribeReplicationTaskAssessmentResultsRequest,
                                      Pagination::DescribeReplicationTaskAssessmentResultsPaginationTraits<DatabaseMigrationServiceClient>>;
using DescribeReplicationTaskAssessmentRunsPaginator =
    Aws::Utils::Pagination::Paginator<DatabaseMigrationServiceClient, Model::DescribeReplicationTaskAssessmentRunsRequest,
                                      Pagination::DescribeReplicationTaskAssessmentRunsPaginationTraits<DatabaseMigrationServiceClient>>;
using DescribeReplicationTaskIndividualAssessmentsPaginator = Aws::Utils::Pagination::Paginator<
    DatabaseMigrationServiceClient, Model::DescribeReplicationTaskIndividualAssessmentsRequest,
    Pagination::DescribeReplicationTaskIndividualAssessmentsPaginationTraits<DatabaseMigrationServiceClient>>;
using DescribeReplicationTasksPaginator =
    Aws::Utils::Pagination::Paginator<DatabaseMigrationServiceClient, Model::DescribeReplicationTasksRequest,
                                      Pagination::DescribeReplicationTasksPaginationTraits<DatabaseMigrationServiceClient>>;
using DescribeSchemasPaginator =
    Aws::Utils::Pagination::Paginator<DatabaseMigrationServiceClient, Model::DescribeSchemasRequest,
                                      Pagination::DescribeSchemasPaginationTraits<DatabaseMigrationServiceClient>>;
using DescribeTableStatisticsPaginator =
    Aws::Utils::Pagination::Paginator<DatabaseMigrationServiceClient, Model::DescribeTableStatisticsRequest,
                                      Pagination::DescribeTableStatisticsPaginationTraits<DatabaseMigrationServiceClient>>;

}  // namespace DatabaseMigrationService
}  // namespace Aws
