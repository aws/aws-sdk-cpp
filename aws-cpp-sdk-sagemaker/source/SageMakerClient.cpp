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

#include <aws/sagemaker/SageMakerClient.h>
#include <aws/sagemaker/SageMakerEndpoint.h>
#include <aws/sagemaker/SageMakerErrorMarshaller.h>
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
#include <aws/sagemaker/model/CreateHumanTaskUiRequest.h>
#include <aws/sagemaker/model/CreateHyperParameterTuningJobRequest.h>
#include <aws/sagemaker/model/CreateImageRequest.h>
#include <aws/sagemaker/model/CreateImageVersionRequest.h>
#include <aws/sagemaker/model/CreateInferenceRecommendationsJobRequest.h>
#include <aws/sagemaker/model/CreateLabelingJobRequest.h>
#include <aws/sagemaker/model/CreateModelRequest.h>
#include <aws/sagemaker/model/CreateModelBiasJobDefinitionRequest.h>
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
#include <aws/sagemaker/model/DeleteHumanTaskUiRequest.h>
#include <aws/sagemaker/model/DeleteImageRequest.h>
#include <aws/sagemaker/model/DeleteImageVersionRequest.h>
#include <aws/sagemaker/model/DeleteModelRequest.h>
#include <aws/sagemaker/model/DeleteModelBiasJobDefinitionRequest.h>
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
#include <aws/sagemaker/model/DescribeHumanTaskUiRequest.h>
#include <aws/sagemaker/model/DescribeHyperParameterTuningJobRequest.h>
#include <aws/sagemaker/model/DescribeImageRequest.h>
#include <aws/sagemaker/model/DescribeImageVersionRequest.h>
#include <aws/sagemaker/model/DescribeInferenceRecommendationsJobRequest.h>
#include <aws/sagemaker/model/DescribeLabelingJobRequest.h>
#include <aws/sagemaker/model/DescribeLineageGroupRequest.h>
#include <aws/sagemaker/model/DescribeModelRequest.h>
#include <aws/sagemaker/model/DescribeModelBiasJobDefinitionRequest.h>
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
#include <aws/sagemaker/model/ListActionsRequest.h>
#include <aws/sagemaker/model/ListAlgorithmsRequest.h>
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
#include <aws/sagemaker/model/ListHumanTaskUisRequest.h>
#include <aws/sagemaker/model/ListHyperParameterTuningJobsRequest.h>
#include <aws/sagemaker/model/ListImageVersionsRequest.h>
#include <aws/sagemaker/model/ListImagesRequest.h>
#include <aws/sagemaker/model/ListInferenceRecommendationsJobsRequest.h>
#include <aws/sagemaker/model/ListLabelingJobsRequest.h>
#include <aws/sagemaker/model/ListLabelingJobsForWorkteamRequest.h>
#include <aws/sagemaker/model/ListLineageGroupsRequest.h>
#include <aws/sagemaker/model/ListModelBiasJobDefinitionsRequest.h>
#include <aws/sagemaker/model/ListModelExplainabilityJobDefinitionsRequest.h>
#include <aws/sagemaker/model/ListModelMetadataRequest.h>
#include <aws/sagemaker/model/ListModelPackageGroupsRequest.h>
#include <aws/sagemaker/model/ListModelPackagesRequest.h>
#include <aws/sagemaker/model/ListModelQualityJobDefinitionsRequest.h>
#include <aws/sagemaker/model/ListModelsRequest.h>
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
#include <aws/sagemaker/model/StartMonitoringScheduleRequest.h>
#include <aws/sagemaker/model/StartNotebookInstanceRequest.h>
#include <aws/sagemaker/model/StartPipelineExecutionRequest.h>
#include <aws/sagemaker/model/StopAutoMLJobRequest.h>
#include <aws/sagemaker/model/StopCompilationJobRequest.h>
#include <aws/sagemaker/model/StopEdgeDeploymentStageRequest.h>
#include <aws/sagemaker/model/StopEdgePackagingJobRequest.h>
#include <aws/sagemaker/model/StopHyperParameterTuningJobRequest.h>
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
#include <aws/sagemaker/model/UpdateImageRequest.h>
#include <aws/sagemaker/model/UpdateModelPackageRequest.h>
#include <aws/sagemaker/model/UpdateMonitoringScheduleRequest.h>
#include <aws/sagemaker/model/UpdateNotebookInstanceRequest.h>
#include <aws/sagemaker/model/UpdateNotebookInstanceLifecycleConfigRequest.h>
#include <aws/sagemaker/model/UpdatePipelineRequest.h>
#include <aws/sagemaker/model/UpdatePipelineExecutionRequest.h>
#include <aws/sagemaker/model/UpdateProjectRequest.h>
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

static const char* SERVICE_NAME = "sagemaker";
static const char* ALLOCATION_TAG = "SageMakerClient";

SageMakerClient::SageMakerClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SageMakerErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SageMakerClient::SageMakerClient(const AWSCredentials& credentials,
                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SageMakerErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SageMakerClient::SageMakerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SageMakerErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SageMakerClient::~SageMakerClient()
{
}

void SageMakerClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("SageMaker");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + SageMakerEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void SageMakerClient::OverrideEndpoint(const Aws::String& endpoint)
{
  if (endpoint.compare(0, 7, "http://") == 0 || endpoint.compare(0, 8, "https://") == 0)
  {
      m_uri = endpoint;
  }
  else
  {
      m_uri = m_configScheme + "://" + endpoint;
  }
}

AddAssociationOutcome SageMakerClient::AddAssociation(const AddAssociationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AddAssociationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddAssociationOutcomeCallable SageMakerClient::AddAssociationCallable(const AddAssociationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddAssociationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddAssociation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientAddAssociationAsyncHelper(SageMakerClient const * const clientThis, const AddAssociationRequest& request, const AddAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AddAssociation(request), context);
}

void SageMakerClient::AddAssociationAsync(const AddAssociationRequest& request, const AddAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientAddAssociationAsyncHelper( this, request, handler, context ); } );
}

AddTagsOutcome SageMakerClient::AddTags(const AddTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AddTagsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddTagsOutcomeCallable SageMakerClient::AddTagsCallable(const AddTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientAddTagsAsyncHelper(SageMakerClient const * const clientThis, const AddTagsRequest& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AddTags(request), context);
}

void SageMakerClient::AddTagsAsync(const AddTagsRequest& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientAddTagsAsyncHelper( this, request, handler, context ); } );
}

AssociateTrialComponentOutcome SageMakerClient::AssociateTrialComponent(const AssociateTrialComponentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AssociateTrialComponentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateTrialComponentOutcomeCallable SageMakerClient::AssociateTrialComponentCallable(const AssociateTrialComponentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateTrialComponentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateTrialComponent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientAssociateTrialComponentAsyncHelper(SageMakerClient const * const clientThis, const AssociateTrialComponentRequest& request, const AssociateTrialComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateTrialComponent(request), context);
}

void SageMakerClient::AssociateTrialComponentAsync(const AssociateTrialComponentRequest& request, const AssociateTrialComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientAssociateTrialComponentAsyncHelper( this, request, handler, context ); } );
}

BatchDescribeModelPackageOutcome SageMakerClient::BatchDescribeModelPackage(const BatchDescribeModelPackageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return BatchDescribeModelPackageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchDescribeModelPackageOutcomeCallable SageMakerClient::BatchDescribeModelPackageCallable(const BatchDescribeModelPackageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchDescribeModelPackageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchDescribeModelPackage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientBatchDescribeModelPackageAsyncHelper(SageMakerClient const * const clientThis, const BatchDescribeModelPackageRequest& request, const BatchDescribeModelPackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchDescribeModelPackage(request), context);
}

void SageMakerClient::BatchDescribeModelPackageAsync(const BatchDescribeModelPackageRequest& request, const BatchDescribeModelPackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientBatchDescribeModelPackageAsyncHelper( this, request, handler, context ); } );
}

CreateActionOutcome SageMakerClient::CreateAction(const CreateActionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateActionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateActionOutcomeCallable SageMakerClient::CreateActionCallable(const CreateActionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateActionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientCreateActionAsyncHelper(SageMakerClient const * const clientThis, const CreateActionRequest& request, const CreateActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateAction(request), context);
}

void SageMakerClient::CreateActionAsync(const CreateActionRequest& request, const CreateActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientCreateActionAsyncHelper( this, request, handler, context ); } );
}

CreateAlgorithmOutcome SageMakerClient::CreateAlgorithm(const CreateAlgorithmRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateAlgorithmOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAlgorithmOutcomeCallable SageMakerClient::CreateAlgorithmCallable(const CreateAlgorithmRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAlgorithmOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAlgorithm(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientCreateAlgorithmAsyncHelper(SageMakerClient const * const clientThis, const CreateAlgorithmRequest& request, const CreateAlgorithmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateAlgorithm(request), context);
}

void SageMakerClient::CreateAlgorithmAsync(const CreateAlgorithmRequest& request, const CreateAlgorithmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientCreateAlgorithmAsyncHelper( this, request, handler, context ); } );
}

CreateAppOutcome SageMakerClient::CreateApp(const CreateAppRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateAppOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAppOutcomeCallable SageMakerClient::CreateAppCallable(const CreateAppRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAppOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateApp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientCreateAppAsyncHelper(SageMakerClient const * const clientThis, const CreateAppRequest& request, const CreateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateApp(request), context);
}

void SageMakerClient::CreateAppAsync(const CreateAppRequest& request, const CreateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientCreateAppAsyncHelper( this, request, handler, context ); } );
}

CreateAppImageConfigOutcome SageMakerClient::CreateAppImageConfig(const CreateAppImageConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateAppImageConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAppImageConfigOutcomeCallable SageMakerClient::CreateAppImageConfigCallable(const CreateAppImageConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAppImageConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAppImageConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientCreateAppImageConfigAsyncHelper(SageMakerClient const * const clientThis, const CreateAppImageConfigRequest& request, const CreateAppImageConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateAppImageConfig(request), context);
}

void SageMakerClient::CreateAppImageConfigAsync(const CreateAppImageConfigRequest& request, const CreateAppImageConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientCreateAppImageConfigAsyncHelper( this, request, handler, context ); } );
}

CreateArtifactOutcome SageMakerClient::CreateArtifact(const CreateArtifactRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateArtifactOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateArtifactOutcomeCallable SageMakerClient::CreateArtifactCallable(const CreateArtifactRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateArtifactOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateArtifact(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientCreateArtifactAsyncHelper(SageMakerClient const * const clientThis, const CreateArtifactRequest& request, const CreateArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateArtifact(request), context);
}

void SageMakerClient::CreateArtifactAsync(const CreateArtifactRequest& request, const CreateArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientCreateArtifactAsyncHelper( this, request, handler, context ); } );
}

CreateAutoMLJobOutcome SageMakerClient::CreateAutoMLJob(const CreateAutoMLJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateAutoMLJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAutoMLJobOutcomeCallable SageMakerClient::CreateAutoMLJobCallable(const CreateAutoMLJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAutoMLJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAutoMLJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientCreateAutoMLJobAsyncHelper(SageMakerClient const * const clientThis, const CreateAutoMLJobRequest& request, const CreateAutoMLJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateAutoMLJob(request), context);
}

void SageMakerClient::CreateAutoMLJobAsync(const CreateAutoMLJobRequest& request, const CreateAutoMLJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientCreateAutoMLJobAsyncHelper( this, request, handler, context ); } );
}

CreateCodeRepositoryOutcome SageMakerClient::CreateCodeRepository(const CreateCodeRepositoryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateCodeRepositoryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateCodeRepositoryOutcomeCallable SageMakerClient::CreateCodeRepositoryCallable(const CreateCodeRepositoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCodeRepositoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCodeRepository(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientCreateCodeRepositoryAsyncHelper(SageMakerClient const * const clientThis, const CreateCodeRepositoryRequest& request, const CreateCodeRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateCodeRepository(request), context);
}

void SageMakerClient::CreateCodeRepositoryAsync(const CreateCodeRepositoryRequest& request, const CreateCodeRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientCreateCodeRepositoryAsyncHelper( this, request, handler, context ); } );
}

CreateCompilationJobOutcome SageMakerClient::CreateCompilationJob(const CreateCompilationJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateCompilationJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateCompilationJobOutcomeCallable SageMakerClient::CreateCompilationJobCallable(const CreateCompilationJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCompilationJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCompilationJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientCreateCompilationJobAsyncHelper(SageMakerClient const * const clientThis, const CreateCompilationJobRequest& request, const CreateCompilationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateCompilationJob(request), context);
}

void SageMakerClient::CreateCompilationJobAsync(const CreateCompilationJobRequest& request, const CreateCompilationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientCreateCompilationJobAsyncHelper( this, request, handler, context ); } );
}

CreateContextOutcome SageMakerClient::CreateContext(const CreateContextRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateContextOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateContextOutcomeCallable SageMakerClient::CreateContextCallable(const CreateContextRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateContextOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateContext(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientCreateContextAsyncHelper(SageMakerClient const * const clientThis, const CreateContextRequest& request, const CreateContextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateContext(request), context);
}

void SageMakerClient::CreateContextAsync(const CreateContextRequest& request, const CreateContextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientCreateContextAsyncHelper( this, request, handler, context ); } );
}

CreateDataQualityJobDefinitionOutcome SageMakerClient::CreateDataQualityJobDefinition(const CreateDataQualityJobDefinitionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateDataQualityJobDefinitionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDataQualityJobDefinitionOutcomeCallable SageMakerClient::CreateDataQualityJobDefinitionCallable(const CreateDataQualityJobDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDataQualityJobDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDataQualityJobDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientCreateDataQualityJobDefinitionAsyncHelper(SageMakerClient const * const clientThis, const CreateDataQualityJobDefinitionRequest& request, const CreateDataQualityJobDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDataQualityJobDefinition(request), context);
}

void SageMakerClient::CreateDataQualityJobDefinitionAsync(const CreateDataQualityJobDefinitionRequest& request, const CreateDataQualityJobDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientCreateDataQualityJobDefinitionAsyncHelper( this, request, handler, context ); } );
}

CreateDeviceFleetOutcome SageMakerClient::CreateDeviceFleet(const CreateDeviceFleetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateDeviceFleetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDeviceFleetOutcomeCallable SageMakerClient::CreateDeviceFleetCallable(const CreateDeviceFleetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDeviceFleetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDeviceFleet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientCreateDeviceFleetAsyncHelper(SageMakerClient const * const clientThis, const CreateDeviceFleetRequest& request, const CreateDeviceFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDeviceFleet(request), context);
}

void SageMakerClient::CreateDeviceFleetAsync(const CreateDeviceFleetRequest& request, const CreateDeviceFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientCreateDeviceFleetAsyncHelper( this, request, handler, context ); } );
}

CreateDomainOutcome SageMakerClient::CreateDomain(const CreateDomainRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateDomainOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDomainOutcomeCallable SageMakerClient::CreateDomainCallable(const CreateDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientCreateDomainAsyncHelper(SageMakerClient const * const clientThis, const CreateDomainRequest& request, const CreateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDomain(request), context);
}

void SageMakerClient::CreateDomainAsync(const CreateDomainRequest& request, const CreateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientCreateDomainAsyncHelper( this, request, handler, context ); } );
}

CreateEdgeDeploymentPlanOutcome SageMakerClient::CreateEdgeDeploymentPlan(const CreateEdgeDeploymentPlanRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateEdgeDeploymentPlanOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateEdgeDeploymentPlanOutcomeCallable SageMakerClient::CreateEdgeDeploymentPlanCallable(const CreateEdgeDeploymentPlanRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateEdgeDeploymentPlanOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateEdgeDeploymentPlan(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientCreateEdgeDeploymentPlanAsyncHelper(SageMakerClient const * const clientThis, const CreateEdgeDeploymentPlanRequest& request, const CreateEdgeDeploymentPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateEdgeDeploymentPlan(request), context);
}

void SageMakerClient::CreateEdgeDeploymentPlanAsync(const CreateEdgeDeploymentPlanRequest& request, const CreateEdgeDeploymentPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientCreateEdgeDeploymentPlanAsyncHelper( this, request, handler, context ); } );
}

CreateEdgeDeploymentStageOutcome SageMakerClient::CreateEdgeDeploymentStage(const CreateEdgeDeploymentStageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateEdgeDeploymentStageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateEdgeDeploymentStageOutcomeCallable SageMakerClient::CreateEdgeDeploymentStageCallable(const CreateEdgeDeploymentStageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateEdgeDeploymentStageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateEdgeDeploymentStage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientCreateEdgeDeploymentStageAsyncHelper(SageMakerClient const * const clientThis, const CreateEdgeDeploymentStageRequest& request, const CreateEdgeDeploymentStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateEdgeDeploymentStage(request), context);
}

void SageMakerClient::CreateEdgeDeploymentStageAsync(const CreateEdgeDeploymentStageRequest& request, const CreateEdgeDeploymentStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientCreateEdgeDeploymentStageAsyncHelper( this, request, handler, context ); } );
}

CreateEdgePackagingJobOutcome SageMakerClient::CreateEdgePackagingJob(const CreateEdgePackagingJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateEdgePackagingJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateEdgePackagingJobOutcomeCallable SageMakerClient::CreateEdgePackagingJobCallable(const CreateEdgePackagingJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateEdgePackagingJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateEdgePackagingJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientCreateEdgePackagingJobAsyncHelper(SageMakerClient const * const clientThis, const CreateEdgePackagingJobRequest& request, const CreateEdgePackagingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateEdgePackagingJob(request), context);
}

void SageMakerClient::CreateEdgePackagingJobAsync(const CreateEdgePackagingJobRequest& request, const CreateEdgePackagingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientCreateEdgePackagingJobAsyncHelper( this, request, handler, context ); } );
}

CreateEndpointOutcome SageMakerClient::CreateEndpoint(const CreateEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateEndpointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateEndpointOutcomeCallable SageMakerClient::CreateEndpointCallable(const CreateEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientCreateEndpointAsyncHelper(SageMakerClient const * const clientThis, const CreateEndpointRequest& request, const CreateEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateEndpoint(request), context);
}

void SageMakerClient::CreateEndpointAsync(const CreateEndpointRequest& request, const CreateEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientCreateEndpointAsyncHelper( this, request, handler, context ); } );
}

CreateEndpointConfigOutcome SageMakerClient::CreateEndpointConfig(const CreateEndpointConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateEndpointConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateEndpointConfigOutcomeCallable SageMakerClient::CreateEndpointConfigCallable(const CreateEndpointConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateEndpointConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateEndpointConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientCreateEndpointConfigAsyncHelper(SageMakerClient const * const clientThis, const CreateEndpointConfigRequest& request, const CreateEndpointConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateEndpointConfig(request), context);
}

void SageMakerClient::CreateEndpointConfigAsync(const CreateEndpointConfigRequest& request, const CreateEndpointConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientCreateEndpointConfigAsyncHelper( this, request, handler, context ); } );
}

CreateExperimentOutcome SageMakerClient::CreateExperiment(const CreateExperimentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateExperimentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateExperimentOutcomeCallable SageMakerClient::CreateExperimentCallable(const CreateExperimentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateExperimentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateExperiment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientCreateExperimentAsyncHelper(SageMakerClient const * const clientThis, const CreateExperimentRequest& request, const CreateExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateExperiment(request), context);
}

void SageMakerClient::CreateExperimentAsync(const CreateExperimentRequest& request, const CreateExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientCreateExperimentAsyncHelper( this, request, handler, context ); } );
}

CreateFeatureGroupOutcome SageMakerClient::CreateFeatureGroup(const CreateFeatureGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateFeatureGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateFeatureGroupOutcomeCallable SageMakerClient::CreateFeatureGroupCallable(const CreateFeatureGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFeatureGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFeatureGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientCreateFeatureGroupAsyncHelper(SageMakerClient const * const clientThis, const CreateFeatureGroupRequest& request, const CreateFeatureGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateFeatureGroup(request), context);
}

void SageMakerClient::CreateFeatureGroupAsync(const CreateFeatureGroupRequest& request, const CreateFeatureGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientCreateFeatureGroupAsyncHelper( this, request, handler, context ); } );
}

CreateFlowDefinitionOutcome SageMakerClient::CreateFlowDefinition(const CreateFlowDefinitionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateFlowDefinitionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateFlowDefinitionOutcomeCallable SageMakerClient::CreateFlowDefinitionCallable(const CreateFlowDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFlowDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFlowDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientCreateFlowDefinitionAsyncHelper(SageMakerClient const * const clientThis, const CreateFlowDefinitionRequest& request, const CreateFlowDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateFlowDefinition(request), context);
}

void SageMakerClient::CreateFlowDefinitionAsync(const CreateFlowDefinitionRequest& request, const CreateFlowDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientCreateFlowDefinitionAsyncHelper( this, request, handler, context ); } );
}

CreateHumanTaskUiOutcome SageMakerClient::CreateHumanTaskUi(const CreateHumanTaskUiRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateHumanTaskUiOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateHumanTaskUiOutcomeCallable SageMakerClient::CreateHumanTaskUiCallable(const CreateHumanTaskUiRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateHumanTaskUiOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateHumanTaskUi(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientCreateHumanTaskUiAsyncHelper(SageMakerClient const * const clientThis, const CreateHumanTaskUiRequest& request, const CreateHumanTaskUiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateHumanTaskUi(request), context);
}

void SageMakerClient::CreateHumanTaskUiAsync(const CreateHumanTaskUiRequest& request, const CreateHumanTaskUiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientCreateHumanTaskUiAsyncHelper( this, request, handler, context ); } );
}

CreateHyperParameterTuningJobOutcome SageMakerClient::CreateHyperParameterTuningJob(const CreateHyperParameterTuningJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateHyperParameterTuningJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateHyperParameterTuningJobOutcomeCallable SageMakerClient::CreateHyperParameterTuningJobCallable(const CreateHyperParameterTuningJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateHyperParameterTuningJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateHyperParameterTuningJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientCreateHyperParameterTuningJobAsyncHelper(SageMakerClient const * const clientThis, const CreateHyperParameterTuningJobRequest& request, const CreateHyperParameterTuningJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateHyperParameterTuningJob(request), context);
}

void SageMakerClient::CreateHyperParameterTuningJobAsync(const CreateHyperParameterTuningJobRequest& request, const CreateHyperParameterTuningJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientCreateHyperParameterTuningJobAsyncHelper( this, request, handler, context ); } );
}

CreateImageOutcome SageMakerClient::CreateImage(const CreateImageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateImageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateImageOutcomeCallable SageMakerClient::CreateImageCallable(const CreateImageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateImageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateImage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientCreateImageAsyncHelper(SageMakerClient const * const clientThis, const CreateImageRequest& request, const CreateImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateImage(request), context);
}

void SageMakerClient::CreateImageAsync(const CreateImageRequest& request, const CreateImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientCreateImageAsyncHelper( this, request, handler, context ); } );
}

CreateImageVersionOutcome SageMakerClient::CreateImageVersion(const CreateImageVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateImageVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateImageVersionOutcomeCallable SageMakerClient::CreateImageVersionCallable(const CreateImageVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateImageVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateImageVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientCreateImageVersionAsyncHelper(SageMakerClient const * const clientThis, const CreateImageVersionRequest& request, const CreateImageVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateImageVersion(request), context);
}

void SageMakerClient::CreateImageVersionAsync(const CreateImageVersionRequest& request, const CreateImageVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientCreateImageVersionAsyncHelper( this, request, handler, context ); } );
}

CreateInferenceRecommendationsJobOutcome SageMakerClient::CreateInferenceRecommendationsJob(const CreateInferenceRecommendationsJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateInferenceRecommendationsJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateInferenceRecommendationsJobOutcomeCallable SageMakerClient::CreateInferenceRecommendationsJobCallable(const CreateInferenceRecommendationsJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateInferenceRecommendationsJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateInferenceRecommendationsJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientCreateInferenceRecommendationsJobAsyncHelper(SageMakerClient const * const clientThis, const CreateInferenceRecommendationsJobRequest& request, const CreateInferenceRecommendationsJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateInferenceRecommendationsJob(request), context);
}

void SageMakerClient::CreateInferenceRecommendationsJobAsync(const CreateInferenceRecommendationsJobRequest& request, const CreateInferenceRecommendationsJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientCreateInferenceRecommendationsJobAsyncHelper( this, request, handler, context ); } );
}

CreateLabelingJobOutcome SageMakerClient::CreateLabelingJob(const CreateLabelingJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateLabelingJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateLabelingJobOutcomeCallable SageMakerClient::CreateLabelingJobCallable(const CreateLabelingJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLabelingJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLabelingJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientCreateLabelingJobAsyncHelper(SageMakerClient const * const clientThis, const CreateLabelingJobRequest& request, const CreateLabelingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateLabelingJob(request), context);
}

void SageMakerClient::CreateLabelingJobAsync(const CreateLabelingJobRequest& request, const CreateLabelingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientCreateLabelingJobAsyncHelper( this, request, handler, context ); } );
}

CreateModelOutcome SageMakerClient::CreateModel(const CreateModelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateModelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateModelOutcomeCallable SageMakerClient::CreateModelCallable(const CreateModelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateModelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateModel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientCreateModelAsyncHelper(SageMakerClient const * const clientThis, const CreateModelRequest& request, const CreateModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateModel(request), context);
}

void SageMakerClient::CreateModelAsync(const CreateModelRequest& request, const CreateModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientCreateModelAsyncHelper( this, request, handler, context ); } );
}

CreateModelBiasJobDefinitionOutcome SageMakerClient::CreateModelBiasJobDefinition(const CreateModelBiasJobDefinitionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateModelBiasJobDefinitionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateModelBiasJobDefinitionOutcomeCallable SageMakerClient::CreateModelBiasJobDefinitionCallable(const CreateModelBiasJobDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateModelBiasJobDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateModelBiasJobDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientCreateModelBiasJobDefinitionAsyncHelper(SageMakerClient const * const clientThis, const CreateModelBiasJobDefinitionRequest& request, const CreateModelBiasJobDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateModelBiasJobDefinition(request), context);
}

void SageMakerClient::CreateModelBiasJobDefinitionAsync(const CreateModelBiasJobDefinitionRequest& request, const CreateModelBiasJobDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientCreateModelBiasJobDefinitionAsyncHelper( this, request, handler, context ); } );
}

CreateModelExplainabilityJobDefinitionOutcome SageMakerClient::CreateModelExplainabilityJobDefinition(const CreateModelExplainabilityJobDefinitionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateModelExplainabilityJobDefinitionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateModelExplainabilityJobDefinitionOutcomeCallable SageMakerClient::CreateModelExplainabilityJobDefinitionCallable(const CreateModelExplainabilityJobDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateModelExplainabilityJobDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateModelExplainabilityJobDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientCreateModelExplainabilityJobDefinitionAsyncHelper(SageMakerClient const * const clientThis, const CreateModelExplainabilityJobDefinitionRequest& request, const CreateModelExplainabilityJobDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateModelExplainabilityJobDefinition(request), context);
}

void SageMakerClient::CreateModelExplainabilityJobDefinitionAsync(const CreateModelExplainabilityJobDefinitionRequest& request, const CreateModelExplainabilityJobDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientCreateModelExplainabilityJobDefinitionAsyncHelper( this, request, handler, context ); } );
}

CreateModelPackageOutcome SageMakerClient::CreateModelPackage(const CreateModelPackageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateModelPackageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateModelPackageOutcomeCallable SageMakerClient::CreateModelPackageCallable(const CreateModelPackageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateModelPackageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateModelPackage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientCreateModelPackageAsyncHelper(SageMakerClient const * const clientThis, const CreateModelPackageRequest& request, const CreateModelPackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateModelPackage(request), context);
}

void SageMakerClient::CreateModelPackageAsync(const CreateModelPackageRequest& request, const CreateModelPackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientCreateModelPackageAsyncHelper( this, request, handler, context ); } );
}

CreateModelPackageGroupOutcome SageMakerClient::CreateModelPackageGroup(const CreateModelPackageGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateModelPackageGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateModelPackageGroupOutcomeCallable SageMakerClient::CreateModelPackageGroupCallable(const CreateModelPackageGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateModelPackageGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateModelPackageGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientCreateModelPackageGroupAsyncHelper(SageMakerClient const * const clientThis, const CreateModelPackageGroupRequest& request, const CreateModelPackageGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateModelPackageGroup(request), context);
}

void SageMakerClient::CreateModelPackageGroupAsync(const CreateModelPackageGroupRequest& request, const CreateModelPackageGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientCreateModelPackageGroupAsyncHelper( this, request, handler, context ); } );
}

CreateModelQualityJobDefinitionOutcome SageMakerClient::CreateModelQualityJobDefinition(const CreateModelQualityJobDefinitionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateModelQualityJobDefinitionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateModelQualityJobDefinitionOutcomeCallable SageMakerClient::CreateModelQualityJobDefinitionCallable(const CreateModelQualityJobDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateModelQualityJobDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateModelQualityJobDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientCreateModelQualityJobDefinitionAsyncHelper(SageMakerClient const * const clientThis, const CreateModelQualityJobDefinitionRequest& request, const CreateModelQualityJobDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateModelQualityJobDefinition(request), context);
}

void SageMakerClient::CreateModelQualityJobDefinitionAsync(const CreateModelQualityJobDefinitionRequest& request, const CreateModelQualityJobDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientCreateModelQualityJobDefinitionAsyncHelper( this, request, handler, context ); } );
}

CreateMonitoringScheduleOutcome SageMakerClient::CreateMonitoringSchedule(const CreateMonitoringScheduleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateMonitoringScheduleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateMonitoringScheduleOutcomeCallable SageMakerClient::CreateMonitoringScheduleCallable(const CreateMonitoringScheduleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateMonitoringScheduleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateMonitoringSchedule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientCreateMonitoringScheduleAsyncHelper(SageMakerClient const * const clientThis, const CreateMonitoringScheduleRequest& request, const CreateMonitoringScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateMonitoringSchedule(request), context);
}

void SageMakerClient::CreateMonitoringScheduleAsync(const CreateMonitoringScheduleRequest& request, const CreateMonitoringScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientCreateMonitoringScheduleAsyncHelper( this, request, handler, context ); } );
}

CreateNotebookInstanceOutcome SageMakerClient::CreateNotebookInstance(const CreateNotebookInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateNotebookInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateNotebookInstanceOutcomeCallable SageMakerClient::CreateNotebookInstanceCallable(const CreateNotebookInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateNotebookInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateNotebookInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientCreateNotebookInstanceAsyncHelper(SageMakerClient const * const clientThis, const CreateNotebookInstanceRequest& request, const CreateNotebookInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateNotebookInstance(request), context);
}

void SageMakerClient::CreateNotebookInstanceAsync(const CreateNotebookInstanceRequest& request, const CreateNotebookInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientCreateNotebookInstanceAsyncHelper( this, request, handler, context ); } );
}

CreateNotebookInstanceLifecycleConfigOutcome SageMakerClient::CreateNotebookInstanceLifecycleConfig(const CreateNotebookInstanceLifecycleConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateNotebookInstanceLifecycleConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateNotebookInstanceLifecycleConfigOutcomeCallable SageMakerClient::CreateNotebookInstanceLifecycleConfigCallable(const CreateNotebookInstanceLifecycleConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateNotebookInstanceLifecycleConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateNotebookInstanceLifecycleConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientCreateNotebookInstanceLifecycleConfigAsyncHelper(SageMakerClient const * const clientThis, const CreateNotebookInstanceLifecycleConfigRequest& request, const CreateNotebookInstanceLifecycleConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateNotebookInstanceLifecycleConfig(request), context);
}

void SageMakerClient::CreateNotebookInstanceLifecycleConfigAsync(const CreateNotebookInstanceLifecycleConfigRequest& request, const CreateNotebookInstanceLifecycleConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientCreateNotebookInstanceLifecycleConfigAsyncHelper( this, request, handler, context ); } );
}

CreatePipelineOutcome SageMakerClient::CreatePipeline(const CreatePipelineRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreatePipelineOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePipelineOutcomeCallable SageMakerClient::CreatePipelineCallable(const CreatePipelineRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePipelineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePipeline(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientCreatePipelineAsyncHelper(SageMakerClient const * const clientThis, const CreatePipelineRequest& request, const CreatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreatePipeline(request), context);
}

void SageMakerClient::CreatePipelineAsync(const CreatePipelineRequest& request, const CreatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientCreatePipelineAsyncHelper( this, request, handler, context ); } );
}

CreatePresignedDomainUrlOutcome SageMakerClient::CreatePresignedDomainUrl(const CreatePresignedDomainUrlRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreatePresignedDomainUrlOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePresignedDomainUrlOutcomeCallable SageMakerClient::CreatePresignedDomainUrlCallable(const CreatePresignedDomainUrlRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePresignedDomainUrlOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePresignedDomainUrl(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientCreatePresignedDomainUrlAsyncHelper(SageMakerClient const * const clientThis, const CreatePresignedDomainUrlRequest& request, const CreatePresignedDomainUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreatePresignedDomainUrl(request), context);
}

void SageMakerClient::CreatePresignedDomainUrlAsync(const CreatePresignedDomainUrlRequest& request, const CreatePresignedDomainUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientCreatePresignedDomainUrlAsyncHelper( this, request, handler, context ); } );
}

CreatePresignedNotebookInstanceUrlOutcome SageMakerClient::CreatePresignedNotebookInstanceUrl(const CreatePresignedNotebookInstanceUrlRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreatePresignedNotebookInstanceUrlOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePresignedNotebookInstanceUrlOutcomeCallable SageMakerClient::CreatePresignedNotebookInstanceUrlCallable(const CreatePresignedNotebookInstanceUrlRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePresignedNotebookInstanceUrlOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePresignedNotebookInstanceUrl(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientCreatePresignedNotebookInstanceUrlAsyncHelper(SageMakerClient const * const clientThis, const CreatePresignedNotebookInstanceUrlRequest& request, const CreatePresignedNotebookInstanceUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreatePresignedNotebookInstanceUrl(request), context);
}

void SageMakerClient::CreatePresignedNotebookInstanceUrlAsync(const CreatePresignedNotebookInstanceUrlRequest& request, const CreatePresignedNotebookInstanceUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientCreatePresignedNotebookInstanceUrlAsyncHelper( this, request, handler, context ); } );
}

CreateProcessingJobOutcome SageMakerClient::CreateProcessingJob(const CreateProcessingJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateProcessingJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateProcessingJobOutcomeCallable SageMakerClient::CreateProcessingJobCallable(const CreateProcessingJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateProcessingJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateProcessingJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientCreateProcessingJobAsyncHelper(SageMakerClient const * const clientThis, const CreateProcessingJobRequest& request, const CreateProcessingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateProcessingJob(request), context);
}

void SageMakerClient::CreateProcessingJobAsync(const CreateProcessingJobRequest& request, const CreateProcessingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientCreateProcessingJobAsyncHelper( this, request, handler, context ); } );
}

CreateProjectOutcome SageMakerClient::CreateProject(const CreateProjectRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateProjectOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateProjectOutcomeCallable SageMakerClient::CreateProjectCallable(const CreateProjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateProjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateProject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientCreateProjectAsyncHelper(SageMakerClient const * const clientThis, const CreateProjectRequest& request, const CreateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateProject(request), context);
}

void SageMakerClient::CreateProjectAsync(const CreateProjectRequest& request, const CreateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientCreateProjectAsyncHelper( this, request, handler, context ); } );
}

CreateStudioLifecycleConfigOutcome SageMakerClient::CreateStudioLifecycleConfig(const CreateStudioLifecycleConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateStudioLifecycleConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateStudioLifecycleConfigOutcomeCallable SageMakerClient::CreateStudioLifecycleConfigCallable(const CreateStudioLifecycleConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateStudioLifecycleConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateStudioLifecycleConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientCreateStudioLifecycleConfigAsyncHelper(SageMakerClient const * const clientThis, const CreateStudioLifecycleConfigRequest& request, const CreateStudioLifecycleConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateStudioLifecycleConfig(request), context);
}

void SageMakerClient::CreateStudioLifecycleConfigAsync(const CreateStudioLifecycleConfigRequest& request, const CreateStudioLifecycleConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientCreateStudioLifecycleConfigAsyncHelper( this, request, handler, context ); } );
}

CreateTrainingJobOutcome SageMakerClient::CreateTrainingJob(const CreateTrainingJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateTrainingJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateTrainingJobOutcomeCallable SageMakerClient::CreateTrainingJobCallable(const CreateTrainingJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTrainingJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTrainingJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientCreateTrainingJobAsyncHelper(SageMakerClient const * const clientThis, const CreateTrainingJobRequest& request, const CreateTrainingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateTrainingJob(request), context);
}

void SageMakerClient::CreateTrainingJobAsync(const CreateTrainingJobRequest& request, const CreateTrainingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientCreateTrainingJobAsyncHelper( this, request, handler, context ); } );
}

CreateTransformJobOutcome SageMakerClient::CreateTransformJob(const CreateTransformJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateTransformJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateTransformJobOutcomeCallable SageMakerClient::CreateTransformJobCallable(const CreateTransformJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTransformJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTransformJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientCreateTransformJobAsyncHelper(SageMakerClient const * const clientThis, const CreateTransformJobRequest& request, const CreateTransformJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateTransformJob(request), context);
}

void SageMakerClient::CreateTransformJobAsync(const CreateTransformJobRequest& request, const CreateTransformJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientCreateTransformJobAsyncHelper( this, request, handler, context ); } );
}

CreateTrialOutcome SageMakerClient::CreateTrial(const CreateTrialRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateTrialOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateTrialOutcomeCallable SageMakerClient::CreateTrialCallable(const CreateTrialRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTrialOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTrial(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientCreateTrialAsyncHelper(SageMakerClient const * const clientThis, const CreateTrialRequest& request, const CreateTrialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateTrial(request), context);
}

void SageMakerClient::CreateTrialAsync(const CreateTrialRequest& request, const CreateTrialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientCreateTrialAsyncHelper( this, request, handler, context ); } );
}

CreateTrialComponentOutcome SageMakerClient::CreateTrialComponent(const CreateTrialComponentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateTrialComponentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateTrialComponentOutcomeCallable SageMakerClient::CreateTrialComponentCallable(const CreateTrialComponentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTrialComponentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTrialComponent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientCreateTrialComponentAsyncHelper(SageMakerClient const * const clientThis, const CreateTrialComponentRequest& request, const CreateTrialComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateTrialComponent(request), context);
}

void SageMakerClient::CreateTrialComponentAsync(const CreateTrialComponentRequest& request, const CreateTrialComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientCreateTrialComponentAsyncHelper( this, request, handler, context ); } );
}

CreateUserProfileOutcome SageMakerClient::CreateUserProfile(const CreateUserProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateUserProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateUserProfileOutcomeCallable SageMakerClient::CreateUserProfileCallable(const CreateUserProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateUserProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateUserProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientCreateUserProfileAsyncHelper(SageMakerClient const * const clientThis, const CreateUserProfileRequest& request, const CreateUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateUserProfile(request), context);
}

void SageMakerClient::CreateUserProfileAsync(const CreateUserProfileRequest& request, const CreateUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientCreateUserProfileAsyncHelper( this, request, handler, context ); } );
}

CreateWorkforceOutcome SageMakerClient::CreateWorkforce(const CreateWorkforceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateWorkforceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateWorkforceOutcomeCallable SageMakerClient::CreateWorkforceCallable(const CreateWorkforceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateWorkforceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateWorkforce(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientCreateWorkforceAsyncHelper(SageMakerClient const * const clientThis, const CreateWorkforceRequest& request, const CreateWorkforceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateWorkforce(request), context);
}

void SageMakerClient::CreateWorkforceAsync(const CreateWorkforceRequest& request, const CreateWorkforceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientCreateWorkforceAsyncHelper( this, request, handler, context ); } );
}

CreateWorkteamOutcome SageMakerClient::CreateWorkteam(const CreateWorkteamRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateWorkteamOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateWorkteamOutcomeCallable SageMakerClient::CreateWorkteamCallable(const CreateWorkteamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateWorkteamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateWorkteam(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientCreateWorkteamAsyncHelper(SageMakerClient const * const clientThis, const CreateWorkteamRequest& request, const CreateWorkteamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateWorkteam(request), context);
}

void SageMakerClient::CreateWorkteamAsync(const CreateWorkteamRequest& request, const CreateWorkteamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientCreateWorkteamAsyncHelper( this, request, handler, context ); } );
}

DeleteActionOutcome SageMakerClient::DeleteAction(const DeleteActionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteActionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteActionOutcomeCallable SageMakerClient::DeleteActionCallable(const DeleteActionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteActionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDeleteActionAsyncHelper(SageMakerClient const * const clientThis, const DeleteActionRequest& request, const DeleteActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteAction(request), context);
}

void SageMakerClient::DeleteActionAsync(const DeleteActionRequest& request, const DeleteActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDeleteActionAsyncHelper( this, request, handler, context ); } );
}

DeleteAlgorithmOutcome SageMakerClient::DeleteAlgorithm(const DeleteAlgorithmRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteAlgorithmOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteAlgorithmOutcomeCallable SageMakerClient::DeleteAlgorithmCallable(const DeleteAlgorithmRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAlgorithmOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAlgorithm(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDeleteAlgorithmAsyncHelper(SageMakerClient const * const clientThis, const DeleteAlgorithmRequest& request, const DeleteAlgorithmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteAlgorithm(request), context);
}

void SageMakerClient::DeleteAlgorithmAsync(const DeleteAlgorithmRequest& request, const DeleteAlgorithmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDeleteAlgorithmAsyncHelper( this, request, handler, context ); } );
}

DeleteAppOutcome SageMakerClient::DeleteApp(const DeleteAppRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteAppOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteAppOutcomeCallable SageMakerClient::DeleteAppCallable(const DeleteAppRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAppOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteApp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDeleteAppAsyncHelper(SageMakerClient const * const clientThis, const DeleteAppRequest& request, const DeleteAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteApp(request), context);
}

void SageMakerClient::DeleteAppAsync(const DeleteAppRequest& request, const DeleteAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDeleteAppAsyncHelper( this, request, handler, context ); } );
}

DeleteAppImageConfigOutcome SageMakerClient::DeleteAppImageConfig(const DeleteAppImageConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteAppImageConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteAppImageConfigOutcomeCallable SageMakerClient::DeleteAppImageConfigCallable(const DeleteAppImageConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAppImageConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAppImageConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDeleteAppImageConfigAsyncHelper(SageMakerClient const * const clientThis, const DeleteAppImageConfigRequest& request, const DeleteAppImageConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteAppImageConfig(request), context);
}

void SageMakerClient::DeleteAppImageConfigAsync(const DeleteAppImageConfigRequest& request, const DeleteAppImageConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDeleteAppImageConfigAsyncHelper( this, request, handler, context ); } );
}

DeleteArtifactOutcome SageMakerClient::DeleteArtifact(const DeleteArtifactRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteArtifactOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteArtifactOutcomeCallable SageMakerClient::DeleteArtifactCallable(const DeleteArtifactRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteArtifactOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteArtifact(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDeleteArtifactAsyncHelper(SageMakerClient const * const clientThis, const DeleteArtifactRequest& request, const DeleteArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteArtifact(request), context);
}

void SageMakerClient::DeleteArtifactAsync(const DeleteArtifactRequest& request, const DeleteArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDeleteArtifactAsyncHelper( this, request, handler, context ); } );
}

DeleteAssociationOutcome SageMakerClient::DeleteAssociation(const DeleteAssociationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteAssociationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteAssociationOutcomeCallable SageMakerClient::DeleteAssociationCallable(const DeleteAssociationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAssociationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAssociation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDeleteAssociationAsyncHelper(SageMakerClient const * const clientThis, const DeleteAssociationRequest& request, const DeleteAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteAssociation(request), context);
}

void SageMakerClient::DeleteAssociationAsync(const DeleteAssociationRequest& request, const DeleteAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDeleteAssociationAsyncHelper( this, request, handler, context ); } );
}

DeleteCodeRepositoryOutcome SageMakerClient::DeleteCodeRepository(const DeleteCodeRepositoryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteCodeRepositoryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteCodeRepositoryOutcomeCallable SageMakerClient::DeleteCodeRepositoryCallable(const DeleteCodeRepositoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCodeRepositoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCodeRepository(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDeleteCodeRepositoryAsyncHelper(SageMakerClient const * const clientThis, const DeleteCodeRepositoryRequest& request, const DeleteCodeRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteCodeRepository(request), context);
}

void SageMakerClient::DeleteCodeRepositoryAsync(const DeleteCodeRepositoryRequest& request, const DeleteCodeRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDeleteCodeRepositoryAsyncHelper( this, request, handler, context ); } );
}

DeleteContextOutcome SageMakerClient::DeleteContext(const DeleteContextRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteContextOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteContextOutcomeCallable SageMakerClient::DeleteContextCallable(const DeleteContextRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteContextOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteContext(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDeleteContextAsyncHelper(SageMakerClient const * const clientThis, const DeleteContextRequest& request, const DeleteContextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteContext(request), context);
}

void SageMakerClient::DeleteContextAsync(const DeleteContextRequest& request, const DeleteContextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDeleteContextAsyncHelper( this, request, handler, context ); } );
}

DeleteDataQualityJobDefinitionOutcome SageMakerClient::DeleteDataQualityJobDefinition(const DeleteDataQualityJobDefinitionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteDataQualityJobDefinitionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteDataQualityJobDefinitionOutcomeCallable SageMakerClient::DeleteDataQualityJobDefinitionCallable(const DeleteDataQualityJobDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDataQualityJobDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDataQualityJobDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDeleteDataQualityJobDefinitionAsyncHelper(SageMakerClient const * const clientThis, const DeleteDataQualityJobDefinitionRequest& request, const DeleteDataQualityJobDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDataQualityJobDefinition(request), context);
}

void SageMakerClient::DeleteDataQualityJobDefinitionAsync(const DeleteDataQualityJobDefinitionRequest& request, const DeleteDataQualityJobDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDeleteDataQualityJobDefinitionAsyncHelper( this, request, handler, context ); } );
}

DeleteDeviceFleetOutcome SageMakerClient::DeleteDeviceFleet(const DeleteDeviceFleetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteDeviceFleetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteDeviceFleetOutcomeCallable SageMakerClient::DeleteDeviceFleetCallable(const DeleteDeviceFleetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDeviceFleetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDeviceFleet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDeleteDeviceFleetAsyncHelper(SageMakerClient const * const clientThis, const DeleteDeviceFleetRequest& request, const DeleteDeviceFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDeviceFleet(request), context);
}

void SageMakerClient::DeleteDeviceFleetAsync(const DeleteDeviceFleetRequest& request, const DeleteDeviceFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDeleteDeviceFleetAsyncHelper( this, request, handler, context ); } );
}

DeleteDomainOutcome SageMakerClient::DeleteDomain(const DeleteDomainRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteDomainOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteDomainOutcomeCallable SageMakerClient::DeleteDomainCallable(const DeleteDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDeleteDomainAsyncHelper(SageMakerClient const * const clientThis, const DeleteDomainRequest& request, const DeleteDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDomain(request), context);
}

void SageMakerClient::DeleteDomainAsync(const DeleteDomainRequest& request, const DeleteDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDeleteDomainAsyncHelper( this, request, handler, context ); } );
}

DeleteEdgeDeploymentPlanOutcome SageMakerClient::DeleteEdgeDeploymentPlan(const DeleteEdgeDeploymentPlanRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteEdgeDeploymentPlanOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteEdgeDeploymentPlanOutcomeCallable SageMakerClient::DeleteEdgeDeploymentPlanCallable(const DeleteEdgeDeploymentPlanRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEdgeDeploymentPlanOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEdgeDeploymentPlan(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDeleteEdgeDeploymentPlanAsyncHelper(SageMakerClient const * const clientThis, const DeleteEdgeDeploymentPlanRequest& request, const DeleteEdgeDeploymentPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteEdgeDeploymentPlan(request), context);
}

void SageMakerClient::DeleteEdgeDeploymentPlanAsync(const DeleteEdgeDeploymentPlanRequest& request, const DeleteEdgeDeploymentPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDeleteEdgeDeploymentPlanAsyncHelper( this, request, handler, context ); } );
}

DeleteEdgeDeploymentStageOutcome SageMakerClient::DeleteEdgeDeploymentStage(const DeleteEdgeDeploymentStageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteEdgeDeploymentStageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteEdgeDeploymentStageOutcomeCallable SageMakerClient::DeleteEdgeDeploymentStageCallable(const DeleteEdgeDeploymentStageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEdgeDeploymentStageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEdgeDeploymentStage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDeleteEdgeDeploymentStageAsyncHelper(SageMakerClient const * const clientThis, const DeleteEdgeDeploymentStageRequest& request, const DeleteEdgeDeploymentStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteEdgeDeploymentStage(request), context);
}

void SageMakerClient::DeleteEdgeDeploymentStageAsync(const DeleteEdgeDeploymentStageRequest& request, const DeleteEdgeDeploymentStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDeleteEdgeDeploymentStageAsyncHelper( this, request, handler, context ); } );
}

DeleteEndpointOutcome SageMakerClient::DeleteEndpoint(const DeleteEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteEndpointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteEndpointOutcomeCallable SageMakerClient::DeleteEndpointCallable(const DeleteEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDeleteEndpointAsyncHelper(SageMakerClient const * const clientThis, const DeleteEndpointRequest& request, const DeleteEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteEndpoint(request), context);
}

void SageMakerClient::DeleteEndpointAsync(const DeleteEndpointRequest& request, const DeleteEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDeleteEndpointAsyncHelper( this, request, handler, context ); } );
}

DeleteEndpointConfigOutcome SageMakerClient::DeleteEndpointConfig(const DeleteEndpointConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteEndpointConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteEndpointConfigOutcomeCallable SageMakerClient::DeleteEndpointConfigCallable(const DeleteEndpointConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEndpointConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEndpointConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDeleteEndpointConfigAsyncHelper(SageMakerClient const * const clientThis, const DeleteEndpointConfigRequest& request, const DeleteEndpointConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteEndpointConfig(request), context);
}

void SageMakerClient::DeleteEndpointConfigAsync(const DeleteEndpointConfigRequest& request, const DeleteEndpointConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDeleteEndpointConfigAsyncHelper( this, request, handler, context ); } );
}

DeleteExperimentOutcome SageMakerClient::DeleteExperiment(const DeleteExperimentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteExperimentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteExperimentOutcomeCallable SageMakerClient::DeleteExperimentCallable(const DeleteExperimentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteExperimentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteExperiment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDeleteExperimentAsyncHelper(SageMakerClient const * const clientThis, const DeleteExperimentRequest& request, const DeleteExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteExperiment(request), context);
}

void SageMakerClient::DeleteExperimentAsync(const DeleteExperimentRequest& request, const DeleteExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDeleteExperimentAsyncHelper( this, request, handler, context ); } );
}

DeleteFeatureGroupOutcome SageMakerClient::DeleteFeatureGroup(const DeleteFeatureGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteFeatureGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteFeatureGroupOutcomeCallable SageMakerClient::DeleteFeatureGroupCallable(const DeleteFeatureGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFeatureGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFeatureGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDeleteFeatureGroupAsyncHelper(SageMakerClient const * const clientThis, const DeleteFeatureGroupRequest& request, const DeleteFeatureGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteFeatureGroup(request), context);
}

void SageMakerClient::DeleteFeatureGroupAsync(const DeleteFeatureGroupRequest& request, const DeleteFeatureGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDeleteFeatureGroupAsyncHelper( this, request, handler, context ); } );
}

DeleteFlowDefinitionOutcome SageMakerClient::DeleteFlowDefinition(const DeleteFlowDefinitionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteFlowDefinitionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteFlowDefinitionOutcomeCallable SageMakerClient::DeleteFlowDefinitionCallable(const DeleteFlowDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFlowDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFlowDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDeleteFlowDefinitionAsyncHelper(SageMakerClient const * const clientThis, const DeleteFlowDefinitionRequest& request, const DeleteFlowDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteFlowDefinition(request), context);
}

void SageMakerClient::DeleteFlowDefinitionAsync(const DeleteFlowDefinitionRequest& request, const DeleteFlowDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDeleteFlowDefinitionAsyncHelper( this, request, handler, context ); } );
}

DeleteHumanTaskUiOutcome SageMakerClient::DeleteHumanTaskUi(const DeleteHumanTaskUiRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteHumanTaskUiOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteHumanTaskUiOutcomeCallable SageMakerClient::DeleteHumanTaskUiCallable(const DeleteHumanTaskUiRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteHumanTaskUiOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteHumanTaskUi(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDeleteHumanTaskUiAsyncHelper(SageMakerClient const * const clientThis, const DeleteHumanTaskUiRequest& request, const DeleteHumanTaskUiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteHumanTaskUi(request), context);
}

void SageMakerClient::DeleteHumanTaskUiAsync(const DeleteHumanTaskUiRequest& request, const DeleteHumanTaskUiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDeleteHumanTaskUiAsyncHelper( this, request, handler, context ); } );
}

DeleteImageOutcome SageMakerClient::DeleteImage(const DeleteImageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteImageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteImageOutcomeCallable SageMakerClient::DeleteImageCallable(const DeleteImageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteImageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteImage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDeleteImageAsyncHelper(SageMakerClient const * const clientThis, const DeleteImageRequest& request, const DeleteImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteImage(request), context);
}

void SageMakerClient::DeleteImageAsync(const DeleteImageRequest& request, const DeleteImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDeleteImageAsyncHelper( this, request, handler, context ); } );
}

DeleteImageVersionOutcome SageMakerClient::DeleteImageVersion(const DeleteImageVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteImageVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteImageVersionOutcomeCallable SageMakerClient::DeleteImageVersionCallable(const DeleteImageVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteImageVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteImageVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDeleteImageVersionAsyncHelper(SageMakerClient const * const clientThis, const DeleteImageVersionRequest& request, const DeleteImageVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteImageVersion(request), context);
}

void SageMakerClient::DeleteImageVersionAsync(const DeleteImageVersionRequest& request, const DeleteImageVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDeleteImageVersionAsyncHelper( this, request, handler, context ); } );
}

DeleteModelOutcome SageMakerClient::DeleteModel(const DeleteModelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteModelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteModelOutcomeCallable SageMakerClient::DeleteModelCallable(const DeleteModelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteModelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteModel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDeleteModelAsyncHelper(SageMakerClient const * const clientThis, const DeleteModelRequest& request, const DeleteModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteModel(request), context);
}

void SageMakerClient::DeleteModelAsync(const DeleteModelRequest& request, const DeleteModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDeleteModelAsyncHelper( this, request, handler, context ); } );
}

DeleteModelBiasJobDefinitionOutcome SageMakerClient::DeleteModelBiasJobDefinition(const DeleteModelBiasJobDefinitionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteModelBiasJobDefinitionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteModelBiasJobDefinitionOutcomeCallable SageMakerClient::DeleteModelBiasJobDefinitionCallable(const DeleteModelBiasJobDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteModelBiasJobDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteModelBiasJobDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDeleteModelBiasJobDefinitionAsyncHelper(SageMakerClient const * const clientThis, const DeleteModelBiasJobDefinitionRequest& request, const DeleteModelBiasJobDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteModelBiasJobDefinition(request), context);
}

void SageMakerClient::DeleteModelBiasJobDefinitionAsync(const DeleteModelBiasJobDefinitionRequest& request, const DeleteModelBiasJobDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDeleteModelBiasJobDefinitionAsyncHelper( this, request, handler, context ); } );
}

DeleteModelExplainabilityJobDefinitionOutcome SageMakerClient::DeleteModelExplainabilityJobDefinition(const DeleteModelExplainabilityJobDefinitionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteModelExplainabilityJobDefinitionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteModelExplainabilityJobDefinitionOutcomeCallable SageMakerClient::DeleteModelExplainabilityJobDefinitionCallable(const DeleteModelExplainabilityJobDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteModelExplainabilityJobDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteModelExplainabilityJobDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDeleteModelExplainabilityJobDefinitionAsyncHelper(SageMakerClient const * const clientThis, const DeleteModelExplainabilityJobDefinitionRequest& request, const DeleteModelExplainabilityJobDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteModelExplainabilityJobDefinition(request), context);
}

void SageMakerClient::DeleteModelExplainabilityJobDefinitionAsync(const DeleteModelExplainabilityJobDefinitionRequest& request, const DeleteModelExplainabilityJobDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDeleteModelExplainabilityJobDefinitionAsyncHelper( this, request, handler, context ); } );
}

DeleteModelPackageOutcome SageMakerClient::DeleteModelPackage(const DeleteModelPackageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteModelPackageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteModelPackageOutcomeCallable SageMakerClient::DeleteModelPackageCallable(const DeleteModelPackageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteModelPackageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteModelPackage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDeleteModelPackageAsyncHelper(SageMakerClient const * const clientThis, const DeleteModelPackageRequest& request, const DeleteModelPackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteModelPackage(request), context);
}

void SageMakerClient::DeleteModelPackageAsync(const DeleteModelPackageRequest& request, const DeleteModelPackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDeleteModelPackageAsyncHelper( this, request, handler, context ); } );
}

DeleteModelPackageGroupOutcome SageMakerClient::DeleteModelPackageGroup(const DeleteModelPackageGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteModelPackageGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteModelPackageGroupOutcomeCallable SageMakerClient::DeleteModelPackageGroupCallable(const DeleteModelPackageGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteModelPackageGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteModelPackageGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDeleteModelPackageGroupAsyncHelper(SageMakerClient const * const clientThis, const DeleteModelPackageGroupRequest& request, const DeleteModelPackageGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteModelPackageGroup(request), context);
}

void SageMakerClient::DeleteModelPackageGroupAsync(const DeleteModelPackageGroupRequest& request, const DeleteModelPackageGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDeleteModelPackageGroupAsyncHelper( this, request, handler, context ); } );
}

DeleteModelPackageGroupPolicyOutcome SageMakerClient::DeleteModelPackageGroupPolicy(const DeleteModelPackageGroupPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteModelPackageGroupPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteModelPackageGroupPolicyOutcomeCallable SageMakerClient::DeleteModelPackageGroupPolicyCallable(const DeleteModelPackageGroupPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteModelPackageGroupPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteModelPackageGroupPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDeleteModelPackageGroupPolicyAsyncHelper(SageMakerClient const * const clientThis, const DeleteModelPackageGroupPolicyRequest& request, const DeleteModelPackageGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteModelPackageGroupPolicy(request), context);
}

void SageMakerClient::DeleteModelPackageGroupPolicyAsync(const DeleteModelPackageGroupPolicyRequest& request, const DeleteModelPackageGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDeleteModelPackageGroupPolicyAsyncHelper( this, request, handler, context ); } );
}

DeleteModelQualityJobDefinitionOutcome SageMakerClient::DeleteModelQualityJobDefinition(const DeleteModelQualityJobDefinitionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteModelQualityJobDefinitionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteModelQualityJobDefinitionOutcomeCallable SageMakerClient::DeleteModelQualityJobDefinitionCallable(const DeleteModelQualityJobDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteModelQualityJobDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteModelQualityJobDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDeleteModelQualityJobDefinitionAsyncHelper(SageMakerClient const * const clientThis, const DeleteModelQualityJobDefinitionRequest& request, const DeleteModelQualityJobDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteModelQualityJobDefinition(request), context);
}

void SageMakerClient::DeleteModelQualityJobDefinitionAsync(const DeleteModelQualityJobDefinitionRequest& request, const DeleteModelQualityJobDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDeleteModelQualityJobDefinitionAsyncHelper( this, request, handler, context ); } );
}

DeleteMonitoringScheduleOutcome SageMakerClient::DeleteMonitoringSchedule(const DeleteMonitoringScheduleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteMonitoringScheduleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteMonitoringScheduleOutcomeCallable SageMakerClient::DeleteMonitoringScheduleCallable(const DeleteMonitoringScheduleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteMonitoringScheduleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteMonitoringSchedule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDeleteMonitoringScheduleAsyncHelper(SageMakerClient const * const clientThis, const DeleteMonitoringScheduleRequest& request, const DeleteMonitoringScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteMonitoringSchedule(request), context);
}

void SageMakerClient::DeleteMonitoringScheduleAsync(const DeleteMonitoringScheduleRequest& request, const DeleteMonitoringScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDeleteMonitoringScheduleAsyncHelper( this, request, handler, context ); } );
}

DeleteNotebookInstanceOutcome SageMakerClient::DeleteNotebookInstance(const DeleteNotebookInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteNotebookInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteNotebookInstanceOutcomeCallable SageMakerClient::DeleteNotebookInstanceCallable(const DeleteNotebookInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteNotebookInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteNotebookInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDeleteNotebookInstanceAsyncHelper(SageMakerClient const * const clientThis, const DeleteNotebookInstanceRequest& request, const DeleteNotebookInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteNotebookInstance(request), context);
}

void SageMakerClient::DeleteNotebookInstanceAsync(const DeleteNotebookInstanceRequest& request, const DeleteNotebookInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDeleteNotebookInstanceAsyncHelper( this, request, handler, context ); } );
}

DeleteNotebookInstanceLifecycleConfigOutcome SageMakerClient::DeleteNotebookInstanceLifecycleConfig(const DeleteNotebookInstanceLifecycleConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteNotebookInstanceLifecycleConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteNotebookInstanceLifecycleConfigOutcomeCallable SageMakerClient::DeleteNotebookInstanceLifecycleConfigCallable(const DeleteNotebookInstanceLifecycleConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteNotebookInstanceLifecycleConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteNotebookInstanceLifecycleConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDeleteNotebookInstanceLifecycleConfigAsyncHelper(SageMakerClient const * const clientThis, const DeleteNotebookInstanceLifecycleConfigRequest& request, const DeleteNotebookInstanceLifecycleConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteNotebookInstanceLifecycleConfig(request), context);
}

void SageMakerClient::DeleteNotebookInstanceLifecycleConfigAsync(const DeleteNotebookInstanceLifecycleConfigRequest& request, const DeleteNotebookInstanceLifecycleConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDeleteNotebookInstanceLifecycleConfigAsyncHelper( this, request, handler, context ); } );
}

DeletePipelineOutcome SageMakerClient::DeletePipeline(const DeletePipelineRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeletePipelineOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeletePipelineOutcomeCallable SageMakerClient::DeletePipelineCallable(const DeletePipelineRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePipelineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePipeline(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDeletePipelineAsyncHelper(SageMakerClient const * const clientThis, const DeletePipelineRequest& request, const DeletePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeletePipeline(request), context);
}

void SageMakerClient::DeletePipelineAsync(const DeletePipelineRequest& request, const DeletePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDeletePipelineAsyncHelper( this, request, handler, context ); } );
}

DeleteProjectOutcome SageMakerClient::DeleteProject(const DeleteProjectRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteProjectOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteProjectOutcomeCallable SageMakerClient::DeleteProjectCallable(const DeleteProjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteProjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteProject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDeleteProjectAsyncHelper(SageMakerClient const * const clientThis, const DeleteProjectRequest& request, const DeleteProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteProject(request), context);
}

void SageMakerClient::DeleteProjectAsync(const DeleteProjectRequest& request, const DeleteProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDeleteProjectAsyncHelper( this, request, handler, context ); } );
}

DeleteStudioLifecycleConfigOutcome SageMakerClient::DeleteStudioLifecycleConfig(const DeleteStudioLifecycleConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteStudioLifecycleConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteStudioLifecycleConfigOutcomeCallable SageMakerClient::DeleteStudioLifecycleConfigCallable(const DeleteStudioLifecycleConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteStudioLifecycleConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteStudioLifecycleConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDeleteStudioLifecycleConfigAsyncHelper(SageMakerClient const * const clientThis, const DeleteStudioLifecycleConfigRequest& request, const DeleteStudioLifecycleConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteStudioLifecycleConfig(request), context);
}

void SageMakerClient::DeleteStudioLifecycleConfigAsync(const DeleteStudioLifecycleConfigRequest& request, const DeleteStudioLifecycleConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDeleteStudioLifecycleConfigAsyncHelper( this, request, handler, context ); } );
}

DeleteTagsOutcome SageMakerClient::DeleteTags(const DeleteTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteTagsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteTagsOutcomeCallable SageMakerClient::DeleteTagsCallable(const DeleteTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDeleteTagsAsyncHelper(SageMakerClient const * const clientThis, const DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteTags(request), context);
}

void SageMakerClient::DeleteTagsAsync(const DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDeleteTagsAsyncHelper( this, request, handler, context ); } );
}

DeleteTrialOutcome SageMakerClient::DeleteTrial(const DeleteTrialRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteTrialOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteTrialOutcomeCallable SageMakerClient::DeleteTrialCallable(const DeleteTrialRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTrialOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTrial(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDeleteTrialAsyncHelper(SageMakerClient const * const clientThis, const DeleteTrialRequest& request, const DeleteTrialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteTrial(request), context);
}

void SageMakerClient::DeleteTrialAsync(const DeleteTrialRequest& request, const DeleteTrialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDeleteTrialAsyncHelper( this, request, handler, context ); } );
}

DeleteTrialComponentOutcome SageMakerClient::DeleteTrialComponent(const DeleteTrialComponentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteTrialComponentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteTrialComponentOutcomeCallable SageMakerClient::DeleteTrialComponentCallable(const DeleteTrialComponentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTrialComponentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTrialComponent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDeleteTrialComponentAsyncHelper(SageMakerClient const * const clientThis, const DeleteTrialComponentRequest& request, const DeleteTrialComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteTrialComponent(request), context);
}

void SageMakerClient::DeleteTrialComponentAsync(const DeleteTrialComponentRequest& request, const DeleteTrialComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDeleteTrialComponentAsyncHelper( this, request, handler, context ); } );
}

DeleteUserProfileOutcome SageMakerClient::DeleteUserProfile(const DeleteUserProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteUserProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteUserProfileOutcomeCallable SageMakerClient::DeleteUserProfileCallable(const DeleteUserProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteUserProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteUserProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDeleteUserProfileAsyncHelper(SageMakerClient const * const clientThis, const DeleteUserProfileRequest& request, const DeleteUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteUserProfile(request), context);
}

void SageMakerClient::DeleteUserProfileAsync(const DeleteUserProfileRequest& request, const DeleteUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDeleteUserProfileAsyncHelper( this, request, handler, context ); } );
}

DeleteWorkforceOutcome SageMakerClient::DeleteWorkforce(const DeleteWorkforceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteWorkforceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteWorkforceOutcomeCallable SageMakerClient::DeleteWorkforceCallable(const DeleteWorkforceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteWorkforceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteWorkforce(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDeleteWorkforceAsyncHelper(SageMakerClient const * const clientThis, const DeleteWorkforceRequest& request, const DeleteWorkforceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteWorkforce(request), context);
}

void SageMakerClient::DeleteWorkforceAsync(const DeleteWorkforceRequest& request, const DeleteWorkforceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDeleteWorkforceAsyncHelper( this, request, handler, context ); } );
}

DeleteWorkteamOutcome SageMakerClient::DeleteWorkteam(const DeleteWorkteamRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteWorkteamOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteWorkteamOutcomeCallable SageMakerClient::DeleteWorkteamCallable(const DeleteWorkteamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteWorkteamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteWorkteam(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDeleteWorkteamAsyncHelper(SageMakerClient const * const clientThis, const DeleteWorkteamRequest& request, const DeleteWorkteamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteWorkteam(request), context);
}

void SageMakerClient::DeleteWorkteamAsync(const DeleteWorkteamRequest& request, const DeleteWorkteamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDeleteWorkteamAsyncHelper( this, request, handler, context ); } );
}

DeregisterDevicesOutcome SageMakerClient::DeregisterDevices(const DeregisterDevicesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeregisterDevicesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeregisterDevicesOutcomeCallable SageMakerClient::DeregisterDevicesCallable(const DeregisterDevicesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeregisterDevicesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeregisterDevices(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDeregisterDevicesAsyncHelper(SageMakerClient const * const clientThis, const DeregisterDevicesRequest& request, const DeregisterDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeregisterDevices(request), context);
}

void SageMakerClient::DeregisterDevicesAsync(const DeregisterDevicesRequest& request, const DeregisterDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDeregisterDevicesAsyncHelper( this, request, handler, context ); } );
}

DescribeActionOutcome SageMakerClient::DescribeAction(const DescribeActionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeActionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeActionOutcomeCallable SageMakerClient::DescribeActionCallable(const DescribeActionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeActionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDescribeActionAsyncHelper(SageMakerClient const * const clientThis, const DescribeActionRequest& request, const DescribeActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeAction(request), context);
}

void SageMakerClient::DescribeActionAsync(const DescribeActionRequest& request, const DescribeActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDescribeActionAsyncHelper( this, request, handler, context ); } );
}

DescribeAlgorithmOutcome SageMakerClient::DescribeAlgorithm(const DescribeAlgorithmRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeAlgorithmOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAlgorithmOutcomeCallable SageMakerClient::DescribeAlgorithmCallable(const DescribeAlgorithmRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAlgorithmOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAlgorithm(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDescribeAlgorithmAsyncHelper(SageMakerClient const * const clientThis, const DescribeAlgorithmRequest& request, const DescribeAlgorithmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeAlgorithm(request), context);
}

void SageMakerClient::DescribeAlgorithmAsync(const DescribeAlgorithmRequest& request, const DescribeAlgorithmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDescribeAlgorithmAsyncHelper( this, request, handler, context ); } );
}

DescribeAppOutcome SageMakerClient::DescribeApp(const DescribeAppRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeAppOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAppOutcomeCallable SageMakerClient::DescribeAppCallable(const DescribeAppRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAppOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeApp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDescribeAppAsyncHelper(SageMakerClient const * const clientThis, const DescribeAppRequest& request, const DescribeAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeApp(request), context);
}

void SageMakerClient::DescribeAppAsync(const DescribeAppRequest& request, const DescribeAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDescribeAppAsyncHelper( this, request, handler, context ); } );
}

DescribeAppImageConfigOutcome SageMakerClient::DescribeAppImageConfig(const DescribeAppImageConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeAppImageConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAppImageConfigOutcomeCallable SageMakerClient::DescribeAppImageConfigCallable(const DescribeAppImageConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAppImageConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAppImageConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDescribeAppImageConfigAsyncHelper(SageMakerClient const * const clientThis, const DescribeAppImageConfigRequest& request, const DescribeAppImageConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeAppImageConfig(request), context);
}

void SageMakerClient::DescribeAppImageConfigAsync(const DescribeAppImageConfigRequest& request, const DescribeAppImageConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDescribeAppImageConfigAsyncHelper( this, request, handler, context ); } );
}

DescribeArtifactOutcome SageMakerClient::DescribeArtifact(const DescribeArtifactRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeArtifactOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeArtifactOutcomeCallable SageMakerClient::DescribeArtifactCallable(const DescribeArtifactRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeArtifactOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeArtifact(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDescribeArtifactAsyncHelper(SageMakerClient const * const clientThis, const DescribeArtifactRequest& request, const DescribeArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeArtifact(request), context);
}

void SageMakerClient::DescribeArtifactAsync(const DescribeArtifactRequest& request, const DescribeArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDescribeArtifactAsyncHelper( this, request, handler, context ); } );
}

DescribeAutoMLJobOutcome SageMakerClient::DescribeAutoMLJob(const DescribeAutoMLJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeAutoMLJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAutoMLJobOutcomeCallable SageMakerClient::DescribeAutoMLJobCallable(const DescribeAutoMLJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAutoMLJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAutoMLJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDescribeAutoMLJobAsyncHelper(SageMakerClient const * const clientThis, const DescribeAutoMLJobRequest& request, const DescribeAutoMLJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeAutoMLJob(request), context);
}

void SageMakerClient::DescribeAutoMLJobAsync(const DescribeAutoMLJobRequest& request, const DescribeAutoMLJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDescribeAutoMLJobAsyncHelper( this, request, handler, context ); } );
}

DescribeCodeRepositoryOutcome SageMakerClient::DescribeCodeRepository(const DescribeCodeRepositoryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeCodeRepositoryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeCodeRepositoryOutcomeCallable SageMakerClient::DescribeCodeRepositoryCallable(const DescribeCodeRepositoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCodeRepositoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCodeRepository(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDescribeCodeRepositoryAsyncHelper(SageMakerClient const * const clientThis, const DescribeCodeRepositoryRequest& request, const DescribeCodeRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeCodeRepository(request), context);
}

void SageMakerClient::DescribeCodeRepositoryAsync(const DescribeCodeRepositoryRequest& request, const DescribeCodeRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDescribeCodeRepositoryAsyncHelper( this, request, handler, context ); } );
}

DescribeCompilationJobOutcome SageMakerClient::DescribeCompilationJob(const DescribeCompilationJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeCompilationJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeCompilationJobOutcomeCallable SageMakerClient::DescribeCompilationJobCallable(const DescribeCompilationJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCompilationJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCompilationJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDescribeCompilationJobAsyncHelper(SageMakerClient const * const clientThis, const DescribeCompilationJobRequest& request, const DescribeCompilationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeCompilationJob(request), context);
}

void SageMakerClient::DescribeCompilationJobAsync(const DescribeCompilationJobRequest& request, const DescribeCompilationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDescribeCompilationJobAsyncHelper( this, request, handler, context ); } );
}

DescribeContextOutcome SageMakerClient::DescribeContext(const DescribeContextRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeContextOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeContextOutcomeCallable SageMakerClient::DescribeContextCallable(const DescribeContextRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeContextOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeContext(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDescribeContextAsyncHelper(SageMakerClient const * const clientThis, const DescribeContextRequest& request, const DescribeContextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeContext(request), context);
}

void SageMakerClient::DescribeContextAsync(const DescribeContextRequest& request, const DescribeContextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDescribeContextAsyncHelper( this, request, handler, context ); } );
}

DescribeDataQualityJobDefinitionOutcome SageMakerClient::DescribeDataQualityJobDefinition(const DescribeDataQualityJobDefinitionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDataQualityJobDefinitionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeDataQualityJobDefinitionOutcomeCallable SageMakerClient::DescribeDataQualityJobDefinitionCallable(const DescribeDataQualityJobDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDataQualityJobDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDataQualityJobDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDescribeDataQualityJobDefinitionAsyncHelper(SageMakerClient const * const clientThis, const DescribeDataQualityJobDefinitionRequest& request, const DescribeDataQualityJobDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDataQualityJobDefinition(request), context);
}

void SageMakerClient::DescribeDataQualityJobDefinitionAsync(const DescribeDataQualityJobDefinitionRequest& request, const DescribeDataQualityJobDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDescribeDataQualityJobDefinitionAsyncHelper( this, request, handler, context ); } );
}

DescribeDeviceOutcome SageMakerClient::DescribeDevice(const DescribeDeviceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDeviceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeDeviceOutcomeCallable SageMakerClient::DescribeDeviceCallable(const DescribeDeviceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDeviceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDevice(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDescribeDeviceAsyncHelper(SageMakerClient const * const clientThis, const DescribeDeviceRequest& request, const DescribeDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDevice(request), context);
}

void SageMakerClient::DescribeDeviceAsync(const DescribeDeviceRequest& request, const DescribeDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDescribeDeviceAsyncHelper( this, request, handler, context ); } );
}

DescribeDeviceFleetOutcome SageMakerClient::DescribeDeviceFleet(const DescribeDeviceFleetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDeviceFleetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeDeviceFleetOutcomeCallable SageMakerClient::DescribeDeviceFleetCallable(const DescribeDeviceFleetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDeviceFleetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDeviceFleet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDescribeDeviceFleetAsyncHelper(SageMakerClient const * const clientThis, const DescribeDeviceFleetRequest& request, const DescribeDeviceFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDeviceFleet(request), context);
}

void SageMakerClient::DescribeDeviceFleetAsync(const DescribeDeviceFleetRequest& request, const DescribeDeviceFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDescribeDeviceFleetAsyncHelper( this, request, handler, context ); } );
}

DescribeDomainOutcome SageMakerClient::DescribeDomain(const DescribeDomainRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDomainOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeDomainOutcomeCallable SageMakerClient::DescribeDomainCallable(const DescribeDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDescribeDomainAsyncHelper(SageMakerClient const * const clientThis, const DescribeDomainRequest& request, const DescribeDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDomain(request), context);
}

void SageMakerClient::DescribeDomainAsync(const DescribeDomainRequest& request, const DescribeDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDescribeDomainAsyncHelper( this, request, handler, context ); } );
}

DescribeEdgeDeploymentPlanOutcome SageMakerClient::DescribeEdgeDeploymentPlan(const DescribeEdgeDeploymentPlanRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeEdgeDeploymentPlanOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEdgeDeploymentPlanOutcomeCallable SageMakerClient::DescribeEdgeDeploymentPlanCallable(const DescribeEdgeDeploymentPlanRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEdgeDeploymentPlanOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEdgeDeploymentPlan(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDescribeEdgeDeploymentPlanAsyncHelper(SageMakerClient const * const clientThis, const DescribeEdgeDeploymentPlanRequest& request, const DescribeEdgeDeploymentPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeEdgeDeploymentPlan(request), context);
}

void SageMakerClient::DescribeEdgeDeploymentPlanAsync(const DescribeEdgeDeploymentPlanRequest& request, const DescribeEdgeDeploymentPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDescribeEdgeDeploymentPlanAsyncHelper( this, request, handler, context ); } );
}

DescribeEdgePackagingJobOutcome SageMakerClient::DescribeEdgePackagingJob(const DescribeEdgePackagingJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeEdgePackagingJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEdgePackagingJobOutcomeCallable SageMakerClient::DescribeEdgePackagingJobCallable(const DescribeEdgePackagingJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEdgePackagingJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEdgePackagingJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDescribeEdgePackagingJobAsyncHelper(SageMakerClient const * const clientThis, const DescribeEdgePackagingJobRequest& request, const DescribeEdgePackagingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeEdgePackagingJob(request), context);
}

void SageMakerClient::DescribeEdgePackagingJobAsync(const DescribeEdgePackagingJobRequest& request, const DescribeEdgePackagingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDescribeEdgePackagingJobAsyncHelper( this, request, handler, context ); } );
}

DescribeEndpointOutcome SageMakerClient::DescribeEndpoint(const DescribeEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeEndpointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEndpointOutcomeCallable SageMakerClient::DescribeEndpointCallable(const DescribeEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDescribeEndpointAsyncHelper(SageMakerClient const * const clientThis, const DescribeEndpointRequest& request, const DescribeEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeEndpoint(request), context);
}

void SageMakerClient::DescribeEndpointAsync(const DescribeEndpointRequest& request, const DescribeEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDescribeEndpointAsyncHelper( this, request, handler, context ); } );
}

DescribeEndpointConfigOutcome SageMakerClient::DescribeEndpointConfig(const DescribeEndpointConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeEndpointConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEndpointConfigOutcomeCallable SageMakerClient::DescribeEndpointConfigCallable(const DescribeEndpointConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEndpointConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEndpointConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDescribeEndpointConfigAsyncHelper(SageMakerClient const * const clientThis, const DescribeEndpointConfigRequest& request, const DescribeEndpointConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeEndpointConfig(request), context);
}

void SageMakerClient::DescribeEndpointConfigAsync(const DescribeEndpointConfigRequest& request, const DescribeEndpointConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDescribeEndpointConfigAsyncHelper( this, request, handler, context ); } );
}

DescribeExperimentOutcome SageMakerClient::DescribeExperiment(const DescribeExperimentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeExperimentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeExperimentOutcomeCallable SageMakerClient::DescribeExperimentCallable(const DescribeExperimentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeExperimentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeExperiment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDescribeExperimentAsyncHelper(SageMakerClient const * const clientThis, const DescribeExperimentRequest& request, const DescribeExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeExperiment(request), context);
}

void SageMakerClient::DescribeExperimentAsync(const DescribeExperimentRequest& request, const DescribeExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDescribeExperimentAsyncHelper( this, request, handler, context ); } );
}

DescribeFeatureGroupOutcome SageMakerClient::DescribeFeatureGroup(const DescribeFeatureGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeFeatureGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeFeatureGroupOutcomeCallable SageMakerClient::DescribeFeatureGroupCallable(const DescribeFeatureGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFeatureGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFeatureGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDescribeFeatureGroupAsyncHelper(SageMakerClient const * const clientThis, const DescribeFeatureGroupRequest& request, const DescribeFeatureGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeFeatureGroup(request), context);
}

void SageMakerClient::DescribeFeatureGroupAsync(const DescribeFeatureGroupRequest& request, const DescribeFeatureGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDescribeFeatureGroupAsyncHelper( this, request, handler, context ); } );
}

DescribeFeatureMetadataOutcome SageMakerClient::DescribeFeatureMetadata(const DescribeFeatureMetadataRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeFeatureMetadataOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeFeatureMetadataOutcomeCallable SageMakerClient::DescribeFeatureMetadataCallable(const DescribeFeatureMetadataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFeatureMetadataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFeatureMetadata(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDescribeFeatureMetadataAsyncHelper(SageMakerClient const * const clientThis, const DescribeFeatureMetadataRequest& request, const DescribeFeatureMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeFeatureMetadata(request), context);
}

void SageMakerClient::DescribeFeatureMetadataAsync(const DescribeFeatureMetadataRequest& request, const DescribeFeatureMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDescribeFeatureMetadataAsyncHelper( this, request, handler, context ); } );
}

DescribeFlowDefinitionOutcome SageMakerClient::DescribeFlowDefinition(const DescribeFlowDefinitionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeFlowDefinitionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeFlowDefinitionOutcomeCallable SageMakerClient::DescribeFlowDefinitionCallable(const DescribeFlowDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFlowDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFlowDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDescribeFlowDefinitionAsyncHelper(SageMakerClient const * const clientThis, const DescribeFlowDefinitionRequest& request, const DescribeFlowDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeFlowDefinition(request), context);
}

void SageMakerClient::DescribeFlowDefinitionAsync(const DescribeFlowDefinitionRequest& request, const DescribeFlowDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDescribeFlowDefinitionAsyncHelper( this, request, handler, context ); } );
}

DescribeHumanTaskUiOutcome SageMakerClient::DescribeHumanTaskUi(const DescribeHumanTaskUiRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeHumanTaskUiOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeHumanTaskUiOutcomeCallable SageMakerClient::DescribeHumanTaskUiCallable(const DescribeHumanTaskUiRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeHumanTaskUiOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeHumanTaskUi(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDescribeHumanTaskUiAsyncHelper(SageMakerClient const * const clientThis, const DescribeHumanTaskUiRequest& request, const DescribeHumanTaskUiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeHumanTaskUi(request), context);
}

void SageMakerClient::DescribeHumanTaskUiAsync(const DescribeHumanTaskUiRequest& request, const DescribeHumanTaskUiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDescribeHumanTaskUiAsyncHelper( this, request, handler, context ); } );
}

DescribeHyperParameterTuningJobOutcome SageMakerClient::DescribeHyperParameterTuningJob(const DescribeHyperParameterTuningJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeHyperParameterTuningJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeHyperParameterTuningJobOutcomeCallable SageMakerClient::DescribeHyperParameterTuningJobCallable(const DescribeHyperParameterTuningJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeHyperParameterTuningJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeHyperParameterTuningJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDescribeHyperParameterTuningJobAsyncHelper(SageMakerClient const * const clientThis, const DescribeHyperParameterTuningJobRequest& request, const DescribeHyperParameterTuningJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeHyperParameterTuningJob(request), context);
}

void SageMakerClient::DescribeHyperParameterTuningJobAsync(const DescribeHyperParameterTuningJobRequest& request, const DescribeHyperParameterTuningJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDescribeHyperParameterTuningJobAsyncHelper( this, request, handler, context ); } );
}

DescribeImageOutcome SageMakerClient::DescribeImage(const DescribeImageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeImageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeImageOutcomeCallable SageMakerClient::DescribeImageCallable(const DescribeImageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeImageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeImage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDescribeImageAsyncHelper(SageMakerClient const * const clientThis, const DescribeImageRequest& request, const DescribeImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeImage(request), context);
}

void SageMakerClient::DescribeImageAsync(const DescribeImageRequest& request, const DescribeImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDescribeImageAsyncHelper( this, request, handler, context ); } );
}

DescribeImageVersionOutcome SageMakerClient::DescribeImageVersion(const DescribeImageVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeImageVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeImageVersionOutcomeCallable SageMakerClient::DescribeImageVersionCallable(const DescribeImageVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeImageVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeImageVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDescribeImageVersionAsyncHelper(SageMakerClient const * const clientThis, const DescribeImageVersionRequest& request, const DescribeImageVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeImageVersion(request), context);
}

void SageMakerClient::DescribeImageVersionAsync(const DescribeImageVersionRequest& request, const DescribeImageVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDescribeImageVersionAsyncHelper( this, request, handler, context ); } );
}

DescribeInferenceRecommendationsJobOutcome SageMakerClient::DescribeInferenceRecommendationsJob(const DescribeInferenceRecommendationsJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeInferenceRecommendationsJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeInferenceRecommendationsJobOutcomeCallable SageMakerClient::DescribeInferenceRecommendationsJobCallable(const DescribeInferenceRecommendationsJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeInferenceRecommendationsJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeInferenceRecommendationsJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDescribeInferenceRecommendationsJobAsyncHelper(SageMakerClient const * const clientThis, const DescribeInferenceRecommendationsJobRequest& request, const DescribeInferenceRecommendationsJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeInferenceRecommendationsJob(request), context);
}

void SageMakerClient::DescribeInferenceRecommendationsJobAsync(const DescribeInferenceRecommendationsJobRequest& request, const DescribeInferenceRecommendationsJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDescribeInferenceRecommendationsJobAsyncHelper( this, request, handler, context ); } );
}

DescribeLabelingJobOutcome SageMakerClient::DescribeLabelingJob(const DescribeLabelingJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeLabelingJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeLabelingJobOutcomeCallable SageMakerClient::DescribeLabelingJobCallable(const DescribeLabelingJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLabelingJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLabelingJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDescribeLabelingJobAsyncHelper(SageMakerClient const * const clientThis, const DescribeLabelingJobRequest& request, const DescribeLabelingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeLabelingJob(request), context);
}

void SageMakerClient::DescribeLabelingJobAsync(const DescribeLabelingJobRequest& request, const DescribeLabelingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDescribeLabelingJobAsyncHelper( this, request, handler, context ); } );
}

DescribeLineageGroupOutcome SageMakerClient::DescribeLineageGroup(const DescribeLineageGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeLineageGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeLineageGroupOutcomeCallable SageMakerClient::DescribeLineageGroupCallable(const DescribeLineageGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLineageGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLineageGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDescribeLineageGroupAsyncHelper(SageMakerClient const * const clientThis, const DescribeLineageGroupRequest& request, const DescribeLineageGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeLineageGroup(request), context);
}

void SageMakerClient::DescribeLineageGroupAsync(const DescribeLineageGroupRequest& request, const DescribeLineageGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDescribeLineageGroupAsyncHelper( this, request, handler, context ); } );
}

DescribeModelOutcome SageMakerClient::DescribeModel(const DescribeModelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeModelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeModelOutcomeCallable SageMakerClient::DescribeModelCallable(const DescribeModelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeModelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeModel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDescribeModelAsyncHelper(SageMakerClient const * const clientThis, const DescribeModelRequest& request, const DescribeModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeModel(request), context);
}

void SageMakerClient::DescribeModelAsync(const DescribeModelRequest& request, const DescribeModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDescribeModelAsyncHelper( this, request, handler, context ); } );
}

DescribeModelBiasJobDefinitionOutcome SageMakerClient::DescribeModelBiasJobDefinition(const DescribeModelBiasJobDefinitionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeModelBiasJobDefinitionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeModelBiasJobDefinitionOutcomeCallable SageMakerClient::DescribeModelBiasJobDefinitionCallable(const DescribeModelBiasJobDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeModelBiasJobDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeModelBiasJobDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDescribeModelBiasJobDefinitionAsyncHelper(SageMakerClient const * const clientThis, const DescribeModelBiasJobDefinitionRequest& request, const DescribeModelBiasJobDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeModelBiasJobDefinition(request), context);
}

void SageMakerClient::DescribeModelBiasJobDefinitionAsync(const DescribeModelBiasJobDefinitionRequest& request, const DescribeModelBiasJobDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDescribeModelBiasJobDefinitionAsyncHelper( this, request, handler, context ); } );
}

DescribeModelExplainabilityJobDefinitionOutcome SageMakerClient::DescribeModelExplainabilityJobDefinition(const DescribeModelExplainabilityJobDefinitionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeModelExplainabilityJobDefinitionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeModelExplainabilityJobDefinitionOutcomeCallable SageMakerClient::DescribeModelExplainabilityJobDefinitionCallable(const DescribeModelExplainabilityJobDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeModelExplainabilityJobDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeModelExplainabilityJobDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDescribeModelExplainabilityJobDefinitionAsyncHelper(SageMakerClient const * const clientThis, const DescribeModelExplainabilityJobDefinitionRequest& request, const DescribeModelExplainabilityJobDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeModelExplainabilityJobDefinition(request), context);
}

void SageMakerClient::DescribeModelExplainabilityJobDefinitionAsync(const DescribeModelExplainabilityJobDefinitionRequest& request, const DescribeModelExplainabilityJobDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDescribeModelExplainabilityJobDefinitionAsyncHelper( this, request, handler, context ); } );
}

DescribeModelPackageOutcome SageMakerClient::DescribeModelPackage(const DescribeModelPackageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeModelPackageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeModelPackageOutcomeCallable SageMakerClient::DescribeModelPackageCallable(const DescribeModelPackageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeModelPackageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeModelPackage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDescribeModelPackageAsyncHelper(SageMakerClient const * const clientThis, const DescribeModelPackageRequest& request, const DescribeModelPackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeModelPackage(request), context);
}

void SageMakerClient::DescribeModelPackageAsync(const DescribeModelPackageRequest& request, const DescribeModelPackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDescribeModelPackageAsyncHelper( this, request, handler, context ); } );
}

DescribeModelPackageGroupOutcome SageMakerClient::DescribeModelPackageGroup(const DescribeModelPackageGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeModelPackageGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeModelPackageGroupOutcomeCallable SageMakerClient::DescribeModelPackageGroupCallable(const DescribeModelPackageGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeModelPackageGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeModelPackageGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDescribeModelPackageGroupAsyncHelper(SageMakerClient const * const clientThis, const DescribeModelPackageGroupRequest& request, const DescribeModelPackageGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeModelPackageGroup(request), context);
}

void SageMakerClient::DescribeModelPackageGroupAsync(const DescribeModelPackageGroupRequest& request, const DescribeModelPackageGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDescribeModelPackageGroupAsyncHelper( this, request, handler, context ); } );
}

DescribeModelQualityJobDefinitionOutcome SageMakerClient::DescribeModelQualityJobDefinition(const DescribeModelQualityJobDefinitionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeModelQualityJobDefinitionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeModelQualityJobDefinitionOutcomeCallable SageMakerClient::DescribeModelQualityJobDefinitionCallable(const DescribeModelQualityJobDefinitionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeModelQualityJobDefinitionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeModelQualityJobDefinition(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDescribeModelQualityJobDefinitionAsyncHelper(SageMakerClient const * const clientThis, const DescribeModelQualityJobDefinitionRequest& request, const DescribeModelQualityJobDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeModelQualityJobDefinition(request), context);
}

void SageMakerClient::DescribeModelQualityJobDefinitionAsync(const DescribeModelQualityJobDefinitionRequest& request, const DescribeModelQualityJobDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDescribeModelQualityJobDefinitionAsyncHelper( this, request, handler, context ); } );
}

DescribeMonitoringScheduleOutcome SageMakerClient::DescribeMonitoringSchedule(const DescribeMonitoringScheduleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeMonitoringScheduleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeMonitoringScheduleOutcomeCallable SageMakerClient::DescribeMonitoringScheduleCallable(const DescribeMonitoringScheduleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeMonitoringScheduleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeMonitoringSchedule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDescribeMonitoringScheduleAsyncHelper(SageMakerClient const * const clientThis, const DescribeMonitoringScheduleRequest& request, const DescribeMonitoringScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeMonitoringSchedule(request), context);
}

void SageMakerClient::DescribeMonitoringScheduleAsync(const DescribeMonitoringScheduleRequest& request, const DescribeMonitoringScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDescribeMonitoringScheduleAsyncHelper( this, request, handler, context ); } );
}

DescribeNotebookInstanceOutcome SageMakerClient::DescribeNotebookInstance(const DescribeNotebookInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeNotebookInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeNotebookInstanceOutcomeCallable SageMakerClient::DescribeNotebookInstanceCallable(const DescribeNotebookInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeNotebookInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeNotebookInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDescribeNotebookInstanceAsyncHelper(SageMakerClient const * const clientThis, const DescribeNotebookInstanceRequest& request, const DescribeNotebookInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeNotebookInstance(request), context);
}

void SageMakerClient::DescribeNotebookInstanceAsync(const DescribeNotebookInstanceRequest& request, const DescribeNotebookInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDescribeNotebookInstanceAsyncHelper( this, request, handler, context ); } );
}

DescribeNotebookInstanceLifecycleConfigOutcome SageMakerClient::DescribeNotebookInstanceLifecycleConfig(const DescribeNotebookInstanceLifecycleConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeNotebookInstanceLifecycleConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeNotebookInstanceLifecycleConfigOutcomeCallable SageMakerClient::DescribeNotebookInstanceLifecycleConfigCallable(const DescribeNotebookInstanceLifecycleConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeNotebookInstanceLifecycleConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeNotebookInstanceLifecycleConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDescribeNotebookInstanceLifecycleConfigAsyncHelper(SageMakerClient const * const clientThis, const DescribeNotebookInstanceLifecycleConfigRequest& request, const DescribeNotebookInstanceLifecycleConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeNotebookInstanceLifecycleConfig(request), context);
}

void SageMakerClient::DescribeNotebookInstanceLifecycleConfigAsync(const DescribeNotebookInstanceLifecycleConfigRequest& request, const DescribeNotebookInstanceLifecycleConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDescribeNotebookInstanceLifecycleConfigAsyncHelper( this, request, handler, context ); } );
}

DescribePipelineOutcome SageMakerClient::DescribePipeline(const DescribePipelineRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribePipelineOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribePipelineOutcomeCallable SageMakerClient::DescribePipelineCallable(const DescribePipelineRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePipelineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePipeline(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDescribePipelineAsyncHelper(SageMakerClient const * const clientThis, const DescribePipelineRequest& request, const DescribePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribePipeline(request), context);
}

void SageMakerClient::DescribePipelineAsync(const DescribePipelineRequest& request, const DescribePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDescribePipelineAsyncHelper( this, request, handler, context ); } );
}

DescribePipelineDefinitionForExecutionOutcome SageMakerClient::DescribePipelineDefinitionForExecution(const DescribePipelineDefinitionForExecutionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribePipelineDefinitionForExecutionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribePipelineDefinitionForExecutionOutcomeCallable SageMakerClient::DescribePipelineDefinitionForExecutionCallable(const DescribePipelineDefinitionForExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePipelineDefinitionForExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePipelineDefinitionForExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDescribePipelineDefinitionForExecutionAsyncHelper(SageMakerClient const * const clientThis, const DescribePipelineDefinitionForExecutionRequest& request, const DescribePipelineDefinitionForExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribePipelineDefinitionForExecution(request), context);
}

void SageMakerClient::DescribePipelineDefinitionForExecutionAsync(const DescribePipelineDefinitionForExecutionRequest& request, const DescribePipelineDefinitionForExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDescribePipelineDefinitionForExecutionAsyncHelper( this, request, handler, context ); } );
}

DescribePipelineExecutionOutcome SageMakerClient::DescribePipelineExecution(const DescribePipelineExecutionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribePipelineExecutionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribePipelineExecutionOutcomeCallable SageMakerClient::DescribePipelineExecutionCallable(const DescribePipelineExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePipelineExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePipelineExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDescribePipelineExecutionAsyncHelper(SageMakerClient const * const clientThis, const DescribePipelineExecutionRequest& request, const DescribePipelineExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribePipelineExecution(request), context);
}

void SageMakerClient::DescribePipelineExecutionAsync(const DescribePipelineExecutionRequest& request, const DescribePipelineExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDescribePipelineExecutionAsyncHelper( this, request, handler, context ); } );
}

DescribeProcessingJobOutcome SageMakerClient::DescribeProcessingJob(const DescribeProcessingJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeProcessingJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeProcessingJobOutcomeCallable SageMakerClient::DescribeProcessingJobCallable(const DescribeProcessingJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeProcessingJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeProcessingJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDescribeProcessingJobAsyncHelper(SageMakerClient const * const clientThis, const DescribeProcessingJobRequest& request, const DescribeProcessingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeProcessingJob(request), context);
}

void SageMakerClient::DescribeProcessingJobAsync(const DescribeProcessingJobRequest& request, const DescribeProcessingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDescribeProcessingJobAsyncHelper( this, request, handler, context ); } );
}

DescribeProjectOutcome SageMakerClient::DescribeProject(const DescribeProjectRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeProjectOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeProjectOutcomeCallable SageMakerClient::DescribeProjectCallable(const DescribeProjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeProjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeProject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDescribeProjectAsyncHelper(SageMakerClient const * const clientThis, const DescribeProjectRequest& request, const DescribeProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeProject(request), context);
}

void SageMakerClient::DescribeProjectAsync(const DescribeProjectRequest& request, const DescribeProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDescribeProjectAsyncHelper( this, request, handler, context ); } );
}

DescribeStudioLifecycleConfigOutcome SageMakerClient::DescribeStudioLifecycleConfig(const DescribeStudioLifecycleConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeStudioLifecycleConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeStudioLifecycleConfigOutcomeCallable SageMakerClient::DescribeStudioLifecycleConfigCallable(const DescribeStudioLifecycleConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeStudioLifecycleConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeStudioLifecycleConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDescribeStudioLifecycleConfigAsyncHelper(SageMakerClient const * const clientThis, const DescribeStudioLifecycleConfigRequest& request, const DescribeStudioLifecycleConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeStudioLifecycleConfig(request), context);
}

void SageMakerClient::DescribeStudioLifecycleConfigAsync(const DescribeStudioLifecycleConfigRequest& request, const DescribeStudioLifecycleConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDescribeStudioLifecycleConfigAsyncHelper( this, request, handler, context ); } );
}

DescribeSubscribedWorkteamOutcome SageMakerClient::DescribeSubscribedWorkteam(const DescribeSubscribedWorkteamRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeSubscribedWorkteamOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeSubscribedWorkteamOutcomeCallable SageMakerClient::DescribeSubscribedWorkteamCallable(const DescribeSubscribedWorkteamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSubscribedWorkteamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSubscribedWorkteam(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDescribeSubscribedWorkteamAsyncHelper(SageMakerClient const * const clientThis, const DescribeSubscribedWorkteamRequest& request, const DescribeSubscribedWorkteamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeSubscribedWorkteam(request), context);
}

void SageMakerClient::DescribeSubscribedWorkteamAsync(const DescribeSubscribedWorkteamRequest& request, const DescribeSubscribedWorkteamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDescribeSubscribedWorkteamAsyncHelper( this, request, handler, context ); } );
}

DescribeTrainingJobOutcome SageMakerClient::DescribeTrainingJob(const DescribeTrainingJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeTrainingJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeTrainingJobOutcomeCallable SageMakerClient::DescribeTrainingJobCallable(const DescribeTrainingJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTrainingJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTrainingJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDescribeTrainingJobAsyncHelper(SageMakerClient const * const clientThis, const DescribeTrainingJobRequest& request, const DescribeTrainingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeTrainingJob(request), context);
}

void SageMakerClient::DescribeTrainingJobAsync(const DescribeTrainingJobRequest& request, const DescribeTrainingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDescribeTrainingJobAsyncHelper( this, request, handler, context ); } );
}

DescribeTransformJobOutcome SageMakerClient::DescribeTransformJob(const DescribeTransformJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeTransformJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeTransformJobOutcomeCallable SageMakerClient::DescribeTransformJobCallable(const DescribeTransformJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTransformJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTransformJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDescribeTransformJobAsyncHelper(SageMakerClient const * const clientThis, const DescribeTransformJobRequest& request, const DescribeTransformJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeTransformJob(request), context);
}

void SageMakerClient::DescribeTransformJobAsync(const DescribeTransformJobRequest& request, const DescribeTransformJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDescribeTransformJobAsyncHelper( this, request, handler, context ); } );
}

DescribeTrialOutcome SageMakerClient::DescribeTrial(const DescribeTrialRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeTrialOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeTrialOutcomeCallable SageMakerClient::DescribeTrialCallable(const DescribeTrialRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTrialOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTrial(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDescribeTrialAsyncHelper(SageMakerClient const * const clientThis, const DescribeTrialRequest& request, const DescribeTrialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeTrial(request), context);
}

void SageMakerClient::DescribeTrialAsync(const DescribeTrialRequest& request, const DescribeTrialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDescribeTrialAsyncHelper( this, request, handler, context ); } );
}

DescribeTrialComponentOutcome SageMakerClient::DescribeTrialComponent(const DescribeTrialComponentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeTrialComponentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeTrialComponentOutcomeCallable SageMakerClient::DescribeTrialComponentCallable(const DescribeTrialComponentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTrialComponentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTrialComponent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDescribeTrialComponentAsyncHelper(SageMakerClient const * const clientThis, const DescribeTrialComponentRequest& request, const DescribeTrialComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeTrialComponent(request), context);
}

void SageMakerClient::DescribeTrialComponentAsync(const DescribeTrialComponentRequest& request, const DescribeTrialComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDescribeTrialComponentAsyncHelper( this, request, handler, context ); } );
}

DescribeUserProfileOutcome SageMakerClient::DescribeUserProfile(const DescribeUserProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeUserProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeUserProfileOutcomeCallable SageMakerClient::DescribeUserProfileCallable(const DescribeUserProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeUserProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeUserProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDescribeUserProfileAsyncHelper(SageMakerClient const * const clientThis, const DescribeUserProfileRequest& request, const DescribeUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeUserProfile(request), context);
}

void SageMakerClient::DescribeUserProfileAsync(const DescribeUserProfileRequest& request, const DescribeUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDescribeUserProfileAsyncHelper( this, request, handler, context ); } );
}

DescribeWorkforceOutcome SageMakerClient::DescribeWorkforce(const DescribeWorkforceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeWorkforceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeWorkforceOutcomeCallable SageMakerClient::DescribeWorkforceCallable(const DescribeWorkforceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeWorkforceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeWorkforce(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDescribeWorkforceAsyncHelper(SageMakerClient const * const clientThis, const DescribeWorkforceRequest& request, const DescribeWorkforceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeWorkforce(request), context);
}

void SageMakerClient::DescribeWorkforceAsync(const DescribeWorkforceRequest& request, const DescribeWorkforceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDescribeWorkforceAsyncHelper( this, request, handler, context ); } );
}

DescribeWorkteamOutcome SageMakerClient::DescribeWorkteam(const DescribeWorkteamRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeWorkteamOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeWorkteamOutcomeCallable SageMakerClient::DescribeWorkteamCallable(const DescribeWorkteamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeWorkteamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeWorkteam(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDescribeWorkteamAsyncHelper(SageMakerClient const * const clientThis, const DescribeWorkteamRequest& request, const DescribeWorkteamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeWorkteam(request), context);
}

void SageMakerClient::DescribeWorkteamAsync(const DescribeWorkteamRequest& request, const DescribeWorkteamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDescribeWorkteamAsyncHelper( this, request, handler, context ); } );
}

DisableSagemakerServicecatalogPortfolioOutcome SageMakerClient::DisableSagemakerServicecatalogPortfolio(const DisableSagemakerServicecatalogPortfolioRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisableSagemakerServicecatalogPortfolioOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisableSagemakerServicecatalogPortfolioOutcomeCallable SageMakerClient::DisableSagemakerServicecatalogPortfolioCallable(const DisableSagemakerServicecatalogPortfolioRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisableSagemakerServicecatalogPortfolioOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisableSagemakerServicecatalogPortfolio(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDisableSagemakerServicecatalogPortfolioAsyncHelper(SageMakerClient const * const clientThis, const DisableSagemakerServicecatalogPortfolioRequest& request, const DisableSagemakerServicecatalogPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisableSagemakerServicecatalogPortfolio(request), context);
}

void SageMakerClient::DisableSagemakerServicecatalogPortfolioAsync(const DisableSagemakerServicecatalogPortfolioRequest& request, const DisableSagemakerServicecatalogPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDisableSagemakerServicecatalogPortfolioAsyncHelper( this, request, handler, context ); } );
}

DisassociateTrialComponentOutcome SageMakerClient::DisassociateTrialComponent(const DisassociateTrialComponentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisassociateTrialComponentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateTrialComponentOutcomeCallable SageMakerClient::DisassociateTrialComponentCallable(const DisassociateTrialComponentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateTrialComponentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateTrialComponent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientDisassociateTrialComponentAsyncHelper(SageMakerClient const * const clientThis, const DisassociateTrialComponentRequest& request, const DisassociateTrialComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateTrialComponent(request), context);
}

void SageMakerClient::DisassociateTrialComponentAsync(const DisassociateTrialComponentRequest& request, const DisassociateTrialComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientDisassociateTrialComponentAsyncHelper( this, request, handler, context ); } );
}

EnableSagemakerServicecatalogPortfolioOutcome SageMakerClient::EnableSagemakerServicecatalogPortfolio(const EnableSagemakerServicecatalogPortfolioRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return EnableSagemakerServicecatalogPortfolioOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

EnableSagemakerServicecatalogPortfolioOutcomeCallable SageMakerClient::EnableSagemakerServicecatalogPortfolioCallable(const EnableSagemakerServicecatalogPortfolioRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnableSagemakerServicecatalogPortfolioOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnableSagemakerServicecatalogPortfolio(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientEnableSagemakerServicecatalogPortfolioAsyncHelper(SageMakerClient const * const clientThis, const EnableSagemakerServicecatalogPortfolioRequest& request, const EnableSagemakerServicecatalogPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->EnableSagemakerServicecatalogPortfolio(request), context);
}

void SageMakerClient::EnableSagemakerServicecatalogPortfolioAsync(const EnableSagemakerServicecatalogPortfolioRequest& request, const EnableSagemakerServicecatalogPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientEnableSagemakerServicecatalogPortfolioAsyncHelper( this, request, handler, context ); } );
}

GetDeviceFleetReportOutcome SageMakerClient::GetDeviceFleetReport(const GetDeviceFleetReportRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetDeviceFleetReportOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDeviceFleetReportOutcomeCallable SageMakerClient::GetDeviceFleetReportCallable(const GetDeviceFleetReportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDeviceFleetReportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDeviceFleetReport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientGetDeviceFleetReportAsyncHelper(SageMakerClient const * const clientThis, const GetDeviceFleetReportRequest& request, const GetDeviceFleetReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDeviceFleetReport(request), context);
}

void SageMakerClient::GetDeviceFleetReportAsync(const GetDeviceFleetReportRequest& request, const GetDeviceFleetReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientGetDeviceFleetReportAsyncHelper( this, request, handler, context ); } );
}

GetLineageGroupPolicyOutcome SageMakerClient::GetLineageGroupPolicy(const GetLineageGroupPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetLineageGroupPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetLineageGroupPolicyOutcomeCallable SageMakerClient::GetLineageGroupPolicyCallable(const GetLineageGroupPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLineageGroupPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLineageGroupPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientGetLineageGroupPolicyAsyncHelper(SageMakerClient const * const clientThis, const GetLineageGroupPolicyRequest& request, const GetLineageGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetLineageGroupPolicy(request), context);
}

void SageMakerClient::GetLineageGroupPolicyAsync(const GetLineageGroupPolicyRequest& request, const GetLineageGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientGetLineageGroupPolicyAsyncHelper( this, request, handler, context ); } );
}

GetModelPackageGroupPolicyOutcome SageMakerClient::GetModelPackageGroupPolicy(const GetModelPackageGroupPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetModelPackageGroupPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetModelPackageGroupPolicyOutcomeCallable SageMakerClient::GetModelPackageGroupPolicyCallable(const GetModelPackageGroupPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetModelPackageGroupPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetModelPackageGroupPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientGetModelPackageGroupPolicyAsyncHelper(SageMakerClient const * const clientThis, const GetModelPackageGroupPolicyRequest& request, const GetModelPackageGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetModelPackageGroupPolicy(request), context);
}

void SageMakerClient::GetModelPackageGroupPolicyAsync(const GetModelPackageGroupPolicyRequest& request, const GetModelPackageGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientGetModelPackageGroupPolicyAsyncHelper( this, request, handler, context ); } );
}

GetSagemakerServicecatalogPortfolioStatusOutcome SageMakerClient::GetSagemakerServicecatalogPortfolioStatus(const GetSagemakerServicecatalogPortfolioStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetSagemakerServicecatalogPortfolioStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetSagemakerServicecatalogPortfolioStatusOutcomeCallable SageMakerClient::GetSagemakerServicecatalogPortfolioStatusCallable(const GetSagemakerServicecatalogPortfolioStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSagemakerServicecatalogPortfolioStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSagemakerServicecatalogPortfolioStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientGetSagemakerServicecatalogPortfolioStatusAsyncHelper(SageMakerClient const * const clientThis, const GetSagemakerServicecatalogPortfolioStatusRequest& request, const GetSagemakerServicecatalogPortfolioStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetSagemakerServicecatalogPortfolioStatus(request), context);
}

void SageMakerClient::GetSagemakerServicecatalogPortfolioStatusAsync(const GetSagemakerServicecatalogPortfolioStatusRequest& request, const GetSagemakerServicecatalogPortfolioStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientGetSagemakerServicecatalogPortfolioStatusAsyncHelper( this, request, handler, context ); } );
}

GetSearchSuggestionsOutcome SageMakerClient::GetSearchSuggestions(const GetSearchSuggestionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetSearchSuggestionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetSearchSuggestionsOutcomeCallable SageMakerClient::GetSearchSuggestionsCallable(const GetSearchSuggestionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSearchSuggestionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSearchSuggestions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientGetSearchSuggestionsAsyncHelper(SageMakerClient const * const clientThis, const GetSearchSuggestionsRequest& request, const GetSearchSuggestionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetSearchSuggestions(request), context);
}

void SageMakerClient::GetSearchSuggestionsAsync(const GetSearchSuggestionsRequest& request, const GetSearchSuggestionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientGetSearchSuggestionsAsyncHelper( this, request, handler, context ); } );
}

ListActionsOutcome SageMakerClient::ListActions(const ListActionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListActionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListActionsOutcomeCallable SageMakerClient::ListActionsCallable(const ListActionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListActionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListActions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientListActionsAsyncHelper(SageMakerClient const * const clientThis, const ListActionsRequest& request, const ListActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListActions(request), context);
}

void SageMakerClient::ListActionsAsync(const ListActionsRequest& request, const ListActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientListActionsAsyncHelper( this, request, handler, context ); } );
}

ListAlgorithmsOutcome SageMakerClient::ListAlgorithms(const ListAlgorithmsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListAlgorithmsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAlgorithmsOutcomeCallable SageMakerClient::ListAlgorithmsCallable(const ListAlgorithmsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAlgorithmsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAlgorithms(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientListAlgorithmsAsyncHelper(SageMakerClient const * const clientThis, const ListAlgorithmsRequest& request, const ListAlgorithmsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAlgorithms(request), context);
}

void SageMakerClient::ListAlgorithmsAsync(const ListAlgorithmsRequest& request, const ListAlgorithmsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientListAlgorithmsAsyncHelper( this, request, handler, context ); } );
}

ListAppImageConfigsOutcome SageMakerClient::ListAppImageConfigs(const ListAppImageConfigsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListAppImageConfigsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAppImageConfigsOutcomeCallable SageMakerClient::ListAppImageConfigsCallable(const ListAppImageConfigsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAppImageConfigsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAppImageConfigs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientListAppImageConfigsAsyncHelper(SageMakerClient const * const clientThis, const ListAppImageConfigsRequest& request, const ListAppImageConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAppImageConfigs(request), context);
}

void SageMakerClient::ListAppImageConfigsAsync(const ListAppImageConfigsRequest& request, const ListAppImageConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientListAppImageConfigsAsyncHelper( this, request, handler, context ); } );
}

ListAppsOutcome SageMakerClient::ListApps(const ListAppsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListAppsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAppsOutcomeCallable SageMakerClient::ListAppsCallable(const ListAppsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAppsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListApps(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientListAppsAsyncHelper(SageMakerClient const * const clientThis, const ListAppsRequest& request, const ListAppsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListApps(request), context);
}

void SageMakerClient::ListAppsAsync(const ListAppsRequest& request, const ListAppsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientListAppsAsyncHelper( this, request, handler, context ); } );
}

ListArtifactsOutcome SageMakerClient::ListArtifacts(const ListArtifactsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListArtifactsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListArtifactsOutcomeCallable SageMakerClient::ListArtifactsCallable(const ListArtifactsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListArtifactsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListArtifacts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientListArtifactsAsyncHelper(SageMakerClient const * const clientThis, const ListArtifactsRequest& request, const ListArtifactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListArtifacts(request), context);
}

void SageMakerClient::ListArtifactsAsync(const ListArtifactsRequest& request, const ListArtifactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientListArtifactsAsyncHelper( this, request, handler, context ); } );
}

ListAssociationsOutcome SageMakerClient::ListAssociations(const ListAssociationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListAssociationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAssociationsOutcomeCallable SageMakerClient::ListAssociationsCallable(const ListAssociationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAssociationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAssociations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientListAssociationsAsyncHelper(SageMakerClient const * const clientThis, const ListAssociationsRequest& request, const ListAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAssociations(request), context);
}

void SageMakerClient::ListAssociationsAsync(const ListAssociationsRequest& request, const ListAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientListAssociationsAsyncHelper( this, request, handler, context ); } );
}

ListAutoMLJobsOutcome SageMakerClient::ListAutoMLJobs(const ListAutoMLJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListAutoMLJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAutoMLJobsOutcomeCallable SageMakerClient::ListAutoMLJobsCallable(const ListAutoMLJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAutoMLJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAutoMLJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientListAutoMLJobsAsyncHelper(SageMakerClient const * const clientThis, const ListAutoMLJobsRequest& request, const ListAutoMLJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAutoMLJobs(request), context);
}

void SageMakerClient::ListAutoMLJobsAsync(const ListAutoMLJobsRequest& request, const ListAutoMLJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientListAutoMLJobsAsyncHelper( this, request, handler, context ); } );
}

ListCandidatesForAutoMLJobOutcome SageMakerClient::ListCandidatesForAutoMLJob(const ListCandidatesForAutoMLJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListCandidatesForAutoMLJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListCandidatesForAutoMLJobOutcomeCallable SageMakerClient::ListCandidatesForAutoMLJobCallable(const ListCandidatesForAutoMLJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCandidatesForAutoMLJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCandidatesForAutoMLJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientListCandidatesForAutoMLJobAsyncHelper(SageMakerClient const * const clientThis, const ListCandidatesForAutoMLJobRequest& request, const ListCandidatesForAutoMLJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListCandidatesForAutoMLJob(request), context);
}

void SageMakerClient::ListCandidatesForAutoMLJobAsync(const ListCandidatesForAutoMLJobRequest& request, const ListCandidatesForAutoMLJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientListCandidatesForAutoMLJobAsyncHelper( this, request, handler, context ); } );
}

ListCodeRepositoriesOutcome SageMakerClient::ListCodeRepositories(const ListCodeRepositoriesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListCodeRepositoriesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListCodeRepositoriesOutcomeCallable SageMakerClient::ListCodeRepositoriesCallable(const ListCodeRepositoriesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCodeRepositoriesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCodeRepositories(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientListCodeRepositoriesAsyncHelper(SageMakerClient const * const clientThis, const ListCodeRepositoriesRequest& request, const ListCodeRepositoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListCodeRepositories(request), context);
}

void SageMakerClient::ListCodeRepositoriesAsync(const ListCodeRepositoriesRequest& request, const ListCodeRepositoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientListCodeRepositoriesAsyncHelper( this, request, handler, context ); } );
}

ListCompilationJobsOutcome SageMakerClient::ListCompilationJobs(const ListCompilationJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListCompilationJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListCompilationJobsOutcomeCallable SageMakerClient::ListCompilationJobsCallable(const ListCompilationJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCompilationJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCompilationJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientListCompilationJobsAsyncHelper(SageMakerClient const * const clientThis, const ListCompilationJobsRequest& request, const ListCompilationJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListCompilationJobs(request), context);
}

void SageMakerClient::ListCompilationJobsAsync(const ListCompilationJobsRequest& request, const ListCompilationJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientListCompilationJobsAsyncHelper( this, request, handler, context ); } );
}

ListContextsOutcome SageMakerClient::ListContexts(const ListContextsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListContextsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListContextsOutcomeCallable SageMakerClient::ListContextsCallable(const ListContextsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListContextsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListContexts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientListContextsAsyncHelper(SageMakerClient const * const clientThis, const ListContextsRequest& request, const ListContextsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListContexts(request), context);
}

void SageMakerClient::ListContextsAsync(const ListContextsRequest& request, const ListContextsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientListContextsAsyncHelper( this, request, handler, context ); } );
}

ListDataQualityJobDefinitionsOutcome SageMakerClient::ListDataQualityJobDefinitions(const ListDataQualityJobDefinitionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListDataQualityJobDefinitionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDataQualityJobDefinitionsOutcomeCallable SageMakerClient::ListDataQualityJobDefinitionsCallable(const ListDataQualityJobDefinitionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDataQualityJobDefinitionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDataQualityJobDefinitions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientListDataQualityJobDefinitionsAsyncHelper(SageMakerClient const * const clientThis, const ListDataQualityJobDefinitionsRequest& request, const ListDataQualityJobDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDataQualityJobDefinitions(request), context);
}

void SageMakerClient::ListDataQualityJobDefinitionsAsync(const ListDataQualityJobDefinitionsRequest& request, const ListDataQualityJobDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientListDataQualityJobDefinitionsAsyncHelper( this, request, handler, context ); } );
}

ListDeviceFleetsOutcome SageMakerClient::ListDeviceFleets(const ListDeviceFleetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListDeviceFleetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDeviceFleetsOutcomeCallable SageMakerClient::ListDeviceFleetsCallable(const ListDeviceFleetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDeviceFleetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDeviceFleets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientListDeviceFleetsAsyncHelper(SageMakerClient const * const clientThis, const ListDeviceFleetsRequest& request, const ListDeviceFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDeviceFleets(request), context);
}

void SageMakerClient::ListDeviceFleetsAsync(const ListDeviceFleetsRequest& request, const ListDeviceFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientListDeviceFleetsAsyncHelper( this, request, handler, context ); } );
}

ListDevicesOutcome SageMakerClient::ListDevices(const ListDevicesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListDevicesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDevicesOutcomeCallable SageMakerClient::ListDevicesCallable(const ListDevicesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDevicesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDevices(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientListDevicesAsyncHelper(SageMakerClient const * const clientThis, const ListDevicesRequest& request, const ListDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDevices(request), context);
}

void SageMakerClient::ListDevicesAsync(const ListDevicesRequest& request, const ListDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientListDevicesAsyncHelper( this, request, handler, context ); } );
}

ListDomainsOutcome SageMakerClient::ListDomains(const ListDomainsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListDomainsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDomainsOutcomeCallable SageMakerClient::ListDomainsCallable(const ListDomainsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDomainsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDomains(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientListDomainsAsyncHelper(SageMakerClient const * const clientThis, const ListDomainsRequest& request, const ListDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDomains(request), context);
}

void SageMakerClient::ListDomainsAsync(const ListDomainsRequest& request, const ListDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientListDomainsAsyncHelper( this, request, handler, context ); } );
}

ListEdgeDeploymentPlansOutcome SageMakerClient::ListEdgeDeploymentPlans(const ListEdgeDeploymentPlansRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListEdgeDeploymentPlansOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListEdgeDeploymentPlansOutcomeCallable SageMakerClient::ListEdgeDeploymentPlansCallable(const ListEdgeDeploymentPlansRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEdgeDeploymentPlansOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEdgeDeploymentPlans(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientListEdgeDeploymentPlansAsyncHelper(SageMakerClient const * const clientThis, const ListEdgeDeploymentPlansRequest& request, const ListEdgeDeploymentPlansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListEdgeDeploymentPlans(request), context);
}

void SageMakerClient::ListEdgeDeploymentPlansAsync(const ListEdgeDeploymentPlansRequest& request, const ListEdgeDeploymentPlansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientListEdgeDeploymentPlansAsyncHelper( this, request, handler, context ); } );
}

ListEdgePackagingJobsOutcome SageMakerClient::ListEdgePackagingJobs(const ListEdgePackagingJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListEdgePackagingJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListEdgePackagingJobsOutcomeCallable SageMakerClient::ListEdgePackagingJobsCallable(const ListEdgePackagingJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEdgePackagingJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEdgePackagingJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientListEdgePackagingJobsAsyncHelper(SageMakerClient const * const clientThis, const ListEdgePackagingJobsRequest& request, const ListEdgePackagingJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListEdgePackagingJobs(request), context);
}

void SageMakerClient::ListEdgePackagingJobsAsync(const ListEdgePackagingJobsRequest& request, const ListEdgePackagingJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientListEdgePackagingJobsAsyncHelper( this, request, handler, context ); } );
}

ListEndpointConfigsOutcome SageMakerClient::ListEndpointConfigs(const ListEndpointConfigsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListEndpointConfigsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListEndpointConfigsOutcomeCallable SageMakerClient::ListEndpointConfigsCallable(const ListEndpointConfigsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEndpointConfigsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEndpointConfigs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientListEndpointConfigsAsyncHelper(SageMakerClient const * const clientThis, const ListEndpointConfigsRequest& request, const ListEndpointConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListEndpointConfigs(request), context);
}

void SageMakerClient::ListEndpointConfigsAsync(const ListEndpointConfigsRequest& request, const ListEndpointConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientListEndpointConfigsAsyncHelper( this, request, handler, context ); } );
}

ListEndpointsOutcome SageMakerClient::ListEndpoints(const ListEndpointsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListEndpointsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListEndpointsOutcomeCallable SageMakerClient::ListEndpointsCallable(const ListEndpointsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEndpointsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEndpoints(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientListEndpointsAsyncHelper(SageMakerClient const * const clientThis, const ListEndpointsRequest& request, const ListEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListEndpoints(request), context);
}

void SageMakerClient::ListEndpointsAsync(const ListEndpointsRequest& request, const ListEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientListEndpointsAsyncHelper( this, request, handler, context ); } );
}

ListExperimentsOutcome SageMakerClient::ListExperiments(const ListExperimentsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListExperimentsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListExperimentsOutcomeCallable SageMakerClient::ListExperimentsCallable(const ListExperimentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListExperimentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListExperiments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientListExperimentsAsyncHelper(SageMakerClient const * const clientThis, const ListExperimentsRequest& request, const ListExperimentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListExperiments(request), context);
}

void SageMakerClient::ListExperimentsAsync(const ListExperimentsRequest& request, const ListExperimentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientListExperimentsAsyncHelper( this, request, handler, context ); } );
}

ListFeatureGroupsOutcome SageMakerClient::ListFeatureGroups(const ListFeatureGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListFeatureGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListFeatureGroupsOutcomeCallable SageMakerClient::ListFeatureGroupsCallable(const ListFeatureGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFeatureGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFeatureGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientListFeatureGroupsAsyncHelper(SageMakerClient const * const clientThis, const ListFeatureGroupsRequest& request, const ListFeatureGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListFeatureGroups(request), context);
}

void SageMakerClient::ListFeatureGroupsAsync(const ListFeatureGroupsRequest& request, const ListFeatureGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientListFeatureGroupsAsyncHelper( this, request, handler, context ); } );
}

ListFlowDefinitionsOutcome SageMakerClient::ListFlowDefinitions(const ListFlowDefinitionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListFlowDefinitionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListFlowDefinitionsOutcomeCallable SageMakerClient::ListFlowDefinitionsCallable(const ListFlowDefinitionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFlowDefinitionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFlowDefinitions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientListFlowDefinitionsAsyncHelper(SageMakerClient const * const clientThis, const ListFlowDefinitionsRequest& request, const ListFlowDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListFlowDefinitions(request), context);
}

void SageMakerClient::ListFlowDefinitionsAsync(const ListFlowDefinitionsRequest& request, const ListFlowDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientListFlowDefinitionsAsyncHelper( this, request, handler, context ); } );
}

ListHumanTaskUisOutcome SageMakerClient::ListHumanTaskUis(const ListHumanTaskUisRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListHumanTaskUisOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListHumanTaskUisOutcomeCallable SageMakerClient::ListHumanTaskUisCallable(const ListHumanTaskUisRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListHumanTaskUisOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListHumanTaskUis(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientListHumanTaskUisAsyncHelper(SageMakerClient const * const clientThis, const ListHumanTaskUisRequest& request, const ListHumanTaskUisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListHumanTaskUis(request), context);
}

void SageMakerClient::ListHumanTaskUisAsync(const ListHumanTaskUisRequest& request, const ListHumanTaskUisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientListHumanTaskUisAsyncHelper( this, request, handler, context ); } );
}

ListHyperParameterTuningJobsOutcome SageMakerClient::ListHyperParameterTuningJobs(const ListHyperParameterTuningJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListHyperParameterTuningJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListHyperParameterTuningJobsOutcomeCallable SageMakerClient::ListHyperParameterTuningJobsCallable(const ListHyperParameterTuningJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListHyperParameterTuningJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListHyperParameterTuningJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientListHyperParameterTuningJobsAsyncHelper(SageMakerClient const * const clientThis, const ListHyperParameterTuningJobsRequest& request, const ListHyperParameterTuningJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListHyperParameterTuningJobs(request), context);
}

void SageMakerClient::ListHyperParameterTuningJobsAsync(const ListHyperParameterTuningJobsRequest& request, const ListHyperParameterTuningJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientListHyperParameterTuningJobsAsyncHelper( this, request, handler, context ); } );
}

ListImageVersionsOutcome SageMakerClient::ListImageVersions(const ListImageVersionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListImageVersionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListImageVersionsOutcomeCallable SageMakerClient::ListImageVersionsCallable(const ListImageVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListImageVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListImageVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientListImageVersionsAsyncHelper(SageMakerClient const * const clientThis, const ListImageVersionsRequest& request, const ListImageVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListImageVersions(request), context);
}

void SageMakerClient::ListImageVersionsAsync(const ListImageVersionsRequest& request, const ListImageVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientListImageVersionsAsyncHelper( this, request, handler, context ); } );
}

ListImagesOutcome SageMakerClient::ListImages(const ListImagesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListImagesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListImagesOutcomeCallable SageMakerClient::ListImagesCallable(const ListImagesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListImagesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListImages(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientListImagesAsyncHelper(SageMakerClient const * const clientThis, const ListImagesRequest& request, const ListImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListImages(request), context);
}

void SageMakerClient::ListImagesAsync(const ListImagesRequest& request, const ListImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientListImagesAsyncHelper( this, request, handler, context ); } );
}

ListInferenceRecommendationsJobsOutcome SageMakerClient::ListInferenceRecommendationsJobs(const ListInferenceRecommendationsJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListInferenceRecommendationsJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListInferenceRecommendationsJobsOutcomeCallable SageMakerClient::ListInferenceRecommendationsJobsCallable(const ListInferenceRecommendationsJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListInferenceRecommendationsJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListInferenceRecommendationsJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientListInferenceRecommendationsJobsAsyncHelper(SageMakerClient const * const clientThis, const ListInferenceRecommendationsJobsRequest& request, const ListInferenceRecommendationsJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListInferenceRecommendationsJobs(request), context);
}

void SageMakerClient::ListInferenceRecommendationsJobsAsync(const ListInferenceRecommendationsJobsRequest& request, const ListInferenceRecommendationsJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientListInferenceRecommendationsJobsAsyncHelper( this, request, handler, context ); } );
}

ListLabelingJobsOutcome SageMakerClient::ListLabelingJobs(const ListLabelingJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListLabelingJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListLabelingJobsOutcomeCallable SageMakerClient::ListLabelingJobsCallable(const ListLabelingJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLabelingJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLabelingJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientListLabelingJobsAsyncHelper(SageMakerClient const * const clientThis, const ListLabelingJobsRequest& request, const ListLabelingJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListLabelingJobs(request), context);
}

void SageMakerClient::ListLabelingJobsAsync(const ListLabelingJobsRequest& request, const ListLabelingJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientListLabelingJobsAsyncHelper( this, request, handler, context ); } );
}

ListLabelingJobsForWorkteamOutcome SageMakerClient::ListLabelingJobsForWorkteam(const ListLabelingJobsForWorkteamRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListLabelingJobsForWorkteamOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListLabelingJobsForWorkteamOutcomeCallable SageMakerClient::ListLabelingJobsForWorkteamCallable(const ListLabelingJobsForWorkteamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLabelingJobsForWorkteamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLabelingJobsForWorkteam(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientListLabelingJobsForWorkteamAsyncHelper(SageMakerClient const * const clientThis, const ListLabelingJobsForWorkteamRequest& request, const ListLabelingJobsForWorkteamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListLabelingJobsForWorkteam(request), context);
}

void SageMakerClient::ListLabelingJobsForWorkteamAsync(const ListLabelingJobsForWorkteamRequest& request, const ListLabelingJobsForWorkteamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientListLabelingJobsForWorkteamAsyncHelper( this, request, handler, context ); } );
}

ListLineageGroupsOutcome SageMakerClient::ListLineageGroups(const ListLineageGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListLineageGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListLineageGroupsOutcomeCallable SageMakerClient::ListLineageGroupsCallable(const ListLineageGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLineageGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLineageGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientListLineageGroupsAsyncHelper(SageMakerClient const * const clientThis, const ListLineageGroupsRequest& request, const ListLineageGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListLineageGroups(request), context);
}

void SageMakerClient::ListLineageGroupsAsync(const ListLineageGroupsRequest& request, const ListLineageGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientListLineageGroupsAsyncHelper( this, request, handler, context ); } );
}

ListModelBiasJobDefinitionsOutcome SageMakerClient::ListModelBiasJobDefinitions(const ListModelBiasJobDefinitionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListModelBiasJobDefinitionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListModelBiasJobDefinitionsOutcomeCallable SageMakerClient::ListModelBiasJobDefinitionsCallable(const ListModelBiasJobDefinitionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListModelBiasJobDefinitionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListModelBiasJobDefinitions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientListModelBiasJobDefinitionsAsyncHelper(SageMakerClient const * const clientThis, const ListModelBiasJobDefinitionsRequest& request, const ListModelBiasJobDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListModelBiasJobDefinitions(request), context);
}

void SageMakerClient::ListModelBiasJobDefinitionsAsync(const ListModelBiasJobDefinitionsRequest& request, const ListModelBiasJobDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientListModelBiasJobDefinitionsAsyncHelper( this, request, handler, context ); } );
}

ListModelExplainabilityJobDefinitionsOutcome SageMakerClient::ListModelExplainabilityJobDefinitions(const ListModelExplainabilityJobDefinitionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListModelExplainabilityJobDefinitionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListModelExplainabilityJobDefinitionsOutcomeCallable SageMakerClient::ListModelExplainabilityJobDefinitionsCallable(const ListModelExplainabilityJobDefinitionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListModelExplainabilityJobDefinitionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListModelExplainabilityJobDefinitions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientListModelExplainabilityJobDefinitionsAsyncHelper(SageMakerClient const * const clientThis, const ListModelExplainabilityJobDefinitionsRequest& request, const ListModelExplainabilityJobDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListModelExplainabilityJobDefinitions(request), context);
}

void SageMakerClient::ListModelExplainabilityJobDefinitionsAsync(const ListModelExplainabilityJobDefinitionsRequest& request, const ListModelExplainabilityJobDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientListModelExplainabilityJobDefinitionsAsyncHelper( this, request, handler, context ); } );
}

ListModelMetadataOutcome SageMakerClient::ListModelMetadata(const ListModelMetadataRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListModelMetadataOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListModelMetadataOutcomeCallable SageMakerClient::ListModelMetadataCallable(const ListModelMetadataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListModelMetadataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListModelMetadata(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientListModelMetadataAsyncHelper(SageMakerClient const * const clientThis, const ListModelMetadataRequest& request, const ListModelMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListModelMetadata(request), context);
}

void SageMakerClient::ListModelMetadataAsync(const ListModelMetadataRequest& request, const ListModelMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientListModelMetadataAsyncHelper( this, request, handler, context ); } );
}

ListModelPackageGroupsOutcome SageMakerClient::ListModelPackageGroups(const ListModelPackageGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListModelPackageGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListModelPackageGroupsOutcomeCallable SageMakerClient::ListModelPackageGroupsCallable(const ListModelPackageGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListModelPackageGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListModelPackageGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientListModelPackageGroupsAsyncHelper(SageMakerClient const * const clientThis, const ListModelPackageGroupsRequest& request, const ListModelPackageGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListModelPackageGroups(request), context);
}

void SageMakerClient::ListModelPackageGroupsAsync(const ListModelPackageGroupsRequest& request, const ListModelPackageGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientListModelPackageGroupsAsyncHelper( this, request, handler, context ); } );
}

ListModelPackagesOutcome SageMakerClient::ListModelPackages(const ListModelPackagesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListModelPackagesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListModelPackagesOutcomeCallable SageMakerClient::ListModelPackagesCallable(const ListModelPackagesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListModelPackagesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListModelPackages(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientListModelPackagesAsyncHelper(SageMakerClient const * const clientThis, const ListModelPackagesRequest& request, const ListModelPackagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListModelPackages(request), context);
}

void SageMakerClient::ListModelPackagesAsync(const ListModelPackagesRequest& request, const ListModelPackagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientListModelPackagesAsyncHelper( this, request, handler, context ); } );
}

ListModelQualityJobDefinitionsOutcome SageMakerClient::ListModelQualityJobDefinitions(const ListModelQualityJobDefinitionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListModelQualityJobDefinitionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListModelQualityJobDefinitionsOutcomeCallable SageMakerClient::ListModelQualityJobDefinitionsCallable(const ListModelQualityJobDefinitionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListModelQualityJobDefinitionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListModelQualityJobDefinitions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientListModelQualityJobDefinitionsAsyncHelper(SageMakerClient const * const clientThis, const ListModelQualityJobDefinitionsRequest& request, const ListModelQualityJobDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListModelQualityJobDefinitions(request), context);
}

void SageMakerClient::ListModelQualityJobDefinitionsAsync(const ListModelQualityJobDefinitionsRequest& request, const ListModelQualityJobDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientListModelQualityJobDefinitionsAsyncHelper( this, request, handler, context ); } );
}

ListModelsOutcome SageMakerClient::ListModels(const ListModelsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListModelsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListModelsOutcomeCallable SageMakerClient::ListModelsCallable(const ListModelsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListModelsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListModels(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientListModelsAsyncHelper(SageMakerClient const * const clientThis, const ListModelsRequest& request, const ListModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListModels(request), context);
}

void SageMakerClient::ListModelsAsync(const ListModelsRequest& request, const ListModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientListModelsAsyncHelper( this, request, handler, context ); } );
}

ListMonitoringExecutionsOutcome SageMakerClient::ListMonitoringExecutions(const ListMonitoringExecutionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListMonitoringExecutionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListMonitoringExecutionsOutcomeCallable SageMakerClient::ListMonitoringExecutionsCallable(const ListMonitoringExecutionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMonitoringExecutionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMonitoringExecutions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientListMonitoringExecutionsAsyncHelper(SageMakerClient const * const clientThis, const ListMonitoringExecutionsRequest& request, const ListMonitoringExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListMonitoringExecutions(request), context);
}

void SageMakerClient::ListMonitoringExecutionsAsync(const ListMonitoringExecutionsRequest& request, const ListMonitoringExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientListMonitoringExecutionsAsyncHelper( this, request, handler, context ); } );
}

ListMonitoringSchedulesOutcome SageMakerClient::ListMonitoringSchedules(const ListMonitoringSchedulesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListMonitoringSchedulesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListMonitoringSchedulesOutcomeCallable SageMakerClient::ListMonitoringSchedulesCallable(const ListMonitoringSchedulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMonitoringSchedulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMonitoringSchedules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientListMonitoringSchedulesAsyncHelper(SageMakerClient const * const clientThis, const ListMonitoringSchedulesRequest& request, const ListMonitoringSchedulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListMonitoringSchedules(request), context);
}

void SageMakerClient::ListMonitoringSchedulesAsync(const ListMonitoringSchedulesRequest& request, const ListMonitoringSchedulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientListMonitoringSchedulesAsyncHelper( this, request, handler, context ); } );
}

ListNotebookInstanceLifecycleConfigsOutcome SageMakerClient::ListNotebookInstanceLifecycleConfigs(const ListNotebookInstanceLifecycleConfigsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListNotebookInstanceLifecycleConfigsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListNotebookInstanceLifecycleConfigsOutcomeCallable SageMakerClient::ListNotebookInstanceLifecycleConfigsCallable(const ListNotebookInstanceLifecycleConfigsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListNotebookInstanceLifecycleConfigsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListNotebookInstanceLifecycleConfigs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientListNotebookInstanceLifecycleConfigsAsyncHelper(SageMakerClient const * const clientThis, const ListNotebookInstanceLifecycleConfigsRequest& request, const ListNotebookInstanceLifecycleConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListNotebookInstanceLifecycleConfigs(request), context);
}

void SageMakerClient::ListNotebookInstanceLifecycleConfigsAsync(const ListNotebookInstanceLifecycleConfigsRequest& request, const ListNotebookInstanceLifecycleConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientListNotebookInstanceLifecycleConfigsAsyncHelper( this, request, handler, context ); } );
}

ListNotebookInstancesOutcome SageMakerClient::ListNotebookInstances(const ListNotebookInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListNotebookInstancesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListNotebookInstancesOutcomeCallable SageMakerClient::ListNotebookInstancesCallable(const ListNotebookInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListNotebookInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListNotebookInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientListNotebookInstancesAsyncHelper(SageMakerClient const * const clientThis, const ListNotebookInstancesRequest& request, const ListNotebookInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListNotebookInstances(request), context);
}

void SageMakerClient::ListNotebookInstancesAsync(const ListNotebookInstancesRequest& request, const ListNotebookInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientListNotebookInstancesAsyncHelper( this, request, handler, context ); } );
}

ListPipelineExecutionStepsOutcome SageMakerClient::ListPipelineExecutionSteps(const ListPipelineExecutionStepsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListPipelineExecutionStepsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPipelineExecutionStepsOutcomeCallable SageMakerClient::ListPipelineExecutionStepsCallable(const ListPipelineExecutionStepsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPipelineExecutionStepsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPipelineExecutionSteps(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientListPipelineExecutionStepsAsyncHelper(SageMakerClient const * const clientThis, const ListPipelineExecutionStepsRequest& request, const ListPipelineExecutionStepsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListPipelineExecutionSteps(request), context);
}

void SageMakerClient::ListPipelineExecutionStepsAsync(const ListPipelineExecutionStepsRequest& request, const ListPipelineExecutionStepsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientListPipelineExecutionStepsAsyncHelper( this, request, handler, context ); } );
}

ListPipelineExecutionsOutcome SageMakerClient::ListPipelineExecutions(const ListPipelineExecutionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListPipelineExecutionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPipelineExecutionsOutcomeCallable SageMakerClient::ListPipelineExecutionsCallable(const ListPipelineExecutionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPipelineExecutionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPipelineExecutions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientListPipelineExecutionsAsyncHelper(SageMakerClient const * const clientThis, const ListPipelineExecutionsRequest& request, const ListPipelineExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListPipelineExecutions(request), context);
}

void SageMakerClient::ListPipelineExecutionsAsync(const ListPipelineExecutionsRequest& request, const ListPipelineExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientListPipelineExecutionsAsyncHelper( this, request, handler, context ); } );
}

ListPipelineParametersForExecutionOutcome SageMakerClient::ListPipelineParametersForExecution(const ListPipelineParametersForExecutionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListPipelineParametersForExecutionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPipelineParametersForExecutionOutcomeCallable SageMakerClient::ListPipelineParametersForExecutionCallable(const ListPipelineParametersForExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPipelineParametersForExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPipelineParametersForExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientListPipelineParametersForExecutionAsyncHelper(SageMakerClient const * const clientThis, const ListPipelineParametersForExecutionRequest& request, const ListPipelineParametersForExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListPipelineParametersForExecution(request), context);
}

void SageMakerClient::ListPipelineParametersForExecutionAsync(const ListPipelineParametersForExecutionRequest& request, const ListPipelineParametersForExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientListPipelineParametersForExecutionAsyncHelper( this, request, handler, context ); } );
}

ListPipelinesOutcome SageMakerClient::ListPipelines(const ListPipelinesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListPipelinesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPipelinesOutcomeCallable SageMakerClient::ListPipelinesCallable(const ListPipelinesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPipelinesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPipelines(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientListPipelinesAsyncHelper(SageMakerClient const * const clientThis, const ListPipelinesRequest& request, const ListPipelinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListPipelines(request), context);
}

void SageMakerClient::ListPipelinesAsync(const ListPipelinesRequest& request, const ListPipelinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientListPipelinesAsyncHelper( this, request, handler, context ); } );
}

ListProcessingJobsOutcome SageMakerClient::ListProcessingJobs(const ListProcessingJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListProcessingJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListProcessingJobsOutcomeCallable SageMakerClient::ListProcessingJobsCallable(const ListProcessingJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListProcessingJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListProcessingJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientListProcessingJobsAsyncHelper(SageMakerClient const * const clientThis, const ListProcessingJobsRequest& request, const ListProcessingJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListProcessingJobs(request), context);
}

void SageMakerClient::ListProcessingJobsAsync(const ListProcessingJobsRequest& request, const ListProcessingJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientListProcessingJobsAsyncHelper( this, request, handler, context ); } );
}

ListProjectsOutcome SageMakerClient::ListProjects(const ListProjectsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListProjectsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListProjectsOutcomeCallable SageMakerClient::ListProjectsCallable(const ListProjectsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListProjectsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListProjects(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientListProjectsAsyncHelper(SageMakerClient const * const clientThis, const ListProjectsRequest& request, const ListProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListProjects(request), context);
}

void SageMakerClient::ListProjectsAsync(const ListProjectsRequest& request, const ListProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientListProjectsAsyncHelper( this, request, handler, context ); } );
}

ListStageDevicesOutcome SageMakerClient::ListStageDevices(const ListStageDevicesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListStageDevicesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListStageDevicesOutcomeCallable SageMakerClient::ListStageDevicesCallable(const ListStageDevicesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListStageDevicesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListStageDevices(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientListStageDevicesAsyncHelper(SageMakerClient const * const clientThis, const ListStageDevicesRequest& request, const ListStageDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListStageDevices(request), context);
}

void SageMakerClient::ListStageDevicesAsync(const ListStageDevicesRequest& request, const ListStageDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientListStageDevicesAsyncHelper( this, request, handler, context ); } );
}

ListStudioLifecycleConfigsOutcome SageMakerClient::ListStudioLifecycleConfigs(const ListStudioLifecycleConfigsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListStudioLifecycleConfigsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListStudioLifecycleConfigsOutcomeCallable SageMakerClient::ListStudioLifecycleConfigsCallable(const ListStudioLifecycleConfigsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListStudioLifecycleConfigsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListStudioLifecycleConfigs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientListStudioLifecycleConfigsAsyncHelper(SageMakerClient const * const clientThis, const ListStudioLifecycleConfigsRequest& request, const ListStudioLifecycleConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListStudioLifecycleConfigs(request), context);
}

void SageMakerClient::ListStudioLifecycleConfigsAsync(const ListStudioLifecycleConfigsRequest& request, const ListStudioLifecycleConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientListStudioLifecycleConfigsAsyncHelper( this, request, handler, context ); } );
}

ListSubscribedWorkteamsOutcome SageMakerClient::ListSubscribedWorkteams(const ListSubscribedWorkteamsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListSubscribedWorkteamsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListSubscribedWorkteamsOutcomeCallable SageMakerClient::ListSubscribedWorkteamsCallable(const ListSubscribedWorkteamsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSubscribedWorkteamsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSubscribedWorkteams(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientListSubscribedWorkteamsAsyncHelper(SageMakerClient const * const clientThis, const ListSubscribedWorkteamsRequest& request, const ListSubscribedWorkteamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListSubscribedWorkteams(request), context);
}

void SageMakerClient::ListSubscribedWorkteamsAsync(const ListSubscribedWorkteamsRequest& request, const ListSubscribedWorkteamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientListSubscribedWorkteamsAsyncHelper( this, request, handler, context ); } );
}

ListTagsOutcome SageMakerClient::ListTags(const ListTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsOutcomeCallable SageMakerClient::ListTagsCallable(const ListTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientListTagsAsyncHelper(SageMakerClient const * const clientThis, const ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTags(request), context);
}

void SageMakerClient::ListTagsAsync(const ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientListTagsAsyncHelper( this, request, handler, context ); } );
}

ListTrainingJobsOutcome SageMakerClient::ListTrainingJobs(const ListTrainingJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTrainingJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTrainingJobsOutcomeCallable SageMakerClient::ListTrainingJobsCallable(const ListTrainingJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTrainingJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTrainingJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientListTrainingJobsAsyncHelper(SageMakerClient const * const clientThis, const ListTrainingJobsRequest& request, const ListTrainingJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTrainingJobs(request), context);
}

void SageMakerClient::ListTrainingJobsAsync(const ListTrainingJobsRequest& request, const ListTrainingJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientListTrainingJobsAsyncHelper( this, request, handler, context ); } );
}

ListTrainingJobsForHyperParameterTuningJobOutcome SageMakerClient::ListTrainingJobsForHyperParameterTuningJob(const ListTrainingJobsForHyperParameterTuningJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTrainingJobsForHyperParameterTuningJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTrainingJobsForHyperParameterTuningJobOutcomeCallable SageMakerClient::ListTrainingJobsForHyperParameterTuningJobCallable(const ListTrainingJobsForHyperParameterTuningJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTrainingJobsForHyperParameterTuningJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTrainingJobsForHyperParameterTuningJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientListTrainingJobsForHyperParameterTuningJobAsyncHelper(SageMakerClient const * const clientThis, const ListTrainingJobsForHyperParameterTuningJobRequest& request, const ListTrainingJobsForHyperParameterTuningJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTrainingJobsForHyperParameterTuningJob(request), context);
}

void SageMakerClient::ListTrainingJobsForHyperParameterTuningJobAsync(const ListTrainingJobsForHyperParameterTuningJobRequest& request, const ListTrainingJobsForHyperParameterTuningJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientListTrainingJobsForHyperParameterTuningJobAsyncHelper( this, request, handler, context ); } );
}

ListTransformJobsOutcome SageMakerClient::ListTransformJobs(const ListTransformJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTransformJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTransformJobsOutcomeCallable SageMakerClient::ListTransformJobsCallable(const ListTransformJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTransformJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTransformJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientListTransformJobsAsyncHelper(SageMakerClient const * const clientThis, const ListTransformJobsRequest& request, const ListTransformJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTransformJobs(request), context);
}

void SageMakerClient::ListTransformJobsAsync(const ListTransformJobsRequest& request, const ListTransformJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientListTransformJobsAsyncHelper( this, request, handler, context ); } );
}

ListTrialComponentsOutcome SageMakerClient::ListTrialComponents(const ListTrialComponentsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTrialComponentsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTrialComponentsOutcomeCallable SageMakerClient::ListTrialComponentsCallable(const ListTrialComponentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTrialComponentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTrialComponents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientListTrialComponentsAsyncHelper(SageMakerClient const * const clientThis, const ListTrialComponentsRequest& request, const ListTrialComponentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTrialComponents(request), context);
}

void SageMakerClient::ListTrialComponentsAsync(const ListTrialComponentsRequest& request, const ListTrialComponentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientListTrialComponentsAsyncHelper( this, request, handler, context ); } );
}

ListTrialsOutcome SageMakerClient::ListTrials(const ListTrialsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTrialsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTrialsOutcomeCallable SageMakerClient::ListTrialsCallable(const ListTrialsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTrialsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTrials(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientListTrialsAsyncHelper(SageMakerClient const * const clientThis, const ListTrialsRequest& request, const ListTrialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTrials(request), context);
}

void SageMakerClient::ListTrialsAsync(const ListTrialsRequest& request, const ListTrialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientListTrialsAsyncHelper( this, request, handler, context ); } );
}

ListUserProfilesOutcome SageMakerClient::ListUserProfiles(const ListUserProfilesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListUserProfilesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListUserProfilesOutcomeCallable SageMakerClient::ListUserProfilesCallable(const ListUserProfilesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListUserProfilesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListUserProfiles(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientListUserProfilesAsyncHelper(SageMakerClient const * const clientThis, const ListUserProfilesRequest& request, const ListUserProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListUserProfiles(request), context);
}

void SageMakerClient::ListUserProfilesAsync(const ListUserProfilesRequest& request, const ListUserProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientListUserProfilesAsyncHelper( this, request, handler, context ); } );
}

ListWorkforcesOutcome SageMakerClient::ListWorkforces(const ListWorkforcesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListWorkforcesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListWorkforcesOutcomeCallable SageMakerClient::ListWorkforcesCallable(const ListWorkforcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListWorkforcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListWorkforces(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientListWorkforcesAsyncHelper(SageMakerClient const * const clientThis, const ListWorkforcesRequest& request, const ListWorkforcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListWorkforces(request), context);
}

void SageMakerClient::ListWorkforcesAsync(const ListWorkforcesRequest& request, const ListWorkforcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientListWorkforcesAsyncHelper( this, request, handler, context ); } );
}

ListWorkteamsOutcome SageMakerClient::ListWorkteams(const ListWorkteamsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListWorkteamsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListWorkteamsOutcomeCallable SageMakerClient::ListWorkteamsCallable(const ListWorkteamsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListWorkteamsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListWorkteams(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientListWorkteamsAsyncHelper(SageMakerClient const * const clientThis, const ListWorkteamsRequest& request, const ListWorkteamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListWorkteams(request), context);
}

void SageMakerClient::ListWorkteamsAsync(const ListWorkteamsRequest& request, const ListWorkteamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientListWorkteamsAsyncHelper( this, request, handler, context ); } );
}

PutModelPackageGroupPolicyOutcome SageMakerClient::PutModelPackageGroupPolicy(const PutModelPackageGroupPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutModelPackageGroupPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutModelPackageGroupPolicyOutcomeCallable SageMakerClient::PutModelPackageGroupPolicyCallable(const PutModelPackageGroupPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutModelPackageGroupPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutModelPackageGroupPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientPutModelPackageGroupPolicyAsyncHelper(SageMakerClient const * const clientThis, const PutModelPackageGroupPolicyRequest& request, const PutModelPackageGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutModelPackageGroupPolicy(request), context);
}

void SageMakerClient::PutModelPackageGroupPolicyAsync(const PutModelPackageGroupPolicyRequest& request, const PutModelPackageGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientPutModelPackageGroupPolicyAsyncHelper( this, request, handler, context ); } );
}

QueryLineageOutcome SageMakerClient::QueryLineage(const QueryLineageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return QueryLineageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

QueryLineageOutcomeCallable SageMakerClient::QueryLineageCallable(const QueryLineageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< QueryLineageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->QueryLineage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientQueryLineageAsyncHelper(SageMakerClient const * const clientThis, const QueryLineageRequest& request, const QueryLineageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->QueryLineage(request), context);
}

void SageMakerClient::QueryLineageAsync(const QueryLineageRequest& request, const QueryLineageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientQueryLineageAsyncHelper( this, request, handler, context ); } );
}

RegisterDevicesOutcome SageMakerClient::RegisterDevices(const RegisterDevicesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RegisterDevicesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterDevicesOutcomeCallable SageMakerClient::RegisterDevicesCallable(const RegisterDevicesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterDevicesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterDevices(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientRegisterDevicesAsyncHelper(SageMakerClient const * const clientThis, const RegisterDevicesRequest& request, const RegisterDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RegisterDevices(request), context);
}

void SageMakerClient::RegisterDevicesAsync(const RegisterDevicesRequest& request, const RegisterDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientRegisterDevicesAsyncHelper( this, request, handler, context ); } );
}

RenderUiTemplateOutcome SageMakerClient::RenderUiTemplate(const RenderUiTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RenderUiTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RenderUiTemplateOutcomeCallable SageMakerClient::RenderUiTemplateCallable(const RenderUiTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RenderUiTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RenderUiTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientRenderUiTemplateAsyncHelper(SageMakerClient const * const clientThis, const RenderUiTemplateRequest& request, const RenderUiTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RenderUiTemplate(request), context);
}

void SageMakerClient::RenderUiTemplateAsync(const RenderUiTemplateRequest& request, const RenderUiTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientRenderUiTemplateAsyncHelper( this, request, handler, context ); } );
}

RetryPipelineExecutionOutcome SageMakerClient::RetryPipelineExecution(const RetryPipelineExecutionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RetryPipelineExecutionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RetryPipelineExecutionOutcomeCallable SageMakerClient::RetryPipelineExecutionCallable(const RetryPipelineExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RetryPipelineExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RetryPipelineExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientRetryPipelineExecutionAsyncHelper(SageMakerClient const * const clientThis, const RetryPipelineExecutionRequest& request, const RetryPipelineExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RetryPipelineExecution(request), context);
}

void SageMakerClient::RetryPipelineExecutionAsync(const RetryPipelineExecutionRequest& request, const RetryPipelineExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientRetryPipelineExecutionAsyncHelper( this, request, handler, context ); } );
}

SearchOutcome SageMakerClient::Search(const SearchRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SearchOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchOutcomeCallable SageMakerClient::SearchCallable(const SearchRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->Search(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientSearchAsyncHelper(SageMakerClient const * const clientThis, const SearchRequest& request, const SearchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->Search(request), context);
}

void SageMakerClient::SearchAsync(const SearchRequest& request, const SearchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientSearchAsyncHelper( this, request, handler, context ); } );
}

SendPipelineExecutionStepFailureOutcome SageMakerClient::SendPipelineExecutionStepFailure(const SendPipelineExecutionStepFailureRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SendPipelineExecutionStepFailureOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SendPipelineExecutionStepFailureOutcomeCallable SageMakerClient::SendPipelineExecutionStepFailureCallable(const SendPipelineExecutionStepFailureRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SendPipelineExecutionStepFailureOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SendPipelineExecutionStepFailure(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientSendPipelineExecutionStepFailureAsyncHelper(SageMakerClient const * const clientThis, const SendPipelineExecutionStepFailureRequest& request, const SendPipelineExecutionStepFailureResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SendPipelineExecutionStepFailure(request), context);
}

void SageMakerClient::SendPipelineExecutionStepFailureAsync(const SendPipelineExecutionStepFailureRequest& request, const SendPipelineExecutionStepFailureResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientSendPipelineExecutionStepFailureAsyncHelper( this, request, handler, context ); } );
}

SendPipelineExecutionStepSuccessOutcome SageMakerClient::SendPipelineExecutionStepSuccess(const SendPipelineExecutionStepSuccessRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SendPipelineExecutionStepSuccessOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SendPipelineExecutionStepSuccessOutcomeCallable SageMakerClient::SendPipelineExecutionStepSuccessCallable(const SendPipelineExecutionStepSuccessRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SendPipelineExecutionStepSuccessOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SendPipelineExecutionStepSuccess(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientSendPipelineExecutionStepSuccessAsyncHelper(SageMakerClient const * const clientThis, const SendPipelineExecutionStepSuccessRequest& request, const SendPipelineExecutionStepSuccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SendPipelineExecutionStepSuccess(request), context);
}

void SageMakerClient::SendPipelineExecutionStepSuccessAsync(const SendPipelineExecutionStepSuccessRequest& request, const SendPipelineExecutionStepSuccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientSendPipelineExecutionStepSuccessAsyncHelper( this, request, handler, context ); } );
}

StartEdgeDeploymentStageOutcome SageMakerClient::StartEdgeDeploymentStage(const StartEdgeDeploymentStageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartEdgeDeploymentStageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartEdgeDeploymentStageOutcomeCallable SageMakerClient::StartEdgeDeploymentStageCallable(const StartEdgeDeploymentStageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartEdgeDeploymentStageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartEdgeDeploymentStage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientStartEdgeDeploymentStageAsyncHelper(SageMakerClient const * const clientThis, const StartEdgeDeploymentStageRequest& request, const StartEdgeDeploymentStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartEdgeDeploymentStage(request), context);
}

void SageMakerClient::StartEdgeDeploymentStageAsync(const StartEdgeDeploymentStageRequest& request, const StartEdgeDeploymentStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientStartEdgeDeploymentStageAsyncHelper( this, request, handler, context ); } );
}

StartMonitoringScheduleOutcome SageMakerClient::StartMonitoringSchedule(const StartMonitoringScheduleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartMonitoringScheduleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartMonitoringScheduleOutcomeCallable SageMakerClient::StartMonitoringScheduleCallable(const StartMonitoringScheduleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartMonitoringScheduleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartMonitoringSchedule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientStartMonitoringScheduleAsyncHelper(SageMakerClient const * const clientThis, const StartMonitoringScheduleRequest& request, const StartMonitoringScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartMonitoringSchedule(request), context);
}

void SageMakerClient::StartMonitoringScheduleAsync(const StartMonitoringScheduleRequest& request, const StartMonitoringScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientStartMonitoringScheduleAsyncHelper( this, request, handler, context ); } );
}

StartNotebookInstanceOutcome SageMakerClient::StartNotebookInstance(const StartNotebookInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartNotebookInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartNotebookInstanceOutcomeCallable SageMakerClient::StartNotebookInstanceCallable(const StartNotebookInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartNotebookInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartNotebookInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientStartNotebookInstanceAsyncHelper(SageMakerClient const * const clientThis, const StartNotebookInstanceRequest& request, const StartNotebookInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartNotebookInstance(request), context);
}

void SageMakerClient::StartNotebookInstanceAsync(const StartNotebookInstanceRequest& request, const StartNotebookInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientStartNotebookInstanceAsyncHelper( this, request, handler, context ); } );
}

StartPipelineExecutionOutcome SageMakerClient::StartPipelineExecution(const StartPipelineExecutionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartPipelineExecutionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartPipelineExecutionOutcomeCallable SageMakerClient::StartPipelineExecutionCallable(const StartPipelineExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartPipelineExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartPipelineExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientStartPipelineExecutionAsyncHelper(SageMakerClient const * const clientThis, const StartPipelineExecutionRequest& request, const StartPipelineExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartPipelineExecution(request), context);
}

void SageMakerClient::StartPipelineExecutionAsync(const StartPipelineExecutionRequest& request, const StartPipelineExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientStartPipelineExecutionAsyncHelper( this, request, handler, context ); } );
}

StopAutoMLJobOutcome SageMakerClient::StopAutoMLJob(const StopAutoMLJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopAutoMLJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopAutoMLJobOutcomeCallable SageMakerClient::StopAutoMLJobCallable(const StopAutoMLJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopAutoMLJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopAutoMLJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientStopAutoMLJobAsyncHelper(SageMakerClient const * const clientThis, const StopAutoMLJobRequest& request, const StopAutoMLJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopAutoMLJob(request), context);
}

void SageMakerClient::StopAutoMLJobAsync(const StopAutoMLJobRequest& request, const StopAutoMLJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientStopAutoMLJobAsyncHelper( this, request, handler, context ); } );
}

StopCompilationJobOutcome SageMakerClient::StopCompilationJob(const StopCompilationJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopCompilationJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopCompilationJobOutcomeCallable SageMakerClient::StopCompilationJobCallable(const StopCompilationJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopCompilationJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopCompilationJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientStopCompilationJobAsyncHelper(SageMakerClient const * const clientThis, const StopCompilationJobRequest& request, const StopCompilationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopCompilationJob(request), context);
}

void SageMakerClient::StopCompilationJobAsync(const StopCompilationJobRequest& request, const StopCompilationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientStopCompilationJobAsyncHelper( this, request, handler, context ); } );
}

StopEdgeDeploymentStageOutcome SageMakerClient::StopEdgeDeploymentStage(const StopEdgeDeploymentStageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopEdgeDeploymentStageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopEdgeDeploymentStageOutcomeCallable SageMakerClient::StopEdgeDeploymentStageCallable(const StopEdgeDeploymentStageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopEdgeDeploymentStageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopEdgeDeploymentStage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientStopEdgeDeploymentStageAsyncHelper(SageMakerClient const * const clientThis, const StopEdgeDeploymentStageRequest& request, const StopEdgeDeploymentStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopEdgeDeploymentStage(request), context);
}

void SageMakerClient::StopEdgeDeploymentStageAsync(const StopEdgeDeploymentStageRequest& request, const StopEdgeDeploymentStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientStopEdgeDeploymentStageAsyncHelper( this, request, handler, context ); } );
}

StopEdgePackagingJobOutcome SageMakerClient::StopEdgePackagingJob(const StopEdgePackagingJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopEdgePackagingJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopEdgePackagingJobOutcomeCallable SageMakerClient::StopEdgePackagingJobCallable(const StopEdgePackagingJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopEdgePackagingJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopEdgePackagingJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientStopEdgePackagingJobAsyncHelper(SageMakerClient const * const clientThis, const StopEdgePackagingJobRequest& request, const StopEdgePackagingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopEdgePackagingJob(request), context);
}

void SageMakerClient::StopEdgePackagingJobAsync(const StopEdgePackagingJobRequest& request, const StopEdgePackagingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientStopEdgePackagingJobAsyncHelper( this, request, handler, context ); } );
}

StopHyperParameterTuningJobOutcome SageMakerClient::StopHyperParameterTuningJob(const StopHyperParameterTuningJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopHyperParameterTuningJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopHyperParameterTuningJobOutcomeCallable SageMakerClient::StopHyperParameterTuningJobCallable(const StopHyperParameterTuningJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopHyperParameterTuningJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopHyperParameterTuningJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientStopHyperParameterTuningJobAsyncHelper(SageMakerClient const * const clientThis, const StopHyperParameterTuningJobRequest& request, const StopHyperParameterTuningJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopHyperParameterTuningJob(request), context);
}

void SageMakerClient::StopHyperParameterTuningJobAsync(const StopHyperParameterTuningJobRequest& request, const StopHyperParameterTuningJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientStopHyperParameterTuningJobAsyncHelper( this, request, handler, context ); } );
}

StopInferenceRecommendationsJobOutcome SageMakerClient::StopInferenceRecommendationsJob(const StopInferenceRecommendationsJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopInferenceRecommendationsJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopInferenceRecommendationsJobOutcomeCallable SageMakerClient::StopInferenceRecommendationsJobCallable(const StopInferenceRecommendationsJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopInferenceRecommendationsJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopInferenceRecommendationsJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientStopInferenceRecommendationsJobAsyncHelper(SageMakerClient const * const clientThis, const StopInferenceRecommendationsJobRequest& request, const StopInferenceRecommendationsJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopInferenceRecommendationsJob(request), context);
}

void SageMakerClient::StopInferenceRecommendationsJobAsync(const StopInferenceRecommendationsJobRequest& request, const StopInferenceRecommendationsJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientStopInferenceRecommendationsJobAsyncHelper( this, request, handler, context ); } );
}

StopLabelingJobOutcome SageMakerClient::StopLabelingJob(const StopLabelingJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopLabelingJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopLabelingJobOutcomeCallable SageMakerClient::StopLabelingJobCallable(const StopLabelingJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopLabelingJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopLabelingJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientStopLabelingJobAsyncHelper(SageMakerClient const * const clientThis, const StopLabelingJobRequest& request, const StopLabelingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopLabelingJob(request), context);
}

void SageMakerClient::StopLabelingJobAsync(const StopLabelingJobRequest& request, const StopLabelingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientStopLabelingJobAsyncHelper( this, request, handler, context ); } );
}

StopMonitoringScheduleOutcome SageMakerClient::StopMonitoringSchedule(const StopMonitoringScheduleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopMonitoringScheduleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopMonitoringScheduleOutcomeCallable SageMakerClient::StopMonitoringScheduleCallable(const StopMonitoringScheduleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopMonitoringScheduleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopMonitoringSchedule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientStopMonitoringScheduleAsyncHelper(SageMakerClient const * const clientThis, const StopMonitoringScheduleRequest& request, const StopMonitoringScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopMonitoringSchedule(request), context);
}

void SageMakerClient::StopMonitoringScheduleAsync(const StopMonitoringScheduleRequest& request, const StopMonitoringScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientStopMonitoringScheduleAsyncHelper( this, request, handler, context ); } );
}

StopNotebookInstanceOutcome SageMakerClient::StopNotebookInstance(const StopNotebookInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopNotebookInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopNotebookInstanceOutcomeCallable SageMakerClient::StopNotebookInstanceCallable(const StopNotebookInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopNotebookInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopNotebookInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientStopNotebookInstanceAsyncHelper(SageMakerClient const * const clientThis, const StopNotebookInstanceRequest& request, const StopNotebookInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopNotebookInstance(request), context);
}

void SageMakerClient::StopNotebookInstanceAsync(const StopNotebookInstanceRequest& request, const StopNotebookInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientStopNotebookInstanceAsyncHelper( this, request, handler, context ); } );
}

StopPipelineExecutionOutcome SageMakerClient::StopPipelineExecution(const StopPipelineExecutionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopPipelineExecutionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopPipelineExecutionOutcomeCallable SageMakerClient::StopPipelineExecutionCallable(const StopPipelineExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopPipelineExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopPipelineExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientStopPipelineExecutionAsyncHelper(SageMakerClient const * const clientThis, const StopPipelineExecutionRequest& request, const StopPipelineExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopPipelineExecution(request), context);
}

void SageMakerClient::StopPipelineExecutionAsync(const StopPipelineExecutionRequest& request, const StopPipelineExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientStopPipelineExecutionAsyncHelper( this, request, handler, context ); } );
}

StopProcessingJobOutcome SageMakerClient::StopProcessingJob(const StopProcessingJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopProcessingJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopProcessingJobOutcomeCallable SageMakerClient::StopProcessingJobCallable(const StopProcessingJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopProcessingJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopProcessingJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientStopProcessingJobAsyncHelper(SageMakerClient const * const clientThis, const StopProcessingJobRequest& request, const StopProcessingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopProcessingJob(request), context);
}

void SageMakerClient::StopProcessingJobAsync(const StopProcessingJobRequest& request, const StopProcessingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientStopProcessingJobAsyncHelper( this, request, handler, context ); } );
}

StopTrainingJobOutcome SageMakerClient::StopTrainingJob(const StopTrainingJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopTrainingJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopTrainingJobOutcomeCallable SageMakerClient::StopTrainingJobCallable(const StopTrainingJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopTrainingJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopTrainingJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientStopTrainingJobAsyncHelper(SageMakerClient const * const clientThis, const StopTrainingJobRequest& request, const StopTrainingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopTrainingJob(request), context);
}

void SageMakerClient::StopTrainingJobAsync(const StopTrainingJobRequest& request, const StopTrainingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientStopTrainingJobAsyncHelper( this, request, handler, context ); } );
}

StopTransformJobOutcome SageMakerClient::StopTransformJob(const StopTransformJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopTransformJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopTransformJobOutcomeCallable SageMakerClient::StopTransformJobCallable(const StopTransformJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopTransformJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopTransformJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientStopTransformJobAsyncHelper(SageMakerClient const * const clientThis, const StopTransformJobRequest& request, const StopTransformJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopTransformJob(request), context);
}

void SageMakerClient::StopTransformJobAsync(const StopTransformJobRequest& request, const StopTransformJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientStopTransformJobAsyncHelper( this, request, handler, context ); } );
}

UpdateActionOutcome SageMakerClient::UpdateAction(const UpdateActionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateActionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateActionOutcomeCallable SageMakerClient::UpdateActionCallable(const UpdateActionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateActionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientUpdateActionAsyncHelper(SageMakerClient const * const clientThis, const UpdateActionRequest& request, const UpdateActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateAction(request), context);
}

void SageMakerClient::UpdateActionAsync(const UpdateActionRequest& request, const UpdateActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientUpdateActionAsyncHelper( this, request, handler, context ); } );
}

UpdateAppImageConfigOutcome SageMakerClient::UpdateAppImageConfig(const UpdateAppImageConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateAppImageConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateAppImageConfigOutcomeCallable SageMakerClient::UpdateAppImageConfigCallable(const UpdateAppImageConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAppImageConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAppImageConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientUpdateAppImageConfigAsyncHelper(SageMakerClient const * const clientThis, const UpdateAppImageConfigRequest& request, const UpdateAppImageConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateAppImageConfig(request), context);
}

void SageMakerClient::UpdateAppImageConfigAsync(const UpdateAppImageConfigRequest& request, const UpdateAppImageConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientUpdateAppImageConfigAsyncHelper( this, request, handler, context ); } );
}

UpdateArtifactOutcome SageMakerClient::UpdateArtifact(const UpdateArtifactRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateArtifactOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateArtifactOutcomeCallable SageMakerClient::UpdateArtifactCallable(const UpdateArtifactRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateArtifactOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateArtifact(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientUpdateArtifactAsyncHelper(SageMakerClient const * const clientThis, const UpdateArtifactRequest& request, const UpdateArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateArtifact(request), context);
}

void SageMakerClient::UpdateArtifactAsync(const UpdateArtifactRequest& request, const UpdateArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientUpdateArtifactAsyncHelper( this, request, handler, context ); } );
}

UpdateCodeRepositoryOutcome SageMakerClient::UpdateCodeRepository(const UpdateCodeRepositoryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateCodeRepositoryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateCodeRepositoryOutcomeCallable SageMakerClient::UpdateCodeRepositoryCallable(const UpdateCodeRepositoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateCodeRepositoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateCodeRepository(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientUpdateCodeRepositoryAsyncHelper(SageMakerClient const * const clientThis, const UpdateCodeRepositoryRequest& request, const UpdateCodeRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateCodeRepository(request), context);
}

void SageMakerClient::UpdateCodeRepositoryAsync(const UpdateCodeRepositoryRequest& request, const UpdateCodeRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientUpdateCodeRepositoryAsyncHelper( this, request, handler, context ); } );
}

UpdateContextOutcome SageMakerClient::UpdateContext(const UpdateContextRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateContextOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateContextOutcomeCallable SageMakerClient::UpdateContextCallable(const UpdateContextRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateContextOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateContext(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientUpdateContextAsyncHelper(SageMakerClient const * const clientThis, const UpdateContextRequest& request, const UpdateContextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateContext(request), context);
}

void SageMakerClient::UpdateContextAsync(const UpdateContextRequest& request, const UpdateContextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientUpdateContextAsyncHelper( this, request, handler, context ); } );
}

UpdateDeviceFleetOutcome SageMakerClient::UpdateDeviceFleet(const UpdateDeviceFleetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateDeviceFleetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDeviceFleetOutcomeCallable SageMakerClient::UpdateDeviceFleetCallable(const UpdateDeviceFleetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDeviceFleetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDeviceFleet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientUpdateDeviceFleetAsyncHelper(SageMakerClient const * const clientThis, const UpdateDeviceFleetRequest& request, const UpdateDeviceFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateDeviceFleet(request), context);
}

void SageMakerClient::UpdateDeviceFleetAsync(const UpdateDeviceFleetRequest& request, const UpdateDeviceFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientUpdateDeviceFleetAsyncHelper( this, request, handler, context ); } );
}

UpdateDevicesOutcome SageMakerClient::UpdateDevices(const UpdateDevicesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateDevicesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDevicesOutcomeCallable SageMakerClient::UpdateDevicesCallable(const UpdateDevicesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDevicesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDevices(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientUpdateDevicesAsyncHelper(SageMakerClient const * const clientThis, const UpdateDevicesRequest& request, const UpdateDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateDevices(request), context);
}

void SageMakerClient::UpdateDevicesAsync(const UpdateDevicesRequest& request, const UpdateDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientUpdateDevicesAsyncHelper( this, request, handler, context ); } );
}

UpdateDomainOutcome SageMakerClient::UpdateDomain(const UpdateDomainRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateDomainOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDomainOutcomeCallable SageMakerClient::UpdateDomainCallable(const UpdateDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientUpdateDomainAsyncHelper(SageMakerClient const * const clientThis, const UpdateDomainRequest& request, const UpdateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateDomain(request), context);
}

void SageMakerClient::UpdateDomainAsync(const UpdateDomainRequest& request, const UpdateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientUpdateDomainAsyncHelper( this, request, handler, context ); } );
}

UpdateEndpointOutcome SageMakerClient::UpdateEndpoint(const UpdateEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateEndpointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateEndpointOutcomeCallable SageMakerClient::UpdateEndpointCallable(const UpdateEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientUpdateEndpointAsyncHelper(SageMakerClient const * const clientThis, const UpdateEndpointRequest& request, const UpdateEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateEndpoint(request), context);
}

void SageMakerClient::UpdateEndpointAsync(const UpdateEndpointRequest& request, const UpdateEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientUpdateEndpointAsyncHelper( this, request, handler, context ); } );
}

UpdateEndpointWeightsAndCapacitiesOutcome SageMakerClient::UpdateEndpointWeightsAndCapacities(const UpdateEndpointWeightsAndCapacitiesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateEndpointWeightsAndCapacitiesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateEndpointWeightsAndCapacitiesOutcomeCallable SageMakerClient::UpdateEndpointWeightsAndCapacitiesCallable(const UpdateEndpointWeightsAndCapacitiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateEndpointWeightsAndCapacitiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateEndpointWeightsAndCapacities(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientUpdateEndpointWeightsAndCapacitiesAsyncHelper(SageMakerClient const * const clientThis, const UpdateEndpointWeightsAndCapacitiesRequest& request, const UpdateEndpointWeightsAndCapacitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateEndpointWeightsAndCapacities(request), context);
}

void SageMakerClient::UpdateEndpointWeightsAndCapacitiesAsync(const UpdateEndpointWeightsAndCapacitiesRequest& request, const UpdateEndpointWeightsAndCapacitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientUpdateEndpointWeightsAndCapacitiesAsyncHelper( this, request, handler, context ); } );
}

UpdateExperimentOutcome SageMakerClient::UpdateExperiment(const UpdateExperimentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateExperimentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateExperimentOutcomeCallable SageMakerClient::UpdateExperimentCallable(const UpdateExperimentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateExperimentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateExperiment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientUpdateExperimentAsyncHelper(SageMakerClient const * const clientThis, const UpdateExperimentRequest& request, const UpdateExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateExperiment(request), context);
}

void SageMakerClient::UpdateExperimentAsync(const UpdateExperimentRequest& request, const UpdateExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientUpdateExperimentAsyncHelper( this, request, handler, context ); } );
}

UpdateFeatureGroupOutcome SageMakerClient::UpdateFeatureGroup(const UpdateFeatureGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateFeatureGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateFeatureGroupOutcomeCallable SageMakerClient::UpdateFeatureGroupCallable(const UpdateFeatureGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFeatureGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFeatureGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientUpdateFeatureGroupAsyncHelper(SageMakerClient const * const clientThis, const UpdateFeatureGroupRequest& request, const UpdateFeatureGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateFeatureGroup(request), context);
}

void SageMakerClient::UpdateFeatureGroupAsync(const UpdateFeatureGroupRequest& request, const UpdateFeatureGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientUpdateFeatureGroupAsyncHelper( this, request, handler, context ); } );
}

UpdateFeatureMetadataOutcome SageMakerClient::UpdateFeatureMetadata(const UpdateFeatureMetadataRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateFeatureMetadataOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateFeatureMetadataOutcomeCallable SageMakerClient::UpdateFeatureMetadataCallable(const UpdateFeatureMetadataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFeatureMetadataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFeatureMetadata(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientUpdateFeatureMetadataAsyncHelper(SageMakerClient const * const clientThis, const UpdateFeatureMetadataRequest& request, const UpdateFeatureMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateFeatureMetadata(request), context);
}

void SageMakerClient::UpdateFeatureMetadataAsync(const UpdateFeatureMetadataRequest& request, const UpdateFeatureMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientUpdateFeatureMetadataAsyncHelper( this, request, handler, context ); } );
}

UpdateImageOutcome SageMakerClient::UpdateImage(const UpdateImageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateImageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateImageOutcomeCallable SageMakerClient::UpdateImageCallable(const UpdateImageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateImageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateImage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientUpdateImageAsyncHelper(SageMakerClient const * const clientThis, const UpdateImageRequest& request, const UpdateImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateImage(request), context);
}

void SageMakerClient::UpdateImageAsync(const UpdateImageRequest& request, const UpdateImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientUpdateImageAsyncHelper( this, request, handler, context ); } );
}

UpdateModelPackageOutcome SageMakerClient::UpdateModelPackage(const UpdateModelPackageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateModelPackageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateModelPackageOutcomeCallable SageMakerClient::UpdateModelPackageCallable(const UpdateModelPackageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateModelPackageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateModelPackage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientUpdateModelPackageAsyncHelper(SageMakerClient const * const clientThis, const UpdateModelPackageRequest& request, const UpdateModelPackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateModelPackage(request), context);
}

void SageMakerClient::UpdateModelPackageAsync(const UpdateModelPackageRequest& request, const UpdateModelPackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientUpdateModelPackageAsyncHelper( this, request, handler, context ); } );
}

UpdateMonitoringScheduleOutcome SageMakerClient::UpdateMonitoringSchedule(const UpdateMonitoringScheduleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateMonitoringScheduleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateMonitoringScheduleOutcomeCallable SageMakerClient::UpdateMonitoringScheduleCallable(const UpdateMonitoringScheduleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateMonitoringScheduleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateMonitoringSchedule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientUpdateMonitoringScheduleAsyncHelper(SageMakerClient const * const clientThis, const UpdateMonitoringScheduleRequest& request, const UpdateMonitoringScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateMonitoringSchedule(request), context);
}

void SageMakerClient::UpdateMonitoringScheduleAsync(const UpdateMonitoringScheduleRequest& request, const UpdateMonitoringScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientUpdateMonitoringScheduleAsyncHelper( this, request, handler, context ); } );
}

UpdateNotebookInstanceOutcome SageMakerClient::UpdateNotebookInstance(const UpdateNotebookInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateNotebookInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateNotebookInstanceOutcomeCallable SageMakerClient::UpdateNotebookInstanceCallable(const UpdateNotebookInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateNotebookInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateNotebookInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientUpdateNotebookInstanceAsyncHelper(SageMakerClient const * const clientThis, const UpdateNotebookInstanceRequest& request, const UpdateNotebookInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateNotebookInstance(request), context);
}

void SageMakerClient::UpdateNotebookInstanceAsync(const UpdateNotebookInstanceRequest& request, const UpdateNotebookInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientUpdateNotebookInstanceAsyncHelper( this, request, handler, context ); } );
}

UpdateNotebookInstanceLifecycleConfigOutcome SageMakerClient::UpdateNotebookInstanceLifecycleConfig(const UpdateNotebookInstanceLifecycleConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateNotebookInstanceLifecycleConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateNotebookInstanceLifecycleConfigOutcomeCallable SageMakerClient::UpdateNotebookInstanceLifecycleConfigCallable(const UpdateNotebookInstanceLifecycleConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateNotebookInstanceLifecycleConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateNotebookInstanceLifecycleConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientUpdateNotebookInstanceLifecycleConfigAsyncHelper(SageMakerClient const * const clientThis, const UpdateNotebookInstanceLifecycleConfigRequest& request, const UpdateNotebookInstanceLifecycleConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateNotebookInstanceLifecycleConfig(request), context);
}

void SageMakerClient::UpdateNotebookInstanceLifecycleConfigAsync(const UpdateNotebookInstanceLifecycleConfigRequest& request, const UpdateNotebookInstanceLifecycleConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientUpdateNotebookInstanceLifecycleConfigAsyncHelper( this, request, handler, context ); } );
}

UpdatePipelineOutcome SageMakerClient::UpdatePipeline(const UpdatePipelineRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdatePipelineOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdatePipelineOutcomeCallable SageMakerClient::UpdatePipelineCallable(const UpdatePipelineRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdatePipelineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePipeline(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientUpdatePipelineAsyncHelper(SageMakerClient const * const clientThis, const UpdatePipelineRequest& request, const UpdatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdatePipeline(request), context);
}

void SageMakerClient::UpdatePipelineAsync(const UpdatePipelineRequest& request, const UpdatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientUpdatePipelineAsyncHelper( this, request, handler, context ); } );
}

UpdatePipelineExecutionOutcome SageMakerClient::UpdatePipelineExecution(const UpdatePipelineExecutionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdatePipelineExecutionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdatePipelineExecutionOutcomeCallable SageMakerClient::UpdatePipelineExecutionCallable(const UpdatePipelineExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdatePipelineExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePipelineExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientUpdatePipelineExecutionAsyncHelper(SageMakerClient const * const clientThis, const UpdatePipelineExecutionRequest& request, const UpdatePipelineExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdatePipelineExecution(request), context);
}

void SageMakerClient::UpdatePipelineExecutionAsync(const UpdatePipelineExecutionRequest& request, const UpdatePipelineExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientUpdatePipelineExecutionAsyncHelper( this, request, handler, context ); } );
}

UpdateProjectOutcome SageMakerClient::UpdateProject(const UpdateProjectRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateProjectOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateProjectOutcomeCallable SageMakerClient::UpdateProjectCallable(const UpdateProjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateProjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateProject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientUpdateProjectAsyncHelper(SageMakerClient const * const clientThis, const UpdateProjectRequest& request, const UpdateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateProject(request), context);
}

void SageMakerClient::UpdateProjectAsync(const UpdateProjectRequest& request, const UpdateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientUpdateProjectAsyncHelper( this, request, handler, context ); } );
}

UpdateTrainingJobOutcome SageMakerClient::UpdateTrainingJob(const UpdateTrainingJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateTrainingJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateTrainingJobOutcomeCallable SageMakerClient::UpdateTrainingJobCallable(const UpdateTrainingJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateTrainingJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateTrainingJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientUpdateTrainingJobAsyncHelper(SageMakerClient const * const clientThis, const UpdateTrainingJobRequest& request, const UpdateTrainingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateTrainingJob(request), context);
}

void SageMakerClient::UpdateTrainingJobAsync(const UpdateTrainingJobRequest& request, const UpdateTrainingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientUpdateTrainingJobAsyncHelper( this, request, handler, context ); } );
}

UpdateTrialOutcome SageMakerClient::UpdateTrial(const UpdateTrialRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateTrialOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateTrialOutcomeCallable SageMakerClient::UpdateTrialCallable(const UpdateTrialRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateTrialOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateTrial(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientUpdateTrialAsyncHelper(SageMakerClient const * const clientThis, const UpdateTrialRequest& request, const UpdateTrialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateTrial(request), context);
}

void SageMakerClient::UpdateTrialAsync(const UpdateTrialRequest& request, const UpdateTrialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientUpdateTrialAsyncHelper( this, request, handler, context ); } );
}

UpdateTrialComponentOutcome SageMakerClient::UpdateTrialComponent(const UpdateTrialComponentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateTrialComponentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateTrialComponentOutcomeCallable SageMakerClient::UpdateTrialComponentCallable(const UpdateTrialComponentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateTrialComponentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateTrialComponent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientUpdateTrialComponentAsyncHelper(SageMakerClient const * const clientThis, const UpdateTrialComponentRequest& request, const UpdateTrialComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateTrialComponent(request), context);
}

void SageMakerClient::UpdateTrialComponentAsync(const UpdateTrialComponentRequest& request, const UpdateTrialComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientUpdateTrialComponentAsyncHelper( this, request, handler, context ); } );
}

UpdateUserProfileOutcome SageMakerClient::UpdateUserProfile(const UpdateUserProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateUserProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateUserProfileOutcomeCallable SageMakerClient::UpdateUserProfileCallable(const UpdateUserProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateUserProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateUserProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientUpdateUserProfileAsyncHelper(SageMakerClient const * const clientThis, const UpdateUserProfileRequest& request, const UpdateUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateUserProfile(request), context);
}

void SageMakerClient::UpdateUserProfileAsync(const UpdateUserProfileRequest& request, const UpdateUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientUpdateUserProfileAsyncHelper( this, request, handler, context ); } );
}

UpdateWorkforceOutcome SageMakerClient::UpdateWorkforce(const UpdateWorkforceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateWorkforceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateWorkforceOutcomeCallable SageMakerClient::UpdateWorkforceCallable(const UpdateWorkforceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateWorkforceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateWorkforce(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientUpdateWorkforceAsyncHelper(SageMakerClient const * const clientThis, const UpdateWorkforceRequest& request, const UpdateWorkforceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateWorkforce(request), context);
}

void SageMakerClient::UpdateWorkforceAsync(const UpdateWorkforceRequest& request, const UpdateWorkforceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientUpdateWorkforceAsyncHelper( this, request, handler, context ); } );
}

UpdateWorkteamOutcome SageMakerClient::UpdateWorkteam(const UpdateWorkteamRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateWorkteamOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateWorkteamOutcomeCallable SageMakerClient::UpdateWorkteamCallable(const UpdateWorkteamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateWorkteamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateWorkteam(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerClientUpdateWorkteamAsyncHelper(SageMakerClient const * const clientThis, const UpdateWorkteamRequest& request, const UpdateWorkteamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateWorkteam(request), context);
}

void SageMakerClient::UpdateWorkteamAsync(const UpdateWorkteamRequest& request, const UpdateWorkteamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SageMakerClientUpdateWorkteamAsyncHelper( this, request, handler, context ); } );
}

