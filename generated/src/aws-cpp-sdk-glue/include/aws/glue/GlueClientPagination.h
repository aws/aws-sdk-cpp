/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/glue/GlueClient.h>
#include <aws/glue/model/DescribeEntityPaginationTraits.h>
#include <aws/glue/model/GetBlueprintRunsPaginationTraits.h>
#include <aws/glue/model/GetClassifiersPaginationTraits.h>
#include <aws/glue/model/GetColumnStatisticsTaskRunsPaginationTraits.h>
#include <aws/glue/model/GetConnectionsPaginationTraits.h>
#include <aws/glue/model/GetCrawlerMetricsPaginationTraits.h>
#include <aws/glue/model/GetCrawlersPaginationTraits.h>
#include <aws/glue/model/GetDatabasesPaginationTraits.h>
#include <aws/glue/model/GetDevEndpointsPaginationTraits.h>
#include <aws/glue/model/GetJobRunsPaginationTraits.h>
#include <aws/glue/model/GetJobsPaginationTraits.h>
#include <aws/glue/model/GetMLTaskRunsPaginationTraits.h>
#include <aws/glue/model/GetMLTransformsPaginationTraits.h>
#include <aws/glue/model/GetPartitionIndexesPaginationTraits.h>
#include <aws/glue/model/GetPartitionsPaginationTraits.h>
#include <aws/glue/model/GetResourcePoliciesPaginationTraits.h>
#include <aws/glue/model/GetSecurityConfigurationsPaginationTraits.h>
#include <aws/glue/model/GetTableVersionsPaginationTraits.h>
#include <aws/glue/model/GetTablesPaginationTraits.h>
#include <aws/glue/model/GetTriggersPaginationTraits.h>
#include <aws/glue/model/GetUnfilteredPartitionsMetadataPaginationTraits.h>
#include <aws/glue/model/GetUserDefinedFunctionsPaginationTraits.h>
#include <aws/glue/model/GetWorkflowRunsPaginationTraits.h>
#include <aws/glue/model/ListBlueprintsPaginationTraits.h>
#include <aws/glue/model/ListColumnStatisticsTaskRunsPaginationTraits.h>
#include <aws/glue/model/ListConnectionTypesPaginationTraits.h>
#include <aws/glue/model/ListCrawlersPaginationTraits.h>
#include <aws/glue/model/ListCustomEntityTypesPaginationTraits.h>
#include <aws/glue/model/ListDataQualityResultsPaginationTraits.h>
#include <aws/glue/model/ListDataQualityRuleRecommendationRunsPaginationTraits.h>
#include <aws/glue/model/ListDataQualityRulesetEvaluationRunsPaginationTraits.h>
#include <aws/glue/model/ListDataQualityRulesetsPaginationTraits.h>
#include <aws/glue/model/ListDevEndpointsPaginationTraits.h>
#include <aws/glue/model/ListEntitiesPaginationTraits.h>
#include <aws/glue/model/ListJobsPaginationTraits.h>
#include <aws/glue/model/ListMLTransformsPaginationTraits.h>
#include <aws/glue/model/ListMaterializedViewRefreshTaskRunsPaginationTraits.h>
#include <aws/glue/model/ListRegistriesPaginationTraits.h>
#include <aws/glue/model/ListSchemaVersionsPaginationTraits.h>
#include <aws/glue/model/ListSchemasPaginationTraits.h>
#include <aws/glue/model/ListSessionsPaginationTraits.h>
#include <aws/glue/model/ListTableOptimizerRunsPaginationTraits.h>
#include <aws/glue/model/ListTriggersPaginationTraits.h>
#include <aws/glue/model/ListUsageProfilesPaginationTraits.h>
#include <aws/glue/model/ListWorkflowsPaginationTraits.h>
#include <aws/glue/model/SearchTablesPaginationTraits.h>

namespace Aws {
namespace Glue {

using DescribeEntityPaginator =
    Aws::Utils::Pagination::Paginator<GlueClient, Model::DescribeEntityRequest, Pagination::DescribeEntityPaginationTraits<GlueClient>>;
using GetBlueprintRunsPaginator =
    Aws::Utils::Pagination::Paginator<GlueClient, Model::GetBlueprintRunsRequest, Pagination::GetBlueprintRunsPaginationTraits<GlueClient>>;
using GetClassifiersPaginator =
    Aws::Utils::Pagination::Paginator<GlueClient, Model::GetClassifiersRequest, Pagination::GetClassifiersPaginationTraits<GlueClient>>;
using GetColumnStatisticsTaskRunsPaginator =
    Aws::Utils::Pagination::Paginator<GlueClient, Model::GetColumnStatisticsTaskRunsRequest,
                                      Pagination::GetColumnStatisticsTaskRunsPaginationTraits<GlueClient>>;
using GetConnectionsPaginator =
    Aws::Utils::Pagination::Paginator<GlueClient, Model::GetConnectionsRequest, Pagination::GetConnectionsPaginationTraits<GlueClient>>;
using GetCrawlerMetricsPaginator = Aws::Utils::Pagination::Paginator<GlueClient, Model::GetCrawlerMetricsRequest,
                                                                     Pagination::GetCrawlerMetricsPaginationTraits<GlueClient>>;
using GetCrawlersPaginator =
    Aws::Utils::Pagination::Paginator<GlueClient, Model::GetCrawlersRequest, Pagination::GetCrawlersPaginationTraits<GlueClient>>;
using GetDatabasesPaginator =
    Aws::Utils::Pagination::Paginator<GlueClient, Model::GetDatabasesRequest, Pagination::GetDatabasesPaginationTraits<GlueClient>>;
using GetDevEndpointsPaginator =
    Aws::Utils::Pagination::Paginator<GlueClient, Model::GetDevEndpointsRequest, Pagination::GetDevEndpointsPaginationTraits<GlueClient>>;
using GetJobRunsPaginator =
    Aws::Utils::Pagination::Paginator<GlueClient, Model::GetJobRunsRequest, Pagination::GetJobRunsPaginationTraits<GlueClient>>;
using GetJobsPaginator =
    Aws::Utils::Pagination::Paginator<GlueClient, Model::GetJobsRequest, Pagination::GetJobsPaginationTraits<GlueClient>>;
using GetMLTaskRunsPaginator =
    Aws::Utils::Pagination::Paginator<GlueClient, Model::GetMLTaskRunsRequest, Pagination::GetMLTaskRunsPaginationTraits<GlueClient>>;
using GetMLTransformsPaginator =
    Aws::Utils::Pagination::Paginator<GlueClient, Model::GetMLTransformsRequest, Pagination::GetMLTransformsPaginationTraits<GlueClient>>;
using GetPartitionIndexesPaginator = Aws::Utils::Pagination::Paginator<GlueClient, Model::GetPartitionIndexesRequest,
                                                                       Pagination::GetPartitionIndexesPaginationTraits<GlueClient>>;
using GetPartitionsPaginator =
    Aws::Utils::Pagination::Paginator<GlueClient, Model::GetPartitionsRequest, Pagination::GetPartitionsPaginationTraits<GlueClient>>;
using GetResourcePoliciesPaginator = Aws::Utils::Pagination::Paginator<GlueClient, Model::GetResourcePoliciesRequest,
                                                                       Pagination::GetResourcePoliciesPaginationTraits<GlueClient>>;
using GetSecurityConfigurationsPaginator =
    Aws::Utils::Pagination::Paginator<GlueClient, Model::GetSecurityConfigurationsRequest,
                                      Pagination::GetSecurityConfigurationsPaginationTraits<GlueClient>>;
using GetTablesPaginator =
    Aws::Utils::Pagination::Paginator<GlueClient, Model::GetTablesRequest, Pagination::GetTablesPaginationTraits<GlueClient>>;
using GetTableVersionsPaginator =
    Aws::Utils::Pagination::Paginator<GlueClient, Model::GetTableVersionsRequest, Pagination::GetTableVersionsPaginationTraits<GlueClient>>;
using GetTriggersPaginator =
    Aws::Utils::Pagination::Paginator<GlueClient, Model::GetTriggersRequest, Pagination::GetTriggersPaginationTraits<GlueClient>>;
using GetUnfilteredPartitionsMetadataPaginator =
    Aws::Utils::Pagination::Paginator<GlueClient, Model::GetUnfilteredPartitionsMetadataRequest,
                                      Pagination::GetUnfilteredPartitionsMetadataPaginationTraits<GlueClient>>;
using GetUserDefinedFunctionsPaginator = Aws::Utils::Pagination::Paginator<GlueClient, Model::GetUserDefinedFunctionsRequest,
                                                                           Pagination::GetUserDefinedFunctionsPaginationTraits<GlueClient>>;
using GetWorkflowRunsPaginator =
    Aws::Utils::Pagination::Paginator<GlueClient, Model::GetWorkflowRunsRequest, Pagination::GetWorkflowRunsPaginationTraits<GlueClient>>;
using ListBlueprintsPaginator =
    Aws::Utils::Pagination::Paginator<GlueClient, Model::ListBlueprintsRequest, Pagination::ListBlueprintsPaginationTraits<GlueClient>>;
using ListColumnStatisticsTaskRunsPaginator =
    Aws::Utils::Pagination::Paginator<GlueClient, Model::ListColumnStatisticsTaskRunsRequest,
                                      Pagination::ListColumnStatisticsTaskRunsPaginationTraits<GlueClient>>;
using ListConnectionTypesPaginator = Aws::Utils::Pagination::Paginator<GlueClient, Model::ListConnectionTypesRequest,
                                                                       Pagination::ListConnectionTypesPaginationTraits<GlueClient>>;
using ListCrawlersPaginator =
    Aws::Utils::Pagination::Paginator<GlueClient, Model::ListCrawlersRequest, Pagination::ListCrawlersPaginationTraits<GlueClient>>;
using ListCustomEntityTypesPaginator = Aws::Utils::Pagination::Paginator<GlueClient, Model::ListCustomEntityTypesRequest,
                                                                         Pagination::ListCustomEntityTypesPaginationTraits<GlueClient>>;
using ListDataQualityResultsPaginator = Aws::Utils::Pagination::Paginator<GlueClient, Model::ListDataQualityResultsRequest,
                                                                          Pagination::ListDataQualityResultsPaginationTraits<GlueClient>>;
using ListDataQualityRuleRecommendationRunsPaginator =
    Aws::Utils::Pagination::Paginator<GlueClient, Model::ListDataQualityRuleRecommendationRunsRequest,
                                      Pagination::ListDataQualityRuleRecommendationRunsPaginationTraits<GlueClient>>;
using ListDataQualityRulesetEvaluationRunsPaginator =
    Aws::Utils::Pagination::Paginator<GlueClient, Model::ListDataQualityRulesetEvaluationRunsRequest,
                                      Pagination::ListDataQualityRulesetEvaluationRunsPaginationTraits<GlueClient>>;
using ListDataQualityRulesetsPaginator = Aws::Utils::Pagination::Paginator<GlueClient, Model::ListDataQualityRulesetsRequest,
                                                                           Pagination::ListDataQualityRulesetsPaginationTraits<GlueClient>>;
using ListDevEndpointsPaginator =
    Aws::Utils::Pagination::Paginator<GlueClient, Model::ListDevEndpointsRequest, Pagination::ListDevEndpointsPaginationTraits<GlueClient>>;
using ListEntitiesPaginator =
    Aws::Utils::Pagination::Paginator<GlueClient, Model::ListEntitiesRequest, Pagination::ListEntitiesPaginationTraits<GlueClient>>;
using ListJobsPaginator =
    Aws::Utils::Pagination::Paginator<GlueClient, Model::ListJobsRequest, Pagination::ListJobsPaginationTraits<GlueClient>>;
using ListMaterializedViewRefreshTaskRunsPaginator =
    Aws::Utils::Pagination::Paginator<GlueClient, Model::ListMaterializedViewRefreshTaskRunsRequest,
                                      Pagination::ListMaterializedViewRefreshTaskRunsPaginationTraits<GlueClient>>;
using ListMLTransformsPaginator =
    Aws::Utils::Pagination::Paginator<GlueClient, Model::ListMLTransformsRequest, Pagination::ListMLTransformsPaginationTraits<GlueClient>>;
using ListRegistriesPaginator =
    Aws::Utils::Pagination::Paginator<GlueClient, Model::ListRegistriesRequest, Pagination::ListRegistriesPaginationTraits<GlueClient>>;
using ListSchemasPaginator =
    Aws::Utils::Pagination::Paginator<GlueClient, Model::ListSchemasRequest, Pagination::ListSchemasPaginationTraits<GlueClient>>;
using ListSchemaVersionsPaginator = Aws::Utils::Pagination::Paginator<GlueClient, Model::ListSchemaVersionsRequest,
                                                                      Pagination::ListSchemaVersionsPaginationTraits<GlueClient>>;
using ListSessionsPaginator =
    Aws::Utils::Pagination::Paginator<GlueClient, Model::ListSessionsRequest, Pagination::ListSessionsPaginationTraits<GlueClient>>;
using ListTableOptimizerRunsPaginator = Aws::Utils::Pagination::Paginator<GlueClient, Model::ListTableOptimizerRunsRequest,
                                                                          Pagination::ListTableOptimizerRunsPaginationTraits<GlueClient>>;
using ListTriggersPaginator =
    Aws::Utils::Pagination::Paginator<GlueClient, Model::ListTriggersRequest, Pagination::ListTriggersPaginationTraits<GlueClient>>;
using ListUsageProfilesPaginator = Aws::Utils::Pagination::Paginator<GlueClient, Model::ListUsageProfilesRequest,
                                                                     Pagination::ListUsageProfilesPaginationTraits<GlueClient>>;
using ListWorkflowsPaginator =
    Aws::Utils::Pagination::Paginator<GlueClient, Model::ListWorkflowsRequest, Pagination::ListWorkflowsPaginationTraits<GlueClient>>;
using SearchTablesPaginator =
    Aws::Utils::Pagination::Paginator<GlueClient, Model::SearchTablesRequest, Pagination::SearchTablesPaginationTraits<GlueClient>>;

}  // namespace Glue
}  // namespace Aws
