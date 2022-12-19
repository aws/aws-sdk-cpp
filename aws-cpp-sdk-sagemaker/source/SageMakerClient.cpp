/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/sagemaker/SageMakerClient.h>
#include <aws/sagemaker/SageMakerErrorMarshaller.h>
#include <aws/sagemaker/SageMakerEndpointProvider.h>
#include <aws/sagemaker/model/AddAssociationRequest.h>
#include <aws/sagemaker/model/AddTagsRequest.h>
#include <aws/sagemaker/model/AssociateTrialComponentRequest.h>
#include <aws/sagemaker/model/BatchDescribeModelPackageRequest.h>
#include <aws/sagemaker/model/CreateActionRequest.h>
#include <aws/sagemaker/model/CreateAlgorithmRequest.h>
#include <aws/sagemaker/model/CreateAppRequest.h>
#include <aws/sagemaker/model/CreateAppImageConfigRequest.h>
#include <aws/sagemaker/model/CreateArtifactRequest.h>
#include <aws/sagemaker/model/CreateAutoMLJobRequest.h>
#include <aws/sagemaker/model/CreateCodeRepositoryRequest.h>
#include <aws/sagemaker/model/CreateCompilationJobRequest.h>
#include <aws/sagemaker/model/CreateContextRequest.h>
#include <aws/sagemaker/model/CreateDataQualityJobDefinitionRequest.h>
#include <aws/sagemaker/model/CreateDeviceFleetRequest.h>
#include <aws/sagemaker/model/CreateDomainRequest.h>
#include <aws/sagemaker/model/CreateEdgeDeploymentPlanRequest.h>
#include <aws/sagemaker/model/CreateEdgeDeploymentStageRequest.h>
#include <aws/sagemaker/model/CreateEdgePackagingJobRequest.h>
#include <aws/sagemaker/model/CreateEndpointRequest.h>
#include <aws/sagemaker/model/CreateEndpointConfigRequest.h>
#include <aws/sagemaker/model/CreateExperimentRequest.h>
#include <aws/sagemaker/model/CreateFeatureGroupRequest.h>
#include <aws/sagemaker/model/CreateFlowDefinitionRequest.h>
#include <aws/sagemaker/model/CreateHubRequest.h>
#include <aws/sagemaker/model/CreateHumanTaskUiRequest.h>
#include <aws/sagemaker/model/CreateHyperParameterTuningJobRequest.h>
#include <aws/sagemaker/model/CreateImageRequest.h>
#include <aws/sagemaker/model/CreateImageVersionRequest.h>
#include <aws/sagemaker/model/CreateInferenceExperimentRequest.h>
#include <aws/sagemaker/model/CreateInferenceRecommendationsJobRequest.h>
#include <aws/sagemaker/model/CreateLabelingJobRequest.h>
#include <aws/sagemaker/model/CreateModelRequest.h>
#include <aws/sagemaker/model/CreateModelBiasJobDefinitionRequest.h>
#include <aws/sagemaker/model/CreateModelCardRequest.h>
#include <aws/sagemaker/model/CreateModelCardExportJobRequest.h>
#include <aws/sagemaker/model/CreateModelExplainabilityJobDefinitionRequest.h>
#include <aws/sagemaker/model/CreateModelPackageRequest.h>
#include <aws/sagemaker/model/CreateModelPackageGroupRequest.h>
#include <aws/sagemaker/model/CreateModelQualityJobDefinitionRequest.h>
#include <aws/sagemaker/model/CreateMonitoringScheduleRequest.h>
#include <aws/sagemaker/model/CreateNotebookInstanceRequest.h>
#include <aws/sagemaker/model/CreateNotebookInstanceLifecycleConfigRequest.h>
#include <aws/sagemaker/model/CreatePipelineRequest.h>
#include <aws/sagemaker/model/CreatePresignedDomainUrlRequest.h>
#include <aws/sagemaker/model/CreatePresignedNotebookInstanceUrlRequest.h>
#include <aws/sagemaker/model/CreateProcessingJobRequest.h>
#include <aws/sagemaker/model/CreateProjectRequest.h>
#include <aws/sagemaker/model/CreateSpaceRequest.h>
#include <aws/sagemaker/model/CreateStudioLifecycleConfigRequest.h>
#include <aws/sagemaker/model/CreateTrainingJobRequest.h>
#include <aws/sagemaker/model/CreateTransformJobRequest.h>
#include <aws/sagemaker/model/CreateTrialRequest.h>
#include <aws/sagemaker/model/CreateTrialComponentRequest.h>
#include <aws/sagemaker/model/CreateUserProfileRequest.h>
#include <aws/sagemaker/model/CreateWorkforceRequest.h>
#include <aws/sagemaker/model/CreateWorkteamRequest.h>
#include <aws/sagemaker/model/DeleteActionRequest.h>
#include <aws/sagemaker/model/DeleteAlgorithmRequest.h>
#include <aws/sagemaker/model/DeleteAppRequest.h>
#include <aws/sagemaker/model/DeleteAppImageConfigRequest.h>
#include <aws/sagemaker/model/DeleteArtifactRequest.h>
#include <aws/sagemaker/model/DeleteAssociationRequest.h>
#include <aws/sagemaker/model/DeleteCodeRepositoryRequest.h>
#include <aws/sagemaker/model/DeleteContextRequest.h>
#include <aws/sagemaker/model/DeleteDataQualityJobDefinitionRequest.h>
#include <aws/sagemaker/model/DeleteDeviceFleetRequest.h>
#include <aws/sagemaker/model/DeleteDomainRequest.h>
#include <aws/sagemaker/model/DeleteEdgeDeploymentPlanRequest.h>
#include <aws/sagemaker/model/DeleteEdgeDeploymentStageRequest.h>
#include <aws/sagemaker/model/DeleteEndpointRequest.h>
#include <aws/sagemaker/model/DeleteEndpointConfigRequest.h>
#include <aws/sagemaker/model/DeleteExperimentRequest.h>
#include <aws/sagemaker/model/DeleteFeatureGroupRequest.h>
#include <aws/sagemaker/model/DeleteFlowDefinitionRequest.h>
#include <aws/sagemaker/model/DeleteHubRequest.h>
#include <aws/sagemaker/model/DeleteHubContentRequest.h>
#include <aws/sagemaker/model/DeleteHumanTaskUiRequest.h>
#include <aws/sagemaker/model/DeleteImageRequest.h>
#include <aws/sagemaker/model/DeleteImageVersionRequest.h>
#include <aws/sagemaker/model/DeleteInferenceExperimentRequest.h>
#include <aws/sagemaker/model/DeleteModelRequest.h>
#include <aws/sagemaker/model/DeleteModelBiasJobDefinitionRequest.h>
#include <aws/sagemaker/model/DeleteModelCardRequest.h>
#include <aws/sagemaker/model/DeleteModelExplainabilityJobDefinitionRequest.h>
#include <aws/sagemaker/model/DeleteModelPackageRequest.h>
#include <aws/sagemaker/model/DeleteModelPackageGroupRequest.h>
#include <aws/sagemaker/model/DeleteModelPackageGroupPolicyRequest.h>
#include <aws/sagemaker/model/DeleteModelQualityJobDefinitionRequest.h>
#include <aws/sagemaker/model/DeleteMonitoringScheduleRequest.h>
#include <aws/sagemaker/model/DeleteNotebookInstanceRequest.h>
#include <aws/sagemaker/model/DeleteNotebookInstanceLifecycleConfigRequest.h>
#include <aws/sagemaker/model/DeletePipelineRequest.h>
#include <aws/sagemaker/model/DeleteProjectRequest.h>
#include <aws/sagemaker/model/DeleteSpaceRequest.h>
#include <aws/sagemaker/model/DeleteStudioLifecycleConfigRequest.h>
#include <aws/sagemaker/model/DeleteTagsRequest.h>
#include <aws/sagemaker/model/DeleteTrialRequest.h>
#include <aws/sagemaker/model/DeleteTrialComponentRequest.h>
#include <aws/sagemaker/model/DeleteUserProfileRequest.h>
#include <aws/sagemaker/model/DeleteWorkforceRequest.h>
#include <aws/sagemaker/model/DeleteWorkteamRequest.h>
#include <aws/sagemaker/model/DeregisterDevicesRequest.h>
#include <aws/sagemaker/model/DescribeActionRequest.h>
#include <aws/sagemaker/model/DescribeAlgorithmRequest.h>
#include <aws/sagemaker/model/DescribeAppRequest.h>
#include <aws/sagemaker/model/DescribeAppImageConfigRequest.h>
#include <aws/sagemaker/model/DescribeArtifactRequest.h>
#include <aws/sagemaker/model/DescribeAutoMLJobRequest.h>
#include <aws/sagemaker/model/DescribeCodeRepositoryRequest.h>
#include <aws/sagemaker/model/DescribeCompilationJobRequest.h>
#include <aws/sagemaker/model/DescribeContextRequest.h>
#include <aws/sagemaker/model/DescribeDataQualityJobDefinitionRequest.h>
#include <aws/sagemaker/model/DescribeDeviceRequest.h>
#include <aws/sagemaker/model/DescribeDeviceFleetRequest.h>
#include <aws/sagemaker/model/DescribeDomainRequest.h>
#include <aws/sagemaker/model/DescribeEdgeDeploymentPlanRequest.h>
#include <aws/sagemaker/model/DescribeEdgePackagingJobRequest.h>
#include <aws/sagemaker/model/DescribeEndpointRequest.h>
#include <aws/sagemaker/model/DescribeEndpointConfigRequest.h>
#include <aws/sagemaker/model/DescribeExperimentRequest.h>
#include <aws/sagemaker/model/DescribeFeatureGroupRequest.h>
#include <aws/sagemaker/model/DescribeFeatureMetadataRequest.h>
#include <aws/sagemaker/model/DescribeFlowDefinitionRequest.h>
#include <aws/sagemaker/model/DescribeHubRequest.h>
#include <aws/sagemaker/model/DescribeHubContentRequest.h>
#include <aws/sagemaker/model/DescribeHumanTaskUiRequest.h>
#include <aws/sagemaker/model/DescribeHyperParameterTuningJobRequest.h>
#include <aws/sagemaker/model/DescribeImageRequest.h>
#include <aws/sagemaker/model/DescribeImageVersionRequest.h>
#include <aws/sagemaker/model/DescribeInferenceExperimentRequest.h>
#include <aws/sagemaker/model/DescribeInferenceRecommendationsJobRequest.h>
#include <aws/sagemaker/model/DescribeLabelingJobRequest.h>
#include <aws/sagemaker/model/DescribeLineageGroupRequest.h>
#include <aws/sagemaker/model/DescribeModelRequest.h>
#include <aws/sagemaker/model/DescribeModelBiasJobDefinitionRequest.h>
#include <aws/sagemaker/model/DescribeModelCardRequest.h>
#include <aws/sagemaker/model/DescribeModelCardExportJobRequest.h>
#include <aws/sagemaker/model/DescribeModelExplainabilityJobDefinitionRequest.h>
#include <aws/sagemaker/model/DescribeModelPackageRequest.h>
#include <aws/sagemaker/model/DescribeModelPackageGroupRequest.h>
#include <aws/sagemaker/model/DescribeModelQualityJobDefinitionRequest.h>
#include <aws/sagemaker/model/DescribeMonitoringScheduleRequest.h>
#include <aws/sagemaker/model/DescribeNotebookInstanceRequest.h>
#include <aws/sagemaker/model/DescribeNotebookInstanceLifecycleConfigRequest.h>
#include <aws/sagemaker/model/DescribePipelineRequest.h>
#include <aws/sagemaker/model/DescribePipelineDefinitionForExecutionRequest.h>
#include <aws/sagemaker/model/DescribePipelineExecutionRequest.h>
#include <aws/sagemaker/model/DescribeProcessingJobRequest.h>
#include <aws/sagemaker/model/DescribeProjectRequest.h>
#include <aws/sagemaker/model/DescribeSpaceRequest.h>
#include <aws/sagemaker/model/DescribeStudioLifecycleConfigRequest.h>
#include <aws/sagemaker/model/DescribeSubscribedWorkteamRequest.h>
#include <aws/sagemaker/model/DescribeTrainingJobRequest.h>
#include <aws/sagemaker/model/DescribeTransformJobRequest.h>
#include <aws/sagemaker/model/DescribeTrialRequest.h>
#include <aws/sagemaker/model/DescribeTrialComponentRequest.h>
#include <aws/sagemaker/model/DescribeUserProfileRequest.h>
#include <aws/sagemaker/model/DescribeWorkforceRequest.h>
#include <aws/sagemaker/model/DescribeWorkteamRequest.h>
#include <aws/sagemaker/model/DisableSagemakerServicecatalogPortfolioRequest.h>
#include <aws/sagemaker/model/DisassociateTrialComponentRequest.h>
#include <aws/sagemaker/model/EnableSagemakerServicecatalogPortfolioRequest.h>
#include <aws/sagemaker/model/GetDeviceFleetReportRequest.h>
#include <aws/sagemaker/model/GetLineageGroupPolicyRequest.h>
#include <aws/sagemaker/model/GetModelPackageGroupPolicyRequest.h>
#include <aws/sagemaker/model/GetSagemakerServicecatalogPortfolioStatusRequest.h>
#include <aws/sagemaker/model/GetSearchSuggestionsRequest.h>
#include <aws/sagemaker/model/ImportHubContentRequest.h>
#include <aws/sagemaker/model/ListActionsRequest.h>
#include <aws/sagemaker/model/ListAlgorithmsRequest.h>
#include <aws/sagemaker/model/ListAliasesRequest.h>
#include <aws/sagemaker/model/ListAppImageConfigsRequest.h>
#include <aws/sagemaker/model/ListAppsRequest.h>
#include <aws/sagemaker/model/ListArtifactsRequest.h>
#include <aws/sagemaker/model/ListAssociationsRequest.h>
#include <aws/sagemaker/model/ListAutoMLJobsRequest.h>
#include <aws/sagemaker/model/ListCandidatesForAutoMLJobRequest.h>
#include <aws/sagemaker/model/ListCodeRepositoriesRequest.h>
#include <aws/sagemaker/model/ListCompilationJobsRequest.h>
#include <aws/sagemaker/model/ListContextsRequest.h>
#include <aws/sagemaker/model/ListDataQualityJobDefinitionsRequest.h>
#include <aws/sagemaker/model/ListDeviceFleetsRequest.h>
#include <aws/sagemaker/model/ListDevicesRequest.h>
#include <aws/sagemaker/model/ListDomainsRequest.h>
#include <aws/sagemaker/model/ListEdgeDeploymentPlansRequest.h>
#include <aws/sagemaker/model/ListEdgePackagingJobsRequest.h>
#include <aws/sagemaker/model/ListEndpointConfigsRequest.h>
#include <aws/sagemaker/model/ListEndpointsRequest.h>
#include <aws/sagemaker/model/ListExperimentsRequest.h>
#include <aws/sagemaker/model/ListFeatureGroupsRequest.h>
#include <aws/sagemaker/model/ListFlowDefinitionsRequest.h>
#include <aws/sagemaker/model/ListHubContentVersionsRequest.h>
#include <aws/sagemaker/model/ListHubContentsRequest.h>
#include <aws/sagemaker/model/ListHubsRequest.h>
#include <aws/sagemaker/model/ListHumanTaskUisRequest.h>
#include <aws/sagemaker/model/ListHyperParameterTuningJobsRequest.h>
#include <aws/sagemaker/model/ListImageVersionsRequest.h>
#include <aws/sagemaker/model/ListImagesRequest.h>
#include <aws/sagemaker/model/ListInferenceExperimentsRequest.h>
#include <aws/sagemaker/model/ListInferenceRecommendationsJobStepsRequest.h>
#include <aws/sagemaker/model/ListInferenceRecommendationsJobsRequest.h>
#include <aws/sagemaker/model/ListLabelingJobsRequest.h>
#include <aws/sagemaker/model/ListLabelingJobsForWorkteamRequest.h>
#include <aws/sagemaker/model/ListLineageGroupsRequest.h>
#include <aws/sagemaker/model/ListModelBiasJobDefinitionsRequest.h>
#include <aws/sagemaker/model/ListModelCardExportJobsRequest.h>
#include <aws/sagemaker/model/ListModelCardVersionsRequest.h>
#include <aws/sagemaker/model/ListModelCardsRequest.h>
#include <aws/sagemaker/model/ListModelExplainabilityJobDefinitionsRequest.h>
#include <aws/sagemaker/model/ListModelMetadataRequest.h>
#include <aws/sagemaker/model/ListModelPackageGroupsRequest.h>
#include <aws/sagemaker/model/ListModelPackagesRequest.h>
#include <aws/sagemaker/model/ListModelQualityJobDefinitionsRequest.h>
#include <aws/sagemaker/model/ListModelsRequest.h>
#include <aws/sagemaker/model/ListMonitoringAlertHistoryRequest.h>
#include <aws/sagemaker/model/ListMonitoringAlertsRequest.h>
#include <aws/sagemaker/model/ListMonitoringExecutionsRequest.h>
#include <aws/sagemaker/model/ListMonitoringSchedulesRequest.h>
#include <aws/sagemaker/model/ListNotebookInstanceLifecycleConfigsRequest.h>
#include <aws/sagemaker/model/ListNotebookInstancesRequest.h>
#include <aws/sagemaker/model/ListPipelineExecutionStepsRequest.h>
#include <aws/sagemaker/model/ListPipelineExecutionsRequest.h>
#include <aws/sagemaker/model/ListPipelineParametersForExecutionRequest.h>
#include <aws/sagemaker/model/ListPipelinesRequest.h>
#include <aws/sagemaker/model/ListProcessingJobsRequest.h>
#include <aws/sagemaker/model/ListProjectsRequest.h>
#include <aws/sagemaker/model/ListSpacesRequest.h>
#include <aws/sagemaker/model/ListStageDevicesRequest.h>
#include <aws/sagemaker/model/ListStudioLifecycleConfigsRequest.h>
#include <aws/sagemaker/model/ListSubscribedWorkteamsRequest.h>
#include <aws/sagemaker/model/ListTagsRequest.h>
#include <aws/sagemaker/model/ListTrainingJobsRequest.h>
#include <aws/sagemaker/model/ListTrainingJobsForHyperParameterTuningJobRequest.h>
#include <aws/sagemaker/model/ListTransformJobsRequest.h>
#include <aws/sagemaker/model/ListTrialComponentsRequest.h>
#include <aws/sagemaker/model/ListTrialsRequest.h>
#include <aws/sagemaker/model/ListUserProfilesRequest.h>
#include <aws/sagemaker/model/ListWorkforcesRequest.h>
#include <aws/sagemaker/model/ListWorkteamsRequest.h>
#include <aws/sagemaker/model/PutModelPackageGroupPolicyRequest.h>
#include <aws/sagemaker/model/QueryLineageRequest.h>
#include <aws/sagemaker/model/RegisterDevicesRequest.h>
#include <aws/sagemaker/model/RenderUiTemplateRequest.h>
#include <aws/sagemaker/model/RetryPipelineExecutionRequest.h>
#include <aws/sagemaker/model/SearchRequest.h>
#include <aws/sagemaker/model/SendPipelineExecutionStepFailureRequest.h>
#include <aws/sagemaker/model/SendPipelineExecutionStepSuccessRequest.h>
#include <aws/sagemaker/model/StartEdgeDeploymentStageRequest.h>
#include <aws/sagemaker/model/StartInferenceExperimentRequest.h>
#include <aws/sagemaker/model/StartMonitoringScheduleRequest.h>
#include <aws/sagemaker/model/StartNotebookInstanceRequest.h>
#include <aws/sagemaker/model/StartPipelineExecutionRequest.h>
#include <aws/sagemaker/model/StopAutoMLJobRequest.h>
#include <aws/sagemaker/model/StopCompilationJobRequest.h>
#include <aws/sagemaker/model/StopEdgeDeploymentStageRequest.h>
#include <aws/sagemaker/model/StopEdgePackagingJobRequest.h>
#include <aws/sagemaker/model/StopHyperParameterTuningJobRequest.h>
#include <aws/sagemaker/model/StopInferenceExperimentRequest.h>
#include <aws/sagemaker/model/StopInferenceRecommendationsJobRequest.h>
#include <aws/sagemaker/model/StopLabelingJobRequest.h>
#include <aws/sagemaker/model/StopMonitoringScheduleRequest.h>
#include <aws/sagemaker/model/StopNotebookInstanceRequest.h>
#include <aws/sagemaker/model/StopPipelineExecutionRequest.h>
#include <aws/sagemaker/model/StopProcessingJobRequest.h>
#include <aws/sagemaker/model/StopTrainingJobRequest.h>
#include <aws/sagemaker/model/StopTransformJobRequest.h>
#include <aws/sagemaker/model/UpdateActionRequest.h>
#include <aws/sagemaker/model/UpdateAppImageConfigRequest.h>
#include <aws/sagemaker/model/UpdateArtifactRequest.h>
#include <aws/sagemaker/model/UpdateCodeRepositoryRequest.h>
#include <aws/sagemaker/model/UpdateContextRequest.h>
#include <aws/sagemaker/model/UpdateDeviceFleetRequest.h>
#include <aws/sagemaker/model/UpdateDevicesRequest.h>
#include <aws/sagemaker/model/UpdateDomainRequest.h>
#include <aws/sagemaker/model/UpdateEndpointRequest.h>
#include <aws/sagemaker/model/UpdateEndpointWeightsAndCapacitiesRequest.h>
#include <aws/sagemaker/model/UpdateExperimentRequest.h>
#include <aws/sagemaker/model/UpdateFeatureGroupRequest.h>
#include <aws/sagemaker/model/UpdateFeatureMetadataRequest.h>
#include <aws/sagemaker/model/UpdateHubRequest.h>
#include <aws/sagemaker/model/UpdateImageRequest.h>
#include <aws/sagemaker/model/UpdateImageVersionRequest.h>
#include <aws/sagemaker/model/UpdateInferenceExperimentRequest.h>
#include <aws/sagemaker/model/UpdateModelCardRequest.h>
#include <aws/sagemaker/model/UpdateModelPackageRequest.h>
#include <aws/sagemaker/model/UpdateMonitoringAlertRequest.h>
#include <aws/sagemaker/model/UpdateMonitoringScheduleRequest.h>
#include <aws/sagemaker/model/UpdateNotebookInstanceRequest.h>
#include <aws/sagemaker/model/UpdateNotebookInstanceLifecycleConfigRequest.h>
#include <aws/sagemaker/model/UpdatePipelineRequest.h>
#include <aws/sagemaker/model/UpdatePipelineExecutionRequest.h>
#include <aws/sagemaker/model/UpdateProjectRequest.h>
#include <aws/sagemaker/model/UpdateSpaceRequest.h>
#include <aws/sagemaker/model/UpdateTrainingJobRequest.h>
#include <aws/sagemaker/model/UpdateTrialRequest.h>
#include <aws/sagemaker/model/UpdateTrialComponentRequest.h>
#include <aws/sagemaker/model/UpdateUserProfileRequest.h>
#include <aws/sagemaker/model/UpdateWorkforceRequest.h>
#include <aws/sagemaker/model/UpdateWorkteamRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::SageMaker;
using namespace Aws::SageMaker::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* SageMakerClient::SERVICE_NAME = "sagemaker";
const char* SageMakerClient::ALLOCATION_TAG = "SageMakerClient";

SageMakerClient::SageMakerClient(const SageMaker::SageMakerClientConfiguration& clientConfiguration,
                                 std::shared_ptr<SageMakerEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SageMakerErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

SageMakerClient::SageMakerClient(const AWSCredentials& credentials,
                                 std::shared_ptr<SageMakerEndpointProviderBase> endpointProvider,
                                 const SageMaker::SageMakerClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SageMakerErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

SageMakerClient::SageMakerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 std::shared_ptr<SageMakerEndpointProviderBase> endpointProvider,
                                 const SageMaker::SageMakerClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SageMakerErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  SageMakerClient::SageMakerClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SageMakerErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<SageMakerEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

SageMakerClient::SageMakerClient(const AWSCredentials& credentials,
                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SageMakerErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<SageMakerEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

SageMakerClient::SageMakerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SageMakerErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<SageMakerEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
SageMakerClient::~SageMakerClient()
{
}

std::shared_ptr<SageMakerEndpointProviderBase>& SageMakerClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void SageMakerClient::init(const SageMaker::SageMakerClientConfiguration& config)
{
  AWSClient::SetServiceClientName("SageMaker");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void SageMakerClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

AddAssociationOutcome SageMakerClient::AddAssociation(const AddAssociationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AddAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AddAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AddAssociationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddAssociationOutcomeCallable SageMakerClient::AddAssociationCallable(const AddAssociationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddAssociationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddAssociation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::AddAssociationAsync(const AddAssociationRequest& request, const AddAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AddAssociation(request), context);
    } );
}

AddTagsOutcome SageMakerClient::AddTags(const AddTagsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AddTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AddTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AddTagsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddTagsOutcomeCallable SageMakerClient::AddTagsCallable(const AddTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::AddTagsAsync(const AddTagsRequest& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AddTags(request), context);
    } );
}

AssociateTrialComponentOutcome SageMakerClient::AssociateTrialComponent(const AssociateTrialComponentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateTrialComponent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateTrialComponent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssociateTrialComponentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateTrialComponentOutcomeCallable SageMakerClient::AssociateTrialComponentCallable(const AssociateTrialComponentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateTrialComponentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateTrialComponent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::AssociateTrialComponentAsync(const AssociateTrialComponentRequest& request, const AssociateTrialComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AssociateTrialComponent(request), context);
    } );
}

BatchDescribeModelPackageOutcome SageMakerClient::BatchDescribeModelPackage(const BatchDescribeModelPackageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchDescribeModelPackage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchDescribeModelPackage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return BatchDescribeModelPackageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchDescribeModelPackageOutcomeCallable SageMakerClient::BatchDescribeModelPackageCallable(const BatchDescribeModelPackageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchDescribeModelPackageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchDescribeModelPackage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::BatchDescribeModelPackageAsync(const BatchDescribeModelPackageRequest& request, const BatchDescribeModelPackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BatchDescribeModelPackage(request), context);
    } );
}

CreateActionOutcome SageMakerClient::CreateAction(const CreateActionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateActionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateActionOutcomeCallable SageMakerClient::CreateActionCallable(const CreateActionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateActionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateActionAsync(const CreateActionRequest& request, const CreateActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateAction(request), context);
    } );
}

CreateAlgorithmOutcome SageMakerClient::CreateAlgorithm(const CreateAlgorithmRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAlgorithm, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAlgorithm, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateAlgorithmOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAlgorithmOutcomeCallable SageMakerClient::CreateAlgorithmCallable(const CreateAlgorithmRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAlgorithmOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAlgorithm(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateAlgorithmAsync(const CreateAlgorithmRequest& request, const CreateAlgorithmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateAlgorithm(request), context);
    } );
}

CreateAppOutcome SageMakerClient::CreateApp(const CreateAppRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateApp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateApp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateAppOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAppOutcomeCallable SageMakerClient::CreateAppCallable(const CreateAppRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAppOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateApp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateAppAsync(const CreateAppRequest& request, const CreateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateApp(request), context);
    } );
}

CreateAppImageConfigOutcome SageMakerClient::CreateAppImageConfig(const CreateAppImageConfigRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAppImageConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAppImageConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateAppImageConfigOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAppImageConfigOutcomeCallable SageMakerClient::CreateAppImageConfigCallable(const CreateAppImageConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAppImageConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAppImageConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateAppImageConfigAsync(const CreateAppImageConfigRequest& request, const CreateAppImageConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateAppImageConfig(request), context);
    } );
}

CreateArtifactOutcome SageMakerClient::CreateArtifact(const CreateArtifactRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateArtifact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateArtifact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateArtifactOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateArtifactOutcomeCallable SageMakerClient::CreateArtifactCallable(const CreateArtifactRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateArtifactOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateArtifact(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateArtifactAsync(const CreateArtifactRequest& request, const CreateArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateArtifact(request), context);
    } );
}

CreateAutoMLJobOutcome SageMakerClient::CreateAutoMLJob(const CreateAutoMLJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAutoMLJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAutoMLJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateAutoMLJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAutoMLJobOutcomeCallable SageMakerClient::CreateAutoMLJobCallable(const CreateAutoMLJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAutoMLJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAutoMLJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateAutoMLJobAsync(const CreateAutoMLJobRequest& request, const CreateAutoMLJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateAutoMLJob(request), context);
    } );
}

CreateCodeRepositoryOutcome SageMakerClient::CreateCodeRepository(const CreateCodeRepositoryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateCodeRepository, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateCodeRepository, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateCodeRepositoryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateCodeRepositoryOutcomeCallable SageMakerClient::CreateCodeRepositoryCallable(const CreateCodeRepositoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCodeRepositoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCodeRepository(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateCodeRepositoryAsync(const CreateCodeRepositoryRequest& request, const CreateCodeRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateCodeRepository(request), context);
    } );
}

CreateCompilationJobOutcome SageMakerClient::CreateCompilationJob(const CreateCompilationJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateCompilationJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateCompilationJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateCompilationJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateCompilationJobOutcomeCallable SageMakerClient::CreateCompilationJobCallable(const CreateCompilationJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCompilationJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCompilationJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateCompilationJobAsync(const CreateCompilationJobRequest& request, const CreateCompilationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateCompilationJob(request), context);
    } );
}

CreateContextOutcome SageMakerClient::CreateContext(const CreateContextRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateContext, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateContext, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateContextOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateContextOutcomeCallable SageMakerClient::CreateContextCallable(const CreateContextRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateContextOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateContext(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateContextAsync(const CreateContextRequest& request, const CreateContextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateContext(request), context);
    } );
}

CreateDataQualityJobDefinitionOutcome SageMakerClient::CreateDataQualityJobDefinition(const CreateDataQualityJobDefinitionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDataQualityJobDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDataQualityJobDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateDataQualityJobDefinitionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDataQualityJobDefinitionOutcomeCallable SageMakerClient::CreateDataQualityJobDefinitionCallable(const CreateDataQualityJobDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDataQualityJobDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDataQualityJobDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateDataQualityJobDefinitionAsync(const CreateDataQualityJobDefinitionRequest& request, const CreateDataQualityJobDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateDataQualityJobDefinition(request), context);
    } );
}

CreateDeviceFleetOutcome SageMakerClient::CreateDeviceFleet(const CreateDeviceFleetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDeviceFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDeviceFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateDeviceFleetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDeviceFleetOutcomeCallable SageMakerClient::CreateDeviceFleetCallable(const CreateDeviceFleetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDeviceFleetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDeviceFleet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateDeviceFleetAsync(const CreateDeviceFleetRequest& request, const CreateDeviceFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateDeviceFleet(request), context);
    } );
}

CreateDomainOutcome SageMakerClient::CreateDomain(const CreateDomainRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDomainOutcomeCallable SageMakerClient::CreateDomainCallable(const CreateDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateDomainAsync(const CreateDomainRequest& request, const CreateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateDomain(request), context);
    } );
}

CreateEdgeDeploymentPlanOutcome SageMakerClient::CreateEdgeDeploymentPlan(const CreateEdgeDeploymentPlanRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateEdgeDeploymentPlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateEdgeDeploymentPlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateEdgeDeploymentPlanOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateEdgeDeploymentPlanOutcomeCallable SageMakerClient::CreateEdgeDeploymentPlanCallable(const CreateEdgeDeploymentPlanRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateEdgeDeploymentPlanOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateEdgeDeploymentPlan(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateEdgeDeploymentPlanAsync(const CreateEdgeDeploymentPlanRequest& request, const CreateEdgeDeploymentPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateEdgeDeploymentPlan(request), context);
    } );
}

CreateEdgeDeploymentStageOutcome SageMakerClient::CreateEdgeDeploymentStage(const CreateEdgeDeploymentStageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateEdgeDeploymentStage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateEdgeDeploymentStage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateEdgeDeploymentStageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateEdgeDeploymentStageOutcomeCallable SageMakerClient::CreateEdgeDeploymentStageCallable(const CreateEdgeDeploymentStageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateEdgeDeploymentStageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateEdgeDeploymentStage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateEdgeDeploymentStageAsync(const CreateEdgeDeploymentStageRequest& request, const CreateEdgeDeploymentStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateEdgeDeploymentStage(request), context);
    } );
}

CreateEdgePackagingJobOutcome SageMakerClient::CreateEdgePackagingJob(const CreateEdgePackagingJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateEdgePackagingJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateEdgePackagingJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateEdgePackagingJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateEdgePackagingJobOutcomeCallable SageMakerClient::CreateEdgePackagingJobCallable(const CreateEdgePackagingJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateEdgePackagingJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateEdgePackagingJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateEdgePackagingJobAsync(const CreateEdgePackagingJobRequest& request, const CreateEdgePackagingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateEdgePackagingJob(request), context);
    } );
}

CreateEndpointOutcome SageMakerClient::CreateEndpoint(const CreateEndpointRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateEndpointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateEndpointOutcomeCallable SageMakerClient::CreateEndpointCallable(const CreateEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateEndpointAsync(const CreateEndpointRequest& request, const CreateEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateEndpoint(request), context);
    } );
}

CreateEndpointConfigOutcome SageMakerClient::CreateEndpointConfig(const CreateEndpointConfigRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateEndpointConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateEndpointConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateEndpointConfigOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateEndpointConfigOutcomeCallable SageMakerClient::CreateEndpointConfigCallable(const CreateEndpointConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateEndpointConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateEndpointConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateEndpointConfigAsync(const CreateEndpointConfigRequest& request, const CreateEndpointConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateEndpointConfig(request), context);
    } );
}

CreateExperimentOutcome SageMakerClient::CreateExperiment(const CreateExperimentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateExperiment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateExperiment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateExperimentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateExperimentOutcomeCallable SageMakerClient::CreateExperimentCallable(const CreateExperimentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateExperimentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateExperiment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateExperimentAsync(const CreateExperimentRequest& request, const CreateExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateExperiment(request), context);
    } );
}

CreateFeatureGroupOutcome SageMakerClient::CreateFeatureGroup(const CreateFeatureGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateFeatureGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateFeatureGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateFeatureGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateFeatureGroupOutcomeCallable SageMakerClient::CreateFeatureGroupCallable(const CreateFeatureGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFeatureGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFeatureGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateFeatureGroupAsync(const CreateFeatureGroupRequest& request, const CreateFeatureGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateFeatureGroup(request), context);
    } );
}

CreateFlowDefinitionOutcome SageMakerClient::CreateFlowDefinition(const CreateFlowDefinitionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateFlowDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateFlowDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateFlowDefinitionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateFlowDefinitionOutcomeCallable SageMakerClient::CreateFlowDefinitionCallable(const CreateFlowDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFlowDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFlowDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateFlowDefinitionAsync(const CreateFlowDefinitionRequest& request, const CreateFlowDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateFlowDefinition(request), context);
    } );
}

CreateHubOutcome SageMakerClient::CreateHub(const CreateHubRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateHub, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateHub, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateHubOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateHubOutcomeCallable SageMakerClient::CreateHubCallable(const CreateHubRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateHubOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateHub(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateHubAsync(const CreateHubRequest& request, const CreateHubResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateHub(request), context);
    } );
}

CreateHumanTaskUiOutcome SageMakerClient::CreateHumanTaskUi(const CreateHumanTaskUiRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateHumanTaskUi, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateHumanTaskUi, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateHumanTaskUiOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateHumanTaskUiOutcomeCallable SageMakerClient::CreateHumanTaskUiCallable(const CreateHumanTaskUiRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateHumanTaskUiOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateHumanTaskUi(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateHumanTaskUiAsync(const CreateHumanTaskUiRequest& request, const CreateHumanTaskUiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateHumanTaskUi(request), context);
    } );
}

CreateHyperParameterTuningJobOutcome SageMakerClient::CreateHyperParameterTuningJob(const CreateHyperParameterTuningJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateHyperParameterTuningJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateHyperParameterTuningJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateHyperParameterTuningJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateHyperParameterTuningJobOutcomeCallable SageMakerClient::CreateHyperParameterTuningJobCallable(const CreateHyperParameterTuningJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateHyperParameterTuningJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateHyperParameterTuningJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateHyperParameterTuningJobAsync(const CreateHyperParameterTuningJobRequest& request, const CreateHyperParameterTuningJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateHyperParameterTuningJob(request), context);
    } );
}

CreateImageOutcome SageMakerClient::CreateImage(const CreateImageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateImageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateImageOutcomeCallable SageMakerClient::CreateImageCallable(const CreateImageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateImageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateImage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateImageAsync(const CreateImageRequest& request, const CreateImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateImage(request), context);
    } );
}

CreateImageVersionOutcome SageMakerClient::CreateImageVersion(const CreateImageVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateImageVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateImageVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateImageVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateImageVersionOutcomeCallable SageMakerClient::CreateImageVersionCallable(const CreateImageVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateImageVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateImageVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateImageVersionAsync(const CreateImageVersionRequest& request, const CreateImageVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateImageVersion(request), context);
    } );
}

CreateInferenceExperimentOutcome SageMakerClient::CreateInferenceExperiment(const CreateInferenceExperimentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateInferenceExperiment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateInferenceExperiment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateInferenceExperimentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateInferenceExperimentOutcomeCallable SageMakerClient::CreateInferenceExperimentCallable(const CreateInferenceExperimentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateInferenceExperimentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateInferenceExperiment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateInferenceExperimentAsync(const CreateInferenceExperimentRequest& request, const CreateInferenceExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateInferenceExperiment(request), context);
    } );
}

CreateInferenceRecommendationsJobOutcome SageMakerClient::CreateInferenceRecommendationsJob(const CreateInferenceRecommendationsJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateInferenceRecommendationsJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateInferenceRecommendationsJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateInferenceRecommendationsJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateInferenceRecommendationsJobOutcomeCallable SageMakerClient::CreateInferenceRecommendationsJobCallable(const CreateInferenceRecommendationsJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateInferenceRecommendationsJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateInferenceRecommendationsJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateInferenceRecommendationsJobAsync(const CreateInferenceRecommendationsJobRequest& request, const CreateInferenceRecommendationsJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateInferenceRecommendationsJob(request), context);
    } );
}

CreateLabelingJobOutcome SageMakerClient::CreateLabelingJob(const CreateLabelingJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateLabelingJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateLabelingJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateLabelingJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateLabelingJobOutcomeCallable SageMakerClient::CreateLabelingJobCallable(const CreateLabelingJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLabelingJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLabelingJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateLabelingJobAsync(const CreateLabelingJobRequest& request, const CreateLabelingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateLabelingJob(request), context);
    } );
}

CreateModelOutcome SageMakerClient::CreateModel(const CreateModelRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateModel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateModel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateModelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateModelOutcomeCallable SageMakerClient::CreateModelCallable(const CreateModelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateModelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateModel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateModelAsync(const CreateModelRequest& request, const CreateModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateModel(request), context);
    } );
}

CreateModelBiasJobDefinitionOutcome SageMakerClient::CreateModelBiasJobDefinition(const CreateModelBiasJobDefinitionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateModelBiasJobDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateModelBiasJobDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateModelBiasJobDefinitionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateModelBiasJobDefinitionOutcomeCallable SageMakerClient::CreateModelBiasJobDefinitionCallable(const CreateModelBiasJobDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateModelBiasJobDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateModelBiasJobDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateModelBiasJobDefinitionAsync(const CreateModelBiasJobDefinitionRequest& request, const CreateModelBiasJobDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateModelBiasJobDefinition(request), context);
    } );
}

CreateModelCardOutcome SageMakerClient::CreateModelCard(const CreateModelCardRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateModelCard, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateModelCard, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateModelCardOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateModelCardOutcomeCallable SageMakerClient::CreateModelCardCallable(const CreateModelCardRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateModelCardOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateModelCard(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateModelCardAsync(const CreateModelCardRequest& request, const CreateModelCardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateModelCard(request), context);
    } );
}

CreateModelCardExportJobOutcome SageMakerClient::CreateModelCardExportJob(const CreateModelCardExportJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateModelCardExportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateModelCardExportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateModelCardExportJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateModelCardExportJobOutcomeCallable SageMakerClient::CreateModelCardExportJobCallable(const CreateModelCardExportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateModelCardExportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateModelCardExportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateModelCardExportJobAsync(const CreateModelCardExportJobRequest& request, const CreateModelCardExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateModelCardExportJob(request), context);
    } );
}

CreateModelExplainabilityJobDefinitionOutcome SageMakerClient::CreateModelExplainabilityJobDefinition(const CreateModelExplainabilityJobDefinitionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateModelExplainabilityJobDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateModelExplainabilityJobDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateModelExplainabilityJobDefinitionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateModelExplainabilityJobDefinitionOutcomeCallable SageMakerClient::CreateModelExplainabilityJobDefinitionCallable(const CreateModelExplainabilityJobDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateModelExplainabilityJobDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateModelExplainabilityJobDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateModelExplainabilityJobDefinitionAsync(const CreateModelExplainabilityJobDefinitionRequest& request, const CreateModelExplainabilityJobDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateModelExplainabilityJobDefinition(request), context);
    } );
}

CreateModelPackageOutcome SageMakerClient::CreateModelPackage(const CreateModelPackageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateModelPackage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateModelPackage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateModelPackageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateModelPackageOutcomeCallable SageMakerClient::CreateModelPackageCallable(const CreateModelPackageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateModelPackageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateModelPackage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateModelPackageAsync(const CreateModelPackageRequest& request, const CreateModelPackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateModelPackage(request), context);
    } );
}

CreateModelPackageGroupOutcome SageMakerClient::CreateModelPackageGroup(const CreateModelPackageGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateModelPackageGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateModelPackageGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateModelPackageGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateModelPackageGroupOutcomeCallable SageMakerClient::CreateModelPackageGroupCallable(const CreateModelPackageGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateModelPackageGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateModelPackageGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateModelPackageGroupAsync(const CreateModelPackageGroupRequest& request, const CreateModelPackageGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateModelPackageGroup(request), context);
    } );
}

CreateModelQualityJobDefinitionOutcome SageMakerClient::CreateModelQualityJobDefinition(const CreateModelQualityJobDefinitionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateModelQualityJobDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateModelQualityJobDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateModelQualityJobDefinitionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateModelQualityJobDefinitionOutcomeCallable SageMakerClient::CreateModelQualityJobDefinitionCallable(const CreateModelQualityJobDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateModelQualityJobDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateModelQualityJobDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateModelQualityJobDefinitionAsync(const CreateModelQualityJobDefinitionRequest& request, const CreateModelQualityJobDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateModelQualityJobDefinition(request), context);
    } );
}

CreateMonitoringScheduleOutcome SageMakerClient::CreateMonitoringSchedule(const CreateMonitoringScheduleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateMonitoringSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateMonitoringSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateMonitoringScheduleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateMonitoringScheduleOutcomeCallable SageMakerClient::CreateMonitoringScheduleCallable(const CreateMonitoringScheduleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateMonitoringScheduleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateMonitoringSchedule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateMonitoringScheduleAsync(const CreateMonitoringScheduleRequest& request, const CreateMonitoringScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateMonitoringSchedule(request), context);
    } );
}

CreateNotebookInstanceOutcome SageMakerClient::CreateNotebookInstance(const CreateNotebookInstanceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateNotebookInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateNotebookInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateNotebookInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateNotebookInstanceOutcomeCallable SageMakerClient::CreateNotebookInstanceCallable(const CreateNotebookInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateNotebookInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateNotebookInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateNotebookInstanceAsync(const CreateNotebookInstanceRequest& request, const CreateNotebookInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateNotebookInstance(request), context);
    } );
}

CreateNotebookInstanceLifecycleConfigOutcome SageMakerClient::CreateNotebookInstanceLifecycleConfig(const CreateNotebookInstanceLifecycleConfigRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateNotebookInstanceLifecycleConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateNotebookInstanceLifecycleConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateNotebookInstanceLifecycleConfigOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateNotebookInstanceLifecycleConfigOutcomeCallable SageMakerClient::CreateNotebookInstanceLifecycleConfigCallable(const CreateNotebookInstanceLifecycleConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateNotebookInstanceLifecycleConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateNotebookInstanceLifecycleConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateNotebookInstanceLifecycleConfigAsync(const CreateNotebookInstanceLifecycleConfigRequest& request, const CreateNotebookInstanceLifecycleConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateNotebookInstanceLifecycleConfig(request), context);
    } );
}

CreatePipelineOutcome SageMakerClient::CreatePipeline(const CreatePipelineRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreatePipeline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreatePipeline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreatePipelineOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePipelineOutcomeCallable SageMakerClient::CreatePipelineCallable(const CreatePipelineRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePipelineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePipeline(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreatePipelineAsync(const CreatePipelineRequest& request, const CreatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreatePipeline(request), context);
    } );
}

CreatePresignedDomainUrlOutcome SageMakerClient::CreatePresignedDomainUrl(const CreatePresignedDomainUrlRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreatePresignedDomainUrl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreatePresignedDomainUrl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreatePresignedDomainUrlOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePresignedDomainUrlOutcomeCallable SageMakerClient::CreatePresignedDomainUrlCallable(const CreatePresignedDomainUrlRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePresignedDomainUrlOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePresignedDomainUrl(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreatePresignedDomainUrlAsync(const CreatePresignedDomainUrlRequest& request, const CreatePresignedDomainUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreatePresignedDomainUrl(request), context);
    } );
}

CreatePresignedNotebookInstanceUrlOutcome SageMakerClient::CreatePresignedNotebookInstanceUrl(const CreatePresignedNotebookInstanceUrlRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreatePresignedNotebookInstanceUrl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreatePresignedNotebookInstanceUrl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreatePresignedNotebookInstanceUrlOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePresignedNotebookInstanceUrlOutcomeCallable SageMakerClient::CreatePresignedNotebookInstanceUrlCallable(const CreatePresignedNotebookInstanceUrlRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePresignedNotebookInstanceUrlOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePresignedNotebookInstanceUrl(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreatePresignedNotebookInstanceUrlAsync(const CreatePresignedNotebookInstanceUrlRequest& request, const CreatePresignedNotebookInstanceUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreatePresignedNotebookInstanceUrl(request), context);
    } );
}

CreateProcessingJobOutcome SageMakerClient::CreateProcessingJob(const CreateProcessingJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateProcessingJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateProcessingJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateProcessingJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateProcessingJobOutcomeCallable SageMakerClient::CreateProcessingJobCallable(const CreateProcessingJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateProcessingJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateProcessingJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateProcessingJobAsync(const CreateProcessingJobRequest& request, const CreateProcessingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateProcessingJob(request), context);
    } );
}

CreateProjectOutcome SageMakerClient::CreateProject(const CreateProjectRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateProjectOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateProjectOutcomeCallable SageMakerClient::CreateProjectCallable(const CreateProjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateProjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateProject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateProjectAsync(const CreateProjectRequest& request, const CreateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateProject(request), context);
    } );
}

CreateSpaceOutcome SageMakerClient::CreateSpace(const CreateSpaceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSpace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSpace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateSpaceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSpaceOutcomeCallable SageMakerClient::CreateSpaceCallable(const CreateSpaceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSpaceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSpace(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateSpaceAsync(const CreateSpaceRequest& request, const CreateSpaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateSpace(request), context);
    } );
}

CreateStudioLifecycleConfigOutcome SageMakerClient::CreateStudioLifecycleConfig(const CreateStudioLifecycleConfigRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateStudioLifecycleConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateStudioLifecycleConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateStudioLifecycleConfigOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateStudioLifecycleConfigOutcomeCallable SageMakerClient::CreateStudioLifecycleConfigCallable(const CreateStudioLifecycleConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateStudioLifecycleConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateStudioLifecycleConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateStudioLifecycleConfigAsync(const CreateStudioLifecycleConfigRequest& request, const CreateStudioLifecycleConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateStudioLifecycleConfig(request), context);
    } );
}

CreateTrainingJobOutcome SageMakerClient::CreateTrainingJob(const CreateTrainingJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTrainingJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTrainingJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateTrainingJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateTrainingJobOutcomeCallable SageMakerClient::CreateTrainingJobCallable(const CreateTrainingJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTrainingJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTrainingJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateTrainingJobAsync(const CreateTrainingJobRequest& request, const CreateTrainingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateTrainingJob(request), context);
    } );
}

CreateTransformJobOutcome SageMakerClient::CreateTransformJob(const CreateTransformJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTransformJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTransformJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateTransformJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateTransformJobOutcomeCallable SageMakerClient::CreateTransformJobCallable(const CreateTransformJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTransformJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTransformJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateTransformJobAsync(const CreateTransformJobRequest& request, const CreateTransformJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateTransformJob(request), context);
    } );
}

CreateTrialOutcome SageMakerClient::CreateTrial(const CreateTrialRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTrial, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTrial, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateTrialOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateTrialOutcomeCallable SageMakerClient::CreateTrialCallable(const CreateTrialRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTrialOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTrial(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateTrialAsync(const CreateTrialRequest& request, const CreateTrialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateTrial(request), context);
    } );
}

CreateTrialComponentOutcome SageMakerClient::CreateTrialComponent(const CreateTrialComponentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTrialComponent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTrialComponent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateTrialComponentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateTrialComponentOutcomeCallable SageMakerClient::CreateTrialComponentCallable(const CreateTrialComponentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTrialComponentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTrialComponent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateTrialComponentAsync(const CreateTrialComponentRequest& request, const CreateTrialComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateTrialComponent(request), context);
    } );
}

CreateUserProfileOutcome SageMakerClient::CreateUserProfile(const CreateUserProfileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateUserProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateUserProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateUserProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateUserProfileOutcomeCallable SageMakerClient::CreateUserProfileCallable(const CreateUserProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateUserProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateUserProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateUserProfileAsync(const CreateUserProfileRequest& request, const CreateUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateUserProfile(request), context);
    } );
}

CreateWorkforceOutcome SageMakerClient::CreateWorkforce(const CreateWorkforceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateWorkforce, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateWorkforce, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateWorkforceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateWorkforceOutcomeCallable SageMakerClient::CreateWorkforceCallable(const CreateWorkforceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateWorkforceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateWorkforce(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateWorkforceAsync(const CreateWorkforceRequest& request, const CreateWorkforceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateWorkforce(request), context);
    } );
}

CreateWorkteamOutcome SageMakerClient::CreateWorkteam(const CreateWorkteamRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateWorkteam, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateWorkteam, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateWorkteamOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateWorkteamOutcomeCallable SageMakerClient::CreateWorkteamCallable(const CreateWorkteamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateWorkteamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateWorkteam(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::CreateWorkteamAsync(const CreateWorkteamRequest& request, const CreateWorkteamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateWorkteam(request), context);
    } );
}

DeleteActionOutcome SageMakerClient::DeleteAction(const DeleteActionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteActionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteActionOutcomeCallable SageMakerClient::DeleteActionCallable(const DeleteActionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteActionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DeleteActionAsync(const DeleteActionRequest& request, const DeleteActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteAction(request), context);
    } );
}

DeleteAlgorithmOutcome SageMakerClient::DeleteAlgorithm(const DeleteAlgorithmRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAlgorithm, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAlgorithm, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteAlgorithmOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteAlgorithmOutcomeCallable SageMakerClient::DeleteAlgorithmCallable(const DeleteAlgorithmRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAlgorithmOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAlgorithm(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DeleteAlgorithmAsync(const DeleteAlgorithmRequest& request, const DeleteAlgorithmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteAlgorithm(request), context);
    } );
}

DeleteAppOutcome SageMakerClient::DeleteApp(const DeleteAppRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteApp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteApp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteAppOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteAppOutcomeCallable SageMakerClient::DeleteAppCallable(const DeleteAppRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAppOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteApp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DeleteAppAsync(const DeleteAppRequest& request, const DeleteAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteApp(request), context);
    } );
}

DeleteAppImageConfigOutcome SageMakerClient::DeleteAppImageConfig(const DeleteAppImageConfigRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAppImageConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAppImageConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteAppImageConfigOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteAppImageConfigOutcomeCallable SageMakerClient::DeleteAppImageConfigCallable(const DeleteAppImageConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAppImageConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAppImageConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DeleteAppImageConfigAsync(const DeleteAppImageConfigRequest& request, const DeleteAppImageConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteAppImageConfig(request), context);
    } );
}

DeleteArtifactOutcome SageMakerClient::DeleteArtifact(const DeleteArtifactRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteArtifact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteArtifact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteArtifactOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteArtifactOutcomeCallable SageMakerClient::DeleteArtifactCallable(const DeleteArtifactRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteArtifactOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteArtifact(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DeleteArtifactAsync(const DeleteArtifactRequest& request, const DeleteArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteArtifact(request), context);
    } );
}

DeleteAssociationOutcome SageMakerClient::DeleteAssociation(const DeleteAssociationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteAssociationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteAssociationOutcomeCallable SageMakerClient::DeleteAssociationCallable(const DeleteAssociationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAssociationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAssociation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DeleteAssociationAsync(const DeleteAssociationRequest& request, const DeleteAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteAssociation(request), context);
    } );
}

DeleteCodeRepositoryOutcome SageMakerClient::DeleteCodeRepository(const DeleteCodeRepositoryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteCodeRepository, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteCodeRepository, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteCodeRepositoryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteCodeRepositoryOutcomeCallable SageMakerClient::DeleteCodeRepositoryCallable(const DeleteCodeRepositoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCodeRepositoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCodeRepository(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DeleteCodeRepositoryAsync(const DeleteCodeRepositoryRequest& request, const DeleteCodeRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteCodeRepository(request), context);
    } );
}

DeleteContextOutcome SageMakerClient::DeleteContext(const DeleteContextRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteContext, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteContext, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteContextOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteContextOutcomeCallable SageMakerClient::DeleteContextCallable(const DeleteContextRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteContextOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteContext(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DeleteContextAsync(const DeleteContextRequest& request, const DeleteContextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteContext(request), context);
    } );
}

DeleteDataQualityJobDefinitionOutcome SageMakerClient::DeleteDataQualityJobDefinition(const DeleteDataQualityJobDefinitionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDataQualityJobDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDataQualityJobDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteDataQualityJobDefinitionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteDataQualityJobDefinitionOutcomeCallable SageMakerClient::DeleteDataQualityJobDefinitionCallable(const DeleteDataQualityJobDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDataQualityJobDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDataQualityJobDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DeleteDataQualityJobDefinitionAsync(const DeleteDataQualityJobDefinitionRequest& request, const DeleteDataQualityJobDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteDataQualityJobDefinition(request), context);
    } );
}

DeleteDeviceFleetOutcome SageMakerClient::DeleteDeviceFleet(const DeleteDeviceFleetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDeviceFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDeviceFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteDeviceFleetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteDeviceFleetOutcomeCallable SageMakerClient::DeleteDeviceFleetCallable(const DeleteDeviceFleetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDeviceFleetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDeviceFleet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DeleteDeviceFleetAsync(const DeleteDeviceFleetRequest& request, const DeleteDeviceFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteDeviceFleet(request), context);
    } );
}

DeleteDomainOutcome SageMakerClient::DeleteDomain(const DeleteDomainRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteDomainOutcomeCallable SageMakerClient::DeleteDomainCallable(const DeleteDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DeleteDomainAsync(const DeleteDomainRequest& request, const DeleteDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteDomain(request), context);
    } );
}

DeleteEdgeDeploymentPlanOutcome SageMakerClient::DeleteEdgeDeploymentPlan(const DeleteEdgeDeploymentPlanRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteEdgeDeploymentPlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteEdgeDeploymentPlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteEdgeDeploymentPlanOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteEdgeDeploymentPlanOutcomeCallable SageMakerClient::DeleteEdgeDeploymentPlanCallable(const DeleteEdgeDeploymentPlanRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEdgeDeploymentPlanOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEdgeDeploymentPlan(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DeleteEdgeDeploymentPlanAsync(const DeleteEdgeDeploymentPlanRequest& request, const DeleteEdgeDeploymentPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteEdgeDeploymentPlan(request), context);
    } );
}

DeleteEdgeDeploymentStageOutcome SageMakerClient::DeleteEdgeDeploymentStage(const DeleteEdgeDeploymentStageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteEdgeDeploymentStage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteEdgeDeploymentStage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteEdgeDeploymentStageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteEdgeDeploymentStageOutcomeCallable SageMakerClient::DeleteEdgeDeploymentStageCallable(const DeleteEdgeDeploymentStageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEdgeDeploymentStageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEdgeDeploymentStage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DeleteEdgeDeploymentStageAsync(const DeleteEdgeDeploymentStageRequest& request, const DeleteEdgeDeploymentStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteEdgeDeploymentStage(request), context);
    } );
}

DeleteEndpointOutcome SageMakerClient::DeleteEndpoint(const DeleteEndpointRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteEndpointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteEndpointOutcomeCallable SageMakerClient::DeleteEndpointCallable(const DeleteEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DeleteEndpointAsync(const DeleteEndpointRequest& request, const DeleteEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteEndpoint(request), context);
    } );
}

DeleteEndpointConfigOutcome SageMakerClient::DeleteEndpointConfig(const DeleteEndpointConfigRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteEndpointConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteEndpointConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteEndpointConfigOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteEndpointConfigOutcomeCallable SageMakerClient::DeleteEndpointConfigCallable(const DeleteEndpointConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEndpointConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEndpointConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DeleteEndpointConfigAsync(const DeleteEndpointConfigRequest& request, const DeleteEndpointConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteEndpointConfig(request), context);
    } );
}

DeleteExperimentOutcome SageMakerClient::DeleteExperiment(const DeleteExperimentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteExperiment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteExperiment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteExperimentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteExperimentOutcomeCallable SageMakerClient::DeleteExperimentCallable(const DeleteExperimentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteExperimentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteExperiment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DeleteExperimentAsync(const DeleteExperimentRequest& request, const DeleteExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteExperiment(request), context);
    } );
}

DeleteFeatureGroupOutcome SageMakerClient::DeleteFeatureGroup(const DeleteFeatureGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteFeatureGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteFeatureGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteFeatureGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteFeatureGroupOutcomeCallable SageMakerClient::DeleteFeatureGroupCallable(const DeleteFeatureGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFeatureGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFeatureGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DeleteFeatureGroupAsync(const DeleteFeatureGroupRequest& request, const DeleteFeatureGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteFeatureGroup(request), context);
    } );
}

DeleteFlowDefinitionOutcome SageMakerClient::DeleteFlowDefinition(const DeleteFlowDefinitionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteFlowDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteFlowDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteFlowDefinitionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteFlowDefinitionOutcomeCallable SageMakerClient::DeleteFlowDefinitionCallable(const DeleteFlowDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFlowDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFlowDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DeleteFlowDefinitionAsync(const DeleteFlowDefinitionRequest& request, const DeleteFlowDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteFlowDefinition(request), context);
    } );
}

DeleteHubOutcome SageMakerClient::DeleteHub(const DeleteHubRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteHub, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteHub, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteHubOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteHubOutcomeCallable SageMakerClient::DeleteHubCallable(const DeleteHubRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteHubOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteHub(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DeleteHubAsync(const DeleteHubRequest& request, const DeleteHubResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteHub(request), context);
    } );
}

DeleteHubContentOutcome SageMakerClient::DeleteHubContent(const DeleteHubContentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteHubContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteHubContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteHubContentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteHubContentOutcomeCallable SageMakerClient::DeleteHubContentCallable(const DeleteHubContentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteHubContentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteHubContent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DeleteHubContentAsync(const DeleteHubContentRequest& request, const DeleteHubContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteHubContent(request), context);
    } );
}

DeleteHumanTaskUiOutcome SageMakerClient::DeleteHumanTaskUi(const DeleteHumanTaskUiRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteHumanTaskUi, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteHumanTaskUi, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteHumanTaskUiOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteHumanTaskUiOutcomeCallable SageMakerClient::DeleteHumanTaskUiCallable(const DeleteHumanTaskUiRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteHumanTaskUiOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteHumanTaskUi(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DeleteHumanTaskUiAsync(const DeleteHumanTaskUiRequest& request, const DeleteHumanTaskUiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteHumanTaskUi(request), context);
    } );
}

DeleteImageOutcome SageMakerClient::DeleteImage(const DeleteImageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteImageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteImageOutcomeCallable SageMakerClient::DeleteImageCallable(const DeleteImageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteImageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteImage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DeleteImageAsync(const DeleteImageRequest& request, const DeleteImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteImage(request), context);
    } );
}

DeleteImageVersionOutcome SageMakerClient::DeleteImageVersion(const DeleteImageVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteImageVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteImageVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteImageVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteImageVersionOutcomeCallable SageMakerClient::DeleteImageVersionCallable(const DeleteImageVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteImageVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteImageVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DeleteImageVersionAsync(const DeleteImageVersionRequest& request, const DeleteImageVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteImageVersion(request), context);
    } );
}

DeleteInferenceExperimentOutcome SageMakerClient::DeleteInferenceExperiment(const DeleteInferenceExperimentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteInferenceExperiment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteInferenceExperiment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteInferenceExperimentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteInferenceExperimentOutcomeCallable SageMakerClient::DeleteInferenceExperimentCallable(const DeleteInferenceExperimentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteInferenceExperimentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteInferenceExperiment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DeleteInferenceExperimentAsync(const DeleteInferenceExperimentRequest& request, const DeleteInferenceExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteInferenceExperiment(request), context);
    } );
}

DeleteModelOutcome SageMakerClient::DeleteModel(const DeleteModelRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteModel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteModel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteModelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteModelOutcomeCallable SageMakerClient::DeleteModelCallable(const DeleteModelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteModelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteModel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DeleteModelAsync(const DeleteModelRequest& request, const DeleteModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteModel(request), context);
    } );
}

DeleteModelBiasJobDefinitionOutcome SageMakerClient::DeleteModelBiasJobDefinition(const DeleteModelBiasJobDefinitionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteModelBiasJobDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteModelBiasJobDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteModelBiasJobDefinitionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteModelBiasJobDefinitionOutcomeCallable SageMakerClient::DeleteModelBiasJobDefinitionCallable(const DeleteModelBiasJobDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteModelBiasJobDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteModelBiasJobDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DeleteModelBiasJobDefinitionAsync(const DeleteModelBiasJobDefinitionRequest& request, const DeleteModelBiasJobDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteModelBiasJobDefinition(request), context);
    } );
}

DeleteModelCardOutcome SageMakerClient::DeleteModelCard(const DeleteModelCardRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteModelCard, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteModelCard, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteModelCardOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteModelCardOutcomeCallable SageMakerClient::DeleteModelCardCallable(const DeleteModelCardRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteModelCardOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteModelCard(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DeleteModelCardAsync(const DeleteModelCardRequest& request, const DeleteModelCardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteModelCard(request), context);
    } );
}

DeleteModelExplainabilityJobDefinitionOutcome SageMakerClient::DeleteModelExplainabilityJobDefinition(const DeleteModelExplainabilityJobDefinitionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteModelExplainabilityJobDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteModelExplainabilityJobDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteModelExplainabilityJobDefinitionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteModelExplainabilityJobDefinitionOutcomeCallable SageMakerClient::DeleteModelExplainabilityJobDefinitionCallable(const DeleteModelExplainabilityJobDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteModelExplainabilityJobDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteModelExplainabilityJobDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DeleteModelExplainabilityJobDefinitionAsync(const DeleteModelExplainabilityJobDefinitionRequest& request, const DeleteModelExplainabilityJobDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteModelExplainabilityJobDefinition(request), context);
    } );
}

DeleteModelPackageOutcome SageMakerClient::DeleteModelPackage(const DeleteModelPackageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteModelPackage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteModelPackage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteModelPackageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteModelPackageOutcomeCallable SageMakerClient::DeleteModelPackageCallable(const DeleteModelPackageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteModelPackageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteModelPackage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DeleteModelPackageAsync(const DeleteModelPackageRequest& request, const DeleteModelPackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteModelPackage(request), context);
    } );
}

DeleteModelPackageGroupOutcome SageMakerClient::DeleteModelPackageGroup(const DeleteModelPackageGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteModelPackageGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteModelPackageGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteModelPackageGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteModelPackageGroupOutcomeCallable SageMakerClient::DeleteModelPackageGroupCallable(const DeleteModelPackageGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteModelPackageGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteModelPackageGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DeleteModelPackageGroupAsync(const DeleteModelPackageGroupRequest& request, const DeleteModelPackageGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteModelPackageGroup(request), context);
    } );
}

DeleteModelPackageGroupPolicyOutcome SageMakerClient::DeleteModelPackageGroupPolicy(const DeleteModelPackageGroupPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteModelPackageGroupPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteModelPackageGroupPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteModelPackageGroupPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteModelPackageGroupPolicyOutcomeCallable SageMakerClient::DeleteModelPackageGroupPolicyCallable(const DeleteModelPackageGroupPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteModelPackageGroupPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteModelPackageGroupPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DeleteModelPackageGroupPolicyAsync(const DeleteModelPackageGroupPolicyRequest& request, const DeleteModelPackageGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteModelPackageGroupPolicy(request), context);
    } );
}

DeleteModelQualityJobDefinitionOutcome SageMakerClient::DeleteModelQualityJobDefinition(const DeleteModelQualityJobDefinitionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteModelQualityJobDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteModelQualityJobDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteModelQualityJobDefinitionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteModelQualityJobDefinitionOutcomeCallable SageMakerClient::DeleteModelQualityJobDefinitionCallable(const DeleteModelQualityJobDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteModelQualityJobDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteModelQualityJobDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DeleteModelQualityJobDefinitionAsync(const DeleteModelQualityJobDefinitionRequest& request, const DeleteModelQualityJobDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteModelQualityJobDefinition(request), context);
    } );
}

DeleteMonitoringScheduleOutcome SageMakerClient::DeleteMonitoringSchedule(const DeleteMonitoringScheduleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteMonitoringSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteMonitoringSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteMonitoringScheduleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteMonitoringScheduleOutcomeCallable SageMakerClient::DeleteMonitoringScheduleCallable(const DeleteMonitoringScheduleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteMonitoringScheduleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteMonitoringSchedule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DeleteMonitoringScheduleAsync(const DeleteMonitoringScheduleRequest& request, const DeleteMonitoringScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteMonitoringSchedule(request), context);
    } );
}

DeleteNotebookInstanceOutcome SageMakerClient::DeleteNotebookInstance(const DeleteNotebookInstanceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteNotebookInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteNotebookInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteNotebookInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteNotebookInstanceOutcomeCallable SageMakerClient::DeleteNotebookInstanceCallable(const DeleteNotebookInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteNotebookInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteNotebookInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DeleteNotebookInstanceAsync(const DeleteNotebookInstanceRequest& request, const DeleteNotebookInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteNotebookInstance(request), context);
    } );
}

DeleteNotebookInstanceLifecycleConfigOutcome SageMakerClient::DeleteNotebookInstanceLifecycleConfig(const DeleteNotebookInstanceLifecycleConfigRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteNotebookInstanceLifecycleConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteNotebookInstanceLifecycleConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteNotebookInstanceLifecycleConfigOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteNotebookInstanceLifecycleConfigOutcomeCallable SageMakerClient::DeleteNotebookInstanceLifecycleConfigCallable(const DeleteNotebookInstanceLifecycleConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteNotebookInstanceLifecycleConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteNotebookInstanceLifecycleConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DeleteNotebookInstanceLifecycleConfigAsync(const DeleteNotebookInstanceLifecycleConfigRequest& request, const DeleteNotebookInstanceLifecycleConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteNotebookInstanceLifecycleConfig(request), context);
    } );
}

DeletePipelineOutcome SageMakerClient::DeletePipeline(const DeletePipelineRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeletePipeline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeletePipeline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeletePipelineOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeletePipelineOutcomeCallable SageMakerClient::DeletePipelineCallable(const DeletePipelineRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePipelineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePipeline(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DeletePipelineAsync(const DeletePipelineRequest& request, const DeletePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeletePipeline(request), context);
    } );
}

DeleteProjectOutcome SageMakerClient::DeleteProject(const DeleteProjectRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteProjectOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteProjectOutcomeCallable SageMakerClient::DeleteProjectCallable(const DeleteProjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteProjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteProject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DeleteProjectAsync(const DeleteProjectRequest& request, const DeleteProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteProject(request), context);
    } );
}

DeleteSpaceOutcome SageMakerClient::DeleteSpace(const DeleteSpaceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSpace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteSpace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteSpaceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteSpaceOutcomeCallable SageMakerClient::DeleteSpaceCallable(const DeleteSpaceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSpaceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSpace(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DeleteSpaceAsync(const DeleteSpaceRequest& request, const DeleteSpaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteSpace(request), context);
    } );
}

DeleteStudioLifecycleConfigOutcome SageMakerClient::DeleteStudioLifecycleConfig(const DeleteStudioLifecycleConfigRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteStudioLifecycleConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteStudioLifecycleConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteStudioLifecycleConfigOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteStudioLifecycleConfigOutcomeCallable SageMakerClient::DeleteStudioLifecycleConfigCallable(const DeleteStudioLifecycleConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteStudioLifecycleConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteStudioLifecycleConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DeleteStudioLifecycleConfigAsync(const DeleteStudioLifecycleConfigRequest& request, const DeleteStudioLifecycleConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteStudioLifecycleConfig(request), context);
    } );
}

DeleteTagsOutcome SageMakerClient::DeleteTags(const DeleteTagsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteTagsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteTagsOutcomeCallable SageMakerClient::DeleteTagsCallable(const DeleteTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DeleteTagsAsync(const DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteTags(request), context);
    } );
}

DeleteTrialOutcome SageMakerClient::DeleteTrial(const DeleteTrialRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTrial, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTrial, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteTrialOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteTrialOutcomeCallable SageMakerClient::DeleteTrialCallable(const DeleteTrialRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTrialOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTrial(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DeleteTrialAsync(const DeleteTrialRequest& request, const DeleteTrialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteTrial(request), context);
    } );
}

DeleteTrialComponentOutcome SageMakerClient::DeleteTrialComponent(const DeleteTrialComponentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTrialComponent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTrialComponent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteTrialComponentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteTrialComponentOutcomeCallable SageMakerClient::DeleteTrialComponentCallable(const DeleteTrialComponentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTrialComponentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTrialComponent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DeleteTrialComponentAsync(const DeleteTrialComponentRequest& request, const DeleteTrialComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteTrialComponent(request), context);
    } );
}

DeleteUserProfileOutcome SageMakerClient::DeleteUserProfile(const DeleteUserProfileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteUserProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteUserProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteUserProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteUserProfileOutcomeCallable SageMakerClient::DeleteUserProfileCallable(const DeleteUserProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteUserProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteUserProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DeleteUserProfileAsync(const DeleteUserProfileRequest& request, const DeleteUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteUserProfile(request), context);
    } );
}

DeleteWorkforceOutcome SageMakerClient::DeleteWorkforce(const DeleteWorkforceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteWorkforce, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteWorkforce, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteWorkforceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteWorkforceOutcomeCallable SageMakerClient::DeleteWorkforceCallable(const DeleteWorkforceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteWorkforceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteWorkforce(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DeleteWorkforceAsync(const DeleteWorkforceRequest& request, const DeleteWorkforceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteWorkforce(request), context);
    } );
}

DeleteWorkteamOutcome SageMakerClient::DeleteWorkteam(const DeleteWorkteamRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteWorkteam, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteWorkteam, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteWorkteamOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteWorkteamOutcomeCallable SageMakerClient::DeleteWorkteamCallable(const DeleteWorkteamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteWorkteamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteWorkteam(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DeleteWorkteamAsync(const DeleteWorkteamRequest& request, const DeleteWorkteamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteWorkteam(request), context);
    } );
}

DeregisterDevicesOutcome SageMakerClient::DeregisterDevices(const DeregisterDevicesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeregisterDevices, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeregisterDevices, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeregisterDevicesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeregisterDevicesOutcomeCallable SageMakerClient::DeregisterDevicesCallable(const DeregisterDevicesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeregisterDevicesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeregisterDevices(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DeregisterDevicesAsync(const DeregisterDevicesRequest& request, const DeregisterDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeregisterDevices(request), context);
    } );
}

DescribeActionOutcome SageMakerClient::DescribeAction(const DescribeActionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeActionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeActionOutcomeCallable SageMakerClient::DescribeActionCallable(const DescribeActionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeActionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeActionAsync(const DescribeActionRequest& request, const DescribeActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeAction(request), context);
    } );
}

DescribeAlgorithmOutcome SageMakerClient::DescribeAlgorithm(const DescribeAlgorithmRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAlgorithm, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAlgorithm, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeAlgorithmOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAlgorithmOutcomeCallable SageMakerClient::DescribeAlgorithmCallable(const DescribeAlgorithmRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAlgorithmOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAlgorithm(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeAlgorithmAsync(const DescribeAlgorithmRequest& request, const DescribeAlgorithmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeAlgorithm(request), context);
    } );
}

DescribeAppOutcome SageMakerClient::DescribeApp(const DescribeAppRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeApp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeApp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeAppOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAppOutcomeCallable SageMakerClient::DescribeAppCallable(const DescribeAppRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAppOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeApp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeAppAsync(const DescribeAppRequest& request, const DescribeAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeApp(request), context);
    } );
}

DescribeAppImageConfigOutcome SageMakerClient::DescribeAppImageConfig(const DescribeAppImageConfigRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAppImageConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAppImageConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeAppImageConfigOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAppImageConfigOutcomeCallable SageMakerClient::DescribeAppImageConfigCallable(const DescribeAppImageConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAppImageConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAppImageConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeAppImageConfigAsync(const DescribeAppImageConfigRequest& request, const DescribeAppImageConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeAppImageConfig(request), context);
    } );
}

DescribeArtifactOutcome SageMakerClient::DescribeArtifact(const DescribeArtifactRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeArtifact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeArtifact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeArtifactOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeArtifactOutcomeCallable SageMakerClient::DescribeArtifactCallable(const DescribeArtifactRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeArtifactOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeArtifact(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeArtifactAsync(const DescribeArtifactRequest& request, const DescribeArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeArtifact(request), context);
    } );
}

DescribeAutoMLJobOutcome SageMakerClient::DescribeAutoMLJob(const DescribeAutoMLJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAutoMLJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAutoMLJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeAutoMLJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAutoMLJobOutcomeCallable SageMakerClient::DescribeAutoMLJobCallable(const DescribeAutoMLJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAutoMLJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAutoMLJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeAutoMLJobAsync(const DescribeAutoMLJobRequest& request, const DescribeAutoMLJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeAutoMLJob(request), context);
    } );
}

DescribeCodeRepositoryOutcome SageMakerClient::DescribeCodeRepository(const DescribeCodeRepositoryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeCodeRepository, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeCodeRepository, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeCodeRepositoryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeCodeRepositoryOutcomeCallable SageMakerClient::DescribeCodeRepositoryCallable(const DescribeCodeRepositoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCodeRepositoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCodeRepository(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeCodeRepositoryAsync(const DescribeCodeRepositoryRequest& request, const DescribeCodeRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeCodeRepository(request), context);
    } );
}

DescribeCompilationJobOutcome SageMakerClient::DescribeCompilationJob(const DescribeCompilationJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeCompilationJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeCompilationJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeCompilationJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeCompilationJobOutcomeCallable SageMakerClient::DescribeCompilationJobCallable(const DescribeCompilationJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCompilationJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCompilationJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeCompilationJobAsync(const DescribeCompilationJobRequest& request, const DescribeCompilationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeCompilationJob(request), context);
    } );
}

DescribeContextOutcome SageMakerClient::DescribeContext(const DescribeContextRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeContext, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeContext, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeContextOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeContextOutcomeCallable SageMakerClient::DescribeContextCallable(const DescribeContextRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeContextOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeContext(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeContextAsync(const DescribeContextRequest& request, const DescribeContextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeContext(request), context);
    } );
}

DescribeDataQualityJobDefinitionOutcome SageMakerClient::DescribeDataQualityJobDefinition(const DescribeDataQualityJobDefinitionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDataQualityJobDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeDataQualityJobDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeDataQualityJobDefinitionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeDataQualityJobDefinitionOutcomeCallable SageMakerClient::DescribeDataQualityJobDefinitionCallable(const DescribeDataQualityJobDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDataQualityJobDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDataQualityJobDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeDataQualityJobDefinitionAsync(const DescribeDataQualityJobDefinitionRequest& request, const DescribeDataQualityJobDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeDataQualityJobDefinition(request), context);
    } );
}

DescribeDeviceOutcome SageMakerClient::DescribeDevice(const DescribeDeviceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDevice, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeDevice, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeDeviceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeDeviceOutcomeCallable SageMakerClient::DescribeDeviceCallable(const DescribeDeviceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDeviceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDevice(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeDeviceAsync(const DescribeDeviceRequest& request, const DescribeDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeDevice(request), context);
    } );
}

DescribeDeviceFleetOutcome SageMakerClient::DescribeDeviceFleet(const DescribeDeviceFleetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDeviceFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeDeviceFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeDeviceFleetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeDeviceFleetOutcomeCallable SageMakerClient::DescribeDeviceFleetCallable(const DescribeDeviceFleetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDeviceFleetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDeviceFleet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeDeviceFleetAsync(const DescribeDeviceFleetRequest& request, const DescribeDeviceFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeDeviceFleet(request), context);
    } );
}

DescribeDomainOutcome SageMakerClient::DescribeDomain(const DescribeDomainRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeDomainOutcomeCallable SageMakerClient::DescribeDomainCallable(const DescribeDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeDomainAsync(const DescribeDomainRequest& request, const DescribeDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeDomain(request), context);
    } );
}

DescribeEdgeDeploymentPlanOutcome SageMakerClient::DescribeEdgeDeploymentPlan(const DescribeEdgeDeploymentPlanRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeEdgeDeploymentPlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeEdgeDeploymentPlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeEdgeDeploymentPlanOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEdgeDeploymentPlanOutcomeCallable SageMakerClient::DescribeEdgeDeploymentPlanCallable(const DescribeEdgeDeploymentPlanRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEdgeDeploymentPlanOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEdgeDeploymentPlan(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeEdgeDeploymentPlanAsync(const DescribeEdgeDeploymentPlanRequest& request, const DescribeEdgeDeploymentPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeEdgeDeploymentPlan(request), context);
    } );
}

DescribeEdgePackagingJobOutcome SageMakerClient::DescribeEdgePackagingJob(const DescribeEdgePackagingJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeEdgePackagingJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeEdgePackagingJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeEdgePackagingJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEdgePackagingJobOutcomeCallable SageMakerClient::DescribeEdgePackagingJobCallable(const DescribeEdgePackagingJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEdgePackagingJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEdgePackagingJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeEdgePackagingJobAsync(const DescribeEdgePackagingJobRequest& request, const DescribeEdgePackagingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeEdgePackagingJob(request), context);
    } );
}

DescribeEndpointOutcome SageMakerClient::DescribeEndpoint(const DescribeEndpointRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeEndpointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEndpointOutcomeCallable SageMakerClient::DescribeEndpointCallable(const DescribeEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeEndpointAsync(const DescribeEndpointRequest& request, const DescribeEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeEndpoint(request), context);
    } );
}

DescribeEndpointConfigOutcome SageMakerClient::DescribeEndpointConfig(const DescribeEndpointConfigRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeEndpointConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeEndpointConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeEndpointConfigOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEndpointConfigOutcomeCallable SageMakerClient::DescribeEndpointConfigCallable(const DescribeEndpointConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEndpointConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEndpointConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeEndpointConfigAsync(const DescribeEndpointConfigRequest& request, const DescribeEndpointConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeEndpointConfig(request), context);
    } );
}

DescribeExperimentOutcome SageMakerClient::DescribeExperiment(const DescribeExperimentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeExperiment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeExperiment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeExperimentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeExperimentOutcomeCallable SageMakerClient::DescribeExperimentCallable(const DescribeExperimentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeExperimentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeExperiment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeExperimentAsync(const DescribeExperimentRequest& request, const DescribeExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeExperiment(request), context);
    } );
}

DescribeFeatureGroupOutcome SageMakerClient::DescribeFeatureGroup(const DescribeFeatureGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeFeatureGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeFeatureGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeFeatureGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeFeatureGroupOutcomeCallable SageMakerClient::DescribeFeatureGroupCallable(const DescribeFeatureGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFeatureGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFeatureGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeFeatureGroupAsync(const DescribeFeatureGroupRequest& request, const DescribeFeatureGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeFeatureGroup(request), context);
    } );
}

DescribeFeatureMetadataOutcome SageMakerClient::DescribeFeatureMetadata(const DescribeFeatureMetadataRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeFeatureMetadata, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeFeatureMetadata, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeFeatureMetadataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeFeatureMetadataOutcomeCallable SageMakerClient::DescribeFeatureMetadataCallable(const DescribeFeatureMetadataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFeatureMetadataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFeatureMetadata(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeFeatureMetadataAsync(const DescribeFeatureMetadataRequest& request, const DescribeFeatureMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeFeatureMetadata(request), context);
    } );
}

DescribeFlowDefinitionOutcome SageMakerClient::DescribeFlowDefinition(const DescribeFlowDefinitionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeFlowDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeFlowDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeFlowDefinitionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeFlowDefinitionOutcomeCallable SageMakerClient::DescribeFlowDefinitionCallable(const DescribeFlowDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFlowDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFlowDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeFlowDefinitionAsync(const DescribeFlowDefinitionRequest& request, const DescribeFlowDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeFlowDefinition(request), context);
    } );
}

DescribeHubOutcome SageMakerClient::DescribeHub(const DescribeHubRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeHub, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeHub, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeHubOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeHubOutcomeCallable SageMakerClient::DescribeHubCallable(const DescribeHubRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeHubOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeHub(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeHubAsync(const DescribeHubRequest& request, const DescribeHubResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeHub(request), context);
    } );
}

DescribeHubContentOutcome SageMakerClient::DescribeHubContent(const DescribeHubContentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeHubContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeHubContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeHubContentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeHubContentOutcomeCallable SageMakerClient::DescribeHubContentCallable(const DescribeHubContentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeHubContentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeHubContent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeHubContentAsync(const DescribeHubContentRequest& request, const DescribeHubContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeHubContent(request), context);
    } );
}

DescribeHumanTaskUiOutcome SageMakerClient::DescribeHumanTaskUi(const DescribeHumanTaskUiRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeHumanTaskUi, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeHumanTaskUi, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeHumanTaskUiOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeHumanTaskUiOutcomeCallable SageMakerClient::DescribeHumanTaskUiCallable(const DescribeHumanTaskUiRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeHumanTaskUiOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeHumanTaskUi(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeHumanTaskUiAsync(const DescribeHumanTaskUiRequest& request, const DescribeHumanTaskUiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeHumanTaskUi(request), context);
    } );
}

DescribeHyperParameterTuningJobOutcome SageMakerClient::DescribeHyperParameterTuningJob(const DescribeHyperParameterTuningJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeHyperParameterTuningJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeHyperParameterTuningJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeHyperParameterTuningJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeHyperParameterTuningJobOutcomeCallable SageMakerClient::DescribeHyperParameterTuningJobCallable(const DescribeHyperParameterTuningJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeHyperParameterTuningJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeHyperParameterTuningJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeHyperParameterTuningJobAsync(const DescribeHyperParameterTuningJobRequest& request, const DescribeHyperParameterTuningJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeHyperParameterTuningJob(request), context);
    } );
}

DescribeImageOutcome SageMakerClient::DescribeImage(const DescribeImageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeImageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeImageOutcomeCallable SageMakerClient::DescribeImageCallable(const DescribeImageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeImageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeImage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeImageAsync(const DescribeImageRequest& request, const DescribeImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeImage(request), context);
    } );
}

DescribeImageVersionOutcome SageMakerClient::DescribeImageVersion(const DescribeImageVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeImageVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeImageVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeImageVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeImageVersionOutcomeCallable SageMakerClient::DescribeImageVersionCallable(const DescribeImageVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeImageVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeImageVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeImageVersionAsync(const DescribeImageVersionRequest& request, const DescribeImageVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeImageVersion(request), context);
    } );
}

DescribeInferenceExperimentOutcome SageMakerClient::DescribeInferenceExperiment(const DescribeInferenceExperimentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeInferenceExperiment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeInferenceExperiment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeInferenceExperimentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeInferenceExperimentOutcomeCallable SageMakerClient::DescribeInferenceExperimentCallable(const DescribeInferenceExperimentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeInferenceExperimentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeInferenceExperiment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeInferenceExperimentAsync(const DescribeInferenceExperimentRequest& request, const DescribeInferenceExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeInferenceExperiment(request), context);
    } );
}

DescribeInferenceRecommendationsJobOutcome SageMakerClient::DescribeInferenceRecommendationsJob(const DescribeInferenceRecommendationsJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeInferenceRecommendationsJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeInferenceRecommendationsJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeInferenceRecommendationsJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeInferenceRecommendationsJobOutcomeCallable SageMakerClient::DescribeInferenceRecommendationsJobCallable(const DescribeInferenceRecommendationsJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeInferenceRecommendationsJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeInferenceRecommendationsJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeInferenceRecommendationsJobAsync(const DescribeInferenceRecommendationsJobRequest& request, const DescribeInferenceRecommendationsJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeInferenceRecommendationsJob(request), context);
    } );
}

DescribeLabelingJobOutcome SageMakerClient::DescribeLabelingJob(const DescribeLabelingJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeLabelingJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeLabelingJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeLabelingJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeLabelingJobOutcomeCallable SageMakerClient::DescribeLabelingJobCallable(const DescribeLabelingJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLabelingJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLabelingJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeLabelingJobAsync(const DescribeLabelingJobRequest& request, const DescribeLabelingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeLabelingJob(request), context);
    } );
}

DescribeLineageGroupOutcome SageMakerClient::DescribeLineageGroup(const DescribeLineageGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeLineageGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeLineageGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeLineageGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeLineageGroupOutcomeCallable SageMakerClient::DescribeLineageGroupCallable(const DescribeLineageGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLineageGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLineageGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeLineageGroupAsync(const DescribeLineageGroupRequest& request, const DescribeLineageGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeLineageGroup(request), context);
    } );
}

DescribeModelOutcome SageMakerClient::DescribeModel(const DescribeModelRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeModel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeModel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeModelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeModelOutcomeCallable SageMakerClient::DescribeModelCallable(const DescribeModelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeModelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeModel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeModelAsync(const DescribeModelRequest& request, const DescribeModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeModel(request), context);
    } );
}

DescribeModelBiasJobDefinitionOutcome SageMakerClient::DescribeModelBiasJobDefinition(const DescribeModelBiasJobDefinitionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeModelBiasJobDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeModelBiasJobDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeModelBiasJobDefinitionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeModelBiasJobDefinitionOutcomeCallable SageMakerClient::DescribeModelBiasJobDefinitionCallable(const DescribeModelBiasJobDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeModelBiasJobDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeModelBiasJobDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeModelBiasJobDefinitionAsync(const DescribeModelBiasJobDefinitionRequest& request, const DescribeModelBiasJobDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeModelBiasJobDefinition(request), context);
    } );
}

DescribeModelCardOutcome SageMakerClient::DescribeModelCard(const DescribeModelCardRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeModelCard, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeModelCard, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeModelCardOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeModelCardOutcomeCallable SageMakerClient::DescribeModelCardCallable(const DescribeModelCardRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeModelCardOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeModelCard(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeModelCardAsync(const DescribeModelCardRequest& request, const DescribeModelCardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeModelCard(request), context);
    } );
}

DescribeModelCardExportJobOutcome SageMakerClient::DescribeModelCardExportJob(const DescribeModelCardExportJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeModelCardExportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeModelCardExportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeModelCardExportJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeModelCardExportJobOutcomeCallable SageMakerClient::DescribeModelCardExportJobCallable(const DescribeModelCardExportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeModelCardExportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeModelCardExportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeModelCardExportJobAsync(const DescribeModelCardExportJobRequest& request, const DescribeModelCardExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeModelCardExportJob(request), context);
    } );
}

DescribeModelExplainabilityJobDefinitionOutcome SageMakerClient::DescribeModelExplainabilityJobDefinition(const DescribeModelExplainabilityJobDefinitionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeModelExplainabilityJobDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeModelExplainabilityJobDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeModelExplainabilityJobDefinitionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeModelExplainabilityJobDefinitionOutcomeCallable SageMakerClient::DescribeModelExplainabilityJobDefinitionCallable(const DescribeModelExplainabilityJobDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeModelExplainabilityJobDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeModelExplainabilityJobDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeModelExplainabilityJobDefinitionAsync(const DescribeModelExplainabilityJobDefinitionRequest& request, const DescribeModelExplainabilityJobDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeModelExplainabilityJobDefinition(request), context);
    } );
}

DescribeModelPackageOutcome SageMakerClient::DescribeModelPackage(const DescribeModelPackageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeModelPackage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeModelPackage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeModelPackageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeModelPackageOutcomeCallable SageMakerClient::DescribeModelPackageCallable(const DescribeModelPackageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeModelPackageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeModelPackage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeModelPackageAsync(const DescribeModelPackageRequest& request, const DescribeModelPackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeModelPackage(request), context);
    } );
}

DescribeModelPackageGroupOutcome SageMakerClient::DescribeModelPackageGroup(const DescribeModelPackageGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeModelPackageGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeModelPackageGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeModelPackageGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeModelPackageGroupOutcomeCallable SageMakerClient::DescribeModelPackageGroupCallable(const DescribeModelPackageGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeModelPackageGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeModelPackageGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeModelPackageGroupAsync(const DescribeModelPackageGroupRequest& request, const DescribeModelPackageGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeModelPackageGroup(request), context);
    } );
}

DescribeModelQualityJobDefinitionOutcome SageMakerClient::DescribeModelQualityJobDefinition(const DescribeModelQualityJobDefinitionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeModelQualityJobDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeModelQualityJobDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeModelQualityJobDefinitionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeModelQualityJobDefinitionOutcomeCallable SageMakerClient::DescribeModelQualityJobDefinitionCallable(const DescribeModelQualityJobDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeModelQualityJobDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeModelQualityJobDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeModelQualityJobDefinitionAsync(const DescribeModelQualityJobDefinitionRequest& request, const DescribeModelQualityJobDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeModelQualityJobDefinition(request), context);
    } );
}

DescribeMonitoringScheduleOutcome SageMakerClient::DescribeMonitoringSchedule(const DescribeMonitoringScheduleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeMonitoringSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeMonitoringSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeMonitoringScheduleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeMonitoringScheduleOutcomeCallable SageMakerClient::DescribeMonitoringScheduleCallable(const DescribeMonitoringScheduleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeMonitoringScheduleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeMonitoringSchedule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeMonitoringScheduleAsync(const DescribeMonitoringScheduleRequest& request, const DescribeMonitoringScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeMonitoringSchedule(request), context);
    } );
}

DescribeNotebookInstanceOutcome SageMakerClient::DescribeNotebookInstance(const DescribeNotebookInstanceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeNotebookInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeNotebookInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeNotebookInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeNotebookInstanceOutcomeCallable SageMakerClient::DescribeNotebookInstanceCallable(const DescribeNotebookInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeNotebookInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeNotebookInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeNotebookInstanceAsync(const DescribeNotebookInstanceRequest& request, const DescribeNotebookInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeNotebookInstance(request), context);
    } );
}

DescribeNotebookInstanceLifecycleConfigOutcome SageMakerClient::DescribeNotebookInstanceLifecycleConfig(const DescribeNotebookInstanceLifecycleConfigRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeNotebookInstanceLifecycleConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeNotebookInstanceLifecycleConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeNotebookInstanceLifecycleConfigOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeNotebookInstanceLifecycleConfigOutcomeCallable SageMakerClient::DescribeNotebookInstanceLifecycleConfigCallable(const DescribeNotebookInstanceLifecycleConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeNotebookInstanceLifecycleConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeNotebookInstanceLifecycleConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeNotebookInstanceLifecycleConfigAsync(const DescribeNotebookInstanceLifecycleConfigRequest& request, const DescribeNotebookInstanceLifecycleConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeNotebookInstanceLifecycleConfig(request), context);
    } );
}

DescribePipelineOutcome SageMakerClient::DescribePipeline(const DescribePipelineRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribePipeline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribePipeline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribePipelineOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribePipelineOutcomeCallable SageMakerClient::DescribePipelineCallable(const DescribePipelineRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePipelineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePipeline(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribePipelineAsync(const DescribePipelineRequest& request, const DescribePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribePipeline(request), context);
    } );
}

DescribePipelineDefinitionForExecutionOutcome SageMakerClient::DescribePipelineDefinitionForExecution(const DescribePipelineDefinitionForExecutionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribePipelineDefinitionForExecution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribePipelineDefinitionForExecution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribePipelineDefinitionForExecutionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribePipelineDefinitionForExecutionOutcomeCallable SageMakerClient::DescribePipelineDefinitionForExecutionCallable(const DescribePipelineDefinitionForExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePipelineDefinitionForExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePipelineDefinitionForExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribePipelineDefinitionForExecutionAsync(const DescribePipelineDefinitionForExecutionRequest& request, const DescribePipelineDefinitionForExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribePipelineDefinitionForExecution(request), context);
    } );
}

DescribePipelineExecutionOutcome SageMakerClient::DescribePipelineExecution(const DescribePipelineExecutionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribePipelineExecution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribePipelineExecution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribePipelineExecutionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribePipelineExecutionOutcomeCallable SageMakerClient::DescribePipelineExecutionCallable(const DescribePipelineExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePipelineExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePipelineExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribePipelineExecutionAsync(const DescribePipelineExecutionRequest& request, const DescribePipelineExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribePipelineExecution(request), context);
    } );
}

DescribeProcessingJobOutcome SageMakerClient::DescribeProcessingJob(const DescribeProcessingJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeProcessingJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeProcessingJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeProcessingJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeProcessingJobOutcomeCallable SageMakerClient::DescribeProcessingJobCallable(const DescribeProcessingJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeProcessingJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeProcessingJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeProcessingJobAsync(const DescribeProcessingJobRequest& request, const DescribeProcessingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeProcessingJob(request), context);
    } );
}

DescribeProjectOutcome SageMakerClient::DescribeProject(const DescribeProjectRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeProjectOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeProjectOutcomeCallable SageMakerClient::DescribeProjectCallable(const DescribeProjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeProjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeProject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeProjectAsync(const DescribeProjectRequest& request, const DescribeProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeProject(request), context);
    } );
}

DescribeSpaceOutcome SageMakerClient::DescribeSpace(const DescribeSpaceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSpace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSpace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeSpaceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeSpaceOutcomeCallable SageMakerClient::DescribeSpaceCallable(const DescribeSpaceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSpaceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSpace(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeSpaceAsync(const DescribeSpaceRequest& request, const DescribeSpaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeSpace(request), context);
    } );
}

DescribeStudioLifecycleConfigOutcome SageMakerClient::DescribeStudioLifecycleConfig(const DescribeStudioLifecycleConfigRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeStudioLifecycleConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeStudioLifecycleConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeStudioLifecycleConfigOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeStudioLifecycleConfigOutcomeCallable SageMakerClient::DescribeStudioLifecycleConfigCallable(const DescribeStudioLifecycleConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeStudioLifecycleConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeStudioLifecycleConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeStudioLifecycleConfigAsync(const DescribeStudioLifecycleConfigRequest& request, const DescribeStudioLifecycleConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeStudioLifecycleConfig(request), context);
    } );
}

DescribeSubscribedWorkteamOutcome SageMakerClient::DescribeSubscribedWorkteam(const DescribeSubscribedWorkteamRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSubscribedWorkteam, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSubscribedWorkteam, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeSubscribedWorkteamOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeSubscribedWorkteamOutcomeCallable SageMakerClient::DescribeSubscribedWorkteamCallable(const DescribeSubscribedWorkteamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSubscribedWorkteamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSubscribedWorkteam(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeSubscribedWorkteamAsync(const DescribeSubscribedWorkteamRequest& request, const DescribeSubscribedWorkteamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeSubscribedWorkteam(request), context);
    } );
}

DescribeTrainingJobOutcome SageMakerClient::DescribeTrainingJob(const DescribeTrainingJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTrainingJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTrainingJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeTrainingJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeTrainingJobOutcomeCallable SageMakerClient::DescribeTrainingJobCallable(const DescribeTrainingJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTrainingJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTrainingJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeTrainingJobAsync(const DescribeTrainingJobRequest& request, const DescribeTrainingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeTrainingJob(request), context);
    } );
}

DescribeTransformJobOutcome SageMakerClient::DescribeTransformJob(const DescribeTransformJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTransformJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTransformJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeTransformJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeTransformJobOutcomeCallable SageMakerClient::DescribeTransformJobCallable(const DescribeTransformJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTransformJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTransformJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeTransformJobAsync(const DescribeTransformJobRequest& request, const DescribeTransformJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeTransformJob(request), context);
    } );
}

DescribeTrialOutcome SageMakerClient::DescribeTrial(const DescribeTrialRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTrial, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTrial, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeTrialOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeTrialOutcomeCallable SageMakerClient::DescribeTrialCallable(const DescribeTrialRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTrialOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTrial(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeTrialAsync(const DescribeTrialRequest& request, const DescribeTrialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeTrial(request), context);
    } );
}

DescribeTrialComponentOutcome SageMakerClient::DescribeTrialComponent(const DescribeTrialComponentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTrialComponent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTrialComponent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeTrialComponentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeTrialComponentOutcomeCallable SageMakerClient::DescribeTrialComponentCallable(const DescribeTrialComponentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTrialComponentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTrialComponent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeTrialComponentAsync(const DescribeTrialComponentRequest& request, const DescribeTrialComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeTrialComponent(request), context);
    } );
}

DescribeUserProfileOutcome SageMakerClient::DescribeUserProfile(const DescribeUserProfileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeUserProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeUserProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeUserProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeUserProfileOutcomeCallable SageMakerClient::DescribeUserProfileCallable(const DescribeUserProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeUserProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeUserProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeUserProfileAsync(const DescribeUserProfileRequest& request, const DescribeUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeUserProfile(request), context);
    } );
}

DescribeWorkforceOutcome SageMakerClient::DescribeWorkforce(const DescribeWorkforceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeWorkforce, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeWorkforce, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeWorkforceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeWorkforceOutcomeCallable SageMakerClient::DescribeWorkforceCallable(const DescribeWorkforceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeWorkforceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeWorkforce(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeWorkforceAsync(const DescribeWorkforceRequest& request, const DescribeWorkforceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeWorkforce(request), context);
    } );
}

DescribeWorkteamOutcome SageMakerClient::DescribeWorkteam(const DescribeWorkteamRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeWorkteam, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeWorkteam, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeWorkteamOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeWorkteamOutcomeCallable SageMakerClient::DescribeWorkteamCallable(const DescribeWorkteamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeWorkteamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeWorkteam(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DescribeWorkteamAsync(const DescribeWorkteamRequest& request, const DescribeWorkteamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeWorkteam(request), context);
    } );
}

DisableSagemakerServicecatalogPortfolioOutcome SageMakerClient::DisableSagemakerServicecatalogPortfolio(const DisableSagemakerServicecatalogPortfolioRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisableSagemakerServicecatalogPortfolio, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisableSagemakerServicecatalogPortfolio, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisableSagemakerServicecatalogPortfolioOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisableSagemakerServicecatalogPortfolioOutcomeCallable SageMakerClient::DisableSagemakerServicecatalogPortfolioCallable(const DisableSagemakerServicecatalogPortfolioRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisableSagemakerServicecatalogPortfolioOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisableSagemakerServicecatalogPortfolio(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DisableSagemakerServicecatalogPortfolioAsync(const DisableSagemakerServicecatalogPortfolioRequest& request, const DisableSagemakerServicecatalogPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisableSagemakerServicecatalogPortfolio(request), context);
    } );
}

DisassociateTrialComponentOutcome SageMakerClient::DisassociateTrialComponent(const DisassociateTrialComponentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateTrialComponent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateTrialComponent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisassociateTrialComponentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateTrialComponentOutcomeCallable SageMakerClient::DisassociateTrialComponentCallable(const DisassociateTrialComponentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateTrialComponentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateTrialComponent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::DisassociateTrialComponentAsync(const DisassociateTrialComponentRequest& request, const DisassociateTrialComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisassociateTrialComponent(request), context);
    } );
}

EnableSagemakerServicecatalogPortfolioOutcome SageMakerClient::EnableSagemakerServicecatalogPortfolio(const EnableSagemakerServicecatalogPortfolioRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, EnableSagemakerServicecatalogPortfolio, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, EnableSagemakerServicecatalogPortfolio, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return EnableSagemakerServicecatalogPortfolioOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

EnableSagemakerServicecatalogPortfolioOutcomeCallable SageMakerClient::EnableSagemakerServicecatalogPortfolioCallable(const EnableSagemakerServicecatalogPortfolioRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnableSagemakerServicecatalogPortfolioOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnableSagemakerServicecatalogPortfolio(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::EnableSagemakerServicecatalogPortfolioAsync(const EnableSagemakerServicecatalogPortfolioRequest& request, const EnableSagemakerServicecatalogPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, EnableSagemakerServicecatalogPortfolio(request), context);
    } );
}

GetDeviceFleetReportOutcome SageMakerClient::GetDeviceFleetReport(const GetDeviceFleetReportRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDeviceFleetReport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDeviceFleetReport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetDeviceFleetReportOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDeviceFleetReportOutcomeCallable SageMakerClient::GetDeviceFleetReportCallable(const GetDeviceFleetReportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDeviceFleetReportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDeviceFleetReport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::GetDeviceFleetReportAsync(const GetDeviceFleetReportRequest& request, const GetDeviceFleetReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetDeviceFleetReport(request), context);
    } );
}

GetLineageGroupPolicyOutcome SageMakerClient::GetLineageGroupPolicy(const GetLineageGroupPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetLineageGroupPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetLineageGroupPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetLineageGroupPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetLineageGroupPolicyOutcomeCallable SageMakerClient::GetLineageGroupPolicyCallable(const GetLineageGroupPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLineageGroupPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLineageGroupPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::GetLineageGroupPolicyAsync(const GetLineageGroupPolicyRequest& request, const GetLineageGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetLineageGroupPolicy(request), context);
    } );
}

GetModelPackageGroupPolicyOutcome SageMakerClient::GetModelPackageGroupPolicy(const GetModelPackageGroupPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetModelPackageGroupPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetModelPackageGroupPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetModelPackageGroupPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetModelPackageGroupPolicyOutcomeCallable SageMakerClient::GetModelPackageGroupPolicyCallable(const GetModelPackageGroupPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetModelPackageGroupPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetModelPackageGroupPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::GetModelPackageGroupPolicyAsync(const GetModelPackageGroupPolicyRequest& request, const GetModelPackageGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetModelPackageGroupPolicy(request), context);
    } );
}

GetSagemakerServicecatalogPortfolioStatusOutcome SageMakerClient::GetSagemakerServicecatalogPortfolioStatus(const GetSagemakerServicecatalogPortfolioStatusRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSagemakerServicecatalogPortfolioStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSagemakerServicecatalogPortfolioStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetSagemakerServicecatalogPortfolioStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetSagemakerServicecatalogPortfolioStatusOutcomeCallable SageMakerClient::GetSagemakerServicecatalogPortfolioStatusCallable(const GetSagemakerServicecatalogPortfolioStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSagemakerServicecatalogPortfolioStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSagemakerServicecatalogPortfolioStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::GetSagemakerServicecatalogPortfolioStatusAsync(const GetSagemakerServicecatalogPortfolioStatusRequest& request, const GetSagemakerServicecatalogPortfolioStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetSagemakerServicecatalogPortfolioStatus(request), context);
    } );
}

GetSearchSuggestionsOutcome SageMakerClient::GetSearchSuggestions(const GetSearchSuggestionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSearchSuggestions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSearchSuggestions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetSearchSuggestionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetSearchSuggestionsOutcomeCallable SageMakerClient::GetSearchSuggestionsCallable(const GetSearchSuggestionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSearchSuggestionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSearchSuggestions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::GetSearchSuggestionsAsync(const GetSearchSuggestionsRequest& request, const GetSearchSuggestionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetSearchSuggestions(request), context);
    } );
}

ImportHubContentOutcome SageMakerClient::ImportHubContent(const ImportHubContentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ImportHubContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ImportHubContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ImportHubContentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ImportHubContentOutcomeCallable SageMakerClient::ImportHubContentCallable(const ImportHubContentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ImportHubContentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ImportHubContent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ImportHubContentAsync(const ImportHubContentRequest& request, const ImportHubContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ImportHubContent(request), context);
    } );
}

ListActionsOutcome SageMakerClient::ListActions(const ListActionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListActions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListActions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListActionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListActionsOutcomeCallable SageMakerClient::ListActionsCallable(const ListActionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListActionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListActions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListActionsAsync(const ListActionsRequest& request, const ListActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListActions(request), context);
    } );
}

ListAlgorithmsOutcome SageMakerClient::ListAlgorithms(const ListAlgorithmsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAlgorithms, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAlgorithms, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListAlgorithmsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAlgorithmsOutcomeCallable SageMakerClient::ListAlgorithmsCallable(const ListAlgorithmsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAlgorithmsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAlgorithms(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListAlgorithmsAsync(const ListAlgorithmsRequest& request, const ListAlgorithmsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListAlgorithms(request), context);
    } );
}

ListAliasesOutcome SageMakerClient::ListAliases(const ListAliasesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAliases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAliases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListAliasesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAliasesOutcomeCallable SageMakerClient::ListAliasesCallable(const ListAliasesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAliasesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAliases(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListAliasesAsync(const ListAliasesRequest& request, const ListAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListAliases(request), context);
    } );
}

ListAppImageConfigsOutcome SageMakerClient::ListAppImageConfigs(const ListAppImageConfigsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAppImageConfigs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAppImageConfigs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListAppImageConfigsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAppImageConfigsOutcomeCallable SageMakerClient::ListAppImageConfigsCallable(const ListAppImageConfigsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAppImageConfigsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAppImageConfigs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListAppImageConfigsAsync(const ListAppImageConfigsRequest& request, const ListAppImageConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListAppImageConfigs(request), context);
    } );
}

ListAppsOutcome SageMakerClient::ListApps(const ListAppsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListApps, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListApps, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListAppsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAppsOutcomeCallable SageMakerClient::ListAppsCallable(const ListAppsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAppsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListApps(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListAppsAsync(const ListAppsRequest& request, const ListAppsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListApps(request), context);
    } );
}

ListArtifactsOutcome SageMakerClient::ListArtifacts(const ListArtifactsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListArtifacts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListArtifacts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListArtifactsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListArtifactsOutcomeCallable SageMakerClient::ListArtifactsCallable(const ListArtifactsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListArtifactsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListArtifacts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListArtifactsAsync(const ListArtifactsRequest& request, const ListArtifactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListArtifacts(request), context);
    } );
}

ListAssociationsOutcome SageMakerClient::ListAssociations(const ListAssociationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListAssociationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAssociationsOutcomeCallable SageMakerClient::ListAssociationsCallable(const ListAssociationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAssociationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAssociations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListAssociationsAsync(const ListAssociationsRequest& request, const ListAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListAssociations(request), context);
    } );
}

ListAutoMLJobsOutcome SageMakerClient::ListAutoMLJobs(const ListAutoMLJobsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAutoMLJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAutoMLJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListAutoMLJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAutoMLJobsOutcomeCallable SageMakerClient::ListAutoMLJobsCallable(const ListAutoMLJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAutoMLJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAutoMLJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListAutoMLJobsAsync(const ListAutoMLJobsRequest& request, const ListAutoMLJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListAutoMLJobs(request), context);
    } );
}

ListCandidatesForAutoMLJobOutcome SageMakerClient::ListCandidatesForAutoMLJob(const ListCandidatesForAutoMLJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCandidatesForAutoMLJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListCandidatesForAutoMLJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListCandidatesForAutoMLJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListCandidatesForAutoMLJobOutcomeCallable SageMakerClient::ListCandidatesForAutoMLJobCallable(const ListCandidatesForAutoMLJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCandidatesForAutoMLJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCandidatesForAutoMLJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListCandidatesForAutoMLJobAsync(const ListCandidatesForAutoMLJobRequest& request, const ListCandidatesForAutoMLJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListCandidatesForAutoMLJob(request), context);
    } );
}

ListCodeRepositoriesOutcome SageMakerClient::ListCodeRepositories(const ListCodeRepositoriesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCodeRepositories, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListCodeRepositories, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListCodeRepositoriesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListCodeRepositoriesOutcomeCallable SageMakerClient::ListCodeRepositoriesCallable(const ListCodeRepositoriesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCodeRepositoriesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCodeRepositories(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListCodeRepositoriesAsync(const ListCodeRepositoriesRequest& request, const ListCodeRepositoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListCodeRepositories(request), context);
    } );
}

ListCompilationJobsOutcome SageMakerClient::ListCompilationJobs(const ListCompilationJobsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCompilationJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListCompilationJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListCompilationJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListCompilationJobsOutcomeCallable SageMakerClient::ListCompilationJobsCallable(const ListCompilationJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCompilationJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCompilationJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListCompilationJobsAsync(const ListCompilationJobsRequest& request, const ListCompilationJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListCompilationJobs(request), context);
    } );
}

ListContextsOutcome SageMakerClient::ListContexts(const ListContextsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListContexts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListContexts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListContextsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListContextsOutcomeCallable SageMakerClient::ListContextsCallable(const ListContextsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListContextsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListContexts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListContextsAsync(const ListContextsRequest& request, const ListContextsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListContexts(request), context);
    } );
}

ListDataQualityJobDefinitionsOutcome SageMakerClient::ListDataQualityJobDefinitions(const ListDataQualityJobDefinitionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDataQualityJobDefinitions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDataQualityJobDefinitions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListDataQualityJobDefinitionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDataQualityJobDefinitionsOutcomeCallable SageMakerClient::ListDataQualityJobDefinitionsCallable(const ListDataQualityJobDefinitionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDataQualityJobDefinitionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDataQualityJobDefinitions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListDataQualityJobDefinitionsAsync(const ListDataQualityJobDefinitionsRequest& request, const ListDataQualityJobDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListDataQualityJobDefinitions(request), context);
    } );
}

ListDeviceFleetsOutcome SageMakerClient::ListDeviceFleets(const ListDeviceFleetsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDeviceFleets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDeviceFleets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListDeviceFleetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDeviceFleetsOutcomeCallable SageMakerClient::ListDeviceFleetsCallable(const ListDeviceFleetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDeviceFleetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDeviceFleets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListDeviceFleetsAsync(const ListDeviceFleetsRequest& request, const ListDeviceFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListDeviceFleets(request), context);
    } );
}

ListDevicesOutcome SageMakerClient::ListDevices(const ListDevicesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDevices, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDevices, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListDevicesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDevicesOutcomeCallable SageMakerClient::ListDevicesCallable(const ListDevicesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDevicesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDevices(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListDevicesAsync(const ListDevicesRequest& request, const ListDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListDevices(request), context);
    } );
}

ListDomainsOutcome SageMakerClient::ListDomains(const ListDomainsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDomains, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDomains, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListDomainsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDomainsOutcomeCallable SageMakerClient::ListDomainsCallable(const ListDomainsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDomainsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDomains(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListDomainsAsync(const ListDomainsRequest& request, const ListDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListDomains(request), context);
    } );
}

ListEdgeDeploymentPlansOutcome SageMakerClient::ListEdgeDeploymentPlans(const ListEdgeDeploymentPlansRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListEdgeDeploymentPlans, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListEdgeDeploymentPlans, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListEdgeDeploymentPlansOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListEdgeDeploymentPlansOutcomeCallable SageMakerClient::ListEdgeDeploymentPlansCallable(const ListEdgeDeploymentPlansRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEdgeDeploymentPlansOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEdgeDeploymentPlans(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListEdgeDeploymentPlansAsync(const ListEdgeDeploymentPlansRequest& request, const ListEdgeDeploymentPlansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListEdgeDeploymentPlans(request), context);
    } );
}

ListEdgePackagingJobsOutcome SageMakerClient::ListEdgePackagingJobs(const ListEdgePackagingJobsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListEdgePackagingJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListEdgePackagingJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListEdgePackagingJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListEdgePackagingJobsOutcomeCallable SageMakerClient::ListEdgePackagingJobsCallable(const ListEdgePackagingJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEdgePackagingJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEdgePackagingJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListEdgePackagingJobsAsync(const ListEdgePackagingJobsRequest& request, const ListEdgePackagingJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListEdgePackagingJobs(request), context);
    } );
}

ListEndpointConfigsOutcome SageMakerClient::ListEndpointConfigs(const ListEndpointConfigsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListEndpointConfigs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListEndpointConfigs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListEndpointConfigsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListEndpointConfigsOutcomeCallable SageMakerClient::ListEndpointConfigsCallable(const ListEndpointConfigsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEndpointConfigsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEndpointConfigs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListEndpointConfigsAsync(const ListEndpointConfigsRequest& request, const ListEndpointConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListEndpointConfigs(request), context);
    } );
}

ListEndpointsOutcome SageMakerClient::ListEndpoints(const ListEndpointsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListEndpointsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListEndpointsOutcomeCallable SageMakerClient::ListEndpointsCallable(const ListEndpointsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEndpointsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEndpoints(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListEndpointsAsync(const ListEndpointsRequest& request, const ListEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListEndpoints(request), context);
    } );
}

ListExperimentsOutcome SageMakerClient::ListExperiments(const ListExperimentsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListExperiments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListExperiments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListExperimentsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListExperimentsOutcomeCallable SageMakerClient::ListExperimentsCallable(const ListExperimentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListExperimentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListExperiments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListExperimentsAsync(const ListExperimentsRequest& request, const ListExperimentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListExperiments(request), context);
    } );
}

ListFeatureGroupsOutcome SageMakerClient::ListFeatureGroups(const ListFeatureGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListFeatureGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListFeatureGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListFeatureGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListFeatureGroupsOutcomeCallable SageMakerClient::ListFeatureGroupsCallable(const ListFeatureGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFeatureGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFeatureGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListFeatureGroupsAsync(const ListFeatureGroupsRequest& request, const ListFeatureGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListFeatureGroups(request), context);
    } );
}

ListFlowDefinitionsOutcome SageMakerClient::ListFlowDefinitions(const ListFlowDefinitionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListFlowDefinitions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListFlowDefinitions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListFlowDefinitionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListFlowDefinitionsOutcomeCallable SageMakerClient::ListFlowDefinitionsCallable(const ListFlowDefinitionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFlowDefinitionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFlowDefinitions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListFlowDefinitionsAsync(const ListFlowDefinitionsRequest& request, const ListFlowDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListFlowDefinitions(request), context);
    } );
}

ListHubContentVersionsOutcome SageMakerClient::ListHubContentVersions(const ListHubContentVersionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListHubContentVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListHubContentVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListHubContentVersionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListHubContentVersionsOutcomeCallable SageMakerClient::ListHubContentVersionsCallable(const ListHubContentVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListHubContentVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListHubContentVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListHubContentVersionsAsync(const ListHubContentVersionsRequest& request, const ListHubContentVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListHubContentVersions(request), context);
    } );
}

ListHubContentsOutcome SageMakerClient::ListHubContents(const ListHubContentsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListHubContents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListHubContents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListHubContentsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListHubContentsOutcomeCallable SageMakerClient::ListHubContentsCallable(const ListHubContentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListHubContentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListHubContents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListHubContentsAsync(const ListHubContentsRequest& request, const ListHubContentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListHubContents(request), context);
    } );
}

ListHubsOutcome SageMakerClient::ListHubs(const ListHubsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListHubs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListHubs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListHubsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListHubsOutcomeCallable SageMakerClient::ListHubsCallable(const ListHubsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListHubsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListHubs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListHubsAsync(const ListHubsRequest& request, const ListHubsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListHubs(request), context);
    } );
}

ListHumanTaskUisOutcome SageMakerClient::ListHumanTaskUis(const ListHumanTaskUisRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListHumanTaskUis, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListHumanTaskUis, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListHumanTaskUisOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListHumanTaskUisOutcomeCallable SageMakerClient::ListHumanTaskUisCallable(const ListHumanTaskUisRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListHumanTaskUisOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListHumanTaskUis(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListHumanTaskUisAsync(const ListHumanTaskUisRequest& request, const ListHumanTaskUisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListHumanTaskUis(request), context);
    } );
}

ListHyperParameterTuningJobsOutcome SageMakerClient::ListHyperParameterTuningJobs(const ListHyperParameterTuningJobsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListHyperParameterTuningJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListHyperParameterTuningJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListHyperParameterTuningJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListHyperParameterTuningJobsOutcomeCallable SageMakerClient::ListHyperParameterTuningJobsCallable(const ListHyperParameterTuningJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListHyperParameterTuningJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListHyperParameterTuningJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListHyperParameterTuningJobsAsync(const ListHyperParameterTuningJobsRequest& request, const ListHyperParameterTuningJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListHyperParameterTuningJobs(request), context);
    } );
}

ListImageVersionsOutcome SageMakerClient::ListImageVersions(const ListImageVersionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListImageVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListImageVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListImageVersionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListImageVersionsOutcomeCallable SageMakerClient::ListImageVersionsCallable(const ListImageVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListImageVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListImageVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListImageVersionsAsync(const ListImageVersionsRequest& request, const ListImageVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListImageVersions(request), context);
    } );
}

ListImagesOutcome SageMakerClient::ListImages(const ListImagesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListImages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListImages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListImagesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListImagesOutcomeCallable SageMakerClient::ListImagesCallable(const ListImagesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListImagesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListImages(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListImagesAsync(const ListImagesRequest& request, const ListImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListImages(request), context);
    } );
}

ListInferenceExperimentsOutcome SageMakerClient::ListInferenceExperiments(const ListInferenceExperimentsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListInferenceExperiments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListInferenceExperiments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListInferenceExperimentsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListInferenceExperimentsOutcomeCallable SageMakerClient::ListInferenceExperimentsCallable(const ListInferenceExperimentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListInferenceExperimentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListInferenceExperiments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListInferenceExperimentsAsync(const ListInferenceExperimentsRequest& request, const ListInferenceExperimentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListInferenceExperiments(request), context);
    } );
}

ListInferenceRecommendationsJobStepsOutcome SageMakerClient::ListInferenceRecommendationsJobSteps(const ListInferenceRecommendationsJobStepsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListInferenceRecommendationsJobSteps, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListInferenceRecommendationsJobSteps, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListInferenceRecommendationsJobStepsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListInferenceRecommendationsJobStepsOutcomeCallable SageMakerClient::ListInferenceRecommendationsJobStepsCallable(const ListInferenceRecommendationsJobStepsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListInferenceRecommendationsJobStepsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListInferenceRecommendationsJobSteps(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListInferenceRecommendationsJobStepsAsync(const ListInferenceRecommendationsJobStepsRequest& request, const ListInferenceRecommendationsJobStepsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListInferenceRecommendationsJobSteps(request), context);
    } );
}

ListInferenceRecommendationsJobsOutcome SageMakerClient::ListInferenceRecommendationsJobs(const ListInferenceRecommendationsJobsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListInferenceRecommendationsJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListInferenceRecommendationsJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListInferenceRecommendationsJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListInferenceRecommendationsJobsOutcomeCallable SageMakerClient::ListInferenceRecommendationsJobsCallable(const ListInferenceRecommendationsJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListInferenceRecommendationsJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListInferenceRecommendationsJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListInferenceRecommendationsJobsAsync(const ListInferenceRecommendationsJobsRequest& request, const ListInferenceRecommendationsJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListInferenceRecommendationsJobs(request), context);
    } );
}

ListLabelingJobsOutcome SageMakerClient::ListLabelingJobs(const ListLabelingJobsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListLabelingJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListLabelingJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListLabelingJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListLabelingJobsOutcomeCallable SageMakerClient::ListLabelingJobsCallable(const ListLabelingJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLabelingJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLabelingJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListLabelingJobsAsync(const ListLabelingJobsRequest& request, const ListLabelingJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListLabelingJobs(request), context);
    } );
}

ListLabelingJobsForWorkteamOutcome SageMakerClient::ListLabelingJobsForWorkteam(const ListLabelingJobsForWorkteamRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListLabelingJobsForWorkteam, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListLabelingJobsForWorkteam, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListLabelingJobsForWorkteamOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListLabelingJobsForWorkteamOutcomeCallable SageMakerClient::ListLabelingJobsForWorkteamCallable(const ListLabelingJobsForWorkteamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLabelingJobsForWorkteamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLabelingJobsForWorkteam(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListLabelingJobsForWorkteamAsync(const ListLabelingJobsForWorkteamRequest& request, const ListLabelingJobsForWorkteamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListLabelingJobsForWorkteam(request), context);
    } );
}

ListLineageGroupsOutcome SageMakerClient::ListLineageGroups(const ListLineageGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListLineageGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListLineageGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListLineageGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListLineageGroupsOutcomeCallable SageMakerClient::ListLineageGroupsCallable(const ListLineageGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLineageGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLineageGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListLineageGroupsAsync(const ListLineageGroupsRequest& request, const ListLineageGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListLineageGroups(request), context);
    } );
}

ListModelBiasJobDefinitionsOutcome SageMakerClient::ListModelBiasJobDefinitions(const ListModelBiasJobDefinitionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListModelBiasJobDefinitions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListModelBiasJobDefinitions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListModelBiasJobDefinitionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListModelBiasJobDefinitionsOutcomeCallable SageMakerClient::ListModelBiasJobDefinitionsCallable(const ListModelBiasJobDefinitionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListModelBiasJobDefinitionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListModelBiasJobDefinitions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListModelBiasJobDefinitionsAsync(const ListModelBiasJobDefinitionsRequest& request, const ListModelBiasJobDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListModelBiasJobDefinitions(request), context);
    } );
}

ListModelCardExportJobsOutcome SageMakerClient::ListModelCardExportJobs(const ListModelCardExportJobsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListModelCardExportJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListModelCardExportJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListModelCardExportJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListModelCardExportJobsOutcomeCallable SageMakerClient::ListModelCardExportJobsCallable(const ListModelCardExportJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListModelCardExportJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListModelCardExportJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListModelCardExportJobsAsync(const ListModelCardExportJobsRequest& request, const ListModelCardExportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListModelCardExportJobs(request), context);
    } );
}

ListModelCardVersionsOutcome SageMakerClient::ListModelCardVersions(const ListModelCardVersionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListModelCardVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListModelCardVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListModelCardVersionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListModelCardVersionsOutcomeCallable SageMakerClient::ListModelCardVersionsCallable(const ListModelCardVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListModelCardVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListModelCardVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListModelCardVersionsAsync(const ListModelCardVersionsRequest& request, const ListModelCardVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListModelCardVersions(request), context);
    } );
}

ListModelCardsOutcome SageMakerClient::ListModelCards(const ListModelCardsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListModelCards, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListModelCards, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListModelCardsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListModelCardsOutcomeCallable SageMakerClient::ListModelCardsCallable(const ListModelCardsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListModelCardsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListModelCards(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListModelCardsAsync(const ListModelCardsRequest& request, const ListModelCardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListModelCards(request), context);
    } );
}

ListModelExplainabilityJobDefinitionsOutcome SageMakerClient::ListModelExplainabilityJobDefinitions(const ListModelExplainabilityJobDefinitionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListModelExplainabilityJobDefinitions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListModelExplainabilityJobDefinitions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListModelExplainabilityJobDefinitionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListModelExplainabilityJobDefinitionsOutcomeCallable SageMakerClient::ListModelExplainabilityJobDefinitionsCallable(const ListModelExplainabilityJobDefinitionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListModelExplainabilityJobDefinitionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListModelExplainabilityJobDefinitions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListModelExplainabilityJobDefinitionsAsync(const ListModelExplainabilityJobDefinitionsRequest& request, const ListModelExplainabilityJobDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListModelExplainabilityJobDefinitions(request), context);
    } );
}

ListModelMetadataOutcome SageMakerClient::ListModelMetadata(const ListModelMetadataRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListModelMetadata, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListModelMetadata, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListModelMetadataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListModelMetadataOutcomeCallable SageMakerClient::ListModelMetadataCallable(const ListModelMetadataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListModelMetadataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListModelMetadata(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListModelMetadataAsync(const ListModelMetadataRequest& request, const ListModelMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListModelMetadata(request), context);
    } );
}

ListModelPackageGroupsOutcome SageMakerClient::ListModelPackageGroups(const ListModelPackageGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListModelPackageGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListModelPackageGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListModelPackageGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListModelPackageGroupsOutcomeCallable SageMakerClient::ListModelPackageGroupsCallable(const ListModelPackageGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListModelPackageGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListModelPackageGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListModelPackageGroupsAsync(const ListModelPackageGroupsRequest& request, const ListModelPackageGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListModelPackageGroups(request), context);
    } );
}

ListModelPackagesOutcome SageMakerClient::ListModelPackages(const ListModelPackagesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListModelPackages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListModelPackages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListModelPackagesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListModelPackagesOutcomeCallable SageMakerClient::ListModelPackagesCallable(const ListModelPackagesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListModelPackagesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListModelPackages(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListModelPackagesAsync(const ListModelPackagesRequest& request, const ListModelPackagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListModelPackages(request), context);
    } );
}

ListModelQualityJobDefinitionsOutcome SageMakerClient::ListModelQualityJobDefinitions(const ListModelQualityJobDefinitionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListModelQualityJobDefinitions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListModelQualityJobDefinitions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListModelQualityJobDefinitionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListModelQualityJobDefinitionsOutcomeCallable SageMakerClient::ListModelQualityJobDefinitionsCallable(const ListModelQualityJobDefinitionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListModelQualityJobDefinitionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListModelQualityJobDefinitions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListModelQualityJobDefinitionsAsync(const ListModelQualityJobDefinitionsRequest& request, const ListModelQualityJobDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListModelQualityJobDefinitions(request), context);
    } );
}

ListModelsOutcome SageMakerClient::ListModels(const ListModelsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListModels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListModels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListModelsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListModelsOutcomeCallable SageMakerClient::ListModelsCallable(const ListModelsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListModelsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListModels(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListModelsAsync(const ListModelsRequest& request, const ListModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListModels(request), context);
    } );
}

ListMonitoringAlertHistoryOutcome SageMakerClient::ListMonitoringAlertHistory(const ListMonitoringAlertHistoryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListMonitoringAlertHistory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListMonitoringAlertHistory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListMonitoringAlertHistoryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListMonitoringAlertHistoryOutcomeCallable SageMakerClient::ListMonitoringAlertHistoryCallable(const ListMonitoringAlertHistoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMonitoringAlertHistoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMonitoringAlertHistory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListMonitoringAlertHistoryAsync(const ListMonitoringAlertHistoryRequest& request, const ListMonitoringAlertHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListMonitoringAlertHistory(request), context);
    } );
}

ListMonitoringAlertsOutcome SageMakerClient::ListMonitoringAlerts(const ListMonitoringAlertsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListMonitoringAlerts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListMonitoringAlerts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListMonitoringAlertsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListMonitoringAlertsOutcomeCallable SageMakerClient::ListMonitoringAlertsCallable(const ListMonitoringAlertsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMonitoringAlertsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMonitoringAlerts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListMonitoringAlertsAsync(const ListMonitoringAlertsRequest& request, const ListMonitoringAlertsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListMonitoringAlerts(request), context);
    } );
}

ListMonitoringExecutionsOutcome SageMakerClient::ListMonitoringExecutions(const ListMonitoringExecutionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListMonitoringExecutions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListMonitoringExecutions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListMonitoringExecutionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListMonitoringExecutionsOutcomeCallable SageMakerClient::ListMonitoringExecutionsCallable(const ListMonitoringExecutionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMonitoringExecutionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMonitoringExecutions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListMonitoringExecutionsAsync(const ListMonitoringExecutionsRequest& request, const ListMonitoringExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListMonitoringExecutions(request), context);
    } );
}

ListMonitoringSchedulesOutcome SageMakerClient::ListMonitoringSchedules(const ListMonitoringSchedulesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListMonitoringSchedules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListMonitoringSchedules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListMonitoringSchedulesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListMonitoringSchedulesOutcomeCallable SageMakerClient::ListMonitoringSchedulesCallable(const ListMonitoringSchedulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMonitoringSchedulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMonitoringSchedules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListMonitoringSchedulesAsync(const ListMonitoringSchedulesRequest& request, const ListMonitoringSchedulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListMonitoringSchedules(request), context);
    } );
}

ListNotebookInstanceLifecycleConfigsOutcome SageMakerClient::ListNotebookInstanceLifecycleConfigs(const ListNotebookInstanceLifecycleConfigsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListNotebookInstanceLifecycleConfigs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListNotebookInstanceLifecycleConfigs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListNotebookInstanceLifecycleConfigsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListNotebookInstanceLifecycleConfigsOutcomeCallable SageMakerClient::ListNotebookInstanceLifecycleConfigsCallable(const ListNotebookInstanceLifecycleConfigsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListNotebookInstanceLifecycleConfigsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListNotebookInstanceLifecycleConfigs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListNotebookInstanceLifecycleConfigsAsync(const ListNotebookInstanceLifecycleConfigsRequest& request, const ListNotebookInstanceLifecycleConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListNotebookInstanceLifecycleConfigs(request), context);
    } );
}

ListNotebookInstancesOutcome SageMakerClient::ListNotebookInstances(const ListNotebookInstancesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListNotebookInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListNotebookInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListNotebookInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListNotebookInstancesOutcomeCallable SageMakerClient::ListNotebookInstancesCallable(const ListNotebookInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListNotebookInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListNotebookInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListNotebookInstancesAsync(const ListNotebookInstancesRequest& request, const ListNotebookInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListNotebookInstances(request), context);
    } );
}

ListPipelineExecutionStepsOutcome SageMakerClient::ListPipelineExecutionSteps(const ListPipelineExecutionStepsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPipelineExecutionSteps, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPipelineExecutionSteps, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListPipelineExecutionStepsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPipelineExecutionStepsOutcomeCallable SageMakerClient::ListPipelineExecutionStepsCallable(const ListPipelineExecutionStepsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPipelineExecutionStepsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPipelineExecutionSteps(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListPipelineExecutionStepsAsync(const ListPipelineExecutionStepsRequest& request, const ListPipelineExecutionStepsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListPipelineExecutionSteps(request), context);
    } );
}

ListPipelineExecutionsOutcome SageMakerClient::ListPipelineExecutions(const ListPipelineExecutionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPipelineExecutions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPipelineExecutions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListPipelineExecutionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPipelineExecutionsOutcomeCallable SageMakerClient::ListPipelineExecutionsCallable(const ListPipelineExecutionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPipelineExecutionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPipelineExecutions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListPipelineExecutionsAsync(const ListPipelineExecutionsRequest& request, const ListPipelineExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListPipelineExecutions(request), context);
    } );
}

ListPipelineParametersForExecutionOutcome SageMakerClient::ListPipelineParametersForExecution(const ListPipelineParametersForExecutionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPipelineParametersForExecution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPipelineParametersForExecution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListPipelineParametersForExecutionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPipelineParametersForExecutionOutcomeCallable SageMakerClient::ListPipelineParametersForExecutionCallable(const ListPipelineParametersForExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPipelineParametersForExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPipelineParametersForExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListPipelineParametersForExecutionAsync(const ListPipelineParametersForExecutionRequest& request, const ListPipelineParametersForExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListPipelineParametersForExecution(request), context);
    } );
}

ListPipelinesOutcome SageMakerClient::ListPipelines(const ListPipelinesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPipelines, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPipelines, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListPipelinesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPipelinesOutcomeCallable SageMakerClient::ListPipelinesCallable(const ListPipelinesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPipelinesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPipelines(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListPipelinesAsync(const ListPipelinesRequest& request, const ListPipelinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListPipelines(request), context);
    } );
}

ListProcessingJobsOutcome SageMakerClient::ListProcessingJobs(const ListProcessingJobsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListProcessingJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListProcessingJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListProcessingJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListProcessingJobsOutcomeCallable SageMakerClient::ListProcessingJobsCallable(const ListProcessingJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListProcessingJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListProcessingJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListProcessingJobsAsync(const ListProcessingJobsRequest& request, const ListProcessingJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListProcessingJobs(request), context);
    } );
}

ListProjectsOutcome SageMakerClient::ListProjects(const ListProjectsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListProjects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListProjects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListProjectsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListProjectsOutcomeCallable SageMakerClient::ListProjectsCallable(const ListProjectsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListProjectsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListProjects(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListProjectsAsync(const ListProjectsRequest& request, const ListProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListProjects(request), context);
    } );
}

ListSpacesOutcome SageMakerClient::ListSpaces(const ListSpacesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSpaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSpaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListSpacesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListSpacesOutcomeCallable SageMakerClient::ListSpacesCallable(const ListSpacesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSpacesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSpaces(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListSpacesAsync(const ListSpacesRequest& request, const ListSpacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListSpaces(request), context);
    } );
}

ListStageDevicesOutcome SageMakerClient::ListStageDevices(const ListStageDevicesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListStageDevices, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListStageDevices, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListStageDevicesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListStageDevicesOutcomeCallable SageMakerClient::ListStageDevicesCallable(const ListStageDevicesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListStageDevicesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListStageDevices(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListStageDevicesAsync(const ListStageDevicesRequest& request, const ListStageDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListStageDevices(request), context);
    } );
}

ListStudioLifecycleConfigsOutcome SageMakerClient::ListStudioLifecycleConfigs(const ListStudioLifecycleConfigsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListStudioLifecycleConfigs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListStudioLifecycleConfigs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListStudioLifecycleConfigsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListStudioLifecycleConfigsOutcomeCallable SageMakerClient::ListStudioLifecycleConfigsCallable(const ListStudioLifecycleConfigsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListStudioLifecycleConfigsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListStudioLifecycleConfigs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListStudioLifecycleConfigsAsync(const ListStudioLifecycleConfigsRequest& request, const ListStudioLifecycleConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListStudioLifecycleConfigs(request), context);
    } );
}

ListSubscribedWorkteamsOutcome SageMakerClient::ListSubscribedWorkteams(const ListSubscribedWorkteamsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSubscribedWorkteams, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSubscribedWorkteams, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListSubscribedWorkteamsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListSubscribedWorkteamsOutcomeCallable SageMakerClient::ListSubscribedWorkteamsCallable(const ListSubscribedWorkteamsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSubscribedWorkteamsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSubscribedWorkteams(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListSubscribedWorkteamsAsync(const ListSubscribedWorkteamsRequest& request, const ListSubscribedWorkteamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListSubscribedWorkteams(request), context);
    } );
}

ListTagsOutcome SageMakerClient::ListTags(const ListTagsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTagsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsOutcomeCallable SageMakerClient::ListTagsCallable(const ListTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListTagsAsync(const ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTags(request), context);
    } );
}

ListTrainingJobsOutcome SageMakerClient::ListTrainingJobs(const ListTrainingJobsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTrainingJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTrainingJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTrainingJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTrainingJobsOutcomeCallable SageMakerClient::ListTrainingJobsCallable(const ListTrainingJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTrainingJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTrainingJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListTrainingJobsAsync(const ListTrainingJobsRequest& request, const ListTrainingJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTrainingJobs(request), context);
    } );
}

ListTrainingJobsForHyperParameterTuningJobOutcome SageMakerClient::ListTrainingJobsForHyperParameterTuningJob(const ListTrainingJobsForHyperParameterTuningJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTrainingJobsForHyperParameterTuningJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTrainingJobsForHyperParameterTuningJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTrainingJobsForHyperParameterTuningJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTrainingJobsForHyperParameterTuningJobOutcomeCallable SageMakerClient::ListTrainingJobsForHyperParameterTuningJobCallable(const ListTrainingJobsForHyperParameterTuningJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTrainingJobsForHyperParameterTuningJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTrainingJobsForHyperParameterTuningJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListTrainingJobsForHyperParameterTuningJobAsync(const ListTrainingJobsForHyperParameterTuningJobRequest& request, const ListTrainingJobsForHyperParameterTuningJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTrainingJobsForHyperParameterTuningJob(request), context);
    } );
}

ListTransformJobsOutcome SageMakerClient::ListTransformJobs(const ListTransformJobsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTransformJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTransformJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTransformJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTransformJobsOutcomeCallable SageMakerClient::ListTransformJobsCallable(const ListTransformJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTransformJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTransformJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListTransformJobsAsync(const ListTransformJobsRequest& request, const ListTransformJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTransformJobs(request), context);
    } );
}

ListTrialComponentsOutcome SageMakerClient::ListTrialComponents(const ListTrialComponentsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTrialComponents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTrialComponents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTrialComponentsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTrialComponentsOutcomeCallable SageMakerClient::ListTrialComponentsCallable(const ListTrialComponentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTrialComponentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTrialComponents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListTrialComponentsAsync(const ListTrialComponentsRequest& request, const ListTrialComponentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTrialComponents(request), context);
    } );
}

ListTrialsOutcome SageMakerClient::ListTrials(const ListTrialsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTrials, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTrials, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTrialsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTrialsOutcomeCallable SageMakerClient::ListTrialsCallable(const ListTrialsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTrialsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTrials(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListTrialsAsync(const ListTrialsRequest& request, const ListTrialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTrials(request), context);
    } );
}

ListUserProfilesOutcome SageMakerClient::ListUserProfiles(const ListUserProfilesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListUserProfiles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListUserProfiles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListUserProfilesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListUserProfilesOutcomeCallable SageMakerClient::ListUserProfilesCallable(const ListUserProfilesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListUserProfilesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListUserProfiles(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListUserProfilesAsync(const ListUserProfilesRequest& request, const ListUserProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListUserProfiles(request), context);
    } );
}

ListWorkforcesOutcome SageMakerClient::ListWorkforces(const ListWorkforcesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListWorkforces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListWorkforces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListWorkforcesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListWorkforcesOutcomeCallable SageMakerClient::ListWorkforcesCallable(const ListWorkforcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListWorkforcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListWorkforces(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListWorkforcesAsync(const ListWorkforcesRequest& request, const ListWorkforcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListWorkforces(request), context);
    } );
}

ListWorkteamsOutcome SageMakerClient::ListWorkteams(const ListWorkteamsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListWorkteams, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListWorkteams, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListWorkteamsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListWorkteamsOutcomeCallable SageMakerClient::ListWorkteamsCallable(const ListWorkteamsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListWorkteamsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListWorkteams(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::ListWorkteamsAsync(const ListWorkteamsRequest& request, const ListWorkteamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListWorkteams(request), context);
    } );
}

PutModelPackageGroupPolicyOutcome SageMakerClient::PutModelPackageGroupPolicy(const PutModelPackageGroupPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutModelPackageGroupPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutModelPackageGroupPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutModelPackageGroupPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutModelPackageGroupPolicyOutcomeCallable SageMakerClient::PutModelPackageGroupPolicyCallable(const PutModelPackageGroupPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutModelPackageGroupPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutModelPackageGroupPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::PutModelPackageGroupPolicyAsync(const PutModelPackageGroupPolicyRequest& request, const PutModelPackageGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutModelPackageGroupPolicy(request), context);
    } );
}

QueryLineageOutcome SageMakerClient::QueryLineage(const QueryLineageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, QueryLineage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, QueryLineage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return QueryLineageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

QueryLineageOutcomeCallable SageMakerClient::QueryLineageCallable(const QueryLineageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< QueryLineageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->QueryLineage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::QueryLineageAsync(const QueryLineageRequest& request, const QueryLineageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, QueryLineage(request), context);
    } );
}

RegisterDevicesOutcome SageMakerClient::RegisterDevices(const RegisterDevicesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RegisterDevices, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RegisterDevices, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RegisterDevicesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterDevicesOutcomeCallable SageMakerClient::RegisterDevicesCallable(const RegisterDevicesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterDevicesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterDevices(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::RegisterDevicesAsync(const RegisterDevicesRequest& request, const RegisterDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RegisterDevices(request), context);
    } );
}

RenderUiTemplateOutcome SageMakerClient::RenderUiTemplate(const RenderUiTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RenderUiTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RenderUiTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RenderUiTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RenderUiTemplateOutcomeCallable SageMakerClient::RenderUiTemplateCallable(const RenderUiTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RenderUiTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RenderUiTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::RenderUiTemplateAsync(const RenderUiTemplateRequest& request, const RenderUiTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RenderUiTemplate(request), context);
    } );
}

RetryPipelineExecutionOutcome SageMakerClient::RetryPipelineExecution(const RetryPipelineExecutionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RetryPipelineExecution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RetryPipelineExecution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RetryPipelineExecutionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RetryPipelineExecutionOutcomeCallable SageMakerClient::RetryPipelineExecutionCallable(const RetryPipelineExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RetryPipelineExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RetryPipelineExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::RetryPipelineExecutionAsync(const RetryPipelineExecutionRequest& request, const RetryPipelineExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RetryPipelineExecution(request), context);
    } );
}

SearchOutcome SageMakerClient::Search(const SearchRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, Search, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, Search, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SearchOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchOutcomeCallable SageMakerClient::SearchCallable(const SearchRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->Search(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::SearchAsync(const SearchRequest& request, const SearchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, Search(request), context);
    } );
}

SendPipelineExecutionStepFailureOutcome SageMakerClient::SendPipelineExecutionStepFailure(const SendPipelineExecutionStepFailureRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SendPipelineExecutionStepFailure, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SendPipelineExecutionStepFailure, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SendPipelineExecutionStepFailureOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SendPipelineExecutionStepFailureOutcomeCallable SageMakerClient::SendPipelineExecutionStepFailureCallable(const SendPipelineExecutionStepFailureRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SendPipelineExecutionStepFailureOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SendPipelineExecutionStepFailure(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::SendPipelineExecutionStepFailureAsync(const SendPipelineExecutionStepFailureRequest& request, const SendPipelineExecutionStepFailureResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SendPipelineExecutionStepFailure(request), context);
    } );
}

SendPipelineExecutionStepSuccessOutcome SageMakerClient::SendPipelineExecutionStepSuccess(const SendPipelineExecutionStepSuccessRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SendPipelineExecutionStepSuccess, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SendPipelineExecutionStepSuccess, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SendPipelineExecutionStepSuccessOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SendPipelineExecutionStepSuccessOutcomeCallable SageMakerClient::SendPipelineExecutionStepSuccessCallable(const SendPipelineExecutionStepSuccessRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SendPipelineExecutionStepSuccessOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SendPipelineExecutionStepSuccess(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::SendPipelineExecutionStepSuccessAsync(const SendPipelineExecutionStepSuccessRequest& request, const SendPipelineExecutionStepSuccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SendPipelineExecutionStepSuccess(request), context);
    } );
}

StartEdgeDeploymentStageOutcome SageMakerClient::StartEdgeDeploymentStage(const StartEdgeDeploymentStageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartEdgeDeploymentStage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartEdgeDeploymentStage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartEdgeDeploymentStageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartEdgeDeploymentStageOutcomeCallable SageMakerClient::StartEdgeDeploymentStageCallable(const StartEdgeDeploymentStageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartEdgeDeploymentStageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartEdgeDeploymentStage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::StartEdgeDeploymentStageAsync(const StartEdgeDeploymentStageRequest& request, const StartEdgeDeploymentStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartEdgeDeploymentStage(request), context);
    } );
}

StartInferenceExperimentOutcome SageMakerClient::StartInferenceExperiment(const StartInferenceExperimentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartInferenceExperiment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartInferenceExperiment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartInferenceExperimentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartInferenceExperimentOutcomeCallable SageMakerClient::StartInferenceExperimentCallable(const StartInferenceExperimentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartInferenceExperimentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartInferenceExperiment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::StartInferenceExperimentAsync(const StartInferenceExperimentRequest& request, const StartInferenceExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartInferenceExperiment(request), context);
    } );
}

StartMonitoringScheduleOutcome SageMakerClient::StartMonitoringSchedule(const StartMonitoringScheduleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartMonitoringSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartMonitoringSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartMonitoringScheduleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartMonitoringScheduleOutcomeCallable SageMakerClient::StartMonitoringScheduleCallable(const StartMonitoringScheduleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartMonitoringScheduleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartMonitoringSchedule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::StartMonitoringScheduleAsync(const StartMonitoringScheduleRequest& request, const StartMonitoringScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartMonitoringSchedule(request), context);
    } );
}

StartNotebookInstanceOutcome SageMakerClient::StartNotebookInstance(const StartNotebookInstanceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartNotebookInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartNotebookInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartNotebookInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartNotebookInstanceOutcomeCallable SageMakerClient::StartNotebookInstanceCallable(const StartNotebookInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartNotebookInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartNotebookInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::StartNotebookInstanceAsync(const StartNotebookInstanceRequest& request, const StartNotebookInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartNotebookInstance(request), context);
    } );
}

StartPipelineExecutionOutcome SageMakerClient::StartPipelineExecution(const StartPipelineExecutionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartPipelineExecution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartPipelineExecution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartPipelineExecutionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartPipelineExecutionOutcomeCallable SageMakerClient::StartPipelineExecutionCallable(const StartPipelineExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartPipelineExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartPipelineExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::StartPipelineExecutionAsync(const StartPipelineExecutionRequest& request, const StartPipelineExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartPipelineExecution(request), context);
    } );
}

StopAutoMLJobOutcome SageMakerClient::StopAutoMLJob(const StopAutoMLJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopAutoMLJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopAutoMLJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StopAutoMLJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopAutoMLJobOutcomeCallable SageMakerClient::StopAutoMLJobCallable(const StopAutoMLJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopAutoMLJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopAutoMLJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::StopAutoMLJobAsync(const StopAutoMLJobRequest& request, const StopAutoMLJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StopAutoMLJob(request), context);
    } );
}

StopCompilationJobOutcome SageMakerClient::StopCompilationJob(const StopCompilationJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopCompilationJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopCompilationJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StopCompilationJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopCompilationJobOutcomeCallable SageMakerClient::StopCompilationJobCallable(const StopCompilationJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopCompilationJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopCompilationJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::StopCompilationJobAsync(const StopCompilationJobRequest& request, const StopCompilationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StopCompilationJob(request), context);
    } );
}

StopEdgeDeploymentStageOutcome SageMakerClient::StopEdgeDeploymentStage(const StopEdgeDeploymentStageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopEdgeDeploymentStage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopEdgeDeploymentStage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StopEdgeDeploymentStageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopEdgeDeploymentStageOutcomeCallable SageMakerClient::StopEdgeDeploymentStageCallable(const StopEdgeDeploymentStageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopEdgeDeploymentStageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopEdgeDeploymentStage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::StopEdgeDeploymentStageAsync(const StopEdgeDeploymentStageRequest& request, const StopEdgeDeploymentStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StopEdgeDeploymentStage(request), context);
    } );
}

StopEdgePackagingJobOutcome SageMakerClient::StopEdgePackagingJob(const StopEdgePackagingJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopEdgePackagingJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopEdgePackagingJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StopEdgePackagingJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopEdgePackagingJobOutcomeCallable SageMakerClient::StopEdgePackagingJobCallable(const StopEdgePackagingJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopEdgePackagingJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopEdgePackagingJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::StopEdgePackagingJobAsync(const StopEdgePackagingJobRequest& request, const StopEdgePackagingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StopEdgePackagingJob(request), context);
    } );
}

StopHyperParameterTuningJobOutcome SageMakerClient::StopHyperParameterTuningJob(const StopHyperParameterTuningJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopHyperParameterTuningJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopHyperParameterTuningJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StopHyperParameterTuningJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopHyperParameterTuningJobOutcomeCallable SageMakerClient::StopHyperParameterTuningJobCallable(const StopHyperParameterTuningJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopHyperParameterTuningJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopHyperParameterTuningJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::StopHyperParameterTuningJobAsync(const StopHyperParameterTuningJobRequest& request, const StopHyperParameterTuningJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StopHyperParameterTuningJob(request), context);
    } );
}

StopInferenceExperimentOutcome SageMakerClient::StopInferenceExperiment(const StopInferenceExperimentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopInferenceExperiment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopInferenceExperiment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StopInferenceExperimentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopInferenceExperimentOutcomeCallable SageMakerClient::StopInferenceExperimentCallable(const StopInferenceExperimentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopInferenceExperimentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopInferenceExperiment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::StopInferenceExperimentAsync(const StopInferenceExperimentRequest& request, const StopInferenceExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StopInferenceExperiment(request), context);
    } );
}

StopInferenceRecommendationsJobOutcome SageMakerClient::StopInferenceRecommendationsJob(const StopInferenceRecommendationsJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopInferenceRecommendationsJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopInferenceRecommendationsJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StopInferenceRecommendationsJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopInferenceRecommendationsJobOutcomeCallable SageMakerClient::StopInferenceRecommendationsJobCallable(const StopInferenceRecommendationsJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopInferenceRecommendationsJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopInferenceRecommendationsJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::StopInferenceRecommendationsJobAsync(const StopInferenceRecommendationsJobRequest& request, const StopInferenceRecommendationsJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StopInferenceRecommendationsJob(request), context);
    } );
}

StopLabelingJobOutcome SageMakerClient::StopLabelingJob(const StopLabelingJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopLabelingJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopLabelingJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StopLabelingJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopLabelingJobOutcomeCallable SageMakerClient::StopLabelingJobCallable(const StopLabelingJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopLabelingJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopLabelingJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::StopLabelingJobAsync(const StopLabelingJobRequest& request, const StopLabelingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StopLabelingJob(request), context);
    } );
}

StopMonitoringScheduleOutcome SageMakerClient::StopMonitoringSchedule(const StopMonitoringScheduleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopMonitoringSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopMonitoringSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StopMonitoringScheduleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopMonitoringScheduleOutcomeCallable SageMakerClient::StopMonitoringScheduleCallable(const StopMonitoringScheduleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopMonitoringScheduleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopMonitoringSchedule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::StopMonitoringScheduleAsync(const StopMonitoringScheduleRequest& request, const StopMonitoringScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StopMonitoringSchedule(request), context);
    } );
}

StopNotebookInstanceOutcome SageMakerClient::StopNotebookInstance(const StopNotebookInstanceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopNotebookInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopNotebookInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StopNotebookInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopNotebookInstanceOutcomeCallable SageMakerClient::StopNotebookInstanceCallable(const StopNotebookInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopNotebookInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopNotebookInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::StopNotebookInstanceAsync(const StopNotebookInstanceRequest& request, const StopNotebookInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StopNotebookInstance(request), context);
    } );
}

StopPipelineExecutionOutcome SageMakerClient::StopPipelineExecution(const StopPipelineExecutionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopPipelineExecution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopPipelineExecution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StopPipelineExecutionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopPipelineExecutionOutcomeCallable SageMakerClient::StopPipelineExecutionCallable(const StopPipelineExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopPipelineExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopPipelineExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::StopPipelineExecutionAsync(const StopPipelineExecutionRequest& request, const StopPipelineExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StopPipelineExecution(request), context);
    } );
}

StopProcessingJobOutcome SageMakerClient::StopProcessingJob(const StopProcessingJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopProcessingJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopProcessingJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StopProcessingJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopProcessingJobOutcomeCallable SageMakerClient::StopProcessingJobCallable(const StopProcessingJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopProcessingJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopProcessingJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::StopProcessingJobAsync(const StopProcessingJobRequest& request, const StopProcessingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StopProcessingJob(request), context);
    } );
}

StopTrainingJobOutcome SageMakerClient::StopTrainingJob(const StopTrainingJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopTrainingJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopTrainingJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StopTrainingJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopTrainingJobOutcomeCallable SageMakerClient::StopTrainingJobCallable(const StopTrainingJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopTrainingJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopTrainingJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::StopTrainingJobAsync(const StopTrainingJobRequest& request, const StopTrainingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StopTrainingJob(request), context);
    } );
}

StopTransformJobOutcome SageMakerClient::StopTransformJob(const StopTransformJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopTransformJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopTransformJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StopTransformJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopTransformJobOutcomeCallable SageMakerClient::StopTransformJobCallable(const StopTransformJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopTransformJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopTransformJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::StopTransformJobAsync(const StopTransformJobRequest& request, const StopTransformJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StopTransformJob(request), context);
    } );
}

UpdateActionOutcome SageMakerClient::UpdateAction(const UpdateActionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateAction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateActionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateActionOutcomeCallable SageMakerClient::UpdateActionCallable(const UpdateActionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateActionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::UpdateActionAsync(const UpdateActionRequest& request, const UpdateActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateAction(request), context);
    } );
}

UpdateAppImageConfigOutcome SageMakerClient::UpdateAppImageConfig(const UpdateAppImageConfigRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAppImageConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateAppImageConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateAppImageConfigOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateAppImageConfigOutcomeCallable SageMakerClient::UpdateAppImageConfigCallable(const UpdateAppImageConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAppImageConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAppImageConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::UpdateAppImageConfigAsync(const UpdateAppImageConfigRequest& request, const UpdateAppImageConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateAppImageConfig(request), context);
    } );
}

UpdateArtifactOutcome SageMakerClient::UpdateArtifact(const UpdateArtifactRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateArtifact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateArtifact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateArtifactOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateArtifactOutcomeCallable SageMakerClient::UpdateArtifactCallable(const UpdateArtifactRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateArtifactOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateArtifact(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::UpdateArtifactAsync(const UpdateArtifactRequest& request, const UpdateArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateArtifact(request), context);
    } );
}

UpdateCodeRepositoryOutcome SageMakerClient::UpdateCodeRepository(const UpdateCodeRepositoryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateCodeRepository, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateCodeRepository, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateCodeRepositoryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateCodeRepositoryOutcomeCallable SageMakerClient::UpdateCodeRepositoryCallable(const UpdateCodeRepositoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateCodeRepositoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateCodeRepository(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::UpdateCodeRepositoryAsync(const UpdateCodeRepositoryRequest& request, const UpdateCodeRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateCodeRepository(request), context);
    } );
}

UpdateContextOutcome SageMakerClient::UpdateContext(const UpdateContextRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateContext, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateContext, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateContextOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateContextOutcomeCallable SageMakerClient::UpdateContextCallable(const UpdateContextRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateContextOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateContext(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::UpdateContextAsync(const UpdateContextRequest& request, const UpdateContextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateContext(request), context);
    } );
}

UpdateDeviceFleetOutcome SageMakerClient::UpdateDeviceFleet(const UpdateDeviceFleetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDeviceFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDeviceFleet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateDeviceFleetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDeviceFleetOutcomeCallable SageMakerClient::UpdateDeviceFleetCallable(const UpdateDeviceFleetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDeviceFleetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDeviceFleet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::UpdateDeviceFleetAsync(const UpdateDeviceFleetRequest& request, const UpdateDeviceFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateDeviceFleet(request), context);
    } );
}

UpdateDevicesOutcome SageMakerClient::UpdateDevices(const UpdateDevicesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDevices, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDevices, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateDevicesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDevicesOutcomeCallable SageMakerClient::UpdateDevicesCallable(const UpdateDevicesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDevicesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDevices(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::UpdateDevicesAsync(const UpdateDevicesRequest& request, const UpdateDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateDevices(request), context);
    } );
}

UpdateDomainOutcome SageMakerClient::UpdateDomain(const UpdateDomainRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDomainOutcomeCallable SageMakerClient::UpdateDomainCallable(const UpdateDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::UpdateDomainAsync(const UpdateDomainRequest& request, const UpdateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateDomain(request), context);
    } );
}

UpdateEndpointOutcome SageMakerClient::UpdateEndpoint(const UpdateEndpointRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateEndpointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateEndpointOutcomeCallable SageMakerClient::UpdateEndpointCallable(const UpdateEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::UpdateEndpointAsync(const UpdateEndpointRequest& request, const UpdateEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateEndpoint(request), context);
    } );
}

UpdateEndpointWeightsAndCapacitiesOutcome SageMakerClient::UpdateEndpointWeightsAndCapacities(const UpdateEndpointWeightsAndCapacitiesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateEndpointWeightsAndCapacities, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateEndpointWeightsAndCapacities, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateEndpointWeightsAndCapacitiesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateEndpointWeightsAndCapacitiesOutcomeCallable SageMakerClient::UpdateEndpointWeightsAndCapacitiesCallable(const UpdateEndpointWeightsAndCapacitiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateEndpointWeightsAndCapacitiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateEndpointWeightsAndCapacities(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::UpdateEndpointWeightsAndCapacitiesAsync(const UpdateEndpointWeightsAndCapacitiesRequest& request, const UpdateEndpointWeightsAndCapacitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateEndpointWeightsAndCapacities(request), context);
    } );
}

UpdateExperimentOutcome SageMakerClient::UpdateExperiment(const UpdateExperimentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateExperiment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateExperiment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateExperimentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateExperimentOutcomeCallable SageMakerClient::UpdateExperimentCallable(const UpdateExperimentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateExperimentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateExperiment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::UpdateExperimentAsync(const UpdateExperimentRequest& request, const UpdateExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateExperiment(request), context);
    } );
}

UpdateFeatureGroupOutcome SageMakerClient::UpdateFeatureGroup(const UpdateFeatureGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateFeatureGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateFeatureGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateFeatureGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateFeatureGroupOutcomeCallable SageMakerClient::UpdateFeatureGroupCallable(const UpdateFeatureGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFeatureGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFeatureGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::UpdateFeatureGroupAsync(const UpdateFeatureGroupRequest& request, const UpdateFeatureGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateFeatureGroup(request), context);
    } );
}

UpdateFeatureMetadataOutcome SageMakerClient::UpdateFeatureMetadata(const UpdateFeatureMetadataRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateFeatureMetadata, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateFeatureMetadata, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateFeatureMetadataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateFeatureMetadataOutcomeCallable SageMakerClient::UpdateFeatureMetadataCallable(const UpdateFeatureMetadataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFeatureMetadataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFeatureMetadata(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::UpdateFeatureMetadataAsync(const UpdateFeatureMetadataRequest& request, const UpdateFeatureMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateFeatureMetadata(request), context);
    } );
}

UpdateHubOutcome SageMakerClient::UpdateHub(const UpdateHubRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateHub, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateHub, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateHubOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateHubOutcomeCallable SageMakerClient::UpdateHubCallable(const UpdateHubRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateHubOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateHub(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::UpdateHubAsync(const UpdateHubRequest& request, const UpdateHubResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateHub(request), context);
    } );
}

UpdateImageOutcome SageMakerClient::UpdateImage(const UpdateImageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateImageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateImageOutcomeCallable SageMakerClient::UpdateImageCallable(const UpdateImageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateImageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateImage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::UpdateImageAsync(const UpdateImageRequest& request, const UpdateImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateImage(request), context);
    } );
}

UpdateImageVersionOutcome SageMakerClient::UpdateImageVersion(const UpdateImageVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateImageVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateImageVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateImageVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateImageVersionOutcomeCallable SageMakerClient::UpdateImageVersionCallable(const UpdateImageVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateImageVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateImageVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::UpdateImageVersionAsync(const UpdateImageVersionRequest& request, const UpdateImageVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateImageVersion(request), context);
    } );
}

UpdateInferenceExperimentOutcome SageMakerClient::UpdateInferenceExperiment(const UpdateInferenceExperimentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateInferenceExperiment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateInferenceExperiment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateInferenceExperimentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateInferenceExperimentOutcomeCallable SageMakerClient::UpdateInferenceExperimentCallable(const UpdateInferenceExperimentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateInferenceExperimentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateInferenceExperiment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::UpdateInferenceExperimentAsync(const UpdateInferenceExperimentRequest& request, const UpdateInferenceExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateInferenceExperiment(request), context);
    } );
}

UpdateModelCardOutcome SageMakerClient::UpdateModelCard(const UpdateModelCardRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateModelCard, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateModelCard, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateModelCardOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateModelCardOutcomeCallable SageMakerClient::UpdateModelCardCallable(const UpdateModelCardRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateModelCardOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateModelCard(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::UpdateModelCardAsync(const UpdateModelCardRequest& request, const UpdateModelCardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateModelCard(request), context);
    } );
}

UpdateModelPackageOutcome SageMakerClient::UpdateModelPackage(const UpdateModelPackageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateModelPackage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateModelPackage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateModelPackageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateModelPackageOutcomeCallable SageMakerClient::UpdateModelPackageCallable(const UpdateModelPackageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateModelPackageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateModelPackage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::UpdateModelPackageAsync(const UpdateModelPackageRequest& request, const UpdateModelPackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateModelPackage(request), context);
    } );
}

UpdateMonitoringAlertOutcome SageMakerClient::UpdateMonitoringAlert(const UpdateMonitoringAlertRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateMonitoringAlert, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateMonitoringAlert, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateMonitoringAlertOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateMonitoringAlertOutcomeCallable SageMakerClient::UpdateMonitoringAlertCallable(const UpdateMonitoringAlertRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateMonitoringAlertOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateMonitoringAlert(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::UpdateMonitoringAlertAsync(const UpdateMonitoringAlertRequest& request, const UpdateMonitoringAlertResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateMonitoringAlert(request), context);
    } );
}

UpdateMonitoringScheduleOutcome SageMakerClient::UpdateMonitoringSchedule(const UpdateMonitoringScheduleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateMonitoringSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateMonitoringSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateMonitoringScheduleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateMonitoringScheduleOutcomeCallable SageMakerClient::UpdateMonitoringScheduleCallable(const UpdateMonitoringScheduleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateMonitoringScheduleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateMonitoringSchedule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::UpdateMonitoringScheduleAsync(const UpdateMonitoringScheduleRequest& request, const UpdateMonitoringScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateMonitoringSchedule(request), context);
    } );
}

UpdateNotebookInstanceOutcome SageMakerClient::UpdateNotebookInstance(const UpdateNotebookInstanceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateNotebookInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateNotebookInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateNotebookInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateNotebookInstanceOutcomeCallable SageMakerClient::UpdateNotebookInstanceCallable(const UpdateNotebookInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateNotebookInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateNotebookInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::UpdateNotebookInstanceAsync(const UpdateNotebookInstanceRequest& request, const UpdateNotebookInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateNotebookInstance(request), context);
    } );
}

UpdateNotebookInstanceLifecycleConfigOutcome SageMakerClient::UpdateNotebookInstanceLifecycleConfig(const UpdateNotebookInstanceLifecycleConfigRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateNotebookInstanceLifecycleConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateNotebookInstanceLifecycleConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateNotebookInstanceLifecycleConfigOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateNotebookInstanceLifecycleConfigOutcomeCallable SageMakerClient::UpdateNotebookInstanceLifecycleConfigCallable(const UpdateNotebookInstanceLifecycleConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateNotebookInstanceLifecycleConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateNotebookInstanceLifecycleConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::UpdateNotebookInstanceLifecycleConfigAsync(const UpdateNotebookInstanceLifecycleConfigRequest& request, const UpdateNotebookInstanceLifecycleConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateNotebookInstanceLifecycleConfig(request), context);
    } );
}

UpdatePipelineOutcome SageMakerClient::UpdatePipeline(const UpdatePipelineRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdatePipeline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdatePipeline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdatePipelineOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdatePipelineOutcomeCallable SageMakerClient::UpdatePipelineCallable(const UpdatePipelineRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdatePipelineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePipeline(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::UpdatePipelineAsync(const UpdatePipelineRequest& request, const UpdatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdatePipeline(request), context);
    } );
}

UpdatePipelineExecutionOutcome SageMakerClient::UpdatePipelineExecution(const UpdatePipelineExecutionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdatePipelineExecution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdatePipelineExecution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdatePipelineExecutionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdatePipelineExecutionOutcomeCallable SageMakerClient::UpdatePipelineExecutionCallable(const UpdatePipelineExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdatePipelineExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePipelineExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::UpdatePipelineExecutionAsync(const UpdatePipelineExecutionRequest& request, const UpdatePipelineExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdatePipelineExecution(request), context);
    } );
}

UpdateProjectOutcome SageMakerClient::UpdateProject(const UpdateProjectRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateProjectOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateProjectOutcomeCallable SageMakerClient::UpdateProjectCallable(const UpdateProjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateProjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateProject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::UpdateProjectAsync(const UpdateProjectRequest& request, const UpdateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateProject(request), context);
    } );
}

UpdateSpaceOutcome SageMakerClient::UpdateSpace(const UpdateSpaceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateSpace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateSpace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateSpaceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateSpaceOutcomeCallable SageMakerClient::UpdateSpaceCallable(const UpdateSpaceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSpaceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSpace(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::UpdateSpaceAsync(const UpdateSpaceRequest& request, const UpdateSpaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateSpace(request), context);
    } );
}

UpdateTrainingJobOutcome SageMakerClient::UpdateTrainingJob(const UpdateTrainingJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateTrainingJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateTrainingJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateTrainingJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateTrainingJobOutcomeCallable SageMakerClient::UpdateTrainingJobCallable(const UpdateTrainingJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateTrainingJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateTrainingJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::UpdateTrainingJobAsync(const UpdateTrainingJobRequest& request, const UpdateTrainingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateTrainingJob(request), context);
    } );
}

UpdateTrialOutcome SageMakerClient::UpdateTrial(const UpdateTrialRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateTrial, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateTrial, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateTrialOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateTrialOutcomeCallable SageMakerClient::UpdateTrialCallable(const UpdateTrialRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateTrialOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateTrial(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::UpdateTrialAsync(const UpdateTrialRequest& request, const UpdateTrialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateTrial(request), context);
    } );
}

UpdateTrialComponentOutcome SageMakerClient::UpdateTrialComponent(const UpdateTrialComponentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateTrialComponent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateTrialComponent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateTrialComponentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateTrialComponentOutcomeCallable SageMakerClient::UpdateTrialComponentCallable(const UpdateTrialComponentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateTrialComponentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateTrialComponent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::UpdateTrialComponentAsync(const UpdateTrialComponentRequest& request, const UpdateTrialComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateTrialComponent(request), context);
    } );
}

UpdateUserProfileOutcome SageMakerClient::UpdateUserProfile(const UpdateUserProfileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateUserProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateUserProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateUserProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateUserProfileOutcomeCallable SageMakerClient::UpdateUserProfileCallable(const UpdateUserProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateUserProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateUserProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::UpdateUserProfileAsync(const UpdateUserProfileRequest& request, const UpdateUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateUserProfile(request), context);
    } );
}

UpdateWorkforceOutcome SageMakerClient::UpdateWorkforce(const UpdateWorkforceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateWorkforce, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateWorkforce, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateWorkforceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateWorkforceOutcomeCallable SageMakerClient::UpdateWorkforceCallable(const UpdateWorkforceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateWorkforceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateWorkforce(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::UpdateWorkforceAsync(const UpdateWorkforceRequest& request, const UpdateWorkforceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateWorkforce(request), context);
    } );
}

UpdateWorkteamOutcome SageMakerClient::UpdateWorkteam(const UpdateWorkteamRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateWorkteam, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateWorkteam, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateWorkteamOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateWorkteamOutcomeCallable SageMakerClient::UpdateWorkteamCallable(const UpdateWorkteamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateWorkteamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateWorkteam(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClient::UpdateWorkteamAsync(const UpdateWorkteamRequest& request, const UpdateWorkteamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateWorkteam(request), context);
    } );
}

