/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/sagemaker/SageMakerErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/sagemaker/SageMakerEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in SageMakerClient header */
#include <aws/sagemaker/model/AddAssociationResult.h>
#include <aws/sagemaker/model/AddTagsResult.h>
#include <aws/sagemaker/model/AssociateTrialComponentResult.h>
#include <aws/sagemaker/model/BatchDescribeModelPackageResult.h>
#include <aws/sagemaker/model/CreateActionResult.h>
#include <aws/sagemaker/model/CreateAlgorithmResult.h>
#include <aws/sagemaker/model/CreateAppResult.h>
#include <aws/sagemaker/model/CreateAppImageConfigResult.h>
#include <aws/sagemaker/model/CreateArtifactResult.h>
#include <aws/sagemaker/model/CreateAutoMLJobResult.h>
#include <aws/sagemaker/model/CreateCodeRepositoryResult.h>
#include <aws/sagemaker/model/CreateCompilationJobResult.h>
#include <aws/sagemaker/model/CreateContextResult.h>
#include <aws/sagemaker/model/CreateDataQualityJobDefinitionResult.h>
#include <aws/sagemaker/model/CreateDomainResult.h>
#include <aws/sagemaker/model/CreateEdgeDeploymentPlanResult.h>
#include <aws/sagemaker/model/CreateEndpointResult.h>
#include <aws/sagemaker/model/CreateEndpointConfigResult.h>
#include <aws/sagemaker/model/CreateExperimentResult.h>
#include <aws/sagemaker/model/CreateFeatureGroupResult.h>
#include <aws/sagemaker/model/CreateFlowDefinitionResult.h>
#include <aws/sagemaker/model/CreateHubResult.h>
#include <aws/sagemaker/model/CreateHumanTaskUiResult.h>
#include <aws/sagemaker/model/CreateHyperParameterTuningJobResult.h>
#include <aws/sagemaker/model/CreateImageResult.h>
#include <aws/sagemaker/model/CreateImageVersionResult.h>
#include <aws/sagemaker/model/CreateInferenceExperimentResult.h>
#include <aws/sagemaker/model/CreateInferenceRecommendationsJobResult.h>
#include <aws/sagemaker/model/CreateLabelingJobResult.h>
#include <aws/sagemaker/model/CreateModelResult.h>
#include <aws/sagemaker/model/CreateModelBiasJobDefinitionResult.h>
#include <aws/sagemaker/model/CreateModelCardResult.h>
#include <aws/sagemaker/model/CreateModelCardExportJobResult.h>
#include <aws/sagemaker/model/CreateModelExplainabilityJobDefinitionResult.h>
#include <aws/sagemaker/model/CreateModelPackageResult.h>
#include <aws/sagemaker/model/CreateModelPackageGroupResult.h>
#include <aws/sagemaker/model/CreateModelQualityJobDefinitionResult.h>
#include <aws/sagemaker/model/CreateMonitoringScheduleResult.h>
#include <aws/sagemaker/model/CreateNotebookInstanceResult.h>
#include <aws/sagemaker/model/CreateNotebookInstanceLifecycleConfigResult.h>
#include <aws/sagemaker/model/CreatePipelineResult.h>
#include <aws/sagemaker/model/CreatePresignedDomainUrlResult.h>
#include <aws/sagemaker/model/CreatePresignedNotebookInstanceUrlResult.h>
#include <aws/sagemaker/model/CreateProcessingJobResult.h>
#include <aws/sagemaker/model/CreateProjectResult.h>
#include <aws/sagemaker/model/CreateSpaceResult.h>
#include <aws/sagemaker/model/CreateStudioLifecycleConfigResult.h>
#include <aws/sagemaker/model/CreateTrainingJobResult.h>
#include <aws/sagemaker/model/CreateTransformJobResult.h>
#include <aws/sagemaker/model/CreateTrialResult.h>
#include <aws/sagemaker/model/CreateTrialComponentResult.h>
#include <aws/sagemaker/model/CreateUserProfileResult.h>
#include <aws/sagemaker/model/CreateWorkforceResult.h>
#include <aws/sagemaker/model/CreateWorkteamResult.h>
#include <aws/sagemaker/model/DeleteActionResult.h>
#include <aws/sagemaker/model/DeleteArtifactResult.h>
#include <aws/sagemaker/model/DeleteAssociationResult.h>
#include <aws/sagemaker/model/DeleteContextResult.h>
#include <aws/sagemaker/model/DeleteExperimentResult.h>
#include <aws/sagemaker/model/DeleteFlowDefinitionResult.h>
#include <aws/sagemaker/model/DeleteHumanTaskUiResult.h>
#include <aws/sagemaker/model/DeleteImageResult.h>
#include <aws/sagemaker/model/DeleteImageVersionResult.h>
#include <aws/sagemaker/model/DeleteInferenceExperimentResult.h>
#include <aws/sagemaker/model/DeletePipelineResult.h>
#include <aws/sagemaker/model/DeleteTagsResult.h>
#include <aws/sagemaker/model/DeleteTrialResult.h>
#include <aws/sagemaker/model/DeleteTrialComponentResult.h>
#include <aws/sagemaker/model/DeleteWorkforceResult.h>
#include <aws/sagemaker/model/DeleteWorkteamResult.h>
#include <aws/sagemaker/model/DescribeActionResult.h>
#include <aws/sagemaker/model/DescribeAlgorithmResult.h>
#include <aws/sagemaker/model/DescribeAppResult.h>
#include <aws/sagemaker/model/DescribeAppImageConfigResult.h>
#include <aws/sagemaker/model/DescribeArtifactResult.h>
#include <aws/sagemaker/model/DescribeAutoMLJobResult.h>
#include <aws/sagemaker/model/DescribeCodeRepositoryResult.h>
#include <aws/sagemaker/model/DescribeCompilationJobResult.h>
#include <aws/sagemaker/model/DescribeContextResult.h>
#include <aws/sagemaker/model/DescribeDataQualityJobDefinitionResult.h>
#include <aws/sagemaker/model/DescribeDeviceResult.h>
#include <aws/sagemaker/model/DescribeDeviceFleetResult.h>
#include <aws/sagemaker/model/DescribeDomainResult.h>
#include <aws/sagemaker/model/DescribeEdgeDeploymentPlanResult.h>
#include <aws/sagemaker/model/DescribeEdgePackagingJobResult.h>
#include <aws/sagemaker/model/DescribeEndpointResult.h>
#include <aws/sagemaker/model/DescribeEndpointConfigResult.h>
#include <aws/sagemaker/model/DescribeExperimentResult.h>
#include <aws/sagemaker/model/DescribeFeatureGroupResult.h>
#include <aws/sagemaker/model/DescribeFeatureMetadataResult.h>
#include <aws/sagemaker/model/DescribeFlowDefinitionResult.h>
#include <aws/sagemaker/model/DescribeHubResult.h>
#include <aws/sagemaker/model/DescribeHubContentResult.h>
#include <aws/sagemaker/model/DescribeHumanTaskUiResult.h>
#include <aws/sagemaker/model/DescribeHyperParameterTuningJobResult.h>
#include <aws/sagemaker/model/DescribeImageResult.h>
#include <aws/sagemaker/model/DescribeImageVersionResult.h>
#include <aws/sagemaker/model/DescribeInferenceExperimentResult.h>
#include <aws/sagemaker/model/DescribeInferenceRecommendationsJobResult.h>
#include <aws/sagemaker/model/DescribeLabelingJobResult.h>
#include <aws/sagemaker/model/DescribeLineageGroupResult.h>
#include <aws/sagemaker/model/DescribeModelResult.h>
#include <aws/sagemaker/model/DescribeModelBiasJobDefinitionResult.h>
#include <aws/sagemaker/model/DescribeModelCardResult.h>
#include <aws/sagemaker/model/DescribeModelCardExportJobResult.h>
#include <aws/sagemaker/model/DescribeModelExplainabilityJobDefinitionResult.h>
#include <aws/sagemaker/model/DescribeModelPackageResult.h>
#include <aws/sagemaker/model/DescribeModelPackageGroupResult.h>
#include <aws/sagemaker/model/DescribeModelQualityJobDefinitionResult.h>
#include <aws/sagemaker/model/DescribeMonitoringScheduleResult.h>
#include <aws/sagemaker/model/DescribeNotebookInstanceResult.h>
#include <aws/sagemaker/model/DescribeNotebookInstanceLifecycleConfigResult.h>
#include <aws/sagemaker/model/DescribePipelineResult.h>
#include <aws/sagemaker/model/DescribePipelineDefinitionForExecutionResult.h>
#include <aws/sagemaker/model/DescribePipelineExecutionResult.h>
#include <aws/sagemaker/model/DescribeProcessingJobResult.h>
#include <aws/sagemaker/model/DescribeProjectResult.h>
#include <aws/sagemaker/model/DescribeSpaceResult.h>
#include <aws/sagemaker/model/DescribeStudioLifecycleConfigResult.h>
#include <aws/sagemaker/model/DescribeSubscribedWorkteamResult.h>
#include <aws/sagemaker/model/DescribeTrainingJobResult.h>
#include <aws/sagemaker/model/DescribeTransformJobResult.h>
#include <aws/sagemaker/model/DescribeTrialResult.h>
#include <aws/sagemaker/model/DescribeTrialComponentResult.h>
#include <aws/sagemaker/model/DescribeUserProfileResult.h>
#include <aws/sagemaker/model/DescribeWorkforceResult.h>
#include <aws/sagemaker/model/DescribeWorkteamResult.h>
#include <aws/sagemaker/model/DisableSagemakerServicecatalogPortfolioResult.h>
#include <aws/sagemaker/model/DisassociateTrialComponentResult.h>
#include <aws/sagemaker/model/EnableSagemakerServicecatalogPortfolioResult.h>
#include <aws/sagemaker/model/GetDeviceFleetReportResult.h>
#include <aws/sagemaker/model/GetLineageGroupPolicyResult.h>
#include <aws/sagemaker/model/GetModelPackageGroupPolicyResult.h>
#include <aws/sagemaker/model/GetSagemakerServicecatalogPortfolioStatusResult.h>
#include <aws/sagemaker/model/GetSearchSuggestionsResult.h>
#include <aws/sagemaker/model/ImportHubContentResult.h>
#include <aws/sagemaker/model/ListActionsResult.h>
#include <aws/sagemaker/model/ListAlgorithmsResult.h>
#include <aws/sagemaker/model/ListAliasesResult.h>
#include <aws/sagemaker/model/ListAppImageConfigsResult.h>
#include <aws/sagemaker/model/ListAppsResult.h>
#include <aws/sagemaker/model/ListArtifactsResult.h>
#include <aws/sagemaker/model/ListAssociationsResult.h>
#include <aws/sagemaker/model/ListAutoMLJobsResult.h>
#include <aws/sagemaker/model/ListCandidatesForAutoMLJobResult.h>
#include <aws/sagemaker/model/ListCodeRepositoriesResult.h>
#include <aws/sagemaker/model/ListCompilationJobsResult.h>
#include <aws/sagemaker/model/ListContextsResult.h>
#include <aws/sagemaker/model/ListDataQualityJobDefinitionsResult.h>
#include <aws/sagemaker/model/ListDeviceFleetsResult.h>
#include <aws/sagemaker/model/ListDevicesResult.h>
#include <aws/sagemaker/model/ListDomainsResult.h>
#include <aws/sagemaker/model/ListEdgeDeploymentPlansResult.h>
#include <aws/sagemaker/model/ListEdgePackagingJobsResult.h>
#include <aws/sagemaker/model/ListEndpointConfigsResult.h>
#include <aws/sagemaker/model/ListEndpointsResult.h>
#include <aws/sagemaker/model/ListExperimentsResult.h>
#include <aws/sagemaker/model/ListFeatureGroupsResult.h>
#include <aws/sagemaker/model/ListFlowDefinitionsResult.h>
#include <aws/sagemaker/model/ListHubContentVersionsResult.h>
#include <aws/sagemaker/model/ListHubContentsResult.h>
#include <aws/sagemaker/model/ListHubsResult.h>
#include <aws/sagemaker/model/ListHumanTaskUisResult.h>
#include <aws/sagemaker/model/ListHyperParameterTuningJobsResult.h>
#include <aws/sagemaker/model/ListImageVersionsResult.h>
#include <aws/sagemaker/model/ListImagesResult.h>
#include <aws/sagemaker/model/ListInferenceExperimentsResult.h>
#include <aws/sagemaker/model/ListInferenceRecommendationsJobStepsResult.h>
#include <aws/sagemaker/model/ListInferenceRecommendationsJobsResult.h>
#include <aws/sagemaker/model/ListLabelingJobsResult.h>
#include <aws/sagemaker/model/ListLabelingJobsForWorkteamResult.h>
#include <aws/sagemaker/model/ListLineageGroupsResult.h>
#include <aws/sagemaker/model/ListModelBiasJobDefinitionsResult.h>
#include <aws/sagemaker/model/ListModelCardExportJobsResult.h>
#include <aws/sagemaker/model/ListModelCardVersionsResult.h>
#include <aws/sagemaker/model/ListModelCardsResult.h>
#include <aws/sagemaker/model/ListModelExplainabilityJobDefinitionsResult.h>
#include <aws/sagemaker/model/ListModelMetadataResult.h>
#include <aws/sagemaker/model/ListModelPackageGroupsResult.h>
#include <aws/sagemaker/model/ListModelPackagesResult.h>
#include <aws/sagemaker/model/ListModelQualityJobDefinitionsResult.h>
#include <aws/sagemaker/model/ListModelsResult.h>
#include <aws/sagemaker/model/ListMonitoringAlertHistoryResult.h>
#include <aws/sagemaker/model/ListMonitoringAlertsResult.h>
#include <aws/sagemaker/model/ListMonitoringExecutionsResult.h>
#include <aws/sagemaker/model/ListMonitoringSchedulesResult.h>
#include <aws/sagemaker/model/ListNotebookInstanceLifecycleConfigsResult.h>
#include <aws/sagemaker/model/ListNotebookInstancesResult.h>
#include <aws/sagemaker/model/ListPipelineExecutionStepsResult.h>
#include <aws/sagemaker/model/ListPipelineExecutionsResult.h>
#include <aws/sagemaker/model/ListPipelineParametersForExecutionResult.h>
#include <aws/sagemaker/model/ListPipelinesResult.h>
#include <aws/sagemaker/model/ListProcessingJobsResult.h>
#include <aws/sagemaker/model/ListProjectsResult.h>
#include <aws/sagemaker/model/ListSpacesResult.h>
#include <aws/sagemaker/model/ListStageDevicesResult.h>
#include <aws/sagemaker/model/ListStudioLifecycleConfigsResult.h>
#include <aws/sagemaker/model/ListSubscribedWorkteamsResult.h>
#include <aws/sagemaker/model/ListTagsResult.h>
#include <aws/sagemaker/model/ListTrainingJobsResult.h>
#include <aws/sagemaker/model/ListTrainingJobsForHyperParameterTuningJobResult.h>
#include <aws/sagemaker/model/ListTransformJobsResult.h>
#include <aws/sagemaker/model/ListTrialComponentsResult.h>
#include <aws/sagemaker/model/ListTrialsResult.h>
#include <aws/sagemaker/model/ListUserProfilesResult.h>
#include <aws/sagemaker/model/ListWorkforcesResult.h>
#include <aws/sagemaker/model/ListWorkteamsResult.h>
#include <aws/sagemaker/model/PutModelPackageGroupPolicyResult.h>
#include <aws/sagemaker/model/QueryLineageResult.h>
#include <aws/sagemaker/model/RenderUiTemplateResult.h>
#include <aws/sagemaker/model/RetryPipelineExecutionResult.h>
#include <aws/sagemaker/model/SearchResult.h>
#include <aws/sagemaker/model/SendPipelineExecutionStepFailureResult.h>
#include <aws/sagemaker/model/SendPipelineExecutionStepSuccessResult.h>
#include <aws/sagemaker/model/StartInferenceExperimentResult.h>
#include <aws/sagemaker/model/StartPipelineExecutionResult.h>
#include <aws/sagemaker/model/StopInferenceExperimentResult.h>
#include <aws/sagemaker/model/StopPipelineExecutionResult.h>
#include <aws/sagemaker/model/UpdateActionResult.h>
#include <aws/sagemaker/model/UpdateAppImageConfigResult.h>
#include <aws/sagemaker/model/UpdateArtifactResult.h>
#include <aws/sagemaker/model/UpdateCodeRepositoryResult.h>
#include <aws/sagemaker/model/UpdateContextResult.h>
#include <aws/sagemaker/model/UpdateDomainResult.h>
#include <aws/sagemaker/model/UpdateEndpointResult.h>
#include <aws/sagemaker/model/UpdateEndpointWeightsAndCapacitiesResult.h>
#include <aws/sagemaker/model/UpdateExperimentResult.h>
#include <aws/sagemaker/model/UpdateFeatureGroupResult.h>
#include <aws/sagemaker/model/UpdateHubResult.h>
#include <aws/sagemaker/model/UpdateImageResult.h>
#include <aws/sagemaker/model/UpdateImageVersionResult.h>
#include <aws/sagemaker/model/UpdateInferenceExperimentResult.h>
#include <aws/sagemaker/model/UpdateModelCardResult.h>
#include <aws/sagemaker/model/UpdateModelPackageResult.h>
#include <aws/sagemaker/model/UpdateMonitoringAlertResult.h>
#include <aws/sagemaker/model/UpdateMonitoringScheduleResult.h>
#include <aws/sagemaker/model/UpdateNotebookInstanceResult.h>
#include <aws/sagemaker/model/UpdateNotebookInstanceLifecycleConfigResult.h>
#include <aws/sagemaker/model/UpdatePipelineResult.h>
#include <aws/sagemaker/model/UpdatePipelineExecutionResult.h>
#include <aws/sagemaker/model/UpdateProjectResult.h>
#include <aws/sagemaker/model/UpdateSpaceResult.h>
#include <aws/sagemaker/model/UpdateTrainingJobResult.h>
#include <aws/sagemaker/model/UpdateTrialResult.h>
#include <aws/sagemaker/model/UpdateTrialComponentResult.h>
#include <aws/sagemaker/model/UpdateUserProfileResult.h>
#include <aws/sagemaker/model/UpdateWorkforceResult.h>
#include <aws/sagemaker/model/UpdateWorkteamResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in SageMakerClient header */

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

  namespace SageMaker
  {
    using SageMakerClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using SageMakerEndpointProviderBase = Aws::SageMaker::Endpoint::SageMakerEndpointProviderBase;
    using SageMakerEndpointProvider = Aws::SageMaker::Endpoint::SageMakerEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in SageMakerClient header */
      class AddAssociationRequest;
      class AddTagsRequest;
      class AssociateTrialComponentRequest;
      class BatchDescribeModelPackageRequest;
      class CreateActionRequest;
      class CreateAlgorithmRequest;
      class CreateAppRequest;
      class CreateAppImageConfigRequest;
      class CreateArtifactRequest;
      class CreateAutoMLJobRequest;
      class CreateCodeRepositoryRequest;
      class CreateCompilationJobRequest;
      class CreateContextRequest;
      class CreateDataQualityJobDefinitionRequest;
      class CreateDeviceFleetRequest;
      class CreateDomainRequest;
      class CreateEdgeDeploymentPlanRequest;
      class CreateEdgeDeploymentStageRequest;
      class CreateEdgePackagingJobRequest;
      class CreateEndpointRequest;
      class CreateEndpointConfigRequest;
      class CreateExperimentRequest;
      class CreateFeatureGroupRequest;
      class CreateFlowDefinitionRequest;
      class CreateHubRequest;
      class CreateHumanTaskUiRequest;
      class CreateHyperParameterTuningJobRequest;
      class CreateImageRequest;
      class CreateImageVersionRequest;
      class CreateInferenceExperimentRequest;
      class CreateInferenceRecommendationsJobRequest;
      class CreateLabelingJobRequest;
      class CreateModelRequest;
      class CreateModelBiasJobDefinitionRequest;
      class CreateModelCardRequest;
      class CreateModelCardExportJobRequest;
      class CreateModelExplainabilityJobDefinitionRequest;
      class CreateModelPackageRequest;
      class CreateModelPackageGroupRequest;
      class CreateModelQualityJobDefinitionRequest;
      class CreateMonitoringScheduleRequest;
      class CreateNotebookInstanceRequest;
      class CreateNotebookInstanceLifecycleConfigRequest;
      class CreatePipelineRequest;
      class CreatePresignedDomainUrlRequest;
      class CreatePresignedNotebookInstanceUrlRequest;
      class CreateProcessingJobRequest;
      class CreateProjectRequest;
      class CreateSpaceRequest;
      class CreateStudioLifecycleConfigRequest;
      class CreateTrainingJobRequest;
      class CreateTransformJobRequest;
      class CreateTrialRequest;
      class CreateTrialComponentRequest;
      class CreateUserProfileRequest;
      class CreateWorkforceRequest;
      class CreateWorkteamRequest;
      class DeleteActionRequest;
      class DeleteAlgorithmRequest;
      class DeleteAppRequest;
      class DeleteAppImageConfigRequest;
      class DeleteArtifactRequest;
      class DeleteAssociationRequest;
      class DeleteCodeRepositoryRequest;
      class DeleteContextRequest;
      class DeleteDataQualityJobDefinitionRequest;
      class DeleteDeviceFleetRequest;
      class DeleteDomainRequest;
      class DeleteEdgeDeploymentPlanRequest;
      class DeleteEdgeDeploymentStageRequest;
      class DeleteEndpointRequest;
      class DeleteEndpointConfigRequest;
      class DeleteExperimentRequest;
      class DeleteFeatureGroupRequest;
      class DeleteFlowDefinitionRequest;
      class DeleteHubRequest;
      class DeleteHubContentRequest;
      class DeleteHumanTaskUiRequest;
      class DeleteImageRequest;
      class DeleteImageVersionRequest;
      class DeleteInferenceExperimentRequest;
      class DeleteModelRequest;
      class DeleteModelBiasJobDefinitionRequest;
      class DeleteModelCardRequest;
      class DeleteModelExplainabilityJobDefinitionRequest;
      class DeleteModelPackageRequest;
      class DeleteModelPackageGroupRequest;
      class DeleteModelPackageGroupPolicyRequest;
      class DeleteModelQualityJobDefinitionRequest;
      class DeleteMonitoringScheduleRequest;
      class DeleteNotebookInstanceRequest;
      class DeleteNotebookInstanceLifecycleConfigRequest;
      class DeletePipelineRequest;
      class DeleteProjectRequest;
      class DeleteSpaceRequest;
      class DeleteStudioLifecycleConfigRequest;
      class DeleteTagsRequest;
      class DeleteTrialRequest;
      class DeleteTrialComponentRequest;
      class DeleteUserProfileRequest;
      class DeleteWorkforceRequest;
      class DeleteWorkteamRequest;
      class DeregisterDevicesRequest;
      class DescribeActionRequest;
      class DescribeAlgorithmRequest;
      class DescribeAppRequest;
      class DescribeAppImageConfigRequest;
      class DescribeArtifactRequest;
      class DescribeAutoMLJobRequest;
      class DescribeCodeRepositoryRequest;
      class DescribeCompilationJobRequest;
      class DescribeContextRequest;
      class DescribeDataQualityJobDefinitionRequest;
      class DescribeDeviceRequest;
      class DescribeDeviceFleetRequest;
      class DescribeDomainRequest;
      class DescribeEdgeDeploymentPlanRequest;
      class DescribeEdgePackagingJobRequest;
      class DescribeEndpointRequest;
      class DescribeEndpointConfigRequest;
      class DescribeExperimentRequest;
      class DescribeFeatureGroupRequest;
      class DescribeFeatureMetadataRequest;
      class DescribeFlowDefinitionRequest;
      class DescribeHubRequest;
      class DescribeHubContentRequest;
      class DescribeHumanTaskUiRequest;
      class DescribeHyperParameterTuningJobRequest;
      class DescribeImageRequest;
      class DescribeImageVersionRequest;
      class DescribeInferenceExperimentRequest;
      class DescribeInferenceRecommendationsJobRequest;
      class DescribeLabelingJobRequest;
      class DescribeLineageGroupRequest;
      class DescribeModelRequest;
      class DescribeModelBiasJobDefinitionRequest;
      class DescribeModelCardRequest;
      class DescribeModelCardExportJobRequest;
      class DescribeModelExplainabilityJobDefinitionRequest;
      class DescribeModelPackageRequest;
      class DescribeModelPackageGroupRequest;
      class DescribeModelQualityJobDefinitionRequest;
      class DescribeMonitoringScheduleRequest;
      class DescribeNotebookInstanceRequest;
      class DescribeNotebookInstanceLifecycleConfigRequest;
      class DescribePipelineRequest;
      class DescribePipelineDefinitionForExecutionRequest;
      class DescribePipelineExecutionRequest;
      class DescribeProcessingJobRequest;
      class DescribeProjectRequest;
      class DescribeSpaceRequest;
      class DescribeStudioLifecycleConfigRequest;
      class DescribeSubscribedWorkteamRequest;
      class DescribeTrainingJobRequest;
      class DescribeTransformJobRequest;
      class DescribeTrialRequest;
      class DescribeTrialComponentRequest;
      class DescribeUserProfileRequest;
      class DescribeWorkforceRequest;
      class DescribeWorkteamRequest;
      class DisableSagemakerServicecatalogPortfolioRequest;
      class DisassociateTrialComponentRequest;
      class EnableSagemakerServicecatalogPortfolioRequest;
      class GetDeviceFleetReportRequest;
      class GetLineageGroupPolicyRequest;
      class GetModelPackageGroupPolicyRequest;
      class GetSagemakerServicecatalogPortfolioStatusRequest;
      class GetSearchSuggestionsRequest;
      class ImportHubContentRequest;
      class ListActionsRequest;
      class ListAlgorithmsRequest;
      class ListAliasesRequest;
      class ListAppImageConfigsRequest;
      class ListAppsRequest;
      class ListArtifactsRequest;
      class ListAssociationsRequest;
      class ListAutoMLJobsRequest;
      class ListCandidatesForAutoMLJobRequest;
      class ListCodeRepositoriesRequest;
      class ListCompilationJobsRequest;
      class ListContextsRequest;
      class ListDataQualityJobDefinitionsRequest;
      class ListDeviceFleetsRequest;
      class ListDevicesRequest;
      class ListDomainsRequest;
      class ListEdgeDeploymentPlansRequest;
      class ListEdgePackagingJobsRequest;
      class ListEndpointConfigsRequest;
      class ListEndpointsRequest;
      class ListExperimentsRequest;
      class ListFeatureGroupsRequest;
      class ListFlowDefinitionsRequest;
      class ListHubContentVersionsRequest;
      class ListHubContentsRequest;
      class ListHubsRequest;
      class ListHumanTaskUisRequest;
      class ListHyperParameterTuningJobsRequest;
      class ListImageVersionsRequest;
      class ListImagesRequest;
      class ListInferenceExperimentsRequest;
      class ListInferenceRecommendationsJobStepsRequest;
      class ListInferenceRecommendationsJobsRequest;
      class ListLabelingJobsRequest;
      class ListLabelingJobsForWorkteamRequest;
      class ListLineageGroupsRequest;
      class ListModelBiasJobDefinitionsRequest;
      class ListModelCardExportJobsRequest;
      class ListModelCardVersionsRequest;
      class ListModelCardsRequest;
      class ListModelExplainabilityJobDefinitionsRequest;
      class ListModelMetadataRequest;
      class ListModelPackageGroupsRequest;
      class ListModelPackagesRequest;
      class ListModelQualityJobDefinitionsRequest;
      class ListModelsRequest;
      class ListMonitoringAlertHistoryRequest;
      class ListMonitoringAlertsRequest;
      class ListMonitoringExecutionsRequest;
      class ListMonitoringSchedulesRequest;
      class ListNotebookInstanceLifecycleConfigsRequest;
      class ListNotebookInstancesRequest;
      class ListPipelineExecutionStepsRequest;
      class ListPipelineExecutionsRequest;
      class ListPipelineParametersForExecutionRequest;
      class ListPipelinesRequest;
      class ListProcessingJobsRequest;
      class ListProjectsRequest;
      class ListSpacesRequest;
      class ListStageDevicesRequest;
      class ListStudioLifecycleConfigsRequest;
      class ListSubscribedWorkteamsRequest;
      class ListTagsRequest;
      class ListTrainingJobsRequest;
      class ListTrainingJobsForHyperParameterTuningJobRequest;
      class ListTransformJobsRequest;
      class ListTrialComponentsRequest;
      class ListTrialsRequest;
      class ListUserProfilesRequest;
      class ListWorkforcesRequest;
      class ListWorkteamsRequest;
      class PutModelPackageGroupPolicyRequest;
      class QueryLineageRequest;
      class RegisterDevicesRequest;
      class RenderUiTemplateRequest;
      class RetryPipelineExecutionRequest;
      class SearchRequest;
      class SendPipelineExecutionStepFailureRequest;
      class SendPipelineExecutionStepSuccessRequest;
      class StartEdgeDeploymentStageRequest;
      class StartInferenceExperimentRequest;
      class StartMonitoringScheduleRequest;
      class StartNotebookInstanceRequest;
      class StartPipelineExecutionRequest;
      class StopAutoMLJobRequest;
      class StopCompilationJobRequest;
      class StopEdgeDeploymentStageRequest;
      class StopEdgePackagingJobRequest;
      class StopHyperParameterTuningJobRequest;
      class StopInferenceExperimentRequest;
      class StopInferenceRecommendationsJobRequest;
      class StopLabelingJobRequest;
      class StopMonitoringScheduleRequest;
      class StopNotebookInstanceRequest;
      class StopPipelineExecutionRequest;
      class StopProcessingJobRequest;
      class StopTrainingJobRequest;
      class StopTransformJobRequest;
      class UpdateActionRequest;
      class UpdateAppImageConfigRequest;
      class UpdateArtifactRequest;
      class UpdateCodeRepositoryRequest;
      class UpdateContextRequest;
      class UpdateDeviceFleetRequest;
      class UpdateDevicesRequest;
      class UpdateDomainRequest;
      class UpdateEndpointRequest;
      class UpdateEndpointWeightsAndCapacitiesRequest;
      class UpdateExperimentRequest;
      class UpdateFeatureGroupRequest;
      class UpdateFeatureMetadataRequest;
      class UpdateHubRequest;
      class UpdateImageRequest;
      class UpdateImageVersionRequest;
      class UpdateInferenceExperimentRequest;
      class UpdateModelCardRequest;
      class UpdateModelPackageRequest;
      class UpdateMonitoringAlertRequest;
      class UpdateMonitoringScheduleRequest;
      class UpdateNotebookInstanceRequest;
      class UpdateNotebookInstanceLifecycleConfigRequest;
      class UpdatePipelineRequest;
      class UpdatePipelineExecutionRequest;
      class UpdateProjectRequest;
      class UpdateSpaceRequest;
      class UpdateTrainingJobRequest;
      class UpdateTrialRequest;
      class UpdateTrialComponentRequest;
      class UpdateUserProfileRequest;
      class UpdateWorkforceRequest;
      class UpdateWorkteamRequest;
      /* End of service model forward declarations required in SageMakerClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AddAssociationResult, SageMakerError> AddAssociationOutcome;
      typedef Aws::Utils::Outcome<AddTagsResult, SageMakerError> AddTagsOutcome;
      typedef Aws::Utils::Outcome<AssociateTrialComponentResult, SageMakerError> AssociateTrialComponentOutcome;
      typedef Aws::Utils::Outcome<BatchDescribeModelPackageResult, SageMakerError> BatchDescribeModelPackageOutcome;
      typedef Aws::Utils::Outcome<CreateActionResult, SageMakerError> CreateActionOutcome;
      typedef Aws::Utils::Outcome<CreateAlgorithmResult, SageMakerError> CreateAlgorithmOutcome;
      typedef Aws::Utils::Outcome<CreateAppResult, SageMakerError> CreateAppOutcome;
      typedef Aws::Utils::Outcome<CreateAppImageConfigResult, SageMakerError> CreateAppImageConfigOutcome;
      typedef Aws::Utils::Outcome<CreateArtifactResult, SageMakerError> CreateArtifactOutcome;
      typedef Aws::Utils::Outcome<CreateAutoMLJobResult, SageMakerError> CreateAutoMLJobOutcome;
      typedef Aws::Utils::Outcome<CreateCodeRepositoryResult, SageMakerError> CreateCodeRepositoryOutcome;
      typedef Aws::Utils::Outcome<CreateCompilationJobResult, SageMakerError> CreateCompilationJobOutcome;
      typedef Aws::Utils::Outcome<CreateContextResult, SageMakerError> CreateContextOutcome;
      typedef Aws::Utils::Outcome<CreateDataQualityJobDefinitionResult, SageMakerError> CreateDataQualityJobDefinitionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> CreateDeviceFleetOutcome;
      typedef Aws::Utils::Outcome<CreateDomainResult, SageMakerError> CreateDomainOutcome;
      typedef Aws::Utils::Outcome<CreateEdgeDeploymentPlanResult, SageMakerError> CreateEdgeDeploymentPlanOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> CreateEdgeDeploymentStageOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> CreateEdgePackagingJobOutcome;
      typedef Aws::Utils::Outcome<CreateEndpointResult, SageMakerError> CreateEndpointOutcome;
      typedef Aws::Utils::Outcome<CreateEndpointConfigResult, SageMakerError> CreateEndpointConfigOutcome;
      typedef Aws::Utils::Outcome<CreateExperimentResult, SageMakerError> CreateExperimentOutcome;
      typedef Aws::Utils::Outcome<CreateFeatureGroupResult, SageMakerError> CreateFeatureGroupOutcome;
      typedef Aws::Utils::Outcome<CreateFlowDefinitionResult, SageMakerError> CreateFlowDefinitionOutcome;
      typedef Aws::Utils::Outcome<CreateHubResult, SageMakerError> CreateHubOutcome;
      typedef Aws::Utils::Outcome<CreateHumanTaskUiResult, SageMakerError> CreateHumanTaskUiOutcome;
      typedef Aws::Utils::Outcome<CreateHyperParameterTuningJobResult, SageMakerError> CreateHyperParameterTuningJobOutcome;
      typedef Aws::Utils::Outcome<CreateImageResult, SageMakerError> CreateImageOutcome;
      typedef Aws::Utils::Outcome<CreateImageVersionResult, SageMakerError> CreateImageVersionOutcome;
      typedef Aws::Utils::Outcome<CreateInferenceExperimentResult, SageMakerError> CreateInferenceExperimentOutcome;
      typedef Aws::Utils::Outcome<CreateInferenceRecommendationsJobResult, SageMakerError> CreateInferenceRecommendationsJobOutcome;
      typedef Aws::Utils::Outcome<CreateLabelingJobResult, SageMakerError> CreateLabelingJobOutcome;
      typedef Aws::Utils::Outcome<CreateModelResult, SageMakerError> CreateModelOutcome;
      typedef Aws::Utils::Outcome<CreateModelBiasJobDefinitionResult, SageMakerError> CreateModelBiasJobDefinitionOutcome;
      typedef Aws::Utils::Outcome<CreateModelCardResult, SageMakerError> CreateModelCardOutcome;
      typedef Aws::Utils::Outcome<CreateModelCardExportJobResult, SageMakerError> CreateModelCardExportJobOutcome;
      typedef Aws::Utils::Outcome<CreateModelExplainabilityJobDefinitionResult, SageMakerError> CreateModelExplainabilityJobDefinitionOutcome;
      typedef Aws::Utils::Outcome<CreateModelPackageResult, SageMakerError> CreateModelPackageOutcome;
      typedef Aws::Utils::Outcome<CreateModelPackageGroupResult, SageMakerError> CreateModelPackageGroupOutcome;
      typedef Aws::Utils::Outcome<CreateModelQualityJobDefinitionResult, SageMakerError> CreateModelQualityJobDefinitionOutcome;
      typedef Aws::Utils::Outcome<CreateMonitoringScheduleResult, SageMakerError> CreateMonitoringScheduleOutcome;
      typedef Aws::Utils::Outcome<CreateNotebookInstanceResult, SageMakerError> CreateNotebookInstanceOutcome;
      typedef Aws::Utils::Outcome<CreateNotebookInstanceLifecycleConfigResult, SageMakerError> CreateNotebookInstanceLifecycleConfigOutcome;
      typedef Aws::Utils::Outcome<CreatePipelineResult, SageMakerError> CreatePipelineOutcome;
      typedef Aws::Utils::Outcome<CreatePresignedDomainUrlResult, SageMakerError> CreatePresignedDomainUrlOutcome;
      typedef Aws::Utils::Outcome<CreatePresignedNotebookInstanceUrlResult, SageMakerError> CreatePresignedNotebookInstanceUrlOutcome;
      typedef Aws::Utils::Outcome<CreateProcessingJobResult, SageMakerError> CreateProcessingJobOutcome;
      typedef Aws::Utils::Outcome<CreateProjectResult, SageMakerError> CreateProjectOutcome;
      typedef Aws::Utils::Outcome<CreateSpaceResult, SageMakerError> CreateSpaceOutcome;
      typedef Aws::Utils::Outcome<CreateStudioLifecycleConfigResult, SageMakerError> CreateStudioLifecycleConfigOutcome;
      typedef Aws::Utils::Outcome<CreateTrainingJobResult, SageMakerError> CreateTrainingJobOutcome;
      typedef Aws::Utils::Outcome<CreateTransformJobResult, SageMakerError> CreateTransformJobOutcome;
      typedef Aws::Utils::Outcome<CreateTrialResult, SageMakerError> CreateTrialOutcome;
      typedef Aws::Utils::Outcome<CreateTrialComponentResult, SageMakerError> CreateTrialComponentOutcome;
      typedef Aws::Utils::Outcome<CreateUserProfileResult, SageMakerError> CreateUserProfileOutcome;
      typedef Aws::Utils::Outcome<CreateWorkforceResult, SageMakerError> CreateWorkforceOutcome;
      typedef Aws::Utils::Outcome<CreateWorkteamResult, SageMakerError> CreateWorkteamOutcome;
      typedef Aws::Utils::Outcome<DeleteActionResult, SageMakerError> DeleteActionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> DeleteAlgorithmOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> DeleteAppOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> DeleteAppImageConfigOutcome;
      typedef Aws::Utils::Outcome<DeleteArtifactResult, SageMakerError> DeleteArtifactOutcome;
      typedef Aws::Utils::Outcome<DeleteAssociationResult, SageMakerError> DeleteAssociationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> DeleteCodeRepositoryOutcome;
      typedef Aws::Utils::Outcome<DeleteContextResult, SageMakerError> DeleteContextOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> DeleteDataQualityJobDefinitionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> DeleteDeviceFleetOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> DeleteDomainOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> DeleteEdgeDeploymentPlanOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> DeleteEdgeDeploymentStageOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> DeleteEndpointOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> DeleteEndpointConfigOutcome;
      typedef Aws::Utils::Outcome<DeleteExperimentResult, SageMakerError> DeleteExperimentOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> DeleteFeatureGroupOutcome;
      typedef Aws::Utils::Outcome<DeleteFlowDefinitionResult, SageMakerError> DeleteFlowDefinitionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> DeleteHubOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> DeleteHubContentOutcome;
      typedef Aws::Utils::Outcome<DeleteHumanTaskUiResult, SageMakerError> DeleteHumanTaskUiOutcome;
      typedef Aws::Utils::Outcome<DeleteImageResult, SageMakerError> DeleteImageOutcome;
      typedef Aws::Utils::Outcome<DeleteImageVersionResult, SageMakerError> DeleteImageVersionOutcome;
      typedef Aws::Utils::Outcome<DeleteInferenceExperimentResult, SageMakerError> DeleteInferenceExperimentOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> DeleteModelOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> DeleteModelBiasJobDefinitionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> DeleteModelCardOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> DeleteModelExplainabilityJobDefinitionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> DeleteModelPackageOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> DeleteModelPackageGroupOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> DeleteModelPackageGroupPolicyOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> DeleteModelQualityJobDefinitionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> DeleteMonitoringScheduleOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> DeleteNotebookInstanceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> DeleteNotebookInstanceLifecycleConfigOutcome;
      typedef Aws::Utils::Outcome<DeletePipelineResult, SageMakerError> DeletePipelineOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> DeleteProjectOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> DeleteSpaceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> DeleteStudioLifecycleConfigOutcome;
      typedef Aws::Utils::Outcome<DeleteTagsResult, SageMakerError> DeleteTagsOutcome;
      typedef Aws::Utils::Outcome<DeleteTrialResult, SageMakerError> DeleteTrialOutcome;
      typedef Aws::Utils::Outcome<DeleteTrialComponentResult, SageMakerError> DeleteTrialComponentOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> DeleteUserProfileOutcome;
      typedef Aws::Utils::Outcome<DeleteWorkforceResult, SageMakerError> DeleteWorkforceOutcome;
      typedef Aws::Utils::Outcome<DeleteWorkteamResult, SageMakerError> DeleteWorkteamOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> DeregisterDevicesOutcome;
      typedef Aws::Utils::Outcome<DescribeActionResult, SageMakerError> DescribeActionOutcome;
      typedef Aws::Utils::Outcome<DescribeAlgorithmResult, SageMakerError> DescribeAlgorithmOutcome;
      typedef Aws::Utils::Outcome<DescribeAppResult, SageMakerError> DescribeAppOutcome;
      typedef Aws::Utils::Outcome<DescribeAppImageConfigResult, SageMakerError> DescribeAppImageConfigOutcome;
      typedef Aws::Utils::Outcome<DescribeArtifactResult, SageMakerError> DescribeArtifactOutcome;
      typedef Aws::Utils::Outcome<DescribeAutoMLJobResult, SageMakerError> DescribeAutoMLJobOutcome;
      typedef Aws::Utils::Outcome<DescribeCodeRepositoryResult, SageMakerError> DescribeCodeRepositoryOutcome;
      typedef Aws::Utils::Outcome<DescribeCompilationJobResult, SageMakerError> DescribeCompilationJobOutcome;
      typedef Aws::Utils::Outcome<DescribeContextResult, SageMakerError> DescribeContextOutcome;
      typedef Aws::Utils::Outcome<DescribeDataQualityJobDefinitionResult, SageMakerError> DescribeDataQualityJobDefinitionOutcome;
      typedef Aws::Utils::Outcome<DescribeDeviceResult, SageMakerError> DescribeDeviceOutcome;
      typedef Aws::Utils::Outcome<DescribeDeviceFleetResult, SageMakerError> DescribeDeviceFleetOutcome;
      typedef Aws::Utils::Outcome<DescribeDomainResult, SageMakerError> DescribeDomainOutcome;
      typedef Aws::Utils::Outcome<DescribeEdgeDeploymentPlanResult, SageMakerError> DescribeEdgeDeploymentPlanOutcome;
      typedef Aws::Utils::Outcome<DescribeEdgePackagingJobResult, SageMakerError> DescribeEdgePackagingJobOutcome;
      typedef Aws::Utils::Outcome<DescribeEndpointResult, SageMakerError> DescribeEndpointOutcome;
      typedef Aws::Utils::Outcome<DescribeEndpointConfigResult, SageMakerError> DescribeEndpointConfigOutcome;
      typedef Aws::Utils::Outcome<DescribeExperimentResult, SageMakerError> DescribeExperimentOutcome;
      typedef Aws::Utils::Outcome<DescribeFeatureGroupResult, SageMakerError> DescribeFeatureGroupOutcome;
      typedef Aws::Utils::Outcome<DescribeFeatureMetadataResult, SageMakerError> DescribeFeatureMetadataOutcome;
      typedef Aws::Utils::Outcome<DescribeFlowDefinitionResult, SageMakerError> DescribeFlowDefinitionOutcome;
      typedef Aws::Utils::Outcome<DescribeHubResult, SageMakerError> DescribeHubOutcome;
      typedef Aws::Utils::Outcome<DescribeHubContentResult, SageMakerError> DescribeHubContentOutcome;
      typedef Aws::Utils::Outcome<DescribeHumanTaskUiResult, SageMakerError> DescribeHumanTaskUiOutcome;
      typedef Aws::Utils::Outcome<DescribeHyperParameterTuningJobResult, SageMakerError> DescribeHyperParameterTuningJobOutcome;
      typedef Aws::Utils::Outcome<DescribeImageResult, SageMakerError> DescribeImageOutcome;
      typedef Aws::Utils::Outcome<DescribeImageVersionResult, SageMakerError> DescribeImageVersionOutcome;
      typedef Aws::Utils::Outcome<DescribeInferenceExperimentResult, SageMakerError> DescribeInferenceExperimentOutcome;
      typedef Aws::Utils::Outcome<DescribeInferenceRecommendationsJobResult, SageMakerError> DescribeInferenceRecommendationsJobOutcome;
      typedef Aws::Utils::Outcome<DescribeLabelingJobResult, SageMakerError> DescribeLabelingJobOutcome;
      typedef Aws::Utils::Outcome<DescribeLineageGroupResult, SageMakerError> DescribeLineageGroupOutcome;
      typedef Aws::Utils::Outcome<DescribeModelResult, SageMakerError> DescribeModelOutcome;
      typedef Aws::Utils::Outcome<DescribeModelBiasJobDefinitionResult, SageMakerError> DescribeModelBiasJobDefinitionOutcome;
      typedef Aws::Utils::Outcome<DescribeModelCardResult, SageMakerError> DescribeModelCardOutcome;
      typedef Aws::Utils::Outcome<DescribeModelCardExportJobResult, SageMakerError> DescribeModelCardExportJobOutcome;
      typedef Aws::Utils::Outcome<DescribeModelExplainabilityJobDefinitionResult, SageMakerError> DescribeModelExplainabilityJobDefinitionOutcome;
      typedef Aws::Utils::Outcome<DescribeModelPackageResult, SageMakerError> DescribeModelPackageOutcome;
      typedef Aws::Utils::Outcome<DescribeModelPackageGroupResult, SageMakerError> DescribeModelPackageGroupOutcome;
      typedef Aws::Utils::Outcome<DescribeModelQualityJobDefinitionResult, SageMakerError> DescribeModelQualityJobDefinitionOutcome;
      typedef Aws::Utils::Outcome<DescribeMonitoringScheduleResult, SageMakerError> DescribeMonitoringScheduleOutcome;
      typedef Aws::Utils::Outcome<DescribeNotebookInstanceResult, SageMakerError> DescribeNotebookInstanceOutcome;
      typedef Aws::Utils::Outcome<DescribeNotebookInstanceLifecycleConfigResult, SageMakerError> DescribeNotebookInstanceLifecycleConfigOutcome;
      typedef Aws::Utils::Outcome<DescribePipelineResult, SageMakerError> DescribePipelineOutcome;
      typedef Aws::Utils::Outcome<DescribePipelineDefinitionForExecutionResult, SageMakerError> DescribePipelineDefinitionForExecutionOutcome;
      typedef Aws::Utils::Outcome<DescribePipelineExecutionResult, SageMakerError> DescribePipelineExecutionOutcome;
      typedef Aws::Utils::Outcome<DescribeProcessingJobResult, SageMakerError> DescribeProcessingJobOutcome;
      typedef Aws::Utils::Outcome<DescribeProjectResult, SageMakerError> DescribeProjectOutcome;
      typedef Aws::Utils::Outcome<DescribeSpaceResult, SageMakerError> DescribeSpaceOutcome;
      typedef Aws::Utils::Outcome<DescribeStudioLifecycleConfigResult, SageMakerError> DescribeStudioLifecycleConfigOutcome;
      typedef Aws::Utils::Outcome<DescribeSubscribedWorkteamResult, SageMakerError> DescribeSubscribedWorkteamOutcome;
      typedef Aws::Utils::Outcome<DescribeTrainingJobResult, SageMakerError> DescribeTrainingJobOutcome;
      typedef Aws::Utils::Outcome<DescribeTransformJobResult, SageMakerError> DescribeTransformJobOutcome;
      typedef Aws::Utils::Outcome<DescribeTrialResult, SageMakerError> DescribeTrialOutcome;
      typedef Aws::Utils::Outcome<DescribeTrialComponentResult, SageMakerError> DescribeTrialComponentOutcome;
      typedef Aws::Utils::Outcome<DescribeUserProfileResult, SageMakerError> DescribeUserProfileOutcome;
      typedef Aws::Utils::Outcome<DescribeWorkforceResult, SageMakerError> DescribeWorkforceOutcome;
      typedef Aws::Utils::Outcome<DescribeWorkteamResult, SageMakerError> DescribeWorkteamOutcome;
      typedef Aws::Utils::Outcome<DisableSagemakerServicecatalogPortfolioResult, SageMakerError> DisableSagemakerServicecatalogPortfolioOutcome;
      typedef Aws::Utils::Outcome<DisassociateTrialComponentResult, SageMakerError> DisassociateTrialComponentOutcome;
      typedef Aws::Utils::Outcome<EnableSagemakerServicecatalogPortfolioResult, SageMakerError> EnableSagemakerServicecatalogPortfolioOutcome;
      typedef Aws::Utils::Outcome<GetDeviceFleetReportResult, SageMakerError> GetDeviceFleetReportOutcome;
      typedef Aws::Utils::Outcome<GetLineageGroupPolicyResult, SageMakerError> GetLineageGroupPolicyOutcome;
      typedef Aws::Utils::Outcome<GetModelPackageGroupPolicyResult, SageMakerError> GetModelPackageGroupPolicyOutcome;
      typedef Aws::Utils::Outcome<GetSagemakerServicecatalogPortfolioStatusResult, SageMakerError> GetSagemakerServicecatalogPortfolioStatusOutcome;
      typedef Aws::Utils::Outcome<GetSearchSuggestionsResult, SageMakerError> GetSearchSuggestionsOutcome;
      typedef Aws::Utils::Outcome<ImportHubContentResult, SageMakerError> ImportHubContentOutcome;
      typedef Aws::Utils::Outcome<ListActionsResult, SageMakerError> ListActionsOutcome;
      typedef Aws::Utils::Outcome<ListAlgorithmsResult, SageMakerError> ListAlgorithmsOutcome;
      typedef Aws::Utils::Outcome<ListAliasesResult, SageMakerError> ListAliasesOutcome;
      typedef Aws::Utils::Outcome<ListAppImageConfigsResult, SageMakerError> ListAppImageConfigsOutcome;
      typedef Aws::Utils::Outcome<ListAppsResult, SageMakerError> ListAppsOutcome;
      typedef Aws::Utils::Outcome<ListArtifactsResult, SageMakerError> ListArtifactsOutcome;
      typedef Aws::Utils::Outcome<ListAssociationsResult, SageMakerError> ListAssociationsOutcome;
      typedef Aws::Utils::Outcome<ListAutoMLJobsResult, SageMakerError> ListAutoMLJobsOutcome;
      typedef Aws::Utils::Outcome<ListCandidatesForAutoMLJobResult, SageMakerError> ListCandidatesForAutoMLJobOutcome;
      typedef Aws::Utils::Outcome<ListCodeRepositoriesResult, SageMakerError> ListCodeRepositoriesOutcome;
      typedef Aws::Utils::Outcome<ListCompilationJobsResult, SageMakerError> ListCompilationJobsOutcome;
      typedef Aws::Utils::Outcome<ListContextsResult, SageMakerError> ListContextsOutcome;
      typedef Aws::Utils::Outcome<ListDataQualityJobDefinitionsResult, SageMakerError> ListDataQualityJobDefinitionsOutcome;
      typedef Aws::Utils::Outcome<ListDeviceFleetsResult, SageMakerError> ListDeviceFleetsOutcome;
      typedef Aws::Utils::Outcome<ListDevicesResult, SageMakerError> ListDevicesOutcome;
      typedef Aws::Utils::Outcome<ListDomainsResult, SageMakerError> ListDomainsOutcome;
      typedef Aws::Utils::Outcome<ListEdgeDeploymentPlansResult, SageMakerError> ListEdgeDeploymentPlansOutcome;
      typedef Aws::Utils::Outcome<ListEdgePackagingJobsResult, SageMakerError> ListEdgePackagingJobsOutcome;
      typedef Aws::Utils::Outcome<ListEndpointConfigsResult, SageMakerError> ListEndpointConfigsOutcome;
      typedef Aws::Utils::Outcome<ListEndpointsResult, SageMakerError> ListEndpointsOutcome;
      typedef Aws::Utils::Outcome<ListExperimentsResult, SageMakerError> ListExperimentsOutcome;
      typedef Aws::Utils::Outcome<ListFeatureGroupsResult, SageMakerError> ListFeatureGroupsOutcome;
      typedef Aws::Utils::Outcome<ListFlowDefinitionsResult, SageMakerError> ListFlowDefinitionsOutcome;
      typedef Aws::Utils::Outcome<ListHubContentVersionsResult, SageMakerError> ListHubContentVersionsOutcome;
      typedef Aws::Utils::Outcome<ListHubContentsResult, SageMakerError> ListHubContentsOutcome;
      typedef Aws::Utils::Outcome<ListHubsResult, SageMakerError> ListHubsOutcome;
      typedef Aws::Utils::Outcome<ListHumanTaskUisResult, SageMakerError> ListHumanTaskUisOutcome;
      typedef Aws::Utils::Outcome<ListHyperParameterTuningJobsResult, SageMakerError> ListHyperParameterTuningJobsOutcome;
      typedef Aws::Utils::Outcome<ListImageVersionsResult, SageMakerError> ListImageVersionsOutcome;
      typedef Aws::Utils::Outcome<ListImagesResult, SageMakerError> ListImagesOutcome;
      typedef Aws::Utils::Outcome<ListInferenceExperimentsResult, SageMakerError> ListInferenceExperimentsOutcome;
      typedef Aws::Utils::Outcome<ListInferenceRecommendationsJobStepsResult, SageMakerError> ListInferenceRecommendationsJobStepsOutcome;
      typedef Aws::Utils::Outcome<ListInferenceRecommendationsJobsResult, SageMakerError> ListInferenceRecommendationsJobsOutcome;
      typedef Aws::Utils::Outcome<ListLabelingJobsResult, SageMakerError> ListLabelingJobsOutcome;
      typedef Aws::Utils::Outcome<ListLabelingJobsForWorkteamResult, SageMakerError> ListLabelingJobsForWorkteamOutcome;
      typedef Aws::Utils::Outcome<ListLineageGroupsResult, SageMakerError> ListLineageGroupsOutcome;
      typedef Aws::Utils::Outcome<ListModelBiasJobDefinitionsResult, SageMakerError> ListModelBiasJobDefinitionsOutcome;
      typedef Aws::Utils::Outcome<ListModelCardExportJobsResult, SageMakerError> ListModelCardExportJobsOutcome;
      typedef Aws::Utils::Outcome<ListModelCardVersionsResult, SageMakerError> ListModelCardVersionsOutcome;
      typedef Aws::Utils::Outcome<ListModelCardsResult, SageMakerError> ListModelCardsOutcome;
      typedef Aws::Utils::Outcome<ListModelExplainabilityJobDefinitionsResult, SageMakerError> ListModelExplainabilityJobDefinitionsOutcome;
      typedef Aws::Utils::Outcome<ListModelMetadataResult, SageMakerError> ListModelMetadataOutcome;
      typedef Aws::Utils::Outcome<ListModelPackageGroupsResult, SageMakerError> ListModelPackageGroupsOutcome;
      typedef Aws::Utils::Outcome<ListModelPackagesResult, SageMakerError> ListModelPackagesOutcome;
      typedef Aws::Utils::Outcome<ListModelQualityJobDefinitionsResult, SageMakerError> ListModelQualityJobDefinitionsOutcome;
      typedef Aws::Utils::Outcome<ListModelsResult, SageMakerError> ListModelsOutcome;
      typedef Aws::Utils::Outcome<ListMonitoringAlertHistoryResult, SageMakerError> ListMonitoringAlertHistoryOutcome;
      typedef Aws::Utils::Outcome<ListMonitoringAlertsResult, SageMakerError> ListMonitoringAlertsOutcome;
      typedef Aws::Utils::Outcome<ListMonitoringExecutionsResult, SageMakerError> ListMonitoringExecutionsOutcome;
      typedef Aws::Utils::Outcome<ListMonitoringSchedulesResult, SageMakerError> ListMonitoringSchedulesOutcome;
      typedef Aws::Utils::Outcome<ListNotebookInstanceLifecycleConfigsResult, SageMakerError> ListNotebookInstanceLifecycleConfigsOutcome;
      typedef Aws::Utils::Outcome<ListNotebookInstancesResult, SageMakerError> ListNotebookInstancesOutcome;
      typedef Aws::Utils::Outcome<ListPipelineExecutionStepsResult, SageMakerError> ListPipelineExecutionStepsOutcome;
      typedef Aws::Utils::Outcome<ListPipelineExecutionsResult, SageMakerError> ListPipelineExecutionsOutcome;
      typedef Aws::Utils::Outcome<ListPipelineParametersForExecutionResult, SageMakerError> ListPipelineParametersForExecutionOutcome;
      typedef Aws::Utils::Outcome<ListPipelinesResult, SageMakerError> ListPipelinesOutcome;
      typedef Aws::Utils::Outcome<ListProcessingJobsResult, SageMakerError> ListProcessingJobsOutcome;
      typedef Aws::Utils::Outcome<ListProjectsResult, SageMakerError> ListProjectsOutcome;
      typedef Aws::Utils::Outcome<ListSpacesResult, SageMakerError> ListSpacesOutcome;
      typedef Aws::Utils::Outcome<ListStageDevicesResult, SageMakerError> ListStageDevicesOutcome;
      typedef Aws::Utils::Outcome<ListStudioLifecycleConfigsResult, SageMakerError> ListStudioLifecycleConfigsOutcome;
      typedef Aws::Utils::Outcome<ListSubscribedWorkteamsResult, SageMakerError> ListSubscribedWorkteamsOutcome;
      typedef Aws::Utils::Outcome<ListTagsResult, SageMakerError> ListTagsOutcome;
      typedef Aws::Utils::Outcome<ListTrainingJobsResult, SageMakerError> ListTrainingJobsOutcome;
      typedef Aws::Utils::Outcome<ListTrainingJobsForHyperParameterTuningJobResult, SageMakerError> ListTrainingJobsForHyperParameterTuningJobOutcome;
      typedef Aws::Utils::Outcome<ListTransformJobsResult, SageMakerError> ListTransformJobsOutcome;
      typedef Aws::Utils::Outcome<ListTrialComponentsResult, SageMakerError> ListTrialComponentsOutcome;
      typedef Aws::Utils::Outcome<ListTrialsResult, SageMakerError> ListTrialsOutcome;
      typedef Aws::Utils::Outcome<ListUserProfilesResult, SageMakerError> ListUserProfilesOutcome;
      typedef Aws::Utils::Outcome<ListWorkforcesResult, SageMakerError> ListWorkforcesOutcome;
      typedef Aws::Utils::Outcome<ListWorkteamsResult, SageMakerError> ListWorkteamsOutcome;
      typedef Aws::Utils::Outcome<PutModelPackageGroupPolicyResult, SageMakerError> PutModelPackageGroupPolicyOutcome;
      typedef Aws::Utils::Outcome<QueryLineageResult, SageMakerError> QueryLineageOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> RegisterDevicesOutcome;
      typedef Aws::Utils::Outcome<RenderUiTemplateResult, SageMakerError> RenderUiTemplateOutcome;
      typedef Aws::Utils::Outcome<RetryPipelineExecutionResult, SageMakerError> RetryPipelineExecutionOutcome;
      typedef Aws::Utils::Outcome<SearchResult, SageMakerError> SearchOutcome;
      typedef Aws::Utils::Outcome<SendPipelineExecutionStepFailureResult, SageMakerError> SendPipelineExecutionStepFailureOutcome;
      typedef Aws::Utils::Outcome<SendPipelineExecutionStepSuccessResult, SageMakerError> SendPipelineExecutionStepSuccessOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> StartEdgeDeploymentStageOutcome;
      typedef Aws::Utils::Outcome<StartInferenceExperimentResult, SageMakerError> StartInferenceExperimentOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> StartMonitoringScheduleOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> StartNotebookInstanceOutcome;
      typedef Aws::Utils::Outcome<StartPipelineExecutionResult, SageMakerError> StartPipelineExecutionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> StopAutoMLJobOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> StopCompilationJobOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> StopEdgeDeploymentStageOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> StopEdgePackagingJobOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> StopHyperParameterTuningJobOutcome;
      typedef Aws::Utils::Outcome<StopInferenceExperimentResult, SageMakerError> StopInferenceExperimentOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> StopInferenceRecommendationsJobOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> StopLabelingJobOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> StopMonitoringScheduleOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> StopNotebookInstanceOutcome;
      typedef Aws::Utils::Outcome<StopPipelineExecutionResult, SageMakerError> StopPipelineExecutionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> StopProcessingJobOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> StopTrainingJobOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> StopTransformJobOutcome;
      typedef Aws::Utils::Outcome<UpdateActionResult, SageMakerError> UpdateActionOutcome;
      typedef Aws::Utils::Outcome<UpdateAppImageConfigResult, SageMakerError> UpdateAppImageConfigOutcome;
      typedef Aws::Utils::Outcome<UpdateArtifactResult, SageMakerError> UpdateArtifactOutcome;
      typedef Aws::Utils::Outcome<UpdateCodeRepositoryResult, SageMakerError> UpdateCodeRepositoryOutcome;
      typedef Aws::Utils::Outcome<UpdateContextResult, SageMakerError> UpdateContextOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> UpdateDeviceFleetOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> UpdateDevicesOutcome;
      typedef Aws::Utils::Outcome<UpdateDomainResult, SageMakerError> UpdateDomainOutcome;
      typedef Aws::Utils::Outcome<UpdateEndpointResult, SageMakerError> UpdateEndpointOutcome;
      typedef Aws::Utils::Outcome<UpdateEndpointWeightsAndCapacitiesResult, SageMakerError> UpdateEndpointWeightsAndCapacitiesOutcome;
      typedef Aws::Utils::Outcome<UpdateExperimentResult, SageMakerError> UpdateExperimentOutcome;
      typedef Aws::Utils::Outcome<UpdateFeatureGroupResult, SageMakerError> UpdateFeatureGroupOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> UpdateFeatureMetadataOutcome;
      typedef Aws::Utils::Outcome<UpdateHubResult, SageMakerError> UpdateHubOutcome;
      typedef Aws::Utils::Outcome<UpdateImageResult, SageMakerError> UpdateImageOutcome;
      typedef Aws::Utils::Outcome<UpdateImageVersionResult, SageMakerError> UpdateImageVersionOutcome;
      typedef Aws::Utils::Outcome<UpdateInferenceExperimentResult, SageMakerError> UpdateInferenceExperimentOutcome;
      typedef Aws::Utils::Outcome<UpdateModelCardResult, SageMakerError> UpdateModelCardOutcome;
      typedef Aws::Utils::Outcome<UpdateModelPackageResult, SageMakerError> UpdateModelPackageOutcome;
      typedef Aws::Utils::Outcome<UpdateMonitoringAlertResult, SageMakerError> UpdateMonitoringAlertOutcome;
      typedef Aws::Utils::Outcome<UpdateMonitoringScheduleResult, SageMakerError> UpdateMonitoringScheduleOutcome;
      typedef Aws::Utils::Outcome<UpdateNotebookInstanceResult, SageMakerError> UpdateNotebookInstanceOutcome;
      typedef Aws::Utils::Outcome<UpdateNotebookInstanceLifecycleConfigResult, SageMakerError> UpdateNotebookInstanceLifecycleConfigOutcome;
      typedef Aws::Utils::Outcome<UpdatePipelineResult, SageMakerError> UpdatePipelineOutcome;
      typedef Aws::Utils::Outcome<UpdatePipelineExecutionResult, SageMakerError> UpdatePipelineExecutionOutcome;
      typedef Aws::Utils::Outcome<UpdateProjectResult, SageMakerError> UpdateProjectOutcome;
      typedef Aws::Utils::Outcome<UpdateSpaceResult, SageMakerError> UpdateSpaceOutcome;
      typedef Aws::Utils::Outcome<UpdateTrainingJobResult, SageMakerError> UpdateTrainingJobOutcome;
      typedef Aws::Utils::Outcome<UpdateTrialResult, SageMakerError> UpdateTrialOutcome;
      typedef Aws::Utils::Outcome<UpdateTrialComponentResult, SageMakerError> UpdateTrialComponentOutcome;
      typedef Aws::Utils::Outcome<UpdateUserProfileResult, SageMakerError> UpdateUserProfileOutcome;
      typedef Aws::Utils::Outcome<UpdateWorkforceResult, SageMakerError> UpdateWorkforceOutcome;
      typedef Aws::Utils::Outcome<UpdateWorkteamResult, SageMakerError> UpdateWorkteamOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AddAssociationOutcome> AddAssociationOutcomeCallable;
      typedef std::future<AddTagsOutcome> AddTagsOutcomeCallable;
      typedef std::future<AssociateTrialComponentOutcome> AssociateTrialComponentOutcomeCallable;
      typedef std::future<BatchDescribeModelPackageOutcome> BatchDescribeModelPackageOutcomeCallable;
      typedef std::future<CreateActionOutcome> CreateActionOutcomeCallable;
      typedef std::future<CreateAlgorithmOutcome> CreateAlgorithmOutcomeCallable;
      typedef std::future<CreateAppOutcome> CreateAppOutcomeCallable;
      typedef std::future<CreateAppImageConfigOutcome> CreateAppImageConfigOutcomeCallable;
      typedef std::future<CreateArtifactOutcome> CreateArtifactOutcomeCallable;
      typedef std::future<CreateAutoMLJobOutcome> CreateAutoMLJobOutcomeCallable;
      typedef std::future<CreateCodeRepositoryOutcome> CreateCodeRepositoryOutcomeCallable;
      typedef std::future<CreateCompilationJobOutcome> CreateCompilationJobOutcomeCallable;
      typedef std::future<CreateContextOutcome> CreateContextOutcomeCallable;
      typedef std::future<CreateDataQualityJobDefinitionOutcome> CreateDataQualityJobDefinitionOutcomeCallable;
      typedef std::future<CreateDeviceFleetOutcome> CreateDeviceFleetOutcomeCallable;
      typedef std::future<CreateDomainOutcome> CreateDomainOutcomeCallable;
      typedef std::future<CreateEdgeDeploymentPlanOutcome> CreateEdgeDeploymentPlanOutcomeCallable;
      typedef std::future<CreateEdgeDeploymentStageOutcome> CreateEdgeDeploymentStageOutcomeCallable;
      typedef std::future<CreateEdgePackagingJobOutcome> CreateEdgePackagingJobOutcomeCallable;
      typedef std::future<CreateEndpointOutcome> CreateEndpointOutcomeCallable;
      typedef std::future<CreateEndpointConfigOutcome> CreateEndpointConfigOutcomeCallable;
      typedef std::future<CreateExperimentOutcome> CreateExperimentOutcomeCallable;
      typedef std::future<CreateFeatureGroupOutcome> CreateFeatureGroupOutcomeCallable;
      typedef std::future<CreateFlowDefinitionOutcome> CreateFlowDefinitionOutcomeCallable;
      typedef std::future<CreateHubOutcome> CreateHubOutcomeCallable;
      typedef std::future<CreateHumanTaskUiOutcome> CreateHumanTaskUiOutcomeCallable;
      typedef std::future<CreateHyperParameterTuningJobOutcome> CreateHyperParameterTuningJobOutcomeCallable;
      typedef std::future<CreateImageOutcome> CreateImageOutcomeCallable;
      typedef std::future<CreateImageVersionOutcome> CreateImageVersionOutcomeCallable;
      typedef std::future<CreateInferenceExperimentOutcome> CreateInferenceExperimentOutcomeCallable;
      typedef std::future<CreateInferenceRecommendationsJobOutcome> CreateInferenceRecommendationsJobOutcomeCallable;
      typedef std::future<CreateLabelingJobOutcome> CreateLabelingJobOutcomeCallable;
      typedef std::future<CreateModelOutcome> CreateModelOutcomeCallable;
      typedef std::future<CreateModelBiasJobDefinitionOutcome> CreateModelBiasJobDefinitionOutcomeCallable;
      typedef std::future<CreateModelCardOutcome> CreateModelCardOutcomeCallable;
      typedef std::future<CreateModelCardExportJobOutcome> CreateModelCardExportJobOutcomeCallable;
      typedef std::future<CreateModelExplainabilityJobDefinitionOutcome> CreateModelExplainabilityJobDefinitionOutcomeCallable;
      typedef std::future<CreateModelPackageOutcome> CreateModelPackageOutcomeCallable;
      typedef std::future<CreateModelPackageGroupOutcome> CreateModelPackageGroupOutcomeCallable;
      typedef std::future<CreateModelQualityJobDefinitionOutcome> CreateModelQualityJobDefinitionOutcomeCallable;
      typedef std::future<CreateMonitoringScheduleOutcome> CreateMonitoringScheduleOutcomeCallable;
      typedef std::future<CreateNotebookInstanceOutcome> CreateNotebookInstanceOutcomeCallable;
      typedef std::future<CreateNotebookInstanceLifecycleConfigOutcome> CreateNotebookInstanceLifecycleConfigOutcomeCallable;
      typedef std::future<CreatePipelineOutcome> CreatePipelineOutcomeCallable;
      typedef std::future<CreatePresignedDomainUrlOutcome> CreatePresignedDomainUrlOutcomeCallable;
      typedef std::future<CreatePresignedNotebookInstanceUrlOutcome> CreatePresignedNotebookInstanceUrlOutcomeCallable;
      typedef std::future<CreateProcessingJobOutcome> CreateProcessingJobOutcomeCallable;
      typedef std::future<CreateProjectOutcome> CreateProjectOutcomeCallable;
      typedef std::future<CreateSpaceOutcome> CreateSpaceOutcomeCallable;
      typedef std::future<CreateStudioLifecycleConfigOutcome> CreateStudioLifecycleConfigOutcomeCallable;
      typedef std::future<CreateTrainingJobOutcome> CreateTrainingJobOutcomeCallable;
      typedef std::future<CreateTransformJobOutcome> CreateTransformJobOutcomeCallable;
      typedef std::future<CreateTrialOutcome> CreateTrialOutcomeCallable;
      typedef std::future<CreateTrialComponentOutcome> CreateTrialComponentOutcomeCallable;
      typedef std::future<CreateUserProfileOutcome> CreateUserProfileOutcomeCallable;
      typedef std::future<CreateWorkforceOutcome> CreateWorkforceOutcomeCallable;
      typedef std::future<CreateWorkteamOutcome> CreateWorkteamOutcomeCallable;
      typedef std::future<DeleteActionOutcome> DeleteActionOutcomeCallable;
      typedef std::future<DeleteAlgorithmOutcome> DeleteAlgorithmOutcomeCallable;
      typedef std::future<DeleteAppOutcome> DeleteAppOutcomeCallable;
      typedef std::future<DeleteAppImageConfigOutcome> DeleteAppImageConfigOutcomeCallable;
      typedef std::future<DeleteArtifactOutcome> DeleteArtifactOutcomeCallable;
      typedef std::future<DeleteAssociationOutcome> DeleteAssociationOutcomeCallable;
      typedef std::future<DeleteCodeRepositoryOutcome> DeleteCodeRepositoryOutcomeCallable;
      typedef std::future<DeleteContextOutcome> DeleteContextOutcomeCallable;
      typedef std::future<DeleteDataQualityJobDefinitionOutcome> DeleteDataQualityJobDefinitionOutcomeCallable;
      typedef std::future<DeleteDeviceFleetOutcome> DeleteDeviceFleetOutcomeCallable;
      typedef std::future<DeleteDomainOutcome> DeleteDomainOutcomeCallable;
      typedef std::future<DeleteEdgeDeploymentPlanOutcome> DeleteEdgeDeploymentPlanOutcomeCallable;
      typedef std::future<DeleteEdgeDeploymentStageOutcome> DeleteEdgeDeploymentStageOutcomeCallable;
      typedef std::future<DeleteEndpointOutcome> DeleteEndpointOutcomeCallable;
      typedef std::future<DeleteEndpointConfigOutcome> DeleteEndpointConfigOutcomeCallable;
      typedef std::future<DeleteExperimentOutcome> DeleteExperimentOutcomeCallable;
      typedef std::future<DeleteFeatureGroupOutcome> DeleteFeatureGroupOutcomeCallable;
      typedef std::future<DeleteFlowDefinitionOutcome> DeleteFlowDefinitionOutcomeCallable;
      typedef std::future<DeleteHubOutcome> DeleteHubOutcomeCallable;
      typedef std::future<DeleteHubContentOutcome> DeleteHubContentOutcomeCallable;
      typedef std::future<DeleteHumanTaskUiOutcome> DeleteHumanTaskUiOutcomeCallable;
      typedef std::future<DeleteImageOutcome> DeleteImageOutcomeCallable;
      typedef std::future<DeleteImageVersionOutcome> DeleteImageVersionOutcomeCallable;
      typedef std::future<DeleteInferenceExperimentOutcome> DeleteInferenceExperimentOutcomeCallable;
      typedef std::future<DeleteModelOutcome> DeleteModelOutcomeCallable;
      typedef std::future<DeleteModelBiasJobDefinitionOutcome> DeleteModelBiasJobDefinitionOutcomeCallable;
      typedef std::future<DeleteModelCardOutcome> DeleteModelCardOutcomeCallable;
      typedef std::future<DeleteModelExplainabilityJobDefinitionOutcome> DeleteModelExplainabilityJobDefinitionOutcomeCallable;
      typedef std::future<DeleteModelPackageOutcome> DeleteModelPackageOutcomeCallable;
      typedef std::future<DeleteModelPackageGroupOutcome> DeleteModelPackageGroupOutcomeCallable;
      typedef std::future<DeleteModelPackageGroupPolicyOutcome> DeleteModelPackageGroupPolicyOutcomeCallable;
      typedef std::future<DeleteModelQualityJobDefinitionOutcome> DeleteModelQualityJobDefinitionOutcomeCallable;
      typedef std::future<DeleteMonitoringScheduleOutcome> DeleteMonitoringScheduleOutcomeCallable;
      typedef std::future<DeleteNotebookInstanceOutcome> DeleteNotebookInstanceOutcomeCallable;
      typedef std::future<DeleteNotebookInstanceLifecycleConfigOutcome> DeleteNotebookInstanceLifecycleConfigOutcomeCallable;
      typedef std::future<DeletePipelineOutcome> DeletePipelineOutcomeCallable;
      typedef std::future<DeleteProjectOutcome> DeleteProjectOutcomeCallable;
      typedef std::future<DeleteSpaceOutcome> DeleteSpaceOutcomeCallable;
      typedef std::future<DeleteStudioLifecycleConfigOutcome> DeleteStudioLifecycleConfigOutcomeCallable;
      typedef std::future<DeleteTagsOutcome> DeleteTagsOutcomeCallable;
      typedef std::future<DeleteTrialOutcome> DeleteTrialOutcomeCallable;
      typedef std::future<DeleteTrialComponentOutcome> DeleteTrialComponentOutcomeCallable;
      typedef std::future<DeleteUserProfileOutcome> DeleteUserProfileOutcomeCallable;
      typedef std::future<DeleteWorkforceOutcome> DeleteWorkforceOutcomeCallable;
      typedef std::future<DeleteWorkteamOutcome> DeleteWorkteamOutcomeCallable;
      typedef std::future<DeregisterDevicesOutcome> DeregisterDevicesOutcomeCallable;
      typedef std::future<DescribeActionOutcome> DescribeActionOutcomeCallable;
      typedef std::future<DescribeAlgorithmOutcome> DescribeAlgorithmOutcomeCallable;
      typedef std::future<DescribeAppOutcome> DescribeAppOutcomeCallable;
      typedef std::future<DescribeAppImageConfigOutcome> DescribeAppImageConfigOutcomeCallable;
      typedef std::future<DescribeArtifactOutcome> DescribeArtifactOutcomeCallable;
      typedef std::future<DescribeAutoMLJobOutcome> DescribeAutoMLJobOutcomeCallable;
      typedef std::future<DescribeCodeRepositoryOutcome> DescribeCodeRepositoryOutcomeCallable;
      typedef std::future<DescribeCompilationJobOutcome> DescribeCompilationJobOutcomeCallable;
      typedef std::future<DescribeContextOutcome> DescribeContextOutcomeCallable;
      typedef std::future<DescribeDataQualityJobDefinitionOutcome> DescribeDataQualityJobDefinitionOutcomeCallable;
      typedef std::future<DescribeDeviceOutcome> DescribeDeviceOutcomeCallable;
      typedef std::future<DescribeDeviceFleetOutcome> DescribeDeviceFleetOutcomeCallable;
      typedef std::future<DescribeDomainOutcome> DescribeDomainOutcomeCallable;
      typedef std::future<DescribeEdgeDeploymentPlanOutcome> DescribeEdgeDeploymentPlanOutcomeCallable;
      typedef std::future<DescribeEdgePackagingJobOutcome> DescribeEdgePackagingJobOutcomeCallable;
      typedef std::future<DescribeEndpointOutcome> DescribeEndpointOutcomeCallable;
      typedef std::future<DescribeEndpointConfigOutcome> DescribeEndpointConfigOutcomeCallable;
      typedef std::future<DescribeExperimentOutcome> DescribeExperimentOutcomeCallable;
      typedef std::future<DescribeFeatureGroupOutcome> DescribeFeatureGroupOutcomeCallable;
      typedef std::future<DescribeFeatureMetadataOutcome> DescribeFeatureMetadataOutcomeCallable;
      typedef std::future<DescribeFlowDefinitionOutcome> DescribeFlowDefinitionOutcomeCallable;
      typedef std::future<DescribeHubOutcome> DescribeHubOutcomeCallable;
      typedef std::future<DescribeHubContentOutcome> DescribeHubContentOutcomeCallable;
      typedef std::future<DescribeHumanTaskUiOutcome> DescribeHumanTaskUiOutcomeCallable;
      typedef std::future<DescribeHyperParameterTuningJobOutcome> DescribeHyperParameterTuningJobOutcomeCallable;
      typedef std::future<DescribeImageOutcome> DescribeImageOutcomeCallable;
      typedef std::future<DescribeImageVersionOutcome> DescribeImageVersionOutcomeCallable;
      typedef std::future<DescribeInferenceExperimentOutcome> DescribeInferenceExperimentOutcomeCallable;
      typedef std::future<DescribeInferenceRecommendationsJobOutcome> DescribeInferenceRecommendationsJobOutcomeCallable;
      typedef std::future<DescribeLabelingJobOutcome> DescribeLabelingJobOutcomeCallable;
      typedef std::future<DescribeLineageGroupOutcome> DescribeLineageGroupOutcomeCallable;
      typedef std::future<DescribeModelOutcome> DescribeModelOutcomeCallable;
      typedef std::future<DescribeModelBiasJobDefinitionOutcome> DescribeModelBiasJobDefinitionOutcomeCallable;
      typedef std::future<DescribeModelCardOutcome> DescribeModelCardOutcomeCallable;
      typedef std::future<DescribeModelCardExportJobOutcome> DescribeModelCardExportJobOutcomeCallable;
      typedef std::future<DescribeModelExplainabilityJobDefinitionOutcome> DescribeModelExplainabilityJobDefinitionOutcomeCallable;
      typedef std::future<DescribeModelPackageOutcome> DescribeModelPackageOutcomeCallable;
      typedef std::future<DescribeModelPackageGroupOutcome> DescribeModelPackageGroupOutcomeCallable;
      typedef std::future<DescribeModelQualityJobDefinitionOutcome> DescribeModelQualityJobDefinitionOutcomeCallable;
      typedef std::future<DescribeMonitoringScheduleOutcome> DescribeMonitoringScheduleOutcomeCallable;
      typedef std::future<DescribeNotebookInstanceOutcome> DescribeNotebookInstanceOutcomeCallable;
      typedef std::future<DescribeNotebookInstanceLifecycleConfigOutcome> DescribeNotebookInstanceLifecycleConfigOutcomeCallable;
      typedef std::future<DescribePipelineOutcome> DescribePipelineOutcomeCallable;
      typedef std::future<DescribePipelineDefinitionForExecutionOutcome> DescribePipelineDefinitionForExecutionOutcomeCallable;
      typedef std::future<DescribePipelineExecutionOutcome> DescribePipelineExecutionOutcomeCallable;
      typedef std::future<DescribeProcessingJobOutcome> DescribeProcessingJobOutcomeCallable;
      typedef std::future<DescribeProjectOutcome> DescribeProjectOutcomeCallable;
      typedef std::future<DescribeSpaceOutcome> DescribeSpaceOutcomeCallable;
      typedef std::future<DescribeStudioLifecycleConfigOutcome> DescribeStudioLifecycleConfigOutcomeCallable;
      typedef std::future<DescribeSubscribedWorkteamOutcome> DescribeSubscribedWorkteamOutcomeCallable;
      typedef std::future<DescribeTrainingJobOutcome> DescribeTrainingJobOutcomeCallable;
      typedef std::future<DescribeTransformJobOutcome> DescribeTransformJobOutcomeCallable;
      typedef std::future<DescribeTrialOutcome> DescribeTrialOutcomeCallable;
      typedef std::future<DescribeTrialComponentOutcome> DescribeTrialComponentOutcomeCallable;
      typedef std::future<DescribeUserProfileOutcome> DescribeUserProfileOutcomeCallable;
      typedef std::future<DescribeWorkforceOutcome> DescribeWorkforceOutcomeCallable;
      typedef std::future<DescribeWorkteamOutcome> DescribeWorkteamOutcomeCallable;
      typedef std::future<DisableSagemakerServicecatalogPortfolioOutcome> DisableSagemakerServicecatalogPortfolioOutcomeCallable;
      typedef std::future<DisassociateTrialComponentOutcome> DisassociateTrialComponentOutcomeCallable;
      typedef std::future<EnableSagemakerServicecatalogPortfolioOutcome> EnableSagemakerServicecatalogPortfolioOutcomeCallable;
      typedef std::future<GetDeviceFleetReportOutcome> GetDeviceFleetReportOutcomeCallable;
      typedef std::future<GetLineageGroupPolicyOutcome> GetLineageGroupPolicyOutcomeCallable;
      typedef std::future<GetModelPackageGroupPolicyOutcome> GetModelPackageGroupPolicyOutcomeCallable;
      typedef std::future<GetSagemakerServicecatalogPortfolioStatusOutcome> GetSagemakerServicecatalogPortfolioStatusOutcomeCallable;
      typedef std::future<GetSearchSuggestionsOutcome> GetSearchSuggestionsOutcomeCallable;
      typedef std::future<ImportHubContentOutcome> ImportHubContentOutcomeCallable;
      typedef std::future<ListActionsOutcome> ListActionsOutcomeCallable;
      typedef std::future<ListAlgorithmsOutcome> ListAlgorithmsOutcomeCallable;
      typedef std::future<ListAliasesOutcome> ListAliasesOutcomeCallable;
      typedef std::future<ListAppImageConfigsOutcome> ListAppImageConfigsOutcomeCallable;
      typedef std::future<ListAppsOutcome> ListAppsOutcomeCallable;
      typedef std::future<ListArtifactsOutcome> ListArtifactsOutcomeCallable;
      typedef std::future<ListAssociationsOutcome> ListAssociationsOutcomeCallable;
      typedef std::future<ListAutoMLJobsOutcome> ListAutoMLJobsOutcomeCallable;
      typedef std::future<ListCandidatesForAutoMLJobOutcome> ListCandidatesForAutoMLJobOutcomeCallable;
      typedef std::future<ListCodeRepositoriesOutcome> ListCodeRepositoriesOutcomeCallable;
      typedef std::future<ListCompilationJobsOutcome> ListCompilationJobsOutcomeCallable;
      typedef std::future<ListContextsOutcome> ListContextsOutcomeCallable;
      typedef std::future<ListDataQualityJobDefinitionsOutcome> ListDataQualityJobDefinitionsOutcomeCallable;
      typedef std::future<ListDeviceFleetsOutcome> ListDeviceFleetsOutcomeCallable;
      typedef std::future<ListDevicesOutcome> ListDevicesOutcomeCallable;
      typedef std::future<ListDomainsOutcome> ListDomainsOutcomeCallable;
      typedef std::future<ListEdgeDeploymentPlansOutcome> ListEdgeDeploymentPlansOutcomeCallable;
      typedef std::future<ListEdgePackagingJobsOutcome> ListEdgePackagingJobsOutcomeCallable;
      typedef std::future<ListEndpointConfigsOutcome> ListEndpointConfigsOutcomeCallable;
      typedef std::future<ListEndpointsOutcome> ListEndpointsOutcomeCallable;
      typedef std::future<ListExperimentsOutcome> ListExperimentsOutcomeCallable;
      typedef std::future<ListFeatureGroupsOutcome> ListFeatureGroupsOutcomeCallable;
      typedef std::future<ListFlowDefinitionsOutcome> ListFlowDefinitionsOutcomeCallable;
      typedef std::future<ListHubContentVersionsOutcome> ListHubContentVersionsOutcomeCallable;
      typedef std::future<ListHubContentsOutcome> ListHubContentsOutcomeCallable;
      typedef std::future<ListHubsOutcome> ListHubsOutcomeCallable;
      typedef std::future<ListHumanTaskUisOutcome> ListHumanTaskUisOutcomeCallable;
      typedef std::future<ListHyperParameterTuningJobsOutcome> ListHyperParameterTuningJobsOutcomeCallable;
      typedef std::future<ListImageVersionsOutcome> ListImageVersionsOutcomeCallable;
      typedef std::future<ListImagesOutcome> ListImagesOutcomeCallable;
      typedef std::future<ListInferenceExperimentsOutcome> ListInferenceExperimentsOutcomeCallable;
      typedef std::future<ListInferenceRecommendationsJobStepsOutcome> ListInferenceRecommendationsJobStepsOutcomeCallable;
      typedef std::future<ListInferenceRecommendationsJobsOutcome> ListInferenceRecommendationsJobsOutcomeCallable;
      typedef std::future<ListLabelingJobsOutcome> ListLabelingJobsOutcomeCallable;
      typedef std::future<ListLabelingJobsForWorkteamOutcome> ListLabelingJobsForWorkteamOutcomeCallable;
      typedef std::future<ListLineageGroupsOutcome> ListLineageGroupsOutcomeCallable;
      typedef std::future<ListModelBiasJobDefinitionsOutcome> ListModelBiasJobDefinitionsOutcomeCallable;
      typedef std::future<ListModelCardExportJobsOutcome> ListModelCardExportJobsOutcomeCallable;
      typedef std::future<ListModelCardVersionsOutcome> ListModelCardVersionsOutcomeCallable;
      typedef std::future<ListModelCardsOutcome> ListModelCardsOutcomeCallable;
      typedef std::future<ListModelExplainabilityJobDefinitionsOutcome> ListModelExplainabilityJobDefinitionsOutcomeCallable;
      typedef std::future<ListModelMetadataOutcome> ListModelMetadataOutcomeCallable;
      typedef std::future<ListModelPackageGroupsOutcome> ListModelPackageGroupsOutcomeCallable;
      typedef std::future<ListModelPackagesOutcome> ListModelPackagesOutcomeCallable;
      typedef std::future<ListModelQualityJobDefinitionsOutcome> ListModelQualityJobDefinitionsOutcomeCallable;
      typedef std::future<ListModelsOutcome> ListModelsOutcomeCallable;
      typedef std::future<ListMonitoringAlertHistoryOutcome> ListMonitoringAlertHistoryOutcomeCallable;
      typedef std::future<ListMonitoringAlertsOutcome> ListMonitoringAlertsOutcomeCallable;
      typedef std::future<ListMonitoringExecutionsOutcome> ListMonitoringExecutionsOutcomeCallable;
      typedef std::future<ListMonitoringSchedulesOutcome> ListMonitoringSchedulesOutcomeCallable;
      typedef std::future<ListNotebookInstanceLifecycleConfigsOutcome> ListNotebookInstanceLifecycleConfigsOutcomeCallable;
      typedef std::future<ListNotebookInstancesOutcome> ListNotebookInstancesOutcomeCallable;
      typedef std::future<ListPipelineExecutionStepsOutcome> ListPipelineExecutionStepsOutcomeCallable;
      typedef std::future<ListPipelineExecutionsOutcome> ListPipelineExecutionsOutcomeCallable;
      typedef std::future<ListPipelineParametersForExecutionOutcome> ListPipelineParametersForExecutionOutcomeCallable;
      typedef std::future<ListPipelinesOutcome> ListPipelinesOutcomeCallable;
      typedef std::future<ListProcessingJobsOutcome> ListProcessingJobsOutcomeCallable;
      typedef std::future<ListProjectsOutcome> ListProjectsOutcomeCallable;
      typedef std::future<ListSpacesOutcome> ListSpacesOutcomeCallable;
      typedef std::future<ListStageDevicesOutcome> ListStageDevicesOutcomeCallable;
      typedef std::future<ListStudioLifecycleConfigsOutcome> ListStudioLifecycleConfigsOutcomeCallable;
      typedef std::future<ListSubscribedWorkteamsOutcome> ListSubscribedWorkteamsOutcomeCallable;
      typedef std::future<ListTagsOutcome> ListTagsOutcomeCallable;
      typedef std::future<ListTrainingJobsOutcome> ListTrainingJobsOutcomeCallable;
      typedef std::future<ListTrainingJobsForHyperParameterTuningJobOutcome> ListTrainingJobsForHyperParameterTuningJobOutcomeCallable;
      typedef std::future<ListTransformJobsOutcome> ListTransformJobsOutcomeCallable;
      typedef std::future<ListTrialComponentsOutcome> ListTrialComponentsOutcomeCallable;
      typedef std::future<ListTrialsOutcome> ListTrialsOutcomeCallable;
      typedef std::future<ListUserProfilesOutcome> ListUserProfilesOutcomeCallable;
      typedef std::future<ListWorkforcesOutcome> ListWorkforcesOutcomeCallable;
      typedef std::future<ListWorkteamsOutcome> ListWorkteamsOutcomeCallable;
      typedef std::future<PutModelPackageGroupPolicyOutcome> PutModelPackageGroupPolicyOutcomeCallable;
      typedef std::future<QueryLineageOutcome> QueryLineageOutcomeCallable;
      typedef std::future<RegisterDevicesOutcome> RegisterDevicesOutcomeCallable;
      typedef std::future<RenderUiTemplateOutcome> RenderUiTemplateOutcomeCallable;
      typedef std::future<RetryPipelineExecutionOutcome> RetryPipelineExecutionOutcomeCallable;
      typedef std::future<SearchOutcome> SearchOutcomeCallable;
      typedef std::future<SendPipelineExecutionStepFailureOutcome> SendPipelineExecutionStepFailureOutcomeCallable;
      typedef std::future<SendPipelineExecutionStepSuccessOutcome> SendPipelineExecutionStepSuccessOutcomeCallable;
      typedef std::future<StartEdgeDeploymentStageOutcome> StartEdgeDeploymentStageOutcomeCallable;
      typedef std::future<StartInferenceExperimentOutcome> StartInferenceExperimentOutcomeCallable;
      typedef std::future<StartMonitoringScheduleOutcome> StartMonitoringScheduleOutcomeCallable;
      typedef std::future<StartNotebookInstanceOutcome> StartNotebookInstanceOutcomeCallable;
      typedef std::future<StartPipelineExecutionOutcome> StartPipelineExecutionOutcomeCallable;
      typedef std::future<StopAutoMLJobOutcome> StopAutoMLJobOutcomeCallable;
      typedef std::future<StopCompilationJobOutcome> StopCompilationJobOutcomeCallable;
      typedef std::future<StopEdgeDeploymentStageOutcome> StopEdgeDeploymentStageOutcomeCallable;
      typedef std::future<StopEdgePackagingJobOutcome> StopEdgePackagingJobOutcomeCallable;
      typedef std::future<StopHyperParameterTuningJobOutcome> StopHyperParameterTuningJobOutcomeCallable;
      typedef std::future<StopInferenceExperimentOutcome> StopInferenceExperimentOutcomeCallable;
      typedef std::future<StopInferenceRecommendationsJobOutcome> StopInferenceRecommendationsJobOutcomeCallable;
      typedef std::future<StopLabelingJobOutcome> StopLabelingJobOutcomeCallable;
      typedef std::future<StopMonitoringScheduleOutcome> StopMonitoringScheduleOutcomeCallable;
      typedef std::future<StopNotebookInstanceOutcome> StopNotebookInstanceOutcomeCallable;
      typedef std::future<StopPipelineExecutionOutcome> StopPipelineExecutionOutcomeCallable;
      typedef std::future<StopProcessingJobOutcome> StopProcessingJobOutcomeCallable;
      typedef std::future<StopTrainingJobOutcome> StopTrainingJobOutcomeCallable;
      typedef std::future<StopTransformJobOutcome> StopTransformJobOutcomeCallable;
      typedef std::future<UpdateActionOutcome> UpdateActionOutcomeCallable;
      typedef std::future<UpdateAppImageConfigOutcome> UpdateAppImageConfigOutcomeCallable;
      typedef std::future<UpdateArtifactOutcome> UpdateArtifactOutcomeCallable;
      typedef std::future<UpdateCodeRepositoryOutcome> UpdateCodeRepositoryOutcomeCallable;
      typedef std::future<UpdateContextOutcome> UpdateContextOutcomeCallable;
      typedef std::future<UpdateDeviceFleetOutcome> UpdateDeviceFleetOutcomeCallable;
      typedef std::future<UpdateDevicesOutcome> UpdateDevicesOutcomeCallable;
      typedef std::future<UpdateDomainOutcome> UpdateDomainOutcomeCallable;
      typedef std::future<UpdateEndpointOutcome> UpdateEndpointOutcomeCallable;
      typedef std::future<UpdateEndpointWeightsAndCapacitiesOutcome> UpdateEndpointWeightsAndCapacitiesOutcomeCallable;
      typedef std::future<UpdateExperimentOutcome> UpdateExperimentOutcomeCallable;
      typedef std::future<UpdateFeatureGroupOutcome> UpdateFeatureGroupOutcomeCallable;
      typedef std::future<UpdateFeatureMetadataOutcome> UpdateFeatureMetadataOutcomeCallable;
      typedef std::future<UpdateHubOutcome> UpdateHubOutcomeCallable;
      typedef std::future<UpdateImageOutcome> UpdateImageOutcomeCallable;
      typedef std::future<UpdateImageVersionOutcome> UpdateImageVersionOutcomeCallable;
      typedef std::future<UpdateInferenceExperimentOutcome> UpdateInferenceExperimentOutcomeCallable;
      typedef std::future<UpdateModelCardOutcome> UpdateModelCardOutcomeCallable;
      typedef std::future<UpdateModelPackageOutcome> UpdateModelPackageOutcomeCallable;
      typedef std::future<UpdateMonitoringAlertOutcome> UpdateMonitoringAlertOutcomeCallable;
      typedef std::future<UpdateMonitoringScheduleOutcome> UpdateMonitoringScheduleOutcomeCallable;
      typedef std::future<UpdateNotebookInstanceOutcome> UpdateNotebookInstanceOutcomeCallable;
      typedef std::future<UpdateNotebookInstanceLifecycleConfigOutcome> UpdateNotebookInstanceLifecycleConfigOutcomeCallable;
      typedef std::future<UpdatePipelineOutcome> UpdatePipelineOutcomeCallable;
      typedef std::future<UpdatePipelineExecutionOutcome> UpdatePipelineExecutionOutcomeCallable;
      typedef std::future<UpdateProjectOutcome> UpdateProjectOutcomeCallable;
      typedef std::future<UpdateSpaceOutcome> UpdateSpaceOutcomeCallable;
      typedef std::future<UpdateTrainingJobOutcome> UpdateTrainingJobOutcomeCallable;
      typedef std::future<UpdateTrialOutcome> UpdateTrialOutcomeCallable;
      typedef std::future<UpdateTrialComponentOutcome> UpdateTrialComponentOutcomeCallable;
      typedef std::future<UpdateUserProfileOutcome> UpdateUserProfileOutcomeCallable;
      typedef std::future<UpdateWorkforceOutcome> UpdateWorkforceOutcomeCallable;
      typedef std::future<UpdateWorkteamOutcome> UpdateWorkteamOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class SageMakerClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const SageMakerClient*, const Model::AddAssociationRequest&, const Model::AddAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddAssociationResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::AddTagsRequest&, const Model::AddTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddTagsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::AssociateTrialComponentRequest&, const Model::AssociateTrialComponentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateTrialComponentResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::BatchDescribeModelPackageRequest&, const Model::BatchDescribeModelPackageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDescribeModelPackageResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateActionRequest&, const Model::CreateActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateActionResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateAlgorithmRequest&, const Model::CreateAlgorithmOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAlgorithmResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateAppRequest&, const Model::CreateAppOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAppResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateAppImageConfigRequest&, const Model::CreateAppImageConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAppImageConfigResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateArtifactRequest&, const Model::CreateArtifactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateArtifactResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateAutoMLJobRequest&, const Model::CreateAutoMLJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAutoMLJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateCodeRepositoryRequest&, const Model::CreateCodeRepositoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCodeRepositoryResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateCompilationJobRequest&, const Model::CreateCompilationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCompilationJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateContextRequest&, const Model::CreateContextOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateContextResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateDataQualityJobDefinitionRequest&, const Model::CreateDataQualityJobDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDataQualityJobDefinitionResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateDeviceFleetRequest&, const Model::CreateDeviceFleetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDeviceFleetResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateDomainRequest&, const Model::CreateDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDomainResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateEdgeDeploymentPlanRequest&, const Model::CreateEdgeDeploymentPlanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEdgeDeploymentPlanResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateEdgeDeploymentStageRequest&, const Model::CreateEdgeDeploymentStageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEdgeDeploymentStageResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateEdgePackagingJobRequest&, const Model::CreateEdgePackagingJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEdgePackagingJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateEndpointRequest&, const Model::CreateEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEndpointResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateEndpointConfigRequest&, const Model::CreateEndpointConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEndpointConfigResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateExperimentRequest&, const Model::CreateExperimentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateExperimentResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateFeatureGroupRequest&, const Model::CreateFeatureGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFeatureGroupResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateFlowDefinitionRequest&, const Model::CreateFlowDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFlowDefinitionResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateHubRequest&, const Model::CreateHubOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateHubResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateHumanTaskUiRequest&, const Model::CreateHumanTaskUiOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateHumanTaskUiResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateHyperParameterTuningJobRequest&, const Model::CreateHyperParameterTuningJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateHyperParameterTuningJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateImageRequest&, const Model::CreateImageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateImageResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateImageVersionRequest&, const Model::CreateImageVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateImageVersionResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateInferenceExperimentRequest&, const Model::CreateInferenceExperimentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateInferenceExperimentResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateInferenceRecommendationsJobRequest&, const Model::CreateInferenceRecommendationsJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateInferenceRecommendationsJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateLabelingJobRequest&, const Model::CreateLabelingJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLabelingJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateModelRequest&, const Model::CreateModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateModelResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateModelBiasJobDefinitionRequest&, const Model::CreateModelBiasJobDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateModelBiasJobDefinitionResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateModelCardRequest&, const Model::CreateModelCardOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateModelCardResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateModelCardExportJobRequest&, const Model::CreateModelCardExportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateModelCardExportJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateModelExplainabilityJobDefinitionRequest&, const Model::CreateModelExplainabilityJobDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateModelExplainabilityJobDefinitionResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateModelPackageRequest&, const Model::CreateModelPackageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateModelPackageResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateModelPackageGroupRequest&, const Model::CreateModelPackageGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateModelPackageGroupResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateModelQualityJobDefinitionRequest&, const Model::CreateModelQualityJobDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateModelQualityJobDefinitionResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateMonitoringScheduleRequest&, const Model::CreateMonitoringScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMonitoringScheduleResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateNotebookInstanceRequest&, const Model::CreateNotebookInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateNotebookInstanceResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateNotebookInstanceLifecycleConfigRequest&, const Model::CreateNotebookInstanceLifecycleConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateNotebookInstanceLifecycleConfigResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreatePipelineRequest&, const Model::CreatePipelineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePipelineResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreatePresignedDomainUrlRequest&, const Model::CreatePresignedDomainUrlOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePresignedDomainUrlResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreatePresignedNotebookInstanceUrlRequest&, const Model::CreatePresignedNotebookInstanceUrlOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePresignedNotebookInstanceUrlResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateProcessingJobRequest&, const Model::CreateProcessingJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateProcessingJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateProjectRequest&, const Model::CreateProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateProjectResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateSpaceRequest&, const Model::CreateSpaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSpaceResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateStudioLifecycleConfigRequest&, const Model::CreateStudioLifecycleConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateStudioLifecycleConfigResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateTrainingJobRequest&, const Model::CreateTrainingJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTrainingJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateTransformJobRequest&, const Model::CreateTransformJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTransformJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateTrialRequest&, const Model::CreateTrialOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTrialResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateTrialComponentRequest&, const Model::CreateTrialComponentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTrialComponentResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateUserProfileRequest&, const Model::CreateUserProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateUserProfileResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateWorkforceRequest&, const Model::CreateWorkforceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateWorkforceResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateWorkteamRequest&, const Model::CreateWorkteamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateWorkteamResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteActionRequest&, const Model::DeleteActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteActionResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteAlgorithmRequest&, const Model::DeleteAlgorithmOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAlgorithmResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteAppRequest&, const Model::DeleteAppOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAppResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteAppImageConfigRequest&, const Model::DeleteAppImageConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAppImageConfigResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteArtifactRequest&, const Model::DeleteArtifactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteArtifactResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteAssociationRequest&, const Model::DeleteAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAssociationResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteCodeRepositoryRequest&, const Model::DeleteCodeRepositoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCodeRepositoryResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteContextRequest&, const Model::DeleteContextOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteContextResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteDataQualityJobDefinitionRequest&, const Model::DeleteDataQualityJobDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDataQualityJobDefinitionResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteDeviceFleetRequest&, const Model::DeleteDeviceFleetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDeviceFleetResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteDomainRequest&, const Model::DeleteDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDomainResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteEdgeDeploymentPlanRequest&, const Model::DeleteEdgeDeploymentPlanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEdgeDeploymentPlanResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteEdgeDeploymentStageRequest&, const Model::DeleteEdgeDeploymentStageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEdgeDeploymentStageResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteEndpointRequest&, const Model::DeleteEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEndpointResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteEndpointConfigRequest&, const Model::DeleteEndpointConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEndpointConfigResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteExperimentRequest&, const Model::DeleteExperimentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteExperimentResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteFeatureGroupRequest&, const Model::DeleteFeatureGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFeatureGroupResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteFlowDefinitionRequest&, const Model::DeleteFlowDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFlowDefinitionResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteHubRequest&, const Model::DeleteHubOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteHubResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteHubContentRequest&, const Model::DeleteHubContentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteHubContentResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteHumanTaskUiRequest&, const Model::DeleteHumanTaskUiOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteHumanTaskUiResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteImageRequest&, const Model::DeleteImageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteImageResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteImageVersionRequest&, const Model::DeleteImageVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteImageVersionResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteInferenceExperimentRequest&, const Model::DeleteInferenceExperimentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteInferenceExperimentResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteModelRequest&, const Model::DeleteModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteModelResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteModelBiasJobDefinitionRequest&, const Model::DeleteModelBiasJobDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteModelBiasJobDefinitionResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteModelCardRequest&, const Model::DeleteModelCardOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteModelCardResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteModelExplainabilityJobDefinitionRequest&, const Model::DeleteModelExplainabilityJobDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteModelExplainabilityJobDefinitionResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteModelPackageRequest&, const Model::DeleteModelPackageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteModelPackageResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteModelPackageGroupRequest&, const Model::DeleteModelPackageGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteModelPackageGroupResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteModelPackageGroupPolicyRequest&, const Model::DeleteModelPackageGroupPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteModelPackageGroupPolicyResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteModelQualityJobDefinitionRequest&, const Model::DeleteModelQualityJobDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteModelQualityJobDefinitionResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteMonitoringScheduleRequest&, const Model::DeleteMonitoringScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMonitoringScheduleResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteNotebookInstanceRequest&, const Model::DeleteNotebookInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteNotebookInstanceResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteNotebookInstanceLifecycleConfigRequest&, const Model::DeleteNotebookInstanceLifecycleConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteNotebookInstanceLifecycleConfigResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeletePipelineRequest&, const Model::DeletePipelineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePipelineResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteProjectRequest&, const Model::DeleteProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProjectResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteSpaceRequest&, const Model::DeleteSpaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSpaceResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteStudioLifecycleConfigRequest&, const Model::DeleteStudioLifecycleConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteStudioLifecycleConfigResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteTagsRequest&, const Model::DeleteTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTagsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteTrialRequest&, const Model::DeleteTrialOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTrialResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteTrialComponentRequest&, const Model::DeleteTrialComponentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTrialComponentResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteUserProfileRequest&, const Model::DeleteUserProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUserProfileResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteWorkforceRequest&, const Model::DeleteWorkforceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteWorkforceResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteWorkteamRequest&, const Model::DeleteWorkteamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteWorkteamResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeregisterDevicesRequest&, const Model::DeregisterDevicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterDevicesResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeActionRequest&, const Model::DescribeActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeActionResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeAlgorithmRequest&, const Model::DescribeAlgorithmOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAlgorithmResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeAppRequest&, const Model::DescribeAppOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAppResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeAppImageConfigRequest&, const Model::DescribeAppImageConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAppImageConfigResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeArtifactRequest&, const Model::DescribeArtifactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeArtifactResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeAutoMLJobRequest&, const Model::DescribeAutoMLJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAutoMLJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeCodeRepositoryRequest&, const Model::DescribeCodeRepositoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCodeRepositoryResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeCompilationJobRequest&, const Model::DescribeCompilationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCompilationJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeContextRequest&, const Model::DescribeContextOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeContextResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeDataQualityJobDefinitionRequest&, const Model::DescribeDataQualityJobDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDataQualityJobDefinitionResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeDeviceRequest&, const Model::DescribeDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDeviceResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeDeviceFleetRequest&, const Model::DescribeDeviceFleetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDeviceFleetResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeDomainRequest&, const Model::DescribeDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDomainResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeEdgeDeploymentPlanRequest&, const Model::DescribeEdgeDeploymentPlanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEdgeDeploymentPlanResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeEdgePackagingJobRequest&, const Model::DescribeEdgePackagingJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEdgePackagingJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeEndpointRequest&, const Model::DescribeEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEndpointResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeEndpointConfigRequest&, const Model::DescribeEndpointConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEndpointConfigResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeExperimentRequest&, const Model::DescribeExperimentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeExperimentResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeFeatureGroupRequest&, const Model::DescribeFeatureGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFeatureGroupResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeFeatureMetadataRequest&, const Model::DescribeFeatureMetadataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFeatureMetadataResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeFlowDefinitionRequest&, const Model::DescribeFlowDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFlowDefinitionResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeHubRequest&, const Model::DescribeHubOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeHubResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeHubContentRequest&, const Model::DescribeHubContentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeHubContentResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeHumanTaskUiRequest&, const Model::DescribeHumanTaskUiOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeHumanTaskUiResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeHyperParameterTuningJobRequest&, const Model::DescribeHyperParameterTuningJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeHyperParameterTuningJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeImageRequest&, const Model::DescribeImageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeImageResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeImageVersionRequest&, const Model::DescribeImageVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeImageVersionResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeInferenceExperimentRequest&, const Model::DescribeInferenceExperimentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInferenceExperimentResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeInferenceRecommendationsJobRequest&, const Model::DescribeInferenceRecommendationsJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInferenceRecommendationsJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeLabelingJobRequest&, const Model::DescribeLabelingJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLabelingJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeLineageGroupRequest&, const Model::DescribeLineageGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLineageGroupResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeModelRequest&, const Model::DescribeModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeModelResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeModelBiasJobDefinitionRequest&, const Model::DescribeModelBiasJobDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeModelBiasJobDefinitionResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeModelCardRequest&, const Model::DescribeModelCardOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeModelCardResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeModelCardExportJobRequest&, const Model::DescribeModelCardExportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeModelCardExportJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeModelExplainabilityJobDefinitionRequest&, const Model::DescribeModelExplainabilityJobDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeModelExplainabilityJobDefinitionResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeModelPackageRequest&, const Model::DescribeModelPackageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeModelPackageResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeModelPackageGroupRequest&, const Model::DescribeModelPackageGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeModelPackageGroupResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeModelQualityJobDefinitionRequest&, const Model::DescribeModelQualityJobDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeModelQualityJobDefinitionResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeMonitoringScheduleRequest&, const Model::DescribeMonitoringScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMonitoringScheduleResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeNotebookInstanceRequest&, const Model::DescribeNotebookInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeNotebookInstanceResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeNotebookInstanceLifecycleConfigRequest&, const Model::DescribeNotebookInstanceLifecycleConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeNotebookInstanceLifecycleConfigResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribePipelineRequest&, const Model::DescribePipelineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePipelineResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribePipelineDefinitionForExecutionRequest&, const Model::DescribePipelineDefinitionForExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePipelineDefinitionForExecutionResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribePipelineExecutionRequest&, const Model::DescribePipelineExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePipelineExecutionResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeProcessingJobRequest&, const Model::DescribeProcessingJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeProcessingJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeProjectRequest&, const Model::DescribeProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeProjectResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeSpaceRequest&, const Model::DescribeSpaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSpaceResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeStudioLifecycleConfigRequest&, const Model::DescribeStudioLifecycleConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeStudioLifecycleConfigResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeSubscribedWorkteamRequest&, const Model::DescribeSubscribedWorkteamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSubscribedWorkteamResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeTrainingJobRequest&, const Model::DescribeTrainingJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTrainingJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeTransformJobRequest&, const Model::DescribeTransformJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTransformJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeTrialRequest&, const Model::DescribeTrialOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTrialResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeTrialComponentRequest&, const Model::DescribeTrialComponentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTrialComponentResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeUserProfileRequest&, const Model::DescribeUserProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeUserProfileResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeWorkforceRequest&, const Model::DescribeWorkforceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeWorkforceResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeWorkteamRequest&, const Model::DescribeWorkteamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeWorkteamResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DisableSagemakerServicecatalogPortfolioRequest&, const Model::DisableSagemakerServicecatalogPortfolioOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableSagemakerServicecatalogPortfolioResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DisassociateTrialComponentRequest&, const Model::DisassociateTrialComponentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateTrialComponentResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::EnableSagemakerServicecatalogPortfolioRequest&, const Model::EnableSagemakerServicecatalogPortfolioOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableSagemakerServicecatalogPortfolioResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::GetDeviceFleetReportRequest&, const Model::GetDeviceFleetReportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDeviceFleetReportResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::GetLineageGroupPolicyRequest&, const Model::GetLineageGroupPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLineageGroupPolicyResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::GetModelPackageGroupPolicyRequest&, const Model::GetModelPackageGroupPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetModelPackageGroupPolicyResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::GetSagemakerServicecatalogPortfolioStatusRequest&, const Model::GetSagemakerServicecatalogPortfolioStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSagemakerServicecatalogPortfolioStatusResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::GetSearchSuggestionsRequest&, const Model::GetSearchSuggestionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSearchSuggestionsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ImportHubContentRequest&, const Model::ImportHubContentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportHubContentResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListActionsRequest&, const Model::ListActionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListActionsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListAlgorithmsRequest&, const Model::ListAlgorithmsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAlgorithmsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListAliasesRequest&, const Model::ListAliasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAliasesResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListAppImageConfigsRequest&, const Model::ListAppImageConfigsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAppImageConfigsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListAppsRequest&, const Model::ListAppsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAppsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListArtifactsRequest&, const Model::ListArtifactsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListArtifactsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListAssociationsRequest&, const Model::ListAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAssociationsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListAutoMLJobsRequest&, const Model::ListAutoMLJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAutoMLJobsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListCandidatesForAutoMLJobRequest&, const Model::ListCandidatesForAutoMLJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCandidatesForAutoMLJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListCodeRepositoriesRequest&, const Model::ListCodeRepositoriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCodeRepositoriesResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListCompilationJobsRequest&, const Model::ListCompilationJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCompilationJobsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListContextsRequest&, const Model::ListContextsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListContextsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListDataQualityJobDefinitionsRequest&, const Model::ListDataQualityJobDefinitionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDataQualityJobDefinitionsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListDeviceFleetsRequest&, const Model::ListDeviceFleetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDeviceFleetsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListDevicesRequest&, const Model::ListDevicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDevicesResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListDomainsRequest&, const Model::ListDomainsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDomainsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListEdgeDeploymentPlansRequest&, const Model::ListEdgeDeploymentPlansOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEdgeDeploymentPlansResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListEdgePackagingJobsRequest&, const Model::ListEdgePackagingJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEdgePackagingJobsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListEndpointConfigsRequest&, const Model::ListEndpointConfigsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEndpointConfigsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListEndpointsRequest&, const Model::ListEndpointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEndpointsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListExperimentsRequest&, const Model::ListExperimentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListExperimentsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListFeatureGroupsRequest&, const Model::ListFeatureGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFeatureGroupsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListFlowDefinitionsRequest&, const Model::ListFlowDefinitionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFlowDefinitionsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListHubContentVersionsRequest&, const Model::ListHubContentVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListHubContentVersionsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListHubContentsRequest&, const Model::ListHubContentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListHubContentsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListHubsRequest&, const Model::ListHubsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListHubsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListHumanTaskUisRequest&, const Model::ListHumanTaskUisOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListHumanTaskUisResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListHyperParameterTuningJobsRequest&, const Model::ListHyperParameterTuningJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListHyperParameterTuningJobsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListImageVersionsRequest&, const Model::ListImageVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListImageVersionsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListImagesRequest&, const Model::ListImagesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListImagesResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListInferenceExperimentsRequest&, const Model::ListInferenceExperimentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInferenceExperimentsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListInferenceRecommendationsJobStepsRequest&, const Model::ListInferenceRecommendationsJobStepsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInferenceRecommendationsJobStepsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListInferenceRecommendationsJobsRequest&, const Model::ListInferenceRecommendationsJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInferenceRecommendationsJobsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListLabelingJobsRequest&, const Model::ListLabelingJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLabelingJobsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListLabelingJobsForWorkteamRequest&, const Model::ListLabelingJobsForWorkteamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLabelingJobsForWorkteamResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListLineageGroupsRequest&, const Model::ListLineageGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLineageGroupsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListModelBiasJobDefinitionsRequest&, const Model::ListModelBiasJobDefinitionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListModelBiasJobDefinitionsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListModelCardExportJobsRequest&, const Model::ListModelCardExportJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListModelCardExportJobsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListModelCardVersionsRequest&, const Model::ListModelCardVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListModelCardVersionsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListModelCardsRequest&, const Model::ListModelCardsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListModelCardsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListModelExplainabilityJobDefinitionsRequest&, const Model::ListModelExplainabilityJobDefinitionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListModelExplainabilityJobDefinitionsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListModelMetadataRequest&, const Model::ListModelMetadataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListModelMetadataResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListModelPackageGroupsRequest&, const Model::ListModelPackageGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListModelPackageGroupsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListModelPackagesRequest&, const Model::ListModelPackagesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListModelPackagesResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListModelQualityJobDefinitionsRequest&, const Model::ListModelQualityJobDefinitionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListModelQualityJobDefinitionsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListModelsRequest&, const Model::ListModelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListModelsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListMonitoringAlertHistoryRequest&, const Model::ListMonitoringAlertHistoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMonitoringAlertHistoryResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListMonitoringAlertsRequest&, const Model::ListMonitoringAlertsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMonitoringAlertsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListMonitoringExecutionsRequest&, const Model::ListMonitoringExecutionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMonitoringExecutionsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListMonitoringSchedulesRequest&, const Model::ListMonitoringSchedulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMonitoringSchedulesResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListNotebookInstanceLifecycleConfigsRequest&, const Model::ListNotebookInstanceLifecycleConfigsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListNotebookInstanceLifecycleConfigsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListNotebookInstancesRequest&, const Model::ListNotebookInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListNotebookInstancesResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListPipelineExecutionStepsRequest&, const Model::ListPipelineExecutionStepsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPipelineExecutionStepsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListPipelineExecutionsRequest&, const Model::ListPipelineExecutionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPipelineExecutionsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListPipelineParametersForExecutionRequest&, const Model::ListPipelineParametersForExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPipelineParametersForExecutionResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListPipelinesRequest&, const Model::ListPipelinesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPipelinesResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListProcessingJobsRequest&, const Model::ListProcessingJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProcessingJobsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListProjectsRequest&, const Model::ListProjectsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProjectsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListSpacesRequest&, const Model::ListSpacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSpacesResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListStageDevicesRequest&, const Model::ListStageDevicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStageDevicesResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListStudioLifecycleConfigsRequest&, const Model::ListStudioLifecycleConfigsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStudioLifecycleConfigsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListSubscribedWorkteamsRequest&, const Model::ListSubscribedWorkteamsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSubscribedWorkteamsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListTagsRequest&, const Model::ListTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListTrainingJobsRequest&, const Model::ListTrainingJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTrainingJobsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListTrainingJobsForHyperParameterTuningJobRequest&, const Model::ListTrainingJobsForHyperParameterTuningJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTrainingJobsForHyperParameterTuningJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListTransformJobsRequest&, const Model::ListTransformJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTransformJobsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListTrialComponentsRequest&, const Model::ListTrialComponentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTrialComponentsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListTrialsRequest&, const Model::ListTrialsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTrialsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListUserProfilesRequest&, const Model::ListUserProfilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUserProfilesResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListWorkforcesRequest&, const Model::ListWorkforcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListWorkforcesResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListWorkteamsRequest&, const Model::ListWorkteamsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListWorkteamsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::PutModelPackageGroupPolicyRequest&, const Model::PutModelPackageGroupPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutModelPackageGroupPolicyResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::QueryLineageRequest&, const Model::QueryLineageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > QueryLineageResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::RegisterDevicesRequest&, const Model::RegisterDevicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterDevicesResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::RenderUiTemplateRequest&, const Model::RenderUiTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RenderUiTemplateResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::RetryPipelineExecutionRequest&, const Model::RetryPipelineExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RetryPipelineExecutionResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::SearchRequest&, const Model::SearchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::SendPipelineExecutionStepFailureRequest&, const Model::SendPipelineExecutionStepFailureOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendPipelineExecutionStepFailureResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::SendPipelineExecutionStepSuccessRequest&, const Model::SendPipelineExecutionStepSuccessOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendPipelineExecutionStepSuccessResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::StartEdgeDeploymentStageRequest&, const Model::StartEdgeDeploymentStageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartEdgeDeploymentStageResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::StartInferenceExperimentRequest&, const Model::StartInferenceExperimentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartInferenceExperimentResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::StartMonitoringScheduleRequest&, const Model::StartMonitoringScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartMonitoringScheduleResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::StartNotebookInstanceRequest&, const Model::StartNotebookInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartNotebookInstanceResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::StartPipelineExecutionRequest&, const Model::StartPipelineExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartPipelineExecutionResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::StopAutoMLJobRequest&, const Model::StopAutoMLJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopAutoMLJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::StopCompilationJobRequest&, const Model::StopCompilationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopCompilationJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::StopEdgeDeploymentStageRequest&, const Model::StopEdgeDeploymentStageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopEdgeDeploymentStageResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::StopEdgePackagingJobRequest&, const Model::StopEdgePackagingJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopEdgePackagingJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::StopHyperParameterTuningJobRequest&, const Model::StopHyperParameterTuningJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopHyperParameterTuningJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::StopInferenceExperimentRequest&, const Model::StopInferenceExperimentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopInferenceExperimentResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::StopInferenceRecommendationsJobRequest&, const Model::StopInferenceRecommendationsJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopInferenceRecommendationsJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::StopLabelingJobRequest&, const Model::StopLabelingJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopLabelingJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::StopMonitoringScheduleRequest&, const Model::StopMonitoringScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopMonitoringScheduleResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::StopNotebookInstanceRequest&, const Model::StopNotebookInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopNotebookInstanceResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::StopPipelineExecutionRequest&, const Model::StopPipelineExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopPipelineExecutionResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::StopProcessingJobRequest&, const Model::StopProcessingJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopProcessingJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::StopTrainingJobRequest&, const Model::StopTrainingJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopTrainingJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::StopTransformJobRequest&, const Model::StopTransformJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopTransformJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::UpdateActionRequest&, const Model::UpdateActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateActionResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::UpdateAppImageConfigRequest&, const Model::UpdateAppImageConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAppImageConfigResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::UpdateArtifactRequest&, const Model::UpdateArtifactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateArtifactResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::UpdateCodeRepositoryRequest&, const Model::UpdateCodeRepositoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCodeRepositoryResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::UpdateContextRequest&, const Model::UpdateContextOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateContextResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::UpdateDeviceFleetRequest&, const Model::UpdateDeviceFleetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDeviceFleetResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::UpdateDevicesRequest&, const Model::UpdateDevicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDevicesResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::UpdateDomainRequest&, const Model::UpdateDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDomainResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::UpdateEndpointRequest&, const Model::UpdateEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEndpointResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::UpdateEndpointWeightsAndCapacitiesRequest&, const Model::UpdateEndpointWeightsAndCapacitiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEndpointWeightsAndCapacitiesResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::UpdateExperimentRequest&, const Model::UpdateExperimentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateExperimentResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::UpdateFeatureGroupRequest&, const Model::UpdateFeatureGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFeatureGroupResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::UpdateFeatureMetadataRequest&, const Model::UpdateFeatureMetadataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFeatureMetadataResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::UpdateHubRequest&, const Model::UpdateHubOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateHubResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::UpdateImageRequest&, const Model::UpdateImageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateImageResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::UpdateImageVersionRequest&, const Model::UpdateImageVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateImageVersionResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::UpdateInferenceExperimentRequest&, const Model::UpdateInferenceExperimentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateInferenceExperimentResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::UpdateModelCardRequest&, const Model::UpdateModelCardOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateModelCardResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::UpdateModelPackageRequest&, const Model::UpdateModelPackageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateModelPackageResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::UpdateMonitoringAlertRequest&, const Model::UpdateMonitoringAlertOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMonitoringAlertResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::UpdateMonitoringScheduleRequest&, const Model::UpdateMonitoringScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMonitoringScheduleResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::UpdateNotebookInstanceRequest&, const Model::UpdateNotebookInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateNotebookInstanceResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::UpdateNotebookInstanceLifecycleConfigRequest&, const Model::UpdateNotebookInstanceLifecycleConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateNotebookInstanceLifecycleConfigResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::UpdatePipelineRequest&, const Model::UpdatePipelineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePipelineResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::UpdatePipelineExecutionRequest&, const Model::UpdatePipelineExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePipelineExecutionResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::UpdateProjectRequest&, const Model::UpdateProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateProjectResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::UpdateSpaceRequest&, const Model::UpdateSpaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSpaceResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::UpdateTrainingJobRequest&, const Model::UpdateTrainingJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTrainingJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::UpdateTrialRequest&, const Model::UpdateTrialOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTrialResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::UpdateTrialComponentRequest&, const Model::UpdateTrialComponentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTrialComponentResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::UpdateUserProfileRequest&, const Model::UpdateUserProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserProfileResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::UpdateWorkforceRequest&, const Model::UpdateWorkforceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateWorkforceResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::UpdateWorkteamRequest&, const Model::UpdateWorkteamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateWorkteamResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace SageMaker
} // namespace Aws
