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
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutResourcePolicyOutcome(result.GetResultWithOwnership())
                            : PutResourcePolicyOutcome(std::move(result.GetError()));
}

PutSchemaVersionMetadataOutcome GlueClient::PutSchemaVersionMetadata(const PutSchemaVersionMetadataRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutSchemaVersionMetadataOutcome(result.GetResultWithOwnership())
                            : PutSchemaVersionMetadataOutcome(std::move(result.GetError()));
}

PutWorkflowRunPropertiesOutcome GlueClient::PutWorkflowRunProperties(const PutWorkflowRunPropertiesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutWorkflowRunPropertiesOutcome(result.GetResultWithOwnership())
                            : PutWorkflowRunPropertiesOutcome(std::move(result.GetError()));
}

QuerySchemaVersionMetadataOutcome GlueClient::QuerySchemaVersionMetadata(const QuerySchemaVersionMetadataRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? QuerySchemaVersionMetadataOutcome(result.GetResultWithOwnership())
                            : QuerySchemaVersionMetadataOutcome(std::move(result.GetError()));
}

RegisterConnectionTypeOutcome GlueClient::RegisterConnectionType(const RegisterConnectionTypeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RegisterConnectionTypeOutcome(result.GetResultWithOwnership())
                            : RegisterConnectionTypeOutcome(std::move(result.GetError()));
}

RegisterSchemaVersionOutcome GlueClient::RegisterSchemaVersion(const RegisterSchemaVersionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RegisterSchemaVersionOutcome(result.GetResultWithOwnership())
                            : RegisterSchemaVersionOutcome(std::move(result.GetError()));
}

RemoveSchemaVersionMetadataOutcome GlueClient::RemoveSchemaVersionMetadata(const RemoveSchemaVersionMetadataRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RemoveSchemaVersionMetadataOutcome(result.GetResultWithOwnership())
                            : RemoveSchemaVersionMetadataOutcome(std::move(result.GetError()));
}

ResetJobBookmarkOutcome GlueClient::ResetJobBookmark(const ResetJobBookmarkRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ResetJobBookmarkOutcome(result.GetResultWithOwnership())
                            : ResetJobBookmarkOutcome(std::move(result.GetError()));
}

ResumeWorkflowRunOutcome GlueClient::ResumeWorkflowRun(const ResumeWorkflowRunRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ResumeWorkflowRunOutcome(result.GetResultWithOwnership())
                            : ResumeWorkflowRunOutcome(std::move(result.GetError()));
}

RunStatementOutcome GlueClient::RunStatement(const RunStatementRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RunStatementOutcome(result.GetResultWithOwnership()) : RunStatementOutcome(std::move(result.GetError()));
}

SearchTablesOutcome GlueClient::SearchTables(const SearchTablesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SearchTablesOutcome(result.GetResultWithOwnership()) : SearchTablesOutcome(std::move(result.GetError()));
}

StartBlueprintRunOutcome GlueClient::StartBlueprintRun(const StartBlueprintRunRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartBlueprintRunOutcome(result.GetResultWithOwnership())
                            : StartBlueprintRunOutcome(std::move(result.GetError()));
}

StartColumnStatisticsTaskRunOutcome GlueClient::StartColumnStatisticsTaskRun(const StartColumnStatisticsTaskRunRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartColumnStatisticsTaskRunOutcome(result.GetResultWithOwnership())
                            : StartColumnStatisticsTaskRunOutcome(std::move(result.GetError()));
}

StartColumnStatisticsTaskRunScheduleOutcome GlueClient::StartColumnStatisticsTaskRunSchedule(
    const StartColumnStatisticsTaskRunScheduleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartColumnStatisticsTaskRunScheduleOutcome(result.GetResultWithOwnership())
                            : StartColumnStatisticsTaskRunScheduleOutcome(std::move(result.GetError()));
}

StartCrawlerOutcome GlueClient::StartCrawler(const StartCrawlerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartCrawlerOutcome(result.GetResultWithOwnership()) : StartCrawlerOutcome(std::move(result.GetError()));
}

StartCrawlerScheduleOutcome GlueClient::StartCrawlerSchedule(const StartCrawlerScheduleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartCrawlerScheduleOutcome(result.GetResultWithOwnership())
                            : StartCrawlerScheduleOutcome(std::move(result.GetError()));
}

StartDataQualityRuleRecommendationRunOutcome GlueClient::StartDataQualityRuleRecommendationRun(
    const StartDataQualityRuleRecommendationRunRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartDataQualityRuleRecommendationRunOutcome(result.GetResultWithOwnership())
                            : StartDataQualityRuleRecommendationRunOutcome(std::move(result.GetError()));
}

StartDataQualityRulesetEvaluationRunOutcome GlueClient::StartDataQualityRulesetEvaluationRun(
    const StartDataQualityRulesetEvaluationRunRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartDataQualityRulesetEvaluationRunOutcome(result.GetResultWithOwnership())
                            : StartDataQualityRulesetEvaluationRunOutcome(std::move(result.GetError()));
}

StartExportLabelsTaskRunOutcome GlueClient::StartExportLabelsTaskRun(const StartExportLabelsTaskRunRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartExportLabelsTaskRunOutcome(result.GetResultWithOwnership())
                            : StartExportLabelsTaskRunOutcome(std::move(result.GetError()));
}

StartImportLabelsTaskRunOutcome GlueClient::StartImportLabelsTaskRun(const StartImportLabelsTaskRunRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartImportLabelsTaskRunOutcome(result.GetResultWithOwnership())
                            : StartImportLabelsTaskRunOutcome(std::move(result.GetError()));
}

StartJobRunOutcome GlueClient::StartJobRun(const StartJobRunRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartJobRunOutcome(result.GetResultWithOwnership()) : StartJobRunOutcome(std::move(result.GetError()));
}

StartMLEvaluationTaskRunOutcome GlueClient::StartMLEvaluationTaskRun(const StartMLEvaluationTaskRunRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartMLEvaluationTaskRunOutcome(result.GetResultWithOwnership())
                            : StartMLEvaluationTaskRunOutcome(std::move(result.GetError()));
}

StartMLLabelingSetGenerationTaskRunOutcome GlueClient::StartMLLabelingSetGenerationTaskRun(
    const StartMLLabelingSetGenerationTaskRunRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartMLLabelingSetGenerationTaskRunOutcome(result.GetResultWithOwnership())
                            : StartMLLabelingSetGenerationTaskRunOutcome(std::move(result.GetError()));
}

StartMaterializedViewRefreshTaskRunOutcome GlueClient::StartMaterializedViewRefreshTaskRun(
    const StartMaterializedViewRefreshTaskRunRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartMaterializedViewRefreshTaskRunOutcome(result.GetResultWithOwnership())
                            : StartMaterializedViewRefreshTaskRunOutcome(std::move(result.GetError()));
}

StartTriggerOutcome GlueClient::StartTrigger(const StartTriggerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartTriggerOutcome(result.GetResultWithOwnership()) : StartTriggerOutcome(std::move(result.GetError()));
}

StartWorkflowRunOutcome GlueClient::StartWorkflowRun(const StartWorkflowRunRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartWorkflowRunOutcome(result.GetResultWithOwnership())
                            : StartWorkflowRunOutcome(std::move(result.GetError()));
}

StopColumnStatisticsTaskRunOutcome GlueClient::StopColumnStatisticsTaskRun(const StopColumnStatisticsTaskRunRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopColumnStatisticsTaskRunOutcome(result.GetResultWithOwnership())
                            : StopColumnStatisticsTaskRunOutcome(std::move(result.GetError()));
}

StopColumnStatisticsTaskRunScheduleOutcome GlueClient::StopColumnStatisticsTaskRunSchedule(
    const StopColumnStatisticsTaskRunScheduleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopColumnStatisticsTaskRunScheduleOutcome(result.GetResultWithOwnership())
                            : StopColumnStatisticsTaskRunScheduleOutcome(std::move(result.GetError()));
}

StopCrawlerOutcome GlueClient::StopCrawler(const StopCrawlerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopCrawlerOutcome(result.GetResultWithOwnership()) : StopCrawlerOutcome(std::move(result.GetError()));
}

StopCrawlerScheduleOutcome GlueClient::StopCrawlerSchedule(const StopCrawlerScheduleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopCrawlerScheduleOutcome(result.GetResultWithOwnership())
                            : StopCrawlerScheduleOutcome(std::move(result.GetError()));
}

StopMaterializedViewRefreshTaskRunOutcome GlueClient::StopMaterializedViewRefreshTaskRun(
    const StopMaterializedViewRefreshTaskRunRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopMaterializedViewRefreshTaskRunOutcome(result.GetResultWithOwnership())
                            : StopMaterializedViewRefreshTaskRunOutcome(std::move(result.GetError()));
}

StopSessionOutcome GlueClient::StopSession(const StopSessionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopSessionOutcome(result.GetResultWithOwnership()) : StopSessionOutcome(std::move(result.GetError()));
}

StopTriggerOutcome GlueClient::StopTrigger(const StopTriggerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopTriggerOutcome(result.GetResultWithOwnership()) : StopTriggerOutcome(std::move(result.GetError()));
}

StopWorkflowRunOutcome GlueClient::StopWorkflowRun(const StopWorkflowRunRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopWorkflowRunOutcome(result.GetResultWithOwnership())
                            : StopWorkflowRunOutcome(std::move(result.GetError()));
}

TagResourceOutcome GlueClient::TagResource(const TagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

TestConnectionOutcome GlueClient::TestConnection(const TestConnectionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TestConnectionOutcome(result.GetResultWithOwnership()) : TestConnectionOutcome(std::move(result.GetError()));
}

UntagResourceOutcome GlueClient::UntagResource(const UntagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateBlueprintOutcome GlueClient::UpdateBlueprint(const UpdateBlueprintRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateBlueprintOutcome(result.GetResultWithOwnership())
                            : UpdateBlueprintOutcome(std::move(result.GetError()));
}

UpdateCatalogOutcome GlueClient::UpdateCatalog(const UpdateCatalogRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateCatalogOutcome(result.GetResultWithOwnership()) : UpdateCatalogOutcome(std::move(result.GetError()));
}

UpdateClassifierOutcome GlueClient::UpdateClassifier(const UpdateClassifierRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateClassifierOutcome(result.GetResultWithOwnership())
                            : UpdateClassifierOutcome(std::move(result.GetError()));
}

UpdateColumnStatisticsForPartitionOutcome GlueClient::UpdateColumnStatisticsForPartition(
    const UpdateColumnStatisticsForPartitionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateColumnStatisticsForPartitionOutcome(result.GetResultWithOwnership())
                            : UpdateColumnStatisticsForPartitionOutcome(std::move(result.GetError()));
}

UpdateColumnStatisticsForTableOutcome GlueClient::UpdateColumnStatisticsForTable(
    const UpdateColumnStatisticsForTableRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateColumnStatisticsForTableOutcome(result.GetResultWithOwnership())
                            : UpdateColumnStatisticsForTableOutcome(std::move(result.GetError()));
}

UpdateColumnStatisticsTaskSettingsOutcome GlueClient::UpdateColumnStatisticsTaskSettings(
    const UpdateColumnStatisticsTaskSettingsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateColumnStatisticsTaskSettingsOutcome(result.GetResultWithOwnership())
                            : UpdateColumnStatisticsTaskSettingsOutcome(std::move(result.GetError()));
}

UpdateConnectionOutcome GlueClient::UpdateConnection(const UpdateConnectionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateConnectionOutcome(result.GetResultWithOwnership())
                            : UpdateConnectionOutcome(std::move(result.GetError()));
}

UpdateCrawlerOutcome GlueClient::UpdateCrawler(const UpdateCrawlerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateCrawlerOutcome(result.GetResultWithOwnership()) : UpdateCrawlerOutcome(std::move(result.GetError()));
}

UpdateCrawlerScheduleOutcome GlueClient::UpdateCrawlerSchedule(const UpdateCrawlerScheduleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateCrawlerScheduleOutcome(result.GetResultWithOwnership())
                            : UpdateCrawlerScheduleOutcome(std::move(result.GetError()));
}

UpdateDataQualityRulesetOutcome GlueClient::UpdateDataQualityRuleset(const UpdateDataQualityRulesetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateDataQualityRulesetOutcome(result.GetResultWithOwnership())
                            : UpdateDataQualityRulesetOutcome(std::move(result.GetError()));
}

UpdateDatabaseOutcome GlueClient::UpdateDatabase(const UpdateDatabaseRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateDatabaseOutcome(result.GetResultWithOwnership()) : UpdateDatabaseOutcome(std::move(result.GetError()));
}

UpdateDevEndpointOutcome GlueClient::UpdateDevEndpoint(const UpdateDevEndpointRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateDevEndpointOutcome(result.GetResultWithOwnership())
                            : UpdateDevEndpointOutcome(std::move(result.GetError()));
}

UpdateGlueIdentityCenterConfigurationOutcome GlueClient::UpdateGlueIdentityCenterConfiguration(
    const UpdateGlueIdentityCenterConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateGlueIdentityCenterConfigurationOutcome(result.GetResultWithOwnership())
                            : UpdateGlueIdentityCenterConfigurationOutcome(std::move(result.GetError()));
}

UpdateIntegrationResourcePropertyOutcome GlueClient::UpdateIntegrationResourceProperty(
    const UpdateIntegrationResourcePropertyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateIntegrationResourcePropertyOutcome(result.GetResultWithOwnership())
                            : UpdateIntegrationResourcePropertyOutcome(std::move(result.GetError()));
}

UpdateIntegrationTablePropertiesOutcome GlueClient::UpdateIntegrationTableProperties(
    const UpdateIntegrationTablePropertiesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateIntegrationTablePropertiesOutcome(result.GetResultWithOwnership())
                            : UpdateIntegrationTablePropertiesOutcome(std::move(result.GetError()));
}

UpdateJobOutcome GlueClient::UpdateJob(const UpdateJobRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateJobOutcome(result.GetResultWithOwnership()) : UpdateJobOutcome(std::move(result.GetError()));
}

UpdateJobFromSourceControlOutcome GlueClient::UpdateJobFromSourceControl(const UpdateJobFromSourceControlRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateJobFromSourceControlOutcome(result.GetResultWithOwnership())
                            : UpdateJobFromSourceControlOutcome(std::move(result.GetError()));
}

UpdateMLTransformOutcome GlueClient::UpdateMLTransform(const UpdateMLTransformRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateMLTransformOutcome(result.GetResultWithOwnership())
                            : UpdateMLTransformOutcome(std::move(result.GetError()));
}

UpdatePartitionOutcome GlueClient::UpdatePartition(const UpdatePartitionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdatePartitionOutcome(result.GetResultWithOwnership())
                            : UpdatePartitionOutcome(std::move(result.GetError()));
}

UpdateRegistryOutcome GlueClient::UpdateRegistry(const UpdateRegistryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateRegistryOutcome(result.GetResultWithOwnership()) : UpdateRegistryOutcome(std::move(result.GetError()));
}

UpdateSchemaOutcome GlueClient::UpdateSchema(const UpdateSchemaRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateSchemaOutcome(result.GetResultWithOwnership()) : UpdateSchemaOutcome(std::move(result.GetError()));
}

UpdateSourceControlFromJobOutcome GlueClient::UpdateSourceControlFromJob(const UpdateSourceControlFromJobRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateSourceControlFromJobOutcome(result.GetResultWithOwnership())
                            : UpdateSourceControlFromJobOutcome(std::move(result.GetError()));
}

UpdateTableOutcome GlueClient::UpdateTable(const UpdateTableRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateTableOutcome(result.GetResultWithOwnership()) : UpdateTableOutcome(std::move(result.GetError()));
}

UpdateTableOptimizerOutcome GlueClient::UpdateTableOptimizer(const UpdateTableOptimizerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateTableOptimizerOutcome(result.GetResultWithOwnership())
                            : UpdateTableOptimizerOutcome(std::move(result.GetError()));
}

UpdateTriggerOutcome GlueClient::UpdateTrigger(const UpdateTriggerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateTriggerOutcome(result.GetResultWithOwnership()) : UpdateTriggerOutcome(std::move(result.GetError()));
}

UpdateUsageProfileOutcome GlueClient::UpdateUsageProfile(const UpdateUsageProfileRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateUsageProfileOutcome(result.GetResultWithOwnership())
                            : UpdateUsageProfileOutcome(std::move(result.GetError()));
}

UpdateUserDefinedFunctionOutcome GlueClient::UpdateUserDefinedFunction(const UpdateUserDefinedFunctionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateUserDefinedFunctionOutcome(result.GetResultWithOwnership())
                            : UpdateUserDefinedFunctionOutcome(std::move(result.GetError()));
}

UpdateWorkflowOutcome GlueClient::UpdateWorkflow(const UpdateWorkflowRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateWorkflowOutcome(result.GetResultWithOwnership()) : UpdateWorkflowOutcome(std::move(result.GetError()));
}
