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
#include <aws/glue/model/BatchGetTableOptimizerResult.h>
#include <aws/glue/model/BatchGetTriggersResult.h>
#include <aws/glue/model/BatchGetWorkflowsResult.h>
#include <aws/glue/model/BatchPutDataQualityStatisticAnnotationResult.h>
#include <aws/glue/model/BatchStopJobRunResult.h>
#include <aws/glue/model/BatchUpdatePartitionResult.h>
#include <aws/glue/model/CancelDataQualityRuleRecommendationRunResult.h>
#include <aws/glue/model/CancelDataQualityRulesetEvaluationRunResult.h>
#include <aws/glue/model/CancelMLTaskRunResult.h>
#include <aws/glue/model/CancelStatementResult.h>
#include <aws/glue/model/CheckSchemaVersionValidityResult.h>
#include <aws/glue/model/CreateBlueprintResult.h>
#include <aws/glue/model/CreateCatalogResult.h>
#include <aws/glue/model/CreateClassifierResult.h>
#include <aws/glue/model/CreateColumnStatisticsTaskSettingsResult.h>
#include <aws/glue/model/CreateConnectionResult.h>
#include <aws/glue/model/CreateCrawlerResult.h>
#include <aws/glue/model/CreateCustomEntityTypeResult.h>
#include <aws/glue/model/CreateDataQualityRulesetResult.h>
#include <aws/glue/model/CreateDatabaseResult.h>
#include <aws/glue/model/CreateDevEndpointResult.h>
#include <aws/glue/model/CreateGlueIdentityCenterConfigurationResult.h>
#include <aws/glue/model/CreateIntegrationResult.h>
#include <aws/glue/model/CreateIntegrationResourcePropertyResult.h>
#include <aws/glue/model/CreateIntegrationTablePropertiesResult.h>
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
#include <aws/glue/model/CreateTableOptimizerResult.h>
#include <aws/glue/model/CreateTriggerResult.h>
#include <aws/glue/model/CreateUsageProfileResult.h>
#include <aws/glue/model/CreateUserDefinedFunctionResult.h>
#include <aws/glue/model/CreateWorkflowResult.h>
#include <aws/glue/model/DeleteBlueprintResult.h>
#include <aws/glue/model/DeleteCatalogResult.h>
#include <aws/glue/model/DeleteClassifierResult.h>
#include <aws/glue/model/DeleteColumnStatisticsForPartitionResult.h>
#include <aws/glue/model/DeleteColumnStatisticsForTableResult.h>
#include <aws/glue/model/DeleteColumnStatisticsTaskSettingsResult.h>
#include <aws/glue/model/DeleteConnectionResult.h>
#include <aws/glue/model/DeleteCrawlerResult.h>
#include <aws/glue/model/DeleteCustomEntityTypeResult.h>
#include <aws/glue/model/DeleteDataQualityRulesetResult.h>
#include <aws/glue/model/DeleteDatabaseResult.h>
#include <aws/glue/model/DeleteDevEndpointResult.h>
#include <aws/glue/model/DeleteGlueIdentityCenterConfigurationResult.h>
#include <aws/glue/model/DeleteIntegrationResult.h>
#include <aws/glue/model/DeleteIntegrationTablePropertiesResult.h>
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
#include <aws/glue/model/DeleteTableOptimizerResult.h>
#include <aws/glue/model/DeleteTableVersionResult.h>
#include <aws/glue/model/DeleteTriggerResult.h>
#include <aws/glue/model/DeleteUsageProfileResult.h>
#include <aws/glue/model/DeleteUserDefinedFunctionResult.h>
#include <aws/glue/model/DeleteWorkflowResult.h>
#include <aws/glue/model/DescribeConnectionTypeResult.h>
#include <aws/glue/model/DescribeEntityResult.h>
#include <aws/glue/model/DescribeInboundIntegrationsResult.h>
#include <aws/glue/model/DescribeIntegrationsResult.h>
#include <aws/glue/model/GetBlueprintResult.h>
#include <aws/glue/model/GetBlueprintRunResult.h>
#include <aws/glue/model/GetBlueprintRunsResult.h>
#include <aws/glue/model/GetCatalogResult.h>
#include <aws/glue/model/GetCatalogImportStatusResult.h>
#include <aws/glue/model/GetCatalogsResult.h>
#include <aws/glue/model/GetClassifierResult.h>
#include <aws/glue/model/GetClassifiersResult.h>
#include <aws/glue/model/GetColumnStatisticsForPartitionResult.h>
#include <aws/glue/model/GetColumnStatisticsForTableResult.h>
#include <aws/glue/model/GetColumnStatisticsTaskRunResult.h>
#include <aws/glue/model/GetColumnStatisticsTaskRunsResult.h>
#include <aws/glue/model/GetColumnStatisticsTaskSettingsResult.h>
#include <aws/glue/model/GetConnectionResult.h>
#include <aws/glue/model/GetConnectionsResult.h>
#include <aws/glue/model/GetCrawlerResult.h>
#include <aws/glue/model/GetCrawlerMetricsResult.h>
#include <aws/glue/model/GetCrawlersResult.h>
#include <aws/glue/model/GetCustomEntityTypeResult.h>
#include <aws/glue/model/GetDataCatalogEncryptionSettingsResult.h>
#include <aws/glue/model/GetDataQualityModelResult.h>
#include <aws/glue/model/GetDataQualityModelResultResult.h>
#include <aws/glue/model/GetDataQualityResultResult.h>
#include <aws/glue/model/GetDataQualityRuleRecommendationRunResult.h>
#include <aws/glue/model/GetDataQualityRulesetResult.h>
#include <aws/glue/model/GetDataQualityRulesetEvaluationRunResult.h>
#include <aws/glue/model/GetDatabaseResult.h>
#include <aws/glue/model/GetDatabasesResult.h>
#include <aws/glue/model/GetDataflowGraphResult.h>
#include <aws/glue/model/GetDevEndpointResult.h>
#include <aws/glue/model/GetDevEndpointsResult.h>
#include <aws/glue/model/GetEntityRecordsResult.h>
#include <aws/glue/model/GetGlueIdentityCenterConfigurationResult.h>
#include <aws/glue/model/GetIntegrationResourcePropertyResult.h>
#include <aws/glue/model/GetIntegrationTablePropertiesResult.h>
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
#include <aws/glue/model/GetTableOptimizerResult.h>
#include <aws/glue/model/GetTableVersionResult.h>
#include <aws/glue/model/GetTableVersionsResult.h>
#include <aws/glue/model/GetTablesResult.h>
#include <aws/glue/model/GetTagsResult.h>
#include <aws/glue/model/GetTriggerResult.h>
#include <aws/glue/model/GetTriggersResult.h>
#include <aws/glue/model/GetUnfilteredPartitionMetadataResult.h>
#include <aws/glue/model/GetUnfilteredPartitionsMetadataResult.h>
#include <aws/glue/model/GetUnfilteredTableMetadataResult.h>
#include <aws/glue/model/GetUsageProfileResult.h>
#include <aws/glue/model/GetUserDefinedFunctionResult.h>
#include <aws/glue/model/GetUserDefinedFunctionsResult.h>
#include <aws/glue/model/GetWorkflowResult.h>
#include <aws/glue/model/GetWorkflowRunResult.h>
#include <aws/glue/model/GetWorkflowRunPropertiesResult.h>
#include <aws/glue/model/GetWorkflowRunsResult.h>
#include <aws/glue/model/ImportCatalogToGlueResult.h>
#include <aws/glue/model/ListBlueprintsResult.h>
#include <aws/glue/model/ListColumnStatisticsTaskRunsResult.h>
#include <aws/glue/model/ListConnectionTypesResult.h>
#include <aws/glue/model/ListCrawlersResult.h>
#include <aws/glue/model/ListCrawlsResult.h>
#include <aws/glue/model/ListCustomEntityTypesResult.h>
#include <aws/glue/model/ListDataQualityResultsResult.h>
#include <aws/glue/model/ListDataQualityRuleRecommendationRunsResult.h>
#include <aws/glue/model/ListDataQualityRulesetEvaluationRunsResult.h>
#include <aws/glue/model/ListDataQualityRulesetsResult.h>
#include <aws/glue/model/ListDataQualityStatisticAnnotationsResult.h>
#include <aws/glue/model/ListDataQualityStatisticsResult.h>
#include <aws/glue/model/ListDevEndpointsResult.h>
#include <aws/glue/model/ListEntitiesResult.h>
#include <aws/glue/model/ListJobsResult.h>
#include <aws/glue/model/ListMLTransformsResult.h>
#include <aws/glue/model/ListRegistriesResult.h>
#include <aws/glue/model/ListSchemaVersionsResult.h>
#include <aws/glue/model/ListSchemasResult.h>
#include <aws/glue/model/ListSessionsResult.h>
#include <aws/glue/model/ListStatementsResult.h>
#include <aws/glue/model/ListTableOptimizerRunsResult.h>
#include <aws/glue/model/ListTriggersResult.h>
#include <aws/glue/model/ListUsageProfilesResult.h>
#include <aws/glue/model/ListWorkflowsResult.h>
#include <aws/glue/model/ModifyIntegrationResult.h>
#include <aws/glue/model/PutDataCatalogEncryptionSettingsResult.h>
#include <aws/glue/model/PutDataQualityProfileAnnotationResult.h>
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
#include <aws/glue/model/StartColumnStatisticsTaskRunResult.h>
#include <aws/glue/model/StartColumnStatisticsTaskRunScheduleResult.h>
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
#include <aws/glue/model/StopColumnStatisticsTaskRunResult.h>
#include <aws/glue/model/StopColumnStatisticsTaskRunScheduleResult.h>
#include <aws/glue/model/StopCrawlerResult.h>
#include <aws/glue/model/StopCrawlerScheduleResult.h>
#include <aws/glue/model/StopSessionResult.h>
#include <aws/glue/model/StopTriggerResult.h>
#include <aws/glue/model/StopWorkflowRunResult.h>
#include <aws/glue/model/TagResourceResult.h>
#include <aws/glue/model/TestConnectionResult.h>
#include <aws/glue/model/UntagResourceResult.h>
#include <aws/glue/model/UpdateBlueprintResult.h>
#include <aws/glue/model/UpdateCatalogResult.h>
#include <aws/glue/model/UpdateClassifierResult.h>
#include <aws/glue/model/UpdateColumnStatisticsForPartitionResult.h>
#include <aws/glue/model/UpdateColumnStatisticsForTableResult.h>
#include <aws/glue/model/UpdateColumnStatisticsTaskSettingsResult.h>
#include <aws/glue/model/UpdateConnectionResult.h>
#include <aws/glue/model/UpdateCrawlerResult.h>
#include <aws/glue/model/UpdateCrawlerScheduleResult.h>
#include <aws/glue/model/UpdateDataQualityRulesetResult.h>
#include <aws/glue/model/UpdateDatabaseResult.h>
#include <aws/glue/model/UpdateDevEndpointResult.h>
#include <aws/glue/model/UpdateGlueIdentityCenterConfigurationResult.h>
#include <aws/glue/model/UpdateIntegrationResourcePropertyResult.h>
#include <aws/glue/model/UpdateIntegrationTablePropertiesResult.h>
#include <aws/glue/model/UpdateJobResult.h>
#include <aws/glue/model/UpdateJobFromSourceControlResult.h>
#include <aws/glue/model/UpdateMLTransformResult.h>
#include <aws/glue/model/UpdatePartitionResult.h>
#include <aws/glue/model/UpdateRegistryResult.h>
#include <aws/glue/model/UpdateSchemaResult.h>
#include <aws/glue/model/UpdateSourceControlFromJobResult.h>
#include <aws/glue/model/UpdateTableResult.h>
#include <aws/glue/model/UpdateTableOptimizerResult.h>
#include <aws/glue/model/UpdateTriggerResult.h>
#include <aws/glue/model/UpdateUsageProfileResult.h>
#include <aws/glue/model/UpdateUserDefinedFunctionResult.h>
#include <aws/glue/model/UpdateWorkflowResult.h>
#include <aws/glue/model/ListEntitiesRequest.h>
#include <aws/glue/model/GetDataCatalogEncryptionSettingsRequest.h>
#include <aws/glue/model/ListDataQualityRuleRecommendationRunsRequest.h>
#include <aws/glue/model/CreateClassifierRequest.h>
#include <aws/glue/model/GetCrawlersRequest.h>
#include <aws/glue/model/UpdateJobFromSourceControlRequest.h>
#include <aws/glue/model/UpdateClassifierRequest.h>
#include <aws/glue/model/GetGlueIdentityCenterConfigurationRequest.h>
#include <aws/glue/model/GetJobsRequest.h>
#include <aws/glue/model/GetDataflowGraphRequest.h>
#include <aws/glue/model/ListSchemasRequest.h>
#include <aws/glue/model/ListRegistriesRequest.h>
#include <aws/glue/model/ListDataQualityResultsRequest.h>
#include <aws/glue/model/DeleteGlueIdentityCenterConfigurationRequest.h>
#include <aws/glue/model/ListDataQualityStatisticsRequest.h>
#include <aws/glue/model/GetResourcePoliciesRequest.h>
#include <aws/glue/model/GetDevEndpointsRequest.h>
#include <aws/glue/model/GetResourcePolicyRequest.h>
#include <aws/glue/model/ListBlueprintsRequest.h>
#include <aws/glue/model/ImportCatalogToGlueRequest.h>
#include <aws/glue/model/ListDataQualityRulesetEvaluationRunsRequest.h>
#include <aws/glue/model/ListJobsRequest.h>
#include <aws/glue/model/GetCatalogsRequest.h>
#include <aws/glue/model/ListCustomEntityTypesRequest.h>
#include <aws/glue/model/DescribeIntegrationsRequest.h>
#include <aws/glue/model/QuerySchemaVersionMetadataRequest.h>
#include <aws/glue/model/ListMLTransformsRequest.h>
#include <aws/glue/model/GetTriggersRequest.h>
#include <aws/glue/model/ListColumnStatisticsTaskRunsRequest.h>
#include <aws/glue/model/TestConnectionRequest.h>
#include <aws/glue/model/GetMLTransformsRequest.h>
#include <aws/glue/model/SearchTablesRequest.h>
#include <aws/glue/model/GetConnectionsRequest.h>
#include <aws/glue/model/ListDataQualityRulesetsRequest.h>
#include <aws/glue/model/GetSchemaVersionRequest.h>
#include <aws/glue/model/UpdateSourceControlFromJobRequest.h>
#include <aws/glue/model/GetClassifiersRequest.h>
#include <aws/glue/model/ListSessionsRequest.h>
#include <aws/glue/model/CreateScriptRequest.h>
#include <aws/glue/model/ListWorkflowsRequest.h>
#include <aws/glue/model/DeleteResourcePolicyRequest.h>
#include <aws/glue/model/GetSecurityConfigurationsRequest.h>
#include <aws/glue/model/ListTriggersRequest.h>
#include <aws/glue/model/UpdateGlueIdentityCenterConfigurationRequest.h>
#include <aws/glue/model/ListDevEndpointsRequest.h>
#include <aws/glue/model/DescribeInboundIntegrationsRequest.h>
#include <aws/glue/model/GetCatalogImportStatusRequest.h>
#include <aws/glue/model/GetCrawlerMetricsRequest.h>
#include <aws/glue/model/GetDatabasesRequest.h>
#include <aws/glue/model/ListConnectionTypesRequest.h>
#include <aws/glue/model/ListCrawlersRequest.h>
#include <aws/glue/model/ListDataQualityStatisticAnnotationsRequest.h>
#include <aws/glue/model/ListUsageProfilesRequest.h>
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
    using GlueClientConfiguration = Aws::Client::GenericClientConfiguration;
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
      class BatchGetTableOptimizerRequest;
      class BatchGetTriggersRequest;
      class BatchGetWorkflowsRequest;
      class BatchPutDataQualityStatisticAnnotationRequest;
      class BatchStopJobRunRequest;
      class BatchUpdatePartitionRequest;
      class CancelDataQualityRuleRecommendationRunRequest;
      class CancelDataQualityRulesetEvaluationRunRequest;
      class CancelMLTaskRunRequest;
      class CancelStatementRequest;
      class CheckSchemaVersionValidityRequest;
      class CreateBlueprintRequest;
      class CreateCatalogRequest;
      class CreateClassifierRequest;
      class CreateColumnStatisticsTaskSettingsRequest;
      class CreateConnectionRequest;
      class CreateCrawlerRequest;
      class CreateCustomEntityTypeRequest;
      class CreateDataQualityRulesetRequest;
      class CreateDatabaseRequest;
      class CreateDevEndpointRequest;
      class CreateGlueIdentityCenterConfigurationRequest;
      class CreateIntegrationRequest;
      class CreateIntegrationResourcePropertyRequest;
      class CreateIntegrationTablePropertiesRequest;
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
      class CreateTableOptimizerRequest;
      class CreateTriggerRequest;
      class CreateUsageProfileRequest;
      class CreateUserDefinedFunctionRequest;
      class CreateWorkflowRequest;
      class DeleteBlueprintRequest;
      class DeleteCatalogRequest;
      class DeleteClassifierRequest;
      class DeleteColumnStatisticsForPartitionRequest;
      class DeleteColumnStatisticsForTableRequest;
      class DeleteColumnStatisticsTaskSettingsRequest;
      class DeleteConnectionRequest;
      class DeleteCrawlerRequest;
      class DeleteCustomEntityTypeRequest;
      class DeleteDataQualityRulesetRequest;
      class DeleteDatabaseRequest;
      class DeleteDevEndpointRequest;
      class DeleteGlueIdentityCenterConfigurationRequest;
      class DeleteIntegrationRequest;
      class DeleteIntegrationTablePropertiesRequest;
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
      class DeleteTableOptimizerRequest;
      class DeleteTableVersionRequest;
      class DeleteTriggerRequest;
      class DeleteUsageProfileRequest;
      class DeleteUserDefinedFunctionRequest;
      class DeleteWorkflowRequest;
      class DescribeConnectionTypeRequest;
      class DescribeEntityRequest;
      class DescribeInboundIntegrationsRequest;
      class DescribeIntegrationsRequest;
      class GetBlueprintRequest;
      class GetBlueprintRunRequest;
      class GetBlueprintRunsRequest;
      class GetCatalogRequest;
      class GetCatalogImportStatusRequest;
      class GetCatalogsRequest;
      class GetClassifierRequest;
      class GetClassifiersRequest;
      class GetColumnStatisticsForPartitionRequest;
      class GetColumnStatisticsForTableRequest;
      class GetColumnStatisticsTaskRunRequest;
      class GetColumnStatisticsTaskRunsRequest;
      class GetColumnStatisticsTaskSettingsRequest;
      class GetConnectionRequest;
      class GetConnectionsRequest;
      class GetCrawlerRequest;
      class GetCrawlerMetricsRequest;
      class GetCrawlersRequest;
      class GetCustomEntityTypeRequest;
      class GetDataCatalogEncryptionSettingsRequest;
      class GetDataQualityModelRequest;
      class GetDataQualityModelResultRequest;
      class GetDataQualityResultRequest;
      class GetDataQualityRuleRecommendationRunRequest;
      class GetDataQualityRulesetRequest;
      class GetDataQualityRulesetEvaluationRunRequest;
      class GetDatabaseRequest;
      class GetDatabasesRequest;
      class GetDataflowGraphRequest;
      class GetDevEndpointRequest;
      class GetDevEndpointsRequest;
      class GetEntityRecordsRequest;
      class GetGlueIdentityCenterConfigurationRequest;
      class GetIntegrationResourcePropertyRequest;
      class GetIntegrationTablePropertiesRequest;
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
      class GetTableOptimizerRequest;
      class GetTableVersionRequest;
      class GetTableVersionsRequest;
      class GetTablesRequest;
      class GetTagsRequest;
      class GetTriggerRequest;
      class GetTriggersRequest;
      class GetUnfilteredPartitionMetadataRequest;
      class GetUnfilteredPartitionsMetadataRequest;
      class GetUnfilteredTableMetadataRequest;
      class GetUsageProfileRequest;
      class GetUserDefinedFunctionRequest;
      class GetUserDefinedFunctionsRequest;
      class GetWorkflowRequest;
      class GetWorkflowRunRequest;
      class GetWorkflowRunPropertiesRequest;
      class GetWorkflowRunsRequest;
      class ImportCatalogToGlueRequest;
      class ListBlueprintsRequest;
      class ListColumnStatisticsTaskRunsRequest;
      class ListConnectionTypesRequest;
      class ListCrawlersRequest;
      class ListCrawlsRequest;
      class ListCustomEntityTypesRequest;
      class ListDataQualityResultsRequest;
      class ListDataQualityRuleRecommendationRunsRequest;
      class ListDataQualityRulesetEvaluationRunsRequest;
      class ListDataQualityRulesetsRequest;
      class ListDataQualityStatisticAnnotationsRequest;
      class ListDataQualityStatisticsRequest;
      class ListDevEndpointsRequest;
      class ListEntitiesRequest;
      class ListJobsRequest;
      class ListMLTransformsRequest;
      class ListRegistriesRequest;
      class ListSchemaVersionsRequest;
      class ListSchemasRequest;
      class ListSessionsRequest;
      class ListStatementsRequest;
      class ListTableOptimizerRunsRequest;
      class ListTriggersRequest;
      class ListUsageProfilesRequest;
      class ListWorkflowsRequest;
      class ModifyIntegrationRequest;
      class PutDataCatalogEncryptionSettingsRequest;
      class PutDataQualityProfileAnnotationRequest;
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
      class StartColumnStatisticsTaskRunRequest;
      class StartColumnStatisticsTaskRunScheduleRequest;
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
      class StopColumnStatisticsTaskRunRequest;
      class StopColumnStatisticsTaskRunScheduleRequest;
      class StopCrawlerRequest;
      class StopCrawlerScheduleRequest;
      class StopSessionRequest;
      class StopTriggerRequest;
      class StopWorkflowRunRequest;
      class TagResourceRequest;
      class TestConnectionRequest;
      class UntagResourceRequest;
      class UpdateBlueprintRequest;
      class UpdateCatalogRequest;
      class UpdateClassifierRequest;
      class UpdateColumnStatisticsForPartitionRequest;
      class UpdateColumnStatisticsForTableRequest;
      class UpdateColumnStatisticsTaskSettingsRequest;
      class UpdateConnectionRequest;
      class UpdateCrawlerRequest;
      class UpdateCrawlerScheduleRequest;
      class UpdateDataQualityRulesetRequest;
      class UpdateDatabaseRequest;
      class UpdateDevEndpointRequest;
      class UpdateGlueIdentityCenterConfigurationRequest;
      class UpdateIntegrationResourcePropertyRequest;
      class UpdateIntegrationTablePropertiesRequest;
      class UpdateJobRequest;
      class UpdateJobFromSourceControlRequest;
      class UpdateMLTransformRequest;
      class UpdatePartitionRequest;
      class UpdateRegistryRequest;
      class UpdateSchemaRequest;
      class UpdateSourceControlFromJobRequest;
      class UpdateTableRequest;
      class UpdateTableOptimizerRequest;
      class UpdateTriggerRequest;
      class UpdateUsageProfileRequest;
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
      typedef Aws::Utils::Outcome<BatchGetTableOptimizerResult, GlueError> BatchGetTableOptimizerOutcome;
      typedef Aws::Utils::Outcome<BatchGetTriggersResult, GlueError> BatchGetTriggersOutcome;
      typedef Aws::Utils::Outcome<BatchGetWorkflowsResult, GlueError> BatchGetWorkflowsOutcome;
      typedef Aws::Utils::Outcome<BatchPutDataQualityStatisticAnnotationResult, GlueError> BatchPutDataQualityStatisticAnnotationOutcome;
      typedef Aws::Utils::Outcome<BatchStopJobRunResult, GlueError> BatchStopJobRunOutcome;
      typedef Aws::Utils::Outcome<BatchUpdatePartitionResult, GlueError> BatchUpdatePartitionOutcome;
      typedef Aws::Utils::Outcome<CancelDataQualityRuleRecommendationRunResult, GlueError> CancelDataQualityRuleRecommendationRunOutcome;
      typedef Aws::Utils::Outcome<CancelDataQualityRulesetEvaluationRunResult, GlueError> CancelDataQualityRulesetEvaluationRunOutcome;
      typedef Aws::Utils::Outcome<CancelMLTaskRunResult, GlueError> CancelMLTaskRunOutcome;
      typedef Aws::Utils::Outcome<CancelStatementResult, GlueError> CancelStatementOutcome;
      typedef Aws::Utils::Outcome<CheckSchemaVersionValidityResult, GlueError> CheckSchemaVersionValidityOutcome;
      typedef Aws::Utils::Outcome<CreateBlueprintResult, GlueError> CreateBlueprintOutcome;
      typedef Aws::Utils::Outcome<CreateCatalogResult, GlueError> CreateCatalogOutcome;
      typedef Aws::Utils::Outcome<CreateClassifierResult, GlueError> CreateClassifierOutcome;
      typedef Aws::Utils::Outcome<CreateColumnStatisticsTaskSettingsResult, GlueError> CreateColumnStatisticsTaskSettingsOutcome;
      typedef Aws::Utils::Outcome<CreateConnectionResult, GlueError> CreateConnectionOutcome;
      typedef Aws::Utils::Outcome<CreateCrawlerResult, GlueError> CreateCrawlerOutcome;
      typedef Aws::Utils::Outcome<CreateCustomEntityTypeResult, GlueError> CreateCustomEntityTypeOutcome;
      typedef Aws::Utils::Outcome<CreateDataQualityRulesetResult, GlueError> CreateDataQualityRulesetOutcome;
      typedef Aws::Utils::Outcome<CreateDatabaseResult, GlueError> CreateDatabaseOutcome;
      typedef Aws::Utils::Outcome<CreateDevEndpointResult, GlueError> CreateDevEndpointOutcome;
      typedef Aws::Utils::Outcome<CreateGlueIdentityCenterConfigurationResult, GlueError> CreateGlueIdentityCenterConfigurationOutcome;
      typedef Aws::Utils::Outcome<CreateIntegrationResult, GlueError> CreateIntegrationOutcome;
      typedef Aws::Utils::Outcome<CreateIntegrationResourcePropertyResult, GlueError> CreateIntegrationResourcePropertyOutcome;
      typedef Aws::Utils::Outcome<CreateIntegrationTablePropertiesResult, GlueError> CreateIntegrationTablePropertiesOutcome;
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
      typedef Aws::Utils::Outcome<CreateTableOptimizerResult, GlueError> CreateTableOptimizerOutcome;
      typedef Aws::Utils::Outcome<CreateTriggerResult, GlueError> CreateTriggerOutcome;
      typedef Aws::Utils::Outcome<CreateUsageProfileResult, GlueError> CreateUsageProfileOutcome;
      typedef Aws::Utils::Outcome<CreateUserDefinedFunctionResult, GlueError> CreateUserDefinedFunctionOutcome;
      typedef Aws::Utils::Outcome<CreateWorkflowResult, GlueError> CreateWorkflowOutcome;
      typedef Aws::Utils::Outcome<DeleteBlueprintResult, GlueError> DeleteBlueprintOutcome;
      typedef Aws::Utils::Outcome<DeleteCatalogResult, GlueError> DeleteCatalogOutcome;
      typedef Aws::Utils::Outcome<DeleteClassifierResult, GlueError> DeleteClassifierOutcome;
      typedef Aws::Utils::Outcome<DeleteColumnStatisticsForPartitionResult, GlueError> DeleteColumnStatisticsForPartitionOutcome;
      typedef Aws::Utils::Outcome<DeleteColumnStatisticsForTableResult, GlueError> DeleteColumnStatisticsForTableOutcome;
      typedef Aws::Utils::Outcome<DeleteColumnStatisticsTaskSettingsResult, GlueError> DeleteColumnStatisticsTaskSettingsOutcome;
      typedef Aws::Utils::Outcome<DeleteConnectionResult, GlueError> DeleteConnectionOutcome;
      typedef Aws::Utils::Outcome<DeleteCrawlerResult, GlueError> DeleteCrawlerOutcome;
      typedef Aws::Utils::Outcome<DeleteCustomEntityTypeResult, GlueError> DeleteCustomEntityTypeOutcome;
      typedef Aws::Utils::Outcome<DeleteDataQualityRulesetResult, GlueError> DeleteDataQualityRulesetOutcome;
      typedef Aws::Utils::Outcome<DeleteDatabaseResult, GlueError> DeleteDatabaseOutcome;
      typedef Aws::Utils::Outcome<DeleteDevEndpointResult, GlueError> DeleteDevEndpointOutcome;
      typedef Aws::Utils::Outcome<DeleteGlueIdentityCenterConfigurationResult, GlueError> DeleteGlueIdentityCenterConfigurationOutcome;
      typedef Aws::Utils::Outcome<DeleteIntegrationResult, GlueError> DeleteIntegrationOutcome;
      typedef Aws::Utils::Outcome<DeleteIntegrationTablePropertiesResult, GlueError> DeleteIntegrationTablePropertiesOutcome;
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
      typedef Aws::Utils::Outcome<DeleteTableOptimizerResult, GlueError> DeleteTableOptimizerOutcome;
      typedef Aws::Utils::Outcome<DeleteTableVersionResult, GlueError> DeleteTableVersionOutcome;
      typedef Aws::Utils::Outcome<DeleteTriggerResult, GlueError> DeleteTriggerOutcome;
      typedef Aws::Utils::Outcome<DeleteUsageProfileResult, GlueError> DeleteUsageProfileOutcome;
      typedef Aws::Utils::Outcome<DeleteUserDefinedFunctionResult, GlueError> DeleteUserDefinedFunctionOutcome;
      typedef Aws::Utils::Outcome<DeleteWorkflowResult, GlueError> DeleteWorkflowOutcome;
      typedef Aws::Utils::Outcome<DescribeConnectionTypeResult, GlueError> DescribeConnectionTypeOutcome;
      typedef Aws::Utils::Outcome<DescribeEntityResult, GlueError> DescribeEntityOutcome;
      typedef Aws::Utils::Outcome<DescribeInboundIntegrationsResult, GlueError> DescribeInboundIntegrationsOutcome;
      typedef Aws::Utils::Outcome<DescribeIntegrationsResult, GlueError> DescribeIntegrationsOutcome;
      typedef Aws::Utils::Outcome<GetBlueprintResult, GlueError> GetBlueprintOutcome;
      typedef Aws::Utils::Outcome<GetBlueprintRunResult, GlueError> GetBlueprintRunOutcome;
      typedef Aws::Utils::Outcome<GetBlueprintRunsResult, GlueError> GetBlueprintRunsOutcome;
      typedef Aws::Utils::Outcome<GetCatalogResult, GlueError> GetCatalogOutcome;
      typedef Aws::Utils::Outcome<GetCatalogImportStatusResult, GlueError> GetCatalogImportStatusOutcome;
      typedef Aws::Utils::Outcome<GetCatalogsResult, GlueError> GetCatalogsOutcome;
      typedef Aws::Utils::Outcome<GetClassifierResult, GlueError> GetClassifierOutcome;
      typedef Aws::Utils::Outcome<GetClassifiersResult, GlueError> GetClassifiersOutcome;
      typedef Aws::Utils::Outcome<GetColumnStatisticsForPartitionResult, GlueError> GetColumnStatisticsForPartitionOutcome;
      typedef Aws::Utils::Outcome<GetColumnStatisticsForTableResult, GlueError> GetColumnStatisticsForTableOutcome;
      typedef Aws::Utils::Outcome<GetColumnStatisticsTaskRunResult, GlueError> GetColumnStatisticsTaskRunOutcome;
      typedef Aws::Utils::Outcome<GetColumnStatisticsTaskRunsResult, GlueError> GetColumnStatisticsTaskRunsOutcome;
      typedef Aws::Utils::Outcome<GetColumnStatisticsTaskSettingsResult, GlueError> GetColumnStatisticsTaskSettingsOutcome;
      typedef Aws::Utils::Outcome<GetConnectionResult, GlueError> GetConnectionOutcome;
      typedef Aws::Utils::Outcome<GetConnectionsResult, GlueError> GetConnectionsOutcome;
      typedef Aws::Utils::Outcome<GetCrawlerResult, GlueError> GetCrawlerOutcome;
      typedef Aws::Utils::Outcome<GetCrawlerMetricsResult, GlueError> GetCrawlerMetricsOutcome;
      typedef Aws::Utils::Outcome<GetCrawlersResult, GlueError> GetCrawlersOutcome;
      typedef Aws::Utils::Outcome<GetCustomEntityTypeResult, GlueError> GetCustomEntityTypeOutcome;
      typedef Aws::Utils::Outcome<GetDataCatalogEncryptionSettingsResult, GlueError> GetDataCatalogEncryptionSettingsOutcome;
      typedef Aws::Utils::Outcome<GetDataQualityModelResult, GlueError> GetDataQualityModelOutcome;
      typedef Aws::Utils::Outcome<GetDataQualityModelResultResult, GlueError> GetDataQualityModelResultOutcome;
      typedef Aws::Utils::Outcome<GetDataQualityResultResult, GlueError> GetDataQualityResultOutcome;
      typedef Aws::Utils::Outcome<GetDataQualityRuleRecommendationRunResult, GlueError> GetDataQualityRuleRecommendationRunOutcome;
      typedef Aws::Utils::Outcome<GetDataQualityRulesetResult, GlueError> GetDataQualityRulesetOutcome;
      typedef Aws::Utils::Outcome<GetDataQualityRulesetEvaluationRunResult, GlueError> GetDataQualityRulesetEvaluationRunOutcome;
      typedef Aws::Utils::Outcome<GetDatabaseResult, GlueError> GetDatabaseOutcome;
      typedef Aws::Utils::Outcome<GetDatabasesResult, GlueError> GetDatabasesOutcome;
      typedef Aws::Utils::Outcome<GetDataflowGraphResult, GlueError> GetDataflowGraphOutcome;
      typedef Aws::Utils::Outcome<GetDevEndpointResult, GlueError> GetDevEndpointOutcome;
      typedef Aws::Utils::Outcome<GetDevEndpointsResult, GlueError> GetDevEndpointsOutcome;
      typedef Aws::Utils::Outcome<GetEntityRecordsResult, GlueError> GetEntityRecordsOutcome;
      typedef Aws::Utils::Outcome<GetGlueIdentityCenterConfigurationResult, GlueError> GetGlueIdentityCenterConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetIntegrationResourcePropertyResult, GlueError> GetIntegrationResourcePropertyOutcome;
      typedef Aws::Utils::Outcome<GetIntegrationTablePropertiesResult, GlueError> GetIntegrationTablePropertiesOutcome;
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
      typedef Aws::Utils::Outcome<GetTableOptimizerResult, GlueError> GetTableOptimizerOutcome;
      typedef Aws::Utils::Outcome<GetTableVersionResult, GlueError> GetTableVersionOutcome;
      typedef Aws::Utils::Outcome<GetTableVersionsResult, GlueError> GetTableVersionsOutcome;
      typedef Aws::Utils::Outcome<GetTablesResult, GlueError> GetTablesOutcome;
      typedef Aws::Utils::Outcome<GetTagsResult, GlueError> GetTagsOutcome;
      typedef Aws::Utils::Outcome<GetTriggerResult, GlueError> GetTriggerOutcome;
      typedef Aws::Utils::Outcome<GetTriggersResult, GlueError> GetTriggersOutcome;
      typedef Aws::Utils::Outcome<GetUnfilteredPartitionMetadataResult, GlueError> GetUnfilteredPartitionMetadataOutcome;
      typedef Aws::Utils::Outcome<GetUnfilteredPartitionsMetadataResult, GlueError> GetUnfilteredPartitionsMetadataOutcome;
      typedef Aws::Utils::Outcome<GetUnfilteredTableMetadataResult, GlueError> GetUnfilteredTableMetadataOutcome;
      typedef Aws::Utils::Outcome<GetUsageProfileResult, GlueError> GetUsageProfileOutcome;
      typedef Aws::Utils::Outcome<GetUserDefinedFunctionResult, GlueError> GetUserDefinedFunctionOutcome;
      typedef Aws::Utils::Outcome<GetUserDefinedFunctionsResult, GlueError> GetUserDefinedFunctionsOutcome;
      typedef Aws::Utils::Outcome<GetWorkflowResult, GlueError> GetWorkflowOutcome;
      typedef Aws::Utils::Outcome<GetWorkflowRunResult, GlueError> GetWorkflowRunOutcome;
      typedef Aws::Utils::Outcome<GetWorkflowRunPropertiesResult, GlueError> GetWorkflowRunPropertiesOutcome;
      typedef Aws::Utils::Outcome<GetWorkflowRunsResult, GlueError> GetWorkflowRunsOutcome;
      typedef Aws::Utils::Outcome<ImportCatalogToGlueResult, GlueError> ImportCatalogToGlueOutcome;
      typedef Aws::Utils::Outcome<ListBlueprintsResult, GlueError> ListBlueprintsOutcome;
      typedef Aws::Utils::Outcome<ListColumnStatisticsTaskRunsResult, GlueError> ListColumnStatisticsTaskRunsOutcome;
      typedef Aws::Utils::Outcome<ListConnectionTypesResult, GlueError> ListConnectionTypesOutcome;
      typedef Aws::Utils::Outcome<ListCrawlersResult, GlueError> ListCrawlersOutcome;
      typedef Aws::Utils::Outcome<ListCrawlsResult, GlueError> ListCrawlsOutcome;
      typedef Aws::Utils::Outcome<ListCustomEntityTypesResult, GlueError> ListCustomEntityTypesOutcome;
      typedef Aws::Utils::Outcome<ListDataQualityResultsResult, GlueError> ListDataQualityResultsOutcome;
      typedef Aws::Utils::Outcome<ListDataQualityRuleRecommendationRunsResult, GlueError> ListDataQualityRuleRecommendationRunsOutcome;
      typedef Aws::Utils::Outcome<ListDataQualityRulesetEvaluationRunsResult, GlueError> ListDataQualityRulesetEvaluationRunsOutcome;
      typedef Aws::Utils::Outcome<ListDataQualityRulesetsResult, GlueError> ListDataQualityRulesetsOutcome;
      typedef Aws::Utils::Outcome<ListDataQualityStatisticAnnotationsResult, GlueError> ListDataQualityStatisticAnnotationsOutcome;
      typedef Aws::Utils::Outcome<ListDataQualityStatisticsResult, GlueError> ListDataQualityStatisticsOutcome;
      typedef Aws::Utils::Outcome<ListDevEndpointsResult, GlueError> ListDevEndpointsOutcome;
      typedef Aws::Utils::Outcome<ListEntitiesResult, GlueError> ListEntitiesOutcome;
      typedef Aws::Utils::Outcome<ListJobsResult, GlueError> ListJobsOutcome;
      typedef Aws::Utils::Outcome<ListMLTransformsResult, GlueError> ListMLTransformsOutcome;
      typedef Aws::Utils::Outcome<ListRegistriesResult, GlueError> ListRegistriesOutcome;
      typedef Aws::Utils::Outcome<ListSchemaVersionsResult, GlueError> ListSchemaVersionsOutcome;
      typedef Aws::Utils::Outcome<ListSchemasResult, GlueError> ListSchemasOutcome;
      typedef Aws::Utils::Outcome<ListSessionsResult, GlueError> ListSessionsOutcome;
      typedef Aws::Utils::Outcome<ListStatementsResult, GlueError> ListStatementsOutcome;
      typedef Aws::Utils::Outcome<ListTableOptimizerRunsResult, GlueError> ListTableOptimizerRunsOutcome;
      typedef Aws::Utils::Outcome<ListTriggersResult, GlueError> ListTriggersOutcome;
      typedef Aws::Utils::Outcome<ListUsageProfilesResult, GlueError> ListUsageProfilesOutcome;
      typedef Aws::Utils::Outcome<ListWorkflowsResult, GlueError> ListWorkflowsOutcome;
      typedef Aws::Utils::Outcome<ModifyIntegrationResult, GlueError> ModifyIntegrationOutcome;
      typedef Aws::Utils::Outcome<PutDataCatalogEncryptionSettingsResult, GlueError> PutDataCatalogEncryptionSettingsOutcome;
      typedef Aws::Utils::Outcome<PutDataQualityProfileAnnotationResult, GlueError> PutDataQualityProfileAnnotationOutcome;
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
      typedef Aws::Utils::Outcome<StartColumnStatisticsTaskRunResult, GlueError> StartColumnStatisticsTaskRunOutcome;
      typedef Aws::Utils::Outcome<StartColumnStatisticsTaskRunScheduleResult, GlueError> StartColumnStatisticsTaskRunScheduleOutcome;
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
      typedef Aws::Utils::Outcome<StopColumnStatisticsTaskRunResult, GlueError> StopColumnStatisticsTaskRunOutcome;
      typedef Aws::Utils::Outcome<StopColumnStatisticsTaskRunScheduleResult, GlueError> StopColumnStatisticsTaskRunScheduleOutcome;
      typedef Aws::Utils::Outcome<StopCrawlerResult, GlueError> StopCrawlerOutcome;
      typedef Aws::Utils::Outcome<StopCrawlerScheduleResult, GlueError> StopCrawlerScheduleOutcome;
      typedef Aws::Utils::Outcome<StopSessionResult, GlueError> StopSessionOutcome;
      typedef Aws::Utils::Outcome<StopTriggerResult, GlueError> StopTriggerOutcome;
      typedef Aws::Utils::Outcome<StopWorkflowRunResult, GlueError> StopWorkflowRunOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, GlueError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<TestConnectionResult, GlueError> TestConnectionOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, GlueError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateBlueprintResult, GlueError> UpdateBlueprintOutcome;
      typedef Aws::Utils::Outcome<UpdateCatalogResult, GlueError> UpdateCatalogOutcome;
      typedef Aws::Utils::Outcome<UpdateClassifierResult, GlueError> UpdateClassifierOutcome;
      typedef Aws::Utils::Outcome<UpdateColumnStatisticsForPartitionResult, GlueError> UpdateColumnStatisticsForPartitionOutcome;
      typedef Aws::Utils::Outcome<UpdateColumnStatisticsForTableResult, GlueError> UpdateColumnStatisticsForTableOutcome;
      typedef Aws::Utils::Outcome<UpdateColumnStatisticsTaskSettingsResult, GlueError> UpdateColumnStatisticsTaskSettingsOutcome;
      typedef Aws::Utils::Outcome<UpdateConnectionResult, GlueError> UpdateConnectionOutcome;
      typedef Aws::Utils::Outcome<UpdateCrawlerResult, GlueError> UpdateCrawlerOutcome;
      typedef Aws::Utils::Outcome<UpdateCrawlerScheduleResult, GlueError> UpdateCrawlerScheduleOutcome;
      typedef Aws::Utils::Outcome<UpdateDataQualityRulesetResult, GlueError> UpdateDataQualityRulesetOutcome;
      typedef Aws::Utils::Outcome<UpdateDatabaseResult, GlueError> UpdateDatabaseOutcome;
      typedef Aws::Utils::Outcome<UpdateDevEndpointResult, GlueError> UpdateDevEndpointOutcome;
      typedef Aws::Utils::Outcome<UpdateGlueIdentityCenterConfigurationResult, GlueError> UpdateGlueIdentityCenterConfigurationOutcome;
      typedef Aws::Utils::Outcome<UpdateIntegrationResourcePropertyResult, GlueError> UpdateIntegrationResourcePropertyOutcome;
      typedef Aws::Utils::Outcome<UpdateIntegrationTablePropertiesResult, GlueError> UpdateIntegrationTablePropertiesOutcome;
      typedef Aws::Utils::Outcome<UpdateJobResult, GlueError> UpdateJobOutcome;
      typedef Aws::Utils::Outcome<UpdateJobFromSourceControlResult, GlueError> UpdateJobFromSourceControlOutcome;
      typedef Aws::Utils::Outcome<UpdateMLTransformResult, GlueError> UpdateMLTransformOutcome;
      typedef Aws::Utils::Outcome<UpdatePartitionResult, GlueError> UpdatePartitionOutcome;
      typedef Aws::Utils::Outcome<UpdateRegistryResult, GlueError> UpdateRegistryOutcome;
      typedef Aws::Utils::Outcome<UpdateSchemaResult, GlueError> UpdateSchemaOutcome;
      typedef Aws::Utils::Outcome<UpdateSourceControlFromJobResult, GlueError> UpdateSourceControlFromJobOutcome;
      typedef Aws::Utils::Outcome<UpdateTableResult, GlueError> UpdateTableOutcome;
      typedef Aws::Utils::Outcome<UpdateTableOptimizerResult, GlueError> UpdateTableOptimizerOutcome;
      typedef Aws::Utils::Outcome<UpdateTriggerResult, GlueError> UpdateTriggerOutcome;
      typedef Aws::Utils::Outcome<UpdateUsageProfileResult, GlueError> UpdateUsageProfileOutcome;
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
      typedef std::future<BatchGetTableOptimizerOutcome> BatchGetTableOptimizerOutcomeCallable;
      typedef std::future<BatchGetTriggersOutcome> BatchGetTriggersOutcomeCallable;
      typedef std::future<BatchGetWorkflowsOutcome> BatchGetWorkflowsOutcomeCallable;
      typedef std::future<BatchPutDataQualityStatisticAnnotationOutcome> BatchPutDataQualityStatisticAnnotationOutcomeCallable;
      typedef std::future<BatchStopJobRunOutcome> BatchStopJobRunOutcomeCallable;
      typedef std::future<BatchUpdatePartitionOutcome> BatchUpdatePartitionOutcomeCallable;
      typedef std::future<CancelDataQualityRuleRecommendationRunOutcome> CancelDataQualityRuleRecommendationRunOutcomeCallable;
      typedef std::future<CancelDataQualityRulesetEvaluationRunOutcome> CancelDataQualityRulesetEvaluationRunOutcomeCallable;
      typedef std::future<CancelMLTaskRunOutcome> CancelMLTaskRunOutcomeCallable;
      typedef std::future<CancelStatementOutcome> CancelStatementOutcomeCallable;
      typedef std::future<CheckSchemaVersionValidityOutcome> CheckSchemaVersionValidityOutcomeCallable;
      typedef std::future<CreateBlueprintOutcome> CreateBlueprintOutcomeCallable;
      typedef std::future<CreateCatalogOutcome> CreateCatalogOutcomeCallable;
      typedef std::future<CreateClassifierOutcome> CreateClassifierOutcomeCallable;
      typedef std::future<CreateColumnStatisticsTaskSettingsOutcome> CreateColumnStatisticsTaskSettingsOutcomeCallable;
      typedef std::future<CreateConnectionOutcome> CreateConnectionOutcomeCallable;
      typedef std::future<CreateCrawlerOutcome> CreateCrawlerOutcomeCallable;
      typedef std::future<CreateCustomEntityTypeOutcome> CreateCustomEntityTypeOutcomeCallable;
      typedef std::future<CreateDataQualityRulesetOutcome> CreateDataQualityRulesetOutcomeCallable;
      typedef std::future<CreateDatabaseOutcome> CreateDatabaseOutcomeCallable;
      typedef std::future<CreateDevEndpointOutcome> CreateDevEndpointOutcomeCallable;
      typedef std::future<CreateGlueIdentityCenterConfigurationOutcome> CreateGlueIdentityCenterConfigurationOutcomeCallable;
      typedef std::future<CreateIntegrationOutcome> CreateIntegrationOutcomeCallable;
      typedef std::future<CreateIntegrationResourcePropertyOutcome> CreateIntegrationResourcePropertyOutcomeCallable;
      typedef std::future<CreateIntegrationTablePropertiesOutcome> CreateIntegrationTablePropertiesOutcomeCallable;
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
      typedef std::future<CreateTableOptimizerOutcome> CreateTableOptimizerOutcomeCallable;
      typedef std::future<CreateTriggerOutcome> CreateTriggerOutcomeCallable;
      typedef std::future<CreateUsageProfileOutcome> CreateUsageProfileOutcomeCallable;
      typedef std::future<CreateUserDefinedFunctionOutcome> CreateUserDefinedFunctionOutcomeCallable;
      typedef std::future<CreateWorkflowOutcome> CreateWorkflowOutcomeCallable;
      typedef std::future<DeleteBlueprintOutcome> DeleteBlueprintOutcomeCallable;
      typedef std::future<DeleteCatalogOutcome> DeleteCatalogOutcomeCallable;
      typedef std::future<DeleteClassifierOutcome> DeleteClassifierOutcomeCallable;
      typedef std::future<DeleteColumnStatisticsForPartitionOutcome> DeleteColumnStatisticsForPartitionOutcomeCallable;
      typedef std::future<DeleteColumnStatisticsForTableOutcome> DeleteColumnStatisticsForTableOutcomeCallable;
      typedef std::future<DeleteColumnStatisticsTaskSettingsOutcome> DeleteColumnStatisticsTaskSettingsOutcomeCallable;
      typedef std::future<DeleteConnectionOutcome> DeleteConnectionOutcomeCallable;
      typedef std::future<DeleteCrawlerOutcome> DeleteCrawlerOutcomeCallable;
      typedef std::future<DeleteCustomEntityTypeOutcome> DeleteCustomEntityTypeOutcomeCallable;
      typedef std::future<DeleteDataQualityRulesetOutcome> DeleteDataQualityRulesetOutcomeCallable;
      typedef std::future<DeleteDatabaseOutcome> DeleteDatabaseOutcomeCallable;
      typedef std::future<DeleteDevEndpointOutcome> DeleteDevEndpointOutcomeCallable;
      typedef std::future<DeleteGlueIdentityCenterConfigurationOutcome> DeleteGlueIdentityCenterConfigurationOutcomeCallable;
      typedef std::future<DeleteIntegrationOutcome> DeleteIntegrationOutcomeCallable;
      typedef std::future<DeleteIntegrationTablePropertiesOutcome> DeleteIntegrationTablePropertiesOutcomeCallable;
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
      typedef std::future<DeleteTableOptimizerOutcome> DeleteTableOptimizerOutcomeCallable;
      typedef std::future<DeleteTableVersionOutcome> DeleteTableVersionOutcomeCallable;
      typedef std::future<DeleteTriggerOutcome> DeleteTriggerOutcomeCallable;
      typedef std::future<DeleteUsageProfileOutcome> DeleteUsageProfileOutcomeCallable;
      typedef std::future<DeleteUserDefinedFunctionOutcome> DeleteUserDefinedFunctionOutcomeCallable;
      typedef std::future<DeleteWorkflowOutcome> DeleteWorkflowOutcomeCallable;
      typedef std::future<DescribeConnectionTypeOutcome> DescribeConnectionTypeOutcomeCallable;
      typedef std::future<DescribeEntityOutcome> DescribeEntityOutcomeCallable;
      typedef std::future<DescribeInboundIntegrationsOutcome> DescribeInboundIntegrationsOutcomeCallable;
      typedef std::future<DescribeIntegrationsOutcome> DescribeIntegrationsOutcomeCallable;
      typedef std::future<GetBlueprintOutcome> GetBlueprintOutcomeCallable;
      typedef std::future<GetBlueprintRunOutcome> GetBlueprintRunOutcomeCallable;
      typedef std::future<GetBlueprintRunsOutcome> GetBlueprintRunsOutcomeCallable;
      typedef std::future<GetCatalogOutcome> GetCatalogOutcomeCallable;
      typedef std::future<GetCatalogImportStatusOutcome> GetCatalogImportStatusOutcomeCallable;
      typedef std::future<GetCatalogsOutcome> GetCatalogsOutcomeCallable;
      typedef std::future<GetClassifierOutcome> GetClassifierOutcomeCallable;
      typedef std::future<GetClassifiersOutcome> GetClassifiersOutcomeCallable;
      typedef std::future<GetColumnStatisticsForPartitionOutcome> GetColumnStatisticsForPartitionOutcomeCallable;
      typedef std::future<GetColumnStatisticsForTableOutcome> GetColumnStatisticsForTableOutcomeCallable;
      typedef std::future<GetColumnStatisticsTaskRunOutcome> GetColumnStatisticsTaskRunOutcomeCallable;
      typedef std::future<GetColumnStatisticsTaskRunsOutcome> GetColumnStatisticsTaskRunsOutcomeCallable;
      typedef std::future<GetColumnStatisticsTaskSettingsOutcome> GetColumnStatisticsTaskSettingsOutcomeCallable;
      typedef std::future<GetConnectionOutcome> GetConnectionOutcomeCallable;
      typedef std::future<GetConnectionsOutcome> GetConnectionsOutcomeCallable;
      typedef std::future<GetCrawlerOutcome> GetCrawlerOutcomeCallable;
      typedef std::future<GetCrawlerMetricsOutcome> GetCrawlerMetricsOutcomeCallable;
      typedef std::future<GetCrawlersOutcome> GetCrawlersOutcomeCallable;
      typedef std::future<GetCustomEntityTypeOutcome> GetCustomEntityTypeOutcomeCallable;
      typedef std::future<GetDataCatalogEncryptionSettingsOutcome> GetDataCatalogEncryptionSettingsOutcomeCallable;
      typedef std::future<GetDataQualityModelOutcome> GetDataQualityModelOutcomeCallable;
      typedef std::future<GetDataQualityModelResultOutcome> GetDataQualityModelResultOutcomeCallable;
      typedef std::future<GetDataQualityResultOutcome> GetDataQualityResultOutcomeCallable;
      typedef std::future<GetDataQualityRuleRecommendationRunOutcome> GetDataQualityRuleRecommendationRunOutcomeCallable;
      typedef std::future<GetDataQualityRulesetOutcome> GetDataQualityRulesetOutcomeCallable;
      typedef std::future<GetDataQualityRulesetEvaluationRunOutcome> GetDataQualityRulesetEvaluationRunOutcomeCallable;
      typedef std::future<GetDatabaseOutcome> GetDatabaseOutcomeCallable;
      typedef std::future<GetDatabasesOutcome> GetDatabasesOutcomeCallable;
      typedef std::future<GetDataflowGraphOutcome> GetDataflowGraphOutcomeCallable;
      typedef std::future<GetDevEndpointOutcome> GetDevEndpointOutcomeCallable;
      typedef std::future<GetDevEndpointsOutcome> GetDevEndpointsOutcomeCallable;
      typedef std::future<GetEntityRecordsOutcome> GetEntityRecordsOutcomeCallable;
      typedef std::future<GetGlueIdentityCenterConfigurationOutcome> GetGlueIdentityCenterConfigurationOutcomeCallable;
      typedef std::future<GetIntegrationResourcePropertyOutcome> GetIntegrationResourcePropertyOutcomeCallable;
      typedef std::future<GetIntegrationTablePropertiesOutcome> GetIntegrationTablePropertiesOutcomeCallable;
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
      typedef std::future<GetTableOptimizerOutcome> GetTableOptimizerOutcomeCallable;
      typedef std::future<GetTableVersionOutcome> GetTableVersionOutcomeCallable;
      typedef std::future<GetTableVersionsOutcome> GetTableVersionsOutcomeCallable;
      typedef std::future<GetTablesOutcome> GetTablesOutcomeCallable;
      typedef std::future<GetTagsOutcome> GetTagsOutcomeCallable;
      typedef std::future<GetTriggerOutcome> GetTriggerOutcomeCallable;
      typedef std::future<GetTriggersOutcome> GetTriggersOutcomeCallable;
      typedef std::future<GetUnfilteredPartitionMetadataOutcome> GetUnfilteredPartitionMetadataOutcomeCallable;
      typedef std::future<GetUnfilteredPartitionsMetadataOutcome> GetUnfilteredPartitionsMetadataOutcomeCallable;
      typedef std::future<GetUnfilteredTableMetadataOutcome> GetUnfilteredTableMetadataOutcomeCallable;
      typedef std::future<GetUsageProfileOutcome> GetUsageProfileOutcomeCallable;
      typedef std::future<GetUserDefinedFunctionOutcome> GetUserDefinedFunctionOutcomeCallable;
      typedef std::future<GetUserDefinedFunctionsOutcome> GetUserDefinedFunctionsOutcomeCallable;
      typedef std::future<GetWorkflowOutcome> GetWorkflowOutcomeCallable;
      typedef std::future<GetWorkflowRunOutcome> GetWorkflowRunOutcomeCallable;
      typedef std::future<GetWorkflowRunPropertiesOutcome> GetWorkflowRunPropertiesOutcomeCallable;
      typedef std::future<GetWorkflowRunsOutcome> GetWorkflowRunsOutcomeCallable;
      typedef std::future<ImportCatalogToGlueOutcome> ImportCatalogToGlueOutcomeCallable;
      typedef std::future<ListBlueprintsOutcome> ListBlueprintsOutcomeCallable;
      typedef std::future<ListColumnStatisticsTaskRunsOutcome> ListColumnStatisticsTaskRunsOutcomeCallable;
      typedef std::future<ListConnectionTypesOutcome> ListConnectionTypesOutcomeCallable;
      typedef std::future<ListCrawlersOutcome> ListCrawlersOutcomeCallable;
      typedef std::future<ListCrawlsOutcome> ListCrawlsOutcomeCallable;
      typedef std::future<ListCustomEntityTypesOutcome> ListCustomEntityTypesOutcomeCallable;
      typedef std::future<ListDataQualityResultsOutcome> ListDataQualityResultsOutcomeCallable;
      typedef std::future<ListDataQualityRuleRecommendationRunsOutcome> ListDataQualityRuleRecommendationRunsOutcomeCallable;
      typedef std::future<ListDataQualityRulesetEvaluationRunsOutcome> ListDataQualityRulesetEvaluationRunsOutcomeCallable;
      typedef std::future<ListDataQualityRulesetsOutcome> ListDataQualityRulesetsOutcomeCallable;
      typedef std::future<ListDataQualityStatisticAnnotationsOutcome> ListDataQualityStatisticAnnotationsOutcomeCallable;
      typedef std::future<ListDataQualityStatisticsOutcome> ListDataQualityStatisticsOutcomeCallable;
      typedef std::future<ListDevEndpointsOutcome> ListDevEndpointsOutcomeCallable;
      typedef std::future<ListEntitiesOutcome> ListEntitiesOutcomeCallable;
      typedef std::future<ListJobsOutcome> ListJobsOutcomeCallable;
      typedef std::future<ListMLTransformsOutcome> ListMLTransformsOutcomeCallable;
      typedef std::future<ListRegistriesOutcome> ListRegistriesOutcomeCallable;
      typedef std::future<ListSchemaVersionsOutcome> ListSchemaVersionsOutcomeCallable;
      typedef std::future<ListSchemasOutcome> ListSchemasOutcomeCallable;
      typedef std::future<ListSessionsOutcome> ListSessionsOutcomeCallable;
      typedef std::future<ListStatementsOutcome> ListStatementsOutcomeCallable;
      typedef std::future<ListTableOptimizerRunsOutcome> ListTableOptimizerRunsOutcomeCallable;
      typedef std::future<ListTriggersOutcome> ListTriggersOutcomeCallable;
      typedef std::future<ListUsageProfilesOutcome> ListUsageProfilesOutcomeCallable;
      typedef std::future<ListWorkflowsOutcome> ListWorkflowsOutcomeCallable;
      typedef std::future<ModifyIntegrationOutcome> ModifyIntegrationOutcomeCallable;
      typedef std::future<PutDataCatalogEncryptionSettingsOutcome> PutDataCatalogEncryptionSettingsOutcomeCallable;
      typedef std::future<PutDataQualityProfileAnnotationOutcome> PutDataQualityProfileAnnotationOutcomeCallable;
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
      typedef std::future<StartColumnStatisticsTaskRunOutcome> StartColumnStatisticsTaskRunOutcomeCallable;
      typedef std::future<StartColumnStatisticsTaskRunScheduleOutcome> StartColumnStatisticsTaskRunScheduleOutcomeCallable;
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
      typedef std::future<StopColumnStatisticsTaskRunOutcome> StopColumnStatisticsTaskRunOutcomeCallable;
      typedef std::future<StopColumnStatisticsTaskRunScheduleOutcome> StopColumnStatisticsTaskRunScheduleOutcomeCallable;
      typedef std::future<StopCrawlerOutcome> StopCrawlerOutcomeCallable;
      typedef std::future<StopCrawlerScheduleOutcome> StopCrawlerScheduleOutcomeCallable;
      typedef std::future<StopSessionOutcome> StopSessionOutcomeCallable;
      typedef std::future<StopTriggerOutcome> StopTriggerOutcomeCallable;
      typedef std::future<StopWorkflowRunOutcome> StopWorkflowRunOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<TestConnectionOutcome> TestConnectionOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateBlueprintOutcome> UpdateBlueprintOutcomeCallable;
      typedef std::future<UpdateCatalogOutcome> UpdateCatalogOutcomeCallable;
      typedef std::future<UpdateClassifierOutcome> UpdateClassifierOutcomeCallable;
      typedef std::future<UpdateColumnStatisticsForPartitionOutcome> UpdateColumnStatisticsForPartitionOutcomeCallable;
      typedef std::future<UpdateColumnStatisticsForTableOutcome> UpdateColumnStatisticsForTableOutcomeCallable;
      typedef std::future<UpdateColumnStatisticsTaskSettingsOutcome> UpdateColumnStatisticsTaskSettingsOutcomeCallable;
      typedef std::future<UpdateConnectionOutcome> UpdateConnectionOutcomeCallable;
      typedef std::future<UpdateCrawlerOutcome> UpdateCrawlerOutcomeCallable;
      typedef std::future<UpdateCrawlerScheduleOutcome> UpdateCrawlerScheduleOutcomeCallable;
      typedef std::future<UpdateDataQualityRulesetOutcome> UpdateDataQualityRulesetOutcomeCallable;
      typedef std::future<UpdateDatabaseOutcome> UpdateDatabaseOutcomeCallable;
      typedef std::future<UpdateDevEndpointOutcome> UpdateDevEndpointOutcomeCallable;
      typedef std::future<UpdateGlueIdentityCenterConfigurationOutcome> UpdateGlueIdentityCenterConfigurationOutcomeCallable;
      typedef std::future<UpdateIntegrationResourcePropertyOutcome> UpdateIntegrationResourcePropertyOutcomeCallable;
      typedef std::future<UpdateIntegrationTablePropertiesOutcome> UpdateIntegrationTablePropertiesOutcomeCallable;
      typedef std::future<UpdateJobOutcome> UpdateJobOutcomeCallable;
      typedef std::future<UpdateJobFromSourceControlOutcome> UpdateJobFromSourceControlOutcomeCallable;
      typedef std::future<UpdateMLTransformOutcome> UpdateMLTransformOutcomeCallable;
      typedef std::future<UpdatePartitionOutcome> UpdatePartitionOutcomeCallable;
      typedef std::future<UpdateRegistryOutcome> UpdateRegistryOutcomeCallable;
      typedef std::future<UpdateSchemaOutcome> UpdateSchemaOutcomeCallable;
      typedef std::future<UpdateSourceControlFromJobOutcome> UpdateSourceControlFromJobOutcomeCallable;
      typedef std::future<UpdateTableOutcome> UpdateTableOutcomeCallable;
      typedef std::future<UpdateTableOptimizerOutcome> UpdateTableOptimizerOutcomeCallable;
      typedef std::future<UpdateTriggerOutcome> UpdateTriggerOutcomeCallable;
      typedef std::future<UpdateUsageProfileOutcome> UpdateUsageProfileOutcomeCallable;
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
    typedef std::function<void(const GlueClient*, const Model::BatchGetTableOptimizerRequest&, const Model::BatchGetTableOptimizerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetTableOptimizerResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::BatchGetTriggersRequest&, const Model::BatchGetTriggersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetTriggersResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::BatchGetWorkflowsRequest&, const Model::BatchGetWorkflowsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetWorkflowsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::BatchPutDataQualityStatisticAnnotationRequest&, const Model::BatchPutDataQualityStatisticAnnotationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchPutDataQualityStatisticAnnotationResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::BatchStopJobRunRequest&, const Model::BatchStopJobRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchStopJobRunResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::BatchUpdatePartitionRequest&, const Model::BatchUpdatePartitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchUpdatePartitionResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::CancelDataQualityRuleRecommendationRunRequest&, const Model::CancelDataQualityRuleRecommendationRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelDataQualityRuleRecommendationRunResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::CancelDataQualityRulesetEvaluationRunRequest&, const Model::CancelDataQualityRulesetEvaluationRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelDataQualityRulesetEvaluationRunResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::CancelMLTaskRunRequest&, const Model::CancelMLTaskRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelMLTaskRunResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::CancelStatementRequest&, const Model::CancelStatementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelStatementResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::CheckSchemaVersionValidityRequest&, const Model::CheckSchemaVersionValidityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CheckSchemaVersionValidityResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::CreateBlueprintRequest&, const Model::CreateBlueprintOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBlueprintResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::CreateCatalogRequest&, const Model::CreateCatalogOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCatalogResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::CreateClassifierRequest&, const Model::CreateClassifierOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateClassifierResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::CreateColumnStatisticsTaskSettingsRequest&, const Model::CreateColumnStatisticsTaskSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateColumnStatisticsTaskSettingsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::CreateConnectionRequest&, const Model::CreateConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConnectionResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::CreateCrawlerRequest&, const Model::CreateCrawlerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCrawlerResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::CreateCustomEntityTypeRequest&, const Model::CreateCustomEntityTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCustomEntityTypeResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::CreateDataQualityRulesetRequest&, const Model::CreateDataQualityRulesetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDataQualityRulesetResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::CreateDatabaseRequest&, const Model::CreateDatabaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDatabaseResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::CreateDevEndpointRequest&, const Model::CreateDevEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDevEndpointResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::CreateGlueIdentityCenterConfigurationRequest&, const Model::CreateGlueIdentityCenterConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateGlueIdentityCenterConfigurationResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::CreateIntegrationRequest&, const Model::CreateIntegrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateIntegrationResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::CreateIntegrationResourcePropertyRequest&, const Model::CreateIntegrationResourcePropertyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateIntegrationResourcePropertyResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::CreateIntegrationTablePropertiesRequest&, const Model::CreateIntegrationTablePropertiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateIntegrationTablePropertiesResponseReceivedHandler;
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
    typedef std::function<void(const GlueClient*, const Model::CreateTableOptimizerRequest&, const Model::CreateTableOptimizerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTableOptimizerResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::CreateTriggerRequest&, const Model::CreateTriggerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTriggerResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::CreateUsageProfileRequest&, const Model::CreateUsageProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateUsageProfileResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::CreateUserDefinedFunctionRequest&, const Model::CreateUserDefinedFunctionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateUserDefinedFunctionResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::CreateWorkflowRequest&, const Model::CreateWorkflowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateWorkflowResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::DeleteBlueprintRequest&, const Model::DeleteBlueprintOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBlueprintResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::DeleteCatalogRequest&, const Model::DeleteCatalogOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCatalogResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::DeleteClassifierRequest&, const Model::DeleteClassifierOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteClassifierResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::DeleteColumnStatisticsForPartitionRequest&, const Model::DeleteColumnStatisticsForPartitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteColumnStatisticsForPartitionResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::DeleteColumnStatisticsForTableRequest&, const Model::DeleteColumnStatisticsForTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteColumnStatisticsForTableResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::DeleteColumnStatisticsTaskSettingsRequest&, const Model::DeleteColumnStatisticsTaskSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteColumnStatisticsTaskSettingsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::DeleteConnectionRequest&, const Model::DeleteConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConnectionResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::DeleteCrawlerRequest&, const Model::DeleteCrawlerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCrawlerResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::DeleteCustomEntityTypeRequest&, const Model::DeleteCustomEntityTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCustomEntityTypeResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::DeleteDataQualityRulesetRequest&, const Model::DeleteDataQualityRulesetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDataQualityRulesetResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::DeleteDatabaseRequest&, const Model::DeleteDatabaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDatabaseResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::DeleteDevEndpointRequest&, const Model::DeleteDevEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDevEndpointResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::DeleteGlueIdentityCenterConfigurationRequest&, const Model::DeleteGlueIdentityCenterConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteGlueIdentityCenterConfigurationResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::DeleteIntegrationRequest&, const Model::DeleteIntegrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteIntegrationResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::DeleteIntegrationTablePropertiesRequest&, const Model::DeleteIntegrationTablePropertiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteIntegrationTablePropertiesResponseReceivedHandler;
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
    typedef std::function<void(const GlueClient*, const Model::DeleteTableOptimizerRequest&, const Model::DeleteTableOptimizerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTableOptimizerResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::DeleteTableVersionRequest&, const Model::DeleteTableVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTableVersionResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::DeleteTriggerRequest&, const Model::DeleteTriggerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTriggerResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::DeleteUsageProfileRequest&, const Model::DeleteUsageProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUsageProfileResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::DeleteUserDefinedFunctionRequest&, const Model::DeleteUserDefinedFunctionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUserDefinedFunctionResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::DeleteWorkflowRequest&, const Model::DeleteWorkflowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteWorkflowResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::DescribeConnectionTypeRequest&, const Model::DescribeConnectionTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeConnectionTypeResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::DescribeEntityRequest&, const Model::DescribeEntityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEntityResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::DescribeInboundIntegrationsRequest&, const Model::DescribeInboundIntegrationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInboundIntegrationsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::DescribeIntegrationsRequest&, const Model::DescribeIntegrationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeIntegrationsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetBlueprintRequest&, const Model::GetBlueprintOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBlueprintResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetBlueprintRunRequest&, const Model::GetBlueprintRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBlueprintRunResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetBlueprintRunsRequest&, const Model::GetBlueprintRunsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBlueprintRunsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetCatalogRequest&, const Model::GetCatalogOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCatalogResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetCatalogImportStatusRequest&, const Model::GetCatalogImportStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCatalogImportStatusResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetCatalogsRequest&, const Model::GetCatalogsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCatalogsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetClassifierRequest&, const Model::GetClassifierOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetClassifierResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetClassifiersRequest&, const Model::GetClassifiersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetClassifiersResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetColumnStatisticsForPartitionRequest&, const Model::GetColumnStatisticsForPartitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetColumnStatisticsForPartitionResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetColumnStatisticsForTableRequest&, const Model::GetColumnStatisticsForTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetColumnStatisticsForTableResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetColumnStatisticsTaskRunRequest&, const Model::GetColumnStatisticsTaskRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetColumnStatisticsTaskRunResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetColumnStatisticsTaskRunsRequest&, const Model::GetColumnStatisticsTaskRunsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetColumnStatisticsTaskRunsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetColumnStatisticsTaskSettingsRequest&, const Model::GetColumnStatisticsTaskSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetColumnStatisticsTaskSettingsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetConnectionRequest&, const Model::GetConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetConnectionResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetConnectionsRequest&, const Model::GetConnectionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetConnectionsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetCrawlerRequest&, const Model::GetCrawlerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCrawlerResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetCrawlerMetricsRequest&, const Model::GetCrawlerMetricsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCrawlerMetricsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetCrawlersRequest&, const Model::GetCrawlersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCrawlersResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetCustomEntityTypeRequest&, const Model::GetCustomEntityTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCustomEntityTypeResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetDataCatalogEncryptionSettingsRequest&, const Model::GetDataCatalogEncryptionSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDataCatalogEncryptionSettingsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetDataQualityModelRequest&, const Model::GetDataQualityModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDataQualityModelResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetDataQualityModelResultRequest&, const Model::GetDataQualityModelResultOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDataQualityModelResultResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetDataQualityResultRequest&, const Model::GetDataQualityResultOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDataQualityResultResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetDataQualityRuleRecommendationRunRequest&, const Model::GetDataQualityRuleRecommendationRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDataQualityRuleRecommendationRunResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetDataQualityRulesetRequest&, const Model::GetDataQualityRulesetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDataQualityRulesetResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetDataQualityRulesetEvaluationRunRequest&, const Model::GetDataQualityRulesetEvaluationRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDataQualityRulesetEvaluationRunResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetDatabaseRequest&, const Model::GetDatabaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDatabaseResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetDatabasesRequest&, const Model::GetDatabasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDatabasesResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetDataflowGraphRequest&, const Model::GetDataflowGraphOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDataflowGraphResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetDevEndpointRequest&, const Model::GetDevEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDevEndpointResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetDevEndpointsRequest&, const Model::GetDevEndpointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDevEndpointsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetEntityRecordsRequest&, const Model::GetEntityRecordsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEntityRecordsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetGlueIdentityCenterConfigurationRequest&, const Model::GetGlueIdentityCenterConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetGlueIdentityCenterConfigurationResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetIntegrationResourcePropertyRequest&, const Model::GetIntegrationResourcePropertyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetIntegrationResourcePropertyResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetIntegrationTablePropertiesRequest&, const Model::GetIntegrationTablePropertiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetIntegrationTablePropertiesResponseReceivedHandler;
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
    typedef std::function<void(const GlueClient*, const Model::GetTableOptimizerRequest&, const Model::GetTableOptimizerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTableOptimizerResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetTableVersionRequest&, const Model::GetTableVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTableVersionResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetTableVersionsRequest&, const Model::GetTableVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTableVersionsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetTablesRequest&, const Model::GetTablesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTablesResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetTagsRequest&, const Model::GetTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTagsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetTriggerRequest&, const Model::GetTriggerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTriggerResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetTriggersRequest&, const Model::GetTriggersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTriggersResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetUnfilteredPartitionMetadataRequest&, const Model::GetUnfilteredPartitionMetadataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUnfilteredPartitionMetadataResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetUnfilteredPartitionsMetadataRequest&, const Model::GetUnfilteredPartitionsMetadataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUnfilteredPartitionsMetadataResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetUnfilteredTableMetadataRequest&, const Model::GetUnfilteredTableMetadataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUnfilteredTableMetadataResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetUsageProfileRequest&, const Model::GetUsageProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUsageProfileResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetUserDefinedFunctionRequest&, const Model::GetUserDefinedFunctionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUserDefinedFunctionResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetUserDefinedFunctionsRequest&, const Model::GetUserDefinedFunctionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUserDefinedFunctionsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetWorkflowRequest&, const Model::GetWorkflowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetWorkflowResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetWorkflowRunRequest&, const Model::GetWorkflowRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetWorkflowRunResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetWorkflowRunPropertiesRequest&, const Model::GetWorkflowRunPropertiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetWorkflowRunPropertiesResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::GetWorkflowRunsRequest&, const Model::GetWorkflowRunsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetWorkflowRunsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::ImportCatalogToGlueRequest&, const Model::ImportCatalogToGlueOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportCatalogToGlueResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::ListBlueprintsRequest&, const Model::ListBlueprintsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBlueprintsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::ListColumnStatisticsTaskRunsRequest&, const Model::ListColumnStatisticsTaskRunsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListColumnStatisticsTaskRunsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::ListConnectionTypesRequest&, const Model::ListConnectionTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListConnectionTypesResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::ListCrawlersRequest&, const Model::ListCrawlersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCrawlersResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::ListCrawlsRequest&, const Model::ListCrawlsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCrawlsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::ListCustomEntityTypesRequest&, const Model::ListCustomEntityTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCustomEntityTypesResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::ListDataQualityResultsRequest&, const Model::ListDataQualityResultsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDataQualityResultsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::ListDataQualityRuleRecommendationRunsRequest&, const Model::ListDataQualityRuleRecommendationRunsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDataQualityRuleRecommendationRunsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::ListDataQualityRulesetEvaluationRunsRequest&, const Model::ListDataQualityRulesetEvaluationRunsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDataQualityRulesetEvaluationRunsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::ListDataQualityRulesetsRequest&, const Model::ListDataQualityRulesetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDataQualityRulesetsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::ListDataQualityStatisticAnnotationsRequest&, const Model::ListDataQualityStatisticAnnotationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDataQualityStatisticAnnotationsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::ListDataQualityStatisticsRequest&, const Model::ListDataQualityStatisticsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDataQualityStatisticsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::ListDevEndpointsRequest&, const Model::ListDevEndpointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDevEndpointsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::ListEntitiesRequest&, const Model::ListEntitiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEntitiesResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::ListJobsRequest&, const Model::ListJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListJobsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::ListMLTransformsRequest&, const Model::ListMLTransformsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMLTransformsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::ListRegistriesRequest&, const Model::ListRegistriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRegistriesResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::ListSchemaVersionsRequest&, const Model::ListSchemaVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSchemaVersionsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::ListSchemasRequest&, const Model::ListSchemasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSchemasResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::ListSessionsRequest&, const Model::ListSessionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSessionsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::ListStatementsRequest&, const Model::ListStatementsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStatementsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::ListTableOptimizerRunsRequest&, const Model::ListTableOptimizerRunsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTableOptimizerRunsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::ListTriggersRequest&, const Model::ListTriggersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTriggersResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::ListUsageProfilesRequest&, const Model::ListUsageProfilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUsageProfilesResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::ListWorkflowsRequest&, const Model::ListWorkflowsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListWorkflowsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::ModifyIntegrationRequest&, const Model::ModifyIntegrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyIntegrationResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::PutDataCatalogEncryptionSettingsRequest&, const Model::PutDataCatalogEncryptionSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutDataCatalogEncryptionSettingsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::PutDataQualityProfileAnnotationRequest&, const Model::PutDataQualityProfileAnnotationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutDataQualityProfileAnnotationResponseReceivedHandler;
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
    typedef std::function<void(const GlueClient*, const Model::StartColumnStatisticsTaskRunRequest&, const Model::StartColumnStatisticsTaskRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartColumnStatisticsTaskRunResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::StartColumnStatisticsTaskRunScheduleRequest&, const Model::StartColumnStatisticsTaskRunScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartColumnStatisticsTaskRunScheduleResponseReceivedHandler;
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
    typedef std::function<void(const GlueClient*, const Model::StopColumnStatisticsTaskRunRequest&, const Model::StopColumnStatisticsTaskRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopColumnStatisticsTaskRunResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::StopColumnStatisticsTaskRunScheduleRequest&, const Model::StopColumnStatisticsTaskRunScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopColumnStatisticsTaskRunScheduleResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::StopCrawlerRequest&, const Model::StopCrawlerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopCrawlerResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::StopCrawlerScheduleRequest&, const Model::StopCrawlerScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopCrawlerScheduleResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::StopSessionRequest&, const Model::StopSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopSessionResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::StopTriggerRequest&, const Model::StopTriggerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopTriggerResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::StopWorkflowRunRequest&, const Model::StopWorkflowRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopWorkflowRunResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::TestConnectionRequest&, const Model::TestConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TestConnectionResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::UpdateBlueprintRequest&, const Model::UpdateBlueprintOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateBlueprintResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::UpdateCatalogRequest&, const Model::UpdateCatalogOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCatalogResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::UpdateClassifierRequest&, const Model::UpdateClassifierOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateClassifierResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::UpdateColumnStatisticsForPartitionRequest&, const Model::UpdateColumnStatisticsForPartitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateColumnStatisticsForPartitionResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::UpdateColumnStatisticsForTableRequest&, const Model::UpdateColumnStatisticsForTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateColumnStatisticsForTableResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::UpdateColumnStatisticsTaskSettingsRequest&, const Model::UpdateColumnStatisticsTaskSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateColumnStatisticsTaskSettingsResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::UpdateConnectionRequest&, const Model::UpdateConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateConnectionResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::UpdateCrawlerRequest&, const Model::UpdateCrawlerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCrawlerResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::UpdateCrawlerScheduleRequest&, const Model::UpdateCrawlerScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCrawlerScheduleResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::UpdateDataQualityRulesetRequest&, const Model::UpdateDataQualityRulesetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDataQualityRulesetResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::UpdateDatabaseRequest&, const Model::UpdateDatabaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDatabaseResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::UpdateDevEndpointRequest&, const Model::UpdateDevEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDevEndpointResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::UpdateGlueIdentityCenterConfigurationRequest&, const Model::UpdateGlueIdentityCenterConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateGlueIdentityCenterConfigurationResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::UpdateIntegrationResourcePropertyRequest&, const Model::UpdateIntegrationResourcePropertyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateIntegrationResourcePropertyResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::UpdateIntegrationTablePropertiesRequest&, const Model::UpdateIntegrationTablePropertiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateIntegrationTablePropertiesResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::UpdateJobRequest&, const Model::UpdateJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateJobResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::UpdateJobFromSourceControlRequest&, const Model::UpdateJobFromSourceControlOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateJobFromSourceControlResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::UpdateMLTransformRequest&, const Model::UpdateMLTransformOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMLTransformResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::UpdatePartitionRequest&, const Model::UpdatePartitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePartitionResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::UpdateRegistryRequest&, const Model::UpdateRegistryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRegistryResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::UpdateSchemaRequest&, const Model::UpdateSchemaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSchemaResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::UpdateSourceControlFromJobRequest&, const Model::UpdateSourceControlFromJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSourceControlFromJobResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::UpdateTableRequest&, const Model::UpdateTableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTableResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::UpdateTableOptimizerRequest&, const Model::UpdateTableOptimizerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTableOptimizerResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::UpdateTriggerRequest&, const Model::UpdateTriggerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTriggerResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::UpdateUsageProfileRequest&, const Model::UpdateUsageProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUsageProfileResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::UpdateUserDefinedFunctionRequest&, const Model::UpdateUserDefinedFunctionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserDefinedFunctionResponseReceivedHandler;
    typedef std::function<void(const GlueClient*, const Model::UpdateWorkflowRequest&, const Model::UpdateWorkflowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateWorkflowResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace Glue
} // namespace Aws
