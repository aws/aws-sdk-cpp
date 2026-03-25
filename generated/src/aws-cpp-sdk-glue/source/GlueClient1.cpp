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
#include <aws/glue/GlueClient.h>
#include <aws/glue/GlueEndpointProvider.h>
#include <aws/glue/GlueErrorMarshaller.h>
#include <aws/glue/model/GetColumnStatisticsTaskRunRequest.h>
#include <aws/glue/model/GetColumnStatisticsTaskRunsRequest.h>
#include <aws/glue/model/GetColumnStatisticsTaskSettingsRequest.h>
#include <aws/glue/model/GetConnectionRequest.h>
#include <aws/glue/model/GetConnectionsRequest.h>
#include <aws/glue/model/GetCrawlerMetricsRequest.h>
#include <aws/glue/model/GetCrawlerRequest.h>
#include <aws/glue/model/GetCrawlersRequest.h>
#include <aws/glue/model/GetCustomEntityTypeRequest.h>
#include <aws/glue/model/GetDataCatalogEncryptionSettingsRequest.h>
#include <aws/glue/model/GetDataQualityModelRequest.h>
#include <aws/glue/model/GetDataQualityModelResultRequest.h>
#include <aws/glue/model/GetDataQualityResultRequest.h>
#include <aws/glue/model/GetDataQualityRuleRecommendationRunRequest.h>
#include <aws/glue/model/GetDataQualityRulesetEvaluationRunRequest.h>
#include <aws/glue/model/GetDataQualityRulesetRequest.h>
#include <aws/glue/model/GetDatabaseRequest.h>
#include <aws/glue/model/GetDatabasesRequest.h>
#include <aws/glue/model/GetDataflowGraphRequest.h>
#include <aws/glue/model/GetDevEndpointRequest.h>
#include <aws/glue/model/GetDevEndpointsRequest.h>
#include <aws/glue/model/GetEntityRecordsRequest.h>
#include <aws/glue/model/GetGlueIdentityCenterConfigurationRequest.h>
#include <aws/glue/model/GetIntegrationResourcePropertyRequest.h>
#include <aws/glue/model/GetIntegrationTablePropertiesRequest.h>
#include <aws/glue/model/GetJobBookmarkRequest.h>
#include <aws/glue/model/GetJobRequest.h>
#include <aws/glue/model/GetJobRunRequest.h>
#include <aws/glue/model/GetJobRunsRequest.h>
#include <aws/glue/model/GetJobsRequest.h>
#include <aws/glue/model/GetMLTaskRunRequest.h>
#include <aws/glue/model/GetMLTaskRunsRequest.h>
#include <aws/glue/model/GetMLTransformRequest.h>
#include <aws/glue/model/GetMLTransformsRequest.h>
#include <aws/glue/model/GetMappingRequest.h>
#include <aws/glue/model/GetMaterializedViewRefreshTaskRunRequest.h>
#include <aws/glue/model/GetPartitionIndexesRequest.h>
#include <aws/glue/model/GetPartitionRequest.h>
#include <aws/glue/model/GetPartitionsRequest.h>
#include <aws/glue/model/GetPlanRequest.h>
#include <aws/glue/model/GetRegistryRequest.h>
#include <aws/glue/model/GetResourcePoliciesRequest.h>
#include <aws/glue/model/GetResourcePolicyRequest.h>
#include <aws/glue/model/GetSchemaByDefinitionRequest.h>
#include <aws/glue/model/GetSchemaRequest.h>
#include <aws/glue/model/GetSchemaVersionRequest.h>
#include <aws/glue/model/GetSchemaVersionsDiffRequest.h>
#include <aws/glue/model/GetSecurityConfigurationRequest.h>
#include <aws/glue/model/GetSecurityConfigurationsRequest.h>
#include <aws/glue/model/GetSessionRequest.h>
#include <aws/glue/model/GetStatementRequest.h>
#include <aws/glue/model/GetTableOptimizerRequest.h>
#include <aws/glue/model/GetTableRequest.h>
#include <aws/glue/model/GetTableVersionRequest.h>
#include <aws/glue/model/GetTableVersionsRequest.h>
#include <aws/glue/model/GetTablesRequest.h>
#include <aws/glue/model/GetTagsRequest.h>
#include <aws/glue/model/GetTriggerRequest.h>
#include <aws/glue/model/GetTriggersRequest.h>
#include <aws/glue/model/GetUnfilteredPartitionMetadataRequest.h>
#include <aws/glue/model/GetUnfilteredPartitionsMetadataRequest.h>
#include <aws/glue/model/GetUnfilteredTableMetadataRequest.h>
#include <aws/glue/model/GetUsageProfileRequest.h>
#include <aws/glue/model/GetUserDefinedFunctionRequest.h>
#include <aws/glue/model/GetUserDefinedFunctionsRequest.h>
#include <aws/glue/model/GetWorkflowRequest.h>
#include <aws/glue/model/GetWorkflowRunPropertiesRequest.h>
#include <aws/glue/model/GetWorkflowRunRequest.h>
#include <aws/glue/model/GetWorkflowRunsRequest.h>
#include <aws/glue/model/ImportCatalogToGlueRequest.h>
#include <aws/glue/model/ListBlueprintsRequest.h>
#include <aws/glue/model/ListColumnStatisticsTaskRunsRequest.h>
#include <aws/glue/model/ListConnectionTypesRequest.h>
#include <aws/glue/model/ListCrawlersRequest.h>
#include <aws/glue/model/ListCrawlsRequest.h>
#include <aws/glue/model/ListCustomEntityTypesRequest.h>
#include <aws/glue/model/ListDataQualityResultsRequest.h>
#include <aws/glue/model/ListDataQualityRuleRecommendationRunsRequest.h>
#include <aws/glue/model/ListDataQualityRulesetEvaluationRunsRequest.h>
#include <aws/glue/model/ListDataQualityRulesetsRequest.h>
#include <aws/glue/model/ListDataQualityStatisticAnnotationsRequest.h>
#include <aws/glue/model/ListDataQualityStatisticsRequest.h>
#include <aws/glue/model/ListDevEndpointsRequest.h>
#include <aws/glue/model/ListEntitiesRequest.h>
#include <aws/glue/model/ListIntegrationResourcePropertiesRequest.h>
#include <aws/glue/model/ListJobsRequest.h>
#include <aws/glue/model/ListMLTransformsRequest.h>
#include <aws/glue/model/ListMaterializedViewRefreshTaskRunsRequest.h>
#include <aws/glue/model/ListRegistriesRequest.h>
#include <aws/glue/model/ListSchemaVersionsRequest.h>
#include <aws/glue/model/ListSchemasRequest.h>
#include <aws/glue/model/ListSessionsRequest.h>
#include <aws/glue/model/ListStatementsRequest.h>
#include <aws/glue/model/ListTableOptimizerRunsRequest.h>
#include <aws/glue/model/ListTriggersRequest.h>
#include <aws/glue/model/ListUsageProfilesRequest.h>
#include <aws/glue/model/ListWorkflowsRequest.h>
#include <aws/glue/model/ModifyIntegrationRequest.h>
#include <aws/glue/model/PutDataCatalogEncryptionSettingsRequest.h>
#include <aws/glue/model/PutDataQualityProfileAnnotationRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Glue;
using namespace Aws::Glue::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

GetColumnStatisticsTaskRunOutcome GlueClient::GetColumnStatisticsTaskRun(const GetColumnStatisticsTaskRunRequest& request) const {
  return GetColumnStatisticsTaskRunOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetColumnStatisticsTaskRunsOutcome GlueClient::GetColumnStatisticsTaskRuns(const GetColumnStatisticsTaskRunsRequest& request) const {
  return GetColumnStatisticsTaskRunsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetColumnStatisticsTaskSettingsOutcome GlueClient::GetColumnStatisticsTaskSettings(
    const GetColumnStatisticsTaskSettingsRequest& request) const {
  return GetColumnStatisticsTaskSettingsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetConnectionOutcome GlueClient::GetConnection(const GetConnectionRequest& request) const {
  return GetConnectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetConnectionsOutcome GlueClient::GetConnections(const GetConnectionsRequest& request) const {
  return GetConnectionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetCrawlerOutcome GlueClient::GetCrawler(const GetCrawlerRequest& request) const {
  return GetCrawlerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetCrawlerMetricsOutcome GlueClient::GetCrawlerMetrics(const GetCrawlerMetricsRequest& request) const {
  return GetCrawlerMetricsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetCrawlersOutcome GlueClient::GetCrawlers(const GetCrawlersRequest& request) const {
  return GetCrawlersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetCustomEntityTypeOutcome GlueClient::GetCustomEntityType(const GetCustomEntityTypeRequest& request) const {
  return GetCustomEntityTypeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetDataCatalogEncryptionSettingsOutcome GlueClient::GetDataCatalogEncryptionSettings(
    const GetDataCatalogEncryptionSettingsRequest& request) const {
  return GetDataCatalogEncryptionSettingsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetDataQualityModelOutcome GlueClient::GetDataQualityModel(const GetDataQualityModelRequest& request) const {
  return GetDataQualityModelOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetDataQualityModelResultOutcome GlueClient::GetDataQualityModelResult(const GetDataQualityModelResultRequest& request) const {
  return GetDataQualityModelResultOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetDataQualityResultOutcome GlueClient::GetDataQualityResult(const GetDataQualityResultRequest& request) const {
  return GetDataQualityResultOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetDataQualityRuleRecommendationRunOutcome GlueClient::GetDataQualityRuleRecommendationRun(
    const GetDataQualityRuleRecommendationRunRequest& request) const {
  return GetDataQualityRuleRecommendationRunOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetDataQualityRulesetOutcome GlueClient::GetDataQualityRuleset(const GetDataQualityRulesetRequest& request) const {
  return GetDataQualityRulesetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetDataQualityRulesetEvaluationRunOutcome GlueClient::GetDataQualityRulesetEvaluationRun(
    const GetDataQualityRulesetEvaluationRunRequest& request) const {
  return GetDataQualityRulesetEvaluationRunOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetDatabaseOutcome GlueClient::GetDatabase(const GetDatabaseRequest& request) const {
  return GetDatabaseOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetDatabasesOutcome GlueClient::GetDatabases(const GetDatabasesRequest& request) const {
  return GetDatabasesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetDataflowGraphOutcome GlueClient::GetDataflowGraph(const GetDataflowGraphRequest& request) const {
  return GetDataflowGraphOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetDevEndpointOutcome GlueClient::GetDevEndpoint(const GetDevEndpointRequest& request) const {
  return GetDevEndpointOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetDevEndpointsOutcome GlueClient::GetDevEndpoints(const GetDevEndpointsRequest& request) const {
  return GetDevEndpointsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetEntityRecordsOutcome GlueClient::GetEntityRecords(const GetEntityRecordsRequest& request) const {
  return GetEntityRecordsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetGlueIdentityCenterConfigurationOutcome GlueClient::GetGlueIdentityCenterConfiguration(
    const GetGlueIdentityCenterConfigurationRequest& request) const {
  return GetGlueIdentityCenterConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetIntegrationResourcePropertyOutcome GlueClient::GetIntegrationResourceProperty(
    const GetIntegrationResourcePropertyRequest& request) const {
  return GetIntegrationResourcePropertyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetIntegrationTablePropertiesOutcome GlueClient::GetIntegrationTableProperties(const GetIntegrationTablePropertiesRequest& request) const {
  return GetIntegrationTablePropertiesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetJobOutcome GlueClient::GetJob(const GetJobRequest& request) const {
  return GetJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetJobBookmarkOutcome GlueClient::GetJobBookmark(const GetJobBookmarkRequest& request) const {
  return GetJobBookmarkOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetJobRunOutcome GlueClient::GetJobRun(const GetJobRunRequest& request) const {
  return GetJobRunOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetJobRunsOutcome GlueClient::GetJobRuns(const GetJobRunsRequest& request) const {
  return GetJobRunsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetJobsOutcome GlueClient::GetJobs(const GetJobsRequest& request) const {
  return GetJobsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetMLTaskRunOutcome GlueClient::GetMLTaskRun(const GetMLTaskRunRequest& request) const {
  return GetMLTaskRunOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetMLTaskRunsOutcome GlueClient::GetMLTaskRuns(const GetMLTaskRunsRequest& request) const {
  return GetMLTaskRunsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetMLTransformOutcome GlueClient::GetMLTransform(const GetMLTransformRequest& request) const {
  return GetMLTransformOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetMLTransformsOutcome GlueClient::GetMLTransforms(const GetMLTransformsRequest& request) const {
  return GetMLTransformsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetMappingOutcome GlueClient::GetMapping(const GetMappingRequest& request) const {
  return GetMappingOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetMaterializedViewRefreshTaskRunOutcome GlueClient::GetMaterializedViewRefreshTaskRun(
    const GetMaterializedViewRefreshTaskRunRequest& request) const {
  return GetMaterializedViewRefreshTaskRunOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetPartitionOutcome GlueClient::GetPartition(const GetPartitionRequest& request) const {
  return GetPartitionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetPartitionIndexesOutcome GlueClient::GetPartitionIndexes(const GetPartitionIndexesRequest& request) const {
  return GetPartitionIndexesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetPartitionsOutcome GlueClient::GetPartitions(const GetPartitionsRequest& request) const {
  return GetPartitionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetPlanOutcome GlueClient::GetPlan(const GetPlanRequest& request) const {
  return GetPlanOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetRegistryOutcome GlueClient::GetRegistry(const GetRegistryRequest& request) const {
  return GetRegistryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetResourcePoliciesOutcome GlueClient::GetResourcePolicies(const GetResourcePoliciesRequest& request) const {
  return GetResourcePoliciesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetResourcePolicyOutcome GlueClient::GetResourcePolicy(const GetResourcePolicyRequest& request) const {
  return GetResourcePolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetSchemaOutcome GlueClient::GetSchema(const GetSchemaRequest& request) const {
  return GetSchemaOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetSchemaByDefinitionOutcome GlueClient::GetSchemaByDefinition(const GetSchemaByDefinitionRequest& request) const {
  return GetSchemaByDefinitionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetSchemaVersionOutcome GlueClient::GetSchemaVersion(const GetSchemaVersionRequest& request) const {
  return GetSchemaVersionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetSchemaVersionsDiffOutcome GlueClient::GetSchemaVersionsDiff(const GetSchemaVersionsDiffRequest& request) const {
  return GetSchemaVersionsDiffOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetSecurityConfigurationOutcome GlueClient::GetSecurityConfiguration(const GetSecurityConfigurationRequest& request) const {
  return GetSecurityConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetSecurityConfigurationsOutcome GlueClient::GetSecurityConfigurations(const GetSecurityConfigurationsRequest& request) const {
  return GetSecurityConfigurationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetSessionOutcome GlueClient::GetSession(const GetSessionRequest& request) const {
  return GetSessionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetStatementOutcome GlueClient::GetStatement(const GetStatementRequest& request) const {
  return GetStatementOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetTableOutcome GlueClient::GetTable(const GetTableRequest& request) const {
  return GetTableOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetTableOptimizerOutcome GlueClient::GetTableOptimizer(const GetTableOptimizerRequest& request) const {
  return GetTableOptimizerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetTableVersionOutcome GlueClient::GetTableVersion(const GetTableVersionRequest& request) const {
  return GetTableVersionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetTableVersionsOutcome GlueClient::GetTableVersions(const GetTableVersionsRequest& request) const {
  return GetTableVersionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetTablesOutcome GlueClient::GetTables(const GetTablesRequest& request) const {
  return GetTablesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetTagsOutcome GlueClient::GetTags(const GetTagsRequest& request) const {
  return GetTagsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetTriggerOutcome GlueClient::GetTrigger(const GetTriggerRequest& request) const {
  return GetTriggerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetTriggersOutcome GlueClient::GetTriggers(const GetTriggersRequest& request) const {
  return GetTriggersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetUnfilteredPartitionMetadataOutcome GlueClient::GetUnfilteredPartitionMetadata(
    const GetUnfilteredPartitionMetadataRequest& request) const {
  return GetUnfilteredPartitionMetadataOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetUnfilteredPartitionsMetadataOutcome GlueClient::GetUnfilteredPartitionsMetadata(
    const GetUnfilteredPartitionsMetadataRequest& request) const {
  return GetUnfilteredPartitionsMetadataOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetUnfilteredTableMetadataOutcome GlueClient::GetUnfilteredTableMetadata(const GetUnfilteredTableMetadataRequest& request) const {
  return GetUnfilteredTableMetadataOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetUsageProfileOutcome GlueClient::GetUsageProfile(const GetUsageProfileRequest& request) const {
  return GetUsageProfileOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetUserDefinedFunctionOutcome GlueClient::GetUserDefinedFunction(const GetUserDefinedFunctionRequest& request) const {
  return GetUserDefinedFunctionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetUserDefinedFunctionsOutcome GlueClient::GetUserDefinedFunctions(const GetUserDefinedFunctionsRequest& request) const {
  return GetUserDefinedFunctionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetWorkflowOutcome GlueClient::GetWorkflow(const GetWorkflowRequest& request) const {
  return GetWorkflowOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetWorkflowRunOutcome GlueClient::GetWorkflowRun(const GetWorkflowRunRequest& request) const {
  return GetWorkflowRunOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetWorkflowRunPropertiesOutcome GlueClient::GetWorkflowRunProperties(const GetWorkflowRunPropertiesRequest& request) const {
  return GetWorkflowRunPropertiesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetWorkflowRunsOutcome GlueClient::GetWorkflowRuns(const GetWorkflowRunsRequest& request) const {
  return GetWorkflowRunsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ImportCatalogToGlueOutcome GlueClient::ImportCatalogToGlue(const ImportCatalogToGlueRequest& request) const {
  return ImportCatalogToGlueOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListBlueprintsOutcome GlueClient::ListBlueprints(const ListBlueprintsRequest& request) const {
  return ListBlueprintsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListColumnStatisticsTaskRunsOutcome GlueClient::ListColumnStatisticsTaskRuns(const ListColumnStatisticsTaskRunsRequest& request) const {
  return ListColumnStatisticsTaskRunsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListConnectionTypesOutcome GlueClient::ListConnectionTypes(const ListConnectionTypesRequest& request) const {
  return ListConnectionTypesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListCrawlersOutcome GlueClient::ListCrawlers(const ListCrawlersRequest& request) const {
  return ListCrawlersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListCrawlsOutcome GlueClient::ListCrawls(const ListCrawlsRequest& request) const {
  return ListCrawlsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListCustomEntityTypesOutcome GlueClient::ListCustomEntityTypes(const ListCustomEntityTypesRequest& request) const {
  return ListCustomEntityTypesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDataQualityResultsOutcome GlueClient::ListDataQualityResults(const ListDataQualityResultsRequest& request) const {
  return ListDataQualityResultsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDataQualityRuleRecommendationRunsOutcome GlueClient::ListDataQualityRuleRecommendationRuns(
    const ListDataQualityRuleRecommendationRunsRequest& request) const {
  return ListDataQualityRuleRecommendationRunsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDataQualityRulesetEvaluationRunsOutcome GlueClient::ListDataQualityRulesetEvaluationRuns(
    const ListDataQualityRulesetEvaluationRunsRequest& request) const {
  return ListDataQualityRulesetEvaluationRunsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDataQualityRulesetsOutcome GlueClient::ListDataQualityRulesets(const ListDataQualityRulesetsRequest& request) const {
  return ListDataQualityRulesetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDataQualityStatisticAnnotationsOutcome GlueClient::ListDataQualityStatisticAnnotations(
    const ListDataQualityStatisticAnnotationsRequest& request) const {
  return ListDataQualityStatisticAnnotationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDataQualityStatisticsOutcome GlueClient::ListDataQualityStatistics(const ListDataQualityStatisticsRequest& request) const {
  return ListDataQualityStatisticsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDevEndpointsOutcome GlueClient::ListDevEndpoints(const ListDevEndpointsRequest& request) const {
  return ListDevEndpointsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListEntitiesOutcome GlueClient::ListEntities(const ListEntitiesRequest& request) const {
  return ListEntitiesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListIntegrationResourcePropertiesOutcome GlueClient::ListIntegrationResourceProperties(
    const ListIntegrationResourcePropertiesRequest& request) const {
  return ListIntegrationResourcePropertiesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListJobsOutcome GlueClient::ListJobs(const ListJobsRequest& request) const {
  return ListJobsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListMLTransformsOutcome GlueClient::ListMLTransforms(const ListMLTransformsRequest& request) const {
  return ListMLTransformsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListMaterializedViewRefreshTaskRunsOutcome GlueClient::ListMaterializedViewRefreshTaskRuns(
    const ListMaterializedViewRefreshTaskRunsRequest& request) const {
  return ListMaterializedViewRefreshTaskRunsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListRegistriesOutcome GlueClient::ListRegistries(const ListRegistriesRequest& request) const {
  return ListRegistriesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListSchemaVersionsOutcome GlueClient::ListSchemaVersions(const ListSchemaVersionsRequest& request) const {
  return ListSchemaVersionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListSchemasOutcome GlueClient::ListSchemas(const ListSchemasRequest& request) const {
  return ListSchemasOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListSessionsOutcome GlueClient::ListSessions(const ListSessionsRequest& request) const {
  return ListSessionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListStatementsOutcome GlueClient::ListStatements(const ListStatementsRequest& request) const {
  return ListStatementsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTableOptimizerRunsOutcome GlueClient::ListTableOptimizerRuns(const ListTableOptimizerRunsRequest& request) const {
  return ListTableOptimizerRunsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTriggersOutcome GlueClient::ListTriggers(const ListTriggersRequest& request) const {
  return ListTriggersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListUsageProfilesOutcome GlueClient::ListUsageProfiles(const ListUsageProfilesRequest& request) const {
  return ListUsageProfilesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListWorkflowsOutcome GlueClient::ListWorkflows(const ListWorkflowsRequest& request) const {
  return ListWorkflowsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyIntegrationOutcome GlueClient::ModifyIntegration(const ModifyIntegrationRequest& request) const {
  return ModifyIntegrationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutDataCatalogEncryptionSettingsOutcome GlueClient::PutDataCatalogEncryptionSettings(
    const PutDataCatalogEncryptionSettingsRequest& request) const {
  return PutDataCatalogEncryptionSettingsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutDataQualityProfileAnnotationOutcome GlueClient::PutDataQualityProfileAnnotation(
    const PutDataQualityProfileAnnotationRequest& request) const {
  return PutDataQualityProfileAnnotationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
