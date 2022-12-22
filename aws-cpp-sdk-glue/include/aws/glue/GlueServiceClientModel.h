/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/glue/GlueErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/glue/GlueEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in GlueClient header */
#include <aws/glue/model/BatchCreatePartitionResult.h>
#include <aws/glue/model/BatchDeleteConnectionResult.h>
#include <aws/glue/model/BatchDeletePartitionResult.h>
#include <aws/glue/model/BatchDeleteTableResult.h>
#include <aws/glue/model/BatchDeleteTableVersionResult.h>
#include <aws/glue/model/BatchGetBlueprintsResult.h>
#include <aws/glue/model/BatchGetCrawlersResult.h>
#include <aws/glue/model/BatchGetCustomEntityTypesResult.h>
#include <aws/glue/model/BatchGetDataQualityResultResult.h>
#include <aws/glue/model/BatchGetDevEndpointsResult.h>
#include <aws/glue/model/BatchGetJobsResult.h>
#include <aws/glue/model/BatchGetPartitionResult.h>
#include <aws/glue/model/BatchGetTriggersResult.h>
#include <aws/glue/model/BatchGetWorkflowsResult.h>
#include <aws/glue/model/BatchStopJobRunResult.h>
#include <aws/glue/model/BatchUpdatePartitionResult.h>
#include <aws/glue/model/CancelDataQualityRuleRecommendationRunResult.h>
#include <aws/glue/model/CancelDataQualityRulesetEvaluationRunResult.h>
#include <aws/glue/model/CancelMLTaskRunResult.h>
#include <aws/glue/model/CancelStatementResult.h>
#include <aws/glue/model/CheckSchemaVersionValidityResult.h>
#include <aws/glue/model/CreateBlueprintResult.h>
#include <aws/glue/model/CreateClassifierResult.h>
#include <aws/glue/model/CreateConnectionResult.h>
#include <aws/glue/model/CreateCrawlerResult.h>
#include <aws/glue/model/CreateCustomEntityTypeResult.h>
#include <aws/glue/model/CreateDataQualityRulesetResult.h>
#include <aws/glue/model/CreateDatabaseResult.h>
#include <aws/glue/model/CreateDevEndpointResult.h>
#include <aws/glue/model/CreateJobResult.h>
#include <aws/glue/model/CreateMLTransformResult.h>
#include <aws/glue/model/CreatePartitionResult.h>
#include <aws/glue/model/CreatePartitionIndexResult.h>
#include <aws/glue/model/CreateRegistryResult.h>
#include <aws/glue/model/CreateSchemaResult.h>
#include <aws/glue/model/CreateScriptResult.h>
#include <aws/glue/model/CreateSecurityConfigurationResult.h>
#include <aws/glue/model/CreateSessionResult.h>
#include <aws/glue/model/CreateTableResult.h>
#include <aws/glue/model/CreateTriggerResult.h>
#include <aws/glue/model/CreateUserDefinedFunctionResult.h>
#include <aws/glue/model/CreateWorkflowResult.h>
#include <aws/glue/model/DeleteBlueprintResult.h>
#include <aws/glue/model/DeleteClassifierResult.h>
#include <aws/glue/model/DeleteColumnStatisticsForPartitionResult.h>
#include <aws/glue/model/DeleteColumnStatisticsForTableResult.h>
#include <aws/glue/model/DeleteConnectionResult.h>
#include <aws/glue/model/DeleteCrawlerResult.h>
#include <aws/glue/model/DeleteCustomEntityTypeResult.h>
#include <aws/glue/model/DeleteDataQualityRulesetResult.h>
#include <aws/glue/model/DeleteDatabaseResult.h>
#include <aws/glue/model/DeleteDevEndpointResult.h>
#include <aws/glue/model/DeleteJobResult.h>
#include <aws/glue/model/DeleteMLTransformResult.h>
#include <aws/glue/model/DeletePartitionResult.h>
#include <aws/glue/model/DeletePartitionIndexResult.h>
#include <aws/glue/model/DeleteRegistryResult.h>
#include <aws/glue/model/DeleteResourcePolicyResult.h>
#include <aws/glue/model/DeleteSchemaResult.h>
#include <aws/glue/model/DeleteSchemaVersionsResult.h>
#include <aws/glue/model/DeleteSecurityConfigurationResult.h>
#include <aws/glue/model/DeleteSessionResult.h>
#include <aws/glue/model/DeleteTableResult.h>
#include <aws/glue/model/DeleteTableVersionResult.h>
#include <aws/glue/model/DeleteTriggerResult.h>
#include <aws/glue/model/DeleteUserDefinedFunctionResult.h>
#include <aws/glue/model/DeleteWorkflowResult.h>
#include <aws/glue/model/GetBlueprintResult.h>
#include <aws/glue/model/GetBlueprintRunResult.h>
#include <aws/glue/model/GetBlueprintRunsResult.h>
#include <aws/glue/model/GetCatalogImportStatusResult.h>
#include <aws/glue/model/GetClassifierResult.h>
#include <aws/glue/model/GetClassifiersResult.h>
#include <aws/glue/model/GetColumnStatisticsForPartitionResult.h>
#include <aws/glue/model/GetColumnStatisticsForTableResult.h>
#include <aws/glue/model/GetConnectionResult.h>
#include <aws/glue/model/GetConnectionsResult.h>
#include <aws/glue/model/GetCrawlerResult.h>
#include <aws/glue/model/GetCrawlerMetricsResult.h>
#include <aws/glue/model/GetCrawlersResult.h>
#include <aws/glue/model/GetCustomEntityTypeResult.h>
#include <aws/glue/model/GetDataCatalogEncryptionSettingsResult.h>
#include <aws/glue/model/GetDataQualityResultResult.h>
#include <aws/glue/model/GetDataQualityRuleRecommendationRunResult.h>
#include <aws/glue/model/GetDataQualityRulesetResult.h>
#include <aws/glue/model/GetDataQualityRulesetEvaluationRunResult.h>
#include <aws/glue/model/GetDatabaseResult.h>
#include <aws/glue/model/GetDatabasesResult.h>
#include <aws/glue/model/GetDataflowGraphResult.h>
#include <aws/glue/model/GetDevEndpointResult.h>
#include <aws/glue/model/GetDevEndpointsResult.h>
#include <aws/glue/model/GetJobResult.h>
#include <aws/glue/model/GetJobBookmarkResult.h>
#include <aws/glue/model/GetJobRunResult.h>
#include <aws/glue/model/GetJobRunsResult.h>
#include <aws/glue/model/GetJobsResult.h>
#include <aws/glue/model/GetMLTaskRunResult.h>
#include <aws/glue/model/GetMLTaskRunsResult.h>
#include <aws/glue/model/GetMLTransformResult.h>
#include <aws/glue/model/GetMLTransformsResult.h>
#include <aws/glue/model/GetMappingResult.h>
#include <aws/glue/model/GetPartitionResult.h>
#include <aws/glue/model/GetPartitionIndexesResult.h>
#include <aws/glue/model/GetPartitionsResult.h>
#include <aws/glue/model/GetPlanResult.h>
#include <aws/glue/model/GetRegistryResult.h>
#include <aws/glue/model/GetResourcePoliciesResult.h>
#include <aws/glue/model/GetResourcePolicyResult.h>
#include <aws/glue/model/GetSchemaResult.h>
#include <aws/glue/model/GetSchemaByDefinitionResult.h>
#include <aws/glue/model/GetSchemaVersionResult.h>
#include <aws/glue/model/GetSchemaVersionsDiffResult.h>
#include <aws/glue/model/GetSecurityConfigurationResult.h>
#include <aws/glue/model/GetSecurityConfigurationsResult.h>
#include <aws/glue/model/GetSessionResult.h>
#include <aws/glue/model/GetStatementResult.h>
#include <aws/glue/model/GetTableResult.h>
#include <aws/glue/model/GetTableVersionResult.h>
#include <aws/glue/model/GetTableVersionsResult.h>
#include <aws/glue/model/GetTablesResult.h>
#include <aws/glue/model/GetTagsResult.h>
#include <aws/glue/model/GetTriggerResult.h>
#include <aws/glue/model/GetTriggersResult.h>
#include <aws/glue/model/GetUnfilteredPartitionMetadataResult.h>
#include <aws/glue/model/GetUnfilteredPartitionsMetadataResult.h>
#include <aws/glue/model/GetUnfilteredTableMetadataResult.h>
#include <aws/glue/model/GetUserDefinedFunctionResult.h>
#include <aws/glue/model/GetUserDefinedFunctionsResult.h>
#include <aws/glue/model/GetWorkflowResult.h>
#include <aws/glue/model/GetWorkflowRunResult.h>
#include <aws/glue/model/GetWorkflowRunPropertiesResult.h>
#include <aws/glue/model/GetWorkflowRunsResult.h>
#include <aws/glue/model/ImportCatalogToGlueResult.h>
#include <aws/glue/model/ListBlueprintsResult.h>
#include <aws/glue/model/ListCrawlersResult.h>
#include <aws/glue/model/ListCrawlsResult.h>
#include <aws/glue/model/ListCustomEntityTypesResult.h>
#include <aws/glue/model/ListDataQualityResultsResult.h>
#include <aws/glue/model/ListDataQualityRuleRecommendationRunsResult.h>
#include <aws/glue/model/ListDataQualityRulesetEvaluationRunsResult.h>
#include <aws/glue/model/ListDataQualityRulesetsResult.h>
#include <aws/glue/model/ListDevEndpointsResult.h>
#include <aws/glue/model/ListJobsResult.h>
#include <aws/glue/model/ListMLTransformsResult.h>
#include <aws/glue/model/ListRegistriesResult.h>
#include <aws/glue/model/ListSchemaVersionsResult.h>
#include <aws/glue/model/ListSchemasResult.h>
#include <aws/glue/model/ListSessionsResult.h>
#include <aws/glue/model/ListStatementsResult.h>
#include <aws/glue/model/ListTriggersResult.h>
#include <aws/glue/model/ListWorkflowsResult.h>
#include <aws/glue/model/PutDataCatalogEncryptionSettingsResult.h>
#include <aws/glue/model/PutResourcePolicyResult.h>
#include <aws/glue/model/PutSchemaVersionMetadataResult.h>
#include <aws/glue/model/PutWorkflowRunPropertiesResult.h>
#include <aws/glue/model/QuerySchemaVersionMetadataResult.h>
#include <aws/glue/model/RegisterSchemaVersionResult.h>
#include <aws/glue/model/RemoveSchemaVersionMetadataResult.h>
#include <aws/glue/model/ResetJobBookmarkResult.h>
#include <aws/glue/model/ResumeWorkflowRunResult.h>
#include <aws/glue/model/RunStatementResult.h>
#include <aws/glue/model/SearchTablesResult.h>
#include <aws/glue/model/StartBlueprintRunResult.h>
#include <aws/glue/model/StartCrawlerResult.h>
#include <aws/glue/model/StartCrawlerScheduleResult.h>
#include <aws/glue/model/StartDataQualityRuleRecommendationRunResult.h>
#include <aws/glue/model/StartDataQualityRulesetEvaluationRunResult.h>
#include <aws/glue/model/StartExportLabelsTaskRunResult.h>
#include <aws/glue/model/StartImportLabelsTaskRunResult.h>
#include <aws/glue/model/StartJobRunResult.h>
#include <aws/glue/model/StartMLEvaluationTaskRunResult.h>
#include <aws/glue/model/StartMLLabelingSetGenerationTaskRunResult.h>
#include <aws/glue/model/StartTriggerResult.h>
#include <aws/glue/model/StartWorkflowRunResult.h>
#include <aws/glue/model/StopCrawlerResult.h>
#include <aws/glue/model/StopCrawlerScheduleResult.h>
#include <aws/glue/model/StopSessionResult.h>
#include <aws/glue/model/StopTriggerResult.h>
#include <aws/glue/model/StopWorkflowRunResult.h>
#include <aws/glue/model/TagResourceResult.h>
#include <aws/glue/model/UntagResourceResult.h>
#include <aws/glue/model/UpdateBlueprintResult.h>
#include <aws/glue/model/UpdateClassifierResult.h>
#include <aws/glue/model/UpdateColumnStatisticsForPartitionResult.h>
#include <aws/glue/model/UpdateColumnStatisticsForTableResult.h>
#include <aws/glue/model/UpdateConnectionResult.h>
#include <aws/glue/model/UpdateCrawlerResult.h>
#include <aws/glue/model/UpdateCrawlerScheduleResult.h>
#include <aws/glue/model/UpdateDataQualityRulesetResult.h>
#include <aws/glue/model/UpdateDatabaseResult.h>
#include <aws/glue/model/UpdateDevEndpointResult.h>
#include <aws/glue/model/UpdateJobResult.h>
#include <aws/glue/model/UpdateJobFromSourceControlResult.h>
#include <aws/glue/model/UpdateMLTransformResult.h>
#include <aws/glue/model/UpdatePartitionResult.h>
#include <aws/glue/model/UpdateRegistryResult.h>
#include <aws/glue/model/UpdateSchemaResult.h>
#include <aws/glue/model/UpdateSourceControlFromJobResult.h>
#include <aws/glue/model/UpdateTableResult.h>
#include <aws/glue/model/UpdateTriggerResult.h>
#include <aws/glue/model/UpdateUserDefinedFunctionResult.h>
#include <aws/glue/model/UpdateWorkflowResult.h>
/* End of service model headers required in GlueClient header */

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

  namespace Glue
  {
    using GlueClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using GlueEndpointProviderBase = Aws::Glue::Endpoint::GlueEndpointProviderBase;
    using GlueEndpointProvider = Aws::Glue::Endpoint::GlueEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in GlueClient header */
      class BatchCreatePartitionRequest;
      class BatchDeleteConnectionRequest;
      class BatchDeletePartitionRequest;
      class BatchDeleteTableRequest;
      class BatchDeleteTableVersionRequest;
      class BatchGetBlueprintsRequest;
      class BatchGetCrawlersRequest;
      class BatchGetCustomEntityTypesRequest;
      class BatchGetDataQualityResultRequest;
      class BatchGetDevEndpointsRequest;
      class BatchGetJobsRequest;
      class BatchGetPartitionRequest;
      class BatchGetTriggersRequest;
      class BatchGetWorkflowsRequest;
      class BatchStopJobRunRequest;
      class BatchUpdatePartitionRequest;
      class CancelDataQualityRuleRecommendationRunRequest;
      class CancelDataQualityRulesetEvaluationRunRequest;
      class CancelMLTaskRunRequest;
      class CancelStatementRequest;
      class CheckSchemaVersionValidityRequest;
      class CreateBlueprintRequest;
      class CreateClassifierRequest;
      class CreateConnectionRequest;
      class CreateCrawlerRequest;
      class CreateCustomEntityTypeRequest;
      class CreateDataQualityRulesetRequest;
      class CreateDatabaseRequest;
      class CreateDevEndpointRequest;
      class CreateJobRequest;
      class CreateMLTransformRequest;
      class CreatePartitionRequest;
      class CreatePartitionIndexRequest;
      class CreateRegistryRequest;
      class CreateSchemaRequest;
      class CreateScriptRequest;
      class CreateSecurityConfigurationRequest;
      class CreateSessionRequest;
      class CreateTableRequest;
      class CreateTriggerRequest;
      class CreateUserDefinedFunctionRequest;
      class CreateWorkflowRequest;
      class DeleteBlueprintRequest;
      class DeleteClassifierRequest;
      class DeleteColumnStatisticsForPartitionRequest;
      class DeleteColumnStatisticsForTableRequest;
      class DeleteConnectionRequest;
      class DeleteCrawlerRequest;
      class DeleteCustomEntityTypeRequest;
      class DeleteDataQualityRulesetRequest;
      class DeleteDatabaseRequest;
      class DeleteDevEndpointRequest;
      class DeleteJobRequest;
      class DeleteMLTransformRequest;
      class DeletePartitionRequest;
      class DeletePartitionIndexRequest;
      class DeleteRegistryRequest;
      class DeleteResourcePolicyRequest;
      class DeleteSchemaRequest;
      class DeleteSchemaVersionsRequest;
      class DeleteSecurityConfigurationRequest;
      class DeleteSessionRequest;
      class DeleteTableRequest;
      class DeleteTableVersionRequest;
      class DeleteTriggerRequest;
      class DeleteUserDefinedFunctionRequest;
      class DeleteWorkflowRequest;
      class GetBlueprintRequest;
      class GetBlueprintRunRequest;
      class GetBlueprintRunsRequest;
      class GetCatalogImportStatusRequest;
      class GetClassifierRequest;
      class GetClassifiersRequest;
      class GetColumnStatisticsForPartitionRequest;
      class GetColumnStatisticsForTableRequest;
      class GetConnectionRequest;
      class GetConnectionsRequest;
      class GetCrawlerRequest;
      class GetCrawlerMetricsRequest;
      class GetCrawlersRequest;
      class GetCustomEntityTypeRequest;
      class GetDataCatalogEncryptionSettingsRequest;
      class GetDataQualityResultRequest;
      class GetDataQualityRuleRecommendationRunRequest;
      class GetDataQualityRulesetRequest;
      class GetDataQualityRulesetEvaluationRunRequest;
      class GetDatabaseRequest;
      class GetDatabasesRequest;
      class GetDataflowGraphRequest;
      class GetDevEndpointRequest;
      class GetDevEndpointsRequest;
      class GetJobRequest;
      class GetJobBookmarkRequest;
      class GetJobRunRequest;
      class GetJobRunsRequest;
      class GetJobsRequest;
      class GetMLTaskRunRequest;
      class GetMLTaskRunsRequest;
      class GetMLTransformRequest;
      class GetMLTransformsRequest;
      class GetMappingRequest;
      class GetPartitionRequest;
      class GetPartitionIndexesRequest;
      class GetPartitionsRequest;
      class GetPlanRequest;
      class GetRegistryRequest;
      class GetResourcePoliciesRequest;
      class GetResourcePolicyRequest;
      class GetSchemaRequest;
      class GetSchemaByDefinitionRequest;
      class GetSchemaVersionRequest;
      class GetSchemaVersionsDiffRequest;
      class GetSecurityConfigurationRequest;
      class GetSecurityConfigurationsRequest;
      class GetSessionRequest;
      class GetStatementRequest;
      class GetTableRequest;
      class GetTableVersionRequest;
      class GetTableVersionsRequest;
      class GetTablesRequest;
      class GetTagsRequest;
      class GetTriggerRequest;
      class GetTriggersRequest;
      class GetUnfilteredPartitionMetadataRequest;
      class GetUnfilteredPartitionsMetadataRequest;
      class GetUnfilteredTableMetadataRequest;
      class GetUserDefinedFunctionRequest;
      class GetUserDefinedFunctionsRequest;
      class GetWorkflowRequest;
      class GetWorkflowRunRequest;
      class GetWorkflowRunPropertiesRequest;
      class GetWorkflowRunsRequest;
      class ImportCatalogToGlueRequest;
      class ListBlueprintsRequest;
      class ListCrawlersRequest;
      class ListCrawlsRequest;
      class ListCustomEntityTypesRequest;
      class ListDataQualityResultsRequest;
      class ListDataQualityRuleRecommendationRunsRequest;
      class ListDataQualityRulesetEvaluationRunsRequest;
      class ListDataQualityRulesetsRequest;
      class ListDevEndpointsRequest;
      class ListJobsRequest;
      class ListMLTransformsRequest;
      class ListRegistriesRequest;
      class ListSchemaVersionsRequest;
      class ListSchemasRequest;
      class ListSessionsRequest;
      class ListStatementsRequest;
      class ListTriggersRequest;
      class ListWorkflowsRequest;
      class PutDataCatalogEncryptionSettingsRequest;
      class PutResourcePolicyRequest;
      class PutSchemaVersionMetadataRequest;
      class PutWorkflowRunPropertiesRequest;
      class QuerySchemaVersionMetadataRequest;
      class RegisterSchemaVersionRequest;
      class RemoveSchemaVersionMetadataRequest;
      class ResetJobBookmarkRequest;
      class ResumeWorkflowRunRequest;
      class RunStatementRequest;
      class SearchTablesRequest;
      class StartBlueprintRunRequest;
      class StartCrawlerRequest;
      class StartCrawlerScheduleRequest;
      class StartDataQualityRuleRecommendationRunRequest;
      class StartDataQualityRulesetEvaluationRunRequest;
      class StartExportLabelsTaskRunRequest;
      class StartImportLabelsTaskRunRequest;
      class StartJobRunRequest;
      class StartMLEvaluationTaskRunRequest;
      class StartMLLabelingSetGenerationTaskRunRequest;
      class StartTriggerRequest;
      class StartWorkflowRunRequest;
      class StopCrawlerRequest;
      class StopCrawlerScheduleRequest;
      class StopSessionRequest;
      class StopTriggerRequest;
      class StopWorkflowRunRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateBlueprintRequest;
      class UpdateClassifierRequest;
      class UpdateColumnStatisticsForPartitionRequest;
      class UpdateColumnStatisticsForTableRequest;
      class UpdateConnectionRequest;
      class UpdateCrawlerRequest;
      class UpdateCrawlerScheduleRequest;
      class UpdateDataQualityRulesetRequest;
      class UpdateDatabaseRequest;
      class UpdateDevEndpointRequest;
      class UpdateJobRequest;
      class UpdateJobFromSourceControlRequest;
      class UpdateMLTransformRequest;
      class UpdatePartitionRequest;
      class UpdateRegistryRequest;
      class UpdateSchemaRequest;
      class UpdateSourceControlFromJobRequest;
      class UpdateTableRequest;
      class UpdateTriggerRequest;
      class UpdateUserDefinedFunctionRequest;
      class UpdateWorkflowRequest;
      /* End of service model forward declarations required in GlueClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<BatchCreatePartitionResult, GlueError> BatchCreatePartitionOutcome;
      typedef Aws::Utils::Outcome<BatchDeleteConnectionResult, GlueError> BatchDeleteConnectionOutcome;
      typedef Aws::Utils::Outcome<BatchDeletePartitionResult, GlueError> BatchDeletePartitionOutcome;
      typedef Aws::Utils::Outcome<BatchDeleteTableResult, GlueError> BatchDeleteTableOutcome;
      typedef Aws::Utils::Outcome<BatchDeleteTableVersionResult, GlueError> BatchDeleteTableVersionOutcome;
      typedef Aws::Utils::Outcome<BatchGetBlueprintsResult, GlueError> BatchGetBlueprintsOutcome;
      typedef Aws::Utils::Outcome<BatchGetCrawlersResult, GlueError> BatchGetCrawlersOutcome;
      typedef Aws::Utils::Outcome<BatchGetCustomEntityTypesResult, GlueError> BatchGetCustomEntityTypesOutcome;
      typedef Aws::Utils::Outcome<BatchGetDataQualityResultResult, GlueError> BatchGetDataQualityResultOutcome;
      typedef Aws::Utils::Outcome<BatchGetDevEndpointsResult, GlueError> BatchGetDevEndpointsOutcome;
      typedef Aws::Utils::Outcome<BatchGetJobsResult, GlueError> BatchGetJobsOutcome;
      typedef Aws::Utils::Outcome<BatchGetPartitionResult, GlueError> BatchGetPartitionOutcome;
      typedef Aws::Utils::Outcome<BatchGetTriggersResult, GlueError> BatchGetTriggersOutcome;
      typedef Aws::Utils::Outcome<BatchGetWorkflowsResult, GlueError> BatchGetWorkflowsOutcome;
      typedef Aws::Utils::Outcome<BatchStopJobRunResult, GlueError> BatchStopJobRunOutcome;
      typedef Aws::Utils::Outcome<BatchUpdatePartitionResult, GlueError> BatchUpdatePartitionOutcome;
      typedef Aws::Utils::Outcome<CancelDataQualityRuleRecommendationRunResult, GlueError> CancelDataQualityRuleRecommendationRunOutcome;
      typedef Aws::Utils::Outcome<CancelDataQualityRulesetEvaluationRunResult, GlueError> CancelDataQualityRulesetEvaluationRunOutcome;
      typedef Aws::Utils::Outcome<CancelMLTaskRunResult, GlueError> CancelMLTaskRunOutcome;
      typedef Aws::Utils::Outcome<CancelStatementResult, GlueError> CancelStatementOutcome;
      typedef Aws::Utils::Outcome<CheckSchemaVersionValidityResult, GlueError> CheckSchemaVersionValidityOutcome;
      typedef Aws::Utils::Outcome<CreateBlueprintResult, GlueError> CreateBlueprintOutcome;
      typedef Aws::Utils::Outcome<CreateClassifierResult, GlueError> CreateClassifierOutcome;
      typedef Aws::Utils::Outcome<CreateConnectionResult, GlueError> CreateConnectionOutcome;
      typedef Aws::Utils::Outcome<CreateCrawlerResult, GlueError> CreateCrawlerOutcome;
      typedef Aws::Utils::Outcome<CreateCustomEntityTypeResult, GlueError> CreateCustomEntityTypeOutcome;
      typedef Aws::Utils::Outcome<CreateDataQualityRulesetResult, GlueError> CreateDataQualityRulesetOutcome;
      typedef Aws::Utils::Outcome<CreateDatabaseResult, GlueError> CreateDatabaseOutcome;
      typedef Aws::Utils::Outcome<CreateDevEndpointResult, GlueError> CreateDevEndpointOutcome;
      typedef Aws::Utils::Outcome<CreateJobResult, GlueError> CreateJobOutcome;
      typedef Aws::Utils::Outcome<CreateMLTransformResult, GlueError> CreateMLTransformOutcome;
      typedef Aws::Utils::Outcome<CreatePartitionResult, GlueError> CreatePartitionOutcome;
      typedef Aws::Utils::Outcome<CreatePartitionIndexResult, GlueError> CreatePartitionIndexOutcome;
      typedef Aws::Utils::Outcome<CreateRegistryResult, GlueError> CreateRegistryOutcome;
      typedef Aws::Utils::Outcome<CreateSchemaResult, GlueError> CreateSchemaOutcome;
      typedef Aws::Utils::Outcome<CreateScriptResult, GlueError> CreateScriptOutcome;
      typedef Aws::Utils::Outcome<CreateSecurityConfigurationResult, GlueError> CreateSecurityConfigurationOutcome;
      typedef Aws::Utils::Outcome<CreateSessionResult, GlueError> CreateSessionOutcome;
      typedef Aws::Utils::Outcome<CreateTableResult, GlueError> CreateTableOutcome;
      typedef Aws::Utils::Outcome<CreateTriggerResult, GlueError> CreateTriggerOutcome;
      typedef Aws::Utils::Outcome<CreateUserDefinedFunctionResult, GlueError> CreateUserDefinedFunctionOutcome;
      typedef Aws::Utils::Outcome<CreateWorkflowResult, GlueError> CreateWorkflowOutcome;
      typedef Aws::Utils::Outcome<DeleteBlueprintResult, GlueError> DeleteBlueprintOutcome;
      typedef Aws::Utils::Outcome<DeleteClassifierResult, GlueError> DeleteClassifierOutcome;
      typedef Aws::Utils::Outcome<DeleteColumnStatisticsForPartitionResult, GlueError> DeleteColumnStatisticsForPartitionOutcome;
      typedef Aws::Utils::Outcome<DeleteColumnStatisticsForTableResult, GlueError> DeleteColumnStatisticsForTableOutcome;
      typedef Aws::Utils::Outcome<DeleteConnectionResult, GlueError> DeleteConnectionOutcome;
      typedef Aws::Utils::Outcome<DeleteCrawlerResult, GlueError> DeleteCrawlerOutcome;
      typedef Aws::Utils::Outcome<DeleteCustomEntityTypeResult, GlueError> DeleteCustomEntityTypeOutcome;
      typedef Aws::Utils::Outcome<DeleteDataQualityRulesetResult, GlueError> DeleteDataQualityRulesetOutcome;
      typedef Aws::Utils::Outcome<DeleteDatabaseResult, GlueError> DeleteDatabaseOutcome;
      typedef Aws::Utils::Outcome<DeleteDevEndpointResult, GlueError> DeleteDevEndpointOutcome;
      typedef Aws::Utils::Outcome<DeleteJobResult, GlueError> DeleteJobOutcome;
      typedef Aws::Utils::Outcome<DeleteMLTransformResult, GlueError> DeleteMLTransformOutcome;
      typedef Aws::Utils::Outcome<DeletePartitionResult, GlueError> DeletePartitionOutcome;
      typedef Aws::Utils::Outcome<DeletePartitionIndexResult, GlueError> DeletePartitionIndexOutcome;
      typedef Aws::Utils::Outcome<DeleteRegistryResult, GlueError> DeleteRegistryOutcome;
      typedef Aws::Utils::Outcome<DeleteResourcePolicyResult, GlueError> DeleteResourcePolicyOutcome;
      typedef Aws::Utils::Outcome<DeleteSchemaResult, GlueError> DeleteSchemaOutcome;
      typedef Aws::Utils::Outcome<DeleteSchemaVersionsResult, GlueError> DeleteSchemaVersionsOutcome;
      typedef Aws::Utils::Outcome<DeleteSecurityConfigurationResult, GlueError> DeleteSecurityConfigurationOutcome;
      typedef Aws::Utils::Outcome<DeleteSessionResult, GlueError> DeleteSessionOutcome;
      typedef Aws::Utils::Outcome<DeleteTableResult, GlueError> DeleteTableOutcome;
      typedef Aws::Utils::Outcome<DeleteTableVersionResult, GlueError> DeleteTableVersionOutcome;
      typedef Aws::Utils::Outcome<DeleteTriggerResult, GlueError> DeleteTriggerOutcome;
      typedef Aws::Utils::Outcome<DeleteUserDefinedFunctionResult, GlueError> DeleteUserDefinedFunctionOutcome;
      typedef Aws::Utils::Outcome<DeleteWorkflowResult, GlueError> DeleteWorkflowOutcome;
      typedef Aws::Utils::Outcome<GetBlueprintResult, GlueError> GetBlueprintOutcome;
      typedef Aws::Utils::Outcome<GetBlueprintRunResult, GlueError> GetBlueprintRunOutcome;
      typedef Aws::Utils::Outcome<GetBlueprintRunsResult, GlueError> GetBlueprintRunsOutcome;
      typedef Aws::Utils::Outcome<GetCatalogImportStatusResult, GlueError> GetCatalogImportStatusOutcome;
      typedef Aws::Utils::Outcome<GetClassifierResult, GlueError> GetClassifierOutcome;
      typedef Aws::Utils::Outcome<GetClassifiersResult, GlueError> GetClassifiersOutcome;
      typedef Aws::Utils::Outcome<GetColumnStatisticsForPartitionResult, GlueError> GetColumnStatisticsForPartitionOutcome;
      typedef Aws::Utils::Outcome<GetColumnStatisticsForTableResult, GlueError> GetColumnStatisticsForTableOutcome;
      typedef Aws::Utils::Outcome<GetConnectionResult, GlueError> GetConnectionOutcome;
      typedef Aws::Utils::Outcome<GetConnectionsResult, GlueError> GetConnectionsOutcome;
      typedef Aws::Utils::Outcome<GetCrawlerResult, GlueError> GetCrawlerOutcome;
      typedef Aws::Utils::Outcome<GetCrawlerMetricsResult, GlueError> GetCrawlerMetricsOutcome;
      typedef Aws::Utils::Outcome<GetCrawlersResult, GlueError> GetCrawlersOutcome;
      typedef Aws::Utils::Outcome<GetCustomEntityTypeResult, GlueError> GetCustomEntityTypeOutcome;
      typedef Aws::Utils::Outcome<GetDataCatalogEncryptionSettingsResult, GlueError> GetDataCatalogEncryptionSettingsOutcome;
      typedef Aws::Utils::Outcome<GetDataQualityResultResult, GlueError> GetDataQualityResultOutcome;
      typedef Aws::Utils::Outcome<GetDataQualityRuleRecommendationRunResult, GlueError> GetDataQualityRuleRecommendationRunOutcome;
      typedef Aws::Utils::Outcome<GetDataQualityRulesetResult, GlueError> GetDataQualityRulesetOutcome;
      typedef Aws::Utils::Outcome<GetDataQualityRulesetEvaluationRunResult, GlueError> GetDataQualityRulesetEvaluationRunOutcome;
      typedef Aws::Utils::Outcome<GetDatabaseResult, GlueError> GetDatabaseOutcome;
      typedef Aws::Utils::Outcome<GetDatabasesResult, GlueError> GetDatabasesOutcome;
      typedef Aws::Utils::Outcome<GetDataflowGraphResult, GlueError> GetDataflowGraphOutcome;
      typedef Aws::Utils::Outcome<GetDevEndpointResult, GlueError> GetDevEndpointOutcome;
      typedef Aws::Utils::Outcome<GetDevEndpointsResult, GlueError> GetDevEndpointsOutcome;
      typedef Aws::Utils::Outcome<GetJobResult, GlueError> GetJobOutcome;
      typedef Aws::Utils::Outcome<GetJobBookmarkResult, GlueError> GetJobBookmarkOutcome;
      typedef Aws::Utils::Outcome<GetJobRunResult, GlueError> GetJobRunOutcome;
      typedef Aws::Utils::Outcome<GetJobRunsResult, GlueError> GetJobRunsOutcome;
      typedef Aws::Utils::Outcome<GetJobsResult, GlueError> GetJobsOutcome;
      typedef Aws::Utils::Outcome<GetMLTaskRunResult, GlueError> GetMLTaskRunOutcome;
      typedef Aws::Utils::Outcome<GetMLTaskRunsResult, GlueError> GetMLTaskRunsOutcome;
      typedef Aws::Utils::Outcome<GetMLTransformResult, GlueError> GetMLTransformOutcome;
      typedef Aws::Utils::Outcome<GetMLTransformsResult, GlueError> GetMLTransformsOutcome;
      typedef Aws::Utils::Outcome<GetMappingResult, GlueError> GetMappingOutcome;
      typedef Aws::Utils::Outcome<GetPartitionResult, GlueError> GetPartitionOutcome;
      typedef Aws::Utils::Outcome<GetPartitionIndexesResult, GlueError> GetPartitionIndexesOutcome;
      typedef Aws::Utils::Outcome<GetPartitionsResult, GlueError> GetPartitionsOutcome;
      typedef Aws::Utils::Outcome<GetPlanResult, GlueError> GetPlanOutcome;
      typedef Aws::Utils::Outcome<GetRegistryResult, GlueError> GetRegistryOutcome;
      typedef Aws::Utils::Outcome<GetResourcePoliciesResult, GlueError> GetResourcePoliciesOutcome;
      typedef Aws::Utils::Outcome<GetResourcePolicyResult, GlueError> GetResourcePolicyOutcome;
      typedef Aws::Utils::Outcome<GetSchemaResult, GlueError> GetSchemaOutcome;
      typedef Aws::Utils::Outcome<GetSchemaByDefinitionResult, GlueError> GetSchemaByDefinitionOutcome;
      typedef Aws::Utils::Outcome<GetSchemaVersionResult, GlueError> GetSchemaVersionOutcome;
      typedef Aws::Utils::Outcome<GetSchemaVersionsDiffResult, GlueError> GetSchemaVersionsDiffOutcome;
      typedef Aws::Utils::Outcome<GetSecurityConfigurationResult, GlueError> GetSecurityConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetSecurityConfigurationsResult, GlueError> GetSecurityConfigurationsOutcome;
      typedef Aws::Utils::Outcome<GetSessionResult, GlueError> GetSessionOutcome;
      typedef Aws::Utils::Outcome<GetStatementResult, GlueError> GetStatementOutcome;
      typedef Aws::Utils::Outcome<GetTableResult, GlueError> GetTableOutcome;
      typedef Aws::Utils::Outcome<GetTableVersionResult, GlueError> GetTableVersionOutcome;
      typedef Aws::Utils::Outcome<GetTableVersionsResult, GlueError> GetTableVersionsOutcome;
      typedef Aws::Utils::Outcome<GetTablesResult, GlueError> GetTablesOutcome;
      typedef Aws::Utils::Outcome<GetTagsResult, GlueError> GetTagsOutcome;
      typedef Aws::Utils::Outcome<GetTriggerResult, GlueError> GetTriggerOutcome;
      typedef Aws::Utils::Outcome<GetTriggersResult, GlueError> GetTriggersOutcome;
      typedef Aws::Utils::Outcome<GetUnfilteredPartitionMetadataResult, GlueError> GetUnfilteredPartitionMetadataOutcome;
      typedef Aws::Utils::Outcome<GetUnfilteredPartitionsMetadataResult, GlueError> GetUnfilteredPartitionsMetadataOutcome;
      typedef Aws::Utils::Outcome<GetUnfilteredTableMetadataResult, GlueError> GetUnfilteredTableMetadataOutcome;
      typedef Aws::Utils::Outcome<GetUserDefinedFunctionResult, GlueError> GetUserDefinedFunctionOutcome;
      typedef Aws::Utils::Outcome<GetUserDefinedFunctionsResult, GlueError> GetUserDefinedFunctionsOutcome;
      typedef Aws::Utils::Outcome<GetWorkflowResult, GlueError> GetWorkflowOutcome;
      typedef Aws::Utils::Outcome<GetWorkflowRunResult, GlueError> GetWorkflowRunOutcome;
      typedef Aws::Utils::Outcome<GetWorkflowRunPropertiesResult, GlueError> GetWorkflowRunPropertiesOutcome;
      typedef Aws::Utils::Outcome<GetWorkflowRunsResult, GlueError> GetWorkflowRunsOutcome;
      typedef Aws::Utils::Outcome<ImportCatalogToGlueResult, GlueError> ImportCatalogToGlueOutcome;
      typedef Aws::Utils::Outcome<ListBlueprintsResult, GlueError> ListBlueprintsOutcome;
      typedef Aws::Utils::Outcome<ListCrawlersResult, GlueError> ListCrawlersOutcome;
      typedef Aws::Utils::Outcome<ListCrawlsResult, GlueError> ListCrawlsOutcome;
      typedef Aws::Utils::Outcome<ListCustomEntityTypesResult, GlueError> ListCustomEntityTypesOutcome;
      typedef Aws::Utils::Outcome<ListDataQualityResultsResult, GlueError> ListDataQualityResultsOutcome;
      typedef Aws::Utils::Outcome<ListDataQualityRuleRecommendationRunsResult, GlueError> ListDataQualityRuleRecommendationRunsOutcome;
      typedef Aws::Utils::Outcome<ListDataQualityRulesetEvaluationRunsResult, GlueError> ListDataQualityRulesetEvaluationRunsOutcome;
      typedef Aws::Utils::Outcome<ListDataQualityRulesetsResult, GlueError> ListDataQualityRulesetsOutcome;
      typedef Aws::Utils::Outcome<ListDevEndpointsResult, GlueError> ListDevEndpointsOutcome;
      typedef Aws::Utils::Outcome<ListJobsResult, GlueError> ListJobsOutcome;
      typedef Aws::Utils::Outcome<ListMLTransformsResult, GlueError> ListMLTransformsOutcome;
      typedef Aws::Utils::Outcome<ListRegistriesResult, GlueError> ListRegistriesOutcome;
      typedef Aws::Utils::Outcome<ListSchemaVersionsResult, GlueError> ListSchemaVersionsOutcome;
      typedef Aws::Utils::Outcome<ListSchemasResult, GlueError> ListSchemasOutcome;
      typedef Aws::Utils::Outcome<ListSessionsResult, GlueError> ListSessionsOutcome;
      typedef Aws::Utils::Outcome<ListStatementsResult, GlueError> ListStatementsOutcome;
      typedef Aws::Utils::Outcome<ListTriggersResult, GlueError> ListTriggersOutcome;
      typedef Aws::Utils::Outcome<ListWorkflowsResult, GlueError> ListWorkflowsOutcome;
      typedef Aws::Utils::Outcome<PutDataCatalogEncryptionSettingsResult, GlueError> PutDataCatalogEncryptionSettingsOutcome;
      typedef Aws::Utils::Outcome<PutResourcePolicyResult, GlueError> PutResourcePolicyOutcome;
      typedef Aws::Utils::Outcome<PutSchemaVersionMetadataResult, GlueError> PutSchemaVersionMetadataOutcome;
      typedef Aws::Utils::Outcome<PutWorkflowRunPropertiesResult, GlueError> PutWorkflowRunPropertiesOutcome;
      typedef Aws::Utils::Outcome<QuerySchemaVersionMetadataResult, GlueError> QuerySchemaVersionMetadataOutcome;
      typedef Aws::Utils::Outcome<RegisterSchemaVersionResult, GlueError> RegisterSchemaVersionOutcome;
      typedef Aws::Utils::Outcome<RemoveSchemaVersionMetadataResult, GlueError> RemoveSchemaVersionMetadataOutcome;
      typedef Aws::Utils::Outcome<ResetJobBookmarkResult, GlueError> ResetJobBookmarkOutcome;
      typedef Aws::Utils::Outcome<ResumeWorkflowRunResult, GlueError> ResumeWorkflowRunOutcome;
      typedef Aws::Utils::Outcome<RunStatementResult, GlueError> RunStatementOutcome;
      typedef Aws::Utils::Outcome<SearchTablesResult, GlueError> SearchTablesOutcome;
      typedef Aws::Utils::Outcome<StartBlueprintRunResult, GlueError> StartBlueprintRunOutcome;
      typedef Aws::Utils::Outcome<StartCrawlerResult, GlueError> StartCrawlerOutcome;
      typedef Aws::Utils::Outcome<StartCrawlerScheduleResult, GlueError> StartCrawlerScheduleOutcome;
      typedef Aws::Utils::Outcome<StartDataQualityRuleRecommendationRunResult, GlueError> StartDataQualityRuleRecommendationRunOutcome;
      typedef Aws::Utils::Outcome<StartDataQualityRulesetEvaluationRunResult, GlueError> StartDataQualityRulesetEvaluationRunOutcome;
      typedef Aws::Utils::Outcome<StartExportLabelsTaskRunResult, GlueError> StartExportLabelsTaskRunOutcome;
      typedef Aws::Utils::Outcome<StartImportLabelsTaskRunResult, GlueError> StartImportLabelsTaskRunOutcome;
      typedef Aws::Utils::Outcome<StartJobRunResult, GlueError> StartJobRunOutcome;
      typedef Aws::Utils::Outcome<StartMLEvaluationTaskRunResult, GlueError> StartMLEvaluationTaskRunOutcome;
      typedef Aws::Utils::Outcome<StartMLLabelingSetGenerationTaskRunResult, GlueError> StartMLLabelingSetGenerationTaskRunOutcome;
      typedef Aws::Utils::Outcome<StartTriggerResult, GlueError> StartTriggerOutcome;
      typedef Aws::Utils::Outcome<StartWorkflowRunResult, GlueError> StartWorkflowRunOutcome;
      typedef Aws::Utils::Outcome<StopCrawlerResult, GlueError> StopCrawlerOutcome;
      typedef Aws::Utils::Outcome<StopCrawlerScheduleResult, GlueError> StopCrawlerScheduleOutcome;
      typedef Aws::Utils::Outcome<StopSessionResult, GlueError> StopSessionOutcome;
      typedef Aws::Utils::Outcome<StopTriggerResult, GlueError> StopTriggerOutcome;
      typedef Aws::Utils::Outcome<StopWorkflowRunResult, GlueError> StopWorkflowRunOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, GlueError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, GlueError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateBlueprintResult, GlueError> UpdateBlueprintOutcome;
      typedef Aws::Utils::Outcome<UpdateClassifierResult, GlueError> UpdateClassifierOutcome;
      typedef Aws::Utils::Outcome<UpdateColumnStatisticsForPartitionResult, GlueError> UpdateColumnStatisticsForPartitionOutcome;
      typedef Aws::Utils::Outcome<UpdateColumnStatisticsForTableResult, GlueError> UpdateColumnStatisticsForTableOutcome;
      typedef Aws::Utils::Outcome<UpdateConnectionResult, GlueError> UpdateConnectionOutcome;
      typedef Aws::Utils::Outcome<UpdateCrawlerResult, GlueError> UpdateCrawlerOutcome;
      typedef Aws::Utils::Outcome<UpdateCrawlerScheduleResult, GlueError> UpdateCrawlerScheduleOutcome;
      typedef Aws::Utils::Outcome<UpdateDataQualityRulesetResult, GlueError> UpdateDataQualityRulesetOutcome;
      typedef Aws::Utils::Outcome<UpdateDatabaseResult, GlueError> UpdateDatabaseOutcome;
      typedef Aws::Utils::Outcome<UpdateDevEndpointResult, GlueError> UpdateDevEndpointOutcome;
      typedef Aws::Utils::Outcome<UpdateJobResult, GlueError> UpdateJobOutcome;
      typedef Aws::Utils::Outcome<UpdateJobFromSourceControlResult, GlueError> UpdateJobFromSourceControlOutcome;
      typedef Aws::Utils::Outcome<UpdateMLTransformResult, GlueError> UpdateMLTransformOutcome;
      typedef Aws::Utils::Outcome<UpdatePartitionResult, GlueError> UpdatePartitionOutcome;
      typedef Aws::Utils::Outcome<UpdateRegistryResult, GlueError> UpdateRegistryOutcome;
      typedef Aws::Utils::Outcome<UpdateSchemaResult, GlueError> UpdateSchemaOutcome;
      typedef Aws::Utils::Outcome<UpdateSourceControlFromJobResult, GlueError> UpdateSourceControlFromJobOutcome;
      typedef Aws::Utils::Outcome<UpdateTableResult, GlueError> UpdateTableOutcome;
      typedef Aws::Utils::Outcome<UpdateTriggerResult, GlueError> UpdateTriggerOutcome;
      typedef Aws::Utils::Outcome<UpdateUserDefinedFunctionResult, GlueError> UpdateUserDefinedFunctionOutcome;
      typedef Aws::Utils::Outcome<UpdateWorkflowResult, GlueError> UpdateWorkflowOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<BatchCreatePartitionOutcome> BatchCreatePartitionOutcomeCallable;
      typedef std::future<BatchDeleteConnectionOutcome> BatchDeleteConnectionOutcomeCallable;
      typedef std::future<BatchDeletePartitionOutcome> BatchDeletePartitionOutcomeCallable;
      typedef std::future<BatchDeleteTableOutcome> BatchDeleteTableOutcomeCallable;
      typedef std::future<BatchDeleteTableVersionOutcome> BatchDeleteTableVersionOutcomeCallable;
      typedef std::future<BatchGetBlueprintsOutcome> BatchGetBlueprintsOutcomeCallable;
      typedef std::future<BatchGetCrawlersOutcome> BatchGetCrawlersOutcomeCallable;
      typedef std::future<BatchGetCustomEntityTypesOutcome> BatchGetCustomEntityTypesOutcomeCallable;
      typedef std::future<BatchGetDataQualityResultOutcome> BatchGetDataQualityResultOutcomeCallable;
      typedef std::future<BatchGetDevEndpointsOutcome> BatchGetDevEndpointsOutcomeCallable;
      typedef std::future<BatchGetJobsOutcome> BatchGetJobsOutcomeCallable;
      typedef std::future<BatchGetPartitionOutcome> BatchGetPartitionOutcomeCallable;
      typedef std::future<BatchGetTriggersOutcome> BatchGetTriggersOutcomeCallable;
      typedef std::future<BatchGetWorkflowsOutcome> BatchGetWorkflowsOutcomeCallable;
      typedef std::future<BatchStopJobRunOutcome> BatchStopJobRunOutcomeCallable;
      typedef std::future<BatchUpdatePartitionOutcome> BatchUpdatePartitionOutcomeCallable;
      typedef std::future<CancelDataQualityRuleRecommendationRunOutcome> CancelDataQualityRuleRecommendationRunOutcomeCallable;
      typedef std::future<CancelDataQualityRulesetEvaluationRunOutcome> CancelDataQualityRulesetEvaluationRunOutcomeCallable;
      typedef std::future<CancelMLTaskRunOutcome> CancelMLTaskRunOutcomeCallable;
      typedef std::future<CancelStatementOutcome> CancelStatementOutcomeCallable;
      typedef std::future<CheckSchemaVersionValidityOutcome> CheckSchemaVersionValidityOutcomeCallable;
      typedef std::future<CreateBlueprintOutcome> CreateBlueprintOutcomeCallable;
      typedef std::future<CreateClassifierOutcome> CreateClassifierOutcomeCallable;
      typedef std::future<CreateConnectionOutcome> CreateConnectionOutcomeCallable;
      typedef std::future<CreateCrawlerOutcome> CreateCrawlerOutcomeCallable;
      typedef std::future<CreateCustomEntityTypeOutcome> CreateCustomEntityTypeOutcomeCallable;
      typedef std::future<CreateDataQualityRulesetOutcome> CreateDataQualityRulesetOutcomeCallable;
      typedef std::future<CreateDatabaseOutcome> CreateDatabaseOutcomeCallable;
      typedef std::future<CreateDevEndpointOutcome> CreateDevEndpointOutcomeCallable;
      typedef std::future<CreateJobOutcome> CreateJobOutcomeCallable;
      typedef std::future<CreateMLTransformOutcome> CreateMLTransformOutcomeCallable;
      typedef std::future<CreatePartitionOutcome> CreatePartitionOutcomeCallable;
      typedef std::future<CreatePartitionIndexOutcome> CreatePartitionIndexOutcomeCallable;
      typedef std::future<CreateRegistryOutcome> CreateRegistryOutcomeCallable;
      typedef std::future<CreateSchemaOutcome> CreateSchemaOutcomeCallable;
      typedef std::future<CreateScriptOutcome> CreateScriptOutcomeCallable;
      typedef std::future<CreateSecurityConfigurationOutcome> CreateSecurityConfigurationOutcomeCallable;
      typedef std::future<CreateSessionOutcome> CreateSessionOutcomeCallable;
      typedef std::future<CreateTableOutcome> CreateTableOutcomeCallable;
      typedef std::future<CreateTriggerOutcome> CreateTriggerOutcomeCallable;
      typedef std::future<CreateUserDefinedFunctionOutcome> CreateUserDefinedFunctionOutcomeCallable;
      typedef std::future<CreateWorkflowOutcome> CreateWorkflowOutcomeCallable;
      typedef std::future<DeleteBlueprintOutcome> DeleteBlueprintOutcomeCallable;
      typedef std::future<DeleteClassifierOutcome> DeleteClassifierOutcomeCallable;
      typedef std::future<DeleteColumnStatisticsForPartitionOutcome> DeleteColumnStatisticsForPartitionOutcomeCallable;
      typedef std::future<DeleteColumnStatisticsForTableOutcome> DeleteColumnStatisticsForTableOutcomeCallable;
      typedef std::future<DeleteConnectionOutcome> DeleteConnectionOutcomeCallable;
      typedef std::future<DeleteCrawlerOutcome> DeleteCrawlerOutcomeCallable;
      typedef std::future<DeleteCustomEntityTypeOutcome> DeleteCustomEntityTypeOutcomeCallable;
      typedef std::future<DeleteDataQualityRulesetOutcome> DeleteDataQualityRulesetOutcomeCallable;
      typedef std::future<DeleteDatabaseOutcome> DeleteDatabaseOutcomeCallable;
      typedef std::future<DeleteDevEndpointOutcome> DeleteDevEndpointOutcomeCallable;
      typedef std::future<DeleteJobOutcome> DeleteJobOutcomeCallable;
      typedef std::future<DeleteMLTransformOutcome> DeleteMLTransformOutcomeCallable;
      typedef std::future<DeletePartitionOutcome> DeletePartitionOutcomeCallable;
      typedef std::future<DeletePartitionIndexOutcome> DeletePartitionIndexOutcomeCallable;
      typedef std::future<DeleteRegistryOutcome> DeleteRegistryOutcomeCallable;
      typedef std::future<DeleteResourcePolicyOutcome> DeleteResourcePolicyOutcomeCallable;
      typedef std::future<DeleteSchemaOutcome> DeleteSchemaOutcomeCallable;
      typedef std::future<DeleteSchemaVersionsOutcome> DeleteSchemaVersionsOutcomeCallable;
      typedef std::future<DeleteSecurityConfigurationOutcome> DeleteSecurityConfigurationOutcomeCallable;
      typedef std::future<DeleteSessionOutcome> DeleteSessionOutcomeCallable;
      typedef std::future<DeleteTableOutcome> DeleteTableOutcomeCallable;
      typedef std::future<DeleteTableVersionOutcome> DeleteTableVersionOutcomeCallable;
      typedef std::future<DeleteTriggerOutcome> DeleteTriggerOutcomeCallable;
      typedef std::future<DeleteUserDefinedFunctionOutcome> DeleteUserDefinedFunctionOutcomeCallable;
      typedef std::future<DeleteWorkflowOutcome> DeleteWorkflowOutcomeCallable;
      typedef std::future<GetBlueprintOutcome> GetBlueprintOutcomeCallable;
      typedef std::future<GetBlueprintRunOutcome> GetBlueprintRunOutcomeCallable;
      typedef std::future<GetBlueprintRunsOutcome> GetBlueprintRunsOutcomeCallable;
      typedef std::future<GetCatalogImportStatusOutcome> GetCatalogImportStatusOutcomeCallable;
      typedef std::future<GetClassifierOutcome> GetClassifierOutcomeCallable;
      typedef std::future<GetClassifiersOutcome> GetClassifiersOutcomeCallable;
      typedef std::future<GetColumnStatisticsForPartitionOutcome> GetColumnStatisticsForPartitionOutcomeCallable;
      typedef std::future<GetColumnStatisticsForTableOutcome> GetColumnStatisticsForTableOutcomeCallable;
      typedef std::future<GetConnectionOutcome> GetConnectionOutcomeCallable;
      typedef std::future<GetConnectionsOutcome> GetConnectionsOutcomeCallable;
      typedef std::future<GetCrawlerOutcome> GetCrawlerOutcomeCallable;
      typedef std::future<GetCrawlerMetricsOutcome> GetCrawlerMetricsOutcomeCallable;
      typedef std::future<GetCrawlersOutcome> GetCrawlersOutcomeCallable;
      typedef std::future<GetCustomEntityTypeOutcome> GetCustomEntityTypeOutcomeCallable;
      typedef std::future<GetDataCatalogEncryptionSettingsOutcome> GetDataCatalogEncryptionSettingsOutcomeCallable;
      typedef std::future<GetDataQualityResultOutcome> GetDataQualityResultOutcomeCallable;
      typedef std::future<GetDataQualityRuleRecommendationRunOutcome> GetDataQualityRuleRecommendationRunOutcomeCallable;
      typedef std::future<GetDataQualityRulesetOutcome> GetDataQualityRulesetOutcomeCallable;
      typedef std::future<GetDataQualityRulesetEvaluationRunOutcome> GetDataQualityRulesetEvaluationRunOutcomeCallable;
      typedef std::future<GetDatabaseOutcome> GetDatabaseOutcomeCallable;
      typedef std::future<GetDatabasesOutcome> GetDatabasesOutcomeCallable;
      typedef std::future<GetDataflowGraphOutcome> GetDataflowGraphOutcomeCallable;
      typedef std::future<GetDevEndpointOutcome> GetDevEndpointOutcomeCallable;
      typedef std::future<GetDevEndpointsOutcome> GetDevEndpointsOutcomeCallable;
      typedef std::future<GetJobOutcome> GetJobOutcomeCallable;
      typedef std::future<GetJobBookmarkOutcome> GetJobBookmarkOutcomeCallable;
      typedef std::future<GetJobRunOutcome> GetJobRunOutcomeCallable;
      typedef std::future<GetJobRunsOutcome> GetJobRunsOutcomeCallable;
      typedef std::future<GetJobsOutcome> GetJobsOutcomeCallable;
      typedef std::future<GetMLTaskRunOutcome> GetMLTaskRunOutcomeCallable;
      typedef std::future<GetMLTaskRunsOutcome> GetMLTaskRunsOutcomeCallable;
      typedef std::future<GetMLTransformOutcome> GetMLTransformOutcomeCallable;
      typedef std::future<GetMLTransformsOutcome> GetMLTransformsOutcomeCallable;
      typedef std::future<GetMappingOutcome> GetMappingOutcomeCallable;
      typedef std::future<GetPartitionOutcome> GetPartitionOutcomeCallable;
      typedef std::future<GetPartitionIndexesOutcome> GetPartitionIndexesOutcomeCallable;
      typedef std::future<GetPartitionsOutcome> GetPartitionsOutcomeCallable;
      typedef std::future<GetPlanOutcome> GetPlanOutcomeCallable;
      typedef std::future<GetRegistryOutcome> GetRegistryOutcomeCallable;
      typedef std::future<GetResourcePoliciesOutcome> GetResourcePoliciesOutcomeCallable;
      typedef std::future<GetResourcePolicyOutcome> GetResourcePolicyOutcomeCallable;
      typedef std::future<GetSchemaOutcome> GetSchemaOutcomeCallable;
      typedef std::future<GetSchemaByDefinitionOutcome> GetSchemaByDefinitionOutcomeCallable;
      typedef std::future<GetSchemaVersionOutcome> GetSchemaVersionOutcomeCallable;
      typedef std::future<GetSchemaVersionsDiffOutcome> GetSchemaVersionsDiffOutcomeCallable;
      typedef std::future<GetSecurityConfigurationOutcome> GetSecurityConfigurationOutcomeCallable;
      typedef std::future<GetSecurityConfigurationsOutcome> GetSecurityConfigurationsOutcomeCallable;
      typedef std::future<GetSessionOutcome> GetSessionOutcomeCallable;
      typedef std::future<GetStatementOutcome> GetStatementOutcomeCallable;
      typedef std::future<GetTableOutcome> GetTableOutcomeCallable;
      typedef std::future<GetTableVersionOutcome> GetTableVersionOutcomeCallable;
      typedef std::future<GetTableVersionsOutcome> GetTableVersionsOutcomeCallable;
      typedef std::future<GetTablesOutcome> GetTablesOutcomeCallable;
      typedef std::future<GetTagsOutcome> GetTagsOutcomeCallable;
      typedef std::future<GetTriggerOutcome> GetTriggerOutcomeCallable;
      typedef std::future<GetTriggersOutcome> GetTriggersOutcomeCallable;
      typedef std::future<GetUnfilteredPartitionMetadataOutcome> GetUnfilteredPartitionMetadataOutcomeCallable;
      typedef std::future<GetUnfilteredPartitionsMetadataOutcome> GetUnfilteredPartitionsMetadataOutcomeCallable;
      typedef std::future<GetUnfilteredTableMetadataOutcome> GetUnfilteredTableMetadataOutcomeCallable;
      typedef std::future<GetUserDefinedFunctionOutcome> GetUserDefinedFunctionOutcomeCallable;
      typedef std::future<GetUserDefinedFunctionsOutcome> GetUserDefinedFunctionsOutcomeCallable;
      typedef std::future<GetWorkflowOutcome> GetWorkflowOutcomeCallable;
      typedef std::future<GetWorkflowRunOutcome> GetWorkflowRunOutcomeCallable;
      typedef std::future<GetWorkflowRunPropertiesOutcome> GetWorkflowRunPropertiesOutcomeCallable;
      typedef std::future<GetWorkflowRunsOutcome> GetWorkflowRunsOutcomeCallable;
      typedef std::future<ImportCatalogToGlueOutcome> ImportCatalogToGlueOutcomeCallable;
      typedef std::future<ListBlueprintsOutcome> ListBlueprintsOutcomeCallable;
      typedef std::future<ListCrawlersOutcome> ListCrawlersOutcomeCallable;
      typedef std::future<ListCrawlsOutcome> ListCrawlsOutcomeCallable;
      typedef std::future<ListCustomEntityTypesOutcome> ListCustomEntityTypesOutcomeCallable;
      typedef std::future<ListDataQualityResultsOutcome> ListDataQualityResultsOutcomeCallable;
      typedef std::future<ListDataQualityRuleRecommendationRunsOutcome> ListDataQualityRuleRecommendationRunsOutcomeCallable;
      typedef std::future<ListDataQualityRulesetEvaluationRunsOutcome> ListDataQualityRulesetEvaluationRunsOutcomeCallable;
      typedef std::future<ListDataQualityRulesetsOutcome> ListDataQualityRulesetsOutcomeCallable;
      typedef std::future<ListDevEndpointsOutcome> ListDevEndpointsOutcomeCallable;
      typedef std::future<ListJobsOutcome> ListJobsOutcomeCallable;
      typedef std::future<ListMLTransformsOutcome> ListMLTransformsOutcomeCallable;
      typedef std::future<ListRegistriesOutcome> ListRegistriesOutcomeCallable;
      typedef std::future<ListSchemaVersionsOutcome> ListSchemaVersionsOutcomeCallable;
      typedef std::future<ListSchemasOutcome> ListSchemasOutcomeCallable;
      typedef std::future<ListSessionsOutcome> ListSessionsOutcomeCallable;
      typedef std::future<ListStatementsOutcome> ListStatementsOutcomeCallable;
      typedef std::future<ListTriggersOutcome> ListTriggersOutcomeCallable;
      typedef std::future<ListWorkflowsOutcome> ListWorkflowsOutcomeCallable;
      typedef std::future<PutDataCatalogEncryptionSettingsOutcome> PutDataCatalogEncryptionSettingsOutcomeCallable;
      typedef std::future<PutResourcePolicyOutcome> PutResourcePolicyOutcomeCallable;
      typedef std::future<PutSchemaVersionMetadataOutcome> PutSchemaVersionMetadataOutcomeCallable;
      typedef std::future<PutWorkflowRunPropertiesOutcome> PutWorkflowRunPropertiesOutcomeCallable;
      typedef std::future<QuerySchemaVersionMetadataOutcome> QuerySchemaVersionMetadataOutcomeCallable;
      typedef std::future<RegisterSchemaVersionOutcome> RegisterSchemaVersionOutcomeCallable;
      typedef std::future<RemoveSchemaVersionMetadataOutcome> RemoveSchemaVersionMetadataOutcomeCallable;
      typedef std::future<ResetJobBookmarkOutcome> ResetJobBookmarkOutcomeCallable;
      typedef std::future<ResumeWorkflowRunOutcome> ResumeWorkflowRunOutcomeCallable;
      typedef std::future<RunStatementOutcome> RunStatementOutcomeCallable;
      typedef std::future<SearchTablesOutcome> SearchTablesOutcomeCallable;
      typedef std::future<StartBlueprintRunOutcome> StartBlueprintRunOutcomeCallable;
      typedef std::future<StartCrawlerOutcome> StartCrawlerOutcomeCallable;
      typedef std::future<StartCrawlerScheduleOutcome> StartCrawlerScheduleOutcomeCallable;
      typedef std::future<StartDataQualityRuleRecommendationRunOutcome> StartDataQualityRuleRecommendationRunOutcomeCallable;
      typedef std::future<StartDataQualityRulesetEvaluationRunOutcome> StartDataQualityRulesetEvaluationRunOutcomeCallable;
      typedef std::future<StartExportLabelsTaskRunOutcome> StartExportLabelsTaskRunOutcomeCallable;
      typedef std::future<StartImportLabelsTaskRunOutcome> StartImportLabelsTaskRunOutcomeCallable;
      typedef std::future<StartJobRunOutcome> StartJobRunOutcomeCallable;
      typedef std::future<StartMLEvaluationTaskRunOutcome> StartMLEvaluationTaskRunOutcomeCallable;
      typedef std::future<StartMLLabelingSetGenerationTaskRunOutcome> StartMLLabelingSetGenerationTaskRunOutcomeCallable;
      typedef std::future<StartTriggerOutcome> StartTriggerOutcomeCallable;
      typedef std::future<StartWorkflowRunOutcome> StartWorkflowRunOutcomeCallable;
      typedef std::future<StopCrawlerOutcome> StopCrawlerOutcomeCallable;
      typedef std::future<StopCrawlerScheduleOutcome> StopCrawlerScheduleOutcomeCallable;
      typedef std::future<StopSessionOutcome> StopSessionOutcomeCallable;
      typedef std::future<StopTriggerOutcome> StopTriggerOutcomeCallable;
      typedef std::future<StopWorkflowRunOutcome> StopWorkflowRunOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateBlueprintOutcome> UpdateBlueprintOutcomeCallable;
      typedef std::future<UpdateClassifierOutcome> UpdateClassifierOutcomeCallable;
      typedef std::future<UpdateColumnStatisticsForPartitionOutcome> UpdateColumnStatisticsForPartitionOutcomeCallable;
      typedef std::future<UpdateColumnStatisticsForTableOutcome> UpdateColumnStatisticsForTableOutcomeCallable;
      typedef std::future<UpdateConnectionOutcome> UpdateConnectionOutcomeCallable;
      typedef std::future<UpdateCrawlerOutcome> UpdateCrawlerOutcomeCallable;
      typedef std::future<UpdateCrawlerScheduleOutcome> UpdateCrawlerScheduleOutcomeCallable;
      typedef std::future<UpdateDataQualityRulesetOutcome> UpdateDataQualityRulesetOutcomeCallable;
      typedef std::future<UpdateDatabaseOutcome> UpdateDatabaseOutcomeCallable;
      typedef std::future<UpdateDevEndpointOutcome> UpdateDevEndpointOutcomeCallable;
      typedef std::future<UpdateJobOutcome> UpdateJobOutcomeCallable;
      typedef std::future<UpdateJobFromSourceControlOutcome> UpdateJobFromSourceControlOutcomeCallable;
      typedef std::future<UpdateMLTransformOutcome> UpdateMLTransformOutcomeCallable;
      typedef std::future<UpdatePartitionOutcome> UpdatePartitionOutcomeCallable;
      typedef std::future<UpdateRegistryOutcome> UpdateRegistryOutcomeCallable;
      typedef std::future<UpdateSchemaOutcome> UpdateSchemaOutcomeCallable;
      typedef std::future<UpdateSourceControlFromJobOutcome> UpdateSourceControlFromJobOutcomeCallable;
      typedef std::future<UpdateTableOutcome> UpdateTableOutcomeCallable;
      typedef std::future<UpdateTriggerOutcome> UpdateTriggerOutcomeCallable;
      typedef std::future<UpdateUserDefinedFunctionOutcome> UpdateUserDefinedFunctionOutcomeCallable;
      typedef std::future<UpdateWorkflowOutcome> UpdateWorkflowOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class GlueClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const GlueClient*, const Model::BatchCreatePartitionRequest&, const Model::BatchCreatePartitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchCreatePartitionResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::BatchDeleteConnectionRequest&, const Model::BatchDeleteConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDeleteConnectionResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::BatchDeletePartitionRequest&, const Model::BatchDeletePartitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDeletePartitionResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::BatchDeleteTableRequest&, const Model::BatchDeleteTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDeleteTableResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::BatchDeleteTableVersionRequest&, const Model::BatchDeleteTableVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDeleteTableVersionResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::BatchGetBlueprintsRequest&, const Model::BatchGetBlueprintsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetBlueprintsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::BatchGetCrawlersRequest&, const Model::BatchGetCrawlersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetCrawlersResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::BatchGetCustomEntityTypesRequest&, const Model::BatchGetCustomEntityTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetCustomEntityTypesResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::BatchGetDataQualityResultRequest&, const Model::BatchGetDataQualityResultOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetDataQualityResultResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::BatchGetDevEndpointsRequest&, const Model::BatchGetDevEndpointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetDevEndpointsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::BatchGetJobsRequest&, const Model::BatchGetJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetJobsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::BatchGetPartitionRequest&, const Model::BatchGetPartitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetPartitionResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::BatchGetTriggersRequest&, const Model::BatchGetTriggersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetTriggersResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::BatchGetWorkflowsRequest&, const Model::BatchGetWorkflowsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetWorkflowsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::BatchStopJobRunRequest&, const Model::BatchStopJobRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchStopJobRunResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::BatchUpdatePartitionRequest&, const Model::BatchUpdatePartitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchUpdatePartitionResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::CancelDataQualityRuleRecommendationRunRequest&, const Model::CancelDataQualityRuleRecommendationRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelDataQualityRuleRecommendationRunResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::CancelDataQualityRulesetEvaluationRunRequest&, const Model::CancelDataQualityRulesetEvaluationRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelDataQualityRulesetEvaluationRunResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::CancelMLTaskRunRequest&, const Model::CancelMLTaskRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelMLTaskRunResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::CancelStatementRequest&, const Model::CancelStatementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelStatementResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::CheckSchemaVersionValidityRequest&, const Model::CheckSchemaVersionValidityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CheckSchemaVersionValidityResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::CreateBlueprintRequest&, const Model::CreateBlueprintOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBlueprintResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::CreateClassifierRequest&, const Model::CreateClassifierOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateClassifierResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::CreateConnectionRequest&, const Model::CreateConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConnectionResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::CreateCrawlerRequest&, const Model::CreateCrawlerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCrawlerResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::CreateCustomEntityTypeRequest&, const Model::CreateCustomEntityTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCustomEntityTypeResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::CreateDataQualityRulesetRequest&, const Model::CreateDataQualityRulesetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDataQualityRulesetResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::CreateDatabaseRequest&, const Model::CreateDatabaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDatabaseResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::CreateDevEndpointRequest&, const Model::CreateDevEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDevEndpointResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::CreateJobRequest&, const Model::CreateJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateJobResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::CreateMLTransformRequest&, const Model::CreateMLTransformOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMLTransformResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::CreatePartitionRequest&, const Model::CreatePartitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePartitionResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::CreatePartitionIndexRequest&, const Model::CreatePartitionIndexOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePartitionIndexResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::CreateRegistryRequest&, const Model::CreateRegistryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRegistryResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::CreateSchemaRequest&, const Model::CreateSchemaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSchemaResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::CreateScriptRequest&, const Model::CreateScriptOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateScriptResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::CreateSecurityConfigurationRequest&, const Model::CreateSecurityConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSecurityConfigurationResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::CreateSessionRequest&, const Model::CreateSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSessionResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::CreateTableRequest&, const Model::CreateTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTableResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::CreateTriggerRequest&, const Model::CreateTriggerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTriggerResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::CreateUserDefinedFunctionRequest&, const Model::CreateUserDefinedFunctionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateUserDefinedFunctionResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::CreateWorkflowRequest&, const Model::CreateWorkflowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateWorkflowResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::DeleteBlueprintRequest&, const Model::DeleteBlueprintOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBlueprintResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::DeleteClassifierRequest&, const Model::DeleteClassifierOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteClassifierResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::DeleteColumnStatisticsForPartitionRequest&, const Model::DeleteColumnStatisticsForPartitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteColumnStatisticsForPartitionResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::DeleteColumnStatisticsForTableRequest&, const Model::DeleteColumnStatisticsForTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteColumnStatisticsForTableResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::DeleteConnectionRequest&, const Model::DeleteConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConnectionResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::DeleteCrawlerRequest&, const Model::DeleteCrawlerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCrawlerResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::DeleteCustomEntityTypeRequest&, const Model::DeleteCustomEntityTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCustomEntityTypeResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::DeleteDataQualityRulesetRequest&, const Model::DeleteDataQualityRulesetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDataQualityRulesetResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::DeleteDatabaseRequest&, const Model::DeleteDatabaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDatabaseResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::DeleteDevEndpointRequest&, const Model::DeleteDevEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDevEndpointResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::DeleteJobRequest&, const Model::DeleteJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteJobResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::DeleteMLTransformRequest&, const Model::DeleteMLTransformOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMLTransformResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::DeletePartitionRequest&, const Model::DeletePartitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePartitionResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::DeletePartitionIndexRequest&, const Model::DeletePartitionIndexOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePartitionIndexResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::DeleteRegistryRequest&, const Model::DeleteRegistryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRegistryResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::DeleteResourcePolicyRequest&, const Model::DeleteResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::DeleteSchemaRequest&, const Model::DeleteSchemaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSchemaResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::DeleteSchemaVersionsRequest&, const Model::DeleteSchemaVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSchemaVersionsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::DeleteSecurityConfigurationRequest&, const Model::DeleteSecurityConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSecurityConfigurationResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::DeleteSessionRequest&, const Model::DeleteSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSessionResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::DeleteTableRequest&, const Model::DeleteTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTableResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::DeleteTableVersionRequest&, const Model::DeleteTableVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTableVersionResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::DeleteTriggerRequest&, const Model::DeleteTriggerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTriggerResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::DeleteUserDefinedFunctionRequest&, const Model::DeleteUserDefinedFunctionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUserDefinedFunctionResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::DeleteWorkflowRequest&, const Model::DeleteWorkflowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteWorkflowResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetBlueprintRequest&, const Model::GetBlueprintOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBlueprintResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetBlueprintRunRequest&, const Model::GetBlueprintRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBlueprintRunResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetBlueprintRunsRequest&, const Model::GetBlueprintRunsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBlueprintRunsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetCatalogImportStatusRequest&, const Model::GetCatalogImportStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCatalogImportStatusResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetClassifierRequest&, const Model::GetClassifierOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetClassifierResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetClassifiersRequest&, const Model::GetClassifiersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetClassifiersResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetColumnStatisticsForPartitionRequest&, const Model::GetColumnStatisticsForPartitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetColumnStatisticsForPartitionResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetColumnStatisticsForTableRequest&, const Model::GetColumnStatisticsForTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetColumnStatisticsForTableResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetConnectionRequest&, const Model::GetConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetConnectionResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetConnectionsRequest&, const Model::GetConnectionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetConnectionsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetCrawlerRequest&, const Model::GetCrawlerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCrawlerResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetCrawlerMetricsRequest&, const Model::GetCrawlerMetricsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCrawlerMetricsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetCrawlersRequest&, const Model::GetCrawlersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCrawlersResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetCustomEntityTypeRequest&, const Model::GetCustomEntityTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCustomEntityTypeResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetDataCatalogEncryptionSettingsRequest&, const Model::GetDataCatalogEncryptionSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDataCatalogEncryptionSettingsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetDataQualityResultRequest&, const Model::GetDataQualityResultOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDataQualityResultResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetDataQualityRuleRecommendationRunRequest&, const Model::GetDataQualityRuleRecommendationRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDataQualityRuleRecommendationRunResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetDataQualityRulesetRequest&, const Model::GetDataQualityRulesetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDataQualityRulesetResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetDataQualityRulesetEvaluationRunRequest&, const Model::GetDataQualityRulesetEvaluationRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDataQualityRulesetEvaluationRunResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetDatabaseRequest&, const Model::GetDatabaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDatabaseResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetDatabasesRequest&, const Model::GetDatabasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDatabasesResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetDataflowGraphRequest&, const Model::GetDataflowGraphOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDataflowGraphResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetDevEndpointRequest&, const Model::GetDevEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDevEndpointResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetDevEndpointsRequest&, const Model::GetDevEndpointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDevEndpointsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetJobRequest&, const Model::GetJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetJobResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetJobBookmarkRequest&, const Model::GetJobBookmarkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetJobBookmarkResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetJobRunRequest&, const Model::GetJobRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetJobRunResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetJobRunsRequest&, const Model::GetJobRunsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetJobRunsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetJobsRequest&, const Model::GetJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetJobsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetMLTaskRunRequest&, const Model::GetMLTaskRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMLTaskRunResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetMLTaskRunsRequest&, const Model::GetMLTaskRunsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMLTaskRunsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetMLTransformRequest&, const Model::GetMLTransformOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMLTransformResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetMLTransformsRequest&, const Model::GetMLTransformsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMLTransformsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetMappingRequest&, const Model::GetMappingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMappingResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetPartitionRequest&, const Model::GetPartitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPartitionResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetPartitionIndexesRequest&, const Model::GetPartitionIndexesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPartitionIndexesResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetPartitionsRequest&, const Model::GetPartitionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPartitionsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetPlanRequest&, const Model::GetPlanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPlanResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetRegistryRequest&, const Model::GetRegistryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRegistryResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetResourcePoliciesRequest&, const Model::GetResourcePoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResourcePoliciesResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetResourcePolicyRequest&, const Model::GetResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetSchemaRequest&, const Model::GetSchemaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSchemaResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetSchemaByDefinitionRequest&, const Model::GetSchemaByDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSchemaByDefinitionResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetSchemaVersionRequest&, const Model::GetSchemaVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSchemaVersionResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetSchemaVersionsDiffRequest&, const Model::GetSchemaVersionsDiffOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSchemaVersionsDiffResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetSecurityConfigurationRequest&, const Model::GetSecurityConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSecurityConfigurationResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetSecurityConfigurationsRequest&, const Model::GetSecurityConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSecurityConfigurationsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetSessionRequest&, const Model::GetSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSessionResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetStatementRequest&, const Model::GetStatementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetStatementResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetTableRequest&, const Model::GetTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTableResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetTableVersionRequest&, const Model::GetTableVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTableVersionResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetTableVersionsRequest&, const Model::GetTableVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTableVersionsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetTablesRequest&, const Model::GetTablesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTablesResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetTagsRequest&, const Model::GetTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTagsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetTriggerRequest&, const Model::GetTriggerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTriggerResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetTriggersRequest&, const Model::GetTriggersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTriggersResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetUnfilteredPartitionMetadataRequest&, const Model::GetUnfilteredPartitionMetadataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUnfilteredPartitionMetadataResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetUnfilteredPartitionsMetadataRequest&, const Model::GetUnfilteredPartitionsMetadataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUnfilteredPartitionsMetadataResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetUnfilteredTableMetadataRequest&, const Model::GetUnfilteredTableMetadataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUnfilteredTableMetadataResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetUserDefinedFunctionRequest&, const Model::GetUserDefinedFunctionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUserDefinedFunctionResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetUserDefinedFunctionsRequest&, const Model::GetUserDefinedFunctionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUserDefinedFunctionsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetWorkflowRequest&, const Model::GetWorkflowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetWorkflowResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetWorkflowRunRequest&, const Model::GetWorkflowRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetWorkflowRunResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetWorkflowRunPropertiesRequest&, const Model::GetWorkflowRunPropertiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetWorkflowRunPropertiesResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetWorkflowRunsRequest&, const Model::GetWorkflowRunsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetWorkflowRunsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::ImportCatalogToGlueRequest&, const Model::ImportCatalogToGlueOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportCatalogToGlueResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::ListBlueprintsRequest&, const Model::ListBlueprintsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBlueprintsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::ListCrawlersRequest&, const Model::ListCrawlersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCrawlersResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::ListCrawlsRequest&, const Model::ListCrawlsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCrawlsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::ListCustomEntityTypesRequest&, const Model::ListCustomEntityTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCustomEntityTypesResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::ListDataQualityResultsRequest&, const Model::ListDataQualityResultsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDataQualityResultsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::ListDataQualityRuleRecommendationRunsRequest&, const Model::ListDataQualityRuleRecommendationRunsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDataQualityRuleRecommendationRunsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::ListDataQualityRulesetEvaluationRunsRequest&, const Model::ListDataQualityRulesetEvaluationRunsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDataQualityRulesetEvaluationRunsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::ListDataQualityRulesetsRequest&, const Model::ListDataQualityRulesetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDataQualityRulesetsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::ListDevEndpointsRequest&, const Model::ListDevEndpointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDevEndpointsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::ListJobsRequest&, const Model::ListJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListJobsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::ListMLTransformsRequest&, const Model::ListMLTransformsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMLTransformsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::ListRegistriesRequest&, const Model::ListRegistriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRegistriesResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::ListSchemaVersionsRequest&, const Model::ListSchemaVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSchemaVersionsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::ListSchemasRequest&, const Model::ListSchemasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSchemasResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::ListSessionsRequest&, const Model::ListSessionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSessionsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::ListStatementsRequest&, const Model::ListStatementsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStatementsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::ListTriggersRequest&, const Model::ListTriggersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTriggersResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::ListWorkflowsRequest&, const Model::ListWorkflowsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListWorkflowsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::PutDataCatalogEncryptionSettingsRequest&, const Model::PutDataCatalogEncryptionSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutDataCatalogEncryptionSettingsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::PutResourcePolicyRequest&, const Model::PutResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::PutSchemaVersionMetadataRequest&, const Model::PutSchemaVersionMetadataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutSchemaVersionMetadataResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::PutWorkflowRunPropertiesRequest&, const Model::PutWorkflowRunPropertiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutWorkflowRunPropertiesResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::QuerySchemaVersionMetadataRequest&, const Model::QuerySchemaVersionMetadataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > QuerySchemaVersionMetadataResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::RegisterSchemaVersionRequest&, const Model::RegisterSchemaVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterSchemaVersionResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::RemoveSchemaVersionMetadataRequest&, const Model::RemoveSchemaVersionMetadataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveSchemaVersionMetadataResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::ResetJobBookmarkRequest&, const Model::ResetJobBookmarkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResetJobBookmarkResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::ResumeWorkflowRunRequest&, const Model::ResumeWorkflowRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResumeWorkflowRunResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::RunStatementRequest&, const Model::RunStatementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RunStatementResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::SearchTablesRequest&, const Model::SearchTablesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchTablesResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::StartBlueprintRunRequest&, const Model::StartBlueprintRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartBlueprintRunResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::StartCrawlerRequest&, const Model::StartCrawlerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartCrawlerResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::StartCrawlerScheduleRequest&, const Model::StartCrawlerScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartCrawlerScheduleResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::StartDataQualityRuleRecommendationRunRequest&, const Model::StartDataQualityRuleRecommendationRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartDataQualityRuleRecommendationRunResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::StartDataQualityRulesetEvaluationRunRequest&, const Model::StartDataQualityRulesetEvaluationRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartDataQualityRulesetEvaluationRunResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::StartExportLabelsTaskRunRequest&, const Model::StartExportLabelsTaskRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartExportLabelsTaskRunResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::StartImportLabelsTaskRunRequest&, const Model::StartImportLabelsTaskRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartImportLabelsTaskRunResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::StartJobRunRequest&, const Model::StartJobRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartJobRunResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::StartMLEvaluationTaskRunRequest&, const Model::StartMLEvaluationTaskRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartMLEvaluationTaskRunResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::StartMLLabelingSetGenerationTaskRunRequest&, const Model::StartMLLabelingSetGenerationTaskRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartMLLabelingSetGenerationTaskRunResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::StartTriggerRequest&, const Model::StartTriggerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartTriggerResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::StartWorkflowRunRequest&, const Model::StartWorkflowRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartWorkflowRunResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::StopCrawlerRequest&, const Model::StopCrawlerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopCrawlerResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::StopCrawlerScheduleRequest&, const Model::StopCrawlerScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopCrawlerScheduleResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::StopSessionRequest&, const Model::StopSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopSessionResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::StopTriggerRequest&, const Model::StopTriggerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopTriggerResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::StopWorkflowRunRequest&, const Model::StopWorkflowRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopWorkflowRunResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::UpdateBlueprintRequest&, const Model::UpdateBlueprintOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateBlueprintResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::UpdateClassifierRequest&, const Model::UpdateClassifierOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateClassifierResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::UpdateColumnStatisticsForPartitionRequest&, const Model::UpdateColumnStatisticsForPartitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateColumnStatisticsForPartitionResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::UpdateColumnStatisticsForTableRequest&, const Model::UpdateColumnStatisticsForTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateColumnStatisticsForTableResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::UpdateConnectionRequest&, const Model::UpdateConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateConnectionResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::UpdateCrawlerRequest&, const Model::UpdateCrawlerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCrawlerResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::UpdateCrawlerScheduleRequest&, const Model::UpdateCrawlerScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCrawlerScheduleResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::UpdateDataQualityRulesetRequest&, const Model::UpdateDataQualityRulesetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDataQualityRulesetResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::UpdateDatabaseRequest&, const Model::UpdateDatabaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDatabaseResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::UpdateDevEndpointRequest&, const Model::UpdateDevEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDevEndpointResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::UpdateJobRequest&, const Model::UpdateJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateJobResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::UpdateJobFromSourceControlRequest&, const Model::UpdateJobFromSourceControlOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateJobFromSourceControlResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::UpdateMLTransformRequest&, const Model::UpdateMLTransformOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMLTransformResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::UpdatePartitionRequest&, const Model::UpdatePartitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePartitionResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::UpdateRegistryRequest&, const Model::UpdateRegistryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRegistryResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::UpdateSchemaRequest&, const Model::UpdateSchemaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSchemaResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::UpdateSourceControlFromJobRequest&, const Model::UpdateSourceControlFromJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSourceControlFromJobResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::UpdateTableRequest&, const Model::UpdateTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTableResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::UpdateTriggerRequest&, const Model::UpdateTriggerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTriggerResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::UpdateUserDefinedFunctionRequest&, const Model::UpdateUserDefinedFunctionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserDefinedFunctionResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::UpdateWorkflowRequest&, const Model::UpdateWorkflowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateWorkflowResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace Glue
} // namespace Aws
