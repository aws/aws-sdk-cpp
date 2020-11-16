/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/AddTagsResult.h>
#include <aws/sagemaker/model/AssociateTrialComponentResult.h>
#include <aws/sagemaker/model/CreateAlgorithmResult.h>
#include <aws/sagemaker/model/CreateAppResult.h>
#include <aws/sagemaker/model/CreateAppImageConfigResult.h>
#include <aws/sagemaker/model/CreateAutoMLJobResult.h>
#include <aws/sagemaker/model/CreateCodeRepositoryResult.h>
#include <aws/sagemaker/model/CreateCompilationJobResult.h>
#include <aws/sagemaker/model/CreateDomainResult.h>
#include <aws/sagemaker/model/CreateEndpointResult.h>
#include <aws/sagemaker/model/CreateEndpointConfigResult.h>
#include <aws/sagemaker/model/CreateExperimentResult.h>
#include <aws/sagemaker/model/CreateFlowDefinitionResult.h>
#include <aws/sagemaker/model/CreateHumanTaskUiResult.h>
#include <aws/sagemaker/model/CreateHyperParameterTuningJobResult.h>
#include <aws/sagemaker/model/CreateImageResult.h>
#include <aws/sagemaker/model/CreateImageVersionResult.h>
#include <aws/sagemaker/model/CreateLabelingJobResult.h>
#include <aws/sagemaker/model/CreateModelResult.h>
#include <aws/sagemaker/model/CreateModelPackageResult.h>
#include <aws/sagemaker/model/CreateMonitoringScheduleResult.h>
#include <aws/sagemaker/model/CreateNotebookInstanceResult.h>
#include <aws/sagemaker/model/CreateNotebookInstanceLifecycleConfigResult.h>
#include <aws/sagemaker/model/CreatePresignedDomainUrlResult.h>
#include <aws/sagemaker/model/CreatePresignedNotebookInstanceUrlResult.h>
#include <aws/sagemaker/model/CreateProcessingJobResult.h>
#include <aws/sagemaker/model/CreateTrainingJobResult.h>
#include <aws/sagemaker/model/CreateTransformJobResult.h>
#include <aws/sagemaker/model/CreateTrialResult.h>
#include <aws/sagemaker/model/CreateTrialComponentResult.h>
#include <aws/sagemaker/model/CreateUserProfileResult.h>
#include <aws/sagemaker/model/CreateWorkforceResult.h>
#include <aws/sagemaker/model/CreateWorkteamResult.h>
#include <aws/sagemaker/model/DeleteExperimentResult.h>
#include <aws/sagemaker/model/DeleteFlowDefinitionResult.h>
#include <aws/sagemaker/model/DeleteHumanTaskUiResult.h>
#include <aws/sagemaker/model/DeleteImageResult.h>
#include <aws/sagemaker/model/DeleteImageVersionResult.h>
#include <aws/sagemaker/model/DeleteTagsResult.h>
#include <aws/sagemaker/model/DeleteTrialResult.h>
#include <aws/sagemaker/model/DeleteTrialComponentResult.h>
#include <aws/sagemaker/model/DeleteWorkforceResult.h>
#include <aws/sagemaker/model/DeleteWorkteamResult.h>
#include <aws/sagemaker/model/DescribeAlgorithmResult.h>
#include <aws/sagemaker/model/DescribeAppResult.h>
#include <aws/sagemaker/model/DescribeAppImageConfigResult.h>
#include <aws/sagemaker/model/DescribeAutoMLJobResult.h>
#include <aws/sagemaker/model/DescribeCodeRepositoryResult.h>
#include <aws/sagemaker/model/DescribeCompilationJobResult.h>
#include <aws/sagemaker/model/DescribeDomainResult.h>
#include <aws/sagemaker/model/DescribeEndpointResult.h>
#include <aws/sagemaker/model/DescribeEndpointConfigResult.h>
#include <aws/sagemaker/model/DescribeExperimentResult.h>
#include <aws/sagemaker/model/DescribeFlowDefinitionResult.h>
#include <aws/sagemaker/model/DescribeHumanTaskUiResult.h>
#include <aws/sagemaker/model/DescribeHyperParameterTuningJobResult.h>
#include <aws/sagemaker/model/DescribeImageResult.h>
#include <aws/sagemaker/model/DescribeImageVersionResult.h>
#include <aws/sagemaker/model/DescribeLabelingJobResult.h>
#include <aws/sagemaker/model/DescribeModelResult.h>
#include <aws/sagemaker/model/DescribeModelPackageResult.h>
#include <aws/sagemaker/model/DescribeMonitoringScheduleResult.h>
#include <aws/sagemaker/model/DescribeNotebookInstanceResult.h>
#include <aws/sagemaker/model/DescribeNotebookInstanceLifecycleConfigResult.h>
#include <aws/sagemaker/model/DescribeProcessingJobResult.h>
#include <aws/sagemaker/model/DescribeSubscribedWorkteamResult.h>
#include <aws/sagemaker/model/DescribeTrainingJobResult.h>
#include <aws/sagemaker/model/DescribeTransformJobResult.h>
#include <aws/sagemaker/model/DescribeTrialResult.h>
#include <aws/sagemaker/model/DescribeTrialComponentResult.h>
#include <aws/sagemaker/model/DescribeUserProfileResult.h>
#include <aws/sagemaker/model/DescribeWorkforceResult.h>
#include <aws/sagemaker/model/DescribeWorkteamResult.h>
#include <aws/sagemaker/model/DisassociateTrialComponentResult.h>
#include <aws/sagemaker/model/GetSearchSuggestionsResult.h>
#include <aws/sagemaker/model/ListAlgorithmsResult.h>
#include <aws/sagemaker/model/ListAppImageConfigsResult.h>
#include <aws/sagemaker/model/ListAppsResult.h>
#include <aws/sagemaker/model/ListAutoMLJobsResult.h>
#include <aws/sagemaker/model/ListCandidatesForAutoMLJobResult.h>
#include <aws/sagemaker/model/ListCodeRepositoriesResult.h>
#include <aws/sagemaker/model/ListCompilationJobsResult.h>
#include <aws/sagemaker/model/ListDomainsResult.h>
#include <aws/sagemaker/model/ListEndpointConfigsResult.h>
#include <aws/sagemaker/model/ListEndpointsResult.h>
#include <aws/sagemaker/model/ListExperimentsResult.h>
#include <aws/sagemaker/model/ListFlowDefinitionsResult.h>
#include <aws/sagemaker/model/ListHumanTaskUisResult.h>
#include <aws/sagemaker/model/ListHyperParameterTuningJobsResult.h>
#include <aws/sagemaker/model/ListImageVersionsResult.h>
#include <aws/sagemaker/model/ListImagesResult.h>
#include <aws/sagemaker/model/ListLabelingJobsResult.h>
#include <aws/sagemaker/model/ListLabelingJobsForWorkteamResult.h>
#include <aws/sagemaker/model/ListModelPackagesResult.h>
#include <aws/sagemaker/model/ListModelsResult.h>
#include <aws/sagemaker/model/ListMonitoringExecutionsResult.h>
#include <aws/sagemaker/model/ListMonitoringSchedulesResult.h>
#include <aws/sagemaker/model/ListNotebookInstanceLifecycleConfigsResult.h>
#include <aws/sagemaker/model/ListNotebookInstancesResult.h>
#include <aws/sagemaker/model/ListProcessingJobsResult.h>
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
#include <aws/sagemaker/model/RenderUiTemplateResult.h>
#include <aws/sagemaker/model/SearchResult.h>
#include <aws/sagemaker/model/UpdateAppImageConfigResult.h>
#include <aws/sagemaker/model/UpdateCodeRepositoryResult.h>
#include <aws/sagemaker/model/UpdateDomainResult.h>
#include <aws/sagemaker/model/UpdateEndpointResult.h>
#include <aws/sagemaker/model/UpdateEndpointWeightsAndCapacitiesResult.h>
#include <aws/sagemaker/model/UpdateExperimentResult.h>
#include <aws/sagemaker/model/UpdateImageResult.h>
#include <aws/sagemaker/model/UpdateMonitoringScheduleResult.h>
#include <aws/sagemaker/model/UpdateNotebookInstanceResult.h>
#include <aws/sagemaker/model/UpdateNotebookInstanceLifecycleConfigResult.h>
#include <aws/sagemaker/model/UpdateTrialResult.h>
#include <aws/sagemaker/model/UpdateTrialComponentResult.h>
#include <aws/sagemaker/model/UpdateUserProfileResult.h>
#include <aws/sagemaker/model/UpdateWorkforceResult.h>
#include <aws/sagemaker/model/UpdateWorkteamResult.h>
#include <aws/core/NoResult.h>
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

namespace SageMaker
{

namespace Model
{
        class AddTagsRequest;
        class AssociateTrialComponentRequest;
        class CreateAlgorithmRequest;
        class CreateAppRequest;
        class CreateAppImageConfigRequest;
        class CreateAutoMLJobRequest;
        class CreateCodeRepositoryRequest;
        class CreateCompilationJobRequest;
        class CreateDomainRequest;
        class CreateEndpointRequest;
        class CreateEndpointConfigRequest;
        class CreateExperimentRequest;
        class CreateFlowDefinitionRequest;
        class CreateHumanTaskUiRequest;
        class CreateHyperParameterTuningJobRequest;
        class CreateImageRequest;
        class CreateImageVersionRequest;
        class CreateLabelingJobRequest;
        class CreateModelRequest;
        class CreateModelPackageRequest;
        class CreateMonitoringScheduleRequest;
        class CreateNotebookInstanceRequest;
        class CreateNotebookInstanceLifecycleConfigRequest;
        class CreatePresignedDomainUrlRequest;
        class CreatePresignedNotebookInstanceUrlRequest;
        class CreateProcessingJobRequest;
        class CreateTrainingJobRequest;
        class CreateTransformJobRequest;
        class CreateTrialRequest;
        class CreateTrialComponentRequest;
        class CreateUserProfileRequest;
        class CreateWorkforceRequest;
        class CreateWorkteamRequest;
        class DeleteAlgorithmRequest;
        class DeleteAppRequest;
        class DeleteAppImageConfigRequest;
        class DeleteCodeRepositoryRequest;
        class DeleteDomainRequest;
        class DeleteEndpointRequest;
        class DeleteEndpointConfigRequest;
        class DeleteExperimentRequest;
        class DeleteFlowDefinitionRequest;
        class DeleteHumanTaskUiRequest;
        class DeleteImageRequest;
        class DeleteImageVersionRequest;
        class DeleteModelRequest;
        class DeleteModelPackageRequest;
        class DeleteMonitoringScheduleRequest;
        class DeleteNotebookInstanceRequest;
        class DeleteNotebookInstanceLifecycleConfigRequest;
        class DeleteTagsRequest;
        class DeleteTrialRequest;
        class DeleteTrialComponentRequest;
        class DeleteUserProfileRequest;
        class DeleteWorkforceRequest;
        class DeleteWorkteamRequest;
        class DescribeAlgorithmRequest;
        class DescribeAppRequest;
        class DescribeAppImageConfigRequest;
        class DescribeAutoMLJobRequest;
        class DescribeCodeRepositoryRequest;
        class DescribeCompilationJobRequest;
        class DescribeDomainRequest;
        class DescribeEndpointRequest;
        class DescribeEndpointConfigRequest;
        class DescribeExperimentRequest;
        class DescribeFlowDefinitionRequest;
        class DescribeHumanTaskUiRequest;
        class DescribeHyperParameterTuningJobRequest;
        class DescribeImageRequest;
        class DescribeImageVersionRequest;
        class DescribeLabelingJobRequest;
        class DescribeModelRequest;
        class DescribeModelPackageRequest;
        class DescribeMonitoringScheduleRequest;
        class DescribeNotebookInstanceRequest;
        class DescribeNotebookInstanceLifecycleConfigRequest;
        class DescribeProcessingJobRequest;
        class DescribeSubscribedWorkteamRequest;
        class DescribeTrainingJobRequest;
        class DescribeTransformJobRequest;
        class DescribeTrialRequest;
        class DescribeTrialComponentRequest;
        class DescribeUserProfileRequest;
        class DescribeWorkforceRequest;
        class DescribeWorkteamRequest;
        class DisassociateTrialComponentRequest;
        class GetSearchSuggestionsRequest;
        class ListAlgorithmsRequest;
        class ListAppImageConfigsRequest;
        class ListAppsRequest;
        class ListAutoMLJobsRequest;
        class ListCandidatesForAutoMLJobRequest;
        class ListCodeRepositoriesRequest;
        class ListCompilationJobsRequest;
        class ListDomainsRequest;
        class ListEndpointConfigsRequest;
        class ListEndpointsRequest;
        class ListExperimentsRequest;
        class ListFlowDefinitionsRequest;
        class ListHumanTaskUisRequest;
        class ListHyperParameterTuningJobsRequest;
        class ListImageVersionsRequest;
        class ListImagesRequest;
        class ListLabelingJobsRequest;
        class ListLabelingJobsForWorkteamRequest;
        class ListModelPackagesRequest;
        class ListModelsRequest;
        class ListMonitoringExecutionsRequest;
        class ListMonitoringSchedulesRequest;
        class ListNotebookInstanceLifecycleConfigsRequest;
        class ListNotebookInstancesRequest;
        class ListProcessingJobsRequest;
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
        class RenderUiTemplateRequest;
        class SearchRequest;
        class StartMonitoringScheduleRequest;
        class StartNotebookInstanceRequest;
        class StopAutoMLJobRequest;
        class StopCompilationJobRequest;
        class StopHyperParameterTuningJobRequest;
        class StopLabelingJobRequest;
        class StopMonitoringScheduleRequest;
        class StopNotebookInstanceRequest;
        class StopProcessingJobRequest;
        class StopTrainingJobRequest;
        class StopTransformJobRequest;
        class UpdateAppImageConfigRequest;
        class UpdateCodeRepositoryRequest;
        class UpdateDomainRequest;
        class UpdateEndpointRequest;
        class UpdateEndpointWeightsAndCapacitiesRequest;
        class UpdateExperimentRequest;
        class UpdateImageRequest;
        class UpdateMonitoringScheduleRequest;
        class UpdateNotebookInstanceRequest;
        class UpdateNotebookInstanceLifecycleConfigRequest;
        class UpdateTrialRequest;
        class UpdateTrialComponentRequest;
        class UpdateUserProfileRequest;
        class UpdateWorkforceRequest;
        class UpdateWorkteamRequest;

        typedef Aws::Utils::Outcome<AddTagsResult, SageMakerError> AddTagsOutcome;
        typedef Aws::Utils::Outcome<AssociateTrialComponentResult, SageMakerError> AssociateTrialComponentOutcome;
        typedef Aws::Utils::Outcome<CreateAlgorithmResult, SageMakerError> CreateAlgorithmOutcome;
        typedef Aws::Utils::Outcome<CreateAppResult, SageMakerError> CreateAppOutcome;
        typedef Aws::Utils::Outcome<CreateAppImageConfigResult, SageMakerError> CreateAppImageConfigOutcome;
        typedef Aws::Utils::Outcome<CreateAutoMLJobResult, SageMakerError> CreateAutoMLJobOutcome;
        typedef Aws::Utils::Outcome<CreateCodeRepositoryResult, SageMakerError> CreateCodeRepositoryOutcome;
        typedef Aws::Utils::Outcome<CreateCompilationJobResult, SageMakerError> CreateCompilationJobOutcome;
        typedef Aws::Utils::Outcome<CreateDomainResult, SageMakerError> CreateDomainOutcome;
        typedef Aws::Utils::Outcome<CreateEndpointResult, SageMakerError> CreateEndpointOutcome;
        typedef Aws::Utils::Outcome<CreateEndpointConfigResult, SageMakerError> CreateEndpointConfigOutcome;
        typedef Aws::Utils::Outcome<CreateExperimentResult, SageMakerError> CreateExperimentOutcome;
        typedef Aws::Utils::Outcome<CreateFlowDefinitionResult, SageMakerError> CreateFlowDefinitionOutcome;
        typedef Aws::Utils::Outcome<CreateHumanTaskUiResult, SageMakerError> CreateHumanTaskUiOutcome;
        typedef Aws::Utils::Outcome<CreateHyperParameterTuningJobResult, SageMakerError> CreateHyperParameterTuningJobOutcome;
        typedef Aws::Utils::Outcome<CreateImageResult, SageMakerError> CreateImageOutcome;
        typedef Aws::Utils::Outcome<CreateImageVersionResult, SageMakerError> CreateImageVersionOutcome;
        typedef Aws::Utils::Outcome<CreateLabelingJobResult, SageMakerError> CreateLabelingJobOutcome;
        typedef Aws::Utils::Outcome<CreateModelResult, SageMakerError> CreateModelOutcome;
        typedef Aws::Utils::Outcome<CreateModelPackageResult, SageMakerError> CreateModelPackageOutcome;
        typedef Aws::Utils::Outcome<CreateMonitoringScheduleResult, SageMakerError> CreateMonitoringScheduleOutcome;
        typedef Aws::Utils::Outcome<CreateNotebookInstanceResult, SageMakerError> CreateNotebookInstanceOutcome;
        typedef Aws::Utils::Outcome<CreateNotebookInstanceLifecycleConfigResult, SageMakerError> CreateNotebookInstanceLifecycleConfigOutcome;
        typedef Aws::Utils::Outcome<CreatePresignedDomainUrlResult, SageMakerError> CreatePresignedDomainUrlOutcome;
        typedef Aws::Utils::Outcome<CreatePresignedNotebookInstanceUrlResult, SageMakerError> CreatePresignedNotebookInstanceUrlOutcome;
        typedef Aws::Utils::Outcome<CreateProcessingJobResult, SageMakerError> CreateProcessingJobOutcome;
        typedef Aws::Utils::Outcome<CreateTrainingJobResult, SageMakerError> CreateTrainingJobOutcome;
        typedef Aws::Utils::Outcome<CreateTransformJobResult, SageMakerError> CreateTransformJobOutcome;
        typedef Aws::Utils::Outcome<CreateTrialResult, SageMakerError> CreateTrialOutcome;
        typedef Aws::Utils::Outcome<CreateTrialComponentResult, SageMakerError> CreateTrialComponentOutcome;
        typedef Aws::Utils::Outcome<CreateUserProfileResult, SageMakerError> CreateUserProfileOutcome;
        typedef Aws::Utils::Outcome<CreateWorkforceResult, SageMakerError> CreateWorkforceOutcome;
        typedef Aws::Utils::Outcome<CreateWorkteamResult, SageMakerError> CreateWorkteamOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> DeleteAlgorithmOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> DeleteAppOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> DeleteAppImageConfigOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> DeleteCodeRepositoryOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> DeleteDomainOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> DeleteEndpointOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> DeleteEndpointConfigOutcome;
        typedef Aws::Utils::Outcome<DeleteExperimentResult, SageMakerError> DeleteExperimentOutcome;
        typedef Aws::Utils::Outcome<DeleteFlowDefinitionResult, SageMakerError> DeleteFlowDefinitionOutcome;
        typedef Aws::Utils::Outcome<DeleteHumanTaskUiResult, SageMakerError> DeleteHumanTaskUiOutcome;
        typedef Aws::Utils::Outcome<DeleteImageResult, SageMakerError> DeleteImageOutcome;
        typedef Aws::Utils::Outcome<DeleteImageVersionResult, SageMakerError> DeleteImageVersionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> DeleteModelOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> DeleteModelPackageOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> DeleteMonitoringScheduleOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> DeleteNotebookInstanceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> DeleteNotebookInstanceLifecycleConfigOutcome;
        typedef Aws::Utils::Outcome<DeleteTagsResult, SageMakerError> DeleteTagsOutcome;
        typedef Aws::Utils::Outcome<DeleteTrialResult, SageMakerError> DeleteTrialOutcome;
        typedef Aws::Utils::Outcome<DeleteTrialComponentResult, SageMakerError> DeleteTrialComponentOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> DeleteUserProfileOutcome;
        typedef Aws::Utils::Outcome<DeleteWorkforceResult, SageMakerError> DeleteWorkforceOutcome;
        typedef Aws::Utils::Outcome<DeleteWorkteamResult, SageMakerError> DeleteWorkteamOutcome;
        typedef Aws::Utils::Outcome<DescribeAlgorithmResult, SageMakerError> DescribeAlgorithmOutcome;
        typedef Aws::Utils::Outcome<DescribeAppResult, SageMakerError> DescribeAppOutcome;
        typedef Aws::Utils::Outcome<DescribeAppImageConfigResult, SageMakerError> DescribeAppImageConfigOutcome;
        typedef Aws::Utils::Outcome<DescribeAutoMLJobResult, SageMakerError> DescribeAutoMLJobOutcome;
        typedef Aws::Utils::Outcome<DescribeCodeRepositoryResult, SageMakerError> DescribeCodeRepositoryOutcome;
        typedef Aws::Utils::Outcome<DescribeCompilationJobResult, SageMakerError> DescribeCompilationJobOutcome;
        typedef Aws::Utils::Outcome<DescribeDomainResult, SageMakerError> DescribeDomainOutcome;
        typedef Aws::Utils::Outcome<DescribeEndpointResult, SageMakerError> DescribeEndpointOutcome;
        typedef Aws::Utils::Outcome<DescribeEndpointConfigResult, SageMakerError> DescribeEndpointConfigOutcome;
        typedef Aws::Utils::Outcome<DescribeExperimentResult, SageMakerError> DescribeExperimentOutcome;
        typedef Aws::Utils::Outcome<DescribeFlowDefinitionResult, SageMakerError> DescribeFlowDefinitionOutcome;
        typedef Aws::Utils::Outcome<DescribeHumanTaskUiResult, SageMakerError> DescribeHumanTaskUiOutcome;
        typedef Aws::Utils::Outcome<DescribeHyperParameterTuningJobResult, SageMakerError> DescribeHyperParameterTuningJobOutcome;
        typedef Aws::Utils::Outcome<DescribeImageResult, SageMakerError> DescribeImageOutcome;
        typedef Aws::Utils::Outcome<DescribeImageVersionResult, SageMakerError> DescribeImageVersionOutcome;
        typedef Aws::Utils::Outcome<DescribeLabelingJobResult, SageMakerError> DescribeLabelingJobOutcome;
        typedef Aws::Utils::Outcome<DescribeModelResult, SageMakerError> DescribeModelOutcome;
        typedef Aws::Utils::Outcome<DescribeModelPackageResult, SageMakerError> DescribeModelPackageOutcome;
        typedef Aws::Utils::Outcome<DescribeMonitoringScheduleResult, SageMakerError> DescribeMonitoringScheduleOutcome;
        typedef Aws::Utils::Outcome<DescribeNotebookInstanceResult, SageMakerError> DescribeNotebookInstanceOutcome;
        typedef Aws::Utils::Outcome<DescribeNotebookInstanceLifecycleConfigResult, SageMakerError> DescribeNotebookInstanceLifecycleConfigOutcome;
        typedef Aws::Utils::Outcome<DescribeProcessingJobResult, SageMakerError> DescribeProcessingJobOutcome;
        typedef Aws::Utils::Outcome<DescribeSubscribedWorkteamResult, SageMakerError> DescribeSubscribedWorkteamOutcome;
        typedef Aws::Utils::Outcome<DescribeTrainingJobResult, SageMakerError> DescribeTrainingJobOutcome;
        typedef Aws::Utils::Outcome<DescribeTransformJobResult, SageMakerError> DescribeTransformJobOutcome;
        typedef Aws::Utils::Outcome<DescribeTrialResult, SageMakerError> DescribeTrialOutcome;
        typedef Aws::Utils::Outcome<DescribeTrialComponentResult, SageMakerError> DescribeTrialComponentOutcome;
        typedef Aws::Utils::Outcome<DescribeUserProfileResult, SageMakerError> DescribeUserProfileOutcome;
        typedef Aws::Utils::Outcome<DescribeWorkforceResult, SageMakerError> DescribeWorkforceOutcome;
        typedef Aws::Utils::Outcome<DescribeWorkteamResult, SageMakerError> DescribeWorkteamOutcome;
        typedef Aws::Utils::Outcome<DisassociateTrialComponentResult, SageMakerError> DisassociateTrialComponentOutcome;
        typedef Aws::Utils::Outcome<GetSearchSuggestionsResult, SageMakerError> GetSearchSuggestionsOutcome;
        typedef Aws::Utils::Outcome<ListAlgorithmsResult, SageMakerError> ListAlgorithmsOutcome;
        typedef Aws::Utils::Outcome<ListAppImageConfigsResult, SageMakerError> ListAppImageConfigsOutcome;
        typedef Aws::Utils::Outcome<ListAppsResult, SageMakerError> ListAppsOutcome;
        typedef Aws::Utils::Outcome<ListAutoMLJobsResult, SageMakerError> ListAutoMLJobsOutcome;
        typedef Aws::Utils::Outcome<ListCandidatesForAutoMLJobResult, SageMakerError> ListCandidatesForAutoMLJobOutcome;
        typedef Aws::Utils::Outcome<ListCodeRepositoriesResult, SageMakerError> ListCodeRepositoriesOutcome;
        typedef Aws::Utils::Outcome<ListCompilationJobsResult, SageMakerError> ListCompilationJobsOutcome;
        typedef Aws::Utils::Outcome<ListDomainsResult, SageMakerError> ListDomainsOutcome;
        typedef Aws::Utils::Outcome<ListEndpointConfigsResult, SageMakerError> ListEndpointConfigsOutcome;
        typedef Aws::Utils::Outcome<ListEndpointsResult, SageMakerError> ListEndpointsOutcome;
        typedef Aws::Utils::Outcome<ListExperimentsResult, SageMakerError> ListExperimentsOutcome;
        typedef Aws::Utils::Outcome<ListFlowDefinitionsResult, SageMakerError> ListFlowDefinitionsOutcome;
        typedef Aws::Utils::Outcome<ListHumanTaskUisResult, SageMakerError> ListHumanTaskUisOutcome;
        typedef Aws::Utils::Outcome<ListHyperParameterTuningJobsResult, SageMakerError> ListHyperParameterTuningJobsOutcome;
        typedef Aws::Utils::Outcome<ListImageVersionsResult, SageMakerError> ListImageVersionsOutcome;
        typedef Aws::Utils::Outcome<ListImagesResult, SageMakerError> ListImagesOutcome;
        typedef Aws::Utils::Outcome<ListLabelingJobsResult, SageMakerError> ListLabelingJobsOutcome;
        typedef Aws::Utils::Outcome<ListLabelingJobsForWorkteamResult, SageMakerError> ListLabelingJobsForWorkteamOutcome;
        typedef Aws::Utils::Outcome<ListModelPackagesResult, SageMakerError> ListModelPackagesOutcome;
        typedef Aws::Utils::Outcome<ListModelsResult, SageMakerError> ListModelsOutcome;
        typedef Aws::Utils::Outcome<ListMonitoringExecutionsResult, SageMakerError> ListMonitoringExecutionsOutcome;
        typedef Aws::Utils::Outcome<ListMonitoringSchedulesResult, SageMakerError> ListMonitoringSchedulesOutcome;
        typedef Aws::Utils::Outcome<ListNotebookInstanceLifecycleConfigsResult, SageMakerError> ListNotebookInstanceLifecycleConfigsOutcome;
        typedef Aws::Utils::Outcome<ListNotebookInstancesResult, SageMakerError> ListNotebookInstancesOutcome;
        typedef Aws::Utils::Outcome<ListProcessingJobsResult, SageMakerError> ListProcessingJobsOutcome;
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
        typedef Aws::Utils::Outcome<RenderUiTemplateResult, SageMakerError> RenderUiTemplateOutcome;
        typedef Aws::Utils::Outcome<SearchResult, SageMakerError> SearchOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> StartMonitoringScheduleOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> StartNotebookInstanceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> StopAutoMLJobOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> StopCompilationJobOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> StopHyperParameterTuningJobOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> StopLabelingJobOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> StopMonitoringScheduleOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> StopNotebookInstanceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> StopProcessingJobOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> StopTrainingJobOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerError> StopTransformJobOutcome;
        typedef Aws::Utils::Outcome<UpdateAppImageConfigResult, SageMakerError> UpdateAppImageConfigOutcome;
        typedef Aws::Utils::Outcome<UpdateCodeRepositoryResult, SageMakerError> UpdateCodeRepositoryOutcome;
        typedef Aws::Utils::Outcome<UpdateDomainResult, SageMakerError> UpdateDomainOutcome;
        typedef Aws::Utils::Outcome<UpdateEndpointResult, SageMakerError> UpdateEndpointOutcome;
        typedef Aws::Utils::Outcome<UpdateEndpointWeightsAndCapacitiesResult, SageMakerError> UpdateEndpointWeightsAndCapacitiesOutcome;
        typedef Aws::Utils::Outcome<UpdateExperimentResult, SageMakerError> UpdateExperimentOutcome;
        typedef Aws::Utils::Outcome<UpdateImageResult, SageMakerError> UpdateImageOutcome;
        typedef Aws::Utils::Outcome<UpdateMonitoringScheduleResult, SageMakerError> UpdateMonitoringScheduleOutcome;
        typedef Aws::Utils::Outcome<UpdateNotebookInstanceResult, SageMakerError> UpdateNotebookInstanceOutcome;
        typedef Aws::Utils::Outcome<UpdateNotebookInstanceLifecycleConfigResult, SageMakerError> UpdateNotebookInstanceLifecycleConfigOutcome;
        typedef Aws::Utils::Outcome<UpdateTrialResult, SageMakerError> UpdateTrialOutcome;
        typedef Aws::Utils::Outcome<UpdateTrialComponentResult, SageMakerError> UpdateTrialComponentOutcome;
        typedef Aws::Utils::Outcome<UpdateUserProfileResult, SageMakerError> UpdateUserProfileOutcome;
        typedef Aws::Utils::Outcome<UpdateWorkforceResult, SageMakerError> UpdateWorkforceOutcome;
        typedef Aws::Utils::Outcome<UpdateWorkteamResult, SageMakerError> UpdateWorkteamOutcome;

        typedef std::future<AddTagsOutcome> AddTagsOutcomeCallable;
        typedef std::future<AssociateTrialComponentOutcome> AssociateTrialComponentOutcomeCallable;
        typedef std::future<CreateAlgorithmOutcome> CreateAlgorithmOutcomeCallable;
        typedef std::future<CreateAppOutcome> CreateAppOutcomeCallable;
        typedef std::future<CreateAppImageConfigOutcome> CreateAppImageConfigOutcomeCallable;
        typedef std::future<CreateAutoMLJobOutcome> CreateAutoMLJobOutcomeCallable;
        typedef std::future<CreateCodeRepositoryOutcome> CreateCodeRepositoryOutcomeCallable;
        typedef std::future<CreateCompilationJobOutcome> CreateCompilationJobOutcomeCallable;
        typedef std::future<CreateDomainOutcome> CreateDomainOutcomeCallable;
        typedef std::future<CreateEndpointOutcome> CreateEndpointOutcomeCallable;
        typedef std::future<CreateEndpointConfigOutcome> CreateEndpointConfigOutcomeCallable;
        typedef std::future<CreateExperimentOutcome> CreateExperimentOutcomeCallable;
        typedef std::future<CreateFlowDefinitionOutcome> CreateFlowDefinitionOutcomeCallable;
        typedef std::future<CreateHumanTaskUiOutcome> CreateHumanTaskUiOutcomeCallable;
        typedef std::future<CreateHyperParameterTuningJobOutcome> CreateHyperParameterTuningJobOutcomeCallable;
        typedef std::future<CreateImageOutcome> CreateImageOutcomeCallable;
        typedef std::future<CreateImageVersionOutcome> CreateImageVersionOutcomeCallable;
        typedef std::future<CreateLabelingJobOutcome> CreateLabelingJobOutcomeCallable;
        typedef std::future<CreateModelOutcome> CreateModelOutcomeCallable;
        typedef std::future<CreateModelPackageOutcome> CreateModelPackageOutcomeCallable;
        typedef std::future<CreateMonitoringScheduleOutcome> CreateMonitoringScheduleOutcomeCallable;
        typedef std::future<CreateNotebookInstanceOutcome> CreateNotebookInstanceOutcomeCallable;
        typedef std::future<CreateNotebookInstanceLifecycleConfigOutcome> CreateNotebookInstanceLifecycleConfigOutcomeCallable;
        typedef std::future<CreatePresignedDomainUrlOutcome> CreatePresignedDomainUrlOutcomeCallable;
        typedef std::future<CreatePresignedNotebookInstanceUrlOutcome> CreatePresignedNotebookInstanceUrlOutcomeCallable;
        typedef std::future<CreateProcessingJobOutcome> CreateProcessingJobOutcomeCallable;
        typedef std::future<CreateTrainingJobOutcome> CreateTrainingJobOutcomeCallable;
        typedef std::future<CreateTransformJobOutcome> CreateTransformJobOutcomeCallable;
        typedef std::future<CreateTrialOutcome> CreateTrialOutcomeCallable;
        typedef std::future<CreateTrialComponentOutcome> CreateTrialComponentOutcomeCallable;
        typedef std::future<CreateUserProfileOutcome> CreateUserProfileOutcomeCallable;
        typedef std::future<CreateWorkforceOutcome> CreateWorkforceOutcomeCallable;
        typedef std::future<CreateWorkteamOutcome> CreateWorkteamOutcomeCallable;
        typedef std::future<DeleteAlgorithmOutcome> DeleteAlgorithmOutcomeCallable;
        typedef std::future<DeleteAppOutcome> DeleteAppOutcomeCallable;
        typedef std::future<DeleteAppImageConfigOutcome> DeleteAppImageConfigOutcomeCallable;
        typedef std::future<DeleteCodeRepositoryOutcome> DeleteCodeRepositoryOutcomeCallable;
        typedef std::future<DeleteDomainOutcome> DeleteDomainOutcomeCallable;
        typedef std::future<DeleteEndpointOutcome> DeleteEndpointOutcomeCallable;
        typedef std::future<DeleteEndpointConfigOutcome> DeleteEndpointConfigOutcomeCallable;
        typedef std::future<DeleteExperimentOutcome> DeleteExperimentOutcomeCallable;
        typedef std::future<DeleteFlowDefinitionOutcome> DeleteFlowDefinitionOutcomeCallable;
        typedef std::future<DeleteHumanTaskUiOutcome> DeleteHumanTaskUiOutcomeCallable;
        typedef std::future<DeleteImageOutcome> DeleteImageOutcomeCallable;
        typedef std::future<DeleteImageVersionOutcome> DeleteImageVersionOutcomeCallable;
        typedef std::future<DeleteModelOutcome> DeleteModelOutcomeCallable;
        typedef std::future<DeleteModelPackageOutcome> DeleteModelPackageOutcomeCallable;
        typedef std::future<DeleteMonitoringScheduleOutcome> DeleteMonitoringScheduleOutcomeCallable;
        typedef std::future<DeleteNotebookInstanceOutcome> DeleteNotebookInstanceOutcomeCallable;
        typedef std::future<DeleteNotebookInstanceLifecycleConfigOutcome> DeleteNotebookInstanceLifecycleConfigOutcomeCallable;
        typedef std::future<DeleteTagsOutcome> DeleteTagsOutcomeCallable;
        typedef std::future<DeleteTrialOutcome> DeleteTrialOutcomeCallable;
        typedef std::future<DeleteTrialComponentOutcome> DeleteTrialComponentOutcomeCallable;
        typedef std::future<DeleteUserProfileOutcome> DeleteUserProfileOutcomeCallable;
        typedef std::future<DeleteWorkforceOutcome> DeleteWorkforceOutcomeCallable;
        typedef std::future<DeleteWorkteamOutcome> DeleteWorkteamOutcomeCallable;
        typedef std::future<DescribeAlgorithmOutcome> DescribeAlgorithmOutcomeCallable;
        typedef std::future<DescribeAppOutcome> DescribeAppOutcomeCallable;
        typedef std::future<DescribeAppImageConfigOutcome> DescribeAppImageConfigOutcomeCallable;
        typedef std::future<DescribeAutoMLJobOutcome> DescribeAutoMLJobOutcomeCallable;
        typedef std::future<DescribeCodeRepositoryOutcome> DescribeCodeRepositoryOutcomeCallable;
        typedef std::future<DescribeCompilationJobOutcome> DescribeCompilationJobOutcomeCallable;
        typedef std::future<DescribeDomainOutcome> DescribeDomainOutcomeCallable;
        typedef std::future<DescribeEndpointOutcome> DescribeEndpointOutcomeCallable;
        typedef std::future<DescribeEndpointConfigOutcome> DescribeEndpointConfigOutcomeCallable;
        typedef std::future<DescribeExperimentOutcome> DescribeExperimentOutcomeCallable;
        typedef std::future<DescribeFlowDefinitionOutcome> DescribeFlowDefinitionOutcomeCallable;
        typedef std::future<DescribeHumanTaskUiOutcome> DescribeHumanTaskUiOutcomeCallable;
        typedef std::future<DescribeHyperParameterTuningJobOutcome> DescribeHyperParameterTuningJobOutcomeCallable;
        typedef std::future<DescribeImageOutcome> DescribeImageOutcomeCallable;
        typedef std::future<DescribeImageVersionOutcome> DescribeImageVersionOutcomeCallable;
        typedef std::future<DescribeLabelingJobOutcome> DescribeLabelingJobOutcomeCallable;
        typedef std::future<DescribeModelOutcome> DescribeModelOutcomeCallable;
        typedef std::future<DescribeModelPackageOutcome> DescribeModelPackageOutcomeCallable;
        typedef std::future<DescribeMonitoringScheduleOutcome> DescribeMonitoringScheduleOutcomeCallable;
        typedef std::future<DescribeNotebookInstanceOutcome> DescribeNotebookInstanceOutcomeCallable;
        typedef std::future<DescribeNotebookInstanceLifecycleConfigOutcome> DescribeNotebookInstanceLifecycleConfigOutcomeCallable;
        typedef std::future<DescribeProcessingJobOutcome> DescribeProcessingJobOutcomeCallable;
        typedef std::future<DescribeSubscribedWorkteamOutcome> DescribeSubscribedWorkteamOutcomeCallable;
        typedef std::future<DescribeTrainingJobOutcome> DescribeTrainingJobOutcomeCallable;
        typedef std::future<DescribeTransformJobOutcome> DescribeTransformJobOutcomeCallable;
        typedef std::future<DescribeTrialOutcome> DescribeTrialOutcomeCallable;
        typedef std::future<DescribeTrialComponentOutcome> DescribeTrialComponentOutcomeCallable;
        typedef std::future<DescribeUserProfileOutcome> DescribeUserProfileOutcomeCallable;
        typedef std::future<DescribeWorkforceOutcome> DescribeWorkforceOutcomeCallable;
        typedef std::future<DescribeWorkteamOutcome> DescribeWorkteamOutcomeCallable;
        typedef std::future<DisassociateTrialComponentOutcome> DisassociateTrialComponentOutcomeCallable;
        typedef std::future<GetSearchSuggestionsOutcome> GetSearchSuggestionsOutcomeCallable;
        typedef std::future<ListAlgorithmsOutcome> ListAlgorithmsOutcomeCallable;
        typedef std::future<ListAppImageConfigsOutcome> ListAppImageConfigsOutcomeCallable;
        typedef std::future<ListAppsOutcome> ListAppsOutcomeCallable;
        typedef std::future<ListAutoMLJobsOutcome> ListAutoMLJobsOutcomeCallable;
        typedef std::future<ListCandidatesForAutoMLJobOutcome> ListCandidatesForAutoMLJobOutcomeCallable;
        typedef std::future<ListCodeRepositoriesOutcome> ListCodeRepositoriesOutcomeCallable;
        typedef std::future<ListCompilationJobsOutcome> ListCompilationJobsOutcomeCallable;
        typedef std::future<ListDomainsOutcome> ListDomainsOutcomeCallable;
        typedef std::future<ListEndpointConfigsOutcome> ListEndpointConfigsOutcomeCallable;
        typedef std::future<ListEndpointsOutcome> ListEndpointsOutcomeCallable;
        typedef std::future<ListExperimentsOutcome> ListExperimentsOutcomeCallable;
        typedef std::future<ListFlowDefinitionsOutcome> ListFlowDefinitionsOutcomeCallable;
        typedef std::future<ListHumanTaskUisOutcome> ListHumanTaskUisOutcomeCallable;
        typedef std::future<ListHyperParameterTuningJobsOutcome> ListHyperParameterTuningJobsOutcomeCallable;
        typedef std::future<ListImageVersionsOutcome> ListImageVersionsOutcomeCallable;
        typedef std::future<ListImagesOutcome> ListImagesOutcomeCallable;
        typedef std::future<ListLabelingJobsOutcome> ListLabelingJobsOutcomeCallable;
        typedef std::future<ListLabelingJobsForWorkteamOutcome> ListLabelingJobsForWorkteamOutcomeCallable;
        typedef std::future<ListModelPackagesOutcome> ListModelPackagesOutcomeCallable;
        typedef std::future<ListModelsOutcome> ListModelsOutcomeCallable;
        typedef std::future<ListMonitoringExecutionsOutcome> ListMonitoringExecutionsOutcomeCallable;
        typedef std::future<ListMonitoringSchedulesOutcome> ListMonitoringSchedulesOutcomeCallable;
        typedef std::future<ListNotebookInstanceLifecycleConfigsOutcome> ListNotebookInstanceLifecycleConfigsOutcomeCallable;
        typedef std::future<ListNotebookInstancesOutcome> ListNotebookInstancesOutcomeCallable;
        typedef std::future<ListProcessingJobsOutcome> ListProcessingJobsOutcomeCallable;
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
        typedef std::future<RenderUiTemplateOutcome> RenderUiTemplateOutcomeCallable;
        typedef std::future<SearchOutcome> SearchOutcomeCallable;
        typedef std::future<StartMonitoringScheduleOutcome> StartMonitoringScheduleOutcomeCallable;
        typedef std::future<StartNotebookInstanceOutcome> StartNotebookInstanceOutcomeCallable;
        typedef std::future<StopAutoMLJobOutcome> StopAutoMLJobOutcomeCallable;
        typedef std::future<StopCompilationJobOutcome> StopCompilationJobOutcomeCallable;
        typedef std::future<StopHyperParameterTuningJobOutcome> StopHyperParameterTuningJobOutcomeCallable;
        typedef std::future<StopLabelingJobOutcome> StopLabelingJobOutcomeCallable;
        typedef std::future<StopMonitoringScheduleOutcome> StopMonitoringScheduleOutcomeCallable;
        typedef std::future<StopNotebookInstanceOutcome> StopNotebookInstanceOutcomeCallable;
        typedef std::future<StopProcessingJobOutcome> StopProcessingJobOutcomeCallable;
        typedef std::future<StopTrainingJobOutcome> StopTrainingJobOutcomeCallable;
        typedef std::future<StopTransformJobOutcome> StopTransformJobOutcomeCallable;
        typedef std::future<UpdateAppImageConfigOutcome> UpdateAppImageConfigOutcomeCallable;
        typedef std::future<UpdateCodeRepositoryOutcome> UpdateCodeRepositoryOutcomeCallable;
        typedef std::future<UpdateDomainOutcome> UpdateDomainOutcomeCallable;
        typedef std::future<UpdateEndpointOutcome> UpdateEndpointOutcomeCallable;
        typedef std::future<UpdateEndpointWeightsAndCapacitiesOutcome> UpdateEndpointWeightsAndCapacitiesOutcomeCallable;
        typedef std::future<UpdateExperimentOutcome> UpdateExperimentOutcomeCallable;
        typedef std::future<UpdateImageOutcome> UpdateImageOutcomeCallable;
        typedef std::future<UpdateMonitoringScheduleOutcome> UpdateMonitoringScheduleOutcomeCallable;
        typedef std::future<UpdateNotebookInstanceOutcome> UpdateNotebookInstanceOutcomeCallable;
        typedef std::future<UpdateNotebookInstanceLifecycleConfigOutcome> UpdateNotebookInstanceLifecycleConfigOutcomeCallable;
        typedef std::future<UpdateTrialOutcome> UpdateTrialOutcomeCallable;
        typedef std::future<UpdateTrialComponentOutcome> UpdateTrialComponentOutcomeCallable;
        typedef std::future<UpdateUserProfileOutcome> UpdateUserProfileOutcomeCallable;
        typedef std::future<UpdateWorkforceOutcome> UpdateWorkforceOutcomeCallable;
        typedef std::future<UpdateWorkteamOutcome> UpdateWorkteamOutcomeCallable;
} // namespace Model

  class SageMakerClient;

    typedef std::function<void(const SageMakerClient*, const Model::AddTagsRequest&, const Model::AddTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddTagsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::AssociateTrialComponentRequest&, const Model::AssociateTrialComponentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateTrialComponentResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateAlgorithmRequest&, const Model::CreateAlgorithmOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAlgorithmResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateAppRequest&, const Model::CreateAppOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAppResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateAppImageConfigRequest&, const Model::CreateAppImageConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAppImageConfigResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateAutoMLJobRequest&, const Model::CreateAutoMLJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAutoMLJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateCodeRepositoryRequest&, const Model::CreateCodeRepositoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCodeRepositoryResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateCompilationJobRequest&, const Model::CreateCompilationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCompilationJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateDomainRequest&, const Model::CreateDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDomainResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateEndpointRequest&, const Model::CreateEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEndpointResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateEndpointConfigRequest&, const Model::CreateEndpointConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEndpointConfigResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateExperimentRequest&, const Model::CreateExperimentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateExperimentResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateFlowDefinitionRequest&, const Model::CreateFlowDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFlowDefinitionResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateHumanTaskUiRequest&, const Model::CreateHumanTaskUiOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateHumanTaskUiResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateHyperParameterTuningJobRequest&, const Model::CreateHyperParameterTuningJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateHyperParameterTuningJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateImageRequest&, const Model::CreateImageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateImageResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateImageVersionRequest&, const Model::CreateImageVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateImageVersionResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateLabelingJobRequest&, const Model::CreateLabelingJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLabelingJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateModelRequest&, const Model::CreateModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateModelResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateModelPackageRequest&, const Model::CreateModelPackageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateModelPackageResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateMonitoringScheduleRequest&, const Model::CreateMonitoringScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMonitoringScheduleResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateNotebookInstanceRequest&, const Model::CreateNotebookInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateNotebookInstanceResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateNotebookInstanceLifecycleConfigRequest&, const Model::CreateNotebookInstanceLifecycleConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateNotebookInstanceLifecycleConfigResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreatePresignedDomainUrlRequest&, const Model::CreatePresignedDomainUrlOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePresignedDomainUrlResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreatePresignedNotebookInstanceUrlRequest&, const Model::CreatePresignedNotebookInstanceUrlOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePresignedNotebookInstanceUrlResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateProcessingJobRequest&, const Model::CreateProcessingJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateProcessingJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateTrainingJobRequest&, const Model::CreateTrainingJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTrainingJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateTransformJobRequest&, const Model::CreateTransformJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTransformJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateTrialRequest&, const Model::CreateTrialOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTrialResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateTrialComponentRequest&, const Model::CreateTrialComponentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTrialComponentResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateUserProfileRequest&, const Model::CreateUserProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateUserProfileResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateWorkforceRequest&, const Model::CreateWorkforceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateWorkforceResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateWorkteamRequest&, const Model::CreateWorkteamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateWorkteamResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteAlgorithmRequest&, const Model::DeleteAlgorithmOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAlgorithmResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteAppRequest&, const Model::DeleteAppOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAppResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteAppImageConfigRequest&, const Model::DeleteAppImageConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAppImageConfigResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteCodeRepositoryRequest&, const Model::DeleteCodeRepositoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCodeRepositoryResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteDomainRequest&, const Model::DeleteDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDomainResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteEndpointRequest&, const Model::DeleteEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEndpointResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteEndpointConfigRequest&, const Model::DeleteEndpointConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEndpointConfigResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteExperimentRequest&, const Model::DeleteExperimentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteExperimentResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteFlowDefinitionRequest&, const Model::DeleteFlowDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFlowDefinitionResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteHumanTaskUiRequest&, const Model::DeleteHumanTaskUiOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteHumanTaskUiResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteImageRequest&, const Model::DeleteImageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteImageResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteImageVersionRequest&, const Model::DeleteImageVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteImageVersionResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteModelRequest&, const Model::DeleteModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteModelResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteModelPackageRequest&, const Model::DeleteModelPackageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteModelPackageResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteMonitoringScheduleRequest&, const Model::DeleteMonitoringScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMonitoringScheduleResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteNotebookInstanceRequest&, const Model::DeleteNotebookInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteNotebookInstanceResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteNotebookInstanceLifecycleConfigRequest&, const Model::DeleteNotebookInstanceLifecycleConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteNotebookInstanceLifecycleConfigResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteTagsRequest&, const Model::DeleteTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTagsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteTrialRequest&, const Model::DeleteTrialOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTrialResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteTrialComponentRequest&, const Model::DeleteTrialComponentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTrialComponentResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteUserProfileRequest&, const Model::DeleteUserProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUserProfileResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteWorkforceRequest&, const Model::DeleteWorkforceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteWorkforceResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteWorkteamRequest&, const Model::DeleteWorkteamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteWorkteamResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeAlgorithmRequest&, const Model::DescribeAlgorithmOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAlgorithmResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeAppRequest&, const Model::DescribeAppOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAppResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeAppImageConfigRequest&, const Model::DescribeAppImageConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAppImageConfigResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeAutoMLJobRequest&, const Model::DescribeAutoMLJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAutoMLJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeCodeRepositoryRequest&, const Model::DescribeCodeRepositoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCodeRepositoryResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeCompilationJobRequest&, const Model::DescribeCompilationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCompilationJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeDomainRequest&, const Model::DescribeDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDomainResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeEndpointRequest&, const Model::DescribeEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEndpointResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeEndpointConfigRequest&, const Model::DescribeEndpointConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEndpointConfigResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeExperimentRequest&, const Model::DescribeExperimentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeExperimentResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeFlowDefinitionRequest&, const Model::DescribeFlowDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFlowDefinitionResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeHumanTaskUiRequest&, const Model::DescribeHumanTaskUiOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeHumanTaskUiResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeHyperParameterTuningJobRequest&, const Model::DescribeHyperParameterTuningJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeHyperParameterTuningJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeImageRequest&, const Model::DescribeImageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeImageResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeImageVersionRequest&, const Model::DescribeImageVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeImageVersionResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeLabelingJobRequest&, const Model::DescribeLabelingJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLabelingJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeModelRequest&, const Model::DescribeModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeModelResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeModelPackageRequest&, const Model::DescribeModelPackageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeModelPackageResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeMonitoringScheduleRequest&, const Model::DescribeMonitoringScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMonitoringScheduleResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeNotebookInstanceRequest&, const Model::DescribeNotebookInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeNotebookInstanceResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeNotebookInstanceLifecycleConfigRequest&, const Model::DescribeNotebookInstanceLifecycleConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeNotebookInstanceLifecycleConfigResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeProcessingJobRequest&, const Model::DescribeProcessingJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeProcessingJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeSubscribedWorkteamRequest&, const Model::DescribeSubscribedWorkteamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSubscribedWorkteamResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeTrainingJobRequest&, const Model::DescribeTrainingJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTrainingJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeTransformJobRequest&, const Model::DescribeTransformJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTransformJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeTrialRequest&, const Model::DescribeTrialOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTrialResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeTrialComponentRequest&, const Model::DescribeTrialComponentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTrialComponentResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeUserProfileRequest&, const Model::DescribeUserProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeUserProfileResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeWorkforceRequest&, const Model::DescribeWorkforceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeWorkforceResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeWorkteamRequest&, const Model::DescribeWorkteamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeWorkteamResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DisassociateTrialComponentRequest&, const Model::DisassociateTrialComponentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateTrialComponentResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::GetSearchSuggestionsRequest&, const Model::GetSearchSuggestionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSearchSuggestionsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListAlgorithmsRequest&, const Model::ListAlgorithmsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAlgorithmsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListAppImageConfigsRequest&, const Model::ListAppImageConfigsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAppImageConfigsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListAppsRequest&, const Model::ListAppsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAppsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListAutoMLJobsRequest&, const Model::ListAutoMLJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAutoMLJobsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListCandidatesForAutoMLJobRequest&, const Model::ListCandidatesForAutoMLJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCandidatesForAutoMLJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListCodeRepositoriesRequest&, const Model::ListCodeRepositoriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCodeRepositoriesResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListCompilationJobsRequest&, const Model::ListCompilationJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCompilationJobsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListDomainsRequest&, const Model::ListDomainsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDomainsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListEndpointConfigsRequest&, const Model::ListEndpointConfigsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEndpointConfigsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListEndpointsRequest&, const Model::ListEndpointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEndpointsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListExperimentsRequest&, const Model::ListExperimentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListExperimentsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListFlowDefinitionsRequest&, const Model::ListFlowDefinitionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFlowDefinitionsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListHumanTaskUisRequest&, const Model::ListHumanTaskUisOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListHumanTaskUisResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListHyperParameterTuningJobsRequest&, const Model::ListHyperParameterTuningJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListHyperParameterTuningJobsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListImageVersionsRequest&, const Model::ListImageVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListImageVersionsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListImagesRequest&, const Model::ListImagesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListImagesResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListLabelingJobsRequest&, const Model::ListLabelingJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLabelingJobsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListLabelingJobsForWorkteamRequest&, const Model::ListLabelingJobsForWorkteamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLabelingJobsForWorkteamResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListModelPackagesRequest&, const Model::ListModelPackagesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListModelPackagesResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListModelsRequest&, const Model::ListModelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListModelsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListMonitoringExecutionsRequest&, const Model::ListMonitoringExecutionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMonitoringExecutionsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListMonitoringSchedulesRequest&, const Model::ListMonitoringSchedulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMonitoringSchedulesResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListNotebookInstanceLifecycleConfigsRequest&, const Model::ListNotebookInstanceLifecycleConfigsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListNotebookInstanceLifecycleConfigsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListNotebookInstancesRequest&, const Model::ListNotebookInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListNotebookInstancesResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListProcessingJobsRequest&, const Model::ListProcessingJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProcessingJobsResponseReceivedHandler;
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
    typedef std::function<void(const SageMakerClient*, const Model::RenderUiTemplateRequest&, const Model::RenderUiTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RenderUiTemplateResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::SearchRequest&, const Model::SearchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::StartMonitoringScheduleRequest&, const Model::StartMonitoringScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartMonitoringScheduleResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::StartNotebookInstanceRequest&, const Model::StartNotebookInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartNotebookInstanceResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::StopAutoMLJobRequest&, const Model::StopAutoMLJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopAutoMLJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::StopCompilationJobRequest&, const Model::StopCompilationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopCompilationJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::StopHyperParameterTuningJobRequest&, const Model::StopHyperParameterTuningJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopHyperParameterTuningJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::StopLabelingJobRequest&, const Model::StopLabelingJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopLabelingJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::StopMonitoringScheduleRequest&, const Model::StopMonitoringScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopMonitoringScheduleResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::StopNotebookInstanceRequest&, const Model::StopNotebookInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopNotebookInstanceResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::StopProcessingJobRequest&, const Model::StopProcessingJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopProcessingJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::StopTrainingJobRequest&, const Model::StopTrainingJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopTrainingJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::StopTransformJobRequest&, const Model::StopTransformJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopTransformJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::UpdateAppImageConfigRequest&, const Model::UpdateAppImageConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAppImageConfigResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::UpdateCodeRepositoryRequest&, const Model::UpdateCodeRepositoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCodeRepositoryResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::UpdateDomainRequest&, const Model::UpdateDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDomainResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::UpdateEndpointRequest&, const Model::UpdateEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEndpointResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::UpdateEndpointWeightsAndCapacitiesRequest&, const Model::UpdateEndpointWeightsAndCapacitiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEndpointWeightsAndCapacitiesResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::UpdateExperimentRequest&, const Model::UpdateExperimentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateExperimentResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::UpdateImageRequest&, const Model::UpdateImageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateImageResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::UpdateMonitoringScheduleRequest&, const Model::UpdateMonitoringScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMonitoringScheduleResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::UpdateNotebookInstanceRequest&, const Model::UpdateNotebookInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateNotebookInstanceResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::UpdateNotebookInstanceLifecycleConfigRequest&, const Model::UpdateNotebookInstanceLifecycleConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateNotebookInstanceLifecycleConfigResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::UpdateTrialRequest&, const Model::UpdateTrialOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTrialResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::UpdateTrialComponentRequest&, const Model::UpdateTrialComponentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTrialComponentResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::UpdateUserProfileRequest&, const Model::UpdateUserProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserProfileResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::UpdateWorkforceRequest&, const Model::UpdateWorkforceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateWorkforceResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::UpdateWorkteamRequest&, const Model::UpdateWorkteamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateWorkteamResponseReceivedHandler;

  /**
   * <p>Provides APIs for creating and managing Amazon SageMaker resources. </p>
   * <p>Other Resources:</p> <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">Amazon
   * SageMaker Developer Guide</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/augmented-ai/2019-11-07/APIReference/Welcome.html">Amazon
   * Augmented AI Runtime API Reference</a> </p> </li> </ul>
   */
  class AWS_SAGEMAKER_API SageMakerClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SageMakerClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SageMakerClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SageMakerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~SageMakerClient();


        /**
         * <p>Adds or overwrites one or more tags for the specified Amazon SageMaker
         * resource. You can add tags to notebook instances, training jobs, hyperparameter
         * tuning jobs, batch transform jobs, models, labeling jobs, work teams, endpoint
         * configurations, and endpoints.</p> <p>Each tag consists of a key and an optional
         * value. Tag keys must be unique per resource. For more information about tags,
         * see For more information, see <a
         * href="https://aws.amazon.com/answers/account-management/aws-tagging-strategies/">AWS
         * Tagging Strategies</a>.</p>  <p>Tags that you add to a hyperparameter
         * tuning job by calling this API are also added to any training jobs that the
         * hyperparameter tuning job launches after you call this API, but not to training
         * jobs that the hyperparameter tuning job launched before you called this API. To
         * make sure that the tags associated with a hyperparameter tuning job are also
         * added to all training jobs that the hyperparameter tuning job launches, add the
         * tags when you first create the tuning job by specifying them in the
         * <code>Tags</code> parameter of <a>CreateHyperParameterTuningJob</a> </p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AddTags">AWS
         * API Reference</a></p>
         */
        virtual Model::AddTagsOutcome AddTags(const Model::AddTagsRequest& request) const;

        /**
         * <p>Adds or overwrites one or more tags for the specified Amazon SageMaker
         * resource. You can add tags to notebook instances, training jobs, hyperparameter
         * tuning jobs, batch transform jobs, models, labeling jobs, work teams, endpoint
         * configurations, and endpoints.</p> <p>Each tag consists of a key and an optional
         * value. Tag keys must be unique per resource. For more information about tags,
         * see For more information, see <a
         * href="https://aws.amazon.com/answers/account-management/aws-tagging-strategies/">AWS
         * Tagging Strategies</a>.</p>  <p>Tags that you add to a hyperparameter
         * tuning job by calling this API are also added to any training jobs that the
         * hyperparameter tuning job launches after you call this API, but not to training
         * jobs that the hyperparameter tuning job launched before you called this API. To
         * make sure that the tags associated with a hyperparameter tuning job are also
         * added to all training jobs that the hyperparameter tuning job launches, add the
         * tags when you first create the tuning job by specifying them in the
         * <code>Tags</code> parameter of <a>CreateHyperParameterTuningJob</a> </p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AddTags">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddTagsOutcomeCallable AddTagsCallable(const Model::AddTagsRequest& request) const;

        /**
         * <p>Adds or overwrites one or more tags for the specified Amazon SageMaker
         * resource. You can add tags to notebook instances, training jobs, hyperparameter
         * tuning jobs, batch transform jobs, models, labeling jobs, work teams, endpoint
         * configurations, and endpoints.</p> <p>Each tag consists of a key and an optional
         * value. Tag keys must be unique per resource. For more information about tags,
         * see For more information, see <a
         * href="https://aws.amazon.com/answers/account-management/aws-tagging-strategies/">AWS
         * Tagging Strategies</a>.</p>  <p>Tags that you add to a hyperparameter
         * tuning job by calling this API are also added to any training jobs that the
         * hyperparameter tuning job launches after you call this API, but not to training
         * jobs that the hyperparameter tuning job launched before you called this API. To
         * make sure that the tags associated with a hyperparameter tuning job are also
         * added to all training jobs that the hyperparameter tuning job launches, add the
         * tags when you first create the tuning job by specifying them in the
         * <code>Tags</code> parameter of <a>CreateHyperParameterTuningJob</a> </p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AddTags">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddTagsAsync(const Model::AddTagsRequest& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates a trial component with a trial. A trial component can be
         * associated with multiple trials. To disassociate a trial component from a trial,
         * call the <a>DisassociateTrialComponent</a> API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AssociateTrialComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateTrialComponentOutcome AssociateTrialComponent(const Model::AssociateTrialComponentRequest& request) const;

        /**
         * <p>Associates a trial component with a trial. A trial component can be
         * associated with multiple trials. To disassociate a trial component from a trial,
         * call the <a>DisassociateTrialComponent</a> API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AssociateTrialComponent">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateTrialComponentOutcomeCallable AssociateTrialComponentCallable(const Model::AssociateTrialComponentRequest& request) const;

        /**
         * <p>Associates a trial component with a trial. A trial component can be
         * associated with multiple trials. To disassociate a trial component from a trial,
         * call the <a>DisassociateTrialComponent</a> API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AssociateTrialComponent">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateTrialComponentAsync(const Model::AssociateTrialComponentRequest& request, const AssociateTrialComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create a machine learning algorithm that you can use in Amazon SageMaker and
         * list in the AWS Marketplace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateAlgorithm">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAlgorithmOutcome CreateAlgorithm(const Model::CreateAlgorithmRequest& request) const;

        /**
         * <p>Create a machine learning algorithm that you can use in Amazon SageMaker and
         * list in the AWS Marketplace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateAlgorithm">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAlgorithmOutcomeCallable CreateAlgorithmCallable(const Model::CreateAlgorithmRequest& request) const;

        /**
         * <p>Create a machine learning algorithm that you can use in Amazon SageMaker and
         * list in the AWS Marketplace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateAlgorithm">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAlgorithmAsync(const Model::CreateAlgorithmRequest& request, const CreateAlgorithmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a running App for the specified UserProfile. Supported Apps are
         * JupyterServer and KernelGateway. This operation is automatically invoked by
         * Amazon SageMaker Studio upon access to the associated Domain, and when new
         * kernel configurations are selected by the user. A user may have multiple Apps
         * active simultaneously.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateApp">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAppOutcome CreateApp(const Model::CreateAppRequest& request) const;

        /**
         * <p>Creates a running App for the specified UserProfile. Supported Apps are
         * JupyterServer and KernelGateway. This operation is automatically invoked by
         * Amazon SageMaker Studio upon access to the associated Domain, and when new
         * kernel configurations are selected by the user. A user may have multiple Apps
         * active simultaneously.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateApp">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAppOutcomeCallable CreateAppCallable(const Model::CreateAppRequest& request) const;

        /**
         * <p>Creates a running App for the specified UserProfile. Supported Apps are
         * JupyterServer and KernelGateway. This operation is automatically invoked by
         * Amazon SageMaker Studio upon access to the associated Domain, and when new
         * kernel configurations are selected by the user. A user may have multiple Apps
         * active simultaneously.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateApp">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAppAsync(const Model::CreateAppRequest& request, const CreateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a configuration for running a SageMaker image as a KernelGateway app.
         * The configuration specifies the Amazon Elastic File System (EFS) storage volume
         * on the image, and a list of the kernels in the image.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateAppImageConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAppImageConfigOutcome CreateAppImageConfig(const Model::CreateAppImageConfigRequest& request) const;

        /**
         * <p>Creates a configuration for running a SageMaker image as a KernelGateway app.
         * The configuration specifies the Amazon Elastic File System (EFS) storage volume
         * on the image, and a list of the kernels in the image.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateAppImageConfig">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAppImageConfigOutcomeCallable CreateAppImageConfigCallable(const Model::CreateAppImageConfigRequest& request) const;

        /**
         * <p>Creates a configuration for running a SageMaker image as a KernelGateway app.
         * The configuration specifies the Amazon Elastic File System (EFS) storage volume
         * on the image, and a list of the kernels in the image.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateAppImageConfig">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAppImageConfigAsync(const Model::CreateAppImageConfigRequest& request, const CreateAppImageConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an Autopilot job.</p> <p>Find the best performing model after you run
         * an Autopilot job by calling . Deploy that model by following the steps described
         * in <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/ex1-deploy-model.html">Step
         * 6.1: Deploy the Model to Amazon SageMaker Hosting Services</a>.</p> <p>For
         * information about how to use Autopilot, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/autopilot-automate-model-development.html">
         * Automate Model Development with Amazon SageMaker Autopilot</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateAutoMLJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAutoMLJobOutcome CreateAutoMLJob(const Model::CreateAutoMLJobRequest& request) const;

        /**
         * <p>Creates an Autopilot job.</p> <p>Find the best performing model after you run
         * an Autopilot job by calling . Deploy that model by following the steps described
         * in <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/ex1-deploy-model.html">Step
         * 6.1: Deploy the Model to Amazon SageMaker Hosting Services</a>.</p> <p>For
         * information about how to use Autopilot, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/autopilot-automate-model-development.html">
         * Automate Model Development with Amazon SageMaker Autopilot</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateAutoMLJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAutoMLJobOutcomeCallable CreateAutoMLJobCallable(const Model::CreateAutoMLJobRequest& request) const;

        /**
         * <p>Creates an Autopilot job.</p> <p>Find the best performing model after you run
         * an Autopilot job by calling . Deploy that model by following the steps described
         * in <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/ex1-deploy-model.html">Step
         * 6.1: Deploy the Model to Amazon SageMaker Hosting Services</a>.</p> <p>For
         * information about how to use Autopilot, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/autopilot-automate-model-development.html">
         * Automate Model Development with Amazon SageMaker Autopilot</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateAutoMLJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAutoMLJobAsync(const Model::CreateAutoMLJobRequest& request, const CreateAutoMLJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a Git repository as a resource in your Amazon SageMaker account. You
         * can associate the repository with notebook instances so that you can use Git
         * source control for the notebooks you create. The Git repository is a resource in
         * your Amazon SageMaker account, so it can be associated with more than one
         * notebook instance, and it persists independently from the lifecycle of any
         * notebook instances it is associated with.</p> <p>The repository can be hosted
         * either in <a
         * href="https://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">AWS
         * CodeCommit</a> or in any other Git repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateCodeRepository">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCodeRepositoryOutcome CreateCodeRepository(const Model::CreateCodeRepositoryRequest& request) const;

        /**
         * <p>Creates a Git repository as a resource in your Amazon SageMaker account. You
         * can associate the repository with notebook instances so that you can use Git
         * source control for the notebooks you create. The Git repository is a resource in
         * your Amazon SageMaker account, so it can be associated with more than one
         * notebook instance, and it persists independently from the lifecycle of any
         * notebook instances it is associated with.</p> <p>The repository can be hosted
         * either in <a
         * href="https://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">AWS
         * CodeCommit</a> or in any other Git repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateCodeRepository">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCodeRepositoryOutcomeCallable CreateCodeRepositoryCallable(const Model::CreateCodeRepositoryRequest& request) const;

        /**
         * <p>Creates a Git repository as a resource in your Amazon SageMaker account. You
         * can associate the repository with notebook instances so that you can use Git
         * source control for the notebooks you create. The Git repository is a resource in
         * your Amazon SageMaker account, so it can be associated with more than one
         * notebook instance, and it persists independently from the lifecycle of any
         * notebook instances it is associated with.</p> <p>The repository can be hosted
         * either in <a
         * href="https://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">AWS
         * CodeCommit</a> or in any other Git repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateCodeRepository">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCodeRepositoryAsync(const Model::CreateCodeRepositoryRequest& request, const CreateCodeRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a model compilation job. After the model has been compiled, Amazon
         * SageMaker saves the resulting model artifacts to an Amazon Simple Storage
         * Service (Amazon S3) bucket that you specify. </p> <p>If you choose to host your
         * model using Amazon SageMaker hosting services, you can use the resulting model
         * artifacts as part of the model. You can also use the artifacts with AWS IoT
         * Greengrass. In that case, deploy them as an ML resource.</p> <p>In the request
         * body, you provide the following:</p> <ul> <li> <p>A name for the compilation
         * job</p> </li> <li> <p> Information about the input model artifacts </p> </li>
         * <li> <p>The output location for the compiled model and the device (target) that
         * the model runs on </p> </li> <li> <p>The Amazon Resource Name (ARN) of the IAM
         * role that Amazon SageMaker assumes to perform the model compilation job. </p>
         * </li> </ul> <p>You can also provide a <code>Tag</code> to track the model
         * compilation job's resource use and costs. The response body contains the
         * <code>CompilationJobArn</code> for the compiled job.</p> <p>To stop a model
         * compilation job, use <a>StopCompilationJob</a>. To get information about a
         * particular model compilation job, use <a>DescribeCompilationJob</a>. To get
         * information about multiple model compilation jobs, use
         * <a>ListCompilationJobs</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateCompilationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCompilationJobOutcome CreateCompilationJob(const Model::CreateCompilationJobRequest& request) const;

        /**
         * <p>Starts a model compilation job. After the model has been compiled, Amazon
         * SageMaker saves the resulting model artifacts to an Amazon Simple Storage
         * Service (Amazon S3) bucket that you specify. </p> <p>If you choose to host your
         * model using Amazon SageMaker hosting services, you can use the resulting model
         * artifacts as part of the model. You can also use the artifacts with AWS IoT
         * Greengrass. In that case, deploy them as an ML resource.</p> <p>In the request
         * body, you provide the following:</p> <ul> <li> <p>A name for the compilation
         * job</p> </li> <li> <p> Information about the input model artifacts </p> </li>
         * <li> <p>The output location for the compiled model and the device (target) that
         * the model runs on </p> </li> <li> <p>The Amazon Resource Name (ARN) of the IAM
         * role that Amazon SageMaker assumes to perform the model compilation job. </p>
         * </li> </ul> <p>You can also provide a <code>Tag</code> to track the model
         * compilation job's resource use and costs. The response body contains the
         * <code>CompilationJobArn</code> for the compiled job.</p> <p>To stop a model
         * compilation job, use <a>StopCompilationJob</a>. To get information about a
         * particular model compilation job, use <a>DescribeCompilationJob</a>. To get
         * information about multiple model compilation jobs, use
         * <a>ListCompilationJobs</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateCompilationJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCompilationJobOutcomeCallable CreateCompilationJobCallable(const Model::CreateCompilationJobRequest& request) const;

        /**
         * <p>Starts a model compilation job. After the model has been compiled, Amazon
         * SageMaker saves the resulting model artifacts to an Amazon Simple Storage
         * Service (Amazon S3) bucket that you specify. </p> <p>If you choose to host your
         * model using Amazon SageMaker hosting services, you can use the resulting model
         * artifacts as part of the model. You can also use the artifacts with AWS IoT
         * Greengrass. In that case, deploy them as an ML resource.</p> <p>In the request
         * body, you provide the following:</p> <ul> <li> <p>A name for the compilation
         * job</p> </li> <li> <p> Information about the input model artifacts </p> </li>
         * <li> <p>The output location for the compiled model and the device (target) that
         * the model runs on </p> </li> <li> <p>The Amazon Resource Name (ARN) of the IAM
         * role that Amazon SageMaker assumes to perform the model compilation job. </p>
         * </li> </ul> <p>You can also provide a <code>Tag</code> to track the model
         * compilation job's resource use and costs. The response body contains the
         * <code>CompilationJobArn</code> for the compiled job.</p> <p>To stop a model
         * compilation job, use <a>StopCompilationJob</a>. To get information about a
         * particular model compilation job, use <a>DescribeCompilationJob</a>. To get
         * information about multiple model compilation jobs, use
         * <a>ListCompilationJobs</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateCompilationJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCompilationJobAsync(const Model::CreateCompilationJobRequest& request, const CreateCompilationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a <code>Domain</code> used by Amazon SageMaker Studio. A domain
         * consists of an associated Amazon Elastic File System (EFS) volume, a list of
         * authorized users, and a variety of security, application, policy, and Amazon
         * Virtual Private Cloud (VPC) configurations. An AWS account is limited to one
         * domain per region. Users within a domain can share notebook files and other
         * artifacts with each other.</p> <p>When a domain is created, an EFS volume is
         * created for use by all of the users within the domain. Each user receives a
         * private home directory within the EFS volume for notebooks, Git repositories,
         * and data files.</p> <p> <b>VPC configuration</b> </p> <p>All SageMaker Studio
         * traffic between the domain and the EFS volume is through the specified VPC and
         * subnets. For other Studio traffic, you can specify the
         * <code>AppNetworkAccessType</code> parameter. <code>AppNetworkAccessType</code>
         * corresponds to the network access type that you choose when you onboard to
         * Studio. The following options are available:</p> <ul> <li> <p>
         * <code>PublicInternetOnly</code> - Non-EFS traffic goes through a VPC managed by
         * Amazon SageMaker, which allows internet access. This is the default value.</p>
         * </li> <li> <p> <code>VpcOnly</code> - All Studio traffic is through the
         * specified VPC and subnets. Internet access is disabled by default. To allow
         * internet access, you must specify a NAT gateway.</p> <p>When internet access is
         * disabled, you won't be able to run a Studio notebook or to train or host models
         * unless your VPC has an interface endpoint to the SageMaker API and runtime or a
         * NAT gateway and your security groups allow outbound connections.</p> </li> </ul>
         * <p>For more information, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/studio-notebooks-and-internet-access.html">Connect
         * SageMaker Studio Notebooks to Resources in a VPC</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDomainOutcome CreateDomain(const Model::CreateDomainRequest& request) const;

        /**
         * <p>Creates a <code>Domain</code> used by Amazon SageMaker Studio. A domain
         * consists of an associated Amazon Elastic File System (EFS) volume, a list of
         * authorized users, and a variety of security, application, policy, and Amazon
         * Virtual Private Cloud (VPC) configurations. An AWS account is limited to one
         * domain per region. Users within a domain can share notebook files and other
         * artifacts with each other.</p> <p>When a domain is created, an EFS volume is
         * created for use by all of the users within the domain. Each user receives a
         * private home directory within the EFS volume for notebooks, Git repositories,
         * and data files.</p> <p> <b>VPC configuration</b> </p> <p>All SageMaker Studio
         * traffic between the domain and the EFS volume is through the specified VPC and
         * subnets. For other Studio traffic, you can specify the
         * <code>AppNetworkAccessType</code> parameter. <code>AppNetworkAccessType</code>
         * corresponds to the network access type that you choose when you onboard to
         * Studio. The following options are available:</p> <ul> <li> <p>
         * <code>PublicInternetOnly</code> - Non-EFS traffic goes through a VPC managed by
         * Amazon SageMaker, which allows internet access. This is the default value.</p>
         * </li> <li> <p> <code>VpcOnly</code> - All Studio traffic is through the
         * specified VPC and subnets. Internet access is disabled by default. To allow
         * internet access, you must specify a NAT gateway.</p> <p>When internet access is
         * disabled, you won't be able to run a Studio notebook or to train or host models
         * unless your VPC has an interface endpoint to the SageMaker API and runtime or a
         * NAT gateway and your security groups allow outbound connections.</p> </li> </ul>
         * <p>For more information, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/studio-notebooks-and-internet-access.html">Connect
         * SageMaker Studio Notebooks to Resources in a VPC</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateDomain">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDomainOutcomeCallable CreateDomainCallable(const Model::CreateDomainRequest& request) const;

        /**
         * <p>Creates a <code>Domain</code> used by Amazon SageMaker Studio. A domain
         * consists of an associated Amazon Elastic File System (EFS) volume, a list of
         * authorized users, and a variety of security, application, policy, and Amazon
         * Virtual Private Cloud (VPC) configurations. An AWS account is limited to one
         * domain per region. Users within a domain can share notebook files and other
         * artifacts with each other.</p> <p>When a domain is created, an EFS volume is
         * created for use by all of the users within the domain. Each user receives a
         * private home directory within the EFS volume for notebooks, Git repositories,
         * and data files.</p> <p> <b>VPC configuration</b> </p> <p>All SageMaker Studio
         * traffic between the domain and the EFS volume is through the specified VPC and
         * subnets. For other Studio traffic, you can specify the
         * <code>AppNetworkAccessType</code> parameter. <code>AppNetworkAccessType</code>
         * corresponds to the network access type that you choose when you onboard to
         * Studio. The following options are available:</p> <ul> <li> <p>
         * <code>PublicInternetOnly</code> - Non-EFS traffic goes through a VPC managed by
         * Amazon SageMaker, which allows internet access. This is the default value.</p>
         * </li> <li> <p> <code>VpcOnly</code> - All Studio traffic is through the
         * specified VPC and subnets. Internet access is disabled by default. To allow
         * internet access, you must specify a NAT gateway.</p> <p>When internet access is
         * disabled, you won't be able to run a Studio notebook or to train or host models
         * unless your VPC has an interface endpoint to the SageMaker API and runtime or a
         * NAT gateway and your security groups allow outbound connections.</p> </li> </ul>
         * <p>For more information, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/studio-notebooks-and-internet-access.html">Connect
         * SageMaker Studio Notebooks to Resources in a VPC</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateDomain">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDomainAsync(const Model::CreateDomainRequest& request, const CreateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an endpoint using the endpoint configuration specified in the
         * request. Amazon SageMaker uses the endpoint to provision resources and deploy
         * models. You create the endpoint configuration with the
         * <a>CreateEndpointConfig</a> API. </p> <p> Use this API to deploy models using
         * Amazon SageMaker hosting services. </p> <p>For an example that calls this method
         * when deploying a model to Amazon SageMaker hosting services, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/ex1-deploy-model.html#ex1-deploy-model-boto">Deploy
         * the Model to Amazon SageMaker Hosting Services (AWS SDK for Python (Boto
         * 3)).</a> </p>  <p> You must not delete an <code>EndpointConfig</code> that
         * is in use by an endpoint that is live or while the <code>UpdateEndpoint</code>
         * or <code>CreateEndpoint</code> operations are being performed on the endpoint.
         * To update an endpoint, you must create a new <code>EndpointConfig</code>.</p>
         *  <p>The endpoint name must be unique within an AWS Region in your AWS
         * account. </p> <p>When it receives the request, Amazon SageMaker creates the
         * endpoint, launches the resources (ML compute instances), and deploys the
         * model(s) on them. </p>  <p>When you call <a>CreateEndpoint</a>, a load
         * call is made to DynamoDB to verify that your endpoint configuration exists. When
         * you read data from a DynamoDB table supporting <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/HowItWorks.ReadConsistency.html">
         * <code>Eventually Consistent Reads</code> </a>, the response might not reflect
         * the results of a recently completed write operation. The response might include
         * some stale data. If the dependent entities are not yet in DynamoDB, this causes
         * a validation error. If you repeat your read request after a short time, the
         * response should return the latest data. So retry logic is recommended to handle
         * these possible issues. We also recommend that customers call
         * <a>DescribeEndpointConfig</a> before calling <a>CreateEndpoint</a> to minimize
         * the potential impact of a DynamoDB eventually consistent read.</p> 
         * <p>When Amazon SageMaker receives the request, it sets the endpoint status to
         * <code>Creating</code>. After it creates the endpoint, it sets the status to
         * <code>InService</code>. Amazon SageMaker can then process incoming requests for
         * inferences. To check the status of an endpoint, use the <a>DescribeEndpoint</a>
         * API.</p> <p>If any of the models hosted at this endpoint get model data from an
         * Amazon S3 location, Amazon SageMaker uses AWS Security Token Service to download
         * model artifacts from the S3 path you provided. AWS STS is activated in your IAM
         * user account by default. If you previously deactivated AWS STS for a region, you
         * need to reactivate AWS STS for that region. For more information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_enable-regions.html">Activating
         * and Deactivating AWS STS in an AWS Region</a> in the <i>AWS Identity and Access
         * Management User Guide</i>.</p>  <p> To add the IAM role policies for using
         * this API operation, go to the <a href="https://console.aws.amazon.com/iam/">IAM
         * console</a>, and choose Roles in the left navigation pane. Search the IAM role
         * that you want to grant access to use the <a>CreateEndpoint</a> and
         * <a>CreateEndpointConfig</a> API operations, add the following policies to the
         * role. </p> <ul> <li> <p>Option 1: For a full Amazon SageMaker access, search and
         * attach the <code>AmazonSageMakerFullAccess</code> policy.</p> </li> <li>
         * <p>Option 2: For granting a limited access to an IAM role, paste the following
         * Action elements manually into the JSON file of the IAM role: </p> <p>
         * <code>"Action": ["sagemaker:CreateEndpoint",
         * "sagemaker:CreateEndpointConfig"]</code> </p> <p> <code>"Resource": [</code>
         * </p> <p>
         * <code>"arn:aws:sagemaker:region:account-id:endpoint/endpointName"</code> </p>
         * <p>
         * <code>"arn:aws:sagemaker:region:account-id:endpoint-config/endpointConfigName"</code>
         * </p> <p> <code>]</code> </p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/api-permissions-reference.html">Amazon
         * SageMaker API Permissions: Actions, Permissions, and Resources
         * Reference</a>.</p> </li> </ul> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEndpointOutcome CreateEndpoint(const Model::CreateEndpointRequest& request) const;

        /**
         * <p>Creates an endpoint using the endpoint configuration specified in the
         * request. Amazon SageMaker uses the endpoint to provision resources and deploy
         * models. You create the endpoint configuration with the
         * <a>CreateEndpointConfig</a> API. </p> <p> Use this API to deploy models using
         * Amazon SageMaker hosting services. </p> <p>For an example that calls this method
         * when deploying a model to Amazon SageMaker hosting services, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/ex1-deploy-model.html#ex1-deploy-model-boto">Deploy
         * the Model to Amazon SageMaker Hosting Services (AWS SDK for Python (Boto
         * 3)).</a> </p>  <p> You must not delete an <code>EndpointConfig</code> that
         * is in use by an endpoint that is live or while the <code>UpdateEndpoint</code>
         * or <code>CreateEndpoint</code> operations are being performed on the endpoint.
         * To update an endpoint, you must create a new <code>EndpointConfig</code>.</p>
         *  <p>The endpoint name must be unique within an AWS Region in your AWS
         * account. </p> <p>When it receives the request, Amazon SageMaker creates the
         * endpoint, launches the resources (ML compute instances), and deploys the
         * model(s) on them. </p>  <p>When you call <a>CreateEndpoint</a>, a load
         * call is made to DynamoDB to verify that your endpoint configuration exists. When
         * you read data from a DynamoDB table supporting <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/HowItWorks.ReadConsistency.html">
         * <code>Eventually Consistent Reads</code> </a>, the response might not reflect
         * the results of a recently completed write operation. The response might include
         * some stale data. If the dependent entities are not yet in DynamoDB, this causes
         * a validation error. If you repeat your read request after a short time, the
         * response should return the latest data. So retry logic is recommended to handle
         * these possible issues. We also recommend that customers call
         * <a>DescribeEndpointConfig</a> before calling <a>CreateEndpoint</a> to minimize
         * the potential impact of a DynamoDB eventually consistent read.</p> 
         * <p>When Amazon SageMaker receives the request, it sets the endpoint status to
         * <code>Creating</code>. After it creates the endpoint, it sets the status to
         * <code>InService</code>. Amazon SageMaker can then process incoming requests for
         * inferences. To check the status of an endpoint, use the <a>DescribeEndpoint</a>
         * API.</p> <p>If any of the models hosted at this endpoint get model data from an
         * Amazon S3 location, Amazon SageMaker uses AWS Security Token Service to download
         * model artifacts from the S3 path you provided. AWS STS is activated in your IAM
         * user account by default. If you previously deactivated AWS STS for a region, you
         * need to reactivate AWS STS for that region. For more information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_enable-regions.html">Activating
         * and Deactivating AWS STS in an AWS Region</a> in the <i>AWS Identity and Access
         * Management User Guide</i>.</p>  <p> To add the IAM role policies for using
         * this API operation, go to the <a href="https://console.aws.amazon.com/iam/">IAM
         * console</a>, and choose Roles in the left navigation pane. Search the IAM role
         * that you want to grant access to use the <a>CreateEndpoint</a> and
         * <a>CreateEndpointConfig</a> API operations, add the following policies to the
         * role. </p> <ul> <li> <p>Option 1: For a full Amazon SageMaker access, search and
         * attach the <code>AmazonSageMakerFullAccess</code> policy.</p> </li> <li>
         * <p>Option 2: For granting a limited access to an IAM role, paste the following
         * Action elements manually into the JSON file of the IAM role: </p> <p>
         * <code>"Action": ["sagemaker:CreateEndpoint",
         * "sagemaker:CreateEndpointConfig"]</code> </p> <p> <code>"Resource": [</code>
         * </p> <p>
         * <code>"arn:aws:sagemaker:region:account-id:endpoint/endpointName"</code> </p>
         * <p>
         * <code>"arn:aws:sagemaker:region:account-id:endpoint-config/endpointConfigName"</code>
         * </p> <p> <code>]</code> </p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/api-permissions-reference.html">Amazon
         * SageMaker API Permissions: Actions, Permissions, and Resources
         * Reference</a>.</p> </li> </ul> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateEndpoint">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateEndpointOutcomeCallable CreateEndpointCallable(const Model::CreateEndpointRequest& request) const;

        /**
         * <p>Creates an endpoint using the endpoint configuration specified in the
         * request. Amazon SageMaker uses the endpoint to provision resources and deploy
         * models. You create the endpoint configuration with the
         * <a>CreateEndpointConfig</a> API. </p> <p> Use this API to deploy models using
         * Amazon SageMaker hosting services. </p> <p>For an example that calls this method
         * when deploying a model to Amazon SageMaker hosting services, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/ex1-deploy-model.html#ex1-deploy-model-boto">Deploy
         * the Model to Amazon SageMaker Hosting Services (AWS SDK for Python (Boto
         * 3)).</a> </p>  <p> You must not delete an <code>EndpointConfig</code> that
         * is in use by an endpoint that is live or while the <code>UpdateEndpoint</code>
         * or <code>CreateEndpoint</code> operations are being performed on the endpoint.
         * To update an endpoint, you must create a new <code>EndpointConfig</code>.</p>
         *  <p>The endpoint name must be unique within an AWS Region in your AWS
         * account. </p> <p>When it receives the request, Amazon SageMaker creates the
         * endpoint, launches the resources (ML compute instances), and deploys the
         * model(s) on them. </p>  <p>When you call <a>CreateEndpoint</a>, a load
         * call is made to DynamoDB to verify that your endpoint configuration exists. When
         * you read data from a DynamoDB table supporting <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/HowItWorks.ReadConsistency.html">
         * <code>Eventually Consistent Reads</code> </a>, the response might not reflect
         * the results of a recently completed write operation. The response might include
         * some stale data. If the dependent entities are not yet in DynamoDB, this causes
         * a validation error. If you repeat your read request after a short time, the
         * response should return the latest data. So retry logic is recommended to handle
         * these possible issues. We also recommend that customers call
         * <a>DescribeEndpointConfig</a> before calling <a>CreateEndpoint</a> to minimize
         * the potential impact of a DynamoDB eventually consistent read.</p> 
         * <p>When Amazon SageMaker receives the request, it sets the endpoint status to
         * <code>Creating</code>. After it creates the endpoint, it sets the status to
         * <code>InService</code>. Amazon SageMaker can then process incoming requests for
         * inferences. To check the status of an endpoint, use the <a>DescribeEndpoint</a>
         * API.</p> <p>If any of the models hosted at this endpoint get model data from an
         * Amazon S3 location, Amazon SageMaker uses AWS Security Token Service to download
         * model artifacts from the S3 path you provided. AWS STS is activated in your IAM
         * user account by default. If you previously deactivated AWS STS for a region, you
         * need to reactivate AWS STS for that region. For more information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_enable-regions.html">Activating
         * and Deactivating AWS STS in an AWS Region</a> in the <i>AWS Identity and Access
         * Management User Guide</i>.</p>  <p> To add the IAM role policies for using
         * this API operation, go to the <a href="https://console.aws.amazon.com/iam/">IAM
         * console</a>, and choose Roles in the left navigation pane. Search the IAM role
         * that you want to grant access to use the <a>CreateEndpoint</a> and
         * <a>CreateEndpointConfig</a> API operations, add the following policies to the
         * role. </p> <ul> <li> <p>Option 1: For a full Amazon SageMaker access, search and
         * attach the <code>AmazonSageMakerFullAccess</code> policy.</p> </li> <li>
         * <p>Option 2: For granting a limited access to an IAM role, paste the following
         * Action elements manually into the JSON file of the IAM role: </p> <p>
         * <code>"Action": ["sagemaker:CreateEndpoint",
         * "sagemaker:CreateEndpointConfig"]</code> </p> <p> <code>"Resource": [</code>
         * </p> <p>
         * <code>"arn:aws:sagemaker:region:account-id:endpoint/endpointName"</code> </p>
         * <p>
         * <code>"arn:aws:sagemaker:region:account-id:endpoint-config/endpointConfigName"</code>
         * </p> <p> <code>]</code> </p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/api-permissions-reference.html">Amazon
         * SageMaker API Permissions: Actions, Permissions, and Resources
         * Reference</a>.</p> </li> </ul> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateEndpoint">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateEndpointAsync(const Model::CreateEndpointRequest& request, const CreateEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an endpoint configuration that Amazon SageMaker hosting services uses
         * to deploy models. In the configuration, you identify one or more models, created
         * using the <code>CreateModel</code> API, to deploy and the resources that you
         * want Amazon SageMaker to provision. Then you call the <a>CreateEndpoint</a>
         * API.</p>  <p> Use this API if you want to use Amazon SageMaker hosting
         * services to deploy models into production. </p>  <p>In the request, you
         * define a <code>ProductionVariant</code>, for each model that you want to deploy.
         * Each <code>ProductionVariant</code> parameter also describes the resources that
         * you want Amazon SageMaker to provision. This includes the number and type of ML
         * compute instances to deploy. </p> <p>If you are hosting multiple models, you
         * also assign a <code>VariantWeight</code> to specify how much traffic you want to
         * allocate to each model. For example, suppose that you want to host two models, A
         * and B, and you assign traffic weight 2 for model A and 1 for model B. Amazon
         * SageMaker distributes two-thirds of the traffic to Model A, and one-third to
         * model B. </p> <p>For an example that calls this method when deploying a model to
         * Amazon SageMaker hosting services, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/ex1-deploy-model.html#ex1-deploy-model-boto">Deploy
         * the Model to Amazon SageMaker Hosting Services (AWS SDK for Python (Boto
         * 3)).</a> </p>  <p>When you call <a>CreateEndpoint</a>, a load call is made
         * to DynamoDB to verify that your endpoint configuration exists. When you read
         * data from a DynamoDB table supporting <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/HowItWorks.ReadConsistency.html">
         * <code>Eventually Consistent Reads</code> </a>, the response might not reflect
         * the results of a recently completed write operation. The response might include
         * some stale data. If the dependent entities are not yet in DynamoDB, this causes
         * a validation error. If you repeat your read request after a short time, the
         * response should return the latest data. So retry logic is recommended to handle
         * these possible issues. We also recommend that customers call
         * <a>DescribeEndpointConfig</a> before calling <a>CreateEndpoint</a> to minimize
         * the potential impact of a DynamoDB eventually consistent read.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateEndpointConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEndpointConfigOutcome CreateEndpointConfig(const Model::CreateEndpointConfigRequest& request) const;

        /**
         * <p>Creates an endpoint configuration that Amazon SageMaker hosting services uses
         * to deploy models. In the configuration, you identify one or more models, created
         * using the <code>CreateModel</code> API, to deploy and the resources that you
         * want Amazon SageMaker to provision. Then you call the <a>CreateEndpoint</a>
         * API.</p>  <p> Use this API if you want to use Amazon SageMaker hosting
         * services to deploy models into production. </p>  <p>In the request, you
         * define a <code>ProductionVariant</code>, for each model that you want to deploy.
         * Each <code>ProductionVariant</code> parameter also describes the resources that
         * you want Amazon SageMaker to provision. This includes the number and type of ML
         * compute instances to deploy. </p> <p>If you are hosting multiple models, you
         * also assign a <code>VariantWeight</code> to specify how much traffic you want to
         * allocate to each model. For example, suppose that you want to host two models, A
         * and B, and you assign traffic weight 2 for model A and 1 for model B. Amazon
         * SageMaker distributes two-thirds of the traffic to Model A, and one-third to
         * model B. </p> <p>For an example that calls this method when deploying a model to
         * Amazon SageMaker hosting services, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/ex1-deploy-model.html#ex1-deploy-model-boto">Deploy
         * the Model to Amazon SageMaker Hosting Services (AWS SDK for Python (Boto
         * 3)).</a> </p>  <p>When you call <a>CreateEndpoint</a>, a load call is made
         * to DynamoDB to verify that your endpoint configuration exists. When you read
         * data from a DynamoDB table supporting <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/HowItWorks.ReadConsistency.html">
         * <code>Eventually Consistent Reads</code> </a>, the response might not reflect
         * the results of a recently completed write operation. The response might include
         * some stale data. If the dependent entities are not yet in DynamoDB, this causes
         * a validation error. If you repeat your read request after a short time, the
         * response should return the latest data. So retry logic is recommended to handle
         * these possible issues. We also recommend that customers call
         * <a>DescribeEndpointConfig</a> before calling <a>CreateEndpoint</a> to minimize
         * the potential impact of a DynamoDB eventually consistent read.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateEndpointConfig">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateEndpointConfigOutcomeCallable CreateEndpointConfigCallable(const Model::CreateEndpointConfigRequest& request) const;

        /**
         * <p>Creates an endpoint configuration that Amazon SageMaker hosting services uses
         * to deploy models. In the configuration, you identify one or more models, created
         * using the <code>CreateModel</code> API, to deploy and the resources that you
         * want Amazon SageMaker to provision. Then you call the <a>CreateEndpoint</a>
         * API.</p>  <p> Use this API if you want to use Amazon SageMaker hosting
         * services to deploy models into production. </p>  <p>In the request, you
         * define a <code>ProductionVariant</code>, for each model that you want to deploy.
         * Each <code>ProductionVariant</code> parameter also describes the resources that
         * you want Amazon SageMaker to provision. This includes the number and type of ML
         * compute instances to deploy. </p> <p>If you are hosting multiple models, you
         * also assign a <code>VariantWeight</code> to specify how much traffic you want to
         * allocate to each model. For example, suppose that you want to host two models, A
         * and B, and you assign traffic weight 2 for model A and 1 for model B. Amazon
         * SageMaker distributes two-thirds of the traffic to Model A, and one-third to
         * model B. </p> <p>For an example that calls this method when deploying a model to
         * Amazon SageMaker hosting services, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/ex1-deploy-model.html#ex1-deploy-model-boto">Deploy
         * the Model to Amazon SageMaker Hosting Services (AWS SDK for Python (Boto
         * 3)).</a> </p>  <p>When you call <a>CreateEndpoint</a>, a load call is made
         * to DynamoDB to verify that your endpoint configuration exists. When you read
         * data from a DynamoDB table supporting <a
         * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/HowItWorks.ReadConsistency.html">
         * <code>Eventually Consistent Reads</code> </a>, the response might not reflect
         * the results of a recently completed write operation. The response might include
         * some stale data. If the dependent entities are not yet in DynamoDB, this causes
         * a validation error. If you repeat your read request after a short time, the
         * response should return the latest data. So retry logic is recommended to handle
         * these possible issues. We also recommend that customers call
         * <a>DescribeEndpointConfig</a> before calling <a>CreateEndpoint</a> to minimize
         * the potential impact of a DynamoDB eventually consistent read.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateEndpointConfig">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateEndpointConfigAsync(const Model::CreateEndpointConfigRequest& request, const CreateEndpointConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an SageMaker <i>experiment</i>. An experiment is a collection of
         * <i>trials</i> that are observed, compared and evaluated as a group. A trial is a
         * set of steps, called <i>trial components</i>, that produce a machine learning
         * model.</p> <p>The goal of an experiment is to determine the components that
         * produce the best model. Multiple trials are performed, each one isolating and
         * measuring the impact of a change to one or more inputs, while keeping the
         * remaining inputs constant.</p> <p>When you use Amazon SageMaker Studio or the
         * Amazon SageMaker Python SDK, all experiments, trials, and trial components are
         * automatically tracked, logged, and indexed. When you use the AWS SDK for Python
         * (Boto), you must use the logging APIs provided by the SDK.</p> <p>You can add
         * tags to experiments, trials, trial components and then use the <a>Search</a> API
         * to search for the tags.</p> <p>To add a description to an experiment, specify
         * the optional <code>Description</code> parameter. To add a description later, or
         * to change the description, call the <a>UpdateExperiment</a> API.</p> <p>To get a
         * list of all your experiments, call the <a>ListExperiments</a> API. To view an
         * experiment's properties, call the <a>DescribeExperiment</a> API. To get a list
         * of all the trials associated with an experiment, call the <a>ListTrials</a> API.
         * To create a trial call the <a>CreateTrial</a> API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateExperiment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateExperimentOutcome CreateExperiment(const Model::CreateExperimentRequest& request) const;

        /**
         * <p>Creates an SageMaker <i>experiment</i>. An experiment is a collection of
         * <i>trials</i> that are observed, compared and evaluated as a group. A trial is a
         * set of steps, called <i>trial components</i>, that produce a machine learning
         * model.</p> <p>The goal of an experiment is to determine the components that
         * produce the best model. Multiple trials are performed, each one isolating and
         * measuring the impact of a change to one or more inputs, while keeping the
         * remaining inputs constant.</p> <p>When you use Amazon SageMaker Studio or the
         * Amazon SageMaker Python SDK, all experiments, trials, and trial components are
         * automatically tracked, logged, and indexed. When you use the AWS SDK for Python
         * (Boto), you must use the logging APIs provided by the SDK.</p> <p>You can add
         * tags to experiments, trials, trial components and then use the <a>Search</a> API
         * to search for the tags.</p> <p>To add a description to an experiment, specify
         * the optional <code>Description</code> parameter. To add a description later, or
         * to change the description, call the <a>UpdateExperiment</a> API.</p> <p>To get a
         * list of all your experiments, call the <a>ListExperiments</a> API. To view an
         * experiment's properties, call the <a>DescribeExperiment</a> API. To get a list
         * of all the trials associated with an experiment, call the <a>ListTrials</a> API.
         * To create a trial call the <a>CreateTrial</a> API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateExperiment">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateExperimentOutcomeCallable CreateExperimentCallable(const Model::CreateExperimentRequest& request) const;

        /**
         * <p>Creates an SageMaker <i>experiment</i>. An experiment is a collection of
         * <i>trials</i> that are observed, compared and evaluated as a group. A trial is a
         * set of steps, called <i>trial components</i>, that produce a machine learning
         * model.</p> <p>The goal of an experiment is to determine the components that
         * produce the best model. Multiple trials are performed, each one isolating and
         * measuring the impact of a change to one or more inputs, while keeping the
         * remaining inputs constant.</p> <p>When you use Amazon SageMaker Studio or the
         * Amazon SageMaker Python SDK, all experiments, trials, and trial components are
         * automatically tracked, logged, and indexed. When you use the AWS SDK for Python
         * (Boto), you must use the logging APIs provided by the SDK.</p> <p>You can add
         * tags to experiments, trials, trial components and then use the <a>Search</a> API
         * to search for the tags.</p> <p>To add a description to an experiment, specify
         * the optional <code>Description</code> parameter. To add a description later, or
         * to change the description, call the <a>UpdateExperiment</a> API.</p> <p>To get a
         * list of all your experiments, call the <a>ListExperiments</a> API. To view an
         * experiment's properties, call the <a>DescribeExperiment</a> API. To get a list
         * of all the trials associated with an experiment, call the <a>ListTrials</a> API.
         * To create a trial call the <a>CreateTrial</a> API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateExperiment">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateExperimentAsync(const Model::CreateExperimentRequest& request, const CreateExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a flow definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateFlowDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFlowDefinitionOutcome CreateFlowDefinition(const Model::CreateFlowDefinitionRequest& request) const;

        /**
         * <p>Creates a flow definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateFlowDefinition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFlowDefinitionOutcomeCallable CreateFlowDefinitionCallable(const Model::CreateFlowDefinitionRequest& request) const;

        /**
         * <p>Creates a flow definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateFlowDefinition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateFlowDefinitionAsync(const Model::CreateFlowDefinitionRequest& request, const CreateFlowDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Defines the settings you will use for the human review workflow user
         * interface. Reviewers will see a three-panel interface with an instruction area,
         * the item to review, and an input area.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateHumanTaskUi">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateHumanTaskUiOutcome CreateHumanTaskUi(const Model::CreateHumanTaskUiRequest& request) const;

        /**
         * <p>Defines the settings you will use for the human review workflow user
         * interface. Reviewers will see a three-panel interface with an instruction area,
         * the item to review, and an input area.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateHumanTaskUi">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateHumanTaskUiOutcomeCallable CreateHumanTaskUiCallable(const Model::CreateHumanTaskUiRequest& request) const;

        /**
         * <p>Defines the settings you will use for the human review workflow user
         * interface. Reviewers will see a three-panel interface with an instruction area,
         * the item to review, and an input area.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateHumanTaskUi">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateHumanTaskUiAsync(const Model::CreateHumanTaskUiRequest& request, const CreateHumanTaskUiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a hyperparameter tuning job. A hyperparameter tuning job finds the
         * best version of a model by running many training jobs on your dataset using the
         * algorithm you choose and values for hyperparameters within ranges that you
         * specify. It then chooses the hyperparameter values that result in a model that
         * performs the best, as measured by an objective metric that you
         * choose.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateHyperParameterTuningJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateHyperParameterTuningJobOutcome CreateHyperParameterTuningJob(const Model::CreateHyperParameterTuningJobRequest& request) const;

        /**
         * <p>Starts a hyperparameter tuning job. A hyperparameter tuning job finds the
         * best version of a model by running many training jobs on your dataset using the
         * algorithm you choose and values for hyperparameters within ranges that you
         * specify. It then chooses the hyperparameter values that result in a model that
         * performs the best, as measured by an objective metric that you
         * choose.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateHyperParameterTuningJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateHyperParameterTuningJobOutcomeCallable CreateHyperParameterTuningJobCallable(const Model::CreateHyperParameterTuningJobRequest& request) const;

        /**
         * <p>Starts a hyperparameter tuning job. A hyperparameter tuning job finds the
         * best version of a model by running many training jobs on your dataset using the
         * algorithm you choose and values for hyperparameters within ranges that you
         * specify. It then chooses the hyperparameter values that result in a model that
         * performs the best, as measured by an objective metric that you
         * choose.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateHyperParameterTuningJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateHyperParameterTuningJobAsync(const Model::CreateHyperParameterTuningJobRequest& request, const CreateHyperParameterTuningJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a custom SageMaker image. A SageMaker image is a set of image
         * versions. Each image version represents a container image stored in Amazon
         * Container Registry (ECR). For more information, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/studio-byoi.html">Bring
         * your own SageMaker image</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateImage">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateImageOutcome CreateImage(const Model::CreateImageRequest& request) const;

        /**
         * <p>Creates a custom SageMaker image. A SageMaker image is a set of image
         * versions. Each image version represents a container image stored in Amazon
         * Container Registry (ECR). For more information, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/studio-byoi.html">Bring
         * your own SageMaker image</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateImage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateImageOutcomeCallable CreateImageCallable(const Model::CreateImageRequest& request) const;

        /**
         * <p>Creates a custom SageMaker image. A SageMaker image is a set of image
         * versions. Each image version represents a container image stored in Amazon
         * Container Registry (ECR). For more information, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/studio-byoi.html">Bring
         * your own SageMaker image</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateImage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateImageAsync(const Model::CreateImageRequest& request, const CreateImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a version of the SageMaker image specified by <code>ImageName</code>.
         * The version represents the Amazon Container Registry (ECR) container image
         * specified by <code>BaseImage</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateImageVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateImageVersionOutcome CreateImageVersion(const Model::CreateImageVersionRequest& request) const;

        /**
         * <p>Creates a version of the SageMaker image specified by <code>ImageName</code>.
         * The version represents the Amazon Container Registry (ECR) container image
         * specified by <code>BaseImage</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateImageVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateImageVersionOutcomeCallable CreateImageVersionCallable(const Model::CreateImageVersionRequest& request) const;

        /**
         * <p>Creates a version of the SageMaker image specified by <code>ImageName</code>.
         * The version represents the Amazon Container Registry (ECR) container image
         * specified by <code>BaseImage</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateImageVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateImageVersionAsync(const Model::CreateImageVersionRequest& request, const CreateImageVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a job that uses workers to label the data objects in your input
         * dataset. You can use the labeled data to train machine learning models.</p>
         * <p>You can select your workforce from one of three providers:</p> <ul> <li> <p>A
         * private workforce that you create. It can include employees, contractors, and
         * outside experts. Use a private workforce when want the data to stay within your
         * organization or when a specific set of skills is required.</p> </li> <li> <p>One
         * or more vendors that you select from the AWS Marketplace. Vendors provide
         * expertise in specific areas. </p> </li> <li> <p>The Amazon Mechanical Turk
         * workforce. This is the largest workforce, but it should only be used for public
         * data or data that has been stripped of any personally identifiable
         * information.</p> </li> </ul> <p>You can also use <i>automated data labeling</i>
         * to reduce the number of data objects that need to be labeled by a human.
         * Automated data labeling uses <i>active learning</i> to determine if a data
         * object can be labeled by machine or if it needs to be sent to a human worker.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-automated-labeling.html">Using
         * Automated Data Labeling</a>.</p> <p>The data objects to be labeled are contained
         * in an Amazon S3 bucket. You create a <i>manifest file</i> that describes the
         * location of each object. For more information, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-data.html">Using Input
         * and Output Data</a>.</p> <p>The output can be used as the manifest file for
         * another labeling job or as training data for your machine learning
         * models.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateLabelingJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLabelingJobOutcome CreateLabelingJob(const Model::CreateLabelingJobRequest& request) const;

        /**
         * <p>Creates a job that uses workers to label the data objects in your input
         * dataset. You can use the labeled data to train machine learning models.</p>
         * <p>You can select your workforce from one of three providers:</p> <ul> <li> <p>A
         * private workforce that you create. It can include employees, contractors, and
         * outside experts. Use a private workforce when want the data to stay within your
         * organization or when a specific set of skills is required.</p> </li> <li> <p>One
         * or more vendors that you select from the AWS Marketplace. Vendors provide
         * expertise in specific areas. </p> </li> <li> <p>The Amazon Mechanical Turk
         * workforce. This is the largest workforce, but it should only be used for public
         * data or data that has been stripped of any personally identifiable
         * information.</p> </li> </ul> <p>You can also use <i>automated data labeling</i>
         * to reduce the number of data objects that need to be labeled by a human.
         * Automated data labeling uses <i>active learning</i> to determine if a data
         * object can be labeled by machine or if it needs to be sent to a human worker.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-automated-labeling.html">Using
         * Automated Data Labeling</a>.</p> <p>The data objects to be labeled are contained
         * in an Amazon S3 bucket. You create a <i>manifest file</i> that describes the
         * location of each object. For more information, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-data.html">Using Input
         * and Output Data</a>.</p> <p>The output can be used as the manifest file for
         * another labeling job or as training data for your machine learning
         * models.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateLabelingJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLabelingJobOutcomeCallable CreateLabelingJobCallable(const Model::CreateLabelingJobRequest& request) const;

        /**
         * <p>Creates a job that uses workers to label the data objects in your input
         * dataset. You can use the labeled data to train machine learning models.</p>
         * <p>You can select your workforce from one of three providers:</p> <ul> <li> <p>A
         * private workforce that you create. It can include employees, contractors, and
         * outside experts. Use a private workforce when want the data to stay within your
         * organization or when a specific set of skills is required.</p> </li> <li> <p>One
         * or more vendors that you select from the AWS Marketplace. Vendors provide
         * expertise in specific areas. </p> </li> <li> <p>The Amazon Mechanical Turk
         * workforce. This is the largest workforce, but it should only be used for public
         * data or data that has been stripped of any personally identifiable
         * information.</p> </li> </ul> <p>You can also use <i>automated data labeling</i>
         * to reduce the number of data objects that need to be labeled by a human.
         * Automated data labeling uses <i>active learning</i> to determine if a data
         * object can be labeled by machine or if it needs to be sent to a human worker.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-automated-labeling.html">Using
         * Automated Data Labeling</a>.</p> <p>The data objects to be labeled are contained
         * in an Amazon S3 bucket. You create a <i>manifest file</i> that describes the
         * location of each object. For more information, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-data.html">Using Input
         * and Output Data</a>.</p> <p>The output can be used as the manifest file for
         * another labeling job or as training data for your machine learning
         * models.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateLabelingJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLabelingJobAsync(const Model::CreateLabelingJobRequest& request, const CreateLabelingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a model in Amazon SageMaker. In the request, you name the model and
         * describe a primary container. For the primary container, you specify the Docker
         * image that contains inference code, artifacts (from prior training), and a
         * custom environment map that the inference code uses when you deploy the model
         * for predictions.</p> <p>Use this API to create a model if you want to use Amazon
         * SageMaker hosting services or run a batch transform job.</p> <p>To host your
         * model, you create an endpoint configuration with the
         * <code>CreateEndpointConfig</code> API, and then create an endpoint with the
         * <code>CreateEndpoint</code> API. Amazon SageMaker then deploys all of the
         * containers that you defined for the model in the hosting environment. </p>
         * <p>For an example that calls this method when deploying a model to Amazon
         * SageMaker hosting services, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/ex1-deploy-model.html#ex1-deploy-model-boto">Deploy
         * the Model to Amazon SageMaker Hosting Services (AWS SDK for Python (Boto
         * 3)).</a> </p> <p>To run a batch transform using your model, you start a job with
         * the <code>CreateTransformJob</code> API. Amazon SageMaker uses your model and
         * your dataset to get inferences which are then saved to a specified S3
         * location.</p> <p>In the <code>CreateModel</code> request, you must define a
         * container with the <code>PrimaryContainer</code> parameter.</p> <p>In the
         * request, you also provide an IAM role that Amazon SageMaker can assume to access
         * model artifacts and docker image for deployment on ML compute hosting instances
         * or for batch transform jobs. In addition, you also use the IAM role to manage
         * permissions the inference code needs. For example, if the inference code access
         * any other AWS resources, you grant necessary permissions via this
         * role.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateModel">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateModelOutcome CreateModel(const Model::CreateModelRequest& request) const;

        /**
         * <p>Creates a model in Amazon SageMaker. In the request, you name the model and
         * describe a primary container. For the primary container, you specify the Docker
         * image that contains inference code, artifacts (from prior training), and a
         * custom environment map that the inference code uses when you deploy the model
         * for predictions.</p> <p>Use this API to create a model if you want to use Amazon
         * SageMaker hosting services or run a batch transform job.</p> <p>To host your
         * model, you create an endpoint configuration with the
         * <code>CreateEndpointConfig</code> API, and then create an endpoint with the
         * <code>CreateEndpoint</code> API. Amazon SageMaker then deploys all of the
         * containers that you defined for the model in the hosting environment. </p>
         * <p>For an example that calls this method when deploying a model to Amazon
         * SageMaker hosting services, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/ex1-deploy-model.html#ex1-deploy-model-boto">Deploy
         * the Model to Amazon SageMaker Hosting Services (AWS SDK for Python (Boto
         * 3)).</a> </p> <p>To run a batch transform using your model, you start a job with
         * the <code>CreateTransformJob</code> API. Amazon SageMaker uses your model and
         * your dataset to get inferences which are then saved to a specified S3
         * location.</p> <p>In the <code>CreateModel</code> request, you must define a
         * container with the <code>PrimaryContainer</code> parameter.</p> <p>In the
         * request, you also provide an IAM role that Amazon SageMaker can assume to access
         * model artifacts and docker image for deployment on ML compute hosting instances
         * or for batch transform jobs. In addition, you also use the IAM role to manage
         * permissions the inference code needs. For example, if the inference code access
         * any other AWS resources, you grant necessary permissions via this
         * role.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateModel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateModelOutcomeCallable CreateModelCallable(const Model::CreateModelRequest& request) const;

        /**
         * <p>Creates a model in Amazon SageMaker. In the request, you name the model and
         * describe a primary container. For the primary container, you specify the Docker
         * image that contains inference code, artifacts (from prior training), and a
         * custom environment map that the inference code uses when you deploy the model
         * for predictions.</p> <p>Use this API to create a model if you want to use Amazon
         * SageMaker hosting services or run a batch transform job.</p> <p>To host your
         * model, you create an endpoint configuration with the
         * <code>CreateEndpointConfig</code> API, and then create an endpoint with the
         * <code>CreateEndpoint</code> API. Amazon SageMaker then deploys all of the
         * containers that you defined for the model in the hosting environment. </p>
         * <p>For an example that calls this method when deploying a model to Amazon
         * SageMaker hosting services, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/ex1-deploy-model.html#ex1-deploy-model-boto">Deploy
         * the Model to Amazon SageMaker Hosting Services (AWS SDK for Python (Boto
         * 3)).</a> </p> <p>To run a batch transform using your model, you start a job with
         * the <code>CreateTransformJob</code> API. Amazon SageMaker uses your model and
         * your dataset to get inferences which are then saved to a specified S3
         * location.</p> <p>In the <code>CreateModel</code> request, you must define a
         * container with the <code>PrimaryContainer</code> parameter.</p> <p>In the
         * request, you also provide an IAM role that Amazon SageMaker can assume to access
         * model artifacts and docker image for deployment on ML compute hosting instances
         * or for batch transform jobs. In addition, you also use the IAM role to manage
         * permissions the inference code needs. For example, if the inference code access
         * any other AWS resources, you grant necessary permissions via this
         * role.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateModel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateModelAsync(const Model::CreateModelRequest& request, const CreateModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a model package that you can use to create Amazon SageMaker models or
         * list on AWS Marketplace. Buyers can subscribe to model packages listed on AWS
         * Marketplace to create models in Amazon SageMaker.</p> <p>To create a model
         * package by specifying a Docker container that contains your inference code and
         * the Amazon S3 location of your model artifacts, provide values for
         * <code>InferenceSpecification</code>. To create a model from an algorithm
         * resource that you created or subscribed to in AWS Marketplace, provide a value
         * for <code>SourceAlgorithmSpecification</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateModelPackage">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateModelPackageOutcome CreateModelPackage(const Model::CreateModelPackageRequest& request) const;

        /**
         * <p>Creates a model package that you can use to create Amazon SageMaker models or
         * list on AWS Marketplace. Buyers can subscribe to model packages listed on AWS
         * Marketplace to create models in Amazon SageMaker.</p> <p>To create a model
         * package by specifying a Docker container that contains your inference code and
         * the Amazon S3 location of your model artifacts, provide values for
         * <code>InferenceSpecification</code>. To create a model from an algorithm
         * resource that you created or subscribed to in AWS Marketplace, provide a value
         * for <code>SourceAlgorithmSpecification</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateModelPackage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateModelPackageOutcomeCallable CreateModelPackageCallable(const Model::CreateModelPackageRequest& request) const;

        /**
         * <p>Creates a model package that you can use to create Amazon SageMaker models or
         * list on AWS Marketplace. Buyers can subscribe to model packages listed on AWS
         * Marketplace to create models in Amazon SageMaker.</p> <p>To create a model
         * package by specifying a Docker container that contains your inference code and
         * the Amazon S3 location of your model artifacts, provide values for
         * <code>InferenceSpecification</code>. To create a model from an algorithm
         * resource that you created or subscribed to in AWS Marketplace, provide a value
         * for <code>SourceAlgorithmSpecification</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateModelPackage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateModelPackageAsync(const Model::CreateModelPackageRequest& request, const CreateModelPackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a schedule that regularly starts Amazon SageMaker Processing Jobs to
         * monitor the data captured for an Amazon SageMaker Endoint.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateMonitoringSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMonitoringScheduleOutcome CreateMonitoringSchedule(const Model::CreateMonitoringScheduleRequest& request) const;

        /**
         * <p>Creates a schedule that regularly starts Amazon SageMaker Processing Jobs to
         * monitor the data captured for an Amazon SageMaker Endoint.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateMonitoringSchedule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateMonitoringScheduleOutcomeCallable CreateMonitoringScheduleCallable(const Model::CreateMonitoringScheduleRequest& request) const;

        /**
         * <p>Creates a schedule that regularly starts Amazon SageMaker Processing Jobs to
         * monitor the data captured for an Amazon SageMaker Endoint.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateMonitoringSchedule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateMonitoringScheduleAsync(const Model::CreateMonitoringScheduleRequest& request, const CreateMonitoringScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an Amazon SageMaker notebook instance. A notebook instance is a
         * machine learning (ML) compute instance running on a Jupyter notebook. </p> <p>In
         * a <code>CreateNotebookInstance</code> request, specify the type of ML compute
         * instance that you want to run. Amazon SageMaker launches the instance, installs
         * common libraries that you can use to explore datasets for model training, and
         * attaches an ML storage volume to the notebook instance. </p> <p>Amazon SageMaker
         * also provides a set of example notebooks. Each notebook demonstrates how to use
         * Amazon SageMaker with a specific algorithm or with a machine learning framework.
         * </p> <p>After receiving the request, Amazon SageMaker does the following:</p>
         * <ol> <li> <p>Creates a network interface in the Amazon SageMaker VPC.</p> </li>
         * <li> <p>(Option) If you specified <code>SubnetId</code>, Amazon SageMaker
         * creates a network interface in your own VPC, which is inferred from the subnet
         * ID that you provide in the input. When creating this network interface, Amazon
         * SageMaker attaches the security group that you specified in the request to the
         * network interface that it creates in your VPC.</p> </li> <li> <p>Launches an EC2
         * instance of the type specified in the request in the Amazon SageMaker VPC. If
         * you specified <code>SubnetId</code> of your VPC, Amazon SageMaker specifies both
         * network interfaces when launching this instance. This enables inbound traffic
         * from your own VPC to the notebook instance, assuming that the security groups
         * allow it.</p> </li> </ol> <p>After creating the notebook instance, Amazon
         * SageMaker returns its Amazon Resource Name (ARN). You can't change the name of a
         * notebook instance after you create it.</p> <p>After Amazon SageMaker creates the
         * notebook instance, you can connect to the Jupyter server and work in Jupyter
         * notebooks. For example, you can write code to explore a dataset that you can use
         * for model training, train a model, host models by creating Amazon SageMaker
         * endpoints, and validate hosted models. </p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/how-it-works.html">How It
         * Works</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateNotebookInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNotebookInstanceOutcome CreateNotebookInstance(const Model::CreateNotebookInstanceRequest& request) const;

        /**
         * <p>Creates an Amazon SageMaker notebook instance. A notebook instance is a
         * machine learning (ML) compute instance running on a Jupyter notebook. </p> <p>In
         * a <code>CreateNotebookInstance</code> request, specify the type of ML compute
         * instance that you want to run. Amazon SageMaker launches the instance, installs
         * common libraries that you can use to explore datasets for model training, and
         * attaches an ML storage volume to the notebook instance. </p> <p>Amazon SageMaker
         * also provides a set of example notebooks. Each notebook demonstrates how to use
         * Amazon SageMaker with a specific algorithm or with a machine learning framework.
         * </p> <p>After receiving the request, Amazon SageMaker does the following:</p>
         * <ol> <li> <p>Creates a network interface in the Amazon SageMaker VPC.</p> </li>
         * <li> <p>(Option) If you specified <code>SubnetId</code>, Amazon SageMaker
         * creates a network interface in your own VPC, which is inferred from the subnet
         * ID that you provide in the input. When creating this network interface, Amazon
         * SageMaker attaches the security group that you specified in the request to the
         * network interface that it creates in your VPC.</p> </li> <li> <p>Launches an EC2
         * instance of the type specified in the request in the Amazon SageMaker VPC. If
         * you specified <code>SubnetId</code> of your VPC, Amazon SageMaker specifies both
         * network interfaces when launching this instance. This enables inbound traffic
         * from your own VPC to the notebook instance, assuming that the security groups
         * allow it.</p> </li> </ol> <p>After creating the notebook instance, Amazon
         * SageMaker returns its Amazon Resource Name (ARN). You can't change the name of a
         * notebook instance after you create it.</p> <p>After Amazon SageMaker creates the
         * notebook instance, you can connect to the Jupyter server and work in Jupyter
         * notebooks. For example, you can write code to explore a dataset that you can use
         * for model training, train a model, host models by creating Amazon SageMaker
         * endpoints, and validate hosted models. </p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/how-it-works.html">How It
         * Works</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateNotebookInstance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateNotebookInstanceOutcomeCallable CreateNotebookInstanceCallable(const Model::CreateNotebookInstanceRequest& request) const;

        /**
         * <p>Creates an Amazon SageMaker notebook instance. A notebook instance is a
         * machine learning (ML) compute instance running on a Jupyter notebook. </p> <p>In
         * a <code>CreateNotebookInstance</code> request, specify the type of ML compute
         * instance that you want to run. Amazon SageMaker launches the instance, installs
         * common libraries that you can use to explore datasets for model training, and
         * attaches an ML storage volume to the notebook instance. </p> <p>Amazon SageMaker
         * also provides a set of example notebooks. Each notebook demonstrates how to use
         * Amazon SageMaker with a specific algorithm or with a machine learning framework.
         * </p> <p>After receiving the request, Amazon SageMaker does the following:</p>
         * <ol> <li> <p>Creates a network interface in the Amazon SageMaker VPC.</p> </li>
         * <li> <p>(Option) If you specified <code>SubnetId</code>, Amazon SageMaker
         * creates a network interface in your own VPC, which is inferred from the subnet
         * ID that you provide in the input. When creating this network interface, Amazon
         * SageMaker attaches the security group that you specified in the request to the
         * network interface that it creates in your VPC.</p> </li> <li> <p>Launches an EC2
         * instance of the type specified in the request in the Amazon SageMaker VPC. If
         * you specified <code>SubnetId</code> of your VPC, Amazon SageMaker specifies both
         * network interfaces when launching this instance. This enables inbound traffic
         * from your own VPC to the notebook instance, assuming that the security groups
         * allow it.</p> </li> </ol> <p>After creating the notebook instance, Amazon
         * SageMaker returns its Amazon Resource Name (ARN). You can't change the name of a
         * notebook instance after you create it.</p> <p>After Amazon SageMaker creates the
         * notebook instance, you can connect to the Jupyter server and work in Jupyter
         * notebooks. For example, you can write code to explore a dataset that you can use
         * for model training, train a model, host models by creating Amazon SageMaker
         * endpoints, and validate hosted models. </p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/how-it-works.html">How It
         * Works</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateNotebookInstance">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateNotebookInstanceAsync(const Model::CreateNotebookInstanceRequest& request, const CreateNotebookInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a lifecycle configuration that you can associate with a notebook
         * instance. A <i>lifecycle configuration</i> is a collection of shell scripts that
         * run when you create or start a notebook instance.</p> <p>Each lifecycle
         * configuration script has a limit of 16384 characters.</p> <p>The value of the
         * <code>$PATH</code> environment variable that is available to both scripts is
         * <code>/sbin:bin:/usr/sbin:/usr/bin</code>.</p> <p>View CloudWatch Logs for
         * notebook instance lifecycle configurations in log group
         * <code>/aws/sagemaker/NotebookInstances</code> in log stream
         * <code>[notebook-instance-name]/[LifecycleConfigHook]</code>.</p> <p>Lifecycle
         * configuration scripts cannot run for longer than 5 minutes. If a script runs for
         * longer than 5 minutes, it fails and the notebook instance is not created or
         * started.</p> <p>For information about notebook instance lifestyle
         * configurations, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/notebook-lifecycle-config.html">Step
         * 2.1: (Optional) Customize a Notebook Instance</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateNotebookInstanceLifecycleConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNotebookInstanceLifecycleConfigOutcome CreateNotebookInstanceLifecycleConfig(const Model::CreateNotebookInstanceLifecycleConfigRequest& request) const;

        /**
         * <p>Creates a lifecycle configuration that you can associate with a notebook
         * instance. A <i>lifecycle configuration</i> is a collection of shell scripts that
         * run when you create or start a notebook instance.</p> <p>Each lifecycle
         * configuration script has a limit of 16384 characters.</p> <p>The value of the
         * <code>$PATH</code> environment variable that is available to both scripts is
         * <code>/sbin:bin:/usr/sbin:/usr/bin</code>.</p> <p>View CloudWatch Logs for
         * notebook instance lifecycle configurations in log group
         * <code>/aws/sagemaker/NotebookInstances</code> in log stream
         * <code>[notebook-instance-name]/[LifecycleConfigHook]</code>.</p> <p>Lifecycle
         * configuration scripts cannot run for longer than 5 minutes. If a script runs for
         * longer than 5 minutes, it fails and the notebook instance is not created or
         * started.</p> <p>For information about notebook instance lifestyle
         * configurations, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/notebook-lifecycle-config.html">Step
         * 2.1: (Optional) Customize a Notebook Instance</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateNotebookInstanceLifecycleConfig">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateNotebookInstanceLifecycleConfigOutcomeCallable CreateNotebookInstanceLifecycleConfigCallable(const Model::CreateNotebookInstanceLifecycleConfigRequest& request) const;

        /**
         * <p>Creates a lifecycle configuration that you can associate with a notebook
         * instance. A <i>lifecycle configuration</i> is a collection of shell scripts that
         * run when you create or start a notebook instance.</p> <p>Each lifecycle
         * configuration script has a limit of 16384 characters.</p> <p>The value of the
         * <code>$PATH</code> environment variable that is available to both scripts is
         * <code>/sbin:bin:/usr/sbin:/usr/bin</code>.</p> <p>View CloudWatch Logs for
         * notebook instance lifecycle configurations in log group
         * <code>/aws/sagemaker/NotebookInstances</code> in log stream
         * <code>[notebook-instance-name]/[LifecycleConfigHook]</code>.</p> <p>Lifecycle
         * configuration scripts cannot run for longer than 5 minutes. If a script runs for
         * longer than 5 minutes, it fails and the notebook instance is not created or
         * started.</p> <p>For information about notebook instance lifestyle
         * configurations, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/notebook-lifecycle-config.html">Step
         * 2.1: (Optional) Customize a Notebook Instance</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateNotebookInstanceLifecycleConfig">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateNotebookInstanceLifecycleConfigAsync(const Model::CreateNotebookInstanceLifecycleConfigRequest& request, const CreateNotebookInstanceLifecycleConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a URL for a specified UserProfile in a Domain. When accessed in a web
         * browser, the user will be automatically signed in to Amazon SageMaker Studio,
         * and granted access to all of the Apps and files associated with the Domain's
         * Amazon Elastic File System (EFS) volume. This operation can only be called when
         * the authentication mode equals IAM. </p>  <p>The URL that you get from a
         * call to <code>CreatePresignedDomainUrl</code> is valid only for 5 minutes. If
         * you try to use the URL after the 5-minute limit expires, you are directed to the
         * AWS console sign-in page.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreatePresignedDomainUrl">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePresignedDomainUrlOutcome CreatePresignedDomainUrl(const Model::CreatePresignedDomainUrlRequest& request) const;

        /**
         * <p>Creates a URL for a specified UserProfile in a Domain. When accessed in a web
         * browser, the user will be automatically signed in to Amazon SageMaker Studio,
         * and granted access to all of the Apps and files associated with the Domain's
         * Amazon Elastic File System (EFS) volume. This operation can only be called when
         * the authentication mode equals IAM. </p>  <p>The URL that you get from a
         * call to <code>CreatePresignedDomainUrl</code> is valid only for 5 minutes. If
         * you try to use the URL after the 5-minute limit expires, you are directed to the
         * AWS console sign-in page.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreatePresignedDomainUrl">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePresignedDomainUrlOutcomeCallable CreatePresignedDomainUrlCallable(const Model::CreatePresignedDomainUrlRequest& request) const;

        /**
         * <p>Creates a URL for a specified UserProfile in a Domain. When accessed in a web
         * browser, the user will be automatically signed in to Amazon SageMaker Studio,
         * and granted access to all of the Apps and files associated with the Domain's
         * Amazon Elastic File System (EFS) volume. This operation can only be called when
         * the authentication mode equals IAM. </p>  <p>The URL that you get from a
         * call to <code>CreatePresignedDomainUrl</code> is valid only for 5 minutes. If
         * you try to use the URL after the 5-minute limit expires, you are directed to the
         * AWS console sign-in page.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreatePresignedDomainUrl">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePresignedDomainUrlAsync(const Model::CreatePresignedDomainUrlRequest& request, const CreatePresignedDomainUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a URL that you can use to connect to the Jupyter server from a
         * notebook instance. In the Amazon SageMaker console, when you choose
         * <code>Open</code> next to a notebook instance, Amazon SageMaker opens a new tab
         * showing the Jupyter server home page from the notebook instance. The console
         * uses this API to get the URL and show the page.</p> <p> The IAM role or user
         * used to call this API defines the permissions to access the notebook instance.
         * Once the presigned URL is created, no additional permission is required to
         * access this URL. IAM authorization policies for this API are also enforced for
         * every HTTP request and WebSocket frame that attempts to connect to the notebook
         * instance.</p> <p>You can restrict access to this API and to the URL that it
         * returns to a list of IP addresses that you specify. Use the
         * <code>NotIpAddress</code> condition operator and the <code>aws:SourceIP</code>
         * condition context key to specify the list of IP addresses that you want to have
         * access to the notebook instance. For more information, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/security_iam_id-based-policy-examples.html#nbi-ip-filter">Limit
         * Access to a Notebook Instance by IP Address</a>.</p>  <p>The URL that you
         * get from a call to <a>CreatePresignedNotebookInstanceUrl</a> is valid only for 5
         * minutes. If you try to use the URL after the 5-minute limit expires, you are
         * directed to the AWS console sign-in page.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreatePresignedNotebookInstanceUrl">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePresignedNotebookInstanceUrlOutcome CreatePresignedNotebookInstanceUrl(const Model::CreatePresignedNotebookInstanceUrlRequest& request) const;

        /**
         * <p>Returns a URL that you can use to connect to the Jupyter server from a
         * notebook instance. In the Amazon SageMaker console, when you choose
         * <code>Open</code> next to a notebook instance, Amazon SageMaker opens a new tab
         * showing the Jupyter server home page from the notebook instance. The console
         * uses this API to get the URL and show the page.</p> <p> The IAM role or user
         * used to call this API defines the permissions to access the notebook instance.
         * Once the presigned URL is created, no additional permission is required to
         * access this URL. IAM authorization policies for this API are also enforced for
         * every HTTP request and WebSocket frame that attempts to connect to the notebook
         * instance.</p> <p>You can restrict access to this API and to the URL that it
         * returns to a list of IP addresses that you specify. Use the
         * <code>NotIpAddress</code> condition operator and the <code>aws:SourceIP</code>
         * condition context key to specify the list of IP addresses that you want to have
         * access to the notebook instance. For more information, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/security_iam_id-based-policy-examples.html#nbi-ip-filter">Limit
         * Access to a Notebook Instance by IP Address</a>.</p>  <p>The URL that you
         * get from a call to <a>CreatePresignedNotebookInstanceUrl</a> is valid only for 5
         * minutes. If you try to use the URL after the 5-minute limit expires, you are
         * directed to the AWS console sign-in page.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreatePresignedNotebookInstanceUrl">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePresignedNotebookInstanceUrlOutcomeCallable CreatePresignedNotebookInstanceUrlCallable(const Model::CreatePresignedNotebookInstanceUrlRequest& request) const;

        /**
         * <p>Returns a URL that you can use to connect to the Jupyter server from a
         * notebook instance. In the Amazon SageMaker console, when you choose
         * <code>Open</code> next to a notebook instance, Amazon SageMaker opens a new tab
         * showing the Jupyter server home page from the notebook instance. The console
         * uses this API to get the URL and show the page.</p> <p> The IAM role or user
         * used to call this API defines the permissions to access the notebook instance.
         * Once the presigned URL is created, no additional permission is required to
         * access this URL. IAM authorization policies for this API are also enforced for
         * every HTTP request and WebSocket frame that attempts to connect to the notebook
         * instance.</p> <p>You can restrict access to this API and to the URL that it
         * returns to a list of IP addresses that you specify. Use the
         * <code>NotIpAddress</code> condition operator and the <code>aws:SourceIP</code>
         * condition context key to specify the list of IP addresses that you want to have
         * access to the notebook instance. For more information, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/security_iam_id-based-policy-examples.html#nbi-ip-filter">Limit
         * Access to a Notebook Instance by IP Address</a>.</p>  <p>The URL that you
         * get from a call to <a>CreatePresignedNotebookInstanceUrl</a> is valid only for 5
         * minutes. If you try to use the URL after the 5-minute limit expires, you are
         * directed to the AWS console sign-in page.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreatePresignedNotebookInstanceUrl">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePresignedNotebookInstanceUrlAsync(const Model::CreatePresignedNotebookInstanceUrlRequest& request, const CreatePresignedNotebookInstanceUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a processing job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateProcessingJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProcessingJobOutcome CreateProcessingJob(const Model::CreateProcessingJobRequest& request) const;

        /**
         * <p>Creates a processing job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateProcessingJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateProcessingJobOutcomeCallable CreateProcessingJobCallable(const Model::CreateProcessingJobRequest& request) const;

        /**
         * <p>Creates a processing job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateProcessingJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateProcessingJobAsync(const Model::CreateProcessingJobRequest& request, const CreateProcessingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a model training job. After training completes, Amazon SageMaker saves
         * the resulting model artifacts to an Amazon S3 location that you specify. </p>
         * <p>If you choose to host your model using Amazon SageMaker hosting services, you
         * can use the resulting model artifacts as part of the model. You can also use the
         * artifacts in a machine learning service other than Amazon SageMaker, provided
         * that you know how to use them for inferences. </p> <p>In the request body, you
         * provide the following: </p> <ul> <li> <p> <code>AlgorithmSpecification</code> -
         * Identifies the training algorithm to use. </p> </li> <li> <p>
         * <code>HyperParameters</code> - Specify these algorithm-specific parameters to
         * enable the estimation of model parameters during training. Hyperparameters can
         * be tuned to optimize this learning process. For a list of hyperparameters for
         * each training algorithm provided by Amazon SageMaker, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/algos.html">Algorithms</a>.
         * </p> </li> <li> <p> <code>InputDataConfig</code> - Describes the training
         * dataset and the Amazon S3, EFS, or FSx location where it is stored.</p> </li>
         * <li> <p> <code>OutputDataConfig</code> - Identifies the Amazon S3 bucket where
         * you want Amazon SageMaker to save the results of model training. </p> <p/> </li>
         * <li> <p> <code>ResourceConfig</code> - Identifies the resources, ML compute
         * instances, and ML storage volumes to deploy for model training. In distributed
         * training, you specify more than one instance. </p> </li> <li> <p>
         * <code>EnableManagedSpotTraining</code> - Optimize the cost of training machine
         * learning models by up to 80% by using Amazon EC2 Spot instances. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/model-managed-spot-training.html">Managed
         * Spot Training</a>. </p> </li> <li> <p> <code>RoleARN</code> - The Amazon
         * Resource Number (ARN) that Amazon SageMaker assumes to perform tasks on your
         * behalf during model training. You must grant this role the necessary permissions
         * so that Amazon SageMaker can successfully complete model training. </p> </li>
         * <li> <p> <code>StoppingCondition</code> - To help cap training costs, use
         * <code>MaxRuntimeInSeconds</code> to set a time limit for training. Use
         * <code>MaxWaitTimeInSeconds</code> to specify how long you are willing to wait
         * for a managed spot training job to complete. </p> </li> </ul> <p> For more
         * information about Amazon SageMaker, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/how-it-works.html">How It
         * Works</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateTrainingJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTrainingJobOutcome CreateTrainingJob(const Model::CreateTrainingJobRequest& request) const;

        /**
         * <p>Starts a model training job. After training completes, Amazon SageMaker saves
         * the resulting model artifacts to an Amazon S3 location that you specify. </p>
         * <p>If you choose to host your model using Amazon SageMaker hosting services, you
         * can use the resulting model artifacts as part of the model. You can also use the
         * artifacts in a machine learning service other than Amazon SageMaker, provided
         * that you know how to use them for inferences. </p> <p>In the request body, you
         * provide the following: </p> <ul> <li> <p> <code>AlgorithmSpecification</code> -
         * Identifies the training algorithm to use. </p> </li> <li> <p>
         * <code>HyperParameters</code> - Specify these algorithm-specific parameters to
         * enable the estimation of model parameters during training. Hyperparameters can
         * be tuned to optimize this learning process. For a list of hyperparameters for
         * each training algorithm provided by Amazon SageMaker, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/algos.html">Algorithms</a>.
         * </p> </li> <li> <p> <code>InputDataConfig</code> - Describes the training
         * dataset and the Amazon S3, EFS, or FSx location where it is stored.</p> </li>
         * <li> <p> <code>OutputDataConfig</code> - Identifies the Amazon S3 bucket where
         * you want Amazon SageMaker to save the results of model training. </p> <p/> </li>
         * <li> <p> <code>ResourceConfig</code> - Identifies the resources, ML compute
         * instances, and ML storage volumes to deploy for model training. In distributed
         * training, you specify more than one instance. </p> </li> <li> <p>
         * <code>EnableManagedSpotTraining</code> - Optimize the cost of training machine
         * learning models by up to 80% by using Amazon EC2 Spot instances. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/model-managed-spot-training.html">Managed
         * Spot Training</a>. </p> </li> <li> <p> <code>RoleARN</code> - The Amazon
         * Resource Number (ARN) that Amazon SageMaker assumes to perform tasks on your
         * behalf during model training. You must grant this role the necessary permissions
         * so that Amazon SageMaker can successfully complete model training. </p> </li>
         * <li> <p> <code>StoppingCondition</code> - To help cap training costs, use
         * <code>MaxRuntimeInSeconds</code> to set a time limit for training. Use
         * <code>MaxWaitTimeInSeconds</code> to specify how long you are willing to wait
         * for a managed spot training job to complete. </p> </li> </ul> <p> For more
         * information about Amazon SageMaker, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/how-it-works.html">How It
         * Works</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateTrainingJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTrainingJobOutcomeCallable CreateTrainingJobCallable(const Model::CreateTrainingJobRequest& request) const;

        /**
         * <p>Starts a model training job. After training completes, Amazon SageMaker saves
         * the resulting model artifacts to an Amazon S3 location that you specify. </p>
         * <p>If you choose to host your model using Amazon SageMaker hosting services, you
         * can use the resulting model artifacts as part of the model. You can also use the
         * artifacts in a machine learning service other than Amazon SageMaker, provided
         * that you know how to use them for inferences. </p> <p>In the request body, you
         * provide the following: </p> <ul> <li> <p> <code>AlgorithmSpecification</code> -
         * Identifies the training algorithm to use. </p> </li> <li> <p>
         * <code>HyperParameters</code> - Specify these algorithm-specific parameters to
         * enable the estimation of model parameters during training. Hyperparameters can
         * be tuned to optimize this learning process. For a list of hyperparameters for
         * each training algorithm provided by Amazon SageMaker, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/algos.html">Algorithms</a>.
         * </p> </li> <li> <p> <code>InputDataConfig</code> - Describes the training
         * dataset and the Amazon S3, EFS, or FSx location where it is stored.</p> </li>
         * <li> <p> <code>OutputDataConfig</code> - Identifies the Amazon S3 bucket where
         * you want Amazon SageMaker to save the results of model training. </p> <p/> </li>
         * <li> <p> <code>ResourceConfig</code> - Identifies the resources, ML compute
         * instances, and ML storage volumes to deploy for model training. In distributed
         * training, you specify more than one instance. </p> </li> <li> <p>
         * <code>EnableManagedSpotTraining</code> - Optimize the cost of training machine
         * learning models by up to 80% by using Amazon EC2 Spot instances. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/model-managed-spot-training.html">Managed
         * Spot Training</a>. </p> </li> <li> <p> <code>RoleARN</code> - The Amazon
         * Resource Number (ARN) that Amazon SageMaker assumes to perform tasks on your
         * behalf during model training. You must grant this role the necessary permissions
         * so that Amazon SageMaker can successfully complete model training. </p> </li>
         * <li> <p> <code>StoppingCondition</code> - To help cap training costs, use
         * <code>MaxRuntimeInSeconds</code> to set a time limit for training. Use
         * <code>MaxWaitTimeInSeconds</code> to specify how long you are willing to wait
         * for a managed spot training job to complete. </p> </li> </ul> <p> For more
         * information about Amazon SageMaker, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/how-it-works.html">How It
         * Works</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateTrainingJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTrainingJobAsync(const Model::CreateTrainingJobRequest& request, const CreateTrainingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a transform job. A transform job uses a trained model to get
         * inferences on a dataset and saves these results to an Amazon S3 location that
         * you specify.</p> <p>To perform batch transformations, you create a transform job
         * and use the data that you have readily available.</p> <p>In the request body,
         * you provide the following:</p> <ul> <li> <p> <code>TransformJobName</code> -
         * Identifies the transform job. The name must be unique within an AWS Region in an
         * AWS account.</p> </li> <li> <p> <code>ModelName</code> - Identifies the model to
         * use. <code>ModelName</code> must be the name of an existing Amazon SageMaker
         * model in the same AWS Region and AWS account. For information on creating a
         * model, see <a>CreateModel</a>.</p> </li> <li> <p> <code>TransformInput</code> -
         * Describes the dataset to be transformed and the Amazon S3 location where it is
         * stored.</p> </li> <li> <p> <code>TransformOutput</code> - Identifies the Amazon
         * S3 location where you want Amazon SageMaker to save the results from the
         * transform job.</p> </li> <li> <p> <code>TransformResources</code> - Identifies
         * the ML compute instances for the transform job.</p> </li> </ul> <p>For more
         * information about how batch transformation works, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/batch-transform.html">Batch
         * Transform</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateTransformJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTransformJobOutcome CreateTransformJob(const Model::CreateTransformJobRequest& request) const;

        /**
         * <p>Starts a transform job. A transform job uses a trained model to get
         * inferences on a dataset and saves these results to an Amazon S3 location that
         * you specify.</p> <p>To perform batch transformations, you create a transform job
         * and use the data that you have readily available.</p> <p>In the request body,
         * you provide the following:</p> <ul> <li> <p> <code>TransformJobName</code> -
         * Identifies the transform job. The name must be unique within an AWS Region in an
         * AWS account.</p> </li> <li> <p> <code>ModelName</code> - Identifies the model to
         * use. <code>ModelName</code> must be the name of an existing Amazon SageMaker
         * model in the same AWS Region and AWS account. For information on creating a
         * model, see <a>CreateModel</a>.</p> </li> <li> <p> <code>TransformInput</code> -
         * Describes the dataset to be transformed and the Amazon S3 location where it is
         * stored.</p> </li> <li> <p> <code>TransformOutput</code> - Identifies the Amazon
         * S3 location where you want Amazon SageMaker to save the results from the
         * transform job.</p> </li> <li> <p> <code>TransformResources</code> - Identifies
         * the ML compute instances for the transform job.</p> </li> </ul> <p>For more
         * information about how batch transformation works, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/batch-transform.html">Batch
         * Transform</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateTransformJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTransformJobOutcomeCallable CreateTransformJobCallable(const Model::CreateTransformJobRequest& request) const;

        /**
         * <p>Starts a transform job. A transform job uses a trained model to get
         * inferences on a dataset and saves these results to an Amazon S3 location that
         * you specify.</p> <p>To perform batch transformations, you create a transform job
         * and use the data that you have readily available.</p> <p>In the request body,
         * you provide the following:</p> <ul> <li> <p> <code>TransformJobName</code> -
         * Identifies the transform job. The name must be unique within an AWS Region in an
         * AWS account.</p> </li> <li> <p> <code>ModelName</code> - Identifies the model to
         * use. <code>ModelName</code> must be the name of an existing Amazon SageMaker
         * model in the same AWS Region and AWS account. For information on creating a
         * model, see <a>CreateModel</a>.</p> </li> <li> <p> <code>TransformInput</code> -
         * Describes the dataset to be transformed and the Amazon S3 location where it is
         * stored.</p> </li> <li> <p> <code>TransformOutput</code> - Identifies the Amazon
         * S3 location where you want Amazon SageMaker to save the results from the
         * transform job.</p> </li> <li> <p> <code>TransformResources</code> - Identifies
         * the ML compute instances for the transform job.</p> </li> </ul> <p>For more
         * information about how batch transformation works, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/batch-transform.html">Batch
         * Transform</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateTransformJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTransformJobAsync(const Model::CreateTransformJobRequest& request, const CreateTransformJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an Amazon SageMaker <i>trial</i>. A trial is a set of steps called
         * <i>trial components</i> that produce a machine learning model. A trial is part
         * of a single Amazon SageMaker <i>experiment</i>.</p> <p>When you use Amazon
         * SageMaker Studio or the Amazon SageMaker Python SDK, all experiments, trials,
         * and trial components are automatically tracked, logged, and indexed. When you
         * use the AWS SDK for Python (Boto), you must use the logging APIs provided by the
         * SDK.</p> <p>You can add tags to a trial and then use the <a>Search</a> API to
         * search for the tags.</p> <p>To get a list of all your trials, call the
         * <a>ListTrials</a> API. To view a trial's properties, call the
         * <a>DescribeTrial</a> API. To create a trial component, call the
         * <a>CreateTrialComponent</a> API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateTrial">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTrialOutcome CreateTrial(const Model::CreateTrialRequest& request) const;

        /**
         * <p>Creates an Amazon SageMaker <i>trial</i>. A trial is a set of steps called
         * <i>trial components</i> that produce a machine learning model. A trial is part
         * of a single Amazon SageMaker <i>experiment</i>.</p> <p>When you use Amazon
         * SageMaker Studio or the Amazon SageMaker Python SDK, all experiments, trials,
         * and trial components are automatically tracked, logged, and indexed. When you
         * use the AWS SDK for Python (Boto), you must use the logging APIs provided by the
         * SDK.</p> <p>You can add tags to a trial and then use the <a>Search</a> API to
         * search for the tags.</p> <p>To get a list of all your trials, call the
         * <a>ListTrials</a> API. To view a trial's properties, call the
         * <a>DescribeTrial</a> API. To create a trial component, call the
         * <a>CreateTrialComponent</a> API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateTrial">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTrialOutcomeCallable CreateTrialCallable(const Model::CreateTrialRequest& request) const;

        /**
         * <p>Creates an Amazon SageMaker <i>trial</i>. A trial is a set of steps called
         * <i>trial components</i> that produce a machine learning model. A trial is part
         * of a single Amazon SageMaker <i>experiment</i>.</p> <p>When you use Amazon
         * SageMaker Studio or the Amazon SageMaker Python SDK, all experiments, trials,
         * and trial components are automatically tracked, logged, and indexed. When you
         * use the AWS SDK for Python (Boto), you must use the logging APIs provided by the
         * SDK.</p> <p>You can add tags to a trial and then use the <a>Search</a> API to
         * search for the tags.</p> <p>To get a list of all your trials, call the
         * <a>ListTrials</a> API. To view a trial's properties, call the
         * <a>DescribeTrial</a> API. To create a trial component, call the
         * <a>CreateTrialComponent</a> API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateTrial">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTrialAsync(const Model::CreateTrialRequest& request, const CreateTrialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a <i>trial component</i>, which is a stage of a machine learning
         * <i>trial</i>. A trial is composed of one or more trial components. A trial
         * component can be used in multiple trials.</p> <p>Trial components include
         * pre-processing jobs, training jobs, and batch transform jobs.</p> <p>When you
         * use Amazon SageMaker Studio or the Amazon SageMaker Python SDK, all experiments,
         * trials, and trial components are automatically tracked, logged, and indexed.
         * When you use the AWS SDK for Python (Boto), you must use the logging APIs
         * provided by the SDK.</p> <p>You can add tags to a trial component and then use
         * the <a>Search</a> API to search for the tags.</p>  <p>
         * <code>CreateTrialComponent</code> can only be invoked from within an Amazon
         * SageMaker managed environment. This includes Amazon SageMaker training jobs,
         * processing jobs, transform jobs, and Amazon SageMaker notebooks. A call to
         * <code>CreateTrialComponent</code> from outside one of these environments results
         * in an error.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateTrialComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTrialComponentOutcome CreateTrialComponent(const Model::CreateTrialComponentRequest& request) const;

        /**
         * <p>Creates a <i>trial component</i>, which is a stage of a machine learning
         * <i>trial</i>. A trial is composed of one or more trial components. A trial
         * component can be used in multiple trials.</p> <p>Trial components include
         * pre-processing jobs, training jobs, and batch transform jobs.</p> <p>When you
         * use Amazon SageMaker Studio or the Amazon SageMaker Python SDK, all experiments,
         * trials, and trial components are automatically tracked, logged, and indexed.
         * When you use the AWS SDK for Python (Boto), you must use the logging APIs
         * provided by the SDK.</p> <p>You can add tags to a trial component and then use
         * the <a>Search</a> API to search for the tags.</p>  <p>
         * <code>CreateTrialComponent</code> can only be invoked from within an Amazon
         * SageMaker managed environment. This includes Amazon SageMaker training jobs,
         * processing jobs, transform jobs, and Amazon SageMaker notebooks. A call to
         * <code>CreateTrialComponent</code> from outside one of these environments results
         * in an error.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateTrialComponent">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTrialComponentOutcomeCallable CreateTrialComponentCallable(const Model::CreateTrialComponentRequest& request) const;

        /**
         * <p>Creates a <i>trial component</i>, which is a stage of a machine learning
         * <i>trial</i>. A trial is composed of one or more trial components. A trial
         * component can be used in multiple trials.</p> <p>Trial components include
         * pre-processing jobs, training jobs, and batch transform jobs.</p> <p>When you
         * use Amazon SageMaker Studio or the Amazon SageMaker Python SDK, all experiments,
         * trials, and trial components are automatically tracked, logged, and indexed.
         * When you use the AWS SDK for Python (Boto), you must use the logging APIs
         * provided by the SDK.</p> <p>You can add tags to a trial component and then use
         * the <a>Search</a> API to search for the tags.</p>  <p>
         * <code>CreateTrialComponent</code> can only be invoked from within an Amazon
         * SageMaker managed environment. This includes Amazon SageMaker training jobs,
         * processing jobs, transform jobs, and Amazon SageMaker notebooks. A call to
         * <code>CreateTrialComponent</code> from outside one of these environments results
         * in an error.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateTrialComponent">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTrialComponentAsync(const Model::CreateTrialComponentRequest& request, const CreateTrialComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a user profile. A user profile represents a single user within a
         * domain, and is the main way to reference a "person" for the purposes of sharing,
         * reporting, and other user-oriented features. This entity is created when a user
         * onboards to Amazon SageMaker Studio. If an administrator invites a person by
         * email or imports them from SSO, a user profile is automatically created. A user
         * profile is the primary holder of settings for an individual user and has a
         * reference to the user's private Amazon Elastic File System (EFS) home directory.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateUserProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUserProfileOutcome CreateUserProfile(const Model::CreateUserProfileRequest& request) const;

        /**
         * <p>Creates a user profile. A user profile represents a single user within a
         * domain, and is the main way to reference a "person" for the purposes of sharing,
         * reporting, and other user-oriented features. This entity is created when a user
         * onboards to Amazon SageMaker Studio. If an administrator invites a person by
         * email or imports them from SSO, a user profile is automatically created. A user
         * profile is the primary holder of settings for an individual user and has a
         * reference to the user's private Amazon Elastic File System (EFS) home directory.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateUserProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateUserProfileOutcomeCallable CreateUserProfileCallable(const Model::CreateUserProfileRequest& request) const;

        /**
         * <p>Creates a user profile. A user profile represents a single user within a
         * domain, and is the main way to reference a "person" for the purposes of sharing,
         * reporting, and other user-oriented features. This entity is created when a user
         * onboards to Amazon SageMaker Studio. If an administrator invites a person by
         * email or imports them from SSO, a user profile is automatically created. A user
         * profile is the primary holder of settings for an individual user and has a
         * reference to the user's private Amazon Elastic File System (EFS) home directory.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateUserProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateUserProfileAsync(const Model::CreateUserProfileRequest& request, const CreateUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Use this operation to create a workforce. This operation will return an error
         * if a workforce already exists in the AWS Region that you specify. You can only
         * create one workforce in each AWS Region per AWS account.</p> <p>If you want to
         * create a new workforce in an AWS Region where a workforce already exists, use
         * the API operation to delete the existing workforce and then use
         * <code>CreateWorkforce</code> to create a new workforce.</p> <p>To create a
         * private workforce using Amazon Cognito, you must specify a Cognito user pool in
         * <code>CognitoConfig</code>. You can also create an Amazon Cognito workforce
         * using the Amazon SageMaker console. For more information, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-workforce-create-private.html">
         * Create a Private Workforce (Amazon Cognito)</a>.</p> <p>To create a private
         * workforce using your own OIDC Identity Provider (IdP), specify your IdP
         * configuration in <code>OidcConfig</code>. Your OIDC IdP must support
         * <i>groups</i> because groups are used by Ground Truth and Amazon A2I to create
         * work teams. For more information, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-workforce-create-private-oidc.html">
         * Create a Private Workforce (OIDC IdP)</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateWorkforce">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorkforceOutcome CreateWorkforce(const Model::CreateWorkforceRequest& request) const;

        /**
         * <p>Use this operation to create a workforce. This operation will return an error
         * if a workforce already exists in the AWS Region that you specify. You can only
         * create one workforce in each AWS Region per AWS account.</p> <p>If you want to
         * create a new workforce in an AWS Region where a workforce already exists, use
         * the API operation to delete the existing workforce and then use
         * <code>CreateWorkforce</code> to create a new workforce.</p> <p>To create a
         * private workforce using Amazon Cognito, you must specify a Cognito user pool in
         * <code>CognitoConfig</code>. You can also create an Amazon Cognito workforce
         * using the Amazon SageMaker console. For more information, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-workforce-create-private.html">
         * Create a Private Workforce (Amazon Cognito)</a>.</p> <p>To create a private
         * workforce using your own OIDC Identity Provider (IdP), specify your IdP
         * configuration in <code>OidcConfig</code>. Your OIDC IdP must support
         * <i>groups</i> because groups are used by Ground Truth and Amazon A2I to create
         * work teams. For more information, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-workforce-create-private-oidc.html">
         * Create a Private Workforce (OIDC IdP)</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateWorkforce">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateWorkforceOutcomeCallable CreateWorkforceCallable(const Model::CreateWorkforceRequest& request) const;

        /**
         * <p>Use this operation to create a workforce. This operation will return an error
         * if a workforce already exists in the AWS Region that you specify. You can only
         * create one workforce in each AWS Region per AWS account.</p> <p>If you want to
         * create a new workforce in an AWS Region where a workforce already exists, use
         * the API operation to delete the existing workforce and then use
         * <code>CreateWorkforce</code> to create a new workforce.</p> <p>To create a
         * private workforce using Amazon Cognito, you must specify a Cognito user pool in
         * <code>CognitoConfig</code>. You can also create an Amazon Cognito workforce
         * using the Amazon SageMaker console. For more information, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-workforce-create-private.html">
         * Create a Private Workforce (Amazon Cognito)</a>.</p> <p>To create a private
         * workforce using your own OIDC Identity Provider (IdP), specify your IdP
         * configuration in <code>OidcConfig</code>. Your OIDC IdP must support
         * <i>groups</i> because groups are used by Ground Truth and Amazon A2I to create
         * work teams. For more information, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-workforce-create-private-oidc.html">
         * Create a Private Workforce (OIDC IdP)</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateWorkforce">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateWorkforceAsync(const Model::CreateWorkforceRequest& request, const CreateWorkforceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new work team for labeling your data. A work team is defined by one
         * or more Amazon Cognito user pools. You must first create the user pools before
         * you can create a work team.</p> <p>You cannot create more than 25 work teams in
         * an account and region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateWorkteam">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorkteamOutcome CreateWorkteam(const Model::CreateWorkteamRequest& request) const;

        /**
         * <p>Creates a new work team for labeling your data. A work team is defined by one
         * or more Amazon Cognito user pools. You must first create the user pools before
         * you can create a work team.</p> <p>You cannot create more than 25 work teams in
         * an account and region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateWorkteam">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateWorkteamOutcomeCallable CreateWorkteamCallable(const Model::CreateWorkteamRequest& request) const;

        /**
         * <p>Creates a new work team for labeling your data. A work team is defined by one
         * or more Amazon Cognito user pools. You must first create the user pools before
         * you can create a work team.</p> <p>You cannot create more than 25 work teams in
         * an account and region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateWorkteam">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateWorkteamAsync(const Model::CreateWorkteamRequest& request, const CreateWorkteamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified algorithm from your account.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteAlgorithm">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAlgorithmOutcome DeleteAlgorithm(const Model::DeleteAlgorithmRequest& request) const;

        /**
         * <p>Removes the specified algorithm from your account.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteAlgorithm">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAlgorithmOutcomeCallable DeleteAlgorithmCallable(const Model::DeleteAlgorithmRequest& request) const;

        /**
         * <p>Removes the specified algorithm from your account.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteAlgorithm">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAlgorithmAsync(const Model::DeleteAlgorithmRequest& request, const DeleteAlgorithmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Used to stop and delete an app.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteApp">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAppOutcome DeleteApp(const Model::DeleteAppRequest& request) const;

        /**
         * <p>Used to stop and delete an app.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteApp">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAppOutcomeCallable DeleteAppCallable(const Model::DeleteAppRequest& request) const;

        /**
         * <p>Used to stop and delete an app.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteApp">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAppAsync(const Model::DeleteAppRequest& request, const DeleteAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an AppImageConfig.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteAppImageConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAppImageConfigOutcome DeleteAppImageConfig(const Model::DeleteAppImageConfigRequest& request) const;

        /**
         * <p>Deletes an AppImageConfig.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteAppImageConfig">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAppImageConfigOutcomeCallable DeleteAppImageConfigCallable(const Model::DeleteAppImageConfigRequest& request) const;

        /**
         * <p>Deletes an AppImageConfig.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteAppImageConfig">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAppImageConfigAsync(const Model::DeleteAppImageConfigRequest& request, const DeleteAppImageConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified Git repository from your account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteCodeRepository">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCodeRepositoryOutcome DeleteCodeRepository(const Model::DeleteCodeRepositoryRequest& request) const;

        /**
         * <p>Deletes the specified Git repository from your account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteCodeRepository">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCodeRepositoryOutcomeCallable DeleteCodeRepositoryCallable(const Model::DeleteCodeRepositoryRequest& request) const;

        /**
         * <p>Deletes the specified Git repository from your account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteCodeRepository">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCodeRepositoryAsync(const Model::DeleteCodeRepositoryRequest& request, const DeleteCodeRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Used to delete a domain. If you onboarded with IAM mode, you will need to
         * delete your domain to onboard again using SSO. Use with caution. All of the
         * members of the domain will lose access to their EFS volume, including data,
         * notebooks, and other artifacts. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDomainOutcome DeleteDomain(const Model::DeleteDomainRequest& request) const;

        /**
         * <p>Used to delete a domain. If you onboarded with IAM mode, you will need to
         * delete your domain to onboard again using SSO. Use with caution. All of the
         * members of the domain will lose access to their EFS volume, including data,
         * notebooks, and other artifacts. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteDomain">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDomainOutcomeCallable DeleteDomainCallable(const Model::DeleteDomainRequest& request) const;

        /**
         * <p>Used to delete a domain. If you onboarded with IAM mode, you will need to
         * delete your domain to onboard again using SSO. Use with caution. All of the
         * members of the domain will lose access to their EFS volume, including data,
         * notebooks, and other artifacts. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteDomain">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDomainAsync(const Model::DeleteDomainRequest& request, const DeleteDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an endpoint. Amazon SageMaker frees up all of the resources that were
         * deployed when the endpoint was created. </p> <p>Amazon SageMaker retires any
         * custom KMS key grants associated with the endpoint, meaning you don't need to
         * use the <a
         * href="http://docs.aws.amazon.com/kms/latest/APIReference/API_RevokeGrant.html">RevokeGrant</a>
         * API call.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEndpointOutcome DeleteEndpoint(const Model::DeleteEndpointRequest& request) const;

        /**
         * <p>Deletes an endpoint. Amazon SageMaker frees up all of the resources that were
         * deployed when the endpoint was created. </p> <p>Amazon SageMaker retires any
         * custom KMS key grants associated with the endpoint, meaning you don't need to
         * use the <a
         * href="http://docs.aws.amazon.com/kms/latest/APIReference/API_RevokeGrant.html">RevokeGrant</a>
         * API call.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteEndpoint">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEndpointOutcomeCallable DeleteEndpointCallable(const Model::DeleteEndpointRequest& request) const;

        /**
         * <p>Deletes an endpoint. Amazon SageMaker frees up all of the resources that were
         * deployed when the endpoint was created. </p> <p>Amazon SageMaker retires any
         * custom KMS key grants associated with the endpoint, meaning you don't need to
         * use the <a
         * href="http://docs.aws.amazon.com/kms/latest/APIReference/API_RevokeGrant.html">RevokeGrant</a>
         * API call.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteEndpoint">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEndpointAsync(const Model::DeleteEndpointRequest& request, const DeleteEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an endpoint configuration. The <code>DeleteEndpointConfig</code> API
         * deletes only the specified configuration. It does not delete endpoints created
         * using the configuration. </p> <p>You must not delete an
         * <code>EndpointConfig</code> in use by an endpoint that is live or while the
         * <code>UpdateEndpoint</code> or <code>CreateEndpoint</code> operations are being
         * performed on the endpoint. If you delete the <code>EndpointConfig</code> of an
         * endpoint that is active or being created or updated you may lose visibility into
         * the instance type the endpoint is using. The endpoint must be deleted in order
         * to stop incurring charges.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteEndpointConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEndpointConfigOutcome DeleteEndpointConfig(const Model::DeleteEndpointConfigRequest& request) const;

        /**
         * <p>Deletes an endpoint configuration. The <code>DeleteEndpointConfig</code> API
         * deletes only the specified configuration. It does not delete endpoints created
         * using the configuration. </p> <p>You must not delete an
         * <code>EndpointConfig</code> in use by an endpoint that is live or while the
         * <code>UpdateEndpoint</code> or <code>CreateEndpoint</code> operations are being
         * performed on the endpoint. If you delete the <code>EndpointConfig</code> of an
         * endpoint that is active or being created or updated you may lose visibility into
         * the instance type the endpoint is using. The endpoint must be deleted in order
         * to stop incurring charges.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteEndpointConfig">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEndpointConfigOutcomeCallable DeleteEndpointConfigCallable(const Model::DeleteEndpointConfigRequest& request) const;

        /**
         * <p>Deletes an endpoint configuration. The <code>DeleteEndpointConfig</code> API
         * deletes only the specified configuration. It does not delete endpoints created
         * using the configuration. </p> <p>You must not delete an
         * <code>EndpointConfig</code> in use by an endpoint that is live or while the
         * <code>UpdateEndpoint</code> or <code>CreateEndpoint</code> operations are being
         * performed on the endpoint. If you delete the <code>EndpointConfig</code> of an
         * endpoint that is active or being created or updated you may lose visibility into
         * the instance type the endpoint is using. The endpoint must be deleted in order
         * to stop incurring charges.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteEndpointConfig">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEndpointConfigAsync(const Model::DeleteEndpointConfigRequest& request, const DeleteEndpointConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an Amazon SageMaker experiment. All trials associated with the
         * experiment must be deleted first. Use the <a>ListTrials</a> API to get a list of
         * the trials associated with the experiment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteExperiment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteExperimentOutcome DeleteExperiment(const Model::DeleteExperimentRequest& request) const;

        /**
         * <p>Deletes an Amazon SageMaker experiment. All trials associated with the
         * experiment must be deleted first. Use the <a>ListTrials</a> API to get a list of
         * the trials associated with the experiment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteExperiment">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteExperimentOutcomeCallable DeleteExperimentCallable(const Model::DeleteExperimentRequest& request) const;

        /**
         * <p>Deletes an Amazon SageMaker experiment. All trials associated with the
         * experiment must be deleted first. Use the <a>ListTrials</a> API to get a list of
         * the trials associated with the experiment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteExperiment">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteExperimentAsync(const Model::DeleteExperimentRequest& request, const DeleteExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified flow definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteFlowDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFlowDefinitionOutcome DeleteFlowDefinition(const Model::DeleteFlowDefinitionRequest& request) const;

        /**
         * <p>Deletes the specified flow definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteFlowDefinition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFlowDefinitionOutcomeCallable DeleteFlowDefinitionCallable(const Model::DeleteFlowDefinitionRequest& request) const;

        /**
         * <p>Deletes the specified flow definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteFlowDefinition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFlowDefinitionAsync(const Model::DeleteFlowDefinitionRequest& request, const DeleteFlowDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Use this operation to delete a human task user interface (worker task
         * template).</p> <p> To see a list of human task user interfaces (work task
         * templates) in your account, use . When you delete a worker task template, it no
         * longer appears when you call <code>ListHumanTaskUis</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteHumanTaskUi">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteHumanTaskUiOutcome DeleteHumanTaskUi(const Model::DeleteHumanTaskUiRequest& request) const;

        /**
         * <p>Use this operation to delete a human task user interface (worker task
         * template).</p> <p> To see a list of human task user interfaces (work task
         * templates) in your account, use . When you delete a worker task template, it no
         * longer appears when you call <code>ListHumanTaskUis</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteHumanTaskUi">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteHumanTaskUiOutcomeCallable DeleteHumanTaskUiCallable(const Model::DeleteHumanTaskUiRequest& request) const;

        /**
         * <p>Use this operation to delete a human task user interface (worker task
         * template).</p> <p> To see a list of human task user interfaces (work task
         * templates) in your account, use . When you delete a worker task template, it no
         * longer appears when you call <code>ListHumanTaskUis</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteHumanTaskUi">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteHumanTaskUiAsync(const Model::DeleteHumanTaskUiRequest& request, const DeleteHumanTaskUiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a SageMaker image and all versions of the image. The container images
         * aren't deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteImage">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteImageOutcome DeleteImage(const Model::DeleteImageRequest& request) const;

        /**
         * <p>Deletes a SageMaker image and all versions of the image. The container images
         * aren't deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteImage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteImageOutcomeCallable DeleteImageCallable(const Model::DeleteImageRequest& request) const;

        /**
         * <p>Deletes a SageMaker image and all versions of the image. The container images
         * aren't deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteImage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteImageAsync(const Model::DeleteImageRequest& request, const DeleteImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a version of a SageMaker image. The container image the version
         * represents isn't deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteImageVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteImageVersionOutcome DeleteImageVersion(const Model::DeleteImageVersionRequest& request) const;

        /**
         * <p>Deletes a version of a SageMaker image. The container image the version
         * represents isn't deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteImageVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteImageVersionOutcomeCallable DeleteImageVersionCallable(const Model::DeleteImageVersionRequest& request) const;

        /**
         * <p>Deletes a version of a SageMaker image. The container image the version
         * represents isn't deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteImageVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteImageVersionAsync(const Model::DeleteImageVersionRequest& request, const DeleteImageVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a model. The <code>DeleteModel</code> API deletes only the model
         * entry that was created in Amazon SageMaker when you called the
         * <a>CreateModel</a> API. It does not delete model artifacts, inference code, or
         * the IAM role that you specified when creating the model. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteModel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteModelOutcome DeleteModel(const Model::DeleteModelRequest& request) const;

        /**
         * <p>Deletes a model. The <code>DeleteModel</code> API deletes only the model
         * entry that was created in Amazon SageMaker when you called the
         * <a>CreateModel</a> API. It does not delete model artifacts, inference code, or
         * the IAM role that you specified when creating the model. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteModel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteModelOutcomeCallable DeleteModelCallable(const Model::DeleteModelRequest& request) const;

        /**
         * <p>Deletes a model. The <code>DeleteModel</code> API deletes only the model
         * entry that was created in Amazon SageMaker when you called the
         * <a>CreateModel</a> API. It does not delete model artifacts, inference code, or
         * the IAM role that you specified when creating the model. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteModel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteModelAsync(const Model::DeleteModelRequest& request, const DeleteModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a model package.</p> <p>A model package is used to create Amazon
         * SageMaker models or list on AWS Marketplace. Buyers can subscribe to model
         * packages listed on AWS Marketplace to create models in Amazon
         * SageMaker.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteModelPackage">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteModelPackageOutcome DeleteModelPackage(const Model::DeleteModelPackageRequest& request) const;

        /**
         * <p>Deletes a model package.</p> <p>A model package is used to create Amazon
         * SageMaker models or list on AWS Marketplace. Buyers can subscribe to model
         * packages listed on AWS Marketplace to create models in Amazon
         * SageMaker.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteModelPackage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteModelPackageOutcomeCallable DeleteModelPackageCallable(const Model::DeleteModelPackageRequest& request) const;

        /**
         * <p>Deletes a model package.</p> <p>A model package is used to create Amazon
         * SageMaker models or list on AWS Marketplace. Buyers can subscribe to model
         * packages listed on AWS Marketplace to create models in Amazon
         * SageMaker.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteModelPackage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteModelPackageAsync(const Model::DeleteModelPackageRequest& request, const DeleteModelPackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a monitoring schedule. Also stops the schedule had not already been
         * stopped. This does not delete the job execution history of the monitoring
         * schedule. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteMonitoringSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMonitoringScheduleOutcome DeleteMonitoringSchedule(const Model::DeleteMonitoringScheduleRequest& request) const;

        /**
         * <p>Deletes a monitoring schedule. Also stops the schedule had not already been
         * stopped. This does not delete the job execution history of the monitoring
         * schedule. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteMonitoringSchedule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteMonitoringScheduleOutcomeCallable DeleteMonitoringScheduleCallable(const Model::DeleteMonitoringScheduleRequest& request) const;

        /**
         * <p>Deletes a monitoring schedule. Also stops the schedule had not already been
         * stopped. This does not delete the job execution history of the monitoring
         * schedule. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteMonitoringSchedule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteMonitoringScheduleAsync(const Model::DeleteMonitoringScheduleRequest& request, const DeleteMonitoringScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Deletes an Amazon SageMaker notebook instance. Before you can delete a
         * notebook instance, you must call the <code>StopNotebookInstance</code> API. </p>
         *  <p>When you delete a notebook instance, you lose all of your data.
         * Amazon SageMaker removes the ML compute instance, and deletes the ML storage
         * volume and the network interface associated with the notebook instance. </p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteNotebookInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNotebookInstanceOutcome DeleteNotebookInstance(const Model::DeleteNotebookInstanceRequest& request) const;

        /**
         * <p> Deletes an Amazon SageMaker notebook instance. Before you can delete a
         * notebook instance, you must call the <code>StopNotebookInstance</code> API. </p>
         *  <p>When you delete a notebook instance, you lose all of your data.
         * Amazon SageMaker removes the ML compute instance, and deletes the ML storage
         * volume and the network interface associated with the notebook instance. </p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteNotebookInstance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteNotebookInstanceOutcomeCallable DeleteNotebookInstanceCallable(const Model::DeleteNotebookInstanceRequest& request) const;

        /**
         * <p> Deletes an Amazon SageMaker notebook instance. Before you can delete a
         * notebook instance, you must call the <code>StopNotebookInstance</code> API. </p>
         *  <p>When you delete a notebook instance, you lose all of your data.
         * Amazon SageMaker removes the ML compute instance, and deletes the ML storage
         * volume and the network interface associated with the notebook instance. </p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteNotebookInstance">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteNotebookInstanceAsync(const Model::DeleteNotebookInstanceRequest& request, const DeleteNotebookInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a notebook instance lifecycle configuration.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteNotebookInstanceLifecycleConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNotebookInstanceLifecycleConfigOutcome DeleteNotebookInstanceLifecycleConfig(const Model::DeleteNotebookInstanceLifecycleConfigRequest& request) const;

        /**
         * <p>Deletes a notebook instance lifecycle configuration.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteNotebookInstanceLifecycleConfig">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteNotebookInstanceLifecycleConfigOutcomeCallable DeleteNotebookInstanceLifecycleConfigCallable(const Model::DeleteNotebookInstanceLifecycleConfigRequest& request) const;

        /**
         * <p>Deletes a notebook instance lifecycle configuration.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteNotebookInstanceLifecycleConfig">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteNotebookInstanceLifecycleConfigAsync(const Model::DeleteNotebookInstanceLifecycleConfigRequest& request, const DeleteNotebookInstanceLifecycleConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified tags from an Amazon SageMaker resource.</p> <p>To list
         * a resource's tags, use the <code>ListTags</code> API. </p>  <p>When you
         * call this API to delete tags from a hyperparameter tuning job, the deleted tags
         * are not removed from training jobs that the hyperparameter tuning job launched
         * before you called this API.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteTags">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTagsOutcome DeleteTags(const Model::DeleteTagsRequest& request) const;

        /**
         * <p>Deletes the specified tags from an Amazon SageMaker resource.</p> <p>To list
         * a resource's tags, use the <code>ListTags</code> API. </p>  <p>When you
         * call this API to delete tags from a hyperparameter tuning job, the deleted tags
         * are not removed from training jobs that the hyperparameter tuning job launched
         * before you called this API.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteTags">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTagsOutcomeCallable DeleteTagsCallable(const Model::DeleteTagsRequest& request) const;

        /**
         * <p>Deletes the specified tags from an Amazon SageMaker resource.</p> <p>To list
         * a resource's tags, use the <code>ListTags</code> API. </p>  <p>When you
         * call this API to delete tags from a hyperparameter tuning job, the deleted tags
         * are not removed from training jobs that the hyperparameter tuning job launched
         * before you called this API.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteTags">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTagsAsync(const Model::DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified trial. All trial components that make up the trial must
         * be deleted first. Use the <a>DescribeTrialComponent</a> API to get the list of
         * trial components.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteTrial">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTrialOutcome DeleteTrial(const Model::DeleteTrialRequest& request) const;

        /**
         * <p>Deletes the specified trial. All trial components that make up the trial must
         * be deleted first. Use the <a>DescribeTrialComponent</a> API to get the list of
         * trial components.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteTrial">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTrialOutcomeCallable DeleteTrialCallable(const Model::DeleteTrialRequest& request) const;

        /**
         * <p>Deletes the specified trial. All trial components that make up the trial must
         * be deleted first. Use the <a>DescribeTrialComponent</a> API to get the list of
         * trial components.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteTrial">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTrialAsync(const Model::DeleteTrialRequest& request, const DeleteTrialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified trial component. A trial component must be
         * disassociated from all trials before the trial component can be deleted. To
         * disassociate a trial component from a trial, call the
         * <a>DisassociateTrialComponent</a> API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteTrialComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTrialComponentOutcome DeleteTrialComponent(const Model::DeleteTrialComponentRequest& request) const;

        /**
         * <p>Deletes the specified trial component. A trial component must be
         * disassociated from all trials before the trial component can be deleted. To
         * disassociate a trial component from a trial, call the
         * <a>DisassociateTrialComponent</a> API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteTrialComponent">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTrialComponentOutcomeCallable DeleteTrialComponentCallable(const Model::DeleteTrialComponentRequest& request) const;

        /**
         * <p>Deletes the specified trial component. A trial component must be
         * disassociated from all trials before the trial component can be deleted. To
         * disassociate a trial component from a trial, call the
         * <a>DisassociateTrialComponent</a> API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteTrialComponent">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTrialComponentAsync(const Model::DeleteTrialComponentRequest& request, const DeleteTrialComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a user profile. When a user profile is deleted, the user loses access
         * to their EFS volume, including data, notebooks, and other
         * artifacts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteUserProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserProfileOutcome DeleteUserProfile(const Model::DeleteUserProfileRequest& request) const;

        /**
         * <p>Deletes a user profile. When a user profile is deleted, the user loses access
         * to their EFS volume, including data, notebooks, and other
         * artifacts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteUserProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteUserProfileOutcomeCallable DeleteUserProfileCallable(const Model::DeleteUserProfileRequest& request) const;

        /**
         * <p>Deletes a user profile. When a user profile is deleted, the user loses access
         * to their EFS volume, including data, notebooks, and other
         * artifacts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteUserProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteUserProfileAsync(const Model::DeleteUserProfileRequest& request, const DeleteUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Use this operation to delete a workforce.</p> <p>If you want to create a new
         * workforce in an AWS Region where a workforce already exists, use this operation
         * to delete the existing workforce and then use to create a new workforce.</p>
         *  <p>If a private workforce contains one or more work teams, you must
         * use the operation to delete all work teams before you delete the workforce. If
         * you try to delete a workforce that contains one or more work teams, you will
         * recieve a <code>ResourceInUse</code> error.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteWorkforce">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWorkforceOutcome DeleteWorkforce(const Model::DeleteWorkforceRequest& request) const;

        /**
         * <p>Use this operation to delete a workforce.</p> <p>If you want to create a new
         * workforce in an AWS Region where a workforce already exists, use this operation
         * to delete the existing workforce and then use to create a new workforce.</p>
         *  <p>If a private workforce contains one or more work teams, you must
         * use the operation to delete all work teams before you delete the workforce. If
         * you try to delete a workforce that contains one or more work teams, you will
         * recieve a <code>ResourceInUse</code> error.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteWorkforce">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteWorkforceOutcomeCallable DeleteWorkforceCallable(const Model::DeleteWorkforceRequest& request) const;

        /**
         * <p>Use this operation to delete a workforce.</p> <p>If you want to create a new
         * workforce in an AWS Region where a workforce already exists, use this operation
         * to delete the existing workforce and then use to create a new workforce.</p>
         *  <p>If a private workforce contains one or more work teams, you must
         * use the operation to delete all work teams before you delete the workforce. If
         * you try to delete a workforce that contains one or more work teams, you will
         * recieve a <code>ResourceInUse</code> error.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteWorkforce">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteWorkforceAsync(const Model::DeleteWorkforceRequest& request, const DeleteWorkforceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an existing work team. This operation can't be undone.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteWorkteam">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWorkteamOutcome DeleteWorkteam(const Model::DeleteWorkteamRequest& request) const;

        /**
         * <p>Deletes an existing work team. This operation can't be undone.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteWorkteam">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteWorkteamOutcomeCallable DeleteWorkteamCallable(const Model::DeleteWorkteamRequest& request) const;

        /**
         * <p>Deletes an existing work team. This operation can't be undone.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteWorkteam">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteWorkteamAsync(const Model::DeleteWorkteamRequest& request, const DeleteWorkteamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a description of the specified algorithm that is in your
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeAlgorithm">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAlgorithmOutcome DescribeAlgorithm(const Model::DescribeAlgorithmRequest& request) const;

        /**
         * <p>Returns a description of the specified algorithm that is in your
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeAlgorithm">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAlgorithmOutcomeCallable DescribeAlgorithmCallable(const Model::DescribeAlgorithmRequest& request) const;

        /**
         * <p>Returns a description of the specified algorithm that is in your
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeAlgorithm">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAlgorithmAsync(const Model::DescribeAlgorithmRequest& request, const DescribeAlgorithmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the app.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeApp">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAppOutcome DescribeApp(const Model::DescribeAppRequest& request) const;

        /**
         * <p>Describes the app.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeApp">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAppOutcomeCallable DescribeAppCallable(const Model::DescribeAppRequest& request) const;

        /**
         * <p>Describes the app.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeApp">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAppAsync(const Model::DescribeAppRequest& request, const DescribeAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes an AppImageConfig.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeAppImageConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAppImageConfigOutcome DescribeAppImageConfig(const Model::DescribeAppImageConfigRequest& request) const;

        /**
         * <p>Describes an AppImageConfig.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeAppImageConfig">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAppImageConfigOutcomeCallable DescribeAppImageConfigCallable(const Model::DescribeAppImageConfigRequest& request) const;

        /**
         * <p>Describes an AppImageConfig.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeAppImageConfig">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAppImageConfigAsync(const Model::DescribeAppImageConfigRequest& request, const DescribeAppImageConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about an Amazon SageMaker job.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeAutoMLJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAutoMLJobOutcome DescribeAutoMLJob(const Model::DescribeAutoMLJobRequest& request) const;

        /**
         * <p>Returns information about an Amazon SageMaker job.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeAutoMLJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAutoMLJobOutcomeCallable DescribeAutoMLJobCallable(const Model::DescribeAutoMLJobRequest& request) const;

        /**
         * <p>Returns information about an Amazon SageMaker job.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeAutoMLJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAutoMLJobAsync(const Model::DescribeAutoMLJobRequest& request, const DescribeAutoMLJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets details about the specified Git repository.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeCodeRepository">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCodeRepositoryOutcome DescribeCodeRepository(const Model::DescribeCodeRepositoryRequest& request) const;

        /**
         * <p>Gets details about the specified Git repository.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeCodeRepository">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCodeRepositoryOutcomeCallable DescribeCodeRepositoryCallable(const Model::DescribeCodeRepositoryRequest& request) const;

        /**
         * <p>Gets details about the specified Git repository.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeCodeRepository">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCodeRepositoryAsync(const Model::DescribeCodeRepositoryRequest& request, const DescribeCodeRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a model compilation job.</p> <p>To create a model
         * compilation job, use <a>CreateCompilationJob</a>. To get information about
         * multiple model compilation jobs, use <a>ListCompilationJobs</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeCompilationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCompilationJobOutcome DescribeCompilationJob(const Model::DescribeCompilationJobRequest& request) const;

        /**
         * <p>Returns information about a model compilation job.</p> <p>To create a model
         * compilation job, use <a>CreateCompilationJob</a>. To get information about
         * multiple model compilation jobs, use <a>ListCompilationJobs</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeCompilationJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCompilationJobOutcomeCallable DescribeCompilationJobCallable(const Model::DescribeCompilationJobRequest& request) const;

        /**
         * <p>Returns information about a model compilation job.</p> <p>To create a model
         * compilation job, use <a>CreateCompilationJob</a>. To get information about
         * multiple model compilation jobs, use <a>ListCompilationJobs</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeCompilationJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCompilationJobAsync(const Model::DescribeCompilationJobRequest& request, const DescribeCompilationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The description of the domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDomainOutcome DescribeDomain(const Model::DescribeDomainRequest& request) const;

        /**
         * <p>The description of the domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeDomain">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDomainOutcomeCallable DescribeDomainCallable(const Model::DescribeDomainRequest& request) const;

        /**
         * <p>The description of the domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeDomain">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDomainAsync(const Model::DescribeDomainRequest& request, const DescribeDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the description of an endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEndpointOutcome DescribeEndpoint(const Model::DescribeEndpointRequest& request) const;

        /**
         * <p>Returns the description of an endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeEndpoint">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEndpointOutcomeCallable DescribeEndpointCallable(const Model::DescribeEndpointRequest& request) const;

        /**
         * <p>Returns the description of an endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeEndpoint">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEndpointAsync(const Model::DescribeEndpointRequest& request, const DescribeEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the description of an endpoint configuration created using the
         * <code>CreateEndpointConfig</code> API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeEndpointConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEndpointConfigOutcome DescribeEndpointConfig(const Model::DescribeEndpointConfigRequest& request) const;

        /**
         * <p>Returns the description of an endpoint configuration created using the
         * <code>CreateEndpointConfig</code> API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeEndpointConfig">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEndpointConfigOutcomeCallable DescribeEndpointConfigCallable(const Model::DescribeEndpointConfigRequest& request) const;

        /**
         * <p>Returns the description of an endpoint configuration created using the
         * <code>CreateEndpointConfig</code> API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeEndpointConfig">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEndpointConfigAsync(const Model::DescribeEndpointConfigRequest& request, const DescribeEndpointConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides a list of an experiment's properties.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeExperiment">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeExperimentOutcome DescribeExperiment(const Model::DescribeExperimentRequest& request) const;

        /**
         * <p>Provides a list of an experiment's properties.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeExperiment">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeExperimentOutcomeCallable DescribeExperimentCallable(const Model::DescribeExperimentRequest& request) const;

        /**
         * <p>Provides a list of an experiment's properties.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeExperiment">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeExperimentAsync(const Model::DescribeExperimentRequest& request, const DescribeExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the specified flow definition.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeFlowDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFlowDefinitionOutcome DescribeFlowDefinition(const Model::DescribeFlowDefinitionRequest& request) const;

        /**
         * <p>Returns information about the specified flow definition.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeFlowDefinition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFlowDefinitionOutcomeCallable DescribeFlowDefinitionCallable(const Model::DescribeFlowDefinitionRequest& request) const;

        /**
         * <p>Returns information about the specified flow definition.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeFlowDefinition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFlowDefinitionAsync(const Model::DescribeFlowDefinitionRequest& request, const DescribeFlowDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the requested human task user interface (worker
         * task template).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeHumanTaskUi">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeHumanTaskUiOutcome DescribeHumanTaskUi(const Model::DescribeHumanTaskUiRequest& request) const;

        /**
         * <p>Returns information about the requested human task user interface (worker
         * task template).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeHumanTaskUi">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeHumanTaskUiOutcomeCallable DescribeHumanTaskUiCallable(const Model::DescribeHumanTaskUiRequest& request) const;

        /**
         * <p>Returns information about the requested human task user interface (worker
         * task template).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeHumanTaskUi">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeHumanTaskUiAsync(const Model::DescribeHumanTaskUiRequest& request, const DescribeHumanTaskUiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a description of a hyperparameter tuning job.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeHyperParameterTuningJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeHyperParameterTuningJobOutcome DescribeHyperParameterTuningJob(const Model::DescribeHyperParameterTuningJobRequest& request) const;

        /**
         * <p>Gets a description of a hyperparameter tuning job.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeHyperParameterTuningJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeHyperParameterTuningJobOutcomeCallable DescribeHyperParameterTuningJobCallable(const Model::DescribeHyperParameterTuningJobRequest& request) const;

        /**
         * <p>Gets a description of a hyperparameter tuning job.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeHyperParameterTuningJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeHyperParameterTuningJobAsync(const Model::DescribeHyperParameterTuningJobRequest& request, const DescribeHyperParameterTuningJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a SageMaker image.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeImage">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeImageOutcome DescribeImage(const Model::DescribeImageRequest& request) const;

        /**
         * <p>Describes a SageMaker image.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeImage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeImageOutcomeCallable DescribeImageCallable(const Model::DescribeImageRequest& request) const;

        /**
         * <p>Describes a SageMaker image.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeImage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeImageAsync(const Model::DescribeImageRequest& request, const DescribeImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a version of a SageMaker image.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeImageVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeImageVersionOutcome DescribeImageVersion(const Model::DescribeImageVersionRequest& request) const;

        /**
         * <p>Describes a version of a SageMaker image.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeImageVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeImageVersionOutcomeCallable DescribeImageVersionCallable(const Model::DescribeImageVersionRequest& request) const;

        /**
         * <p>Describes a version of a SageMaker image.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeImageVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeImageVersionAsync(const Model::DescribeImageVersionRequest& request, const DescribeImageVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a labeling job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeLabelingJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLabelingJobOutcome DescribeLabelingJob(const Model::DescribeLabelingJobRequest& request) const;

        /**
         * <p>Gets information about a labeling job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeLabelingJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLabelingJobOutcomeCallable DescribeLabelingJobCallable(const Model::DescribeLabelingJobRequest& request) const;

        /**
         * <p>Gets information about a labeling job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeLabelingJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLabelingJobAsync(const Model::DescribeLabelingJobRequest& request, const DescribeLabelingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a model that you created using the <code>CreateModel</code>
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeModel">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeModelOutcome DescribeModel(const Model::DescribeModelRequest& request) const;

        /**
         * <p>Describes a model that you created using the <code>CreateModel</code>
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeModel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeModelOutcomeCallable DescribeModelCallable(const Model::DescribeModelRequest& request) const;

        /**
         * <p>Describes a model that you created using the <code>CreateModel</code>
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeModel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeModelAsync(const Model::DescribeModelRequest& request, const DescribeModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a description of the specified model package, which is used to create
         * Amazon SageMaker models or list them on AWS Marketplace.</p> <p>To create models
         * in Amazon SageMaker, buyers can subscribe to model packages listed on AWS
         * Marketplace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeModelPackage">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeModelPackageOutcome DescribeModelPackage(const Model::DescribeModelPackageRequest& request) const;

        /**
         * <p>Returns a description of the specified model package, which is used to create
         * Amazon SageMaker models or list them on AWS Marketplace.</p> <p>To create models
         * in Amazon SageMaker, buyers can subscribe to model packages listed on AWS
         * Marketplace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeModelPackage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeModelPackageOutcomeCallable DescribeModelPackageCallable(const Model::DescribeModelPackageRequest& request) const;

        /**
         * <p>Returns a description of the specified model package, which is used to create
         * Amazon SageMaker models or list them on AWS Marketplace.</p> <p>To create models
         * in Amazon SageMaker, buyers can subscribe to model packages listed on AWS
         * Marketplace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeModelPackage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeModelPackageAsync(const Model::DescribeModelPackageRequest& request, const DescribeModelPackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the schedule for a monitoring job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeMonitoringSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMonitoringScheduleOutcome DescribeMonitoringSchedule(const Model::DescribeMonitoringScheduleRequest& request) const;

        /**
         * <p>Describes the schedule for a monitoring job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeMonitoringSchedule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeMonitoringScheduleOutcomeCallable DescribeMonitoringScheduleCallable(const Model::DescribeMonitoringScheduleRequest& request) const;

        /**
         * <p>Describes the schedule for a monitoring job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeMonitoringSchedule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeMonitoringScheduleAsync(const Model::DescribeMonitoringScheduleRequest& request, const DescribeMonitoringScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a notebook instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeNotebookInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeNotebookInstanceOutcome DescribeNotebookInstance(const Model::DescribeNotebookInstanceRequest& request) const;

        /**
         * <p>Returns information about a notebook instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeNotebookInstance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeNotebookInstanceOutcomeCallable DescribeNotebookInstanceCallable(const Model::DescribeNotebookInstanceRequest& request) const;

        /**
         * <p>Returns information about a notebook instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeNotebookInstance">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeNotebookInstanceAsync(const Model::DescribeNotebookInstanceRequest& request, const DescribeNotebookInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a description of a notebook instance lifecycle configuration.</p>
         * <p>For information about notebook instance lifestyle configurations, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/notebook-lifecycle-config.html">Step
         * 2.1: (Optional) Customize a Notebook Instance</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeNotebookInstanceLifecycleConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeNotebookInstanceLifecycleConfigOutcome DescribeNotebookInstanceLifecycleConfig(const Model::DescribeNotebookInstanceLifecycleConfigRequest& request) const;

        /**
         * <p>Returns a description of a notebook instance lifecycle configuration.</p>
         * <p>For information about notebook instance lifestyle configurations, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/notebook-lifecycle-config.html">Step
         * 2.1: (Optional) Customize a Notebook Instance</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeNotebookInstanceLifecycleConfig">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeNotebookInstanceLifecycleConfigOutcomeCallable DescribeNotebookInstanceLifecycleConfigCallable(const Model::DescribeNotebookInstanceLifecycleConfigRequest& request) const;

        /**
         * <p>Returns a description of a notebook instance lifecycle configuration.</p>
         * <p>For information about notebook instance lifestyle configurations, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/notebook-lifecycle-config.html">Step
         * 2.1: (Optional) Customize a Notebook Instance</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeNotebookInstanceLifecycleConfig">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeNotebookInstanceLifecycleConfigAsync(const Model::DescribeNotebookInstanceLifecycleConfigRequest& request, const DescribeNotebookInstanceLifecycleConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a description of a processing job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeProcessingJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProcessingJobOutcome DescribeProcessingJob(const Model::DescribeProcessingJobRequest& request) const;

        /**
         * <p>Returns a description of a processing job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeProcessingJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeProcessingJobOutcomeCallable DescribeProcessingJobCallable(const Model::DescribeProcessingJobRequest& request) const;

        /**
         * <p>Returns a description of a processing job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeProcessingJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeProcessingJobAsync(const Model::DescribeProcessingJobRequest& request, const DescribeProcessingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a work team provided by a vendor. It returns details
         * about the subscription with a vendor in the AWS Marketplace.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeSubscribedWorkteam">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSubscribedWorkteamOutcome DescribeSubscribedWorkteam(const Model::DescribeSubscribedWorkteamRequest& request) const;

        /**
         * <p>Gets information about a work team provided by a vendor. It returns details
         * about the subscription with a vendor in the AWS Marketplace.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeSubscribedWorkteam">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSubscribedWorkteamOutcomeCallable DescribeSubscribedWorkteamCallable(const Model::DescribeSubscribedWorkteamRequest& request) const;

        /**
         * <p>Gets information about a work team provided by a vendor. It returns details
         * about the subscription with a vendor in the AWS Marketplace.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeSubscribedWorkteam">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSubscribedWorkteamAsync(const Model::DescribeSubscribedWorkteamRequest& request, const DescribeSubscribedWorkteamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a training job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeTrainingJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTrainingJobOutcome DescribeTrainingJob(const Model::DescribeTrainingJobRequest& request) const;

        /**
         * <p>Returns information about a training job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeTrainingJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTrainingJobOutcomeCallable DescribeTrainingJobCallable(const Model::DescribeTrainingJobRequest& request) const;

        /**
         * <p>Returns information about a training job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeTrainingJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTrainingJobAsync(const Model::DescribeTrainingJobRequest& request, const DescribeTrainingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a transform job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeTransformJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTransformJobOutcome DescribeTransformJob(const Model::DescribeTransformJobRequest& request) const;

        /**
         * <p>Returns information about a transform job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeTransformJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTransformJobOutcomeCallable DescribeTransformJobCallable(const Model::DescribeTransformJobRequest& request) const;

        /**
         * <p>Returns information about a transform job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeTransformJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTransformJobAsync(const Model::DescribeTransformJobRequest& request, const DescribeTransformJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides a list of a trial's properties.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeTrial">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTrialOutcome DescribeTrial(const Model::DescribeTrialRequest& request) const;

        /**
         * <p>Provides a list of a trial's properties.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeTrial">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTrialOutcomeCallable DescribeTrialCallable(const Model::DescribeTrialRequest& request) const;

        /**
         * <p>Provides a list of a trial's properties.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeTrial">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTrialAsync(const Model::DescribeTrialRequest& request, const DescribeTrialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides a list of a trials component's properties.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeTrialComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTrialComponentOutcome DescribeTrialComponent(const Model::DescribeTrialComponentRequest& request) const;

        /**
         * <p>Provides a list of a trials component's properties.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeTrialComponent">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTrialComponentOutcomeCallable DescribeTrialComponentCallable(const Model::DescribeTrialComponentRequest& request) const;

        /**
         * <p>Provides a list of a trials component's properties.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeTrialComponent">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTrialComponentAsync(const Model::DescribeTrialComponentRequest& request, const DescribeTrialComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a user profile. For more information, see
         * <code>CreateUserProfile</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeUserProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeUserProfileOutcome DescribeUserProfile(const Model::DescribeUserProfileRequest& request) const;

        /**
         * <p>Describes a user profile. For more information, see
         * <code>CreateUserProfile</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeUserProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeUserProfileOutcomeCallable DescribeUserProfileCallable(const Model::DescribeUserProfileRequest& request) const;

        /**
         * <p>Describes a user profile. For more information, see
         * <code>CreateUserProfile</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeUserProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeUserProfileAsync(const Model::DescribeUserProfileRequest& request, const DescribeUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists private workforce information, including workforce name, Amazon
         * Resource Name (ARN), and, if applicable, allowed IP address ranges (<a
         * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">CIDRs</a>).
         * Allowable IP address ranges are the IP addresses that workers can use to access
         * tasks. </p>  <p>This operation applies only to private
         * workforces.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeWorkforce">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeWorkforceOutcome DescribeWorkforce(const Model::DescribeWorkforceRequest& request) const;

        /**
         * <p>Lists private workforce information, including workforce name, Amazon
         * Resource Name (ARN), and, if applicable, allowed IP address ranges (<a
         * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">CIDRs</a>).
         * Allowable IP address ranges are the IP addresses that workers can use to access
         * tasks. </p>  <p>This operation applies only to private
         * workforces.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeWorkforce">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeWorkforceOutcomeCallable DescribeWorkforceCallable(const Model::DescribeWorkforceRequest& request) const;

        /**
         * <p>Lists private workforce information, including workforce name, Amazon
         * Resource Name (ARN), and, if applicable, allowed IP address ranges (<a
         * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">CIDRs</a>).
         * Allowable IP address ranges are the IP addresses that workers can use to access
         * tasks. </p>  <p>This operation applies only to private
         * workforces.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeWorkforce">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeWorkforceAsync(const Model::DescribeWorkforceRequest& request, const DescribeWorkforceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a specific work team. You can see information such as
         * the create date, the last updated date, membership information, and the work
         * team's Amazon Resource Name (ARN).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeWorkteam">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeWorkteamOutcome DescribeWorkteam(const Model::DescribeWorkteamRequest& request) const;

        /**
         * <p>Gets information about a specific work team. You can see information such as
         * the create date, the last updated date, membership information, and the work
         * team's Amazon Resource Name (ARN).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeWorkteam">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeWorkteamOutcomeCallable DescribeWorkteamCallable(const Model::DescribeWorkteamRequest& request) const;

        /**
         * <p>Gets information about a specific work team. You can see information such as
         * the create date, the last updated date, membership information, and the work
         * team's Amazon Resource Name (ARN).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DescribeWorkteam">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeWorkteamAsync(const Model::DescribeWorkteamRequest& request, const DescribeWorkteamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates a trial component from a trial. This doesn't effect other
         * trials the component is associated with. Before you can delete a component, you
         * must disassociate the component from all trials it is associated with. To
         * associate a trial component with a trial, call the
         * <a>AssociateTrialComponent</a> API.</p> <p>To get a list of the trials a
         * component is associated with, use the <a>Search</a> API. Specify
         * <code>ExperimentTrialComponent</code> for the <code>Resource</code> parameter.
         * The list appears in the response under
         * <code>Results.TrialComponent.Parents</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DisassociateTrialComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateTrialComponentOutcome DisassociateTrialComponent(const Model::DisassociateTrialComponentRequest& request) const;

        /**
         * <p>Disassociates a trial component from a trial. This doesn't effect other
         * trials the component is associated with. Before you can delete a component, you
         * must disassociate the component from all trials it is associated with. To
         * associate a trial component with a trial, call the
         * <a>AssociateTrialComponent</a> API.</p> <p>To get a list of the trials a
         * component is associated with, use the <a>Search</a> API. Specify
         * <code>ExperimentTrialComponent</code> for the <code>Resource</code> parameter.
         * The list appears in the response under
         * <code>Results.TrialComponent.Parents</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DisassociateTrialComponent">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateTrialComponentOutcomeCallable DisassociateTrialComponentCallable(const Model::DisassociateTrialComponentRequest& request) const;

        /**
         * <p>Disassociates a trial component from a trial. This doesn't effect other
         * trials the component is associated with. Before you can delete a component, you
         * must disassociate the component from all trials it is associated with. To
         * associate a trial component with a trial, call the
         * <a>AssociateTrialComponent</a> API.</p> <p>To get a list of the trials a
         * component is associated with, use the <a>Search</a> API. Specify
         * <code>ExperimentTrialComponent</code> for the <code>Resource</code> parameter.
         * The list appears in the response under
         * <code>Results.TrialComponent.Parents</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DisassociateTrialComponent">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateTrialComponentAsync(const Model::DisassociateTrialComponentRequest& request, const DisassociateTrialComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>An auto-complete API for the search functionality in the Amazon SageMaker
         * console. It returns suggestions of possible matches for the property name to use
         * in <code>Search</code> queries. Provides suggestions for
         * <code>HyperParameters</code>, <code>Tags</code>, and
         * <code>Metrics</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/GetSearchSuggestions">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSearchSuggestionsOutcome GetSearchSuggestions(const Model::GetSearchSuggestionsRequest& request) const;

        /**
         * <p>An auto-complete API for the search functionality in the Amazon SageMaker
         * console. It returns suggestions of possible matches for the property name to use
         * in <code>Search</code> queries. Provides suggestions for
         * <code>HyperParameters</code>, <code>Tags</code>, and
         * <code>Metrics</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/GetSearchSuggestions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSearchSuggestionsOutcomeCallable GetSearchSuggestionsCallable(const Model::GetSearchSuggestionsRequest& request) const;

        /**
         * <p>An auto-complete API for the search functionality in the Amazon SageMaker
         * console. It returns suggestions of possible matches for the property name to use
         * in <code>Search</code> queries. Provides suggestions for
         * <code>HyperParameters</code>, <code>Tags</code>, and
         * <code>Metrics</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/GetSearchSuggestions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSearchSuggestionsAsync(const Model::GetSearchSuggestionsRequest& request, const GetSearchSuggestionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the machine learning algorithms that have been created.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListAlgorithms">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAlgorithmsOutcome ListAlgorithms(const Model::ListAlgorithmsRequest& request) const;

        /**
         * <p>Lists the machine learning algorithms that have been created.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListAlgorithms">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAlgorithmsOutcomeCallable ListAlgorithmsCallable(const Model::ListAlgorithmsRequest& request) const;

        /**
         * <p>Lists the machine learning algorithms that have been created.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListAlgorithms">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAlgorithmsAsync(const Model::ListAlgorithmsRequest& request, const ListAlgorithmsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the AppImageConfigs in your account and their properties. The list can
         * be filtered by creation time or modified time, and whether the AppImageConfig
         * name contains a specified string.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListAppImageConfigs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAppImageConfigsOutcome ListAppImageConfigs(const Model::ListAppImageConfigsRequest& request) const;

        /**
         * <p>Lists the AppImageConfigs in your account and their properties. The list can
         * be filtered by creation time or modified time, and whether the AppImageConfig
         * name contains a specified string.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListAppImageConfigs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAppImageConfigsOutcomeCallable ListAppImageConfigsCallable(const Model::ListAppImageConfigsRequest& request) const;

        /**
         * <p>Lists the AppImageConfigs in your account and their properties. The list can
         * be filtered by creation time or modified time, and whether the AppImageConfig
         * name contains a specified string.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListAppImageConfigs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAppImageConfigsAsync(const Model::ListAppImageConfigsRequest& request, const ListAppImageConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists apps.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListApps">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAppsOutcome ListApps(const Model::ListAppsRequest& request) const;

        /**
         * <p>Lists apps.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListApps">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAppsOutcomeCallable ListAppsCallable(const Model::ListAppsRequest& request) const;

        /**
         * <p>Lists apps.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListApps">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAppsAsync(const Model::ListAppsRequest& request, const ListAppsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Request a list of jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListAutoMLJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAutoMLJobsOutcome ListAutoMLJobs(const Model::ListAutoMLJobsRequest& request) const;

        /**
         * <p>Request a list of jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListAutoMLJobs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAutoMLJobsOutcomeCallable ListAutoMLJobsCallable(const Model::ListAutoMLJobsRequest& request) const;

        /**
         * <p>Request a list of jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListAutoMLJobs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAutoMLJobsAsync(const Model::ListAutoMLJobsRequest& request, const ListAutoMLJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the Candidates created for the job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListCandidatesForAutoMLJob">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCandidatesForAutoMLJobOutcome ListCandidatesForAutoMLJob(const Model::ListCandidatesForAutoMLJobRequest& request) const;

        /**
         * <p>List the Candidates created for the job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListCandidatesForAutoMLJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCandidatesForAutoMLJobOutcomeCallable ListCandidatesForAutoMLJobCallable(const Model::ListCandidatesForAutoMLJobRequest& request) const;

        /**
         * <p>List the Candidates created for the job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListCandidatesForAutoMLJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCandidatesForAutoMLJobAsync(const Model::ListCandidatesForAutoMLJobRequest& request, const ListCandidatesForAutoMLJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of the Git repositories in your account.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListCodeRepositories">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCodeRepositoriesOutcome ListCodeRepositories(const Model::ListCodeRepositoriesRequest& request) const;

        /**
         * <p>Gets a list of the Git repositories in your account.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListCodeRepositories">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCodeRepositoriesOutcomeCallable ListCodeRepositoriesCallable(const Model::ListCodeRepositoriesRequest& request) const;

        /**
         * <p>Gets a list of the Git repositories in your account.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListCodeRepositories">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCodeRepositoriesAsync(const Model::ListCodeRepositoriesRequest& request, const ListCodeRepositoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists model compilation jobs that satisfy various filters.</p> <p>To create a
         * model compilation job, use <a>CreateCompilationJob</a>. To get information about
         * a particular model compilation job you have created, use
         * <a>DescribeCompilationJob</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListCompilationJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCompilationJobsOutcome ListCompilationJobs(const Model::ListCompilationJobsRequest& request) const;

        /**
         * <p>Lists model compilation jobs that satisfy various filters.</p> <p>To create a
         * model compilation job, use <a>CreateCompilationJob</a>. To get information about
         * a particular model compilation job you have created, use
         * <a>DescribeCompilationJob</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListCompilationJobs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCompilationJobsOutcomeCallable ListCompilationJobsCallable(const Model::ListCompilationJobsRequest& request) const;

        /**
         * <p>Lists model compilation jobs that satisfy various filters.</p> <p>To create a
         * model compilation job, use <a>CreateCompilationJob</a>. To get information about
         * a particular model compilation job you have created, use
         * <a>DescribeCompilationJob</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListCompilationJobs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCompilationJobsAsync(const Model::ListCompilationJobsRequest& request, const ListCompilationJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the domains.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListDomains">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDomainsOutcome ListDomains(const Model::ListDomainsRequest& request) const;

        /**
         * <p>Lists the domains.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListDomains">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDomainsOutcomeCallable ListDomainsCallable(const Model::ListDomainsRequest& request) const;

        /**
         * <p>Lists the domains.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListDomains">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDomainsAsync(const Model::ListDomainsRequest& request, const ListDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists endpoint configurations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListEndpointConfigs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEndpointConfigsOutcome ListEndpointConfigs(const Model::ListEndpointConfigsRequest& request) const;

        /**
         * <p>Lists endpoint configurations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListEndpointConfigs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEndpointConfigsOutcomeCallable ListEndpointConfigsCallable(const Model::ListEndpointConfigsRequest& request) const;

        /**
         * <p>Lists endpoint configurations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListEndpointConfigs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEndpointConfigsAsync(const Model::ListEndpointConfigsRequest& request, const ListEndpointConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists endpoints.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEndpointsOutcome ListEndpoints(const Model::ListEndpointsRequest& request) const;

        /**
         * <p>Lists endpoints.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListEndpoints">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEndpointsOutcomeCallable ListEndpointsCallable(const Model::ListEndpointsRequest& request) const;

        /**
         * <p>Lists endpoints.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListEndpoints">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEndpointsAsync(const Model::ListEndpointsRequest& request, const ListEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all the experiments in your account. The list can be filtered to show
         * only experiments that were created in a specific time range. The list can be
         * sorted by experiment name or creation time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListExperiments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListExperimentsOutcome ListExperiments(const Model::ListExperimentsRequest& request) const;

        /**
         * <p>Lists all the experiments in your account. The list can be filtered to show
         * only experiments that were created in a specific time range. The list can be
         * sorted by experiment name or creation time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListExperiments">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListExperimentsOutcomeCallable ListExperimentsCallable(const Model::ListExperimentsRequest& request) const;

        /**
         * <p>Lists all the experiments in your account. The list can be filtered to show
         * only experiments that were created in a specific time range. The list can be
         * sorted by experiment name or creation time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListExperiments">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListExperimentsAsync(const Model::ListExperimentsRequest& request, const ListExperimentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the flow definitions in your account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListFlowDefinitions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFlowDefinitionsOutcome ListFlowDefinitions(const Model::ListFlowDefinitionsRequest& request) const;

        /**
         * <p>Returns information about the flow definitions in your account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListFlowDefinitions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFlowDefinitionsOutcomeCallable ListFlowDefinitionsCallable(const Model::ListFlowDefinitionsRequest& request) const;

        /**
         * <p>Returns information about the flow definitions in your account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListFlowDefinitions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFlowDefinitionsAsync(const Model::ListFlowDefinitionsRequest& request, const ListFlowDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the human task user interfaces in your
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListHumanTaskUis">AWS
         * API Reference</a></p>
         */
        virtual Model::ListHumanTaskUisOutcome ListHumanTaskUis(const Model::ListHumanTaskUisRequest& request) const;

        /**
         * <p>Returns information about the human task user interfaces in your
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListHumanTaskUis">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListHumanTaskUisOutcomeCallable ListHumanTaskUisCallable(const Model::ListHumanTaskUisRequest& request) const;

        /**
         * <p>Returns information about the human task user interfaces in your
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListHumanTaskUis">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListHumanTaskUisAsync(const Model::ListHumanTaskUisRequest& request, const ListHumanTaskUisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of <a>HyperParameterTuningJobSummary</a> objects that describe
         * the hyperparameter tuning jobs launched in your account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListHyperParameterTuningJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListHyperParameterTuningJobsOutcome ListHyperParameterTuningJobs(const Model::ListHyperParameterTuningJobsRequest& request) const;

        /**
         * <p>Gets a list of <a>HyperParameterTuningJobSummary</a> objects that describe
         * the hyperparameter tuning jobs launched in your account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListHyperParameterTuningJobs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListHyperParameterTuningJobsOutcomeCallable ListHyperParameterTuningJobsCallable(const Model::ListHyperParameterTuningJobsRequest& request) const;

        /**
         * <p>Gets a list of <a>HyperParameterTuningJobSummary</a> objects that describe
         * the hyperparameter tuning jobs launched in your account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListHyperParameterTuningJobs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListHyperParameterTuningJobsAsync(const Model::ListHyperParameterTuningJobsRequest& request, const ListHyperParameterTuningJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the versions of a specified image and their properties. The list can be
         * filtered by creation time or modified time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListImageVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListImageVersionsOutcome ListImageVersions(const Model::ListImageVersionsRequest& request) const;

        /**
         * <p>Lists the versions of a specified image and their properties. The list can be
         * filtered by creation time or modified time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListImageVersions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListImageVersionsOutcomeCallable ListImageVersionsCallable(const Model::ListImageVersionsRequest& request) const;

        /**
         * <p>Lists the versions of a specified image and their properties. The list can be
         * filtered by creation time or modified time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListImageVersions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListImageVersionsAsync(const Model::ListImageVersionsRequest& request, const ListImageVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the images in your account and their properties. The list can be
         * filtered by creation time or modified time, and whether the image name contains
         * a specified string.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListImages">AWS
         * API Reference</a></p>
         */
        virtual Model::ListImagesOutcome ListImages(const Model::ListImagesRequest& request) const;

        /**
         * <p>Lists the images in your account and their properties. The list can be
         * filtered by creation time or modified time, and whether the image name contains
         * a specified string.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListImages">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListImagesOutcomeCallable ListImagesCallable(const Model::ListImagesRequest& request) const;

        /**
         * <p>Lists the images in your account and their properties. The list can be
         * filtered by creation time or modified time, and whether the image name contains
         * a specified string.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListImages">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListImagesAsync(const Model::ListImagesRequest& request, const ListImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of labeling jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListLabelingJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLabelingJobsOutcome ListLabelingJobs(const Model::ListLabelingJobsRequest& request) const;

        /**
         * <p>Gets a list of labeling jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListLabelingJobs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListLabelingJobsOutcomeCallable ListLabelingJobsCallable(const Model::ListLabelingJobsRequest& request) const;

        /**
         * <p>Gets a list of labeling jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListLabelingJobs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListLabelingJobsAsync(const Model::ListLabelingJobsRequest& request, const ListLabelingJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of labeling jobs assigned to a specified work team.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListLabelingJobsForWorkteam">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLabelingJobsForWorkteamOutcome ListLabelingJobsForWorkteam(const Model::ListLabelingJobsForWorkteamRequest& request) const;

        /**
         * <p>Gets a list of labeling jobs assigned to a specified work team.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListLabelingJobsForWorkteam">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListLabelingJobsForWorkteamOutcomeCallable ListLabelingJobsForWorkteamCallable(const Model::ListLabelingJobsForWorkteamRequest& request) const;

        /**
         * <p>Gets a list of labeling jobs assigned to a specified work team.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListLabelingJobsForWorkteam">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListLabelingJobsForWorkteamAsync(const Model::ListLabelingJobsForWorkteamRequest& request, const ListLabelingJobsForWorkteamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the model packages that have been created.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListModelPackages">AWS
         * API Reference</a></p>
         */
        virtual Model::ListModelPackagesOutcome ListModelPackages(const Model::ListModelPackagesRequest& request) const;

        /**
         * <p>Lists the model packages that have been created.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListModelPackages">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListModelPackagesOutcomeCallable ListModelPackagesCallable(const Model::ListModelPackagesRequest& request) const;

        /**
         * <p>Lists the model packages that have been created.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListModelPackages">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListModelPackagesAsync(const Model::ListModelPackagesRequest& request, const ListModelPackagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists models created with the <a>CreateModel</a> API.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListModels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListModelsOutcome ListModels(const Model::ListModelsRequest& request) const;

        /**
         * <p>Lists models created with the <a>CreateModel</a> API.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListModels">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListModelsOutcomeCallable ListModelsCallable(const Model::ListModelsRequest& request) const;

        /**
         * <p>Lists models created with the <a>CreateModel</a> API.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListModels">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListModelsAsync(const Model::ListModelsRequest& request, const ListModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns list of all monitoring job executions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListMonitoringExecutions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMonitoringExecutionsOutcome ListMonitoringExecutions(const Model::ListMonitoringExecutionsRequest& request) const;

        /**
         * <p>Returns list of all monitoring job executions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListMonitoringExecutions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMonitoringExecutionsOutcomeCallable ListMonitoringExecutionsCallable(const Model::ListMonitoringExecutionsRequest& request) const;

        /**
         * <p>Returns list of all monitoring job executions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListMonitoringExecutions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMonitoringExecutionsAsync(const Model::ListMonitoringExecutionsRequest& request, const ListMonitoringExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns list of all monitoring schedules.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListMonitoringSchedules">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMonitoringSchedulesOutcome ListMonitoringSchedules(const Model::ListMonitoringSchedulesRequest& request) const;

        /**
         * <p>Returns list of all monitoring schedules.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListMonitoringSchedules">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMonitoringSchedulesOutcomeCallable ListMonitoringSchedulesCallable(const Model::ListMonitoringSchedulesRequest& request) const;

        /**
         * <p>Returns list of all monitoring schedules.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListMonitoringSchedules">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMonitoringSchedulesAsync(const Model::ListMonitoringSchedulesRequest& request, const ListMonitoringSchedulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists notebook instance lifestyle configurations created with the
         * <a>CreateNotebookInstanceLifecycleConfig</a> API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListNotebookInstanceLifecycleConfigs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListNotebookInstanceLifecycleConfigsOutcome ListNotebookInstanceLifecycleConfigs(const Model::ListNotebookInstanceLifecycleConfigsRequest& request) const;

        /**
         * <p>Lists notebook instance lifestyle configurations created with the
         * <a>CreateNotebookInstanceLifecycleConfig</a> API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListNotebookInstanceLifecycleConfigs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListNotebookInstanceLifecycleConfigsOutcomeCallable ListNotebookInstanceLifecycleConfigsCallable(const Model::ListNotebookInstanceLifecycleConfigsRequest& request) const;

        /**
         * <p>Lists notebook instance lifestyle configurations created with the
         * <a>CreateNotebookInstanceLifecycleConfig</a> API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListNotebookInstanceLifecycleConfigs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListNotebookInstanceLifecycleConfigsAsync(const Model::ListNotebookInstanceLifecycleConfigsRequest& request, const ListNotebookInstanceLifecycleConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of the Amazon SageMaker notebook instances in the requester's
         * account in an AWS Region. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListNotebookInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::ListNotebookInstancesOutcome ListNotebookInstances(const Model::ListNotebookInstancesRequest& request) const;

        /**
         * <p>Returns a list of the Amazon SageMaker notebook instances in the requester's
         * account in an AWS Region. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListNotebookInstances">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListNotebookInstancesOutcomeCallable ListNotebookInstancesCallable(const Model::ListNotebookInstancesRequest& request) const;

        /**
         * <p>Returns a list of the Amazon SageMaker notebook instances in the requester's
         * account in an AWS Region. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListNotebookInstances">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListNotebookInstancesAsync(const Model::ListNotebookInstancesRequest& request, const ListNotebookInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists processing jobs that satisfy various filters.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListProcessingJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProcessingJobsOutcome ListProcessingJobs(const Model::ListProcessingJobsRequest& request) const;

        /**
         * <p>Lists processing jobs that satisfy various filters.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListProcessingJobs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListProcessingJobsOutcomeCallable ListProcessingJobsCallable(const Model::ListProcessingJobsRequest& request) const;

        /**
         * <p>Lists processing jobs that satisfy various filters.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListProcessingJobs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListProcessingJobsAsync(const Model::ListProcessingJobsRequest& request, const ListProcessingJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of the work teams that you are subscribed to in the AWS
         * Marketplace. The list may be empty if no work team satisfies the filter
         * specified in the <code>NameContains</code> parameter.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListSubscribedWorkteams">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSubscribedWorkteamsOutcome ListSubscribedWorkteams(const Model::ListSubscribedWorkteamsRequest& request) const;

        /**
         * <p>Gets a list of the work teams that you are subscribed to in the AWS
         * Marketplace. The list may be empty if no work team satisfies the filter
         * specified in the <code>NameContains</code> parameter.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListSubscribedWorkteams">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSubscribedWorkteamsOutcomeCallable ListSubscribedWorkteamsCallable(const Model::ListSubscribedWorkteamsRequest& request) const;

        /**
         * <p>Gets a list of the work teams that you are subscribed to in the AWS
         * Marketplace. The list may be empty if no work team satisfies the filter
         * specified in the <code>NameContains</code> parameter.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListSubscribedWorkteams">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSubscribedWorkteamsAsync(const Model::ListSubscribedWorkteamsRequest& request, const ListSubscribedWorkteamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the tags for the specified Amazon SageMaker resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListTags">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsOutcome ListTags(const Model::ListTagsRequest& request) const;

        /**
         * <p>Returns the tags for the specified Amazon SageMaker resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListTags">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsOutcomeCallable ListTagsCallable(const Model::ListTagsRequest& request) const;

        /**
         * <p>Returns the tags for the specified Amazon SageMaker resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListTags">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsAsync(const Model::ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists training jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListTrainingJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTrainingJobsOutcome ListTrainingJobs(const Model::ListTrainingJobsRequest& request) const;

        /**
         * <p>Lists training jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListTrainingJobs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTrainingJobsOutcomeCallable ListTrainingJobsCallable(const Model::ListTrainingJobsRequest& request) const;

        /**
         * <p>Lists training jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListTrainingJobs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTrainingJobsAsync(const Model::ListTrainingJobsRequest& request, const ListTrainingJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of <a>TrainingJobSummary</a> objects that describe the training
         * jobs that a hyperparameter tuning job launched.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListTrainingJobsForHyperParameterTuningJob">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTrainingJobsForHyperParameterTuningJobOutcome ListTrainingJobsForHyperParameterTuningJob(const Model::ListTrainingJobsForHyperParameterTuningJobRequest& request) const;

        /**
         * <p>Gets a list of <a>TrainingJobSummary</a> objects that describe the training
         * jobs that a hyperparameter tuning job launched.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListTrainingJobsForHyperParameterTuningJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTrainingJobsForHyperParameterTuningJobOutcomeCallable ListTrainingJobsForHyperParameterTuningJobCallable(const Model::ListTrainingJobsForHyperParameterTuningJobRequest& request) const;

        /**
         * <p>Gets a list of <a>TrainingJobSummary</a> objects that describe the training
         * jobs that a hyperparameter tuning job launched.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListTrainingJobsForHyperParameterTuningJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTrainingJobsForHyperParameterTuningJobAsync(const Model::ListTrainingJobsForHyperParameterTuningJobRequest& request, const ListTrainingJobsForHyperParameterTuningJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists transform jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListTransformJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTransformJobsOutcome ListTransformJobs(const Model::ListTransformJobsRequest& request) const;

        /**
         * <p>Lists transform jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListTransformJobs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTransformJobsOutcomeCallable ListTransformJobsCallable(const Model::ListTransformJobsRequest& request) const;

        /**
         * <p>Lists transform jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListTransformJobs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTransformJobsAsync(const Model::ListTransformJobsRequest& request, const ListTransformJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the trial components in your account. You can sort the list by trial
         * component name or creation time. You can filter the list to show only components
         * that were created in a specific time range. You can also filter on one of the
         * following:</p> <ul> <li> <p> <code>ExperimentName</code> </p> </li> <li> <p>
         * <code>SourceArn</code> </p> </li> <li> <p> <code>TrialName</code> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListTrialComponents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTrialComponentsOutcome ListTrialComponents(const Model::ListTrialComponentsRequest& request) const;

        /**
         * <p>Lists the trial components in your account. You can sort the list by trial
         * component name or creation time. You can filter the list to show only components
         * that were created in a specific time range. You can also filter on one of the
         * following:</p> <ul> <li> <p> <code>ExperimentName</code> </p> </li> <li> <p>
         * <code>SourceArn</code> </p> </li> <li> <p> <code>TrialName</code> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListTrialComponents">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTrialComponentsOutcomeCallable ListTrialComponentsCallable(const Model::ListTrialComponentsRequest& request) const;

        /**
         * <p>Lists the trial components in your account. You can sort the list by trial
         * component name or creation time. You can filter the list to show only components
         * that were created in a specific time range. You can also filter on one of the
         * following:</p> <ul> <li> <p> <code>ExperimentName</code> </p> </li> <li> <p>
         * <code>SourceArn</code> </p> </li> <li> <p> <code>TrialName</code> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListTrialComponents">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTrialComponentsAsync(const Model::ListTrialComponentsRequest& request, const ListTrialComponentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the trials in your account. Specify an experiment name to limit the
         * list to the trials that are part of that experiment. Specify a trial component
         * name to limit the list to the trials that associated with that trial component.
         * The list can be filtered to show only trials that were created in a specific
         * time range. The list can be sorted by trial name or creation time.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListTrials">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTrialsOutcome ListTrials(const Model::ListTrialsRequest& request) const;

        /**
         * <p>Lists the trials in your account. Specify an experiment name to limit the
         * list to the trials that are part of that experiment. Specify a trial component
         * name to limit the list to the trials that associated with that trial component.
         * The list can be filtered to show only trials that were created in a specific
         * time range. The list can be sorted by trial name or creation time.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListTrials">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTrialsOutcomeCallable ListTrialsCallable(const Model::ListTrialsRequest& request) const;

        /**
         * <p>Lists the trials in your account. Specify an experiment name to limit the
         * list to the trials that are part of that experiment. Specify a trial component
         * name to limit the list to the trials that associated with that trial component.
         * The list can be filtered to show only trials that were created in a specific
         * time range. The list can be sorted by trial name or creation time.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListTrials">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTrialsAsync(const Model::ListTrialsRequest& request, const ListTrialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists user profiles.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListUserProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUserProfilesOutcome ListUserProfiles(const Model::ListUserProfilesRequest& request) const;

        /**
         * <p>Lists user profiles.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListUserProfiles">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListUserProfilesOutcomeCallable ListUserProfilesCallable(const Model::ListUserProfilesRequest& request) const;

        /**
         * <p>Lists user profiles.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListUserProfiles">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListUserProfilesAsync(const Model::ListUserProfilesRequest& request, const ListUserProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Use this operation to list all private and vendor workforces in an AWS
         * Region. Note that you can only have one private workforce per AWS
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListWorkforces">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorkforcesOutcome ListWorkforces(const Model::ListWorkforcesRequest& request) const;

        /**
         * <p>Use this operation to list all private and vendor workforces in an AWS
         * Region. Note that you can only have one private workforce per AWS
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListWorkforces">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListWorkforcesOutcomeCallable ListWorkforcesCallable(const Model::ListWorkforcesRequest& request) const;

        /**
         * <p>Use this operation to list all private and vendor workforces in an AWS
         * Region. Note that you can only have one private workforce per AWS
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListWorkforces">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListWorkforcesAsync(const Model::ListWorkforcesRequest& request, const ListWorkforcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of private work teams that you have defined in a region. The list
         * may be empty if no work team satisfies the filter specified in the
         * <code>NameContains</code> parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListWorkteams">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorkteamsOutcome ListWorkteams(const Model::ListWorkteamsRequest& request) const;

        /**
         * <p>Gets a list of private work teams that you have defined in a region. The list
         * may be empty if no work team satisfies the filter specified in the
         * <code>NameContains</code> parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListWorkteams">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListWorkteamsOutcomeCallable ListWorkteamsCallable(const Model::ListWorkteamsRequest& request) const;

        /**
         * <p>Gets a list of private work teams that you have defined in a region. The list
         * may be empty if no work team satisfies the filter specified in the
         * <code>NameContains</code> parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListWorkteams">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListWorkteamsAsync(const Model::ListWorkteamsRequest& request, const ListWorkteamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Renders the UI template so that you can preview the worker's experience.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/RenderUiTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::RenderUiTemplateOutcome RenderUiTemplate(const Model::RenderUiTemplateRequest& request) const;

        /**
         * <p>Renders the UI template so that you can preview the worker's experience.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/RenderUiTemplate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RenderUiTemplateOutcomeCallable RenderUiTemplateCallable(const Model::RenderUiTemplateRequest& request) const;

        /**
         * <p>Renders the UI template so that you can preview the worker's experience.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/RenderUiTemplate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RenderUiTemplateAsync(const Model::RenderUiTemplateRequest& request, const RenderUiTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Finds Amazon SageMaker resources that match a search query. Matching
         * resources are returned as a list of <code>SearchRecord</code> objects in the
         * response. You can sort the search results by any resource property in a
         * ascending or descending order.</p> <p>You can query against the following value
         * types: numeric, text, Boolean, and timestamp.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/Search">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchOutcome Search(const Model::SearchRequest& request) const;

        /**
         * <p>Finds Amazon SageMaker resources that match a search query. Matching
         * resources are returned as a list of <code>SearchRecord</code> objects in the
         * response. You can sort the search results by any resource property in a
         * ascending or descending order.</p> <p>You can query against the following value
         * types: numeric, text, Boolean, and timestamp.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/Search">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchOutcomeCallable SearchCallable(const Model::SearchRequest& request) const;

        /**
         * <p>Finds Amazon SageMaker resources that match a search query. Matching
         * resources are returned as a list of <code>SearchRecord</code> objects in the
         * response. You can sort the search results by any resource property in a
         * ascending or descending order.</p> <p>You can query against the following value
         * types: numeric, text, Boolean, and timestamp.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/Search">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchAsync(const Model::SearchRequest& request, const SearchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a previously stopped monitoring schedule.</p>  <p>New monitoring
         * schedules are immediately started after creation.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StartMonitoringSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::StartMonitoringScheduleOutcome StartMonitoringSchedule(const Model::StartMonitoringScheduleRequest& request) const;

        /**
         * <p>Starts a previously stopped monitoring schedule.</p>  <p>New monitoring
         * schedules are immediately started after creation.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StartMonitoringSchedule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartMonitoringScheduleOutcomeCallable StartMonitoringScheduleCallable(const Model::StartMonitoringScheduleRequest& request) const;

        /**
         * <p>Starts a previously stopped monitoring schedule.</p>  <p>New monitoring
         * schedules are immediately started after creation.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StartMonitoringSchedule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartMonitoringScheduleAsync(const Model::StartMonitoringScheduleRequest& request, const StartMonitoringScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Launches an ML compute instance with the latest version of the libraries and
         * attaches your ML storage volume. After configuring the notebook instance, Amazon
         * SageMaker sets the notebook instance status to <code>InService</code>. A
         * notebook instance's status must be <code>InService</code> before you can connect
         * to your Jupyter notebook. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StartNotebookInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::StartNotebookInstanceOutcome StartNotebookInstance(const Model::StartNotebookInstanceRequest& request) const;

        /**
         * <p>Launches an ML compute instance with the latest version of the libraries and
         * attaches your ML storage volume. After configuring the notebook instance, Amazon
         * SageMaker sets the notebook instance status to <code>InService</code>. A
         * notebook instance's status must be <code>InService</code> before you can connect
         * to your Jupyter notebook. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StartNotebookInstance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartNotebookInstanceOutcomeCallable StartNotebookInstanceCallable(const Model::StartNotebookInstanceRequest& request) const;

        /**
         * <p>Launches an ML compute instance with the latest version of the libraries and
         * attaches your ML storage volume. After configuring the notebook instance, Amazon
         * SageMaker sets the notebook instance status to <code>InService</code>. A
         * notebook instance's status must be <code>InService</code> before you can connect
         * to your Jupyter notebook. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StartNotebookInstance">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartNotebookInstanceAsync(const Model::StartNotebookInstanceRequest& request, const StartNotebookInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>A method for forcing the termination of a running job.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StopAutoMLJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StopAutoMLJobOutcome StopAutoMLJob(const Model::StopAutoMLJobRequest& request) const;

        /**
         * <p>A method for forcing the termination of a running job.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StopAutoMLJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopAutoMLJobOutcomeCallable StopAutoMLJobCallable(const Model::StopAutoMLJobRequest& request) const;

        /**
         * <p>A method for forcing the termination of a running job.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StopAutoMLJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopAutoMLJobAsync(const Model::StopAutoMLJobRequest& request, const StopAutoMLJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops a model compilation job.</p> <p> To stop a job, Amazon SageMaker sends
         * the algorithm the SIGTERM signal. This gracefully shuts the job down. If the job
         * hasn't stopped, it sends the SIGKILL signal.</p> <p>When it receives a
         * <code>StopCompilationJob</code> request, Amazon SageMaker changes the
         * <a>CompilationJobSummary$CompilationJobStatus</a> of the job to
         * <code>Stopping</code>. After Amazon SageMaker stops the job, it sets the
         * <a>CompilationJobSummary$CompilationJobStatus</a> to <code>Stopped</code>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StopCompilationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StopCompilationJobOutcome StopCompilationJob(const Model::StopCompilationJobRequest& request) const;

        /**
         * <p>Stops a model compilation job.</p> <p> To stop a job, Amazon SageMaker sends
         * the algorithm the SIGTERM signal. This gracefully shuts the job down. If the job
         * hasn't stopped, it sends the SIGKILL signal.</p> <p>When it receives a
         * <code>StopCompilationJob</code> request, Amazon SageMaker changes the
         * <a>CompilationJobSummary$CompilationJobStatus</a> of the job to
         * <code>Stopping</code>. After Amazon SageMaker stops the job, it sets the
         * <a>CompilationJobSummary$CompilationJobStatus</a> to <code>Stopped</code>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StopCompilationJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopCompilationJobOutcomeCallable StopCompilationJobCallable(const Model::StopCompilationJobRequest& request) const;

        /**
         * <p>Stops a model compilation job.</p> <p> To stop a job, Amazon SageMaker sends
         * the algorithm the SIGTERM signal. This gracefully shuts the job down. If the job
         * hasn't stopped, it sends the SIGKILL signal.</p> <p>When it receives a
         * <code>StopCompilationJob</code> request, Amazon SageMaker changes the
         * <a>CompilationJobSummary$CompilationJobStatus</a> of the job to
         * <code>Stopping</code>. After Amazon SageMaker stops the job, it sets the
         * <a>CompilationJobSummary$CompilationJobStatus</a> to <code>Stopped</code>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StopCompilationJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopCompilationJobAsync(const Model::StopCompilationJobRequest& request, const StopCompilationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops a running hyperparameter tuning job and all running training jobs that
         * the tuning job launched.</p> <p>All model artifacts output from the training
         * jobs are stored in Amazon Simple Storage Service (Amazon S3). All data that the
         * training jobs write to Amazon CloudWatch Logs are still available in CloudWatch.
         * After the tuning job moves to the <code>Stopped</code> state, it releases all
         * reserved resources for the tuning job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StopHyperParameterTuningJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StopHyperParameterTuningJobOutcome StopHyperParameterTuningJob(const Model::StopHyperParameterTuningJobRequest& request) const;

        /**
         * <p>Stops a running hyperparameter tuning job and all running training jobs that
         * the tuning job launched.</p> <p>All model artifacts output from the training
         * jobs are stored in Amazon Simple Storage Service (Amazon S3). All data that the
         * training jobs write to Amazon CloudWatch Logs are still available in CloudWatch.
         * After the tuning job moves to the <code>Stopped</code> state, it releases all
         * reserved resources for the tuning job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StopHyperParameterTuningJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopHyperParameterTuningJobOutcomeCallable StopHyperParameterTuningJobCallable(const Model::StopHyperParameterTuningJobRequest& request) const;

        /**
         * <p>Stops a running hyperparameter tuning job and all running training jobs that
         * the tuning job launched.</p> <p>All model artifacts output from the training
         * jobs are stored in Amazon Simple Storage Service (Amazon S3). All data that the
         * training jobs write to Amazon CloudWatch Logs are still available in CloudWatch.
         * After the tuning job moves to the <code>Stopped</code> state, it releases all
         * reserved resources for the tuning job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StopHyperParameterTuningJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopHyperParameterTuningJobAsync(const Model::StopHyperParameterTuningJobRequest& request, const StopHyperParameterTuningJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops a running labeling job. A job that is stopped cannot be restarted. Any
         * results obtained before the job is stopped are placed in the Amazon S3 output
         * bucket.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StopLabelingJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StopLabelingJobOutcome StopLabelingJob(const Model::StopLabelingJobRequest& request) const;

        /**
         * <p>Stops a running labeling job. A job that is stopped cannot be restarted. Any
         * results obtained before the job is stopped are placed in the Amazon S3 output
         * bucket.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StopLabelingJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopLabelingJobOutcomeCallable StopLabelingJobCallable(const Model::StopLabelingJobRequest& request) const;

        /**
         * <p>Stops a running labeling job. A job that is stopped cannot be restarted. Any
         * results obtained before the job is stopped are placed in the Amazon S3 output
         * bucket.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StopLabelingJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopLabelingJobAsync(const Model::StopLabelingJobRequest& request, const StopLabelingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops a previously started monitoring schedule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StopMonitoringSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::StopMonitoringScheduleOutcome StopMonitoringSchedule(const Model::StopMonitoringScheduleRequest& request) const;

        /**
         * <p>Stops a previously started monitoring schedule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StopMonitoringSchedule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopMonitoringScheduleOutcomeCallable StopMonitoringScheduleCallable(const Model::StopMonitoringScheduleRequest& request) const;

        /**
         * <p>Stops a previously started monitoring schedule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StopMonitoringSchedule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopMonitoringScheduleAsync(const Model::StopMonitoringScheduleRequest& request, const StopMonitoringScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Terminates the ML compute instance. Before terminating the instance, Amazon
         * SageMaker disconnects the ML storage volume from it. Amazon SageMaker preserves
         * the ML storage volume. Amazon SageMaker stops charging you for the ML compute
         * instance when you call <code>StopNotebookInstance</code>.</p> <p>To access data
         * on the ML storage volume for a notebook instance that has been terminated, call
         * the <code>StartNotebookInstance</code> API. <code>StartNotebookInstance</code>
         * launches another ML compute instance, configures it, and attaches the preserved
         * ML storage volume so you can continue your work. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StopNotebookInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::StopNotebookInstanceOutcome StopNotebookInstance(const Model::StopNotebookInstanceRequest& request) const;

        /**
         * <p>Terminates the ML compute instance. Before terminating the instance, Amazon
         * SageMaker disconnects the ML storage volume from it. Amazon SageMaker preserves
         * the ML storage volume. Amazon SageMaker stops charging you for the ML compute
         * instance when you call <code>StopNotebookInstance</code>.</p> <p>To access data
         * on the ML storage volume for a notebook instance that has been terminated, call
         * the <code>StartNotebookInstance</code> API. <code>StartNotebookInstance</code>
         * launches another ML compute instance, configures it, and attaches the preserved
         * ML storage volume so you can continue your work. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StopNotebookInstance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopNotebookInstanceOutcomeCallable StopNotebookInstanceCallable(const Model::StopNotebookInstanceRequest& request) const;

        /**
         * <p>Terminates the ML compute instance. Before terminating the instance, Amazon
         * SageMaker disconnects the ML storage volume from it. Amazon SageMaker preserves
         * the ML storage volume. Amazon SageMaker stops charging you for the ML compute
         * instance when you call <code>StopNotebookInstance</code>.</p> <p>To access data
         * on the ML storage volume for a notebook instance that has been terminated, call
         * the <code>StartNotebookInstance</code> API. <code>StartNotebookInstance</code>
         * launches another ML compute instance, configures it, and attaches the preserved
         * ML storage volume so you can continue your work. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StopNotebookInstance">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopNotebookInstanceAsync(const Model::StopNotebookInstanceRequest& request, const StopNotebookInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops a processing job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StopProcessingJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StopProcessingJobOutcome StopProcessingJob(const Model::StopProcessingJobRequest& request) const;

        /**
         * <p>Stops a processing job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StopProcessingJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopProcessingJobOutcomeCallable StopProcessingJobCallable(const Model::StopProcessingJobRequest& request) const;

        /**
         * <p>Stops a processing job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StopProcessingJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopProcessingJobAsync(const Model::StopProcessingJobRequest& request, const StopProcessingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops a training job. To stop a job, Amazon SageMaker sends the algorithm the
         * <code>SIGTERM</code> signal, which delays job termination for 120 seconds.
         * Algorithms might use this 120-second window to save the model artifacts, so the
         * results of the training is not lost. </p> <p>When it receives a
         * <code>StopTrainingJob</code> request, Amazon SageMaker changes the status of the
         * job to <code>Stopping</code>. After Amazon SageMaker stops the job, it sets the
         * status to <code>Stopped</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StopTrainingJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StopTrainingJobOutcome StopTrainingJob(const Model::StopTrainingJobRequest& request) const;

        /**
         * <p>Stops a training job. To stop a job, Amazon SageMaker sends the algorithm the
         * <code>SIGTERM</code> signal, which delays job termination for 120 seconds.
         * Algorithms might use this 120-second window to save the model artifacts, so the
         * results of the training is not lost. </p> <p>When it receives a
         * <code>StopTrainingJob</code> request, Amazon SageMaker changes the status of the
         * job to <code>Stopping</code>. After Amazon SageMaker stops the job, it sets the
         * status to <code>Stopped</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StopTrainingJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopTrainingJobOutcomeCallable StopTrainingJobCallable(const Model::StopTrainingJobRequest& request) const;

        /**
         * <p>Stops a training job. To stop a job, Amazon SageMaker sends the algorithm the
         * <code>SIGTERM</code> signal, which delays job termination for 120 seconds.
         * Algorithms might use this 120-second window to save the model artifacts, so the
         * results of the training is not lost. </p> <p>When it receives a
         * <code>StopTrainingJob</code> request, Amazon SageMaker changes the status of the
         * job to <code>Stopping</code>. After Amazon SageMaker stops the job, it sets the
         * status to <code>Stopped</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StopTrainingJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopTrainingJobAsync(const Model::StopTrainingJobRequest& request, const StopTrainingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops a transform job.</p> <p>When Amazon SageMaker receives a
         * <code>StopTransformJob</code> request, the status of the job changes to
         * <code>Stopping</code>. After Amazon SageMaker stops the job, the status is set
         * to <code>Stopped</code>. When you stop a transform job before it is completed,
         * Amazon SageMaker doesn't store the job's output in Amazon S3.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StopTransformJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StopTransformJobOutcome StopTransformJob(const Model::StopTransformJobRequest& request) const;

        /**
         * <p>Stops a transform job.</p> <p>When Amazon SageMaker receives a
         * <code>StopTransformJob</code> request, the status of the job changes to
         * <code>Stopping</code>. After Amazon SageMaker stops the job, the status is set
         * to <code>Stopped</code>. When you stop a transform job before it is completed,
         * Amazon SageMaker doesn't store the job's output in Amazon S3.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StopTransformJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopTransformJobOutcomeCallable StopTransformJobCallable(const Model::StopTransformJobRequest& request) const;

        /**
         * <p>Stops a transform job.</p> <p>When Amazon SageMaker receives a
         * <code>StopTransformJob</code> request, the status of the job changes to
         * <code>Stopping</code>. After Amazon SageMaker stops the job, the status is set
         * to <code>Stopped</code>. When you stop a transform job before it is completed,
         * Amazon SageMaker doesn't store the job's output in Amazon S3.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StopTransformJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopTransformJobAsync(const Model::StopTransformJobRequest& request, const StopTransformJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the properties of an AppImageConfig.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateAppImageConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAppImageConfigOutcome UpdateAppImageConfig(const Model::UpdateAppImageConfigRequest& request) const;

        /**
         * <p>Updates the properties of an AppImageConfig.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateAppImageConfig">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAppImageConfigOutcomeCallable UpdateAppImageConfigCallable(const Model::UpdateAppImageConfigRequest& request) const;

        /**
         * <p>Updates the properties of an AppImageConfig.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateAppImageConfig">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAppImageConfigAsync(const Model::UpdateAppImageConfigRequest& request, const UpdateAppImageConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified Git repository with the specified values.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateCodeRepository">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCodeRepositoryOutcome UpdateCodeRepository(const Model::UpdateCodeRepositoryRequest& request) const;

        /**
         * <p>Updates the specified Git repository with the specified values.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateCodeRepository">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateCodeRepositoryOutcomeCallable UpdateCodeRepositoryCallable(const Model::UpdateCodeRepositoryRequest& request) const;

        /**
         * <p>Updates the specified Git repository with the specified values.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateCodeRepository">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateCodeRepositoryAsync(const Model::UpdateCodeRepositoryRequest& request, const UpdateCodeRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the default settings for new user profiles in the
         * domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDomainOutcome UpdateDomain(const Model::UpdateDomainRequest& request) const;

        /**
         * <p>Updates the default settings for new user profiles in the
         * domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateDomain">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDomainOutcomeCallable UpdateDomainCallable(const Model::UpdateDomainRequest& request) const;

        /**
         * <p>Updates the default settings for new user profiles in the
         * domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateDomain">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDomainAsync(const Model::UpdateDomainRequest& request, const UpdateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deploys the new <code>EndpointConfig</code> specified in the request,
         * switches to using newly created endpoint, and then deletes resources provisioned
         * for the endpoint using the previous <code>EndpointConfig</code> (there is no
         * availability loss). </p> <p>When Amazon SageMaker receives the request, it sets
         * the endpoint status to <code>Updating</code>. After updating the endpoint, it
         * sets the status to <code>InService</code>. To check the status of an endpoint,
         * use the <a>DescribeEndpoint</a> API. </p>  <p>You must not delete an
         * <code>EndpointConfig</code> in use by an endpoint that is live or while the
         * <code>UpdateEndpoint</code> or <code>CreateEndpoint</code> operations are being
         * performed on the endpoint. To update an endpoint, you must create a new
         * <code>EndpointConfig</code>.</p> <p>If you delete the
         * <code>EndpointConfig</code> of an endpoint that is active or being created or
         * updated you may lose visibility into the instance type the endpoint is using.
         * The endpoint must be deleted in order to stop incurring charges.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEndpointOutcome UpdateEndpoint(const Model::UpdateEndpointRequest& request) const;

        /**
         * <p>Deploys the new <code>EndpointConfig</code> specified in the request,
         * switches to using newly created endpoint, and then deletes resources provisioned
         * for the endpoint using the previous <code>EndpointConfig</code> (there is no
         * availability loss). </p> <p>When Amazon SageMaker receives the request, it sets
         * the endpoint status to <code>Updating</code>. After updating the endpoint, it
         * sets the status to <code>InService</code>. To check the status of an endpoint,
         * use the <a>DescribeEndpoint</a> API. </p>  <p>You must not delete an
         * <code>EndpointConfig</code> in use by an endpoint that is live or while the
         * <code>UpdateEndpoint</code> or <code>CreateEndpoint</code> operations are being
         * performed on the endpoint. To update an endpoint, you must create a new
         * <code>EndpointConfig</code>.</p> <p>If you delete the
         * <code>EndpointConfig</code> of an endpoint that is active or being created or
         * updated you may lose visibility into the instance type the endpoint is using.
         * The endpoint must be deleted in order to stop incurring charges.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateEndpoint">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateEndpointOutcomeCallable UpdateEndpointCallable(const Model::UpdateEndpointRequest& request) const;

        /**
         * <p>Deploys the new <code>EndpointConfig</code> specified in the request,
         * switches to using newly created endpoint, and then deletes resources provisioned
         * for the endpoint using the previous <code>EndpointConfig</code> (there is no
         * availability loss). </p> <p>When Amazon SageMaker receives the request, it sets
         * the endpoint status to <code>Updating</code>. After updating the endpoint, it
         * sets the status to <code>InService</code>. To check the status of an endpoint,
         * use the <a>DescribeEndpoint</a> API. </p>  <p>You must not delete an
         * <code>EndpointConfig</code> in use by an endpoint that is live or while the
         * <code>UpdateEndpoint</code> or <code>CreateEndpoint</code> operations are being
         * performed on the endpoint. To update an endpoint, you must create a new
         * <code>EndpointConfig</code>.</p> <p>If you delete the
         * <code>EndpointConfig</code> of an endpoint that is active or being created or
         * updated you may lose visibility into the instance type the endpoint is using.
         * The endpoint must be deleted in order to stop incurring charges.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateEndpoint">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateEndpointAsync(const Model::UpdateEndpointRequest& request, const UpdateEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates variant weight of one or more variants associated with an existing
         * endpoint, or capacity of one variant associated with an existing endpoint. When
         * it receives the request, Amazon SageMaker sets the endpoint status to
         * <code>Updating</code>. After updating the endpoint, it sets the status to
         * <code>InService</code>. To check the status of an endpoint, use the
         * <a>DescribeEndpoint</a> API. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateEndpointWeightsAndCapacities">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEndpointWeightsAndCapacitiesOutcome UpdateEndpointWeightsAndCapacities(const Model::UpdateEndpointWeightsAndCapacitiesRequest& request) const;

        /**
         * <p>Updates variant weight of one or more variants associated with an existing
         * endpoint, or capacity of one variant associated with an existing endpoint. When
         * it receives the request, Amazon SageMaker sets the endpoint status to
         * <code>Updating</code>. After updating the endpoint, it sets the status to
         * <code>InService</code>. To check the status of an endpoint, use the
         * <a>DescribeEndpoint</a> API. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateEndpointWeightsAndCapacities">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateEndpointWeightsAndCapacitiesOutcomeCallable UpdateEndpointWeightsAndCapacitiesCallable(const Model::UpdateEndpointWeightsAndCapacitiesRequest& request) const;

        /**
         * <p>Updates variant weight of one or more variants associated with an existing
         * endpoint, or capacity of one variant associated with an existing endpoint. When
         * it receives the request, Amazon SageMaker sets the endpoint status to
         * <code>Updating</code>. After updating the endpoint, it sets the status to
         * <code>InService</code>. To check the status of an endpoint, use the
         * <a>DescribeEndpoint</a> API. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateEndpointWeightsAndCapacities">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateEndpointWeightsAndCapacitiesAsync(const Model::UpdateEndpointWeightsAndCapacitiesRequest& request, const UpdateEndpointWeightsAndCapacitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds, updates, or removes the description of an experiment. Updates the
         * display name of an experiment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateExperiment">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateExperimentOutcome UpdateExperiment(const Model::UpdateExperimentRequest& request) const;

        /**
         * <p>Adds, updates, or removes the description of an experiment. Updates the
         * display name of an experiment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateExperiment">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateExperimentOutcomeCallable UpdateExperimentCallable(const Model::UpdateExperimentRequest& request) const;

        /**
         * <p>Adds, updates, or removes the description of an experiment. Updates the
         * display name of an experiment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateExperiment">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateExperimentAsync(const Model::UpdateExperimentRequest& request, const UpdateExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the properties of a SageMaker image. To change the image's tags, use
         * the <a>AddTags</a> and <a>DeleteTags</a> APIs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateImage">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateImageOutcome UpdateImage(const Model::UpdateImageRequest& request) const;

        /**
         * <p>Updates the properties of a SageMaker image. To change the image's tags, use
         * the <a>AddTags</a> and <a>DeleteTags</a> APIs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateImage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateImageOutcomeCallable UpdateImageCallable(const Model::UpdateImageRequest& request) const;

        /**
         * <p>Updates the properties of a SageMaker image. To change the image's tags, use
         * the <a>AddTags</a> and <a>DeleteTags</a> APIs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateImage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateImageAsync(const Model::UpdateImageRequest& request, const UpdateImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a previously created schedule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateMonitoringSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMonitoringScheduleOutcome UpdateMonitoringSchedule(const Model::UpdateMonitoringScheduleRequest& request) const;

        /**
         * <p>Updates a previously created schedule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateMonitoringSchedule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateMonitoringScheduleOutcomeCallable UpdateMonitoringScheduleCallable(const Model::UpdateMonitoringScheduleRequest& request) const;

        /**
         * <p>Updates a previously created schedule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateMonitoringSchedule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateMonitoringScheduleAsync(const Model::UpdateMonitoringScheduleRequest& request, const UpdateMonitoringScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a notebook instance. NotebookInstance updates include upgrading or
         * downgrading the ML compute instance used for your notebook instance to
         * accommodate changes in your workload requirements.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateNotebookInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateNotebookInstanceOutcome UpdateNotebookInstance(const Model::UpdateNotebookInstanceRequest& request) const;

        /**
         * <p>Updates a notebook instance. NotebookInstance updates include upgrading or
         * downgrading the ML compute instance used for your notebook instance to
         * accommodate changes in your workload requirements.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateNotebookInstance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateNotebookInstanceOutcomeCallable UpdateNotebookInstanceCallable(const Model::UpdateNotebookInstanceRequest& request) const;

        /**
         * <p>Updates a notebook instance. NotebookInstance updates include upgrading or
         * downgrading the ML compute instance used for your notebook instance to
         * accommodate changes in your workload requirements.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateNotebookInstance">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateNotebookInstanceAsync(const Model::UpdateNotebookInstanceRequest& request, const UpdateNotebookInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a notebook instance lifecycle configuration created with the
         * <a>CreateNotebookInstanceLifecycleConfig</a> API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateNotebookInstanceLifecycleConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateNotebookInstanceLifecycleConfigOutcome UpdateNotebookInstanceLifecycleConfig(const Model::UpdateNotebookInstanceLifecycleConfigRequest& request) const;

        /**
         * <p>Updates a notebook instance lifecycle configuration created with the
         * <a>CreateNotebookInstanceLifecycleConfig</a> API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateNotebookInstanceLifecycleConfig">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateNotebookInstanceLifecycleConfigOutcomeCallable UpdateNotebookInstanceLifecycleConfigCallable(const Model::UpdateNotebookInstanceLifecycleConfigRequest& request) const;

        /**
         * <p>Updates a notebook instance lifecycle configuration created with the
         * <a>CreateNotebookInstanceLifecycleConfig</a> API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateNotebookInstanceLifecycleConfig">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateNotebookInstanceLifecycleConfigAsync(const Model::UpdateNotebookInstanceLifecycleConfigRequest& request, const UpdateNotebookInstanceLifecycleConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the display name of a trial.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateTrial">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTrialOutcome UpdateTrial(const Model::UpdateTrialRequest& request) const;

        /**
         * <p>Updates the display name of a trial.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateTrial">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateTrialOutcomeCallable UpdateTrialCallable(const Model::UpdateTrialRequest& request) const;

        /**
         * <p>Updates the display name of a trial.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateTrial">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateTrialAsync(const Model::UpdateTrialRequest& request, const UpdateTrialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates one or more properties of a trial component.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateTrialComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTrialComponentOutcome UpdateTrialComponent(const Model::UpdateTrialComponentRequest& request) const;

        /**
         * <p>Updates one or more properties of a trial component.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateTrialComponent">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateTrialComponentOutcomeCallable UpdateTrialComponentCallable(const Model::UpdateTrialComponentRequest& request) const;

        /**
         * <p>Updates one or more properties of a trial component.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateTrialComponent">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateTrialComponentAsync(const Model::UpdateTrialComponentRequest& request, const UpdateTrialComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a user profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateUserProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserProfileOutcome UpdateUserProfile(const Model::UpdateUserProfileRequest& request) const;

        /**
         * <p>Updates a user profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateUserProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateUserProfileOutcomeCallable UpdateUserProfileCallable(const Model::UpdateUserProfileRequest& request) const;

        /**
         * <p>Updates a user profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateUserProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateUserProfileAsync(const Model::UpdateUserProfileRequest& request, const UpdateUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Use this operation to update your workforce. You can use this operation to
         * require that workers use specific IP addresses to work on tasks and to update
         * your OpenID Connect (OIDC) Identity Provider (IdP) workforce configuration.</p>
         * <p> Use <code>SourceIpConfig</code> to restrict worker access to tasks to a
         * specific range of IP addresses. You specify allowed IP addresses by creating a
         * list of up to ten <a
         * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">CIDRs</a>.
         * By default, a workforce isn't restricted to specific IP addresses. If you
         * specify a range of IP addresses, workers who attempt to access tasks using any
         * IP address outside the specified range are denied and get a <code>Not
         * Found</code> error message on the worker portal.</p> <p>Use
         * <code>OidcConfig</code> to update the configuration of a workforce created using
         * your own OIDC IdP. </p>  <p>You can only update your OIDC IdP
         * configuration when there are no work teams associated with your workforce. You
         * can delete work teams using the operation.</p>  <p>After restricting
         * access to a range of IP addresses or updating your OIDC IdP configuration with
         * this operation, you can view details about your update workforce using the
         * operation.</p>  <p>This operation only applies to private
         * workforces.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateWorkforce">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWorkforceOutcome UpdateWorkforce(const Model::UpdateWorkforceRequest& request) const;

        /**
         * <p>Use this operation to update your workforce. You can use this operation to
         * require that workers use specific IP addresses to work on tasks and to update
         * your OpenID Connect (OIDC) Identity Provider (IdP) workforce configuration.</p>
         * <p> Use <code>SourceIpConfig</code> to restrict worker access to tasks to a
         * specific range of IP addresses. You specify allowed IP addresses by creating a
         * list of up to ten <a
         * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">CIDRs</a>.
         * By default, a workforce isn't restricted to specific IP addresses. If you
         * specify a range of IP addresses, workers who attempt to access tasks using any
         * IP address outside the specified range are denied and get a <code>Not
         * Found</code> error message on the worker portal.</p> <p>Use
         * <code>OidcConfig</code> to update the configuration of a workforce created using
         * your own OIDC IdP. </p>  <p>You can only update your OIDC IdP
         * configuration when there are no work teams associated with your workforce. You
         * can delete work teams using the operation.</p>  <p>After restricting
         * access to a range of IP addresses or updating your OIDC IdP configuration with
         * this operation, you can view details about your update workforce using the
         * operation.</p>  <p>This operation only applies to private
         * workforces.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateWorkforce">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateWorkforceOutcomeCallable UpdateWorkforceCallable(const Model::UpdateWorkforceRequest& request) const;

        /**
         * <p>Use this operation to update your workforce. You can use this operation to
         * require that workers use specific IP addresses to work on tasks and to update
         * your OpenID Connect (OIDC) Identity Provider (IdP) workforce configuration.</p>
         * <p> Use <code>SourceIpConfig</code> to restrict worker access to tasks to a
         * specific range of IP addresses. You specify allowed IP addresses by creating a
         * list of up to ten <a
         * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">CIDRs</a>.
         * By default, a workforce isn't restricted to specific IP addresses. If you
         * specify a range of IP addresses, workers who attempt to access tasks using any
         * IP address outside the specified range are denied and get a <code>Not
         * Found</code> error message on the worker portal.</p> <p>Use
         * <code>OidcConfig</code> to update the configuration of a workforce created using
         * your own OIDC IdP. </p>  <p>You can only update your OIDC IdP
         * configuration when there are no work teams associated with your workforce. You
         * can delete work teams using the operation.</p>  <p>After restricting
         * access to a range of IP addresses or updating your OIDC IdP configuration with
         * this operation, you can view details about your update workforce using the
         * operation.</p>  <p>This operation only applies to private
         * workforces.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateWorkforce">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateWorkforceAsync(const Model::UpdateWorkforceRequest& request, const UpdateWorkforceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing work team with new member definitions or
         * description.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateWorkteam">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWorkteamOutcome UpdateWorkteam(const Model::UpdateWorkteamRequest& request) const;

        /**
         * <p>Updates an existing work team with new member definitions or
         * description.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateWorkteam">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateWorkteamOutcomeCallable UpdateWorkteamCallable(const Model::UpdateWorkteamRequest& request) const;

        /**
         * <p>Updates an existing work team with new member definitions or
         * description.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateWorkteam">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateWorkteamAsync(const Model::UpdateWorkteamRequest& request, const UpdateWorkteamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AddTagsAsyncHelper(const Model::AddTagsRequest& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateTrialComponentAsyncHelper(const Model::AssociateTrialComponentRequest& request, const AssociateTrialComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateAlgorithmAsyncHelper(const Model::CreateAlgorithmRequest& request, const CreateAlgorithmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateAppAsyncHelper(const Model::CreateAppRequest& request, const CreateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateAppImageConfigAsyncHelper(const Model::CreateAppImageConfigRequest& request, const CreateAppImageConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateAutoMLJobAsyncHelper(const Model::CreateAutoMLJobRequest& request, const CreateAutoMLJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateCodeRepositoryAsyncHelper(const Model::CreateCodeRepositoryRequest& request, const CreateCodeRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateCompilationJobAsyncHelper(const Model::CreateCompilationJobRequest& request, const CreateCompilationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDomainAsyncHelper(const Model::CreateDomainRequest& request, const CreateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateEndpointAsyncHelper(const Model::CreateEndpointRequest& request, const CreateEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateEndpointConfigAsyncHelper(const Model::CreateEndpointConfigRequest& request, const CreateEndpointConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateExperimentAsyncHelper(const Model::CreateExperimentRequest& request, const CreateExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateFlowDefinitionAsyncHelper(const Model::CreateFlowDefinitionRequest& request, const CreateFlowDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateHumanTaskUiAsyncHelper(const Model::CreateHumanTaskUiRequest& request, const CreateHumanTaskUiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateHyperParameterTuningJobAsyncHelper(const Model::CreateHyperParameterTuningJobRequest& request, const CreateHyperParameterTuningJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateImageAsyncHelper(const Model::CreateImageRequest& request, const CreateImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateImageVersionAsyncHelper(const Model::CreateImageVersionRequest& request, const CreateImageVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateLabelingJobAsyncHelper(const Model::CreateLabelingJobRequest& request, const CreateLabelingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateModelAsyncHelper(const Model::CreateModelRequest& request, const CreateModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateModelPackageAsyncHelper(const Model::CreateModelPackageRequest& request, const CreateModelPackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateMonitoringScheduleAsyncHelper(const Model::CreateMonitoringScheduleRequest& request, const CreateMonitoringScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateNotebookInstanceAsyncHelper(const Model::CreateNotebookInstanceRequest& request, const CreateNotebookInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateNotebookInstanceLifecycleConfigAsyncHelper(const Model::CreateNotebookInstanceLifecycleConfigRequest& request, const CreateNotebookInstanceLifecycleConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePresignedDomainUrlAsyncHelper(const Model::CreatePresignedDomainUrlRequest& request, const CreatePresignedDomainUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePresignedNotebookInstanceUrlAsyncHelper(const Model::CreatePresignedNotebookInstanceUrlRequest& request, const CreatePresignedNotebookInstanceUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateProcessingJobAsyncHelper(const Model::CreateProcessingJobRequest& request, const CreateProcessingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateTrainingJobAsyncHelper(const Model::CreateTrainingJobRequest& request, const CreateTrainingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateTransformJobAsyncHelper(const Model::CreateTransformJobRequest& request, const CreateTransformJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateTrialAsyncHelper(const Model::CreateTrialRequest& request, const CreateTrialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateTrialComponentAsyncHelper(const Model::CreateTrialComponentRequest& request, const CreateTrialComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateUserProfileAsyncHelper(const Model::CreateUserProfileRequest& request, const CreateUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateWorkforceAsyncHelper(const Model::CreateWorkforceRequest& request, const CreateWorkforceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateWorkteamAsyncHelper(const Model::CreateWorkteamRequest& request, const CreateWorkteamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAlgorithmAsyncHelper(const Model::DeleteAlgorithmRequest& request, const DeleteAlgorithmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAppAsyncHelper(const Model::DeleteAppRequest& request, const DeleteAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAppImageConfigAsyncHelper(const Model::DeleteAppImageConfigRequest& request, const DeleteAppImageConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteCodeRepositoryAsyncHelper(const Model::DeleteCodeRepositoryRequest& request, const DeleteCodeRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDomainAsyncHelper(const Model::DeleteDomainRequest& request, const DeleteDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteEndpointAsyncHelper(const Model::DeleteEndpointRequest& request, const DeleteEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteEndpointConfigAsyncHelper(const Model::DeleteEndpointConfigRequest& request, const DeleteEndpointConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteExperimentAsyncHelper(const Model::DeleteExperimentRequest& request, const DeleteExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteFlowDefinitionAsyncHelper(const Model::DeleteFlowDefinitionRequest& request, const DeleteFlowDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteHumanTaskUiAsyncHelper(const Model::DeleteHumanTaskUiRequest& request, const DeleteHumanTaskUiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteImageAsyncHelper(const Model::DeleteImageRequest& request, const DeleteImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteImageVersionAsyncHelper(const Model::DeleteImageVersionRequest& request, const DeleteImageVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteModelAsyncHelper(const Model::DeleteModelRequest& request, const DeleteModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteModelPackageAsyncHelper(const Model::DeleteModelPackageRequest& request, const DeleteModelPackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteMonitoringScheduleAsyncHelper(const Model::DeleteMonitoringScheduleRequest& request, const DeleteMonitoringScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteNotebookInstanceAsyncHelper(const Model::DeleteNotebookInstanceRequest& request, const DeleteNotebookInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteNotebookInstanceLifecycleConfigAsyncHelper(const Model::DeleteNotebookInstanceLifecycleConfigRequest& request, const DeleteNotebookInstanceLifecycleConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteTagsAsyncHelper(const Model::DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteTrialAsyncHelper(const Model::DeleteTrialRequest& request, const DeleteTrialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteTrialComponentAsyncHelper(const Model::DeleteTrialComponentRequest& request, const DeleteTrialComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteUserProfileAsyncHelper(const Model::DeleteUserProfileRequest& request, const DeleteUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteWorkforceAsyncHelper(const Model::DeleteWorkforceRequest& request, const DeleteWorkforceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteWorkteamAsyncHelper(const Model::DeleteWorkteamRequest& request, const DeleteWorkteamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAlgorithmAsyncHelper(const Model::DescribeAlgorithmRequest& request, const DescribeAlgorithmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAppAsyncHelper(const Model::DescribeAppRequest& request, const DescribeAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAppImageConfigAsyncHelper(const Model::DescribeAppImageConfigRequest& request, const DescribeAppImageConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAutoMLJobAsyncHelper(const Model::DescribeAutoMLJobRequest& request, const DescribeAutoMLJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeCodeRepositoryAsyncHelper(const Model::DescribeCodeRepositoryRequest& request, const DescribeCodeRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeCompilationJobAsyncHelper(const Model::DescribeCompilationJobRequest& request, const DescribeCompilationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDomainAsyncHelper(const Model::DescribeDomainRequest& request, const DescribeDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEndpointAsyncHelper(const Model::DescribeEndpointRequest& request, const DescribeEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEndpointConfigAsyncHelper(const Model::DescribeEndpointConfigRequest& request, const DescribeEndpointConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeExperimentAsyncHelper(const Model::DescribeExperimentRequest& request, const DescribeExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeFlowDefinitionAsyncHelper(const Model::DescribeFlowDefinitionRequest& request, const DescribeFlowDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeHumanTaskUiAsyncHelper(const Model::DescribeHumanTaskUiRequest& request, const DescribeHumanTaskUiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeHyperParameterTuningJobAsyncHelper(const Model::DescribeHyperParameterTuningJobRequest& request, const DescribeHyperParameterTuningJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeImageAsyncHelper(const Model::DescribeImageRequest& request, const DescribeImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeImageVersionAsyncHelper(const Model::DescribeImageVersionRequest& request, const DescribeImageVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeLabelingJobAsyncHelper(const Model::DescribeLabelingJobRequest& request, const DescribeLabelingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeModelAsyncHelper(const Model::DescribeModelRequest& request, const DescribeModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeModelPackageAsyncHelper(const Model::DescribeModelPackageRequest& request, const DescribeModelPackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeMonitoringScheduleAsyncHelper(const Model::DescribeMonitoringScheduleRequest& request, const DescribeMonitoringScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeNotebookInstanceAsyncHelper(const Model::DescribeNotebookInstanceRequest& request, const DescribeNotebookInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeNotebookInstanceLifecycleConfigAsyncHelper(const Model::DescribeNotebookInstanceLifecycleConfigRequest& request, const DescribeNotebookInstanceLifecycleConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeProcessingJobAsyncHelper(const Model::DescribeProcessingJobRequest& request, const DescribeProcessingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeSubscribedWorkteamAsyncHelper(const Model::DescribeSubscribedWorkteamRequest& request, const DescribeSubscribedWorkteamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeTrainingJobAsyncHelper(const Model::DescribeTrainingJobRequest& request, const DescribeTrainingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeTransformJobAsyncHelper(const Model::DescribeTransformJobRequest& request, const DescribeTransformJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeTrialAsyncHelper(const Model::DescribeTrialRequest& request, const DescribeTrialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeTrialComponentAsyncHelper(const Model::DescribeTrialComponentRequest& request, const DescribeTrialComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeUserProfileAsyncHelper(const Model::DescribeUserProfileRequest& request, const DescribeUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeWorkforceAsyncHelper(const Model::DescribeWorkforceRequest& request, const DescribeWorkforceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeWorkteamAsyncHelper(const Model::DescribeWorkteamRequest& request, const DescribeWorkteamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateTrialComponentAsyncHelper(const Model::DisassociateTrialComponentRequest& request, const DisassociateTrialComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSearchSuggestionsAsyncHelper(const Model::GetSearchSuggestionsRequest& request, const GetSearchSuggestionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAlgorithmsAsyncHelper(const Model::ListAlgorithmsRequest& request, const ListAlgorithmsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAppImageConfigsAsyncHelper(const Model::ListAppImageConfigsRequest& request, const ListAppImageConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAppsAsyncHelper(const Model::ListAppsRequest& request, const ListAppsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAutoMLJobsAsyncHelper(const Model::ListAutoMLJobsRequest& request, const ListAutoMLJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListCandidatesForAutoMLJobAsyncHelper(const Model::ListCandidatesForAutoMLJobRequest& request, const ListCandidatesForAutoMLJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListCodeRepositoriesAsyncHelper(const Model::ListCodeRepositoriesRequest& request, const ListCodeRepositoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListCompilationJobsAsyncHelper(const Model::ListCompilationJobsRequest& request, const ListCompilationJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDomainsAsyncHelper(const Model::ListDomainsRequest& request, const ListDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListEndpointConfigsAsyncHelper(const Model::ListEndpointConfigsRequest& request, const ListEndpointConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListEndpointsAsyncHelper(const Model::ListEndpointsRequest& request, const ListEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListExperimentsAsyncHelper(const Model::ListExperimentsRequest& request, const ListExperimentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListFlowDefinitionsAsyncHelper(const Model::ListFlowDefinitionsRequest& request, const ListFlowDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListHumanTaskUisAsyncHelper(const Model::ListHumanTaskUisRequest& request, const ListHumanTaskUisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListHyperParameterTuningJobsAsyncHelper(const Model::ListHyperParameterTuningJobsRequest& request, const ListHyperParameterTuningJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListImageVersionsAsyncHelper(const Model::ListImageVersionsRequest& request, const ListImageVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListImagesAsyncHelper(const Model::ListImagesRequest& request, const ListImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListLabelingJobsAsyncHelper(const Model::ListLabelingJobsRequest& request, const ListLabelingJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListLabelingJobsForWorkteamAsyncHelper(const Model::ListLabelingJobsForWorkteamRequest& request, const ListLabelingJobsForWorkteamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListModelPackagesAsyncHelper(const Model::ListModelPackagesRequest& request, const ListModelPackagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListModelsAsyncHelper(const Model::ListModelsRequest& request, const ListModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListMonitoringExecutionsAsyncHelper(const Model::ListMonitoringExecutionsRequest& request, const ListMonitoringExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListMonitoringSchedulesAsyncHelper(const Model::ListMonitoringSchedulesRequest& request, const ListMonitoringSchedulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListNotebookInstanceLifecycleConfigsAsyncHelper(const Model::ListNotebookInstanceLifecycleConfigsRequest& request, const ListNotebookInstanceLifecycleConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListNotebookInstancesAsyncHelper(const Model::ListNotebookInstancesRequest& request, const ListNotebookInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListProcessingJobsAsyncHelper(const Model::ListProcessingJobsRequest& request, const ListProcessingJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSubscribedWorkteamsAsyncHelper(const Model::ListSubscribedWorkteamsRequest& request, const ListSubscribedWorkteamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsAsyncHelper(const Model::ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTrainingJobsAsyncHelper(const Model::ListTrainingJobsRequest& request, const ListTrainingJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTrainingJobsForHyperParameterTuningJobAsyncHelper(const Model::ListTrainingJobsForHyperParameterTuningJobRequest& request, const ListTrainingJobsForHyperParameterTuningJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTransformJobsAsyncHelper(const Model::ListTransformJobsRequest& request, const ListTransformJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTrialComponentsAsyncHelper(const Model::ListTrialComponentsRequest& request, const ListTrialComponentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTrialsAsyncHelper(const Model::ListTrialsRequest& request, const ListTrialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListUserProfilesAsyncHelper(const Model::ListUserProfilesRequest& request, const ListUserProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListWorkforcesAsyncHelper(const Model::ListWorkforcesRequest& request, const ListWorkforcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListWorkteamsAsyncHelper(const Model::ListWorkteamsRequest& request, const ListWorkteamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RenderUiTemplateAsyncHelper(const Model::RenderUiTemplateRequest& request, const RenderUiTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SearchAsyncHelper(const Model::SearchRequest& request, const SearchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartMonitoringScheduleAsyncHelper(const Model::StartMonitoringScheduleRequest& request, const StartMonitoringScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartNotebookInstanceAsyncHelper(const Model::StartNotebookInstanceRequest& request, const StartNotebookInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopAutoMLJobAsyncHelper(const Model::StopAutoMLJobRequest& request, const StopAutoMLJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopCompilationJobAsyncHelper(const Model::StopCompilationJobRequest& request, const StopCompilationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopHyperParameterTuningJobAsyncHelper(const Model::StopHyperParameterTuningJobRequest& request, const StopHyperParameterTuningJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopLabelingJobAsyncHelper(const Model::StopLabelingJobRequest& request, const StopLabelingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopMonitoringScheduleAsyncHelper(const Model::StopMonitoringScheduleRequest& request, const StopMonitoringScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopNotebookInstanceAsyncHelper(const Model::StopNotebookInstanceRequest& request, const StopNotebookInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopProcessingJobAsyncHelper(const Model::StopProcessingJobRequest& request, const StopProcessingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopTrainingJobAsyncHelper(const Model::StopTrainingJobRequest& request, const StopTrainingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopTransformJobAsyncHelper(const Model::StopTransformJobRequest& request, const StopTransformJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAppImageConfigAsyncHelper(const Model::UpdateAppImageConfigRequest& request, const UpdateAppImageConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateCodeRepositoryAsyncHelper(const Model::UpdateCodeRepositoryRequest& request, const UpdateCodeRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDomainAsyncHelper(const Model::UpdateDomainRequest& request, const UpdateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateEndpointAsyncHelper(const Model::UpdateEndpointRequest& request, const UpdateEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateEndpointWeightsAndCapacitiesAsyncHelper(const Model::UpdateEndpointWeightsAndCapacitiesRequest& request, const UpdateEndpointWeightsAndCapacitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateExperimentAsyncHelper(const Model::UpdateExperimentRequest& request, const UpdateExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateImageAsyncHelper(const Model::UpdateImageRequest& request, const UpdateImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateMonitoringScheduleAsyncHelper(const Model::UpdateMonitoringScheduleRequest& request, const UpdateMonitoringScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateNotebookInstanceAsyncHelper(const Model::UpdateNotebookInstanceRequest& request, const UpdateNotebookInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateNotebookInstanceLifecycleConfigAsyncHelper(const Model::UpdateNotebookInstanceLifecycleConfigRequest& request, const UpdateNotebookInstanceLifecycleConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateTrialAsyncHelper(const Model::UpdateTrialRequest& request, const UpdateTrialResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateTrialComponentAsyncHelper(const Model::UpdateTrialComponentRequest& request, const UpdateTrialComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateUserProfileAsyncHelper(const Model::UpdateUserProfileRequest& request, const UpdateUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateWorkforceAsyncHelper(const Model::UpdateWorkforceRequest& request, const UpdateWorkforceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateWorkteamAsyncHelper(const Model::UpdateWorkteamRequest& request, const UpdateWorkteamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace SageMaker
} // namespace Aws
