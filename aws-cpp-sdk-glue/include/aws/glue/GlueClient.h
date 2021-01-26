/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/BatchCreatePartitionResult.h>
#include <aws/glue/model/BatchDeleteConnectionResult.h>
#include <aws/glue/model/BatchDeletePartitionResult.h>
#include <aws/glue/model/BatchDeleteTableResult.h>
#include <aws/glue/model/BatchDeleteTableVersionResult.h>
#include <aws/glue/model/BatchGetCrawlersResult.h>
#include <aws/glue/model/BatchGetDevEndpointsResult.h>
#include <aws/glue/model/BatchGetJobsResult.h>
#include <aws/glue/model/BatchGetPartitionResult.h>
#include <aws/glue/model/BatchGetTriggersResult.h>
#include <aws/glue/model/BatchGetWorkflowsResult.h>
#include <aws/glue/model/BatchStopJobRunResult.h>
#include <aws/glue/model/BatchUpdatePartitionResult.h>
#include <aws/glue/model/CancelMLTaskRunResult.h>
#include <aws/glue/model/CheckSchemaVersionValidityResult.h>
#include <aws/glue/model/CreateClassifierResult.h>
#include <aws/glue/model/CreateConnectionResult.h>
#include <aws/glue/model/CreateCrawlerResult.h>
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
#include <aws/glue/model/CreateTableResult.h>
#include <aws/glue/model/CreateTriggerResult.h>
#include <aws/glue/model/CreateUserDefinedFunctionResult.h>
#include <aws/glue/model/CreateWorkflowResult.h>
#include <aws/glue/model/DeleteClassifierResult.h>
#include <aws/glue/model/DeleteColumnStatisticsForPartitionResult.h>
#include <aws/glue/model/DeleteColumnStatisticsForTableResult.h>
#include <aws/glue/model/DeleteConnectionResult.h>
#include <aws/glue/model/DeleteCrawlerResult.h>
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
#include <aws/glue/model/DeleteTableResult.h>
#include <aws/glue/model/DeleteTableVersionResult.h>
#include <aws/glue/model/DeleteTriggerResult.h>
#include <aws/glue/model/DeleteUserDefinedFunctionResult.h>
#include <aws/glue/model/DeleteWorkflowResult.h>
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
#include <aws/glue/model/GetDataCatalogEncryptionSettingsResult.h>
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
#include <aws/glue/model/GetTableResult.h>
#include <aws/glue/model/GetTableVersionResult.h>
#include <aws/glue/model/GetTableVersionsResult.h>
#include <aws/glue/model/GetTablesResult.h>
#include <aws/glue/model/GetTagsResult.h>
#include <aws/glue/model/GetTriggerResult.h>
#include <aws/glue/model/GetTriggersResult.h>
#include <aws/glue/model/GetUserDefinedFunctionResult.h>
#include <aws/glue/model/GetUserDefinedFunctionsResult.h>
#include <aws/glue/model/GetWorkflowResult.h>
#include <aws/glue/model/GetWorkflowRunResult.h>
#include <aws/glue/model/GetWorkflowRunPropertiesResult.h>
#include <aws/glue/model/GetWorkflowRunsResult.h>
#include <aws/glue/model/ImportCatalogToGlueResult.h>
#include <aws/glue/model/ListCrawlersResult.h>
#include <aws/glue/model/ListDevEndpointsResult.h>
#include <aws/glue/model/ListJobsResult.h>
#include <aws/glue/model/ListMLTransformsResult.h>
#include <aws/glue/model/ListRegistriesResult.h>
#include <aws/glue/model/ListSchemaVersionsResult.h>
#include <aws/glue/model/ListSchemasResult.h>
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
#include <aws/glue/model/SearchTablesResult.h>
#include <aws/glue/model/StartCrawlerResult.h>
#include <aws/glue/model/StartCrawlerScheduleResult.h>
#include <aws/glue/model/StartExportLabelsTaskRunResult.h>
#include <aws/glue/model/StartImportLabelsTaskRunResult.h>
#include <aws/glue/model/StartJobRunResult.h>
#include <aws/glue/model/StartMLEvaluationTaskRunResult.h>
#include <aws/glue/model/StartMLLabelingSetGenerationTaskRunResult.h>
#include <aws/glue/model/StartTriggerResult.h>
#include <aws/glue/model/StartWorkflowRunResult.h>
#include <aws/glue/model/StopCrawlerResult.h>
#include <aws/glue/model/StopCrawlerScheduleResult.h>
#include <aws/glue/model/StopTriggerResult.h>
#include <aws/glue/model/StopWorkflowRunResult.h>
#include <aws/glue/model/TagResourceResult.h>
#include <aws/glue/model/UntagResourceResult.h>
#include <aws/glue/model/UpdateClassifierResult.h>
#include <aws/glue/model/UpdateColumnStatisticsForPartitionResult.h>
#include <aws/glue/model/UpdateColumnStatisticsForTableResult.h>
#include <aws/glue/model/UpdateConnectionResult.h>
#include <aws/glue/model/UpdateCrawlerResult.h>
#include <aws/glue/model/UpdateCrawlerScheduleResult.h>
#include <aws/glue/model/UpdateDatabaseResult.h>
#include <aws/glue/model/UpdateDevEndpointResult.h>
#include <aws/glue/model/UpdateJobResult.h>
#include <aws/glue/model/UpdateMLTransformResult.h>
#include <aws/glue/model/UpdatePartitionResult.h>
#include <aws/glue/model/UpdateRegistryResult.h>
#include <aws/glue/model/UpdateSchemaResult.h>
#include <aws/glue/model/UpdateTableResult.h>
#include <aws/glue/model/UpdateTriggerResult.h>
#include <aws/glue/model/UpdateUserDefinedFunctionResult.h>
#include <aws/glue/model/UpdateWorkflowResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

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

namespace Model
{
        class BatchCreatePartitionRequest;
        class BatchDeleteConnectionRequest;
        class BatchDeletePartitionRequest;
        class BatchDeleteTableRequest;
        class BatchDeleteTableVersionRequest;
        class BatchGetCrawlersRequest;
        class BatchGetDevEndpointsRequest;
        class BatchGetJobsRequest;
        class BatchGetPartitionRequest;
        class BatchGetTriggersRequest;
        class BatchGetWorkflowsRequest;
        class BatchStopJobRunRequest;
        class BatchUpdatePartitionRequest;
        class CancelMLTaskRunRequest;
        class CheckSchemaVersionValidityRequest;
        class CreateClassifierRequest;
        class CreateConnectionRequest;
        class CreateCrawlerRequest;
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
        class CreateTableRequest;
        class CreateTriggerRequest;
        class CreateUserDefinedFunctionRequest;
        class CreateWorkflowRequest;
        class DeleteClassifierRequest;
        class DeleteColumnStatisticsForPartitionRequest;
        class DeleteColumnStatisticsForTableRequest;
        class DeleteConnectionRequest;
        class DeleteCrawlerRequest;
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
        class DeleteTableRequest;
        class DeleteTableVersionRequest;
        class DeleteTriggerRequest;
        class DeleteUserDefinedFunctionRequest;
        class DeleteWorkflowRequest;
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
        class GetDataCatalogEncryptionSettingsRequest;
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
        class GetTableRequest;
        class GetTableVersionRequest;
        class GetTableVersionsRequest;
        class GetTablesRequest;
        class GetTagsRequest;
        class GetTriggerRequest;
        class GetTriggersRequest;
        class GetUserDefinedFunctionRequest;
        class GetUserDefinedFunctionsRequest;
        class GetWorkflowRequest;
        class GetWorkflowRunRequest;
        class GetWorkflowRunPropertiesRequest;
        class GetWorkflowRunsRequest;
        class ImportCatalogToGlueRequest;
        class ListCrawlersRequest;
        class ListDevEndpointsRequest;
        class ListJobsRequest;
        class ListMLTransformsRequest;
        class ListRegistriesRequest;
        class ListSchemaVersionsRequest;
        class ListSchemasRequest;
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
        class SearchTablesRequest;
        class StartCrawlerRequest;
        class StartCrawlerScheduleRequest;
        class StartExportLabelsTaskRunRequest;
        class StartImportLabelsTaskRunRequest;
        class StartJobRunRequest;
        class StartMLEvaluationTaskRunRequest;
        class StartMLLabelingSetGenerationTaskRunRequest;
        class StartTriggerRequest;
        class StartWorkflowRunRequest;
        class StopCrawlerRequest;
        class StopCrawlerScheduleRequest;
        class StopTriggerRequest;
        class StopWorkflowRunRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateClassifierRequest;
        class UpdateColumnStatisticsForPartitionRequest;
        class UpdateColumnStatisticsForTableRequest;
        class UpdateConnectionRequest;
        class UpdateCrawlerRequest;
        class UpdateCrawlerScheduleRequest;
        class UpdateDatabaseRequest;
        class UpdateDevEndpointRequest;
        class UpdateJobRequest;
        class UpdateMLTransformRequest;
        class UpdatePartitionRequest;
        class UpdateRegistryRequest;
        class UpdateSchemaRequest;
        class UpdateTableRequest;
        class UpdateTriggerRequest;
        class UpdateUserDefinedFunctionRequest;
        class UpdateWorkflowRequest;

        typedef Aws::Utils::Outcome<BatchCreatePartitionResult, GlueError> BatchCreatePartitionOutcome;
        typedef Aws::Utils::Outcome<BatchDeleteConnectionResult, GlueError> BatchDeleteConnectionOutcome;
        typedef Aws::Utils::Outcome<BatchDeletePartitionResult, GlueError> BatchDeletePartitionOutcome;
        typedef Aws::Utils::Outcome<BatchDeleteTableResult, GlueError> BatchDeleteTableOutcome;
        typedef Aws::Utils::Outcome<BatchDeleteTableVersionResult, GlueError> BatchDeleteTableVersionOutcome;
        typedef Aws::Utils::Outcome<BatchGetCrawlersResult, GlueError> BatchGetCrawlersOutcome;
        typedef Aws::Utils::Outcome<BatchGetDevEndpointsResult, GlueError> BatchGetDevEndpointsOutcome;
        typedef Aws::Utils::Outcome<BatchGetJobsResult, GlueError> BatchGetJobsOutcome;
        typedef Aws::Utils::Outcome<BatchGetPartitionResult, GlueError> BatchGetPartitionOutcome;
        typedef Aws::Utils::Outcome<BatchGetTriggersResult, GlueError> BatchGetTriggersOutcome;
        typedef Aws::Utils::Outcome<BatchGetWorkflowsResult, GlueError> BatchGetWorkflowsOutcome;
        typedef Aws::Utils::Outcome<BatchStopJobRunResult, GlueError> BatchStopJobRunOutcome;
        typedef Aws::Utils::Outcome<BatchUpdatePartitionResult, GlueError> BatchUpdatePartitionOutcome;
        typedef Aws::Utils::Outcome<CancelMLTaskRunResult, GlueError> CancelMLTaskRunOutcome;
        typedef Aws::Utils::Outcome<CheckSchemaVersionValidityResult, GlueError> CheckSchemaVersionValidityOutcome;
        typedef Aws::Utils::Outcome<CreateClassifierResult, GlueError> CreateClassifierOutcome;
        typedef Aws::Utils::Outcome<CreateConnectionResult, GlueError> CreateConnectionOutcome;
        typedef Aws::Utils::Outcome<CreateCrawlerResult, GlueError> CreateCrawlerOutcome;
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
        typedef Aws::Utils::Outcome<CreateTableResult, GlueError> CreateTableOutcome;
        typedef Aws::Utils::Outcome<CreateTriggerResult, GlueError> CreateTriggerOutcome;
        typedef Aws::Utils::Outcome<CreateUserDefinedFunctionResult, GlueError> CreateUserDefinedFunctionOutcome;
        typedef Aws::Utils::Outcome<CreateWorkflowResult, GlueError> CreateWorkflowOutcome;
        typedef Aws::Utils::Outcome<DeleteClassifierResult, GlueError> DeleteClassifierOutcome;
        typedef Aws::Utils::Outcome<DeleteColumnStatisticsForPartitionResult, GlueError> DeleteColumnStatisticsForPartitionOutcome;
        typedef Aws::Utils::Outcome<DeleteColumnStatisticsForTableResult, GlueError> DeleteColumnStatisticsForTableOutcome;
        typedef Aws::Utils::Outcome<DeleteConnectionResult, GlueError> DeleteConnectionOutcome;
        typedef Aws::Utils::Outcome<DeleteCrawlerResult, GlueError> DeleteCrawlerOutcome;
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
        typedef Aws::Utils::Outcome<DeleteTableResult, GlueError> DeleteTableOutcome;
        typedef Aws::Utils::Outcome<DeleteTableVersionResult, GlueError> DeleteTableVersionOutcome;
        typedef Aws::Utils::Outcome<DeleteTriggerResult, GlueError> DeleteTriggerOutcome;
        typedef Aws::Utils::Outcome<DeleteUserDefinedFunctionResult, GlueError> DeleteUserDefinedFunctionOutcome;
        typedef Aws::Utils::Outcome<DeleteWorkflowResult, GlueError> DeleteWorkflowOutcome;
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
        typedef Aws::Utils::Outcome<GetDataCatalogEncryptionSettingsResult, GlueError> GetDataCatalogEncryptionSettingsOutcome;
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
        typedef Aws::Utils::Outcome<GetTableResult, GlueError> GetTableOutcome;
        typedef Aws::Utils::Outcome<GetTableVersionResult, GlueError> GetTableVersionOutcome;
        typedef Aws::Utils::Outcome<GetTableVersionsResult, GlueError> GetTableVersionsOutcome;
        typedef Aws::Utils::Outcome<GetTablesResult, GlueError> GetTablesOutcome;
        typedef Aws::Utils::Outcome<GetTagsResult, GlueError> GetTagsOutcome;
        typedef Aws::Utils::Outcome<GetTriggerResult, GlueError> GetTriggerOutcome;
        typedef Aws::Utils::Outcome<GetTriggersResult, GlueError> GetTriggersOutcome;
        typedef Aws::Utils::Outcome<GetUserDefinedFunctionResult, GlueError> GetUserDefinedFunctionOutcome;
        typedef Aws::Utils::Outcome<GetUserDefinedFunctionsResult, GlueError> GetUserDefinedFunctionsOutcome;
        typedef Aws::Utils::Outcome<GetWorkflowResult, GlueError> GetWorkflowOutcome;
        typedef Aws::Utils::Outcome<GetWorkflowRunResult, GlueError> GetWorkflowRunOutcome;
        typedef Aws::Utils::Outcome<GetWorkflowRunPropertiesResult, GlueError> GetWorkflowRunPropertiesOutcome;
        typedef Aws::Utils::Outcome<GetWorkflowRunsResult, GlueError> GetWorkflowRunsOutcome;
        typedef Aws::Utils::Outcome<ImportCatalogToGlueResult, GlueError> ImportCatalogToGlueOutcome;
        typedef Aws::Utils::Outcome<ListCrawlersResult, GlueError> ListCrawlersOutcome;
        typedef Aws::Utils::Outcome<ListDevEndpointsResult, GlueError> ListDevEndpointsOutcome;
        typedef Aws::Utils::Outcome<ListJobsResult, GlueError> ListJobsOutcome;
        typedef Aws::Utils::Outcome<ListMLTransformsResult, GlueError> ListMLTransformsOutcome;
        typedef Aws::Utils::Outcome<ListRegistriesResult, GlueError> ListRegistriesOutcome;
        typedef Aws::Utils::Outcome<ListSchemaVersionsResult, GlueError> ListSchemaVersionsOutcome;
        typedef Aws::Utils::Outcome<ListSchemasResult, GlueError> ListSchemasOutcome;
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
        typedef Aws::Utils::Outcome<SearchTablesResult, GlueError> SearchTablesOutcome;
        typedef Aws::Utils::Outcome<StartCrawlerResult, GlueError> StartCrawlerOutcome;
        typedef Aws::Utils::Outcome<StartCrawlerScheduleResult, GlueError> StartCrawlerScheduleOutcome;
        typedef Aws::Utils::Outcome<StartExportLabelsTaskRunResult, GlueError> StartExportLabelsTaskRunOutcome;
        typedef Aws::Utils::Outcome<StartImportLabelsTaskRunResult, GlueError> StartImportLabelsTaskRunOutcome;
        typedef Aws::Utils::Outcome<StartJobRunResult, GlueError> StartJobRunOutcome;
        typedef Aws::Utils::Outcome<StartMLEvaluationTaskRunResult, GlueError> StartMLEvaluationTaskRunOutcome;
        typedef Aws::Utils::Outcome<StartMLLabelingSetGenerationTaskRunResult, GlueError> StartMLLabelingSetGenerationTaskRunOutcome;
        typedef Aws::Utils::Outcome<StartTriggerResult, GlueError> StartTriggerOutcome;
        typedef Aws::Utils::Outcome<StartWorkflowRunResult, GlueError> StartWorkflowRunOutcome;
        typedef Aws::Utils::Outcome<StopCrawlerResult, GlueError> StopCrawlerOutcome;
        typedef Aws::Utils::Outcome<StopCrawlerScheduleResult, GlueError> StopCrawlerScheduleOutcome;
        typedef Aws::Utils::Outcome<StopTriggerResult, GlueError> StopTriggerOutcome;
        typedef Aws::Utils::Outcome<StopWorkflowRunResult, GlueError> StopWorkflowRunOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, GlueError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, GlueError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateClassifierResult, GlueError> UpdateClassifierOutcome;
        typedef Aws::Utils::Outcome<UpdateColumnStatisticsForPartitionResult, GlueError> UpdateColumnStatisticsForPartitionOutcome;
        typedef Aws::Utils::Outcome<UpdateColumnStatisticsForTableResult, GlueError> UpdateColumnStatisticsForTableOutcome;
        typedef Aws::Utils::Outcome<UpdateConnectionResult, GlueError> UpdateConnectionOutcome;
        typedef Aws::Utils::Outcome<UpdateCrawlerResult, GlueError> UpdateCrawlerOutcome;
        typedef Aws::Utils::Outcome<UpdateCrawlerScheduleResult, GlueError> UpdateCrawlerScheduleOutcome;
        typedef Aws::Utils::Outcome<UpdateDatabaseResult, GlueError> UpdateDatabaseOutcome;
        typedef Aws::Utils::Outcome<UpdateDevEndpointResult, GlueError> UpdateDevEndpointOutcome;
        typedef Aws::Utils::Outcome<UpdateJobResult, GlueError> UpdateJobOutcome;
        typedef Aws::Utils::Outcome<UpdateMLTransformResult, GlueError> UpdateMLTransformOutcome;
        typedef Aws::Utils::Outcome<UpdatePartitionResult, GlueError> UpdatePartitionOutcome;
        typedef Aws::Utils::Outcome<UpdateRegistryResult, GlueError> UpdateRegistryOutcome;
        typedef Aws::Utils::Outcome<UpdateSchemaResult, GlueError> UpdateSchemaOutcome;
        typedef Aws::Utils::Outcome<UpdateTableResult, GlueError> UpdateTableOutcome;
        typedef Aws::Utils::Outcome<UpdateTriggerResult, GlueError> UpdateTriggerOutcome;
        typedef Aws::Utils::Outcome<UpdateUserDefinedFunctionResult, GlueError> UpdateUserDefinedFunctionOutcome;
        typedef Aws::Utils::Outcome<UpdateWorkflowResult, GlueError> UpdateWorkflowOutcome;

        typedef std::future<BatchCreatePartitionOutcome> BatchCreatePartitionOutcomeCallable;
        typedef std::future<BatchDeleteConnectionOutcome> BatchDeleteConnectionOutcomeCallable;
        typedef std::future<BatchDeletePartitionOutcome> BatchDeletePartitionOutcomeCallable;
        typedef std::future<BatchDeleteTableOutcome> BatchDeleteTableOutcomeCallable;
        typedef std::future<BatchDeleteTableVersionOutcome> BatchDeleteTableVersionOutcomeCallable;
        typedef std::future<BatchGetCrawlersOutcome> BatchGetCrawlersOutcomeCallable;
        typedef std::future<BatchGetDevEndpointsOutcome> BatchGetDevEndpointsOutcomeCallable;
        typedef std::future<BatchGetJobsOutcome> BatchGetJobsOutcomeCallable;
        typedef std::future<BatchGetPartitionOutcome> BatchGetPartitionOutcomeCallable;
        typedef std::future<BatchGetTriggersOutcome> BatchGetTriggersOutcomeCallable;
        typedef std::future<BatchGetWorkflowsOutcome> BatchGetWorkflowsOutcomeCallable;
        typedef std::future<BatchStopJobRunOutcome> BatchStopJobRunOutcomeCallable;
        typedef std::future<BatchUpdatePartitionOutcome> BatchUpdatePartitionOutcomeCallable;
        typedef std::future<CancelMLTaskRunOutcome> CancelMLTaskRunOutcomeCallable;
        typedef std::future<CheckSchemaVersionValidityOutcome> CheckSchemaVersionValidityOutcomeCallable;
        typedef std::future<CreateClassifierOutcome> CreateClassifierOutcomeCallable;
        typedef std::future<CreateConnectionOutcome> CreateConnectionOutcomeCallable;
        typedef std::future<CreateCrawlerOutcome> CreateCrawlerOutcomeCallable;
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
        typedef std::future<CreateTableOutcome> CreateTableOutcomeCallable;
        typedef std::future<CreateTriggerOutcome> CreateTriggerOutcomeCallable;
        typedef std::future<CreateUserDefinedFunctionOutcome> CreateUserDefinedFunctionOutcomeCallable;
        typedef std::future<CreateWorkflowOutcome> CreateWorkflowOutcomeCallable;
        typedef std::future<DeleteClassifierOutcome> DeleteClassifierOutcomeCallable;
        typedef std::future<DeleteColumnStatisticsForPartitionOutcome> DeleteColumnStatisticsForPartitionOutcomeCallable;
        typedef std::future<DeleteColumnStatisticsForTableOutcome> DeleteColumnStatisticsForTableOutcomeCallable;
        typedef std::future<DeleteConnectionOutcome> DeleteConnectionOutcomeCallable;
        typedef std::future<DeleteCrawlerOutcome> DeleteCrawlerOutcomeCallable;
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
        typedef std::future<DeleteTableOutcome> DeleteTableOutcomeCallable;
        typedef std::future<DeleteTableVersionOutcome> DeleteTableVersionOutcomeCallable;
        typedef std::future<DeleteTriggerOutcome> DeleteTriggerOutcomeCallable;
        typedef std::future<DeleteUserDefinedFunctionOutcome> DeleteUserDefinedFunctionOutcomeCallable;
        typedef std::future<DeleteWorkflowOutcome> DeleteWorkflowOutcomeCallable;
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
        typedef std::future<GetDataCatalogEncryptionSettingsOutcome> GetDataCatalogEncryptionSettingsOutcomeCallable;
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
        typedef std::future<GetTableOutcome> GetTableOutcomeCallable;
        typedef std::future<GetTableVersionOutcome> GetTableVersionOutcomeCallable;
        typedef std::future<GetTableVersionsOutcome> GetTableVersionsOutcomeCallable;
        typedef std::future<GetTablesOutcome> GetTablesOutcomeCallable;
        typedef std::future<GetTagsOutcome> GetTagsOutcomeCallable;
        typedef std::future<GetTriggerOutcome> GetTriggerOutcomeCallable;
        typedef std::future<GetTriggersOutcome> GetTriggersOutcomeCallable;
        typedef std::future<GetUserDefinedFunctionOutcome> GetUserDefinedFunctionOutcomeCallable;
        typedef std::future<GetUserDefinedFunctionsOutcome> GetUserDefinedFunctionsOutcomeCallable;
        typedef std::future<GetWorkflowOutcome> GetWorkflowOutcomeCallable;
        typedef std::future<GetWorkflowRunOutcome> GetWorkflowRunOutcomeCallable;
        typedef std::future<GetWorkflowRunPropertiesOutcome> GetWorkflowRunPropertiesOutcomeCallable;
        typedef std::future<GetWorkflowRunsOutcome> GetWorkflowRunsOutcomeCallable;
        typedef std::future<ImportCatalogToGlueOutcome> ImportCatalogToGlueOutcomeCallable;
        typedef std::future<ListCrawlersOutcome> ListCrawlersOutcomeCallable;
        typedef std::future<ListDevEndpointsOutcome> ListDevEndpointsOutcomeCallable;
        typedef std::future<ListJobsOutcome> ListJobsOutcomeCallable;
        typedef std::future<ListMLTransformsOutcome> ListMLTransformsOutcomeCallable;
        typedef std::future<ListRegistriesOutcome> ListRegistriesOutcomeCallable;
        typedef std::future<ListSchemaVersionsOutcome> ListSchemaVersionsOutcomeCallable;
        typedef std::future<ListSchemasOutcome> ListSchemasOutcomeCallable;
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
        typedef std::future<SearchTablesOutcome> SearchTablesOutcomeCallable;
        typedef std::future<StartCrawlerOutcome> StartCrawlerOutcomeCallable;
        typedef std::future<StartCrawlerScheduleOutcome> StartCrawlerScheduleOutcomeCallable;
        typedef std::future<StartExportLabelsTaskRunOutcome> StartExportLabelsTaskRunOutcomeCallable;
        typedef std::future<StartImportLabelsTaskRunOutcome> StartImportLabelsTaskRunOutcomeCallable;
        typedef std::future<StartJobRunOutcome> StartJobRunOutcomeCallable;
        typedef std::future<StartMLEvaluationTaskRunOutcome> StartMLEvaluationTaskRunOutcomeCallable;
        typedef std::future<StartMLLabelingSetGenerationTaskRunOutcome> StartMLLabelingSetGenerationTaskRunOutcomeCallable;
        typedef std::future<StartTriggerOutcome> StartTriggerOutcomeCallable;
        typedef std::future<StartWorkflowRunOutcome> StartWorkflowRunOutcomeCallable;
        typedef std::future<StopCrawlerOutcome> StopCrawlerOutcomeCallable;
        typedef std::future<StopCrawlerScheduleOutcome> StopCrawlerScheduleOutcomeCallable;
        typedef std::future<StopTriggerOutcome> StopTriggerOutcomeCallable;
        typedef std::future<StopWorkflowRunOutcome> StopWorkflowRunOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateClassifierOutcome> UpdateClassifierOutcomeCallable;
        typedef std::future<UpdateColumnStatisticsForPartitionOutcome> UpdateColumnStatisticsForPartitionOutcomeCallable;
        typedef std::future<UpdateColumnStatisticsForTableOutcome> UpdateColumnStatisticsForTableOutcomeCallable;
        typedef std::future<UpdateConnectionOutcome> UpdateConnectionOutcomeCallable;
        typedef std::future<UpdateCrawlerOutcome> UpdateCrawlerOutcomeCallable;
        typedef std::future<UpdateCrawlerScheduleOutcome> UpdateCrawlerScheduleOutcomeCallable;
        typedef std::future<UpdateDatabaseOutcome> UpdateDatabaseOutcomeCallable;
        typedef std::future<UpdateDevEndpointOutcome> UpdateDevEndpointOutcomeCallable;
        typedef std::future<UpdateJobOutcome> UpdateJobOutcomeCallable;
        typedef std::future<UpdateMLTransformOutcome> UpdateMLTransformOutcomeCallable;
        typedef std::future<UpdatePartitionOutcome> UpdatePartitionOutcomeCallable;
        typedef std::future<UpdateRegistryOutcome> UpdateRegistryOutcomeCallable;
        typedef std::future<UpdateSchemaOutcome> UpdateSchemaOutcomeCallable;
        typedef std::future<UpdateTableOutcome> UpdateTableOutcomeCallable;
        typedef std::future<UpdateTriggerOutcome> UpdateTriggerOutcomeCallable;
        typedef std::future<UpdateUserDefinedFunctionOutcome> UpdateUserDefinedFunctionOutcomeCallable;
        typedef std::future<UpdateWorkflowOutcome> UpdateWorkflowOutcomeCallable;
} // namespace Model

  class GlueClient;

    typedef std::function<void(const GlueClient*, const Model::BatchCreatePartitionRequest&, const Model::BatchCreatePartitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchCreatePartitionResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::BatchDeleteConnectionRequest&, const Model::BatchDeleteConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDeleteConnectionResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::BatchDeletePartitionRequest&, const Model::BatchDeletePartitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDeletePartitionResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::BatchDeleteTableRequest&, const Model::BatchDeleteTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDeleteTableResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::BatchDeleteTableVersionRequest&, const Model::BatchDeleteTableVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDeleteTableVersionResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::BatchGetCrawlersRequest&, const Model::BatchGetCrawlersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetCrawlersResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::BatchGetDevEndpointsRequest&, const Model::BatchGetDevEndpointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetDevEndpointsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::BatchGetJobsRequest&, const Model::BatchGetJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetJobsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::BatchGetPartitionRequest&, const Model::BatchGetPartitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetPartitionResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::BatchGetTriggersRequest&, const Model::BatchGetTriggersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetTriggersResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::BatchGetWorkflowsRequest&, const Model::BatchGetWorkflowsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetWorkflowsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::BatchStopJobRunRequest&, const Model::BatchStopJobRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchStopJobRunResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::BatchUpdatePartitionRequest&, const Model::BatchUpdatePartitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchUpdatePartitionResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::CancelMLTaskRunRequest&, const Model::CancelMLTaskRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelMLTaskRunResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::CheckSchemaVersionValidityRequest&, const Model::CheckSchemaVersionValidityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CheckSchemaVersionValidityResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::CreateClassifierRequest&, const Model::CreateClassifierOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateClassifierResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::CreateConnectionRequest&, const Model::CreateConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConnectionResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::CreateCrawlerRequest&, const Model::CreateCrawlerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCrawlerResponseReceivedHandler;
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
    typedef std::function<void(const GlueClient*, const Model::CreateTableRequest&, const Model::CreateTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTableResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::CreateTriggerRequest&, const Model::CreateTriggerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTriggerResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::CreateUserDefinedFunctionRequest&, const Model::CreateUserDefinedFunctionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateUserDefinedFunctionResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::CreateWorkflowRequest&, const Model::CreateWorkflowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateWorkflowResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::DeleteClassifierRequest&, const Model::DeleteClassifierOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteClassifierResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::DeleteColumnStatisticsForPartitionRequest&, const Model::DeleteColumnStatisticsForPartitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteColumnStatisticsForPartitionResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::DeleteColumnStatisticsForTableRequest&, const Model::DeleteColumnStatisticsForTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteColumnStatisticsForTableResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::DeleteConnectionRequest&, const Model::DeleteConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConnectionResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::DeleteCrawlerRequest&, const Model::DeleteCrawlerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCrawlerResponseReceivedHandler;
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
    typedef std::function<void(const GlueClient*, const Model::DeleteTableRequest&, const Model::DeleteTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTableResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::DeleteTableVersionRequest&, const Model::DeleteTableVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTableVersionResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::DeleteTriggerRequest&, const Model::DeleteTriggerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTriggerResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::DeleteUserDefinedFunctionRequest&, const Model::DeleteUserDefinedFunctionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUserDefinedFunctionResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::DeleteWorkflowRequest&, const Model::DeleteWorkflowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteWorkflowResponseReceivedHandler;
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
    typedef std::function<void(const GlueClient*, const Model::GetDataCatalogEncryptionSettingsRequest&, const Model::GetDataCatalogEncryptionSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDataCatalogEncryptionSettingsResponseReceivedHandler;
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
    typedef std::function<void(const GlueClient*, const Model::GetTableRequest&, const Model::GetTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTableResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetTableVersionRequest&, const Model::GetTableVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTableVersionResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetTableVersionsRequest&, const Model::GetTableVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTableVersionsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetTablesRequest&, const Model::GetTablesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTablesResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetTagsRequest&, const Model::GetTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTagsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetTriggerRequest&, const Model::GetTriggerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTriggerResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetTriggersRequest&, const Model::GetTriggersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTriggersResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetUserDefinedFunctionRequest&, const Model::GetUserDefinedFunctionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUserDefinedFunctionResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetUserDefinedFunctionsRequest&, const Model::GetUserDefinedFunctionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUserDefinedFunctionsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetWorkflowRequest&, const Model::GetWorkflowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetWorkflowResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetWorkflowRunRequest&, const Model::GetWorkflowRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetWorkflowRunResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetWorkflowRunPropertiesRequest&, const Model::GetWorkflowRunPropertiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetWorkflowRunPropertiesResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetWorkflowRunsRequest&, const Model::GetWorkflowRunsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetWorkflowRunsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::ImportCatalogToGlueRequest&, const Model::ImportCatalogToGlueOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportCatalogToGlueResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::ListCrawlersRequest&, const Model::ListCrawlersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCrawlersResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::ListDevEndpointsRequest&, const Model::ListDevEndpointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDevEndpointsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::ListJobsRequest&, const Model::ListJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListJobsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::ListMLTransformsRequest&, const Model::ListMLTransformsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMLTransformsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::ListRegistriesRequest&, const Model::ListRegistriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRegistriesResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::ListSchemaVersionsRequest&, const Model::ListSchemaVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSchemaVersionsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::ListSchemasRequest&, const Model::ListSchemasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSchemasResponseReceivedHandler;
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
    typedef std::function<void(const GlueClient*, const Model::SearchTablesRequest&, const Model::SearchTablesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchTablesResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::StartCrawlerRequest&, const Model::StartCrawlerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartCrawlerResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::StartCrawlerScheduleRequest&, const Model::StartCrawlerScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartCrawlerScheduleResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::StartExportLabelsTaskRunRequest&, const Model::StartExportLabelsTaskRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartExportLabelsTaskRunResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::StartImportLabelsTaskRunRequest&, const Model::StartImportLabelsTaskRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartImportLabelsTaskRunResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::StartJobRunRequest&, const Model::StartJobRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartJobRunResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::StartMLEvaluationTaskRunRequest&, const Model::StartMLEvaluationTaskRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartMLEvaluationTaskRunResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::StartMLLabelingSetGenerationTaskRunRequest&, const Model::StartMLLabelingSetGenerationTaskRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartMLLabelingSetGenerationTaskRunResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::StartTriggerRequest&, const Model::StartTriggerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartTriggerResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::StartWorkflowRunRequest&, const Model::StartWorkflowRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartWorkflowRunResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::StopCrawlerRequest&, const Model::StopCrawlerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopCrawlerResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::StopCrawlerScheduleRequest&, const Model::StopCrawlerScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopCrawlerScheduleResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::StopTriggerRequest&, const Model::StopTriggerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopTriggerResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::StopWorkflowRunRequest&, const Model::StopWorkflowRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopWorkflowRunResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::UpdateClassifierRequest&, const Model::UpdateClassifierOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateClassifierResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::UpdateColumnStatisticsForPartitionRequest&, const Model::UpdateColumnStatisticsForPartitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateColumnStatisticsForPartitionResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::UpdateColumnStatisticsForTableRequest&, const Model::UpdateColumnStatisticsForTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateColumnStatisticsForTableResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::UpdateConnectionRequest&, const Model::UpdateConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateConnectionResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::UpdateCrawlerRequest&, const Model::UpdateCrawlerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCrawlerResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::UpdateCrawlerScheduleRequest&, const Model::UpdateCrawlerScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCrawlerScheduleResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::UpdateDatabaseRequest&, const Model::UpdateDatabaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDatabaseResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::UpdateDevEndpointRequest&, const Model::UpdateDevEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDevEndpointResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::UpdateJobRequest&, const Model::UpdateJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateJobResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::UpdateMLTransformRequest&, const Model::UpdateMLTransformOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMLTransformResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::UpdatePartitionRequest&, const Model::UpdatePartitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePartitionResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::UpdateRegistryRequest&, const Model::UpdateRegistryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRegistryResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::UpdateSchemaRequest&, const Model::UpdateSchemaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSchemaResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::UpdateTableRequest&, const Model::UpdateTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTableResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::UpdateTriggerRequest&, const Model::UpdateTriggerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTriggerResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::UpdateUserDefinedFunctionRequest&, const Model::UpdateUserDefinedFunctionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserDefinedFunctionResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::UpdateWorkflowRequest&, const Model::UpdateWorkflowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateWorkflowResponseReceivedHandler;

  /**
   * <fullname>AWS Glue</fullname> <p>Defines the public endpoint for the AWS Glue
   * service.</p>
   */
  class AWS_GLUE_API GlueClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GlueClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GlueClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        GlueClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~GlueClient();


        /**
         * <p>Creates one or more partitions in a batch operation.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BatchCreatePartition">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchCreatePartitionOutcome BatchCreatePartition(const Model::BatchCreatePartitionRequest& request) const;

        /**
         * <p>Creates one or more partitions in a batch operation.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BatchCreatePartition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchCreatePartitionOutcomeCallable BatchCreatePartitionCallable(const Model::BatchCreatePartitionRequest& request) const;

        /**
         * <p>Creates one or more partitions in a batch operation.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BatchCreatePartition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchCreatePartitionAsync(const Model::BatchCreatePartitionRequest& request, const BatchCreatePartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a list of connection definitions from the Data Catalog.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BatchDeleteConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDeleteConnectionOutcome BatchDeleteConnection(const Model::BatchDeleteConnectionRequest& request) const;

        /**
         * <p>Deletes a list of connection definitions from the Data Catalog.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BatchDeleteConnection">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchDeleteConnectionOutcomeCallable BatchDeleteConnectionCallable(const Model::BatchDeleteConnectionRequest& request) const;

        /**
         * <p>Deletes a list of connection definitions from the Data Catalog.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BatchDeleteConnection">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchDeleteConnectionAsync(const Model::BatchDeleteConnectionRequest& request, const BatchDeleteConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes one or more partitions in a batch operation.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BatchDeletePartition">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDeletePartitionOutcome BatchDeletePartition(const Model::BatchDeletePartitionRequest& request) const;

        /**
         * <p>Deletes one or more partitions in a batch operation.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BatchDeletePartition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchDeletePartitionOutcomeCallable BatchDeletePartitionCallable(const Model::BatchDeletePartitionRequest& request) const;

        /**
         * <p>Deletes one or more partitions in a batch operation.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BatchDeletePartition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchDeletePartitionAsync(const Model::BatchDeletePartitionRequest& request, const BatchDeletePartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes multiple tables at once.</p>  <p>After completing this
         * operation, you no longer have access to the table versions and partitions that
         * belong to the deleted table. AWS Glue deletes these "orphaned" resources
         * asynchronously in a timely manner, at the discretion of the service.</p> <p>To
         * ensure the immediate deletion of all related resources, before calling
         * <code>BatchDeleteTable</code>, use <code>DeleteTableVersion</code> or
         * <code>BatchDeleteTableVersion</code>, and <code>DeletePartition</code> or
         * <code>BatchDeletePartition</code>, to delete any resources that belong to the
         * table.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BatchDeleteTable">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDeleteTableOutcome BatchDeleteTable(const Model::BatchDeleteTableRequest& request) const;

        /**
         * <p>Deletes multiple tables at once.</p>  <p>After completing this
         * operation, you no longer have access to the table versions and partitions that
         * belong to the deleted table. AWS Glue deletes these "orphaned" resources
         * asynchronously in a timely manner, at the discretion of the service.</p> <p>To
         * ensure the immediate deletion of all related resources, before calling
         * <code>BatchDeleteTable</code>, use <code>DeleteTableVersion</code> or
         * <code>BatchDeleteTableVersion</code>, and <code>DeletePartition</code> or
         * <code>BatchDeletePartition</code>, to delete any resources that belong to the
         * table.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BatchDeleteTable">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchDeleteTableOutcomeCallable BatchDeleteTableCallable(const Model::BatchDeleteTableRequest& request) const;

        /**
         * <p>Deletes multiple tables at once.</p>  <p>After completing this
         * operation, you no longer have access to the table versions and partitions that
         * belong to the deleted table. AWS Glue deletes these "orphaned" resources
         * asynchronously in a timely manner, at the discretion of the service.</p> <p>To
         * ensure the immediate deletion of all related resources, before calling
         * <code>BatchDeleteTable</code>, use <code>DeleteTableVersion</code> or
         * <code>BatchDeleteTableVersion</code>, and <code>DeletePartition</code> or
         * <code>BatchDeletePartition</code>, to delete any resources that belong to the
         * table.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BatchDeleteTable">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchDeleteTableAsync(const Model::BatchDeleteTableRequest& request, const BatchDeleteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a specified batch of versions of a table.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BatchDeleteTableVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDeleteTableVersionOutcome BatchDeleteTableVersion(const Model::BatchDeleteTableVersionRequest& request) const;

        /**
         * <p>Deletes a specified batch of versions of a table.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BatchDeleteTableVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchDeleteTableVersionOutcomeCallable BatchDeleteTableVersionCallable(const Model::BatchDeleteTableVersionRequest& request) const;

        /**
         * <p>Deletes a specified batch of versions of a table.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BatchDeleteTableVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchDeleteTableVersionAsync(const Model::BatchDeleteTableVersionRequest& request, const BatchDeleteTableVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of resource metadata for a given list of crawler names. After
         * calling the <code>ListCrawlers</code> operation, you can call this operation to
         * access the data to which you have been granted permissions. This operation
         * supports all IAM permissions, including permission conditions that uses
         * tags.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BatchGetCrawlers">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetCrawlersOutcome BatchGetCrawlers(const Model::BatchGetCrawlersRequest& request) const;

        /**
         * <p>Returns a list of resource metadata for a given list of crawler names. After
         * calling the <code>ListCrawlers</code> operation, you can call this operation to
         * access the data to which you have been granted permissions. This operation
         * supports all IAM permissions, including permission conditions that uses
         * tags.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BatchGetCrawlers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetCrawlersOutcomeCallable BatchGetCrawlersCallable(const Model::BatchGetCrawlersRequest& request) const;

        /**
         * <p>Returns a list of resource metadata for a given list of crawler names. After
         * calling the <code>ListCrawlers</code> operation, you can call this operation to
         * access the data to which you have been granted permissions. This operation
         * supports all IAM permissions, including permission conditions that uses
         * tags.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BatchGetCrawlers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetCrawlersAsync(const Model::BatchGetCrawlersRequest& request, const BatchGetCrawlersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of resource metadata for a given list of development endpoint
         * names. After calling the <code>ListDevEndpoints</code> operation, you can call
         * this operation to access the data to which you have been granted permissions.
         * This operation supports all IAM permissions, including permission conditions
         * that uses tags.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BatchGetDevEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetDevEndpointsOutcome BatchGetDevEndpoints(const Model::BatchGetDevEndpointsRequest& request) const;

        /**
         * <p>Returns a list of resource metadata for a given list of development endpoint
         * names. After calling the <code>ListDevEndpoints</code> operation, you can call
         * this operation to access the data to which you have been granted permissions.
         * This operation supports all IAM permissions, including permission conditions
         * that uses tags.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BatchGetDevEndpoints">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetDevEndpointsOutcomeCallable BatchGetDevEndpointsCallable(const Model::BatchGetDevEndpointsRequest& request) const;

        /**
         * <p>Returns a list of resource metadata for a given list of development endpoint
         * names. After calling the <code>ListDevEndpoints</code> operation, you can call
         * this operation to access the data to which you have been granted permissions.
         * This operation supports all IAM permissions, including permission conditions
         * that uses tags.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BatchGetDevEndpoints">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetDevEndpointsAsync(const Model::BatchGetDevEndpointsRequest& request, const BatchGetDevEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of resource metadata for a given list of job names. After
         * calling the <code>ListJobs</code> operation, you can call this operation to
         * access the data to which you have been granted permissions. This operation
         * supports all IAM permissions, including permission conditions that uses tags.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BatchGetJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetJobsOutcome BatchGetJobs(const Model::BatchGetJobsRequest& request) const;

        /**
         * <p>Returns a list of resource metadata for a given list of job names. After
         * calling the <code>ListJobs</code> operation, you can call this operation to
         * access the data to which you have been granted permissions. This operation
         * supports all IAM permissions, including permission conditions that uses tags.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BatchGetJobs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetJobsOutcomeCallable BatchGetJobsCallable(const Model::BatchGetJobsRequest& request) const;

        /**
         * <p>Returns a list of resource metadata for a given list of job names. After
         * calling the <code>ListJobs</code> operation, you can call this operation to
         * access the data to which you have been granted permissions. This operation
         * supports all IAM permissions, including permission conditions that uses tags.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BatchGetJobs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetJobsAsync(const Model::BatchGetJobsRequest& request, const BatchGetJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves partitions in a batch request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BatchGetPartition">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetPartitionOutcome BatchGetPartition(const Model::BatchGetPartitionRequest& request) const;

        /**
         * <p>Retrieves partitions in a batch request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BatchGetPartition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetPartitionOutcomeCallable BatchGetPartitionCallable(const Model::BatchGetPartitionRequest& request) const;

        /**
         * <p>Retrieves partitions in a batch request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BatchGetPartition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetPartitionAsync(const Model::BatchGetPartitionRequest& request, const BatchGetPartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of resource metadata for a given list of trigger names. After
         * calling the <code>ListTriggers</code> operation, you can call this operation to
         * access the data to which you have been granted permissions. This operation
         * supports all IAM permissions, including permission conditions that uses
         * tags.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BatchGetTriggers">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetTriggersOutcome BatchGetTriggers(const Model::BatchGetTriggersRequest& request) const;

        /**
         * <p>Returns a list of resource metadata for a given list of trigger names. After
         * calling the <code>ListTriggers</code> operation, you can call this operation to
         * access the data to which you have been granted permissions. This operation
         * supports all IAM permissions, including permission conditions that uses
         * tags.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BatchGetTriggers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetTriggersOutcomeCallable BatchGetTriggersCallable(const Model::BatchGetTriggersRequest& request) const;

        /**
         * <p>Returns a list of resource metadata for a given list of trigger names. After
         * calling the <code>ListTriggers</code> operation, you can call this operation to
         * access the data to which you have been granted permissions. This operation
         * supports all IAM permissions, including permission conditions that uses
         * tags.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BatchGetTriggers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetTriggersAsync(const Model::BatchGetTriggersRequest& request, const BatchGetTriggersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of resource metadata for a given list of workflow names. After
         * calling the <code>ListWorkflows</code> operation, you can call this operation to
         * access the data to which you have been granted permissions. This operation
         * supports all IAM permissions, including permission conditions that uses
         * tags.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BatchGetWorkflows">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetWorkflowsOutcome BatchGetWorkflows(const Model::BatchGetWorkflowsRequest& request) const;

        /**
         * <p>Returns a list of resource metadata for a given list of workflow names. After
         * calling the <code>ListWorkflows</code> operation, you can call this operation to
         * access the data to which you have been granted permissions. This operation
         * supports all IAM permissions, including permission conditions that uses
         * tags.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BatchGetWorkflows">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetWorkflowsOutcomeCallable BatchGetWorkflowsCallable(const Model::BatchGetWorkflowsRequest& request) const;

        /**
         * <p>Returns a list of resource metadata for a given list of workflow names. After
         * calling the <code>ListWorkflows</code> operation, you can call this operation to
         * access the data to which you have been granted permissions. This operation
         * supports all IAM permissions, including permission conditions that uses
         * tags.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BatchGetWorkflows">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetWorkflowsAsync(const Model::BatchGetWorkflowsRequest& request, const BatchGetWorkflowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops one or more job runs for a specified job definition.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BatchStopJobRun">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchStopJobRunOutcome BatchStopJobRun(const Model::BatchStopJobRunRequest& request) const;

        /**
         * <p>Stops one or more job runs for a specified job definition.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BatchStopJobRun">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchStopJobRunOutcomeCallable BatchStopJobRunCallable(const Model::BatchStopJobRunRequest& request) const;

        /**
         * <p>Stops one or more job runs for a specified job definition.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BatchStopJobRun">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchStopJobRunAsync(const Model::BatchStopJobRunRequest& request, const BatchStopJobRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates one or more partitions in a batch operation.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BatchUpdatePartition">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchUpdatePartitionOutcome BatchUpdatePartition(const Model::BatchUpdatePartitionRequest& request) const;

        /**
         * <p>Updates one or more partitions in a batch operation.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BatchUpdatePartition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchUpdatePartitionOutcomeCallable BatchUpdatePartitionCallable(const Model::BatchUpdatePartitionRequest& request) const;

        /**
         * <p>Updates one or more partitions in a batch operation.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BatchUpdatePartition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchUpdatePartitionAsync(const Model::BatchUpdatePartitionRequest& request, const BatchUpdatePartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels (stops) a task run. Machine learning task runs are asynchronous tasks
         * that AWS Glue runs on your behalf as part of various machine learning workflows.
         * You can cancel a machine learning task run at any time by calling
         * <code>CancelMLTaskRun</code> with a task run's parent transform's
         * <code>TransformID</code> and the task run's <code>TaskRunId</code>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CancelMLTaskRun">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelMLTaskRunOutcome CancelMLTaskRun(const Model::CancelMLTaskRunRequest& request) const;

        /**
         * <p>Cancels (stops) a task run. Machine learning task runs are asynchronous tasks
         * that AWS Glue runs on your behalf as part of various machine learning workflows.
         * You can cancel a machine learning task run at any time by calling
         * <code>CancelMLTaskRun</code> with a task run's parent transform's
         * <code>TransformID</code> and the task run's <code>TaskRunId</code>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CancelMLTaskRun">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelMLTaskRunOutcomeCallable CancelMLTaskRunCallable(const Model::CancelMLTaskRunRequest& request) const;

        /**
         * <p>Cancels (stops) a task run. Machine learning task runs are asynchronous tasks
         * that AWS Glue runs on your behalf as part of various machine learning workflows.
         * You can cancel a machine learning task run at any time by calling
         * <code>CancelMLTaskRun</code> with a task run's parent transform's
         * <code>TransformID</code> and the task run's <code>TaskRunId</code>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CancelMLTaskRun">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelMLTaskRunAsync(const Model::CancelMLTaskRunRequest& request, const CancelMLTaskRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Validates the supplied schema. This call has no side effects, it simply
         * validates using the supplied schema using <code>DataFormat</code> as the format.
         * Since it does not take a schema set name, no compatibility checks are
         * performed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CheckSchemaVersionValidity">AWS
         * API Reference</a></p>
         */
        virtual Model::CheckSchemaVersionValidityOutcome CheckSchemaVersionValidity(const Model::CheckSchemaVersionValidityRequest& request) const;

        /**
         * <p>Validates the supplied schema. This call has no side effects, it simply
         * validates using the supplied schema using <code>DataFormat</code> as the format.
         * Since it does not take a schema set name, no compatibility checks are
         * performed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CheckSchemaVersionValidity">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CheckSchemaVersionValidityOutcomeCallable CheckSchemaVersionValidityCallable(const Model::CheckSchemaVersionValidityRequest& request) const;

        /**
         * <p>Validates the supplied schema. This call has no side effects, it simply
         * validates using the supplied schema using <code>DataFormat</code> as the format.
         * Since it does not take a schema set name, no compatibility checks are
         * performed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CheckSchemaVersionValidity">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CheckSchemaVersionValidityAsync(const Model::CheckSchemaVersionValidityRequest& request, const CheckSchemaVersionValidityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a classifier in the user's account. This can be a
         * <code>GrokClassifier</code>, an <code>XMLClassifier</code>, a
         * <code>JsonClassifier</code>, or a <code>CsvClassifier</code>, depending on which
         * field of the request is present.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateClassifier">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateClassifierOutcome CreateClassifier(const Model::CreateClassifierRequest& request) const;

        /**
         * <p>Creates a classifier in the user's account. This can be a
         * <code>GrokClassifier</code>, an <code>XMLClassifier</code>, a
         * <code>JsonClassifier</code>, or a <code>CsvClassifier</code>, depending on which
         * field of the request is present.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateClassifier">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateClassifierOutcomeCallable CreateClassifierCallable(const Model::CreateClassifierRequest& request) const;

        /**
         * <p>Creates a classifier in the user's account. This can be a
         * <code>GrokClassifier</code>, an <code>XMLClassifier</code>, a
         * <code>JsonClassifier</code>, or a <code>CsvClassifier</code>, depending on which
         * field of the request is present.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateClassifier">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateClassifierAsync(const Model::CreateClassifierRequest& request, const CreateClassifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a connection definition in the Data Catalog.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConnectionOutcome CreateConnection(const Model::CreateConnectionRequest& request) const;

        /**
         * <p>Creates a connection definition in the Data Catalog.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateConnection">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateConnectionOutcomeCallable CreateConnectionCallable(const Model::CreateConnectionRequest& request) const;

        /**
         * <p>Creates a connection definition in the Data Catalog.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateConnection">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateConnectionAsync(const Model::CreateConnectionRequest& request, const CreateConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new crawler with specified targets, role, configuration, and
         * optional schedule. At least one crawl target must be specified, in the
         * <code>s3Targets</code> field, the <code>jdbcTargets</code> field, or the
         * <code>DynamoDBTargets</code> field.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateCrawler">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCrawlerOutcome CreateCrawler(const Model::CreateCrawlerRequest& request) const;

        /**
         * <p>Creates a new crawler with specified targets, role, configuration, and
         * optional schedule. At least one crawl target must be specified, in the
         * <code>s3Targets</code> field, the <code>jdbcTargets</code> field, or the
         * <code>DynamoDBTargets</code> field.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateCrawler">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCrawlerOutcomeCallable CreateCrawlerCallable(const Model::CreateCrawlerRequest& request) const;

        /**
         * <p>Creates a new crawler with specified targets, role, configuration, and
         * optional schedule. At least one crawl target must be specified, in the
         * <code>s3Targets</code> field, the <code>jdbcTargets</code> field, or the
         * <code>DynamoDBTargets</code> field.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateCrawler">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCrawlerAsync(const Model::CreateCrawlerRequest& request, const CreateCrawlerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new database in a Data Catalog.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateDatabase">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDatabaseOutcome CreateDatabase(const Model::CreateDatabaseRequest& request) const;

        /**
         * <p>Creates a new database in a Data Catalog.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateDatabase">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDatabaseOutcomeCallable CreateDatabaseCallable(const Model::CreateDatabaseRequest& request) const;

        /**
         * <p>Creates a new database in a Data Catalog.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateDatabase">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDatabaseAsync(const Model::CreateDatabaseRequest& request, const CreateDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new development endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateDevEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDevEndpointOutcome CreateDevEndpoint(const Model::CreateDevEndpointRequest& request) const;

        /**
         * <p>Creates a new development endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateDevEndpoint">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDevEndpointOutcomeCallable CreateDevEndpointCallable(const Model::CreateDevEndpointRequest& request) const;

        /**
         * <p>Creates a new development endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateDevEndpoint">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDevEndpointAsync(const Model::CreateDevEndpointRequest& request, const CreateDevEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new job definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateJob">AWS API
         * Reference</a></p>
         */
        virtual Model::CreateJobOutcome CreateJob(const Model::CreateJobRequest& request) const;

        /**
         * <p>Creates a new job definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateJob">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateJobOutcomeCallable CreateJobCallable(const Model::CreateJobRequest& request) const;

        /**
         * <p>Creates a new job definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateJob">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateJobAsync(const Model::CreateJobRequest& request, const CreateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an AWS Glue machine learning transform. This operation creates the
         * transform and all the necessary parameters to train it.</p> <p>Call this
         * operation as the first step in the process of using a machine learning transform
         * (such as the <code>FindMatches</code> transform) for deduplicating data. You can
         * provide an optional <code>Description</code>, in addition to the parameters that
         * you want to use for your algorithm.</p> <p>You must also specify certain
         * parameters for the tasks that AWS Glue runs on your behalf as part of learning
         * from your data and creating a high-quality machine learning transform. These
         * parameters include <code>Role</code>, and optionally,
         * <code>AllocatedCapacity</code>, <code>Timeout</code>, and
         * <code>MaxRetries</code>. For more information, see <a
         * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-api-jobs-job.html">Jobs</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateMLTransform">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMLTransformOutcome CreateMLTransform(const Model::CreateMLTransformRequest& request) const;

        /**
         * <p>Creates an AWS Glue machine learning transform. This operation creates the
         * transform and all the necessary parameters to train it.</p> <p>Call this
         * operation as the first step in the process of using a machine learning transform
         * (such as the <code>FindMatches</code> transform) for deduplicating data. You can
         * provide an optional <code>Description</code>, in addition to the parameters that
         * you want to use for your algorithm.</p> <p>You must also specify certain
         * parameters for the tasks that AWS Glue runs on your behalf as part of learning
         * from your data and creating a high-quality machine learning transform. These
         * parameters include <code>Role</code>, and optionally,
         * <code>AllocatedCapacity</code>, <code>Timeout</code>, and
         * <code>MaxRetries</code>. For more information, see <a
         * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-api-jobs-job.html">Jobs</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateMLTransform">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateMLTransformOutcomeCallable CreateMLTransformCallable(const Model::CreateMLTransformRequest& request) const;

        /**
         * <p>Creates an AWS Glue machine learning transform. This operation creates the
         * transform and all the necessary parameters to train it.</p> <p>Call this
         * operation as the first step in the process of using a machine learning transform
         * (such as the <code>FindMatches</code> transform) for deduplicating data. You can
         * provide an optional <code>Description</code>, in addition to the parameters that
         * you want to use for your algorithm.</p> <p>You must also specify certain
         * parameters for the tasks that AWS Glue runs on your behalf as part of learning
         * from your data and creating a high-quality machine learning transform. These
         * parameters include <code>Role</code>, and optionally,
         * <code>AllocatedCapacity</code>, <code>Timeout</code>, and
         * <code>MaxRetries</code>. For more information, see <a
         * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-api-jobs-job.html">Jobs</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateMLTransform">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateMLTransformAsync(const Model::CreateMLTransformRequest& request, const CreateMLTransformResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new partition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreatePartition">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePartitionOutcome CreatePartition(const Model::CreatePartitionRequest& request) const;

        /**
         * <p>Creates a new partition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreatePartition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePartitionOutcomeCallable CreatePartitionCallable(const Model::CreatePartitionRequest& request) const;

        /**
         * <p>Creates a new partition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreatePartition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePartitionAsync(const Model::CreatePartitionRequest& request, const CreatePartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a specified partition index in an existing table.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreatePartitionIndex">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePartitionIndexOutcome CreatePartitionIndex(const Model::CreatePartitionIndexRequest& request) const;

        /**
         * <p>Creates a specified partition index in an existing table.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreatePartitionIndex">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePartitionIndexOutcomeCallable CreatePartitionIndexCallable(const Model::CreatePartitionIndexRequest& request) const;

        /**
         * <p>Creates a specified partition index in an existing table.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreatePartitionIndex">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePartitionIndexAsync(const Model::CreatePartitionIndexRequest& request, const CreatePartitionIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new registry which may be used to hold a collection of
         * schemas.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateRegistry">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRegistryOutcome CreateRegistry(const Model::CreateRegistryRequest& request) const;

        /**
         * <p>Creates a new registry which may be used to hold a collection of
         * schemas.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateRegistry">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRegistryOutcomeCallable CreateRegistryCallable(const Model::CreateRegistryRequest& request) const;

        /**
         * <p>Creates a new registry which may be used to hold a collection of
         * schemas.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateRegistry">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRegistryAsync(const Model::CreateRegistryRequest& request, const CreateRegistryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new schema set and registers the schema definition. Returns an
         * error if the schema set already exists without actually registering the
         * version.</p> <p>When the schema set is created, a version checkpoint will be set
         * to the first version. Compatibility mode "DISABLED" restricts any additional
         * schema versions from being added after the first schema version. For all other
         * compatibility modes, validation of compatibility settings will be applied only
         * from the second version onwards when the <code>RegisterSchemaVersion</code> API
         * is used.</p> <p>When this API is called without a <code>RegistryId</code>, this
         * will create an entry for a "default-registry" in the registry database tables,
         * if it is not already present.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateSchema">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSchemaOutcome CreateSchema(const Model::CreateSchemaRequest& request) const;

        /**
         * <p>Creates a new schema set and registers the schema definition. Returns an
         * error if the schema set already exists without actually registering the
         * version.</p> <p>When the schema set is created, a version checkpoint will be set
         * to the first version. Compatibility mode "DISABLED" restricts any additional
         * schema versions from being added after the first schema version. For all other
         * compatibility modes, validation of compatibility settings will be applied only
         * from the second version onwards when the <code>RegisterSchemaVersion</code> API
         * is used.</p> <p>When this API is called without a <code>RegistryId</code>, this
         * will create an entry for a "default-registry" in the registry database tables,
         * if it is not already present.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateSchema">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSchemaOutcomeCallable CreateSchemaCallable(const Model::CreateSchemaRequest& request) const;

        /**
         * <p>Creates a new schema set and registers the schema definition. Returns an
         * error if the schema set already exists without actually registering the
         * version.</p> <p>When the schema set is created, a version checkpoint will be set
         * to the first version. Compatibility mode "DISABLED" restricts any additional
         * schema versions from being added after the first schema version. For all other
         * compatibility modes, validation of compatibility settings will be applied only
         * from the second version onwards when the <code>RegisterSchemaVersion</code> API
         * is used.</p> <p>When this API is called without a <code>RegistryId</code>, this
         * will create an entry for a "default-registry" in the registry database tables,
         * if it is not already present.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateSchema">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSchemaAsync(const Model::CreateSchemaRequest& request, const CreateSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Transforms a directed acyclic graph (DAG) into code.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateScript">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateScriptOutcome CreateScript(const Model::CreateScriptRequest& request) const;

        /**
         * <p>Transforms a directed acyclic graph (DAG) into code.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateScript">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateScriptOutcomeCallable CreateScriptCallable(const Model::CreateScriptRequest& request) const;

        /**
         * <p>Transforms a directed acyclic graph (DAG) into code.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateScript">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateScriptAsync(const Model::CreateScriptRequest& request, const CreateScriptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new security configuration. A security configuration is a set of
         * security properties that can be used by AWS Glue. You can use a security
         * configuration to encrypt data at rest. For information about using security
         * configurations in AWS Glue, see <a
         * href="https://docs.aws.amazon.com/glue/latest/dg/encryption-security-configuration.html">Encrypting
         * Data Written by Crawlers, Jobs, and Development Endpoints</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateSecurityConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSecurityConfigurationOutcome CreateSecurityConfiguration(const Model::CreateSecurityConfigurationRequest& request) const;

        /**
         * <p>Creates a new security configuration. A security configuration is a set of
         * security properties that can be used by AWS Glue. You can use a security
         * configuration to encrypt data at rest. For information about using security
         * configurations in AWS Glue, see <a
         * href="https://docs.aws.amazon.com/glue/latest/dg/encryption-security-configuration.html">Encrypting
         * Data Written by Crawlers, Jobs, and Development Endpoints</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateSecurityConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSecurityConfigurationOutcomeCallable CreateSecurityConfigurationCallable(const Model::CreateSecurityConfigurationRequest& request) const;

        /**
         * <p>Creates a new security configuration. A security configuration is a set of
         * security properties that can be used by AWS Glue. You can use a security
         * configuration to encrypt data at rest. For information about using security
         * configurations in AWS Glue, see <a
         * href="https://docs.aws.amazon.com/glue/latest/dg/encryption-security-configuration.html">Encrypting
         * Data Written by Crawlers, Jobs, and Development Endpoints</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateSecurityConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSecurityConfigurationAsync(const Model::CreateSecurityConfigurationRequest& request, const CreateSecurityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new table definition in the Data Catalog.</p><p><h3>See Also:</h3> 
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateTable">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTableOutcome CreateTable(const Model::CreateTableRequest& request) const;

        /**
         * <p>Creates a new table definition in the Data Catalog.</p><p><h3>See Also:</h3> 
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateTable">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTableOutcomeCallable CreateTableCallable(const Model::CreateTableRequest& request) const;

        /**
         * <p>Creates a new table definition in the Data Catalog.</p><p><h3>See Also:</h3> 
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateTable">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTableAsync(const Model::CreateTableRequest& request, const CreateTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new trigger.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateTrigger">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTriggerOutcome CreateTrigger(const Model::CreateTriggerRequest& request) const;

        /**
         * <p>Creates a new trigger.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateTrigger">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTriggerOutcomeCallable CreateTriggerCallable(const Model::CreateTriggerRequest& request) const;

        /**
         * <p>Creates a new trigger.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateTrigger">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTriggerAsync(const Model::CreateTriggerRequest& request, const CreateTriggerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new function definition in the Data Catalog.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateUserDefinedFunction">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUserDefinedFunctionOutcome CreateUserDefinedFunction(const Model::CreateUserDefinedFunctionRequest& request) const;

        /**
         * <p>Creates a new function definition in the Data Catalog.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateUserDefinedFunction">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateUserDefinedFunctionOutcomeCallable CreateUserDefinedFunctionCallable(const Model::CreateUserDefinedFunctionRequest& request) const;

        /**
         * <p>Creates a new function definition in the Data Catalog.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateUserDefinedFunction">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateUserDefinedFunctionAsync(const Model::CreateUserDefinedFunctionRequest& request, const CreateUserDefinedFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateWorkflow">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorkflowOutcome CreateWorkflow(const Model::CreateWorkflowRequest& request) const;

        /**
         * <p>Creates a new workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateWorkflow">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateWorkflowOutcomeCallable CreateWorkflowCallable(const Model::CreateWorkflowRequest& request) const;

        /**
         * <p>Creates a new workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateWorkflow">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateWorkflowAsync(const Model::CreateWorkflowRequest& request, const CreateWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a classifier from the Data Catalog.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteClassifier">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteClassifierOutcome DeleteClassifier(const Model::DeleteClassifierRequest& request) const;

        /**
         * <p>Removes a classifier from the Data Catalog.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteClassifier">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteClassifierOutcomeCallable DeleteClassifierCallable(const Model::DeleteClassifierRequest& request) const;

        /**
         * <p>Removes a classifier from the Data Catalog.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteClassifier">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteClassifierAsync(const Model::DeleteClassifierRequest& request, const DeleteClassifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete the partition column statistics of a column.</p> <p>The Identity and
         * Access Management (IAM) permission required for this operation is
         * <code>DeletePartition</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteColumnStatisticsForPartition">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteColumnStatisticsForPartitionOutcome DeleteColumnStatisticsForPartition(const Model::DeleteColumnStatisticsForPartitionRequest& request) const;

        /**
         * <p>Delete the partition column statistics of a column.</p> <p>The Identity and
         * Access Management (IAM) permission required for this operation is
         * <code>DeletePartition</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteColumnStatisticsForPartition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteColumnStatisticsForPartitionOutcomeCallable DeleteColumnStatisticsForPartitionCallable(const Model::DeleteColumnStatisticsForPartitionRequest& request) const;

        /**
         * <p>Delete the partition column statistics of a column.</p> <p>The Identity and
         * Access Management (IAM) permission required for this operation is
         * <code>DeletePartition</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteColumnStatisticsForPartition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteColumnStatisticsForPartitionAsync(const Model::DeleteColumnStatisticsForPartitionRequest& request, const DeleteColumnStatisticsForPartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves table statistics of columns.</p> <p>The Identity and Access
         * Management (IAM) permission required for this operation is
         * <code>DeleteTable</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteColumnStatisticsForTable">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteColumnStatisticsForTableOutcome DeleteColumnStatisticsForTable(const Model::DeleteColumnStatisticsForTableRequest& request) const;

        /**
         * <p>Retrieves table statistics of columns.</p> <p>The Identity and Access
         * Management (IAM) permission required for this operation is
         * <code>DeleteTable</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteColumnStatisticsForTable">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteColumnStatisticsForTableOutcomeCallable DeleteColumnStatisticsForTableCallable(const Model::DeleteColumnStatisticsForTableRequest& request) const;

        /**
         * <p>Retrieves table statistics of columns.</p> <p>The Identity and Access
         * Management (IAM) permission required for this operation is
         * <code>DeleteTable</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteColumnStatisticsForTable">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteColumnStatisticsForTableAsync(const Model::DeleteColumnStatisticsForTableRequest& request, const DeleteColumnStatisticsForTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a connection from the Data Catalog.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConnectionOutcome DeleteConnection(const Model::DeleteConnectionRequest& request) const;

        /**
         * <p>Deletes a connection from the Data Catalog.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteConnection">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteConnectionOutcomeCallable DeleteConnectionCallable(const Model::DeleteConnectionRequest& request) const;

        /**
         * <p>Deletes a connection from the Data Catalog.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteConnection">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteConnectionAsync(const Model::DeleteConnectionRequest& request, const DeleteConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a specified crawler from the AWS Glue Data Catalog, unless the
         * crawler state is <code>RUNNING</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteCrawler">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCrawlerOutcome DeleteCrawler(const Model::DeleteCrawlerRequest& request) const;

        /**
         * <p>Removes a specified crawler from the AWS Glue Data Catalog, unless the
         * crawler state is <code>RUNNING</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteCrawler">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCrawlerOutcomeCallable DeleteCrawlerCallable(const Model::DeleteCrawlerRequest& request) const;

        /**
         * <p>Removes a specified crawler from the AWS Glue Data Catalog, unless the
         * crawler state is <code>RUNNING</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteCrawler">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCrawlerAsync(const Model::DeleteCrawlerRequest& request, const DeleteCrawlerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a specified database from a Data Catalog.</p>  <p>After
         * completing this operation, you no longer have access to the tables (and all
         * table versions and partitions that might belong to the tables) and the
         * user-defined functions in the deleted database. AWS Glue deletes these
         * "orphaned" resources asynchronously in a timely manner, at the discretion of the
         * service.</p> <p>To ensure the immediate deletion of all related resources,
         * before calling <code>DeleteDatabase</code>, use <code>DeleteTableVersion</code>
         * or <code>BatchDeleteTableVersion</code>, <code>DeletePartition</code> or
         * <code>BatchDeletePartition</code>, <code>DeleteUserDefinedFunction</code>, and
         * <code>DeleteTable</code> or <code>BatchDeleteTable</code>, to delete any
         * resources that belong to the database.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteDatabase">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDatabaseOutcome DeleteDatabase(const Model::DeleteDatabaseRequest& request) const;

        /**
         * <p>Removes a specified database from a Data Catalog.</p>  <p>After
         * completing this operation, you no longer have access to the tables (and all
         * table versions and partitions that might belong to the tables) and the
         * user-defined functions in the deleted database. AWS Glue deletes these
         * "orphaned" resources asynchronously in a timely manner, at the discretion of the
         * service.</p> <p>To ensure the immediate deletion of all related resources,
         * before calling <code>DeleteDatabase</code>, use <code>DeleteTableVersion</code>
         * or <code>BatchDeleteTableVersion</code>, <code>DeletePartition</code> or
         * <code>BatchDeletePartition</code>, <code>DeleteUserDefinedFunction</code>, and
         * <code>DeleteTable</code> or <code>BatchDeleteTable</code>, to delete any
         * resources that belong to the database.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteDatabase">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDatabaseOutcomeCallable DeleteDatabaseCallable(const Model::DeleteDatabaseRequest& request) const;

        /**
         * <p>Removes a specified database from a Data Catalog.</p>  <p>After
         * completing this operation, you no longer have access to the tables (and all
         * table versions and partitions that might belong to the tables) and the
         * user-defined functions in the deleted database. AWS Glue deletes these
         * "orphaned" resources asynchronously in a timely manner, at the discretion of the
         * service.</p> <p>To ensure the immediate deletion of all related resources,
         * before calling <code>DeleteDatabase</code>, use <code>DeleteTableVersion</code>
         * or <code>BatchDeleteTableVersion</code>, <code>DeletePartition</code> or
         * <code>BatchDeletePartition</code>, <code>DeleteUserDefinedFunction</code>, and
         * <code>DeleteTable</code> or <code>BatchDeleteTable</code>, to delete any
         * resources that belong to the database.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteDatabase">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDatabaseAsync(const Model::DeleteDatabaseRequest& request, const DeleteDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a specified development endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteDevEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDevEndpointOutcome DeleteDevEndpoint(const Model::DeleteDevEndpointRequest& request) const;

        /**
         * <p>Deletes a specified development endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteDevEndpoint">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDevEndpointOutcomeCallable DeleteDevEndpointCallable(const Model::DeleteDevEndpointRequest& request) const;

        /**
         * <p>Deletes a specified development endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteDevEndpoint">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDevEndpointAsync(const Model::DeleteDevEndpointRequest& request, const DeleteDevEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a specified job definition. If the job definition is not found, no
         * exception is thrown.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteJob">AWS API
         * Reference</a></p>
         */
        virtual Model::DeleteJobOutcome DeleteJob(const Model::DeleteJobRequest& request) const;

        /**
         * <p>Deletes a specified job definition. If the job definition is not found, no
         * exception is thrown.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteJob">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteJobOutcomeCallable DeleteJobCallable(const Model::DeleteJobRequest& request) const;

        /**
         * <p>Deletes a specified job definition. If the job definition is not found, no
         * exception is thrown.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteJob">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteJobAsync(const Model::DeleteJobRequest& request, const DeleteJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an AWS Glue machine learning transform. Machine learning transforms
         * are a special type of transform that use machine learning to learn the details
         * of the transformation to be performed by learning from examples provided by
         * humans. These transformations are then saved by AWS Glue. If you no longer need
         * a transform, you can delete it by calling <code>DeleteMLTransforms</code>.
         * However, any AWS Glue jobs that still reference the deleted transform will no
         * longer succeed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteMLTransform">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMLTransformOutcome DeleteMLTransform(const Model::DeleteMLTransformRequest& request) const;

        /**
         * <p>Deletes an AWS Glue machine learning transform. Machine learning transforms
         * are a special type of transform that use machine learning to learn the details
         * of the transformation to be performed by learning from examples provided by
         * humans. These transformations are then saved by AWS Glue. If you no longer need
         * a transform, you can delete it by calling <code>DeleteMLTransforms</code>.
         * However, any AWS Glue jobs that still reference the deleted transform will no
         * longer succeed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteMLTransform">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteMLTransformOutcomeCallable DeleteMLTransformCallable(const Model::DeleteMLTransformRequest& request) const;

        /**
         * <p>Deletes an AWS Glue machine learning transform. Machine learning transforms
         * are a special type of transform that use machine learning to learn the details
         * of the transformation to be performed by learning from examples provided by
         * humans. These transformations are then saved by AWS Glue. If you no longer need
         * a transform, you can delete it by calling <code>DeleteMLTransforms</code>.
         * However, any AWS Glue jobs that still reference the deleted transform will no
         * longer succeed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteMLTransform">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteMLTransformAsync(const Model::DeleteMLTransformRequest& request, const DeleteMLTransformResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a specified partition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeletePartition">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePartitionOutcome DeletePartition(const Model::DeletePartitionRequest& request) const;

        /**
         * <p>Deletes a specified partition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeletePartition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePartitionOutcomeCallable DeletePartitionCallable(const Model::DeletePartitionRequest& request) const;

        /**
         * <p>Deletes a specified partition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeletePartition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePartitionAsync(const Model::DeletePartitionRequest& request, const DeletePartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a specified partition index from an existing table.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeletePartitionIndex">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePartitionIndexOutcome DeletePartitionIndex(const Model::DeletePartitionIndexRequest& request) const;

        /**
         * <p>Deletes a specified partition index from an existing table.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeletePartitionIndex">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePartitionIndexOutcomeCallable DeletePartitionIndexCallable(const Model::DeletePartitionIndexRequest& request) const;

        /**
         * <p>Deletes a specified partition index from an existing table.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeletePartitionIndex">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePartitionIndexAsync(const Model::DeletePartitionIndexRequest& request, const DeletePartitionIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete the entire registry including schema and all of its versions. To get
         * the status of the delete operation, you can call the <code>GetRegistry</code>
         * API after the asynchronous call. Deleting a registry will disable all online
         * operations for the registry such as the <code>UpdateRegistry</code>,
         * <code>CreateSchema</code>, <code>UpdateSchema</code>, and
         * <code>RegisterSchemaVersion</code> APIs. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteRegistry">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRegistryOutcome DeleteRegistry(const Model::DeleteRegistryRequest& request) const;

        /**
         * <p>Delete the entire registry including schema and all of its versions. To get
         * the status of the delete operation, you can call the <code>GetRegistry</code>
         * API after the asynchronous call. Deleting a registry will disable all online
         * operations for the registry such as the <code>UpdateRegistry</code>,
         * <code>CreateSchema</code>, <code>UpdateSchema</code>, and
         * <code>RegisterSchemaVersion</code> APIs. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteRegistry">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRegistryOutcomeCallable DeleteRegistryCallable(const Model::DeleteRegistryRequest& request) const;

        /**
         * <p>Delete the entire registry including schema and all of its versions. To get
         * the status of the delete operation, you can call the <code>GetRegistry</code>
         * API after the asynchronous call. Deleting a registry will disable all online
         * operations for the registry such as the <code>UpdateRegistry</code>,
         * <code>CreateSchema</code>, <code>UpdateSchema</code>, and
         * <code>RegisterSchemaVersion</code> APIs. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteRegistry">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRegistryAsync(const Model::DeleteRegistryRequest& request, const DeleteRegistryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a specified policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourcePolicyOutcome DeleteResourcePolicy(const Model::DeleteResourcePolicyRequest& request) const;

        /**
         * <p>Deletes a specified policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteResourcePolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteResourcePolicyOutcomeCallable DeleteResourcePolicyCallable(const Model::DeleteResourcePolicyRequest& request) const;

        /**
         * <p>Deletes a specified policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteResourcePolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteResourcePolicyAsync(const Model::DeleteResourcePolicyRequest& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the entire schema set, including the schema set and all of its
         * versions. To get the status of the delete operation, you can call
         * <code>GetSchema</code> API after the asynchronous call. Deleting a registry will
         * disable all online operations for the schema, such as the
         * <code>GetSchemaByDefinition</code>, and <code>RegisterSchemaVersion</code>
         * APIs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteSchema">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSchemaOutcome DeleteSchema(const Model::DeleteSchemaRequest& request) const;

        /**
         * <p>Deletes the entire schema set, including the schema set and all of its
         * versions. To get the status of the delete operation, you can call
         * <code>GetSchema</code> API after the asynchronous call. Deleting a registry will
         * disable all online operations for the schema, such as the
         * <code>GetSchemaByDefinition</code>, and <code>RegisterSchemaVersion</code>
         * APIs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteSchema">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSchemaOutcomeCallable DeleteSchemaCallable(const Model::DeleteSchemaRequest& request) const;

        /**
         * <p>Deletes the entire schema set, including the schema set and all of its
         * versions. To get the status of the delete operation, you can call
         * <code>GetSchema</code> API after the asynchronous call. Deleting a registry will
         * disable all online operations for the schema, such as the
         * <code>GetSchemaByDefinition</code>, and <code>RegisterSchemaVersion</code>
         * APIs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteSchema">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSchemaAsync(const Model::DeleteSchemaRequest& request, const DeleteSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Remove versions from the specified schema. A version number or range may be
         * supplied. If the compatibility mode forbids deleting of a version that is
         * necessary, such as BACKWARDS_FULL, an error is returned. Calling the
         * <code>GetSchemaVersions</code> API after this call will list the status of the
         * deleted versions.</p> <p>When the range of version numbers contain check pointed
         * version, the API will return a 409 conflict and will not proceed with the
         * deletion. You have to remove the checkpoint first using the
         * <code>DeleteSchemaCheckpoint</code> API before using this API.</p> <p>You cannot
         * use the <code>DeleteSchemaVersions</code> API to delete the first schema version
         * in the schema set. The first schema version can only be deleted by the
         * <code>DeleteSchema</code> API. This operation will also delete the attached
         * <code>SchemaVersionMetadata</code> under the schema versions. Hard deletes will
         * be enforced on the database.</p> <p>If the compatibility mode forbids deleting
         * of a version that is necessary, such as BACKWARDS_FULL, an error is
         * returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteSchemaVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSchemaVersionsOutcome DeleteSchemaVersions(const Model::DeleteSchemaVersionsRequest& request) const;

        /**
         * <p>Remove versions from the specified schema. A version number or range may be
         * supplied. If the compatibility mode forbids deleting of a version that is
         * necessary, such as BACKWARDS_FULL, an error is returned. Calling the
         * <code>GetSchemaVersions</code> API after this call will list the status of the
         * deleted versions.</p> <p>When the range of version numbers contain check pointed
         * version, the API will return a 409 conflict and will not proceed with the
         * deletion. You have to remove the checkpoint first using the
         * <code>DeleteSchemaCheckpoint</code> API before using this API.</p> <p>You cannot
         * use the <code>DeleteSchemaVersions</code> API to delete the first schema version
         * in the schema set. The first schema version can only be deleted by the
         * <code>DeleteSchema</code> API. This operation will also delete the attached
         * <code>SchemaVersionMetadata</code> under the schema versions. Hard deletes will
         * be enforced on the database.</p> <p>If the compatibility mode forbids deleting
         * of a version that is necessary, such as BACKWARDS_FULL, an error is
         * returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteSchemaVersions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSchemaVersionsOutcomeCallable DeleteSchemaVersionsCallable(const Model::DeleteSchemaVersionsRequest& request) const;

        /**
         * <p>Remove versions from the specified schema. A version number or range may be
         * supplied. If the compatibility mode forbids deleting of a version that is
         * necessary, such as BACKWARDS_FULL, an error is returned. Calling the
         * <code>GetSchemaVersions</code> API after this call will list the status of the
         * deleted versions.</p> <p>When the range of version numbers contain check pointed
         * version, the API will return a 409 conflict and will not proceed with the
         * deletion. You have to remove the checkpoint first using the
         * <code>DeleteSchemaCheckpoint</code> API before using this API.</p> <p>You cannot
         * use the <code>DeleteSchemaVersions</code> API to delete the first schema version
         * in the schema set. The first schema version can only be deleted by the
         * <code>DeleteSchema</code> API. This operation will also delete the attached
         * <code>SchemaVersionMetadata</code> under the schema versions. Hard deletes will
         * be enforced on the database.</p> <p>If the compatibility mode forbids deleting
         * of a version that is necessary, such as BACKWARDS_FULL, an error is
         * returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteSchemaVersions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSchemaVersionsAsync(const Model::DeleteSchemaVersionsRequest& request, const DeleteSchemaVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a specified security configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteSecurityConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSecurityConfigurationOutcome DeleteSecurityConfiguration(const Model::DeleteSecurityConfigurationRequest& request) const;

        /**
         * <p>Deletes a specified security configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteSecurityConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSecurityConfigurationOutcomeCallable DeleteSecurityConfigurationCallable(const Model::DeleteSecurityConfigurationRequest& request) const;

        /**
         * <p>Deletes a specified security configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteSecurityConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSecurityConfigurationAsync(const Model::DeleteSecurityConfigurationRequest& request, const DeleteSecurityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a table definition from the Data Catalog.</p>  <p>After
         * completing this operation, you no longer have access to the table versions and
         * partitions that belong to the deleted table. AWS Glue deletes these "orphaned"
         * resources asynchronously in a timely manner, at the discretion of the
         * service.</p> <p>To ensure the immediate deletion of all related resources,
         * before calling <code>DeleteTable</code>, use <code>DeleteTableVersion</code> or
         * <code>BatchDeleteTableVersion</code>, and <code>DeletePartition</code> or
         * <code>BatchDeletePartition</code>, to delete any resources that belong to the
         * table.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteTable">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTableOutcome DeleteTable(const Model::DeleteTableRequest& request) const;

        /**
         * <p>Removes a table definition from the Data Catalog.</p>  <p>After
         * completing this operation, you no longer have access to the table versions and
         * partitions that belong to the deleted table. AWS Glue deletes these "orphaned"
         * resources asynchronously in a timely manner, at the discretion of the
         * service.</p> <p>To ensure the immediate deletion of all related resources,
         * before calling <code>DeleteTable</code>, use <code>DeleteTableVersion</code> or
         * <code>BatchDeleteTableVersion</code>, and <code>DeletePartition</code> or
         * <code>BatchDeletePartition</code>, to delete any resources that belong to the
         * table.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteTable">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTableOutcomeCallable DeleteTableCallable(const Model::DeleteTableRequest& request) const;

        /**
         * <p>Removes a table definition from the Data Catalog.</p>  <p>After
         * completing this operation, you no longer have access to the table versions and
         * partitions that belong to the deleted table. AWS Glue deletes these "orphaned"
         * resources asynchronously in a timely manner, at the discretion of the
         * service.</p> <p>To ensure the immediate deletion of all related resources,
         * before calling <code>DeleteTable</code>, use <code>DeleteTableVersion</code> or
         * <code>BatchDeleteTableVersion</code>, and <code>DeletePartition</code> or
         * <code>BatchDeletePartition</code>, to delete any resources that belong to the
         * table.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteTable">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTableAsync(const Model::DeleteTableRequest& request, const DeleteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a specified version of a table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteTableVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTableVersionOutcome DeleteTableVersion(const Model::DeleteTableVersionRequest& request) const;

        /**
         * <p>Deletes a specified version of a table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteTableVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTableVersionOutcomeCallable DeleteTableVersionCallable(const Model::DeleteTableVersionRequest& request) const;

        /**
         * <p>Deletes a specified version of a table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteTableVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTableVersionAsync(const Model::DeleteTableVersionRequest& request, const DeleteTableVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a specified trigger. If the trigger is not found, no exception is
         * thrown.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteTrigger">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTriggerOutcome DeleteTrigger(const Model::DeleteTriggerRequest& request) const;

        /**
         * <p>Deletes a specified trigger. If the trigger is not found, no exception is
         * thrown.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteTrigger">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTriggerOutcomeCallable DeleteTriggerCallable(const Model::DeleteTriggerRequest& request) const;

        /**
         * <p>Deletes a specified trigger. If the trigger is not found, no exception is
         * thrown.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteTrigger">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTriggerAsync(const Model::DeleteTriggerRequest& request, const DeleteTriggerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an existing function definition from the Data Catalog.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteUserDefinedFunction">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserDefinedFunctionOutcome DeleteUserDefinedFunction(const Model::DeleteUserDefinedFunctionRequest& request) const;

        /**
         * <p>Deletes an existing function definition from the Data Catalog.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteUserDefinedFunction">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteUserDefinedFunctionOutcomeCallable DeleteUserDefinedFunctionCallable(const Model::DeleteUserDefinedFunctionRequest& request) const;

        /**
         * <p>Deletes an existing function definition from the Data Catalog.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteUserDefinedFunction">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteUserDefinedFunctionAsync(const Model::DeleteUserDefinedFunctionRequest& request, const DeleteUserDefinedFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteWorkflow">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWorkflowOutcome DeleteWorkflow(const Model::DeleteWorkflowRequest& request) const;

        /**
         * <p>Deletes a workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteWorkflow">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteWorkflowOutcomeCallable DeleteWorkflowCallable(const Model::DeleteWorkflowRequest& request) const;

        /**
         * <p>Deletes a workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteWorkflow">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteWorkflowAsync(const Model::DeleteWorkflowRequest& request, const DeleteWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the status of a migration operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetCatalogImportStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCatalogImportStatusOutcome GetCatalogImportStatus(const Model::GetCatalogImportStatusRequest& request) const;

        /**
         * <p>Retrieves the status of a migration operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetCatalogImportStatus">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCatalogImportStatusOutcomeCallable GetCatalogImportStatusCallable(const Model::GetCatalogImportStatusRequest& request) const;

        /**
         * <p>Retrieves the status of a migration operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetCatalogImportStatus">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCatalogImportStatusAsync(const Model::GetCatalogImportStatusRequest& request, const GetCatalogImportStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieve a classifier by name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetClassifier">AWS
         * API Reference</a></p>
         */
        virtual Model::GetClassifierOutcome GetClassifier(const Model::GetClassifierRequest& request) const;

        /**
         * <p>Retrieve a classifier by name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetClassifier">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetClassifierOutcomeCallable GetClassifierCallable(const Model::GetClassifierRequest& request) const;

        /**
         * <p>Retrieve a classifier by name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetClassifier">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetClassifierAsync(const Model::GetClassifierRequest& request, const GetClassifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all classifier objects in the Data Catalog.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetClassifiers">AWS
         * API Reference</a></p>
         */
        virtual Model::GetClassifiersOutcome GetClassifiers(const Model::GetClassifiersRequest& request) const;

        /**
         * <p>Lists all classifier objects in the Data Catalog.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetClassifiers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetClassifiersOutcomeCallable GetClassifiersCallable(const Model::GetClassifiersRequest& request) const;

        /**
         * <p>Lists all classifier objects in the Data Catalog.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetClassifiers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetClassifiersAsync(const Model::GetClassifiersRequest& request, const GetClassifiersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves partition statistics of columns.</p> <p>The Identity and Access
         * Management (IAM) permission required for this operation is
         * <code>GetPartition</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetColumnStatisticsForPartition">AWS
         * API Reference</a></p>
         */
        virtual Model::GetColumnStatisticsForPartitionOutcome GetColumnStatisticsForPartition(const Model::GetColumnStatisticsForPartitionRequest& request) const;

        /**
         * <p>Retrieves partition statistics of columns.</p> <p>The Identity and Access
         * Management (IAM) permission required for this operation is
         * <code>GetPartition</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetColumnStatisticsForPartition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetColumnStatisticsForPartitionOutcomeCallable GetColumnStatisticsForPartitionCallable(const Model::GetColumnStatisticsForPartitionRequest& request) const;

        /**
         * <p>Retrieves partition statistics of columns.</p> <p>The Identity and Access
         * Management (IAM) permission required for this operation is
         * <code>GetPartition</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetColumnStatisticsForPartition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetColumnStatisticsForPartitionAsync(const Model::GetColumnStatisticsForPartitionRequest& request, const GetColumnStatisticsForPartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves table statistics of columns.</p> <p>The Identity and Access
         * Management (IAM) permission required for this operation is
         * <code>GetTable</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetColumnStatisticsForTable">AWS
         * API Reference</a></p>
         */
        virtual Model::GetColumnStatisticsForTableOutcome GetColumnStatisticsForTable(const Model::GetColumnStatisticsForTableRequest& request) const;

        /**
         * <p>Retrieves table statistics of columns.</p> <p>The Identity and Access
         * Management (IAM) permission required for this operation is
         * <code>GetTable</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetColumnStatisticsForTable">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetColumnStatisticsForTableOutcomeCallable GetColumnStatisticsForTableCallable(const Model::GetColumnStatisticsForTableRequest& request) const;

        /**
         * <p>Retrieves table statistics of columns.</p> <p>The Identity and Access
         * Management (IAM) permission required for this operation is
         * <code>GetTable</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetColumnStatisticsForTable">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetColumnStatisticsForTableAsync(const Model::GetColumnStatisticsForTableRequest& request, const GetColumnStatisticsForTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a connection definition from the Data Catalog.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConnectionOutcome GetConnection(const Model::GetConnectionRequest& request) const;

        /**
         * <p>Retrieves a connection definition from the Data Catalog.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetConnection">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetConnectionOutcomeCallable GetConnectionCallable(const Model::GetConnectionRequest& request) const;

        /**
         * <p>Retrieves a connection definition from the Data Catalog.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetConnection">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetConnectionAsync(const Model::GetConnectionRequest& request, const GetConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of connection definitions from the Data
         * Catalog.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetConnections">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConnectionsOutcome GetConnections(const Model::GetConnectionsRequest& request) const;

        /**
         * <p>Retrieves a list of connection definitions from the Data
         * Catalog.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetConnections">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetConnectionsOutcomeCallable GetConnectionsCallable(const Model::GetConnectionsRequest& request) const;

        /**
         * <p>Retrieves a list of connection definitions from the Data
         * Catalog.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetConnections">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetConnectionsAsync(const Model::GetConnectionsRequest& request, const GetConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves metadata for a specified crawler.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetCrawler">AWS API
         * Reference</a></p>
         */
        virtual Model::GetCrawlerOutcome GetCrawler(const Model::GetCrawlerRequest& request) const;

        /**
         * <p>Retrieves metadata for a specified crawler.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetCrawler">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCrawlerOutcomeCallable GetCrawlerCallable(const Model::GetCrawlerRequest& request) const;

        /**
         * <p>Retrieves metadata for a specified crawler.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetCrawler">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCrawlerAsync(const Model::GetCrawlerRequest& request, const GetCrawlerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves metrics about specified crawlers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetCrawlerMetrics">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCrawlerMetricsOutcome GetCrawlerMetrics(const Model::GetCrawlerMetricsRequest& request) const;

        /**
         * <p>Retrieves metrics about specified crawlers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetCrawlerMetrics">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCrawlerMetricsOutcomeCallable GetCrawlerMetricsCallable(const Model::GetCrawlerMetricsRequest& request) const;

        /**
         * <p>Retrieves metrics about specified crawlers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetCrawlerMetrics">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCrawlerMetricsAsync(const Model::GetCrawlerMetricsRequest& request, const GetCrawlerMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves metadata for all crawlers defined in the customer
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetCrawlers">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCrawlersOutcome GetCrawlers(const Model::GetCrawlersRequest& request) const;

        /**
         * <p>Retrieves metadata for all crawlers defined in the customer
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetCrawlers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCrawlersOutcomeCallable GetCrawlersCallable(const Model::GetCrawlersRequest& request) const;

        /**
         * <p>Retrieves metadata for all crawlers defined in the customer
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetCrawlers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCrawlersAsync(const Model::GetCrawlersRequest& request, const GetCrawlersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the security configuration for a specified catalog.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetDataCatalogEncryptionSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDataCatalogEncryptionSettingsOutcome GetDataCatalogEncryptionSettings(const Model::GetDataCatalogEncryptionSettingsRequest& request) const;

        /**
         * <p>Retrieves the security configuration for a specified catalog.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetDataCatalogEncryptionSettings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDataCatalogEncryptionSettingsOutcomeCallable GetDataCatalogEncryptionSettingsCallable(const Model::GetDataCatalogEncryptionSettingsRequest& request) const;

        /**
         * <p>Retrieves the security configuration for a specified catalog.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetDataCatalogEncryptionSettings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDataCatalogEncryptionSettingsAsync(const Model::GetDataCatalogEncryptionSettingsRequest& request, const GetDataCatalogEncryptionSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the definition of a specified database.</p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetDatabase">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDatabaseOutcome GetDatabase(const Model::GetDatabaseRequest& request) const;

        /**
         * <p>Retrieves the definition of a specified database.</p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetDatabase">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDatabaseOutcomeCallable GetDatabaseCallable(const Model::GetDatabaseRequest& request) const;

        /**
         * <p>Retrieves the definition of a specified database.</p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetDatabase">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDatabaseAsync(const Model::GetDatabaseRequest& request, const GetDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves all databases defined in a given Data Catalog.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetDatabases">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDatabasesOutcome GetDatabases(const Model::GetDatabasesRequest& request) const;

        /**
         * <p>Retrieves all databases defined in a given Data Catalog.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetDatabases">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDatabasesOutcomeCallable GetDatabasesCallable(const Model::GetDatabasesRequest& request) const;

        /**
         * <p>Retrieves all databases defined in a given Data Catalog.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetDatabases">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDatabasesAsync(const Model::GetDatabasesRequest& request, const GetDatabasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Transforms a Python script into a directed acyclic graph (DAG).
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetDataflowGraph">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDataflowGraphOutcome GetDataflowGraph(const Model::GetDataflowGraphRequest& request) const;

        /**
         * <p>Transforms a Python script into a directed acyclic graph (DAG).
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetDataflowGraph">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDataflowGraphOutcomeCallable GetDataflowGraphCallable(const Model::GetDataflowGraphRequest& request) const;

        /**
         * <p>Transforms a Python script into a directed acyclic graph (DAG).
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetDataflowGraph">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDataflowGraphAsync(const Model::GetDataflowGraphRequest& request, const GetDataflowGraphResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about a specified development endpoint.</p> 
         * <p>When you create a development endpoint in a virtual private cloud (VPC), AWS
         * Glue returns only a private IP address, and the public IP address field is not
         * populated. When you create a non-VPC development endpoint, AWS Glue returns only
         * a public IP address.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetDevEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDevEndpointOutcome GetDevEndpoint(const Model::GetDevEndpointRequest& request) const;

        /**
         * <p>Retrieves information about a specified development endpoint.</p> 
         * <p>When you create a development endpoint in a virtual private cloud (VPC), AWS
         * Glue returns only a private IP address, and the public IP address field is not
         * populated. When you create a non-VPC development endpoint, AWS Glue returns only
         * a public IP address.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetDevEndpoint">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDevEndpointOutcomeCallable GetDevEndpointCallable(const Model::GetDevEndpointRequest& request) const;

        /**
         * <p>Retrieves information about a specified development endpoint.</p> 
         * <p>When you create a development endpoint in a virtual private cloud (VPC), AWS
         * Glue returns only a private IP address, and the public IP address field is not
         * populated. When you create a non-VPC development endpoint, AWS Glue returns only
         * a public IP address.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetDevEndpoint">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDevEndpointAsync(const Model::GetDevEndpointRequest& request, const GetDevEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves all the development endpoints in this AWS account.</p> 
         * <p>When you create a development endpoint in a virtual private cloud (VPC), AWS
         * Glue returns only a private IP address and the public IP address field is not
         * populated. When you create a non-VPC development endpoint, AWS Glue returns only
         * a public IP address.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetDevEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDevEndpointsOutcome GetDevEndpoints(const Model::GetDevEndpointsRequest& request) const;

        /**
         * <p>Retrieves all the development endpoints in this AWS account.</p> 
         * <p>When you create a development endpoint in a virtual private cloud (VPC), AWS
         * Glue returns only a private IP address and the public IP address field is not
         * populated. When you create a non-VPC development endpoint, AWS Glue returns only
         * a public IP address.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetDevEndpoints">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDevEndpointsOutcomeCallable GetDevEndpointsCallable(const Model::GetDevEndpointsRequest& request) const;

        /**
         * <p>Retrieves all the development endpoints in this AWS account.</p> 
         * <p>When you create a development endpoint in a virtual private cloud (VPC), AWS
         * Glue returns only a private IP address and the public IP address field is not
         * populated. When you create a non-VPC development endpoint, AWS Glue returns only
         * a public IP address.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetDevEndpoints">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDevEndpointsAsync(const Model::GetDevEndpointsRequest& request, const GetDevEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves an existing job definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetJob">AWS API
         * Reference</a></p>
         */
        virtual Model::GetJobOutcome GetJob(const Model::GetJobRequest& request) const;

        /**
         * <p>Retrieves an existing job definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetJob">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetJobOutcomeCallable GetJobCallable(const Model::GetJobRequest& request) const;

        /**
         * <p>Retrieves an existing job definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetJob">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetJobAsync(const Model::GetJobRequest& request, const GetJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information on a job bookmark entry.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetJobBookmark">AWS
         * API Reference</a></p>
         */
        virtual Model::GetJobBookmarkOutcome GetJobBookmark(const Model::GetJobBookmarkRequest& request) const;

        /**
         * <p>Returns information on a job bookmark entry.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetJobBookmark">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetJobBookmarkOutcomeCallable GetJobBookmarkCallable(const Model::GetJobBookmarkRequest& request) const;

        /**
         * <p>Returns information on a job bookmark entry.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetJobBookmark">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetJobBookmarkAsync(const Model::GetJobBookmarkRequest& request, const GetJobBookmarkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the metadata for a given job run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetJobRun">AWS API
         * Reference</a></p>
         */
        virtual Model::GetJobRunOutcome GetJobRun(const Model::GetJobRunRequest& request) const;

        /**
         * <p>Retrieves the metadata for a given job run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetJobRun">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetJobRunOutcomeCallable GetJobRunCallable(const Model::GetJobRunRequest& request) const;

        /**
         * <p>Retrieves the metadata for a given job run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetJobRun">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetJobRunAsync(const Model::GetJobRunRequest& request, const GetJobRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves metadata for all runs of a given job definition.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetJobRuns">AWS API
         * Reference</a></p>
         */
        virtual Model::GetJobRunsOutcome GetJobRuns(const Model::GetJobRunsRequest& request) const;

        /**
         * <p>Retrieves metadata for all runs of a given job definition.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetJobRuns">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetJobRunsOutcomeCallable GetJobRunsCallable(const Model::GetJobRunsRequest& request) const;

        /**
         * <p>Retrieves metadata for all runs of a given job definition.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetJobRuns">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetJobRunsAsync(const Model::GetJobRunsRequest& request, const GetJobRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves all current job definitions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetJobs">AWS API
         * Reference</a></p>
         */
        virtual Model::GetJobsOutcome GetJobs(const Model::GetJobsRequest& request) const;

        /**
         * <p>Retrieves all current job definitions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetJobs">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetJobsOutcomeCallable GetJobsCallable(const Model::GetJobsRequest& request) const;

        /**
         * <p>Retrieves all current job definitions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetJobs">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetJobsAsync(const Model::GetJobsRequest& request, const GetJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets details for a specific task run on a machine learning transform. Machine
         * learning task runs are asynchronous tasks that AWS Glue runs on your behalf as
         * part of various machine learning workflows. You can check the stats of any task
         * run by calling <code>GetMLTaskRun</code> with the <code>TaskRunID</code> and its
         * parent transform's <code>TransformID</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetMLTaskRun">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMLTaskRunOutcome GetMLTaskRun(const Model::GetMLTaskRunRequest& request) const;

        /**
         * <p>Gets details for a specific task run on a machine learning transform. Machine
         * learning task runs are asynchronous tasks that AWS Glue runs on your behalf as
         * part of various machine learning workflows. You can check the stats of any task
         * run by calling <code>GetMLTaskRun</code> with the <code>TaskRunID</code> and its
         * parent transform's <code>TransformID</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetMLTaskRun">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMLTaskRunOutcomeCallable GetMLTaskRunCallable(const Model::GetMLTaskRunRequest& request) const;

        /**
         * <p>Gets details for a specific task run on a machine learning transform. Machine
         * learning task runs are asynchronous tasks that AWS Glue runs on your behalf as
         * part of various machine learning workflows. You can check the stats of any task
         * run by calling <code>GetMLTaskRun</code> with the <code>TaskRunID</code> and its
         * parent transform's <code>TransformID</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetMLTaskRun">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMLTaskRunAsync(const Model::GetMLTaskRunRequest& request, const GetMLTaskRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of runs for a machine learning transform. Machine learning task
         * runs are asynchronous tasks that AWS Glue runs on your behalf as part of various
         * machine learning workflows. You can get a sortable, filterable list of machine
         * learning task runs by calling <code>GetMLTaskRuns</code> with their parent
         * transform's <code>TransformID</code> and other optional parameters as documented
         * in this section.</p> <p>This operation returns a list of historic runs and must
         * be paginated.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetMLTaskRuns">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMLTaskRunsOutcome GetMLTaskRuns(const Model::GetMLTaskRunsRequest& request) const;

        /**
         * <p>Gets a list of runs for a machine learning transform. Machine learning task
         * runs are asynchronous tasks that AWS Glue runs on your behalf as part of various
         * machine learning workflows. You can get a sortable, filterable list of machine
         * learning task runs by calling <code>GetMLTaskRuns</code> with their parent
         * transform's <code>TransformID</code> and other optional parameters as documented
         * in this section.</p> <p>This operation returns a list of historic runs and must
         * be paginated.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetMLTaskRuns">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMLTaskRunsOutcomeCallable GetMLTaskRunsCallable(const Model::GetMLTaskRunsRequest& request) const;

        /**
         * <p>Gets a list of runs for a machine learning transform. Machine learning task
         * runs are asynchronous tasks that AWS Glue runs on your behalf as part of various
         * machine learning workflows. You can get a sortable, filterable list of machine
         * learning task runs by calling <code>GetMLTaskRuns</code> with their parent
         * transform's <code>TransformID</code> and other optional parameters as documented
         * in this section.</p> <p>This operation returns a list of historic runs and must
         * be paginated.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetMLTaskRuns">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMLTaskRunsAsync(const Model::GetMLTaskRunsRequest& request, const GetMLTaskRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets an AWS Glue machine learning transform artifact and all its
         * corresponding metadata. Machine learning transforms are a special type of
         * transform that use machine learning to learn the details of the transformation
         * to be performed by learning from examples provided by humans. These
         * transformations are then saved by AWS Glue. You can retrieve their metadata by
         * calling <code>GetMLTransform</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetMLTransform">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMLTransformOutcome GetMLTransform(const Model::GetMLTransformRequest& request) const;

        /**
         * <p>Gets an AWS Glue machine learning transform artifact and all its
         * corresponding metadata. Machine learning transforms are a special type of
         * transform that use machine learning to learn the details of the transformation
         * to be performed by learning from examples provided by humans. These
         * transformations are then saved by AWS Glue. You can retrieve their metadata by
         * calling <code>GetMLTransform</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetMLTransform">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMLTransformOutcomeCallable GetMLTransformCallable(const Model::GetMLTransformRequest& request) const;

        /**
         * <p>Gets an AWS Glue machine learning transform artifact and all its
         * corresponding metadata. Machine learning transforms are a special type of
         * transform that use machine learning to learn the details of the transformation
         * to be performed by learning from examples provided by humans. These
         * transformations are then saved by AWS Glue. You can retrieve their metadata by
         * calling <code>GetMLTransform</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetMLTransform">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMLTransformAsync(const Model::GetMLTransformRequest& request, const GetMLTransformResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a sortable, filterable list of existing AWS Glue machine learning
         * transforms. Machine learning transforms are a special type of transform that use
         * machine learning to learn the details of the transformation to be performed by
         * learning from examples provided by humans. These transformations are then saved
         * by AWS Glue, and you can retrieve their metadata by calling
         * <code>GetMLTransforms</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetMLTransforms">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMLTransformsOutcome GetMLTransforms(const Model::GetMLTransformsRequest& request) const;

        /**
         * <p>Gets a sortable, filterable list of existing AWS Glue machine learning
         * transforms. Machine learning transforms are a special type of transform that use
         * machine learning to learn the details of the transformation to be performed by
         * learning from examples provided by humans. These transformations are then saved
         * by AWS Glue, and you can retrieve their metadata by calling
         * <code>GetMLTransforms</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetMLTransforms">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMLTransformsOutcomeCallable GetMLTransformsCallable(const Model::GetMLTransformsRequest& request) const;

        /**
         * <p>Gets a sortable, filterable list of existing AWS Glue machine learning
         * transforms. Machine learning transforms are a special type of transform that use
         * machine learning to learn the details of the transformation to be performed by
         * learning from examples provided by humans. These transformations are then saved
         * by AWS Glue, and you can retrieve their metadata by calling
         * <code>GetMLTransforms</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetMLTransforms">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMLTransformsAsync(const Model::GetMLTransformsRequest& request, const GetMLTransformsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates mappings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetMapping">AWS API
         * Reference</a></p>
         */
        virtual Model::GetMappingOutcome GetMapping(const Model::GetMappingRequest& request) const;

        /**
         * <p>Creates mappings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetMapping">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMappingOutcomeCallable GetMappingCallable(const Model::GetMappingRequest& request) const;

        /**
         * <p>Creates mappings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetMapping">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMappingAsync(const Model::GetMappingRequest& request, const GetMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about a specified partition.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetPartition">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPartitionOutcome GetPartition(const Model::GetPartitionRequest& request) const;

        /**
         * <p>Retrieves information about a specified partition.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetPartition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPartitionOutcomeCallable GetPartitionCallable(const Model::GetPartitionRequest& request) const;

        /**
         * <p>Retrieves information about a specified partition.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetPartition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPartitionAsync(const Model::GetPartitionRequest& request, const GetPartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the partition indexes associated with a table.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetPartitionIndexes">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPartitionIndexesOutcome GetPartitionIndexes(const Model::GetPartitionIndexesRequest& request) const;

        /**
         * <p>Retrieves the partition indexes associated with a table.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetPartitionIndexes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPartitionIndexesOutcomeCallable GetPartitionIndexesCallable(const Model::GetPartitionIndexesRequest& request) const;

        /**
         * <p>Retrieves the partition indexes associated with a table.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetPartitionIndexes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPartitionIndexesAsync(const Model::GetPartitionIndexesRequest& request, const GetPartitionIndexesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the partitions in a table.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetPartitions">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPartitionsOutcome GetPartitions(const Model::GetPartitionsRequest& request) const;

        /**
         * <p>Retrieves information about the partitions in a table.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetPartitions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPartitionsOutcomeCallable GetPartitionsCallable(const Model::GetPartitionsRequest& request) const;

        /**
         * <p>Retrieves information about the partitions in a table.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetPartitions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPartitionsAsync(const Model::GetPartitionsRequest& request, const GetPartitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets code to perform a specified mapping.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetPlan">AWS API
         * Reference</a></p>
         */
        virtual Model::GetPlanOutcome GetPlan(const Model::GetPlanRequest& request) const;

        /**
         * <p>Gets code to perform a specified mapping.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetPlan">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPlanOutcomeCallable GetPlanCallable(const Model::GetPlanRequest& request) const;

        /**
         * <p>Gets code to perform a specified mapping.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetPlan">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPlanAsync(const Model::GetPlanRequest& request, const GetPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified registry in detail.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetRegistry">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRegistryOutcome GetRegistry(const Model::GetRegistryRequest& request) const;

        /**
         * <p>Describes the specified registry in detail.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetRegistry">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRegistryOutcomeCallable GetRegistryCallable(const Model::GetRegistryRequest& request) const;

        /**
         * <p>Describes the specified registry in detail.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetRegistry">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRegistryAsync(const Model::GetRegistryRequest& request, const GetRegistryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the security configurations for the resource policies set on
         * individual resources, and also the account-level policy.</p> <p>This operation
         * also returns the Data Catalog resource policy. However, if you enabled metadata
         * encryption in Data Catalog settings, and you do not have permission on the AWS
         * KMS key, the operation can't return the Data Catalog resource
         * policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetResourcePolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourcePoliciesOutcome GetResourcePolicies(const Model::GetResourcePoliciesRequest& request) const;

        /**
         * <p>Retrieves the security configurations for the resource policies set on
         * individual resources, and also the account-level policy.</p> <p>This operation
         * also returns the Data Catalog resource policy. However, if you enabled metadata
         * encryption in Data Catalog settings, and you do not have permission on the AWS
         * KMS key, the operation can't return the Data Catalog resource
         * policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetResourcePolicies">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResourcePoliciesOutcomeCallable GetResourcePoliciesCallable(const Model::GetResourcePoliciesRequest& request) const;

        /**
         * <p>Retrieves the security configurations for the resource policies set on
         * individual resources, and also the account-level policy.</p> <p>This operation
         * also returns the Data Catalog resource policy. However, if you enabled metadata
         * encryption in Data Catalog settings, and you do not have permission on the AWS
         * KMS key, the operation can't return the Data Catalog resource
         * policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetResourcePolicies">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetResourcePoliciesAsync(const Model::GetResourcePoliciesRequest& request, const GetResourcePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a specified resource policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourcePolicyOutcome GetResourcePolicy(const Model::GetResourcePolicyRequest& request) const;

        /**
         * <p>Retrieves a specified resource policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetResourcePolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResourcePolicyOutcomeCallable GetResourcePolicyCallable(const Model::GetResourcePolicyRequest& request) const;

        /**
         * <p>Retrieves a specified resource policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetResourcePolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetResourcePolicyAsync(const Model::GetResourcePolicyRequest& request, const GetResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified schema in detail.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetSchema">AWS API
         * Reference</a></p>
         */
        virtual Model::GetSchemaOutcome GetSchema(const Model::GetSchemaRequest& request) const;

        /**
         * <p>Describes the specified schema in detail.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetSchema">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSchemaOutcomeCallable GetSchemaCallable(const Model::GetSchemaRequest& request) const;

        /**
         * <p>Describes the specified schema in detail.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetSchema">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSchemaAsync(const Model::GetSchemaRequest& request, const GetSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a schema by the <code>SchemaDefinition</code>. The schema
         * definition is sent to the Schema Registry, canonicalized, and hashed. If the
         * hash is matched within the scope of the <code>SchemaName</code> or ARN (or the
         * default registry, if none is supplied), that schema’s metadata is returned.
         * Otherwise, a 404 or NotFound error is returned. Schema versions in
         * <code>Deleted</code> statuses will not be included in the results.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetSchemaByDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSchemaByDefinitionOutcome GetSchemaByDefinition(const Model::GetSchemaByDefinitionRequest& request) const;

        /**
         * <p>Retrieves a schema by the <code>SchemaDefinition</code>. The schema
         * definition is sent to the Schema Registry, canonicalized, and hashed. If the
         * hash is matched within the scope of the <code>SchemaName</code> or ARN (or the
         * default registry, if none is supplied), that schema’s metadata is returned.
         * Otherwise, a 404 or NotFound error is returned. Schema versions in
         * <code>Deleted</code> statuses will not be included in the results.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetSchemaByDefinition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSchemaByDefinitionOutcomeCallable GetSchemaByDefinitionCallable(const Model::GetSchemaByDefinitionRequest& request) const;

        /**
         * <p>Retrieves a schema by the <code>SchemaDefinition</code>. The schema
         * definition is sent to the Schema Registry, canonicalized, and hashed. If the
         * hash is matched within the scope of the <code>SchemaName</code> or ARN (or the
         * default registry, if none is supplied), that schema’s metadata is returned.
         * Otherwise, a 404 or NotFound error is returned. Schema versions in
         * <code>Deleted</code> statuses will not be included in the results.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetSchemaByDefinition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSchemaByDefinitionAsync(const Model::GetSchemaByDefinitionRequest& request, const GetSchemaByDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get the specified schema by its unique ID assigned when a version of the
         * schema is created or registered. Schema versions in Deleted status will not be
         * included in the results.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetSchemaVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSchemaVersionOutcome GetSchemaVersion(const Model::GetSchemaVersionRequest& request) const;

        /**
         * <p>Get the specified schema by its unique ID assigned when a version of the
         * schema is created or registered. Schema versions in Deleted status will not be
         * included in the results.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetSchemaVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSchemaVersionOutcomeCallable GetSchemaVersionCallable(const Model::GetSchemaVersionRequest& request) const;

        /**
         * <p>Get the specified schema by its unique ID assigned when a version of the
         * schema is created or registered. Schema versions in Deleted status will not be
         * included in the results.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetSchemaVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSchemaVersionAsync(const Model::GetSchemaVersionRequest& request, const GetSchemaVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Fetches the schema version difference in the specified difference type
         * between two stored schema versions in the Schema Registry.</p> <p>This API
         * allows you to compare two schema versions between two schema definitions under
         * the same schema.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetSchemaVersionsDiff">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSchemaVersionsDiffOutcome GetSchemaVersionsDiff(const Model::GetSchemaVersionsDiffRequest& request) const;

        /**
         * <p>Fetches the schema version difference in the specified difference type
         * between two stored schema versions in the Schema Registry.</p> <p>This API
         * allows you to compare two schema versions between two schema definitions under
         * the same schema.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetSchemaVersionsDiff">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSchemaVersionsDiffOutcomeCallable GetSchemaVersionsDiffCallable(const Model::GetSchemaVersionsDiffRequest& request) const;

        /**
         * <p>Fetches the schema version difference in the specified difference type
         * between two stored schema versions in the Schema Registry.</p> <p>This API
         * allows you to compare two schema versions between two schema definitions under
         * the same schema.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetSchemaVersionsDiff">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSchemaVersionsDiffAsync(const Model::GetSchemaVersionsDiffRequest& request, const GetSchemaVersionsDiffResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a specified security configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetSecurityConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSecurityConfigurationOutcome GetSecurityConfiguration(const Model::GetSecurityConfigurationRequest& request) const;

        /**
         * <p>Retrieves a specified security configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetSecurityConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSecurityConfigurationOutcomeCallable GetSecurityConfigurationCallable(const Model::GetSecurityConfigurationRequest& request) const;

        /**
         * <p>Retrieves a specified security configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetSecurityConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSecurityConfigurationAsync(const Model::GetSecurityConfigurationRequest& request, const GetSecurityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of all security configurations.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetSecurityConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSecurityConfigurationsOutcome GetSecurityConfigurations(const Model::GetSecurityConfigurationsRequest& request) const;

        /**
         * <p>Retrieves a list of all security configurations.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetSecurityConfigurations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSecurityConfigurationsOutcomeCallable GetSecurityConfigurationsCallable(const Model::GetSecurityConfigurationsRequest& request) const;

        /**
         * <p>Retrieves a list of all security configurations.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetSecurityConfigurations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSecurityConfigurationsAsync(const Model::GetSecurityConfigurationsRequest& request, const GetSecurityConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the <code>Table</code> definition in a Data Catalog for a specified
         * table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetTable">AWS API
         * Reference</a></p>
         */
        virtual Model::GetTableOutcome GetTable(const Model::GetTableRequest& request) const;

        /**
         * <p>Retrieves the <code>Table</code> definition in a Data Catalog for a specified
         * table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetTable">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTableOutcomeCallable GetTableCallable(const Model::GetTableRequest& request) const;

        /**
         * <p>Retrieves the <code>Table</code> definition in a Data Catalog for a specified
         * table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetTable">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTableAsync(const Model::GetTableRequest& request, const GetTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a specified version of a table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetTableVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTableVersionOutcome GetTableVersion(const Model::GetTableVersionRequest& request) const;

        /**
         * <p>Retrieves a specified version of a table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetTableVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTableVersionOutcomeCallable GetTableVersionCallable(const Model::GetTableVersionRequest& request) const;

        /**
         * <p>Retrieves a specified version of a table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetTableVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTableVersionAsync(const Model::GetTableVersionRequest& request, const GetTableVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of strings that identify available versions of a specified
         * table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetTableVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTableVersionsOutcome GetTableVersions(const Model::GetTableVersionsRequest& request) const;

        /**
         * <p>Retrieves a list of strings that identify available versions of a specified
         * table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetTableVersions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTableVersionsOutcomeCallable GetTableVersionsCallable(const Model::GetTableVersionsRequest& request) const;

        /**
         * <p>Retrieves a list of strings that identify available versions of a specified
         * table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetTableVersions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTableVersionsAsync(const Model::GetTableVersionsRequest& request, const GetTableVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the definitions of some or all of the tables in a given
         * <code>Database</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetTables">AWS API
         * Reference</a></p>
         */
        virtual Model::GetTablesOutcome GetTables(const Model::GetTablesRequest& request) const;

        /**
         * <p>Retrieves the definitions of some or all of the tables in a given
         * <code>Database</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetTables">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTablesOutcomeCallable GetTablesCallable(const Model::GetTablesRequest& request) const;

        /**
         * <p>Retrieves the definitions of some or all of the tables in a given
         * <code>Database</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetTables">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTablesAsync(const Model::GetTablesRequest& request, const GetTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of tags associated with a resource.</p><p><h3>See Also:</h3>
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetTags">AWS API
         * Reference</a></p>
         */
        virtual Model::GetTagsOutcome GetTags(const Model::GetTagsRequest& request) const;

        /**
         * <p>Retrieves a list of tags associated with a resource.</p><p><h3>See Also:</h3>
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetTags">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTagsOutcomeCallable GetTagsCallable(const Model::GetTagsRequest& request) const;

        /**
         * <p>Retrieves a list of tags associated with a resource.</p><p><h3>See Also:</h3>
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetTags">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTagsAsync(const Model::GetTagsRequest& request, const GetTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the definition of a trigger.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetTrigger">AWS API
         * Reference</a></p>
         */
        virtual Model::GetTriggerOutcome GetTrigger(const Model::GetTriggerRequest& request) const;

        /**
         * <p>Retrieves the definition of a trigger.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetTrigger">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTriggerOutcomeCallable GetTriggerCallable(const Model::GetTriggerRequest& request) const;

        /**
         * <p>Retrieves the definition of a trigger.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetTrigger">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTriggerAsync(const Model::GetTriggerRequest& request, const GetTriggerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets all the triggers associated with a job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetTriggers">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTriggersOutcome GetTriggers(const Model::GetTriggersRequest& request) const;

        /**
         * <p>Gets all the triggers associated with a job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetTriggers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTriggersOutcomeCallable GetTriggersCallable(const Model::GetTriggersRequest& request) const;

        /**
         * <p>Gets all the triggers associated with a job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetTriggers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTriggersAsync(const Model::GetTriggersRequest& request, const GetTriggersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a specified function definition from the Data
         * Catalog.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetUserDefinedFunction">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUserDefinedFunctionOutcome GetUserDefinedFunction(const Model::GetUserDefinedFunctionRequest& request) const;

        /**
         * <p>Retrieves a specified function definition from the Data
         * Catalog.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetUserDefinedFunction">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetUserDefinedFunctionOutcomeCallable GetUserDefinedFunctionCallable(const Model::GetUserDefinedFunctionRequest& request) const;

        /**
         * <p>Retrieves a specified function definition from the Data
         * Catalog.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetUserDefinedFunction">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetUserDefinedFunctionAsync(const Model::GetUserDefinedFunctionRequest& request, const GetUserDefinedFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves multiple function definitions from the Data Catalog.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetUserDefinedFunctions">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUserDefinedFunctionsOutcome GetUserDefinedFunctions(const Model::GetUserDefinedFunctionsRequest& request) const;

        /**
         * <p>Retrieves multiple function definitions from the Data Catalog.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetUserDefinedFunctions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetUserDefinedFunctionsOutcomeCallable GetUserDefinedFunctionsCallable(const Model::GetUserDefinedFunctionsRequest& request) const;

        /**
         * <p>Retrieves multiple function definitions from the Data Catalog.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetUserDefinedFunctions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetUserDefinedFunctionsAsync(const Model::GetUserDefinedFunctionsRequest& request, const GetUserDefinedFunctionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves resource metadata for a workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetWorkflow">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWorkflowOutcome GetWorkflow(const Model::GetWorkflowRequest& request) const;

        /**
         * <p>Retrieves resource metadata for a workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetWorkflow">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetWorkflowOutcomeCallable GetWorkflowCallable(const Model::GetWorkflowRequest& request) const;

        /**
         * <p>Retrieves resource metadata for a workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetWorkflow">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetWorkflowAsync(const Model::GetWorkflowRequest& request, const GetWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the metadata for a given workflow run. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetWorkflowRun">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWorkflowRunOutcome GetWorkflowRun(const Model::GetWorkflowRunRequest& request) const;

        /**
         * <p>Retrieves the metadata for a given workflow run. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetWorkflowRun">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetWorkflowRunOutcomeCallable GetWorkflowRunCallable(const Model::GetWorkflowRunRequest& request) const;

        /**
         * <p>Retrieves the metadata for a given workflow run. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetWorkflowRun">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetWorkflowRunAsync(const Model::GetWorkflowRunRequest& request, const GetWorkflowRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the workflow run properties which were set during the
         * run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetWorkflowRunProperties">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWorkflowRunPropertiesOutcome GetWorkflowRunProperties(const Model::GetWorkflowRunPropertiesRequest& request) const;

        /**
         * <p>Retrieves the workflow run properties which were set during the
         * run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetWorkflowRunProperties">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetWorkflowRunPropertiesOutcomeCallable GetWorkflowRunPropertiesCallable(const Model::GetWorkflowRunPropertiesRequest& request) const;

        /**
         * <p>Retrieves the workflow run properties which were set during the
         * run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetWorkflowRunProperties">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetWorkflowRunPropertiesAsync(const Model::GetWorkflowRunPropertiesRequest& request, const GetWorkflowRunPropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves metadata for all runs of a given workflow.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetWorkflowRuns">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWorkflowRunsOutcome GetWorkflowRuns(const Model::GetWorkflowRunsRequest& request) const;

        /**
         * <p>Retrieves metadata for all runs of a given workflow.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetWorkflowRuns">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetWorkflowRunsOutcomeCallable GetWorkflowRunsCallable(const Model::GetWorkflowRunsRequest& request) const;

        /**
         * <p>Retrieves metadata for all runs of a given workflow.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetWorkflowRuns">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetWorkflowRunsAsync(const Model::GetWorkflowRunsRequest& request, const GetWorkflowRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Imports an existing Amazon Athena Data Catalog to AWS Glue</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ImportCatalogToGlue">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportCatalogToGlueOutcome ImportCatalogToGlue(const Model::ImportCatalogToGlueRequest& request) const;

        /**
         * <p>Imports an existing Amazon Athena Data Catalog to AWS Glue</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ImportCatalogToGlue">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ImportCatalogToGlueOutcomeCallable ImportCatalogToGlueCallable(const Model::ImportCatalogToGlueRequest& request) const;

        /**
         * <p>Imports an existing Amazon Athena Data Catalog to AWS Glue</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ImportCatalogToGlue">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ImportCatalogToGlueAsync(const Model::ImportCatalogToGlueRequest& request, const ImportCatalogToGlueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the names of all crawler resources in this AWS account, or the
         * resources with the specified tag. This operation allows you to see which
         * resources are available in your account, and their names.</p> <p>This operation
         * takes the optional <code>Tags</code> field, which you can use as a filter on the
         * response so that tagged resources can be retrieved as a group. If you choose to
         * use tags filtering, only resources with the tag are retrieved.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ListCrawlers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCrawlersOutcome ListCrawlers(const Model::ListCrawlersRequest& request) const;

        /**
         * <p>Retrieves the names of all crawler resources in this AWS account, or the
         * resources with the specified tag. This operation allows you to see which
         * resources are available in your account, and their names.</p> <p>This operation
         * takes the optional <code>Tags</code> field, which you can use as a filter on the
         * response so that tagged resources can be retrieved as a group. If you choose to
         * use tags filtering, only resources with the tag are retrieved.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ListCrawlers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCrawlersOutcomeCallable ListCrawlersCallable(const Model::ListCrawlersRequest& request) const;

        /**
         * <p>Retrieves the names of all crawler resources in this AWS account, or the
         * resources with the specified tag. This operation allows you to see which
         * resources are available in your account, and their names.</p> <p>This operation
         * takes the optional <code>Tags</code> field, which you can use as a filter on the
         * response so that tagged resources can be retrieved as a group. If you choose to
         * use tags filtering, only resources with the tag are retrieved.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ListCrawlers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCrawlersAsync(const Model::ListCrawlersRequest& request, const ListCrawlersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the names of all <code>DevEndpoint</code> resources in this AWS
         * account, or the resources with the specified tag. This operation allows you to
         * see which resources are available in your account, and their names.</p> <p>This
         * operation takes the optional <code>Tags</code> field, which you can use as a
         * filter on the response so that tagged resources can be retrieved as a group. If
         * you choose to use tags filtering, only resources with the tag are
         * retrieved.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ListDevEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDevEndpointsOutcome ListDevEndpoints(const Model::ListDevEndpointsRequest& request) const;

        /**
         * <p>Retrieves the names of all <code>DevEndpoint</code> resources in this AWS
         * account, or the resources with the specified tag. This operation allows you to
         * see which resources are available in your account, and their names.</p> <p>This
         * operation takes the optional <code>Tags</code> field, which you can use as a
         * filter on the response so that tagged resources can be retrieved as a group. If
         * you choose to use tags filtering, only resources with the tag are
         * retrieved.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ListDevEndpoints">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDevEndpointsOutcomeCallable ListDevEndpointsCallable(const Model::ListDevEndpointsRequest& request) const;

        /**
         * <p>Retrieves the names of all <code>DevEndpoint</code> resources in this AWS
         * account, or the resources with the specified tag. This operation allows you to
         * see which resources are available in your account, and their names.</p> <p>This
         * operation takes the optional <code>Tags</code> field, which you can use as a
         * filter on the response so that tagged resources can be retrieved as a group. If
         * you choose to use tags filtering, only resources with the tag are
         * retrieved.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ListDevEndpoints">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDevEndpointsAsync(const Model::ListDevEndpointsRequest& request, const ListDevEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the names of all job resources in this AWS account, or the
         * resources with the specified tag. This operation allows you to see which
         * resources are available in your account, and their names.</p> <p>This operation
         * takes the optional <code>Tags</code> field, which you can use as a filter on the
         * response so that tagged resources can be retrieved as a group. If you choose to
         * use tags filtering, only resources with the tag are retrieved.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ListJobs">AWS API
         * Reference</a></p>
         */
        virtual Model::ListJobsOutcome ListJobs(const Model::ListJobsRequest& request) const;

        /**
         * <p>Retrieves the names of all job resources in this AWS account, or the
         * resources with the specified tag. This operation allows you to see which
         * resources are available in your account, and their names.</p> <p>This operation
         * takes the optional <code>Tags</code> field, which you can use as a filter on the
         * response so that tagged resources can be retrieved as a group. If you choose to
         * use tags filtering, only resources with the tag are retrieved.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ListJobs">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListJobsOutcomeCallable ListJobsCallable(const Model::ListJobsRequest& request) const;

        /**
         * <p>Retrieves the names of all job resources in this AWS account, or the
         * resources with the specified tag. This operation allows you to see which
         * resources are available in your account, and their names.</p> <p>This operation
         * takes the optional <code>Tags</code> field, which you can use as a filter on the
         * response so that tagged resources can be retrieved as a group. If you choose to
         * use tags filtering, only resources with the tag are retrieved.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ListJobs">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListJobsAsync(const Model::ListJobsRequest& request, const ListJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Retrieves a sortable, filterable list of existing AWS Glue machine learning
         * transforms in this AWS account, or the resources with the specified tag. This
         * operation takes the optional <code>Tags</code> field, which you can use as a
         * filter of the responses so that tagged resources can be retrieved as a group. If
         * you choose to use tag filtering, only resources with the tags are retrieved.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ListMLTransforms">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMLTransformsOutcome ListMLTransforms(const Model::ListMLTransformsRequest& request) const;

        /**
         * <p> Retrieves a sortable, filterable list of existing AWS Glue machine learning
         * transforms in this AWS account, or the resources with the specified tag. This
         * operation takes the optional <code>Tags</code> field, which you can use as a
         * filter of the responses so that tagged resources can be retrieved as a group. If
         * you choose to use tag filtering, only resources with the tags are retrieved.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ListMLTransforms">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMLTransformsOutcomeCallable ListMLTransformsCallable(const Model::ListMLTransformsRequest& request) const;

        /**
         * <p> Retrieves a sortable, filterable list of existing AWS Glue machine learning
         * transforms in this AWS account, or the resources with the specified tag. This
         * operation takes the optional <code>Tags</code> field, which you can use as a
         * filter of the responses so that tagged resources can be retrieved as a group. If
         * you choose to use tag filtering, only resources with the tags are retrieved.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ListMLTransforms">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMLTransformsAsync(const Model::ListMLTransformsRequest& request, const ListMLTransformsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of registries that you have created, with minimal registry
         * information. Registries in the <code>Deleting</code> status will not be included
         * in the results. Empty results will be returned if there are no registries
         * available.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ListRegistries">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRegistriesOutcome ListRegistries(const Model::ListRegistriesRequest& request) const;

        /**
         * <p>Returns a list of registries that you have created, with minimal registry
         * information. Registries in the <code>Deleting</code> status will not be included
         * in the results. Empty results will be returned if there are no registries
         * available.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ListRegistries">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRegistriesOutcomeCallable ListRegistriesCallable(const Model::ListRegistriesRequest& request) const;

        /**
         * <p>Returns a list of registries that you have created, with minimal registry
         * information. Registries in the <code>Deleting</code> status will not be included
         * in the results. Empty results will be returned if there are no registries
         * available.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ListRegistries">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRegistriesAsync(const Model::ListRegistriesRequest& request, const ListRegistriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of schema versions that you have created, with minimal
         * information. Schema versions in Deleted status will not be included in the
         * results. Empty results will be returned if there are no schema versions
         * available.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ListSchemaVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSchemaVersionsOutcome ListSchemaVersions(const Model::ListSchemaVersionsRequest& request) const;

        /**
         * <p>Returns a list of schema versions that you have created, with minimal
         * information. Schema versions in Deleted status will not be included in the
         * results. Empty results will be returned if there are no schema versions
         * available.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ListSchemaVersions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSchemaVersionsOutcomeCallable ListSchemaVersionsCallable(const Model::ListSchemaVersionsRequest& request) const;

        /**
         * <p>Returns a list of schema versions that you have created, with minimal
         * information. Schema versions in Deleted status will not be included in the
         * results. Empty results will be returned if there are no schema versions
         * available.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ListSchemaVersions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSchemaVersionsAsync(const Model::ListSchemaVersionsRequest& request, const ListSchemaVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of schemas with minimal details. Schemas in Deleting status
         * will not be included in the results. Empty results will be returned if there are
         * no schemas available.</p> <p>When the <code>RegistryId</code> is not provided,
         * all the schemas across registries will be part of the API
         * response.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ListSchemas">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSchemasOutcome ListSchemas(const Model::ListSchemasRequest& request) const;

        /**
         * <p>Returns a list of schemas with minimal details. Schemas in Deleting status
         * will not be included in the results. Empty results will be returned if there are
         * no schemas available.</p> <p>When the <code>RegistryId</code> is not provided,
         * all the schemas across registries will be part of the API
         * response.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ListSchemas">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSchemasOutcomeCallable ListSchemasCallable(const Model::ListSchemasRequest& request) const;

        /**
         * <p>Returns a list of schemas with minimal details. Schemas in Deleting status
         * will not be included in the results. Empty results will be returned if there are
         * no schemas available.</p> <p>When the <code>RegistryId</code> is not provided,
         * all the schemas across registries will be part of the API
         * response.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ListSchemas">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSchemasAsync(const Model::ListSchemasRequest& request, const ListSchemasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the names of all trigger resources in this AWS account, or the
         * resources with the specified tag. This operation allows you to see which
         * resources are available in your account, and their names.</p> <p>This operation
         * takes the optional <code>Tags</code> field, which you can use as a filter on the
         * response so that tagged resources can be retrieved as a group. If you choose to
         * use tags filtering, only resources with the tag are retrieved.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ListTriggers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTriggersOutcome ListTriggers(const Model::ListTriggersRequest& request) const;

        /**
         * <p>Retrieves the names of all trigger resources in this AWS account, or the
         * resources with the specified tag. This operation allows you to see which
         * resources are available in your account, and their names.</p> <p>This operation
         * takes the optional <code>Tags</code> field, which you can use as a filter on the
         * response so that tagged resources can be retrieved as a group. If you choose to
         * use tags filtering, only resources with the tag are retrieved.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ListTriggers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTriggersOutcomeCallable ListTriggersCallable(const Model::ListTriggersRequest& request) const;

        /**
         * <p>Retrieves the names of all trigger resources in this AWS account, or the
         * resources with the specified tag. This operation allows you to see which
         * resources are available in your account, and their names.</p> <p>This operation
         * takes the optional <code>Tags</code> field, which you can use as a filter on the
         * response so that tagged resources can be retrieved as a group. If you choose to
         * use tags filtering, only resources with the tag are retrieved.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ListTriggers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTriggersAsync(const Model::ListTriggersRequest& request, const ListTriggersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists names of workflows created in the account.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ListWorkflows">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorkflowsOutcome ListWorkflows(const Model::ListWorkflowsRequest& request) const;

        /**
         * <p>Lists names of workflows created in the account.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ListWorkflows">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListWorkflowsOutcomeCallable ListWorkflowsCallable(const Model::ListWorkflowsRequest& request) const;

        /**
         * <p>Lists names of workflows created in the account.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ListWorkflows">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListWorkflowsAsync(const Model::ListWorkflowsRequest& request, const ListWorkflowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the security configuration for a specified catalog. After the
         * configuration has been set, the specified encryption is applied to every catalog
         * write thereafter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/PutDataCatalogEncryptionSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::PutDataCatalogEncryptionSettingsOutcome PutDataCatalogEncryptionSettings(const Model::PutDataCatalogEncryptionSettingsRequest& request) const;

        /**
         * <p>Sets the security configuration for a specified catalog. After the
         * configuration has been set, the specified encryption is applied to every catalog
         * write thereafter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/PutDataCatalogEncryptionSettings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutDataCatalogEncryptionSettingsOutcomeCallable PutDataCatalogEncryptionSettingsCallable(const Model::PutDataCatalogEncryptionSettingsRequest& request) const;

        /**
         * <p>Sets the security configuration for a specified catalog. After the
         * configuration has been set, the specified encryption is applied to every catalog
         * write thereafter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/PutDataCatalogEncryptionSettings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutDataCatalogEncryptionSettingsAsync(const Model::PutDataCatalogEncryptionSettingsRequest& request, const PutDataCatalogEncryptionSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the Data Catalog resource policy for access control.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/PutResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutResourcePolicyOutcome PutResourcePolicy(const Model::PutResourcePolicyRequest& request) const;

        /**
         * <p>Sets the Data Catalog resource policy for access control.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/PutResourcePolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutResourcePolicyOutcomeCallable PutResourcePolicyCallable(const Model::PutResourcePolicyRequest& request) const;

        /**
         * <p>Sets the Data Catalog resource policy for access control.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/PutResourcePolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutResourcePolicyAsync(const Model::PutResourcePolicyRequest& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Puts the metadata key value pair for a specified schema version ID. A maximum
         * of 10 key value pairs will be allowed per schema version. They can be added over
         * one or more calls.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/PutSchemaVersionMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::PutSchemaVersionMetadataOutcome PutSchemaVersionMetadata(const Model::PutSchemaVersionMetadataRequest& request) const;

        /**
         * <p>Puts the metadata key value pair for a specified schema version ID. A maximum
         * of 10 key value pairs will be allowed per schema version. They can be added over
         * one or more calls.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/PutSchemaVersionMetadata">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutSchemaVersionMetadataOutcomeCallable PutSchemaVersionMetadataCallable(const Model::PutSchemaVersionMetadataRequest& request) const;

        /**
         * <p>Puts the metadata key value pair for a specified schema version ID. A maximum
         * of 10 key value pairs will be allowed per schema version. They can be added over
         * one or more calls.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/PutSchemaVersionMetadata">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutSchemaVersionMetadataAsync(const Model::PutSchemaVersionMetadataRequest& request, const PutSchemaVersionMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Puts the specified workflow run properties for the given workflow run. If a
         * property already exists for the specified run, then it overrides the value
         * otherwise adds the property to existing properties.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/PutWorkflowRunProperties">AWS
         * API Reference</a></p>
         */
        virtual Model::PutWorkflowRunPropertiesOutcome PutWorkflowRunProperties(const Model::PutWorkflowRunPropertiesRequest& request) const;

        /**
         * <p>Puts the specified workflow run properties for the given workflow run. If a
         * property already exists for the specified run, then it overrides the value
         * otherwise adds the property to existing properties.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/PutWorkflowRunProperties">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutWorkflowRunPropertiesOutcomeCallable PutWorkflowRunPropertiesCallable(const Model::PutWorkflowRunPropertiesRequest& request) const;

        /**
         * <p>Puts the specified workflow run properties for the given workflow run. If a
         * property already exists for the specified run, then it overrides the value
         * otherwise adds the property to existing properties.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/PutWorkflowRunProperties">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutWorkflowRunPropertiesAsync(const Model::PutWorkflowRunPropertiesRequest& request, const PutWorkflowRunPropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Queries for the schema version metadata information. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/QuerySchemaVersionMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::QuerySchemaVersionMetadataOutcome QuerySchemaVersionMetadata(const Model::QuerySchemaVersionMetadataRequest& request) const;

        /**
         * <p>Queries for the schema version metadata information. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/QuerySchemaVersionMetadata">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::QuerySchemaVersionMetadataOutcomeCallable QuerySchemaVersionMetadataCallable(const Model::QuerySchemaVersionMetadataRequest& request) const;

        /**
         * <p>Queries for the schema version metadata information. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/QuerySchemaVersionMetadata">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void QuerySchemaVersionMetadataAsync(const Model::QuerySchemaVersionMetadataRequest& request, const QuerySchemaVersionMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds a new version to the existing schema. Returns an error if new version of
         * schema does not meet the compatibility requirements of the schema set. This API
         * will not create a new schema set and will return a 404 error if the schema set
         * is not already present in the Schema Registry.</p> <p>If this is the first
         * schema definition to be registered in the Schema Registry, this API will store
         * the schema version and return immediately. Otherwise, this call has the
         * potential to run longer than other operations due to compatibility modes. You
         * can call the <code>GetSchemaVersion</code> API with the
         * <code>SchemaVersionId</code> to check compatibility modes.</p> <p>If the same
         * schema definition is already stored in Schema Registry as a version, the schema
         * ID of the existing schema is returned to the caller.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/RegisterSchemaVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterSchemaVersionOutcome RegisterSchemaVersion(const Model::RegisterSchemaVersionRequest& request) const;

        /**
         * <p>Adds a new version to the existing schema. Returns an error if new version of
         * schema does not meet the compatibility requirements of the schema set. This API
         * will not create a new schema set and will return a 404 error if the schema set
         * is not already present in the Schema Registry.</p> <p>If this is the first
         * schema definition to be registered in the Schema Registry, this API will store
         * the schema version and return immediately. Otherwise, this call has the
         * potential to run longer than other operations due to compatibility modes. You
         * can call the <code>GetSchemaVersion</code> API with the
         * <code>SchemaVersionId</code> to check compatibility modes.</p> <p>If the same
         * schema definition is already stored in Schema Registry as a version, the schema
         * ID of the existing schema is returned to the caller.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/RegisterSchemaVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterSchemaVersionOutcomeCallable RegisterSchemaVersionCallable(const Model::RegisterSchemaVersionRequest& request) const;

        /**
         * <p>Adds a new version to the existing schema. Returns an error if new version of
         * schema does not meet the compatibility requirements of the schema set. This API
         * will not create a new schema set and will return a 404 error if the schema set
         * is not already present in the Schema Registry.</p> <p>If this is the first
         * schema definition to be registered in the Schema Registry, this API will store
         * the schema version and return immediately. Otherwise, this call has the
         * potential to run longer than other operations due to compatibility modes. You
         * can call the <code>GetSchemaVersion</code> API with the
         * <code>SchemaVersionId</code> to check compatibility modes.</p> <p>If the same
         * schema definition is already stored in Schema Registry as a version, the schema
         * ID of the existing schema is returned to the caller.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/RegisterSchemaVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterSchemaVersionAsync(const Model::RegisterSchemaVersionRequest& request, const RegisterSchemaVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a key value pair from the schema version metadata for the specified
         * schema version ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/RemoveSchemaVersionMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveSchemaVersionMetadataOutcome RemoveSchemaVersionMetadata(const Model::RemoveSchemaVersionMetadataRequest& request) const;

        /**
         * <p>Removes a key value pair from the schema version metadata for the specified
         * schema version ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/RemoveSchemaVersionMetadata">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveSchemaVersionMetadataOutcomeCallable RemoveSchemaVersionMetadataCallable(const Model::RemoveSchemaVersionMetadataRequest& request) const;

        /**
         * <p>Removes a key value pair from the schema version metadata for the specified
         * schema version ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/RemoveSchemaVersionMetadata">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveSchemaVersionMetadataAsync(const Model::RemoveSchemaVersionMetadataRequest& request, const RemoveSchemaVersionMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Resets a bookmark entry.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ResetJobBookmark">AWS
         * API Reference</a></p>
         */
        virtual Model::ResetJobBookmarkOutcome ResetJobBookmark(const Model::ResetJobBookmarkRequest& request) const;

        /**
         * <p>Resets a bookmark entry.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ResetJobBookmark">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResetJobBookmarkOutcomeCallable ResetJobBookmarkCallable(const Model::ResetJobBookmarkRequest& request) const;

        /**
         * <p>Resets a bookmark entry.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ResetJobBookmark">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResetJobBookmarkAsync(const Model::ResetJobBookmarkRequest& request, const ResetJobBookmarkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Restarts selected nodes of a previous partially completed workflow run and
         * resumes the workflow run. The selected nodes and all nodes that are downstream
         * from the selected nodes are run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ResumeWorkflowRun">AWS
         * API Reference</a></p>
         */
        virtual Model::ResumeWorkflowRunOutcome ResumeWorkflowRun(const Model::ResumeWorkflowRunRequest& request) const;

        /**
         * <p>Restarts selected nodes of a previous partially completed workflow run and
         * resumes the workflow run. The selected nodes and all nodes that are downstream
         * from the selected nodes are run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ResumeWorkflowRun">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResumeWorkflowRunOutcomeCallable ResumeWorkflowRunCallable(const Model::ResumeWorkflowRunRequest& request) const;

        /**
         * <p>Restarts selected nodes of a previous partially completed workflow run and
         * resumes the workflow run. The selected nodes and all nodes that are downstream
         * from the selected nodes are run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ResumeWorkflowRun">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResumeWorkflowRunAsync(const Model::ResumeWorkflowRunRequest& request, const ResumeWorkflowRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Searches a set of tables based on properties in the table metadata as well as
         * on the parent database. You can search against text or filter conditions. </p>
         * <p>You can only get tables that you have access to based on the security
         * policies defined in Lake Formation. You need at least a read-only access to the
         * table for it to be returned. If you do not have access to all the columns in the
         * table, these columns will not be searched against when returning the list of
         * tables back to you. If you have access to the columns but not the data in the
         * columns, those columns and the associated metadata for those columns will be
         * included in the search. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/SearchTables">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchTablesOutcome SearchTables(const Model::SearchTablesRequest& request) const;

        /**
         * <p>Searches a set of tables based on properties in the table metadata as well as
         * on the parent database. You can search against text or filter conditions. </p>
         * <p>You can only get tables that you have access to based on the security
         * policies defined in Lake Formation. You need at least a read-only access to the
         * table for it to be returned. If you do not have access to all the columns in the
         * table, these columns will not be searched against when returning the list of
         * tables back to you. If you have access to the columns but not the data in the
         * columns, those columns and the associated metadata for those columns will be
         * included in the search. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/SearchTables">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchTablesOutcomeCallable SearchTablesCallable(const Model::SearchTablesRequest& request) const;

        /**
         * <p>Searches a set of tables based on properties in the table metadata as well as
         * on the parent database. You can search against text or filter conditions. </p>
         * <p>You can only get tables that you have access to based on the security
         * policies defined in Lake Formation. You need at least a read-only access to the
         * table for it to be returned. If you do not have access to all the columns in the
         * table, these columns will not be searched against when returning the list of
         * tables back to you. If you have access to the columns but not the data in the
         * columns, those columns and the associated metadata for those columns will be
         * included in the search. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/SearchTables">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchTablesAsync(const Model::SearchTablesRequest& request, const SearchTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a crawl using the specified crawler, regardless of what is scheduled.
         * If the crawler is already running, returns a <a
         * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-api-exceptions.html#aws-glue-api-exceptions-CrawlerRunningException">CrawlerRunningException</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StartCrawler">AWS
         * API Reference</a></p>
         */
        virtual Model::StartCrawlerOutcome StartCrawler(const Model::StartCrawlerRequest& request) const;

        /**
         * <p>Starts a crawl using the specified crawler, regardless of what is scheduled.
         * If the crawler is already running, returns a <a
         * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-api-exceptions.html#aws-glue-api-exceptions-CrawlerRunningException">CrawlerRunningException</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StartCrawler">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartCrawlerOutcomeCallable StartCrawlerCallable(const Model::StartCrawlerRequest& request) const;

        /**
         * <p>Starts a crawl using the specified crawler, regardless of what is scheduled.
         * If the crawler is already running, returns a <a
         * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-api-exceptions.html#aws-glue-api-exceptions-CrawlerRunningException">CrawlerRunningException</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StartCrawler">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartCrawlerAsync(const Model::StartCrawlerRequest& request, const StartCrawlerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Changes the schedule state of the specified crawler to
         * <code>SCHEDULED</code>, unless the crawler is already running or the schedule
         * state is already <code>SCHEDULED</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StartCrawlerSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::StartCrawlerScheduleOutcome StartCrawlerSchedule(const Model::StartCrawlerScheduleRequest& request) const;

        /**
         * <p>Changes the schedule state of the specified crawler to
         * <code>SCHEDULED</code>, unless the crawler is already running or the schedule
         * state is already <code>SCHEDULED</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StartCrawlerSchedule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartCrawlerScheduleOutcomeCallable StartCrawlerScheduleCallable(const Model::StartCrawlerScheduleRequest& request) const;

        /**
         * <p>Changes the schedule state of the specified crawler to
         * <code>SCHEDULED</code>, unless the crawler is already running or the schedule
         * state is already <code>SCHEDULED</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StartCrawlerSchedule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartCrawlerScheduleAsync(const Model::StartCrawlerScheduleRequest& request, const StartCrawlerScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Begins an asynchronous task to export all labeled data for a particular
         * transform. This task is the only label-related API call that is not part of the
         * typical active learning workflow. You typically use
         * <code>StartExportLabelsTaskRun</code> when you want to work with all of your
         * existing labels at the same time, such as when you want to remove or change
         * labels that were previously submitted as truth. This API operation accepts the
         * <code>TransformId</code> whose labels you want to export and an Amazon Simple
         * Storage Service (Amazon S3) path to export the labels to. The operation returns
         * a <code>TaskRunId</code>. You can check on the status of your task run by
         * calling the <code>GetMLTaskRun</code> API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StartExportLabelsTaskRun">AWS
         * API Reference</a></p>
         */
        virtual Model::StartExportLabelsTaskRunOutcome StartExportLabelsTaskRun(const Model::StartExportLabelsTaskRunRequest& request) const;

        /**
         * <p>Begins an asynchronous task to export all labeled data for a particular
         * transform. This task is the only label-related API call that is not part of the
         * typical active learning workflow. You typically use
         * <code>StartExportLabelsTaskRun</code> when you want to work with all of your
         * existing labels at the same time, such as when you want to remove or change
         * labels that were previously submitted as truth. This API operation accepts the
         * <code>TransformId</code> whose labels you want to export and an Amazon Simple
         * Storage Service (Amazon S3) path to export the labels to. The operation returns
         * a <code>TaskRunId</code>. You can check on the status of your task run by
         * calling the <code>GetMLTaskRun</code> API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StartExportLabelsTaskRun">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartExportLabelsTaskRunOutcomeCallable StartExportLabelsTaskRunCallable(const Model::StartExportLabelsTaskRunRequest& request) const;

        /**
         * <p>Begins an asynchronous task to export all labeled data for a particular
         * transform. This task is the only label-related API call that is not part of the
         * typical active learning workflow. You typically use
         * <code>StartExportLabelsTaskRun</code> when you want to work with all of your
         * existing labels at the same time, such as when you want to remove or change
         * labels that were previously submitted as truth. This API operation accepts the
         * <code>TransformId</code> whose labels you want to export and an Amazon Simple
         * Storage Service (Amazon S3) path to export the labels to. The operation returns
         * a <code>TaskRunId</code>. You can check on the status of your task run by
         * calling the <code>GetMLTaskRun</code> API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StartExportLabelsTaskRun">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartExportLabelsTaskRunAsync(const Model::StartExportLabelsTaskRunRequest& request, const StartExportLabelsTaskRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables you to provide additional labels (examples of truth) to be used to
         * teach the machine learning transform and improve its quality. This API operation
         * is generally used as part of the active learning workflow that starts with the
         * <code>StartMLLabelingSetGenerationTaskRun</code> call and that ultimately
         * results in improving the quality of your machine learning transform. </p>
         * <p>After the <code>StartMLLabelingSetGenerationTaskRun</code> finishes, AWS Glue
         * machine learning will have generated a series of questions for humans to answer.
         * (Answering these questions is often called 'labeling' in the machine learning
         * workflows). In the case of the <code>FindMatches</code> transform, these
         * questions are of the form, “What is the correct way to group these rows together
         * into groups composed entirely of matching records?” After the labeling process
         * is finished, users upload their answers/labels with a call to
         * <code>StartImportLabelsTaskRun</code>. After
         * <code>StartImportLabelsTaskRun</code> finishes, all future runs of the machine
         * learning transform use the new and improved labels and perform a higher-quality
         * transformation.</p> <p>By default,
         * <code>StartMLLabelingSetGenerationTaskRun</code> continually learns from and
         * combines all labels that you upload unless you set <code>Replace</code> to true.
         * If you set <code>Replace</code> to true, <code>StartImportLabelsTaskRun</code>
         * deletes and forgets all previously uploaded labels and learns only from the
         * exact set that you upload. Replacing labels can be helpful if you realize that
         * you previously uploaded incorrect labels, and you believe that they are having a
         * negative effect on your transform quality.</p> <p>You can check on the status of
         * your task run by calling the <code>GetMLTaskRun</code> operation. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StartImportLabelsTaskRun">AWS
         * API Reference</a></p>
         */
        virtual Model::StartImportLabelsTaskRunOutcome StartImportLabelsTaskRun(const Model::StartImportLabelsTaskRunRequest& request) const;

        /**
         * <p>Enables you to provide additional labels (examples of truth) to be used to
         * teach the machine learning transform and improve its quality. This API operation
         * is generally used as part of the active learning workflow that starts with the
         * <code>StartMLLabelingSetGenerationTaskRun</code> call and that ultimately
         * results in improving the quality of your machine learning transform. </p>
         * <p>After the <code>StartMLLabelingSetGenerationTaskRun</code> finishes, AWS Glue
         * machine learning will have generated a series of questions for humans to answer.
         * (Answering these questions is often called 'labeling' in the machine learning
         * workflows). In the case of the <code>FindMatches</code> transform, these
         * questions are of the form, “What is the correct way to group these rows together
         * into groups composed entirely of matching records?” After the labeling process
         * is finished, users upload their answers/labels with a call to
         * <code>StartImportLabelsTaskRun</code>. After
         * <code>StartImportLabelsTaskRun</code> finishes, all future runs of the machine
         * learning transform use the new and improved labels and perform a higher-quality
         * transformation.</p> <p>By default,
         * <code>StartMLLabelingSetGenerationTaskRun</code> continually learns from and
         * combines all labels that you upload unless you set <code>Replace</code> to true.
         * If you set <code>Replace</code> to true, <code>StartImportLabelsTaskRun</code>
         * deletes and forgets all previously uploaded labels and learns only from the
         * exact set that you upload. Replacing labels can be helpful if you realize that
         * you previously uploaded incorrect labels, and you believe that they are having a
         * negative effect on your transform quality.</p> <p>You can check on the status of
         * your task run by calling the <code>GetMLTaskRun</code> operation. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StartImportLabelsTaskRun">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartImportLabelsTaskRunOutcomeCallable StartImportLabelsTaskRunCallable(const Model::StartImportLabelsTaskRunRequest& request) const;

        /**
         * <p>Enables you to provide additional labels (examples of truth) to be used to
         * teach the machine learning transform and improve its quality. This API operation
         * is generally used as part of the active learning workflow that starts with the
         * <code>StartMLLabelingSetGenerationTaskRun</code> call and that ultimately
         * results in improving the quality of your machine learning transform. </p>
         * <p>After the <code>StartMLLabelingSetGenerationTaskRun</code> finishes, AWS Glue
         * machine learning will have generated a series of questions for humans to answer.
         * (Answering these questions is often called 'labeling' in the machine learning
         * workflows). In the case of the <code>FindMatches</code> transform, these
         * questions are of the form, “What is the correct way to group these rows together
         * into groups composed entirely of matching records?” After the labeling process
         * is finished, users upload their answers/labels with a call to
         * <code>StartImportLabelsTaskRun</code>. After
         * <code>StartImportLabelsTaskRun</code> finishes, all future runs of the machine
         * learning transform use the new and improved labels and perform a higher-quality
         * transformation.</p> <p>By default,
         * <code>StartMLLabelingSetGenerationTaskRun</code> continually learns from and
         * combines all labels that you upload unless you set <code>Replace</code> to true.
         * If you set <code>Replace</code> to true, <code>StartImportLabelsTaskRun</code>
         * deletes and forgets all previously uploaded labels and learns only from the
         * exact set that you upload. Replacing labels can be helpful if you realize that
         * you previously uploaded incorrect labels, and you believe that they are having a
         * negative effect on your transform quality.</p> <p>You can check on the status of
         * your task run by calling the <code>GetMLTaskRun</code> operation. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StartImportLabelsTaskRun">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartImportLabelsTaskRunAsync(const Model::StartImportLabelsTaskRunRequest& request, const StartImportLabelsTaskRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a job run using a job definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StartJobRun">AWS
         * API Reference</a></p>
         */
        virtual Model::StartJobRunOutcome StartJobRun(const Model::StartJobRunRequest& request) const;

        /**
         * <p>Starts a job run using a job definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StartJobRun">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartJobRunOutcomeCallable StartJobRunCallable(const Model::StartJobRunRequest& request) const;

        /**
         * <p>Starts a job run using a job definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StartJobRun">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartJobRunAsync(const Model::StartJobRunRequest& request, const StartJobRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a task to estimate the quality of the transform. </p> <p>When you
         * provide label sets as examples of truth, AWS Glue machine learning uses some of
         * those examples to learn from them. The rest of the labels are used as a test to
         * estimate quality.</p> <p>Returns a unique identifier for the run. You can call
         * <code>GetMLTaskRun</code> to get more information about the stats of the
         * <code>EvaluationTaskRun</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StartMLEvaluationTaskRun">AWS
         * API Reference</a></p>
         */
        virtual Model::StartMLEvaluationTaskRunOutcome StartMLEvaluationTaskRun(const Model::StartMLEvaluationTaskRunRequest& request) const;

        /**
         * <p>Starts a task to estimate the quality of the transform. </p> <p>When you
         * provide label sets as examples of truth, AWS Glue machine learning uses some of
         * those examples to learn from them. The rest of the labels are used as a test to
         * estimate quality.</p> <p>Returns a unique identifier for the run. You can call
         * <code>GetMLTaskRun</code> to get more information about the stats of the
         * <code>EvaluationTaskRun</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StartMLEvaluationTaskRun">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartMLEvaluationTaskRunOutcomeCallable StartMLEvaluationTaskRunCallable(const Model::StartMLEvaluationTaskRunRequest& request) const;

        /**
         * <p>Starts a task to estimate the quality of the transform. </p> <p>When you
         * provide label sets as examples of truth, AWS Glue machine learning uses some of
         * those examples to learn from them. The rest of the labels are used as a test to
         * estimate quality.</p> <p>Returns a unique identifier for the run. You can call
         * <code>GetMLTaskRun</code> to get more information about the stats of the
         * <code>EvaluationTaskRun</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StartMLEvaluationTaskRun">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartMLEvaluationTaskRunAsync(const Model::StartMLEvaluationTaskRunRequest& request, const StartMLEvaluationTaskRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts the active learning workflow for your machine learning transform to
         * improve the transform's quality by generating label sets and adding labels.</p>
         * <p>When the <code>StartMLLabelingSetGenerationTaskRun</code> finishes, AWS Glue
         * will have generated a "labeling set" or a set of questions for humans to
         * answer.</p> <p>In the case of the <code>FindMatches</code> transform, these
         * questions are of the form, “What is the correct way to group these rows together
         * into groups composed entirely of matching records?” </p> <p>After the labeling
         * process is finished, you can upload your labels with a call to
         * <code>StartImportLabelsTaskRun</code>. After
         * <code>StartImportLabelsTaskRun</code> finishes, all future runs of the machine
         * learning transform will use the new and improved labels and perform a
         * higher-quality transformation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StartMLLabelingSetGenerationTaskRun">AWS
         * API Reference</a></p>
         */
        virtual Model::StartMLLabelingSetGenerationTaskRunOutcome StartMLLabelingSetGenerationTaskRun(const Model::StartMLLabelingSetGenerationTaskRunRequest& request) const;

        /**
         * <p>Starts the active learning workflow for your machine learning transform to
         * improve the transform's quality by generating label sets and adding labels.</p>
         * <p>When the <code>StartMLLabelingSetGenerationTaskRun</code> finishes, AWS Glue
         * will have generated a "labeling set" or a set of questions for humans to
         * answer.</p> <p>In the case of the <code>FindMatches</code> transform, these
         * questions are of the form, “What is the correct way to group these rows together
         * into groups composed entirely of matching records?” </p> <p>After the labeling
         * process is finished, you can upload your labels with a call to
         * <code>StartImportLabelsTaskRun</code>. After
         * <code>StartImportLabelsTaskRun</code> finishes, all future runs of the machine
         * learning transform will use the new and improved labels and perform a
         * higher-quality transformation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StartMLLabelingSetGenerationTaskRun">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartMLLabelingSetGenerationTaskRunOutcomeCallable StartMLLabelingSetGenerationTaskRunCallable(const Model::StartMLLabelingSetGenerationTaskRunRequest& request) const;

        /**
         * <p>Starts the active learning workflow for your machine learning transform to
         * improve the transform's quality by generating label sets and adding labels.</p>
         * <p>When the <code>StartMLLabelingSetGenerationTaskRun</code> finishes, AWS Glue
         * will have generated a "labeling set" or a set of questions for humans to
         * answer.</p> <p>In the case of the <code>FindMatches</code> transform, these
         * questions are of the form, “What is the correct way to group these rows together
         * into groups composed entirely of matching records?” </p> <p>After the labeling
         * process is finished, you can upload your labels with a call to
         * <code>StartImportLabelsTaskRun</code>. After
         * <code>StartImportLabelsTaskRun</code> finishes, all future runs of the machine
         * learning transform will use the new and improved labels and perform a
         * higher-quality transformation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StartMLLabelingSetGenerationTaskRun">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartMLLabelingSetGenerationTaskRunAsync(const Model::StartMLLabelingSetGenerationTaskRunRequest& request, const StartMLLabelingSetGenerationTaskRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts an existing trigger. See <a
         * href="https://docs.aws.amazon.com/glue/latest/dg/trigger-job.html">Triggering
         * Jobs</a> for information about how different types of trigger are
         * started.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StartTrigger">AWS
         * API Reference</a></p>
         */
        virtual Model::StartTriggerOutcome StartTrigger(const Model::StartTriggerRequest& request) const;

        /**
         * <p>Starts an existing trigger. See <a
         * href="https://docs.aws.amazon.com/glue/latest/dg/trigger-job.html">Triggering
         * Jobs</a> for information about how different types of trigger are
         * started.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StartTrigger">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartTriggerOutcomeCallable StartTriggerCallable(const Model::StartTriggerRequest& request) const;

        /**
         * <p>Starts an existing trigger. See <a
         * href="https://docs.aws.amazon.com/glue/latest/dg/trigger-job.html">Triggering
         * Jobs</a> for information about how different types of trigger are
         * started.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StartTrigger">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartTriggerAsync(const Model::StartTriggerRequest& request, const StartTriggerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a new run of the specified workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StartWorkflowRun">AWS
         * API Reference</a></p>
         */
        virtual Model::StartWorkflowRunOutcome StartWorkflowRun(const Model::StartWorkflowRunRequest& request) const;

        /**
         * <p>Starts a new run of the specified workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StartWorkflowRun">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartWorkflowRunOutcomeCallable StartWorkflowRunCallable(const Model::StartWorkflowRunRequest& request) const;

        /**
         * <p>Starts a new run of the specified workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StartWorkflowRun">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartWorkflowRunAsync(const Model::StartWorkflowRunRequest& request, const StartWorkflowRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>If the specified crawler is running, stops the crawl.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StopCrawler">AWS
         * API Reference</a></p>
         */
        virtual Model::StopCrawlerOutcome StopCrawler(const Model::StopCrawlerRequest& request) const;

        /**
         * <p>If the specified crawler is running, stops the crawl.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StopCrawler">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopCrawlerOutcomeCallable StopCrawlerCallable(const Model::StopCrawlerRequest& request) const;

        /**
         * <p>If the specified crawler is running, stops the crawl.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StopCrawler">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopCrawlerAsync(const Model::StopCrawlerRequest& request, const StopCrawlerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the schedule state of the specified crawler to
         * <code>NOT_SCHEDULED</code>, but does not stop the crawler if it is already
         * running.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StopCrawlerSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::StopCrawlerScheduleOutcome StopCrawlerSchedule(const Model::StopCrawlerScheduleRequest& request) const;

        /**
         * <p>Sets the schedule state of the specified crawler to
         * <code>NOT_SCHEDULED</code>, but does not stop the crawler if it is already
         * running.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StopCrawlerSchedule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopCrawlerScheduleOutcomeCallable StopCrawlerScheduleCallable(const Model::StopCrawlerScheduleRequest& request) const;

        /**
         * <p>Sets the schedule state of the specified crawler to
         * <code>NOT_SCHEDULED</code>, but does not stop the crawler if it is already
         * running.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StopCrawlerSchedule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopCrawlerScheduleAsync(const Model::StopCrawlerScheduleRequest& request, const StopCrawlerScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops a specified trigger.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StopTrigger">AWS
         * API Reference</a></p>
         */
        virtual Model::StopTriggerOutcome StopTrigger(const Model::StopTriggerRequest& request) const;

        /**
         * <p>Stops a specified trigger.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StopTrigger">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopTriggerOutcomeCallable StopTriggerCallable(const Model::StopTriggerRequest& request) const;

        /**
         * <p>Stops a specified trigger.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StopTrigger">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopTriggerAsync(const Model::StopTriggerRequest& request, const StopTriggerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops the execution of the specified workflow run.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StopWorkflowRun">AWS
         * API Reference</a></p>
         */
        virtual Model::StopWorkflowRunOutcome StopWorkflowRun(const Model::StopWorkflowRunRequest& request) const;

        /**
         * <p>Stops the execution of the specified workflow run.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StopWorkflowRun">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopWorkflowRunOutcomeCallable StopWorkflowRunCallable(const Model::StopWorkflowRunRequest& request) const;

        /**
         * <p>Stops the execution of the specified workflow run.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StopWorkflowRun">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopWorkflowRunAsync(const Model::StopWorkflowRunRequest& request, const StopWorkflowRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds tags to a resource. A tag is a label you can assign to an AWS resource.
         * In AWS Glue, you can tag only certain resources. For information about what
         * resources you can tag, see <a
         * href="https://docs.aws.amazon.com/glue/latest/dg/monitor-tags.html">AWS Tags in
         * AWS Glue</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds tags to a resource. A tag is a label you can assign to an AWS resource.
         * In AWS Glue, you can tag only certain resources. For information about what
         * resources you can tag, see <a
         * href="https://docs.aws.amazon.com/glue/latest/dg/monitor-tags.html">AWS Tags in
         * AWS Glue</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds tags to a resource. A tag is a label you can assign to an AWS resource.
         * In AWS Glue, you can tag only certain resources. For information about what
         * resources you can tag, see <a
         * href="https://docs.aws.amazon.com/glue/latest/dg/monitor-tags.html">AWS Tags in
         * AWS Glue</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies an existing classifier (a <code>GrokClassifier</code>, an
         * <code>XMLClassifier</code>, a <code>JsonClassifier</code>, or a
         * <code>CsvClassifier</code>, depending on which field is present).</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateClassifier">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateClassifierOutcome UpdateClassifier(const Model::UpdateClassifierRequest& request) const;

        /**
         * <p>Modifies an existing classifier (a <code>GrokClassifier</code>, an
         * <code>XMLClassifier</code>, a <code>JsonClassifier</code>, or a
         * <code>CsvClassifier</code>, depending on which field is present).</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateClassifier">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateClassifierOutcomeCallable UpdateClassifierCallable(const Model::UpdateClassifierRequest& request) const;

        /**
         * <p>Modifies an existing classifier (a <code>GrokClassifier</code>, an
         * <code>XMLClassifier</code>, a <code>JsonClassifier</code>, or a
         * <code>CsvClassifier</code>, depending on which field is present).</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateClassifier">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateClassifierAsync(const Model::UpdateClassifierRequest& request, const UpdateClassifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates or updates partition statistics of columns.</p> <p>The Identity and
         * Access Management (IAM) permission required for this operation is
         * <code>UpdatePartition</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateColumnStatisticsForPartition">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateColumnStatisticsForPartitionOutcome UpdateColumnStatisticsForPartition(const Model::UpdateColumnStatisticsForPartitionRequest& request) const;

        /**
         * <p>Creates or updates partition statistics of columns.</p> <p>The Identity and
         * Access Management (IAM) permission required for this operation is
         * <code>UpdatePartition</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateColumnStatisticsForPartition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateColumnStatisticsForPartitionOutcomeCallable UpdateColumnStatisticsForPartitionCallable(const Model::UpdateColumnStatisticsForPartitionRequest& request) const;

        /**
         * <p>Creates or updates partition statistics of columns.</p> <p>The Identity and
         * Access Management (IAM) permission required for this operation is
         * <code>UpdatePartition</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateColumnStatisticsForPartition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateColumnStatisticsForPartitionAsync(const Model::UpdateColumnStatisticsForPartitionRequest& request, const UpdateColumnStatisticsForPartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates or updates table statistics of columns.</p> <p>The Identity and
         * Access Management (IAM) permission required for this operation is
         * <code>UpdateTable</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateColumnStatisticsForTable">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateColumnStatisticsForTableOutcome UpdateColumnStatisticsForTable(const Model::UpdateColumnStatisticsForTableRequest& request) const;

        /**
         * <p>Creates or updates table statistics of columns.</p> <p>The Identity and
         * Access Management (IAM) permission required for this operation is
         * <code>UpdateTable</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateColumnStatisticsForTable">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateColumnStatisticsForTableOutcomeCallable UpdateColumnStatisticsForTableCallable(const Model::UpdateColumnStatisticsForTableRequest& request) const;

        /**
         * <p>Creates or updates table statistics of columns.</p> <p>The Identity and
         * Access Management (IAM) permission required for this operation is
         * <code>UpdateTable</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateColumnStatisticsForTable">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateColumnStatisticsForTableAsync(const Model::UpdateColumnStatisticsForTableRequest& request, const UpdateColumnStatisticsForTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a connection definition in the Data Catalog.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConnectionOutcome UpdateConnection(const Model::UpdateConnectionRequest& request) const;

        /**
         * <p>Updates a connection definition in the Data Catalog.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateConnection">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateConnectionOutcomeCallable UpdateConnectionCallable(const Model::UpdateConnectionRequest& request) const;

        /**
         * <p>Updates a connection definition in the Data Catalog.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateConnection">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateConnectionAsync(const Model::UpdateConnectionRequest& request, const UpdateConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a crawler. If a crawler is running, you must stop it using
         * <code>StopCrawler</code> before updating it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateCrawler">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCrawlerOutcome UpdateCrawler(const Model::UpdateCrawlerRequest& request) const;

        /**
         * <p>Updates a crawler. If a crawler is running, you must stop it using
         * <code>StopCrawler</code> before updating it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateCrawler">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateCrawlerOutcomeCallable UpdateCrawlerCallable(const Model::UpdateCrawlerRequest& request) const;

        /**
         * <p>Updates a crawler. If a crawler is running, you must stop it using
         * <code>StopCrawler</code> before updating it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateCrawler">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateCrawlerAsync(const Model::UpdateCrawlerRequest& request, const UpdateCrawlerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the schedule of a crawler using a <code>cron</code> expression.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateCrawlerSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCrawlerScheduleOutcome UpdateCrawlerSchedule(const Model::UpdateCrawlerScheduleRequest& request) const;

        /**
         * <p>Updates the schedule of a crawler using a <code>cron</code> expression.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateCrawlerSchedule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateCrawlerScheduleOutcomeCallable UpdateCrawlerScheduleCallable(const Model::UpdateCrawlerScheduleRequest& request) const;

        /**
         * <p>Updates the schedule of a crawler using a <code>cron</code> expression.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateCrawlerSchedule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateCrawlerScheduleAsync(const Model::UpdateCrawlerScheduleRequest& request, const UpdateCrawlerScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing database definition in a Data Catalog.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateDatabase">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDatabaseOutcome UpdateDatabase(const Model::UpdateDatabaseRequest& request) const;

        /**
         * <p>Updates an existing database definition in a Data Catalog.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateDatabase">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDatabaseOutcomeCallable UpdateDatabaseCallable(const Model::UpdateDatabaseRequest& request) const;

        /**
         * <p>Updates an existing database definition in a Data Catalog.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateDatabase">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDatabaseAsync(const Model::UpdateDatabaseRequest& request, const UpdateDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a specified development endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateDevEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDevEndpointOutcome UpdateDevEndpoint(const Model::UpdateDevEndpointRequest& request) const;

        /**
         * <p>Updates a specified development endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateDevEndpoint">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDevEndpointOutcomeCallable UpdateDevEndpointCallable(const Model::UpdateDevEndpointRequest& request) const;

        /**
         * <p>Updates a specified development endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateDevEndpoint">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDevEndpointAsync(const Model::UpdateDevEndpointRequest& request, const UpdateDevEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing job definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateJob">AWS API
         * Reference</a></p>
         */
        virtual Model::UpdateJobOutcome UpdateJob(const Model::UpdateJobRequest& request) const;

        /**
         * <p>Updates an existing job definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateJob">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateJobOutcomeCallable UpdateJobCallable(const Model::UpdateJobRequest& request) const;

        /**
         * <p>Updates an existing job definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateJob">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateJobAsync(const Model::UpdateJobRequest& request, const UpdateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing machine learning transform. Call this operation to tune
         * the algorithm parameters to achieve better results.</p> <p>After calling this
         * operation, you can call the <code>StartMLEvaluationTaskRun</code> operation to
         * assess how well your new parameters achieved your goals (such as improving the
         * quality of your machine learning transform, or making it more
         * cost-effective).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateMLTransform">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMLTransformOutcome UpdateMLTransform(const Model::UpdateMLTransformRequest& request) const;

        /**
         * <p>Updates an existing machine learning transform. Call this operation to tune
         * the algorithm parameters to achieve better results.</p> <p>After calling this
         * operation, you can call the <code>StartMLEvaluationTaskRun</code> operation to
         * assess how well your new parameters achieved your goals (such as improving the
         * quality of your machine learning transform, or making it more
         * cost-effective).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateMLTransform">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateMLTransformOutcomeCallable UpdateMLTransformCallable(const Model::UpdateMLTransformRequest& request) const;

        /**
         * <p>Updates an existing machine learning transform. Call this operation to tune
         * the algorithm parameters to achieve better results.</p> <p>After calling this
         * operation, you can call the <code>StartMLEvaluationTaskRun</code> operation to
         * assess how well your new parameters achieved your goals (such as improving the
         * quality of your machine learning transform, or making it more
         * cost-effective).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateMLTransform">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateMLTransformAsync(const Model::UpdateMLTransformRequest& request, const UpdateMLTransformResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a partition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdatePartition">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePartitionOutcome UpdatePartition(const Model::UpdatePartitionRequest& request) const;

        /**
         * <p>Updates a partition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdatePartition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdatePartitionOutcomeCallable UpdatePartitionCallable(const Model::UpdatePartitionRequest& request) const;

        /**
         * <p>Updates a partition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdatePartition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdatePartitionAsync(const Model::UpdatePartitionRequest& request, const UpdatePartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing registry which is used to hold a collection of schemas.
         * The updated properties relate to the registry, and do not modify any of the
         * schemas within the registry. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateRegistry">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRegistryOutcome UpdateRegistry(const Model::UpdateRegistryRequest& request) const;

        /**
         * <p>Updates an existing registry which is used to hold a collection of schemas.
         * The updated properties relate to the registry, and do not modify any of the
         * schemas within the registry. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateRegistry">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRegistryOutcomeCallable UpdateRegistryCallable(const Model::UpdateRegistryRequest& request) const;

        /**
         * <p>Updates an existing registry which is used to hold a collection of schemas.
         * The updated properties relate to the registry, and do not modify any of the
         * schemas within the registry. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateRegistry">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRegistryAsync(const Model::UpdateRegistryRequest& request, const UpdateRegistryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the description, compatibility setting, or version checkpoint for a
         * schema set.</p> <p>For updating the compatibility setting, the call will not
         * validate compatibility for the entire set of schema versions with the new
         * compatibility setting. If the value for <code>Compatibility</code> is provided,
         * the <code>VersionNumber</code> (a checkpoint) is also required. The API will
         * validate the checkpoint version number for consistency.</p> <p>If the value for
         * the <code>VersionNumber</code> (checkpoint) is provided,
         * <code>Compatibility</code> is optional and this can be used to set/reset a
         * checkpoint for the schema.</p> <p>This update will happen only if the schema is
         * in the AVAILABLE state.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateSchema">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSchemaOutcome UpdateSchema(const Model::UpdateSchemaRequest& request) const;

        /**
         * <p>Updates the description, compatibility setting, or version checkpoint for a
         * schema set.</p> <p>For updating the compatibility setting, the call will not
         * validate compatibility for the entire set of schema versions with the new
         * compatibility setting. If the value for <code>Compatibility</code> is provided,
         * the <code>VersionNumber</code> (a checkpoint) is also required. The API will
         * validate the checkpoint version number for consistency.</p> <p>If the value for
         * the <code>VersionNumber</code> (checkpoint) is provided,
         * <code>Compatibility</code> is optional and this can be used to set/reset a
         * checkpoint for the schema.</p> <p>This update will happen only if the schema is
         * in the AVAILABLE state.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateSchema">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSchemaOutcomeCallable UpdateSchemaCallable(const Model::UpdateSchemaRequest& request) const;

        /**
         * <p>Updates the description, compatibility setting, or version checkpoint for a
         * schema set.</p> <p>For updating the compatibility setting, the call will not
         * validate compatibility for the entire set of schema versions with the new
         * compatibility setting. If the value for <code>Compatibility</code> is provided,
         * the <code>VersionNumber</code> (a checkpoint) is also required. The API will
         * validate the checkpoint version number for consistency.</p> <p>If the value for
         * the <code>VersionNumber</code> (checkpoint) is provided,
         * <code>Compatibility</code> is optional and this can be used to set/reset a
         * checkpoint for the schema.</p> <p>This update will happen only if the schema is
         * in the AVAILABLE state.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateSchema">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSchemaAsync(const Model::UpdateSchemaRequest& request, const UpdateSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a metadata table in the Data Catalog.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateTable">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTableOutcome UpdateTable(const Model::UpdateTableRequest& request) const;

        /**
         * <p>Updates a metadata table in the Data Catalog.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateTable">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateTableOutcomeCallable UpdateTableCallable(const Model::UpdateTableRequest& request) const;

        /**
         * <p>Updates a metadata table in the Data Catalog.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateTable">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateTableAsync(const Model::UpdateTableRequest& request, const UpdateTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a trigger definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateTrigger">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTriggerOutcome UpdateTrigger(const Model::UpdateTriggerRequest& request) const;

        /**
         * <p>Updates a trigger definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateTrigger">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateTriggerOutcomeCallable UpdateTriggerCallable(const Model::UpdateTriggerRequest& request) const;

        /**
         * <p>Updates a trigger definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateTrigger">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateTriggerAsync(const Model::UpdateTriggerRequest& request, const UpdateTriggerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing function definition in the Data Catalog.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateUserDefinedFunction">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserDefinedFunctionOutcome UpdateUserDefinedFunction(const Model::UpdateUserDefinedFunctionRequest& request) const;

        /**
         * <p>Updates an existing function definition in the Data Catalog.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateUserDefinedFunction">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateUserDefinedFunctionOutcomeCallable UpdateUserDefinedFunctionCallable(const Model::UpdateUserDefinedFunctionRequest& request) const;

        /**
         * <p>Updates an existing function definition in the Data Catalog.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateUserDefinedFunction">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateUserDefinedFunctionAsync(const Model::UpdateUserDefinedFunctionRequest& request, const UpdateUserDefinedFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateWorkflow">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWorkflowOutcome UpdateWorkflow(const Model::UpdateWorkflowRequest& request) const;

        /**
         * <p>Updates an existing workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateWorkflow">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateWorkflowOutcomeCallable UpdateWorkflowCallable(const Model::UpdateWorkflowRequest& request) const;

        /**
         * <p>Updates an existing workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateWorkflow">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateWorkflowAsync(const Model::UpdateWorkflowRequest& request, const UpdateWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void BatchCreatePartitionAsyncHelper(const Model::BatchCreatePartitionRequest& request, const BatchCreatePartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchDeleteConnectionAsyncHelper(const Model::BatchDeleteConnectionRequest& request, const BatchDeleteConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchDeletePartitionAsyncHelper(const Model::BatchDeletePartitionRequest& request, const BatchDeletePartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchDeleteTableAsyncHelper(const Model::BatchDeleteTableRequest& request, const BatchDeleteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchDeleteTableVersionAsyncHelper(const Model::BatchDeleteTableVersionRequest& request, const BatchDeleteTableVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchGetCrawlersAsyncHelper(const Model::BatchGetCrawlersRequest& request, const BatchGetCrawlersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchGetDevEndpointsAsyncHelper(const Model::BatchGetDevEndpointsRequest& request, const BatchGetDevEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchGetJobsAsyncHelper(const Model::BatchGetJobsRequest& request, const BatchGetJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchGetPartitionAsyncHelper(const Model::BatchGetPartitionRequest& request, const BatchGetPartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchGetTriggersAsyncHelper(const Model::BatchGetTriggersRequest& request, const BatchGetTriggersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchGetWorkflowsAsyncHelper(const Model::BatchGetWorkflowsRequest& request, const BatchGetWorkflowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchStopJobRunAsyncHelper(const Model::BatchStopJobRunRequest& request, const BatchStopJobRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchUpdatePartitionAsyncHelper(const Model::BatchUpdatePartitionRequest& request, const BatchUpdatePartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CancelMLTaskRunAsyncHelper(const Model::CancelMLTaskRunRequest& request, const CancelMLTaskRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CheckSchemaVersionValidityAsyncHelper(const Model::CheckSchemaVersionValidityRequest& request, const CheckSchemaVersionValidityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateClassifierAsyncHelper(const Model::CreateClassifierRequest& request, const CreateClassifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateConnectionAsyncHelper(const Model::CreateConnectionRequest& request, const CreateConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateCrawlerAsyncHelper(const Model::CreateCrawlerRequest& request, const CreateCrawlerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDatabaseAsyncHelper(const Model::CreateDatabaseRequest& request, const CreateDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDevEndpointAsyncHelper(const Model::CreateDevEndpointRequest& request, const CreateDevEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateJobAsyncHelper(const Model::CreateJobRequest& request, const CreateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateMLTransformAsyncHelper(const Model::CreateMLTransformRequest& request, const CreateMLTransformResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePartitionAsyncHelper(const Model::CreatePartitionRequest& request, const CreatePartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePartitionIndexAsyncHelper(const Model::CreatePartitionIndexRequest& request, const CreatePartitionIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateRegistryAsyncHelper(const Model::CreateRegistryRequest& request, const CreateRegistryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateSchemaAsyncHelper(const Model::CreateSchemaRequest& request, const CreateSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateScriptAsyncHelper(const Model::CreateScriptRequest& request, const CreateScriptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateSecurityConfigurationAsyncHelper(const Model::CreateSecurityConfigurationRequest& request, const CreateSecurityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateTableAsyncHelper(const Model::CreateTableRequest& request, const CreateTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateTriggerAsyncHelper(const Model::CreateTriggerRequest& request, const CreateTriggerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateUserDefinedFunctionAsyncHelper(const Model::CreateUserDefinedFunctionRequest& request, const CreateUserDefinedFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateWorkflowAsyncHelper(const Model::CreateWorkflowRequest& request, const CreateWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteClassifierAsyncHelper(const Model::DeleteClassifierRequest& request, const DeleteClassifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteColumnStatisticsForPartitionAsyncHelper(const Model::DeleteColumnStatisticsForPartitionRequest& request, const DeleteColumnStatisticsForPartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteColumnStatisticsForTableAsyncHelper(const Model::DeleteColumnStatisticsForTableRequest& request, const DeleteColumnStatisticsForTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteConnectionAsyncHelper(const Model::DeleteConnectionRequest& request, const DeleteConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteCrawlerAsyncHelper(const Model::DeleteCrawlerRequest& request, const DeleteCrawlerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDatabaseAsyncHelper(const Model::DeleteDatabaseRequest& request, const DeleteDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDevEndpointAsyncHelper(const Model::DeleteDevEndpointRequest& request, const DeleteDevEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteJobAsyncHelper(const Model::DeleteJobRequest& request, const DeleteJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteMLTransformAsyncHelper(const Model::DeleteMLTransformRequest& request, const DeleteMLTransformResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeletePartitionAsyncHelper(const Model::DeletePartitionRequest& request, const DeletePartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeletePartitionIndexAsyncHelper(const Model::DeletePartitionIndexRequest& request, const DeletePartitionIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRegistryAsyncHelper(const Model::DeleteRegistryRequest& request, const DeleteRegistryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteResourcePolicyAsyncHelper(const Model::DeleteResourcePolicyRequest& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSchemaAsyncHelper(const Model::DeleteSchemaRequest& request, const DeleteSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSchemaVersionsAsyncHelper(const Model::DeleteSchemaVersionsRequest& request, const DeleteSchemaVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSecurityConfigurationAsyncHelper(const Model::DeleteSecurityConfigurationRequest& request, const DeleteSecurityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteTableAsyncHelper(const Model::DeleteTableRequest& request, const DeleteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteTableVersionAsyncHelper(const Model::DeleteTableVersionRequest& request, const DeleteTableVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteTriggerAsyncHelper(const Model::DeleteTriggerRequest& request, const DeleteTriggerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteUserDefinedFunctionAsyncHelper(const Model::DeleteUserDefinedFunctionRequest& request, const DeleteUserDefinedFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteWorkflowAsyncHelper(const Model::DeleteWorkflowRequest& request, const DeleteWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCatalogImportStatusAsyncHelper(const Model::GetCatalogImportStatusRequest& request, const GetCatalogImportStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetClassifierAsyncHelper(const Model::GetClassifierRequest& request, const GetClassifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetClassifiersAsyncHelper(const Model::GetClassifiersRequest& request, const GetClassifiersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetColumnStatisticsForPartitionAsyncHelper(const Model::GetColumnStatisticsForPartitionRequest& request, const GetColumnStatisticsForPartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetColumnStatisticsForTableAsyncHelper(const Model::GetColumnStatisticsForTableRequest& request, const GetColumnStatisticsForTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetConnectionAsyncHelper(const Model::GetConnectionRequest& request, const GetConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetConnectionsAsyncHelper(const Model::GetConnectionsRequest& request, const GetConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCrawlerAsyncHelper(const Model::GetCrawlerRequest& request, const GetCrawlerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCrawlerMetricsAsyncHelper(const Model::GetCrawlerMetricsRequest& request, const GetCrawlerMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCrawlersAsyncHelper(const Model::GetCrawlersRequest& request, const GetCrawlersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDataCatalogEncryptionSettingsAsyncHelper(const Model::GetDataCatalogEncryptionSettingsRequest& request, const GetDataCatalogEncryptionSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDatabaseAsyncHelper(const Model::GetDatabaseRequest& request, const GetDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDatabasesAsyncHelper(const Model::GetDatabasesRequest& request, const GetDatabasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDataflowGraphAsyncHelper(const Model::GetDataflowGraphRequest& request, const GetDataflowGraphResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDevEndpointAsyncHelper(const Model::GetDevEndpointRequest& request, const GetDevEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDevEndpointsAsyncHelper(const Model::GetDevEndpointsRequest& request, const GetDevEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetJobAsyncHelper(const Model::GetJobRequest& request, const GetJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetJobBookmarkAsyncHelper(const Model::GetJobBookmarkRequest& request, const GetJobBookmarkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetJobRunAsyncHelper(const Model::GetJobRunRequest& request, const GetJobRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetJobRunsAsyncHelper(const Model::GetJobRunsRequest& request, const GetJobRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetJobsAsyncHelper(const Model::GetJobsRequest& request, const GetJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMLTaskRunAsyncHelper(const Model::GetMLTaskRunRequest& request, const GetMLTaskRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMLTaskRunsAsyncHelper(const Model::GetMLTaskRunsRequest& request, const GetMLTaskRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMLTransformAsyncHelper(const Model::GetMLTransformRequest& request, const GetMLTransformResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMLTransformsAsyncHelper(const Model::GetMLTransformsRequest& request, const GetMLTransformsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMappingAsyncHelper(const Model::GetMappingRequest& request, const GetMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetPartitionAsyncHelper(const Model::GetPartitionRequest& request, const GetPartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetPartitionIndexesAsyncHelper(const Model::GetPartitionIndexesRequest& request, const GetPartitionIndexesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetPartitionsAsyncHelper(const Model::GetPartitionsRequest& request, const GetPartitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetPlanAsyncHelper(const Model::GetPlanRequest& request, const GetPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRegistryAsyncHelper(const Model::GetRegistryRequest& request, const GetRegistryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetResourcePoliciesAsyncHelper(const Model::GetResourcePoliciesRequest& request, const GetResourcePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetResourcePolicyAsyncHelper(const Model::GetResourcePolicyRequest& request, const GetResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSchemaAsyncHelper(const Model::GetSchemaRequest& request, const GetSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSchemaByDefinitionAsyncHelper(const Model::GetSchemaByDefinitionRequest& request, const GetSchemaByDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSchemaVersionAsyncHelper(const Model::GetSchemaVersionRequest& request, const GetSchemaVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSchemaVersionsDiffAsyncHelper(const Model::GetSchemaVersionsDiffRequest& request, const GetSchemaVersionsDiffResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSecurityConfigurationAsyncHelper(const Model::GetSecurityConfigurationRequest& request, const GetSecurityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSecurityConfigurationsAsyncHelper(const Model::GetSecurityConfigurationsRequest& request, const GetSecurityConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetTableAsyncHelper(const Model::GetTableRequest& request, const GetTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetTableVersionAsyncHelper(const Model::GetTableVersionRequest& request, const GetTableVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetTableVersionsAsyncHelper(const Model::GetTableVersionsRequest& request, const GetTableVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetTablesAsyncHelper(const Model::GetTablesRequest& request, const GetTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetTagsAsyncHelper(const Model::GetTagsRequest& request, const GetTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetTriggerAsyncHelper(const Model::GetTriggerRequest& request, const GetTriggerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetTriggersAsyncHelper(const Model::GetTriggersRequest& request, const GetTriggersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetUserDefinedFunctionAsyncHelper(const Model::GetUserDefinedFunctionRequest& request, const GetUserDefinedFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetUserDefinedFunctionsAsyncHelper(const Model::GetUserDefinedFunctionsRequest& request, const GetUserDefinedFunctionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetWorkflowAsyncHelper(const Model::GetWorkflowRequest& request, const GetWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetWorkflowRunAsyncHelper(const Model::GetWorkflowRunRequest& request, const GetWorkflowRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetWorkflowRunPropertiesAsyncHelper(const Model::GetWorkflowRunPropertiesRequest& request, const GetWorkflowRunPropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetWorkflowRunsAsyncHelper(const Model::GetWorkflowRunsRequest& request, const GetWorkflowRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ImportCatalogToGlueAsyncHelper(const Model::ImportCatalogToGlueRequest& request, const ImportCatalogToGlueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListCrawlersAsyncHelper(const Model::ListCrawlersRequest& request, const ListCrawlersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDevEndpointsAsyncHelper(const Model::ListDevEndpointsRequest& request, const ListDevEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListJobsAsyncHelper(const Model::ListJobsRequest& request, const ListJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListMLTransformsAsyncHelper(const Model::ListMLTransformsRequest& request, const ListMLTransformsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRegistriesAsyncHelper(const Model::ListRegistriesRequest& request, const ListRegistriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSchemaVersionsAsyncHelper(const Model::ListSchemaVersionsRequest& request, const ListSchemaVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSchemasAsyncHelper(const Model::ListSchemasRequest& request, const ListSchemasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTriggersAsyncHelper(const Model::ListTriggersRequest& request, const ListTriggersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListWorkflowsAsyncHelper(const Model::ListWorkflowsRequest& request, const ListWorkflowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutDataCatalogEncryptionSettingsAsyncHelper(const Model::PutDataCatalogEncryptionSettingsRequest& request, const PutDataCatalogEncryptionSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutResourcePolicyAsyncHelper(const Model::PutResourcePolicyRequest& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutSchemaVersionMetadataAsyncHelper(const Model::PutSchemaVersionMetadataRequest& request, const PutSchemaVersionMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutWorkflowRunPropertiesAsyncHelper(const Model::PutWorkflowRunPropertiesRequest& request, const PutWorkflowRunPropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void QuerySchemaVersionMetadataAsyncHelper(const Model::QuerySchemaVersionMetadataRequest& request, const QuerySchemaVersionMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RegisterSchemaVersionAsyncHelper(const Model::RegisterSchemaVersionRequest& request, const RegisterSchemaVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemoveSchemaVersionMetadataAsyncHelper(const Model::RemoveSchemaVersionMetadataRequest& request, const RemoveSchemaVersionMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ResetJobBookmarkAsyncHelper(const Model::ResetJobBookmarkRequest& request, const ResetJobBookmarkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ResumeWorkflowRunAsyncHelper(const Model::ResumeWorkflowRunRequest& request, const ResumeWorkflowRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SearchTablesAsyncHelper(const Model::SearchTablesRequest& request, const SearchTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartCrawlerAsyncHelper(const Model::StartCrawlerRequest& request, const StartCrawlerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartCrawlerScheduleAsyncHelper(const Model::StartCrawlerScheduleRequest& request, const StartCrawlerScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartExportLabelsTaskRunAsyncHelper(const Model::StartExportLabelsTaskRunRequest& request, const StartExportLabelsTaskRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartImportLabelsTaskRunAsyncHelper(const Model::StartImportLabelsTaskRunRequest& request, const StartImportLabelsTaskRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartJobRunAsyncHelper(const Model::StartJobRunRequest& request, const StartJobRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartMLEvaluationTaskRunAsyncHelper(const Model::StartMLEvaluationTaskRunRequest& request, const StartMLEvaluationTaskRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartMLLabelingSetGenerationTaskRunAsyncHelper(const Model::StartMLLabelingSetGenerationTaskRunRequest& request, const StartMLLabelingSetGenerationTaskRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartTriggerAsyncHelper(const Model::StartTriggerRequest& request, const StartTriggerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartWorkflowRunAsyncHelper(const Model::StartWorkflowRunRequest& request, const StartWorkflowRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopCrawlerAsyncHelper(const Model::StopCrawlerRequest& request, const StopCrawlerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopCrawlerScheduleAsyncHelper(const Model::StopCrawlerScheduleRequest& request, const StopCrawlerScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopTriggerAsyncHelper(const Model::StopTriggerRequest& request, const StopTriggerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopWorkflowRunAsyncHelper(const Model::StopWorkflowRunRequest& request, const StopWorkflowRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateClassifierAsyncHelper(const Model::UpdateClassifierRequest& request, const UpdateClassifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateColumnStatisticsForPartitionAsyncHelper(const Model::UpdateColumnStatisticsForPartitionRequest& request, const UpdateColumnStatisticsForPartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateColumnStatisticsForTableAsyncHelper(const Model::UpdateColumnStatisticsForTableRequest& request, const UpdateColumnStatisticsForTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateConnectionAsyncHelper(const Model::UpdateConnectionRequest& request, const UpdateConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateCrawlerAsyncHelper(const Model::UpdateCrawlerRequest& request, const UpdateCrawlerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateCrawlerScheduleAsyncHelper(const Model::UpdateCrawlerScheduleRequest& request, const UpdateCrawlerScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDatabaseAsyncHelper(const Model::UpdateDatabaseRequest& request, const UpdateDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDevEndpointAsyncHelper(const Model::UpdateDevEndpointRequest& request, const UpdateDevEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateJobAsyncHelper(const Model::UpdateJobRequest& request, const UpdateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateMLTransformAsyncHelper(const Model::UpdateMLTransformRequest& request, const UpdateMLTransformResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdatePartitionAsyncHelper(const Model::UpdatePartitionRequest& request, const UpdatePartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateRegistryAsyncHelper(const Model::UpdateRegistryRequest& request, const UpdateRegistryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateSchemaAsyncHelper(const Model::UpdateSchemaRequest& request, const UpdateSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateTableAsyncHelper(const Model::UpdateTableRequest& request, const UpdateTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateTriggerAsyncHelper(const Model::UpdateTriggerRequest& request, const UpdateTriggerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateUserDefinedFunctionAsyncHelper(const Model::UpdateUserDefinedFunctionRequest& request, const UpdateUserDefinedFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateWorkflowAsyncHelper(const Model::UpdateWorkflowRequest& request, const UpdateWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace Glue
} // namespace Aws
