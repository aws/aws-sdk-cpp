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
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetColumnStatisticsTaskRunOutcome(result.GetResultWithOwnership())
                            : GetColumnStatisticsTaskRunOutcome(std::move(result.GetError()));
}

GetColumnStatisticsTaskRunsOutcome GlueClient::GetColumnStatisticsTaskRuns(const GetColumnStatisticsTaskRunsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetColumnStatisticsTaskRunsOutcome(result.GetResultWithOwnership())
                            : GetColumnStatisticsTaskRunsOutcome(std::move(result.GetError()));
}

GetColumnStatisticsTaskSettingsOutcome GlueClient::GetColumnStatisticsTaskSettings(
    const GetColumnStatisticsTaskSettingsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetColumnStatisticsTaskSettingsOutcome(result.GetResultWithOwnership())
                            : GetColumnStatisticsTaskSettingsOutcome(std::move(result.GetError()));
}

GetConnectionOutcome GlueClient::GetConnection(const GetConnectionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetConnectionOutcome(result.GetResultWithOwnership()) : GetConnectionOutcome(std::move(result.GetError()));
}

GetConnectionsOutcome GlueClient::GetConnections(const GetConnectionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetConnectionsOutcome(result.GetResultWithOwnership()) : GetConnectionsOutcome(std::move(result.GetError()));
}

GetCrawlerOutcome GlueClient::GetCrawler(const GetCrawlerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetCrawlerOutcome(result.GetResultWithOwnership()) : GetCrawlerOutcome(std::move(result.GetError()));
}

GetCrawlerMetricsOutcome GlueClient::GetCrawlerMetrics(const GetCrawlerMetricsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetCrawlerMetricsOutcome(result.GetResultWithOwnership())
                            : GetCrawlerMetricsOutcome(std::move(result.GetError()));
}

GetCrawlersOutcome GlueClient::GetCrawlers(const GetCrawlersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetCrawlersOutcome(result.GetResultWithOwnership()) : GetCrawlersOutcome(std::move(result.GetError()));
}

GetCustomEntityTypeOutcome GlueClient::GetCustomEntityType(const GetCustomEntityTypeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetCustomEntityTypeOutcome(result.GetResultWithOwnership())
                            : GetCustomEntityTypeOutcome(std::move(result.GetError()));
}

GetDataCatalogEncryptionSettingsOutcome GlueClient::GetDataCatalogEncryptionSettings(
    const GetDataCatalogEncryptionSettingsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetDataCatalogEncryptionSettingsOutcome(result.GetResultWithOwnership())
                            : GetDataCatalogEncryptionSettingsOutcome(std::move(result.GetError()));
}

GetDataQualityModelOutcome GlueClient::GetDataQualityModel(const GetDataQualityModelRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetDataQualityModelOutcome(result.GetResultWithOwnership())
                            : GetDataQualityModelOutcome(std::move(result.GetError()));
}

GetDataQualityModelResultOutcome GlueClient::GetDataQualityModelResult(const GetDataQualityModelResultRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetDataQualityModelResultOutcome(result.GetResultWithOwnership())
                            : GetDataQualityModelResultOutcome(std::move(result.GetError()));
}

GetDataQualityResultOutcome GlueClient::GetDataQualityResult(const GetDataQualityResultRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetDataQualityResultOutcome(result.GetResultWithOwnership())
                            : GetDataQualityResultOutcome(std::move(result.GetError()));
}

GetDataQualityRuleRecommendationRunOutcome GlueClient::GetDataQualityRuleRecommendationRun(
    const GetDataQualityRuleRecommendationRunRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetDataQualityRuleRecommendationRunOutcome(result.GetResultWithOwnership())
                            : GetDataQualityRuleRecommendationRunOutcome(std::move(result.GetError()));
}

GetDataQualityRulesetOutcome GlueClient::GetDataQualityRuleset(const GetDataQualityRulesetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetDataQualityRulesetOutcome(result.GetResultWithOwnership())
                            : GetDataQualityRulesetOutcome(std::move(result.GetError()));
}

GetDataQualityRulesetEvaluationRunOutcome GlueClient::GetDataQualityRulesetEvaluationRun(
    const GetDataQualityRulesetEvaluationRunRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetDataQualityRulesetEvaluationRunOutcome(result.GetResultWithOwnership())
                            : GetDataQualityRulesetEvaluationRunOutcome(std::move(result.GetError()));
}

GetDatabaseOutcome GlueClient::GetDatabase(const GetDatabaseRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetDatabaseOutcome(result.GetResultWithOwnership()) : GetDatabaseOutcome(std::move(result.GetError()));
}

GetDatabasesOutcome GlueClient::GetDatabases(const GetDatabasesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetDatabasesOutcome(result.GetResultWithOwnership()) : GetDatabasesOutcome(std::move(result.GetError()));
}

GetDataflowGraphOutcome GlueClient::GetDataflowGraph(const GetDataflowGraphRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetDataflowGraphOutcome(result.GetResultWithOwnership())
                            : GetDataflowGraphOutcome(std::move(result.GetError()));
}

GetDevEndpointOutcome GlueClient::GetDevEndpoint(const GetDevEndpointRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetDevEndpointOutcome(result.GetResultWithOwnership()) : GetDevEndpointOutcome(std::move(result.GetError()));
}

GetDevEndpointsOutcome GlueClient::GetDevEndpoints(const GetDevEndpointsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetDevEndpointsOutcome(result.GetResultWithOwnership())
                            : GetDevEndpointsOutcome(std::move(result.GetError()));
}

GetEntityRecordsOutcome GlueClient::GetEntityRecords(const GetEntityRecordsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetEntityRecordsOutcome(result.GetResultWithOwnership())
                            : GetEntityRecordsOutcome(std::move(result.GetError()));
}

GetGlueIdentityCenterConfigurationOutcome GlueClient::GetGlueIdentityCenterConfiguration(
    const GetGlueIdentityCenterConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetGlueIdentityCenterConfigurationOutcome(result.GetResultWithOwnership())
                            : GetGlueIdentityCenterConfigurationOutcome(std::move(result.GetError()));
}

GetIntegrationResourcePropertyOutcome GlueClient::GetIntegrationResourceProperty(
    const GetIntegrationResourcePropertyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetIntegrationResourcePropertyOutcome(result.GetResultWithOwnership())
                            : GetIntegrationResourcePropertyOutcome(std::move(result.GetError()));
}

GetIntegrationTablePropertiesOutcome GlueClient::GetIntegrationTableProperties(const GetIntegrationTablePropertiesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetIntegrationTablePropertiesOutcome(result.GetResultWithOwnership())
                            : GetIntegrationTablePropertiesOutcome(std::move(result.GetError()));
}

GetJobOutcome GlueClient::GetJob(const GetJobRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetJobOutcome(result.GetResultWithOwnership()) : GetJobOutcome(std::move(result.GetError()));
}

GetJobBookmarkOutcome GlueClient::GetJobBookmark(const GetJobBookmarkRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetJobBookmarkOutcome(result.GetResultWithOwnership()) : GetJobBookmarkOutcome(std::move(result.GetError()));
}

GetJobRunOutcome GlueClient::GetJobRun(const GetJobRunRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetJobRunOutcome(result.GetResultWithOwnership()) : GetJobRunOutcome(std::move(result.GetError()));
}

GetJobRunsOutcome GlueClient::GetJobRuns(const GetJobRunsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetJobRunsOutcome(result.GetResultWithOwnership()) : GetJobRunsOutcome(std::move(result.GetError()));
}

GetJobsOutcome GlueClient::GetJobs(const GetJobsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetJobsOutcome(result.GetResultWithOwnership()) : GetJobsOutcome(std::move(result.GetError()));
}

GetMLTaskRunOutcome GlueClient::GetMLTaskRun(const GetMLTaskRunRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetMLTaskRunOutcome(result.GetResultWithOwnership()) : GetMLTaskRunOutcome(std::move(result.GetError()));
}

GetMLTaskRunsOutcome GlueClient::GetMLTaskRuns(const GetMLTaskRunsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetMLTaskRunsOutcome(result.GetResultWithOwnership()) : GetMLTaskRunsOutcome(std::move(result.GetError()));
}

GetMLTransformOutcome GlueClient::GetMLTransform(const GetMLTransformRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetMLTransformOutcome(result.GetResultWithOwnership()) : GetMLTransformOutcome(std::move(result.GetError()));
}

GetMLTransformsOutcome GlueClient::GetMLTransforms(const GetMLTransformsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetMLTransformsOutcome(result.GetResultWithOwnership())
                            : GetMLTransformsOutcome(std::move(result.GetError()));
}

GetMappingOutcome GlueClient::GetMapping(const GetMappingRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetMappingOutcome(result.GetResultWithOwnership()) : GetMappingOutcome(std::move(result.GetError()));
}

GetMaterializedViewRefreshTaskRunOutcome GlueClient::GetMaterializedViewRefreshTaskRun(
    const GetMaterializedViewRefreshTaskRunRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetMaterializedViewRefreshTaskRunOutcome(result.GetResultWithOwnership())
                            : GetMaterializedViewRefreshTaskRunOutcome(std::move(result.GetError()));
}

GetPartitionOutcome GlueClient::GetPartition(const GetPartitionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetPartitionOutcome(result.GetResultWithOwnership()) : GetPartitionOutcome(std::move(result.GetError()));
}

GetPartitionIndexesOutcome GlueClient::GetPartitionIndexes(const GetPartitionIndexesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetPartitionIndexesOutcome(result.GetResultWithOwnership())
                            : GetPartitionIndexesOutcome(std::move(result.GetError()));
}

GetPartitionsOutcome GlueClient::GetPartitions(const GetPartitionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetPartitionsOutcome(result.GetResultWithOwnership()) : GetPartitionsOutcome(std::move(result.GetError()));
}

GetPlanOutcome GlueClient::GetPlan(const GetPlanRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetPlanOutcome(result.GetResultWithOwnership()) : GetPlanOutcome(std::move(result.GetError()));
}

GetRegistryOutcome GlueClient::GetRegistry(const GetRegistryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetRegistryOutcome(result.GetResultWithOwnership()) : GetRegistryOutcome(std::move(result.GetError()));
}

GetResourcePoliciesOutcome GlueClient::GetResourcePolicies(const GetResourcePoliciesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetResourcePoliciesOutcome(result.GetResultWithOwnership())
                            : GetResourcePoliciesOutcome(std::move(result.GetError()));
}

GetResourcePolicyOutcome GlueClient::GetResourcePolicy(const GetResourcePolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetResourcePolicyOutcome(result.GetResultWithOwnership())
                            : GetResourcePolicyOutcome(std::move(result.GetError()));
}

GetSchemaOutcome GlueClient::GetSchema(const GetSchemaRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetSchemaOutcome(result.GetResultWithOwnership()) : GetSchemaOutcome(std::move(result.GetError()));
}

GetSchemaByDefinitionOutcome GlueClient::GetSchemaByDefinition(const GetSchemaByDefinitionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetSchemaByDefinitionOutcome(result.GetResultWithOwnership())
                            : GetSchemaByDefinitionOutcome(std::move(result.GetError()));
}

GetSchemaVersionOutcome GlueClient::GetSchemaVersion(const GetSchemaVersionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetSchemaVersionOutcome(result.GetResultWithOwnership())
                            : GetSchemaVersionOutcome(std::move(result.GetError()));
}

GetSchemaVersionsDiffOutcome GlueClient::GetSchemaVersionsDiff(const GetSchemaVersionsDiffRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetSchemaVersionsDiffOutcome(result.GetResultWithOwnership())
                            : GetSchemaVersionsDiffOutcome(std::move(result.GetError()));
}

GetSecurityConfigurationOutcome GlueClient::GetSecurityConfiguration(const GetSecurityConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetSecurityConfigurationOutcome(result.GetResultWithOwnership())
                            : GetSecurityConfigurationOutcome(std::move(result.GetError()));
}

GetSecurityConfigurationsOutcome GlueClient::GetSecurityConfigurations(const GetSecurityConfigurationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetSecurityConfigurationsOutcome(result.GetResultWithOwnership())
                            : GetSecurityConfigurationsOutcome(std::move(result.GetError()));
}

GetSessionOutcome GlueClient::GetSession(const GetSessionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetSessionOutcome(result.GetResultWithOwnership()) : GetSessionOutcome(std::move(result.GetError()));
}

GetStatementOutcome GlueClient::GetStatement(const GetStatementRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetStatementOutcome(result.GetResultWithOwnership()) : GetStatementOutcome(std::move(result.GetError()));
}

GetTableOutcome GlueClient::GetTable(const GetTableRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetTableOutcome(result.GetResultWithOwnership()) : GetTableOutcome(std::move(result.GetError()));
}

GetTableOptimizerOutcome GlueClient::GetTableOptimizer(const GetTableOptimizerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetTableOptimizerOutcome(result.GetResultWithOwnership())
                            : GetTableOptimizerOutcome(std::move(result.GetError()));
}

GetTableVersionOutcome GlueClient::GetTableVersion(const GetTableVersionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetTableVersionOutcome(result.GetResultWithOwnership())
                            : GetTableVersionOutcome(std::move(result.GetError()));
}

GetTableVersionsOutcome GlueClient::GetTableVersions(const GetTableVersionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetTableVersionsOutcome(result.GetResultWithOwnership())
                            : GetTableVersionsOutcome(std::move(result.GetError()));
}

GetTablesOutcome GlueClient::GetTables(const GetTablesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetTablesOutcome(result.GetResultWithOwnership()) : GetTablesOutcome(std::move(result.GetError()));
}

GetTagsOutcome GlueClient::GetTags(const GetTagsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetTagsOutcome(result.GetResultWithOwnership()) : GetTagsOutcome(std::move(result.GetError()));
}

GetTriggerOutcome GlueClient::GetTrigger(const GetTriggerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetTriggerOutcome(result.GetResultWithOwnership()) : GetTriggerOutcome(std::move(result.GetError()));
}

GetTriggersOutcome GlueClient::GetTriggers(const GetTriggersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetTriggersOutcome(result.GetResultWithOwnership()) : GetTriggersOutcome(std::move(result.GetError()));
}

GetUnfilteredPartitionMetadataOutcome GlueClient::GetUnfilteredPartitionMetadata(
    const GetUnfilteredPartitionMetadataRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetUnfilteredPartitionMetadataOutcome(result.GetResultWithOwnership())
                            : GetUnfilteredPartitionMetadataOutcome(std::move(result.GetError()));
}

GetUnfilteredPartitionsMetadataOutcome GlueClient::GetUnfilteredPartitionsMetadata(
    const GetUnfilteredPartitionsMetadataRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetUnfilteredPartitionsMetadataOutcome(result.GetResultWithOwnership())
                            : GetUnfilteredPartitionsMetadataOutcome(std::move(result.GetError()));
}

GetUnfilteredTableMetadataOutcome GlueClient::GetUnfilteredTableMetadata(const GetUnfilteredTableMetadataRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetUnfilteredTableMetadataOutcome(result.GetResultWithOwnership())
                            : GetUnfilteredTableMetadataOutcome(std::move(result.GetError()));
}

GetUsageProfileOutcome GlueClient::GetUsageProfile(const GetUsageProfileRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetUsageProfileOutcome(result.GetResultWithOwnership())
                            : GetUsageProfileOutcome(std::move(result.GetError()));
}

GetUserDefinedFunctionOutcome GlueClient::GetUserDefinedFunction(const GetUserDefinedFunctionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetUserDefinedFunctionOutcome(result.GetResultWithOwnership())
                            : GetUserDefinedFunctionOutcome(std::move(result.GetError()));
}

GetUserDefinedFunctionsOutcome GlueClient::GetUserDefinedFunctions(const GetUserDefinedFunctionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetUserDefinedFunctionsOutcome(result.GetResultWithOwnership())
                            : GetUserDefinedFunctionsOutcome(std::move(result.GetError()));
}

GetWorkflowOutcome GlueClient::GetWorkflow(const GetWorkflowRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetWorkflowOutcome(result.GetResultWithOwnership()) : GetWorkflowOutcome(std::move(result.GetError()));
}

GetWorkflowRunOutcome GlueClient::GetWorkflowRun(const GetWorkflowRunRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetWorkflowRunOutcome(result.GetResultWithOwnership()) : GetWorkflowRunOutcome(std::move(result.GetError()));
}

GetWorkflowRunPropertiesOutcome GlueClient::GetWorkflowRunProperties(const GetWorkflowRunPropertiesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetWorkflowRunPropertiesOutcome(result.GetResultWithOwnership())
                            : GetWorkflowRunPropertiesOutcome(std::move(result.GetError()));
}

GetWorkflowRunsOutcome GlueClient::GetWorkflowRuns(const GetWorkflowRunsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetWorkflowRunsOutcome(result.GetResultWithOwnership())
                            : GetWorkflowRunsOutcome(std::move(result.GetError()));
}

ImportCatalogToGlueOutcome GlueClient::ImportCatalogToGlue(const ImportCatalogToGlueRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ImportCatalogToGlueOutcome(result.GetResultWithOwnership())
                            : ImportCatalogToGlueOutcome(std::move(result.GetError()));
}

ListBlueprintsOutcome GlueClient::ListBlueprints(const ListBlueprintsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListBlueprintsOutcome(result.GetResultWithOwnership()) : ListBlueprintsOutcome(std::move(result.GetError()));
}

ListColumnStatisticsTaskRunsOutcome GlueClient::ListColumnStatisticsTaskRuns(const ListColumnStatisticsTaskRunsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListColumnStatisticsTaskRunsOutcome(result.GetResultWithOwnership())
                            : ListColumnStatisticsTaskRunsOutcome(std::move(result.GetError()));
}

ListConnectionTypesOutcome GlueClient::ListConnectionTypes(const ListConnectionTypesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListConnectionTypesOutcome(result.GetResultWithOwnership())
                            : ListConnectionTypesOutcome(std::move(result.GetError()));
}

ListCrawlersOutcome GlueClient::ListCrawlers(const ListCrawlersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListCrawlersOutcome(result.GetResultWithOwnership()) : ListCrawlersOutcome(std::move(result.GetError()));
}

ListCrawlsOutcome GlueClient::ListCrawls(const ListCrawlsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListCrawlsOutcome(result.GetResultWithOwnership()) : ListCrawlsOutcome(std::move(result.GetError()));
}

ListCustomEntityTypesOutcome GlueClient::ListCustomEntityTypes(const ListCustomEntityTypesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListCustomEntityTypesOutcome(result.GetResultWithOwnership())
                            : ListCustomEntityTypesOutcome(std::move(result.GetError()));
}

ListDataQualityResultsOutcome GlueClient::ListDataQualityResults(const ListDataQualityResultsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListDataQualityResultsOutcome(result.GetResultWithOwnership())
                            : ListDataQualityResultsOutcome(std::move(result.GetError()));
}

ListDataQualityRuleRecommendationRunsOutcome GlueClient::ListDataQualityRuleRecommendationRuns(
    const ListDataQualityRuleRecommendationRunsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListDataQualityRuleRecommendationRunsOutcome(result.GetResultWithOwnership())
                            : ListDataQualityRuleRecommendationRunsOutcome(std::move(result.GetError()));
}

ListDataQualityRulesetEvaluationRunsOutcome GlueClient::ListDataQualityRulesetEvaluationRuns(
    const ListDataQualityRulesetEvaluationRunsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListDataQualityRulesetEvaluationRunsOutcome(result.GetResultWithOwnership())
                            : ListDataQualityRulesetEvaluationRunsOutcome(std::move(result.GetError()));
}

ListDataQualityRulesetsOutcome GlueClient::ListDataQualityRulesets(const ListDataQualityRulesetsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListDataQualityRulesetsOutcome(result.GetResultWithOwnership())
                            : ListDataQualityRulesetsOutcome(std::move(result.GetError()));
}

ListDataQualityStatisticAnnotationsOutcome GlueClient::ListDataQualityStatisticAnnotations(
    const ListDataQualityStatisticAnnotationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListDataQualityStatisticAnnotationsOutcome(result.GetResultWithOwnership())
                            : ListDataQualityStatisticAnnotationsOutcome(std::move(result.GetError()));
}

ListDataQualityStatisticsOutcome GlueClient::ListDataQualityStatistics(const ListDataQualityStatisticsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListDataQualityStatisticsOutcome(result.GetResultWithOwnership())
                            : ListDataQualityStatisticsOutcome(std::move(result.GetError()));
}

ListDevEndpointsOutcome GlueClient::ListDevEndpoints(const ListDevEndpointsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListDevEndpointsOutcome(result.GetResultWithOwnership())
                            : ListDevEndpointsOutcome(std::move(result.GetError()));
}

ListEntitiesOutcome GlueClient::ListEntities(const ListEntitiesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListEntitiesOutcome(result.GetResultWithOwnership()) : ListEntitiesOutcome(std::move(result.GetError()));
}

ListIntegrationResourcePropertiesOutcome GlueClient::ListIntegrationResourceProperties(
    const ListIntegrationResourcePropertiesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListIntegrationResourcePropertiesOutcome(result.GetResultWithOwnership())
                            : ListIntegrationResourcePropertiesOutcome(std::move(result.GetError()));
}

ListJobsOutcome GlueClient::ListJobs(const ListJobsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListJobsOutcome(result.GetResultWithOwnership()) : ListJobsOutcome(std::move(result.GetError()));
}

ListMLTransformsOutcome GlueClient::ListMLTransforms(const ListMLTransformsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListMLTransformsOutcome(result.GetResultWithOwnership())
                            : ListMLTransformsOutcome(std::move(result.GetError()));
}

ListMaterializedViewRefreshTaskRunsOutcome GlueClient::ListMaterializedViewRefreshTaskRuns(
    const ListMaterializedViewRefreshTaskRunsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListMaterializedViewRefreshTaskRunsOutcome(result.GetResultWithOwnership())
                            : ListMaterializedViewRefreshTaskRunsOutcome(std::move(result.GetError()));
}

ListRegistriesOutcome GlueClient::ListRegistries(const ListRegistriesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListRegistriesOutcome(result.GetResultWithOwnership()) : ListRegistriesOutcome(std::move(result.GetError()));
}

ListSchemaVersionsOutcome GlueClient::ListSchemaVersions(const ListSchemaVersionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListSchemaVersionsOutcome(result.GetResultWithOwnership())
                            : ListSchemaVersionsOutcome(std::move(result.GetError()));
}

ListSchemasOutcome GlueClient::ListSchemas(const ListSchemasRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListSchemasOutcome(result.GetResultWithOwnership()) : ListSchemasOutcome(std::move(result.GetError()));
}

ListSessionsOutcome GlueClient::ListSessions(const ListSessionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListSessionsOutcome(result.GetResultWithOwnership()) : ListSessionsOutcome(std::move(result.GetError()));
}

ListStatementsOutcome GlueClient::ListStatements(const ListStatementsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListStatementsOutcome(result.GetResultWithOwnership()) : ListStatementsOutcome(std::move(result.GetError()));
}

ListTableOptimizerRunsOutcome GlueClient::ListTableOptimizerRuns(const ListTableOptimizerRunsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTableOptimizerRunsOutcome(result.GetResultWithOwnership())
                            : ListTableOptimizerRunsOutcome(std::move(result.GetError()));
}

ListTriggersOutcome GlueClient::ListTriggers(const ListTriggersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTriggersOutcome(result.GetResultWithOwnership()) : ListTriggersOutcome(std::move(result.GetError()));
}

ListUsageProfilesOutcome GlueClient::ListUsageProfiles(const ListUsageProfilesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListUsageProfilesOutcome(result.GetResultWithOwnership())
                            : ListUsageProfilesOutcome(std::move(result.GetError()));
}

ListWorkflowsOutcome GlueClient::ListWorkflows(const ListWorkflowsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListWorkflowsOutcome(result.GetResultWithOwnership()) : ListWorkflowsOutcome(std::move(result.GetError()));
}

ModifyIntegrationOutcome GlueClient::ModifyIntegration(const ModifyIntegrationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyIntegrationOutcome(result.GetResultWithOwnership())
                            : ModifyIntegrationOutcome(std::move(result.GetError()));
}

PutDataCatalogEncryptionSettingsOutcome GlueClient::PutDataCatalogEncryptionSettings(
    const PutDataCatalogEncryptionSettingsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutDataCatalogEncryptionSettingsOutcome(result.GetResultWithOwnership())
                            : PutDataCatalogEncryptionSettingsOutcome(std::move(result.GetError()));
}

PutDataQualityProfileAnnotationOutcome GlueClient::PutDataQualityProfileAnnotation(
    const PutDataQualityProfileAnnotationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutDataQualityProfileAnnotationOutcome(result.GetResultWithOwnership())
                            : PutDataQualityProfileAnnotationOutcome(std::move(result.GetError()));
}
