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
#include <aws/glue/model/PutResourcePolicyRequest.h>
#include <aws/glue/model/PutSchemaVersionMetadataRequest.h>
#include <aws/glue/model/PutWorkflowRunPropertiesRequest.h>
#include <aws/glue/model/QuerySchemaVersionMetadataRequest.h>
#include <aws/glue/model/RegisterConnectionTypeRequest.h>
#include <aws/glue/model/RegisterSchemaVersionRequest.h>
#include <aws/glue/model/RemoveSchemaVersionMetadataRequest.h>
#include <aws/glue/model/ResetJobBookmarkRequest.h>
#include <aws/glue/model/ResumeWorkflowRunRequest.h>
#include <aws/glue/model/RunStatementRequest.h>
#include <aws/glue/model/SearchTablesRequest.h>
#include <aws/glue/model/StartBlueprintRunRequest.h>
#include <aws/glue/model/StartColumnStatisticsTaskRunRequest.h>
#include <aws/glue/model/StartColumnStatisticsTaskRunScheduleRequest.h>
#include <aws/glue/model/StartCrawlerRequest.h>
#include <aws/glue/model/StartCrawlerScheduleRequest.h>
#include <aws/glue/model/StartDataQualityRuleRecommendationRunRequest.h>
#include <aws/glue/model/StartDataQualityRulesetEvaluationRunRequest.h>
#include <aws/glue/model/StartExportLabelsTaskRunRequest.h>
#include <aws/glue/model/StartImportLabelsTaskRunRequest.h>
#include <aws/glue/model/StartJobRunRequest.h>
#include <aws/glue/model/StartMLEvaluationTaskRunRequest.h>
#include <aws/glue/model/StartMLLabelingSetGenerationTaskRunRequest.h>
#include <aws/glue/model/StartMaterializedViewRefreshTaskRunRequest.h>
#include <aws/glue/model/StartTriggerRequest.h>
#include <aws/glue/model/StartWorkflowRunRequest.h>
#include <aws/glue/model/StopColumnStatisticsTaskRunRequest.h>
#include <aws/glue/model/StopColumnStatisticsTaskRunScheduleRequest.h>
#include <aws/glue/model/StopCrawlerRequest.h>
#include <aws/glue/model/StopCrawlerScheduleRequest.h>
#include <aws/glue/model/StopMaterializedViewRefreshTaskRunRequest.h>
#include <aws/glue/model/StopSessionRequest.h>
#include <aws/glue/model/StopTriggerRequest.h>
#include <aws/glue/model/StopWorkflowRunRequest.h>
#include <aws/glue/model/TagResourceRequest.h>
#include <aws/glue/model/TestConnectionRequest.h>
#include <aws/glue/model/UntagResourceRequest.h>
#include <aws/glue/model/UpdateBlueprintRequest.h>
#include <aws/glue/model/UpdateCatalogRequest.h>
#include <aws/glue/model/UpdateClassifierRequest.h>
#include <aws/glue/model/UpdateColumnStatisticsForPartitionRequest.h>
#include <aws/glue/model/UpdateColumnStatisticsForTableRequest.h>
#include <aws/glue/model/UpdateColumnStatisticsTaskSettingsRequest.h>
#include <aws/glue/model/UpdateConnectionRequest.h>
#include <aws/glue/model/UpdateCrawlerRequest.h>
#include <aws/glue/model/UpdateCrawlerScheduleRequest.h>
#include <aws/glue/model/UpdateDataQualityRulesetRequest.h>
#include <aws/glue/model/UpdateDatabaseRequest.h>
#include <aws/glue/model/UpdateDevEndpointRequest.h>
#include <aws/glue/model/UpdateGlueIdentityCenterConfigurationRequest.h>
#include <aws/glue/model/UpdateIntegrationResourcePropertyRequest.h>
#include <aws/glue/model/UpdateIntegrationTablePropertiesRequest.h>
#include <aws/glue/model/UpdateJobFromSourceControlRequest.h>
#include <aws/glue/model/UpdateJobRequest.h>
#include <aws/glue/model/UpdateMLTransformRequest.h>
#include <aws/glue/model/UpdatePartitionRequest.h>
#include <aws/glue/model/UpdateRegistryRequest.h>
#include <aws/glue/model/UpdateSchemaRequest.h>
#include <aws/glue/model/UpdateSourceControlFromJobRequest.h>
#include <aws/glue/model/UpdateTableOptimizerRequest.h>
#include <aws/glue/model/UpdateTableRequest.h>
#include <aws/glue/model/UpdateTriggerRequest.h>
#include <aws/glue/model/UpdateUsageProfileRequest.h>
#include <aws/glue/model/UpdateUserDefinedFunctionRequest.h>
#include <aws/glue/model/UpdateWorkflowRequest.h>
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

PutResourcePolicyOutcome GlueClient::PutResourcePolicy(const PutResourcePolicyRequest& request) const {
  return PutResourcePolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutSchemaVersionMetadataOutcome GlueClient::PutSchemaVersionMetadata(const PutSchemaVersionMetadataRequest& request) const {
  return PutSchemaVersionMetadataOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutWorkflowRunPropertiesOutcome GlueClient::PutWorkflowRunProperties(const PutWorkflowRunPropertiesRequest& request) const {
  return PutWorkflowRunPropertiesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

QuerySchemaVersionMetadataOutcome GlueClient::QuerySchemaVersionMetadata(const QuerySchemaVersionMetadataRequest& request) const {
  return QuerySchemaVersionMetadataOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RegisterConnectionTypeOutcome GlueClient::RegisterConnectionType(const RegisterConnectionTypeRequest& request) const {
  return RegisterConnectionTypeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RegisterSchemaVersionOutcome GlueClient::RegisterSchemaVersion(const RegisterSchemaVersionRequest& request) const {
  return RegisterSchemaVersionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RemoveSchemaVersionMetadataOutcome GlueClient::RemoveSchemaVersionMetadata(const RemoveSchemaVersionMetadataRequest& request) const {
  return RemoveSchemaVersionMetadataOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ResetJobBookmarkOutcome GlueClient::ResetJobBookmark(const ResetJobBookmarkRequest& request) const {
  return ResetJobBookmarkOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ResumeWorkflowRunOutcome GlueClient::ResumeWorkflowRun(const ResumeWorkflowRunRequest& request) const {
  return ResumeWorkflowRunOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RunStatementOutcome GlueClient::RunStatement(const RunStatementRequest& request) const {
  return RunStatementOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SearchTablesOutcome GlueClient::SearchTables(const SearchTablesRequest& request) const {
  return SearchTablesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartBlueprintRunOutcome GlueClient::StartBlueprintRun(const StartBlueprintRunRequest& request) const {
  return StartBlueprintRunOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartColumnStatisticsTaskRunOutcome GlueClient::StartColumnStatisticsTaskRun(const StartColumnStatisticsTaskRunRequest& request) const {
  return StartColumnStatisticsTaskRunOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartColumnStatisticsTaskRunScheduleOutcome GlueClient::StartColumnStatisticsTaskRunSchedule(
    const StartColumnStatisticsTaskRunScheduleRequest& request) const {
  return StartColumnStatisticsTaskRunScheduleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartCrawlerOutcome GlueClient::StartCrawler(const StartCrawlerRequest& request) const {
  return StartCrawlerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartCrawlerScheduleOutcome GlueClient::StartCrawlerSchedule(const StartCrawlerScheduleRequest& request) const {
  return StartCrawlerScheduleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartDataQualityRuleRecommendationRunOutcome GlueClient::StartDataQualityRuleRecommendationRun(
    const StartDataQualityRuleRecommendationRunRequest& request) const {
  return StartDataQualityRuleRecommendationRunOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartDataQualityRulesetEvaluationRunOutcome GlueClient::StartDataQualityRulesetEvaluationRun(
    const StartDataQualityRulesetEvaluationRunRequest& request) const {
  return StartDataQualityRulesetEvaluationRunOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartExportLabelsTaskRunOutcome GlueClient::StartExportLabelsTaskRun(const StartExportLabelsTaskRunRequest& request) const {
  return StartExportLabelsTaskRunOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartImportLabelsTaskRunOutcome GlueClient::StartImportLabelsTaskRun(const StartImportLabelsTaskRunRequest& request) const {
  return StartImportLabelsTaskRunOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartJobRunOutcome GlueClient::StartJobRun(const StartJobRunRequest& request) const {
  return StartJobRunOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartMLEvaluationTaskRunOutcome GlueClient::StartMLEvaluationTaskRun(const StartMLEvaluationTaskRunRequest& request) const {
  return StartMLEvaluationTaskRunOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartMLLabelingSetGenerationTaskRunOutcome GlueClient::StartMLLabelingSetGenerationTaskRun(
    const StartMLLabelingSetGenerationTaskRunRequest& request) const {
  return StartMLLabelingSetGenerationTaskRunOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartMaterializedViewRefreshTaskRunOutcome GlueClient::StartMaterializedViewRefreshTaskRun(
    const StartMaterializedViewRefreshTaskRunRequest& request) const {
  return StartMaterializedViewRefreshTaskRunOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartTriggerOutcome GlueClient::StartTrigger(const StartTriggerRequest& request) const {
  return StartTriggerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartWorkflowRunOutcome GlueClient::StartWorkflowRun(const StartWorkflowRunRequest& request) const {
  return StartWorkflowRunOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopColumnStatisticsTaskRunOutcome GlueClient::StopColumnStatisticsTaskRun(const StopColumnStatisticsTaskRunRequest& request) const {
  return StopColumnStatisticsTaskRunOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopColumnStatisticsTaskRunScheduleOutcome GlueClient::StopColumnStatisticsTaskRunSchedule(
    const StopColumnStatisticsTaskRunScheduleRequest& request) const {
  return StopColumnStatisticsTaskRunScheduleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopCrawlerOutcome GlueClient::StopCrawler(const StopCrawlerRequest& request) const {
  return StopCrawlerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopCrawlerScheduleOutcome GlueClient::StopCrawlerSchedule(const StopCrawlerScheduleRequest& request) const {
  return StopCrawlerScheduleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopMaterializedViewRefreshTaskRunOutcome GlueClient::StopMaterializedViewRefreshTaskRun(
    const StopMaterializedViewRefreshTaskRunRequest& request) const {
  return StopMaterializedViewRefreshTaskRunOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopSessionOutcome GlueClient::StopSession(const StopSessionRequest& request) const {
  return StopSessionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopTriggerOutcome GlueClient::StopTrigger(const StopTriggerRequest& request) const {
  return StopTriggerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopWorkflowRunOutcome GlueClient::StopWorkflowRun(const StopWorkflowRunRequest& request) const {
  return StopWorkflowRunOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome GlueClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TestConnectionOutcome GlueClient::TestConnection(const TestConnectionRequest& request) const {
  return TestConnectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome GlueClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateBlueprintOutcome GlueClient::UpdateBlueprint(const UpdateBlueprintRequest& request) const {
  return UpdateBlueprintOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateCatalogOutcome GlueClient::UpdateCatalog(const UpdateCatalogRequest& request) const {
  return UpdateCatalogOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateClassifierOutcome GlueClient::UpdateClassifier(const UpdateClassifierRequest& request) const {
  return UpdateClassifierOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateColumnStatisticsForPartitionOutcome GlueClient::UpdateColumnStatisticsForPartition(
    const UpdateColumnStatisticsForPartitionRequest& request) const {
  return UpdateColumnStatisticsForPartitionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateColumnStatisticsForTableOutcome GlueClient::UpdateColumnStatisticsForTable(
    const UpdateColumnStatisticsForTableRequest& request) const {
  return UpdateColumnStatisticsForTableOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateColumnStatisticsTaskSettingsOutcome GlueClient::UpdateColumnStatisticsTaskSettings(
    const UpdateColumnStatisticsTaskSettingsRequest& request) const {
  return UpdateColumnStatisticsTaskSettingsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateConnectionOutcome GlueClient::UpdateConnection(const UpdateConnectionRequest& request) const {
  return UpdateConnectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateCrawlerOutcome GlueClient::UpdateCrawler(const UpdateCrawlerRequest& request) const {
  return UpdateCrawlerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateCrawlerScheduleOutcome GlueClient::UpdateCrawlerSchedule(const UpdateCrawlerScheduleRequest& request) const {
  return UpdateCrawlerScheduleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateDataQualityRulesetOutcome GlueClient::UpdateDataQualityRuleset(const UpdateDataQualityRulesetRequest& request) const {
  return UpdateDataQualityRulesetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateDatabaseOutcome GlueClient::UpdateDatabase(const UpdateDatabaseRequest& request) const {
  return UpdateDatabaseOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateDevEndpointOutcome GlueClient::UpdateDevEndpoint(const UpdateDevEndpointRequest& request) const {
  return UpdateDevEndpointOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateGlueIdentityCenterConfigurationOutcome GlueClient::UpdateGlueIdentityCenterConfiguration(
    const UpdateGlueIdentityCenterConfigurationRequest& request) const {
  return UpdateGlueIdentityCenterConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateIntegrationResourcePropertyOutcome GlueClient::UpdateIntegrationResourceProperty(
    const UpdateIntegrationResourcePropertyRequest& request) const {
  return UpdateIntegrationResourcePropertyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateIntegrationTablePropertiesOutcome GlueClient::UpdateIntegrationTableProperties(
    const UpdateIntegrationTablePropertiesRequest& request) const {
  return UpdateIntegrationTablePropertiesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateJobOutcome GlueClient::UpdateJob(const UpdateJobRequest& request) const {
  return UpdateJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateJobFromSourceControlOutcome GlueClient::UpdateJobFromSourceControl(const UpdateJobFromSourceControlRequest& request) const {
  return UpdateJobFromSourceControlOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateMLTransformOutcome GlueClient::UpdateMLTransform(const UpdateMLTransformRequest& request) const {
  return UpdateMLTransformOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdatePartitionOutcome GlueClient::UpdatePartition(const UpdatePartitionRequest& request) const {
  return UpdatePartitionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateRegistryOutcome GlueClient::UpdateRegistry(const UpdateRegistryRequest& request) const {
  return UpdateRegistryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateSchemaOutcome GlueClient::UpdateSchema(const UpdateSchemaRequest& request) const {
  return UpdateSchemaOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateSourceControlFromJobOutcome GlueClient::UpdateSourceControlFromJob(const UpdateSourceControlFromJobRequest& request) const {
  return UpdateSourceControlFromJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateTableOutcome GlueClient::UpdateTable(const UpdateTableRequest& request) const {
  return UpdateTableOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateTableOptimizerOutcome GlueClient::UpdateTableOptimizer(const UpdateTableOptimizerRequest& request) const {
  return UpdateTableOptimizerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateTriggerOutcome GlueClient::UpdateTrigger(const UpdateTriggerRequest& request) const {
  return UpdateTriggerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateUsageProfileOutcome GlueClient::UpdateUsageProfile(const UpdateUsageProfileRequest& request) const {
  return UpdateUsageProfileOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateUserDefinedFunctionOutcome GlueClient::UpdateUserDefinedFunction(const UpdateUserDefinedFunctionRequest& request) const {
  return UpdateUserDefinedFunctionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateWorkflowOutcome GlueClient::UpdateWorkflow(const UpdateWorkflowRequest& request) const {
  return UpdateWorkflowOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
