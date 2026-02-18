/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
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

#include <memory>

namespace Aws {
namespace Glue {

class GlueClient;

template <typename DerivedClient>
class GluePaginationBase {
 public:
  /**
   * Create a paginator for DescribeEntity operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeEntityRequest, Pagination::DescribeEntityPaginationTraits<DerivedClient>>
  DescribeEntityPaginator(const Model::DescribeEntityRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeEntityRequest,
                                             Pagination::DescribeEntityPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for GetBlueprintRuns operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetBlueprintRunsRequest,
                                    Pagination::GetBlueprintRunsPaginationTraits<DerivedClient>>
  GetBlueprintRunsPaginator(const Model::GetBlueprintRunsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetBlueprintRunsRequest,
                                             Pagination::GetBlueprintRunsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for GetClassifiers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetClassifiersRequest, Pagination::GetClassifiersPaginationTraits<DerivedClient>>
  GetClassifiersPaginator(const Model::GetClassifiersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetClassifiersRequest,
                                             Pagination::GetClassifiersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for GetColumnStatisticsTaskRuns operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetColumnStatisticsTaskRunsRequest,
                                    Pagination::GetColumnStatisticsTaskRunsPaginationTraits<DerivedClient>>
  GetColumnStatisticsTaskRunsPaginator(const Model::GetColumnStatisticsTaskRunsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetColumnStatisticsTaskRunsRequest,
                                             Pagination::GetColumnStatisticsTaskRunsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetConnections operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetConnectionsRequest, Pagination::GetConnectionsPaginationTraits<DerivedClient>>
  GetConnectionsPaginator(const Model::GetConnectionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetConnectionsRequest,
                                             Pagination::GetConnectionsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for GetCrawlerMetrics operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetCrawlerMetricsRequest,
                                    Pagination::GetCrawlerMetricsPaginationTraits<DerivedClient>>
  GetCrawlerMetricsPaginator(const Model::GetCrawlerMetricsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetCrawlerMetricsRequest,
                                             Pagination::GetCrawlerMetricsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetCrawlers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetCrawlersRequest, Pagination::GetCrawlersPaginationTraits<DerivedClient>>
  GetCrawlersPaginator(const Model::GetCrawlersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetCrawlersRequest,
                                             Pagination::GetCrawlersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for GetDatabases operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetDatabasesRequest, Pagination::GetDatabasesPaginationTraits<DerivedClient>>
  GetDatabasesPaginator(const Model::GetDatabasesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetDatabasesRequest,
                                             Pagination::GetDatabasesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for GetDevEndpoints operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetDevEndpointsRequest,
                                    Pagination::GetDevEndpointsPaginationTraits<DerivedClient>>
  GetDevEndpointsPaginator(const Model::GetDevEndpointsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetDevEndpointsRequest,
                                             Pagination::GetDevEndpointsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for GetJobRuns operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetJobRunsRequest, Pagination::GetJobRunsPaginationTraits<DerivedClient>>
  GetJobRunsPaginator(const Model::GetJobRunsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetJobRunsRequest,
                                             Pagination::GetJobRunsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for GetJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetJobsRequest, Pagination::GetJobsPaginationTraits<DerivedClient>>
  GetJobsPaginator(const Model::GetJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetJobsRequest, Pagination::GetJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetMLTaskRuns operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetMLTaskRunsRequest, Pagination::GetMLTaskRunsPaginationTraits<DerivedClient>>
  GetMLTaskRunsPaginator(const Model::GetMLTaskRunsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetMLTaskRunsRequest,
                                             Pagination::GetMLTaskRunsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for GetMLTransforms operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetMLTransformsRequest,
                                    Pagination::GetMLTransformsPaginationTraits<DerivedClient>>
  GetMLTransformsPaginator(const Model::GetMLTransformsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetMLTransformsRequest,
                                             Pagination::GetMLTransformsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for GetPartitionIndexes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetPartitionIndexesRequest,
                                    Pagination::GetPartitionIndexesPaginationTraits<DerivedClient>>
  GetPartitionIndexesPaginator(const Model::GetPartitionIndexesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetPartitionIndexesRequest,
                                             Pagination::GetPartitionIndexesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetPartitions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetPartitionsRequest, Pagination::GetPartitionsPaginationTraits<DerivedClient>>
  GetPartitionsPaginator(const Model::GetPartitionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetPartitionsRequest,
                                             Pagination::GetPartitionsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for GetResourcePolicies operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetResourcePoliciesRequest,
                                    Pagination::GetResourcePoliciesPaginationTraits<DerivedClient>>
  GetResourcePoliciesPaginator(const Model::GetResourcePoliciesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetResourcePoliciesRequest,
                                             Pagination::GetResourcePoliciesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetSecurityConfigurations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetSecurityConfigurationsRequest,
                                    Pagination::GetSecurityConfigurationsPaginationTraits<DerivedClient>>
  GetSecurityConfigurationsPaginator(const Model::GetSecurityConfigurationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetSecurityConfigurationsRequest,
                                             Pagination::GetSecurityConfigurationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetTables operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetTablesRequest, Pagination::GetTablesPaginationTraits<DerivedClient>>
  GetTablesPaginator(const Model::GetTablesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetTablesRequest, Pagination::GetTablesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetTableVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetTableVersionsRequest,
                                    Pagination::GetTableVersionsPaginationTraits<DerivedClient>>
  GetTableVersionsPaginator(const Model::GetTableVersionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetTableVersionsRequest,
                                             Pagination::GetTableVersionsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for GetTriggers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetTriggersRequest, Pagination::GetTriggersPaginationTraits<DerivedClient>>
  GetTriggersPaginator(const Model::GetTriggersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetTriggersRequest,
                                             Pagination::GetTriggersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for GetUnfilteredPartitionsMetadata operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetUnfilteredPartitionsMetadataRequest,
                                    Pagination::GetUnfilteredPartitionsMetadataPaginationTraits<DerivedClient>>
  GetUnfilteredPartitionsMetadataPaginator(const Model::GetUnfilteredPartitionsMetadataRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetUnfilteredPartitionsMetadataRequest,
                                             Pagination::GetUnfilteredPartitionsMetadataPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetUserDefinedFunctions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetUserDefinedFunctionsRequest,
                                    Pagination::GetUserDefinedFunctionsPaginationTraits<DerivedClient>>
  GetUserDefinedFunctionsPaginator(const Model::GetUserDefinedFunctionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetUserDefinedFunctionsRequest,
                                             Pagination::GetUserDefinedFunctionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetWorkflowRuns operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetWorkflowRunsRequest,
                                    Pagination::GetWorkflowRunsPaginationTraits<DerivedClient>>
  GetWorkflowRunsPaginator(const Model::GetWorkflowRunsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetWorkflowRunsRequest,
                                             Pagination::GetWorkflowRunsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListBlueprints operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBlueprintsRequest, Pagination::ListBlueprintsPaginationTraits<DerivedClient>>
  ListBlueprintsPaginator(const Model::ListBlueprintsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBlueprintsRequest,
                                             Pagination::ListBlueprintsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListColumnStatisticsTaskRuns operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListColumnStatisticsTaskRunsRequest,
                                    Pagination::ListColumnStatisticsTaskRunsPaginationTraits<DerivedClient>>
  ListColumnStatisticsTaskRunsPaginator(const Model::ListColumnStatisticsTaskRunsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListColumnStatisticsTaskRunsRequest,
                                             Pagination::ListColumnStatisticsTaskRunsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListConnectionTypes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConnectionTypesRequest,
                                    Pagination::ListConnectionTypesPaginationTraits<DerivedClient>>
  ListConnectionTypesPaginator(const Model::ListConnectionTypesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConnectionTypesRequest,
                                             Pagination::ListConnectionTypesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCrawlers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCrawlersRequest, Pagination::ListCrawlersPaginationTraits<DerivedClient>>
  ListCrawlersPaginator(const Model::ListCrawlersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCrawlersRequest,
                                             Pagination::ListCrawlersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListCustomEntityTypes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCustomEntityTypesRequest,
                                    Pagination::ListCustomEntityTypesPaginationTraits<DerivedClient>>
  ListCustomEntityTypesPaginator(const Model::ListCustomEntityTypesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCustomEntityTypesRequest,
                                             Pagination::ListCustomEntityTypesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDataQualityResults operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataQualityResultsRequest,
                                    Pagination::ListDataQualityResultsPaginationTraits<DerivedClient>>
  ListDataQualityResultsPaginator(const Model::ListDataQualityResultsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataQualityResultsRequest,
                                             Pagination::ListDataQualityResultsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDataQualityRuleRecommendationRuns operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataQualityRuleRecommendationRunsRequest,
                                    Pagination::ListDataQualityRuleRecommendationRunsPaginationTraits<DerivedClient>>
  ListDataQualityRuleRecommendationRunsPaginator(const Model::ListDataQualityRuleRecommendationRunsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataQualityRuleRecommendationRunsRequest,
                                             Pagination::ListDataQualityRuleRecommendationRunsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDataQualityRulesetEvaluationRuns operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataQualityRulesetEvaluationRunsRequest,
                                    Pagination::ListDataQualityRulesetEvaluationRunsPaginationTraits<DerivedClient>>
  ListDataQualityRulesetEvaluationRunsPaginator(const Model::ListDataQualityRulesetEvaluationRunsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataQualityRulesetEvaluationRunsRequest,
                                             Pagination::ListDataQualityRulesetEvaluationRunsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDataQualityRulesets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataQualityRulesetsRequest,
                                    Pagination::ListDataQualityRulesetsPaginationTraits<DerivedClient>>
  ListDataQualityRulesetsPaginator(const Model::ListDataQualityRulesetsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataQualityRulesetsRequest,
                                             Pagination::ListDataQualityRulesetsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDevEndpoints operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDevEndpointsRequest,
                                    Pagination::ListDevEndpointsPaginationTraits<DerivedClient>>
  ListDevEndpointsPaginator(const Model::ListDevEndpointsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDevEndpointsRequest,
                                             Pagination::ListDevEndpointsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListEntities operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEntitiesRequest, Pagination::ListEntitiesPaginationTraits<DerivedClient>>
  ListEntitiesPaginator(const Model::ListEntitiesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEntitiesRequest,
                                             Pagination::ListEntitiesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListJobsRequest, Pagination::ListJobsPaginationTraits<DerivedClient>>
  ListJobsPaginator(const Model::ListJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListJobsRequest, Pagination::ListJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListMaterializedViewRefreshTaskRuns operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMaterializedViewRefreshTaskRunsRequest,
                                    Pagination::ListMaterializedViewRefreshTaskRunsPaginationTraits<DerivedClient>>
  ListMaterializedViewRefreshTaskRunsPaginator(const Model::ListMaterializedViewRefreshTaskRunsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMaterializedViewRefreshTaskRunsRequest,
                                             Pagination::ListMaterializedViewRefreshTaskRunsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListMLTransforms operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMLTransformsRequest,
                                    Pagination::ListMLTransformsPaginationTraits<DerivedClient>>
  ListMLTransformsPaginator(const Model::ListMLTransformsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMLTransformsRequest,
                                             Pagination::ListMLTransformsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListRegistries operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRegistriesRequest, Pagination::ListRegistriesPaginationTraits<DerivedClient>>
  ListRegistriesPaginator(const Model::ListRegistriesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRegistriesRequest,
                                             Pagination::ListRegistriesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListSchemas operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSchemasRequest, Pagination::ListSchemasPaginationTraits<DerivedClient>>
  ListSchemasPaginator(const Model::ListSchemasRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSchemasRequest,
                                             Pagination::ListSchemasPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListSchemaVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSchemaVersionsRequest,
                                    Pagination::ListSchemaVersionsPaginationTraits<DerivedClient>>
  ListSchemaVersionsPaginator(const Model::ListSchemaVersionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSchemaVersionsRequest,
                                             Pagination::ListSchemaVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSessions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSessionsRequest, Pagination::ListSessionsPaginationTraits<DerivedClient>>
  ListSessionsPaginator(const Model::ListSessionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSessionsRequest,
                                             Pagination::ListSessionsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListTableOptimizerRuns operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTableOptimizerRunsRequest,
                                    Pagination::ListTableOptimizerRunsPaginationTraits<DerivedClient>>
  ListTableOptimizerRunsPaginator(const Model::ListTableOptimizerRunsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTableOptimizerRunsRequest,
                                             Pagination::ListTableOptimizerRunsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTriggers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTriggersRequest, Pagination::ListTriggersPaginationTraits<DerivedClient>>
  ListTriggersPaginator(const Model::ListTriggersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTriggersRequest,
                                             Pagination::ListTriggersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListUsageProfiles operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListUsageProfilesRequest,
                                    Pagination::ListUsageProfilesPaginationTraits<DerivedClient>>
  ListUsageProfilesPaginator(const Model::ListUsageProfilesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListUsageProfilesRequest,
                                             Pagination::ListUsageProfilesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListWorkflows operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkflowsRequest, Pagination::ListWorkflowsPaginationTraits<DerivedClient>>
  ListWorkflowsPaginator(const Model::ListWorkflowsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkflowsRequest,
                                             Pagination::ListWorkflowsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for SearchTables operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchTablesRequest, Pagination::SearchTablesPaginationTraits<DerivedClient>>
  SearchTablesPaginator(const Model::SearchTablesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchTablesRequest,
                                             Pagination::SearchTablesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }
};
}  // namespace Glue
}  // namespace Aws
