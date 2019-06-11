/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
#include <aws/sagemaker/model/CreateAlgorithmResult.h>
#include <aws/sagemaker/model/CreateCodeRepositoryResult.h>
#include <aws/sagemaker/model/CreateCompilationJobResult.h>
#include <aws/sagemaker/model/CreateEndpointResult.h>
#include <aws/sagemaker/model/CreateEndpointConfigResult.h>
#include <aws/sagemaker/model/CreateHyperParameterTuningJobResult.h>
#include <aws/sagemaker/model/CreateLabelingJobResult.h>
#include <aws/sagemaker/model/CreateModelResult.h>
#include <aws/sagemaker/model/CreateModelPackageResult.h>
#include <aws/sagemaker/model/CreateNotebookInstanceResult.h>
#include <aws/sagemaker/model/CreateNotebookInstanceLifecycleConfigResult.h>
#include <aws/sagemaker/model/CreatePresignedNotebookInstanceUrlResult.h>
#include <aws/sagemaker/model/CreateTrainingJobResult.h>
#include <aws/sagemaker/model/CreateTransformJobResult.h>
#include <aws/sagemaker/model/CreateWorkteamResult.h>
#include <aws/sagemaker/model/DeleteTagsResult.h>
#include <aws/sagemaker/model/DeleteWorkteamResult.h>
#include <aws/sagemaker/model/DescribeAlgorithmResult.h>
#include <aws/sagemaker/model/DescribeCodeRepositoryResult.h>
#include <aws/sagemaker/model/DescribeCompilationJobResult.h>
#include <aws/sagemaker/model/DescribeEndpointResult.h>
#include <aws/sagemaker/model/DescribeEndpointConfigResult.h>
#include <aws/sagemaker/model/DescribeHyperParameterTuningJobResult.h>
#include <aws/sagemaker/model/DescribeLabelingJobResult.h>
#include <aws/sagemaker/model/DescribeModelResult.h>
#include <aws/sagemaker/model/DescribeModelPackageResult.h>
#include <aws/sagemaker/model/DescribeNotebookInstanceResult.h>
#include <aws/sagemaker/model/DescribeNotebookInstanceLifecycleConfigResult.h>
#include <aws/sagemaker/model/DescribeSubscribedWorkteamResult.h>
#include <aws/sagemaker/model/DescribeTrainingJobResult.h>
#include <aws/sagemaker/model/DescribeTransformJobResult.h>
#include <aws/sagemaker/model/DescribeWorkteamResult.h>
#include <aws/sagemaker/model/GetSearchSuggestionsResult.h>
#include <aws/sagemaker/model/ListAlgorithmsResult.h>
#include <aws/sagemaker/model/ListCodeRepositoriesResult.h>
#include <aws/sagemaker/model/ListCompilationJobsResult.h>
#include <aws/sagemaker/model/ListEndpointConfigsResult.h>
#include <aws/sagemaker/model/ListEndpointsResult.h>
#include <aws/sagemaker/model/ListHyperParameterTuningJobsResult.h>
#include <aws/sagemaker/model/ListLabelingJobsResult.h>
#include <aws/sagemaker/model/ListLabelingJobsForWorkteamResult.h>
#include <aws/sagemaker/model/ListModelPackagesResult.h>
#include <aws/sagemaker/model/ListModelsResult.h>
#include <aws/sagemaker/model/ListNotebookInstanceLifecycleConfigsResult.h>
#include <aws/sagemaker/model/ListNotebookInstancesResult.h>
#include <aws/sagemaker/model/ListSubscribedWorkteamsResult.h>
#include <aws/sagemaker/model/ListTagsResult.h>
#include <aws/sagemaker/model/ListTrainingJobsResult.h>
#include <aws/sagemaker/model/ListTrainingJobsForHyperParameterTuningJobResult.h>
#include <aws/sagemaker/model/ListTransformJobsResult.h>
#include <aws/sagemaker/model/ListWorkteamsResult.h>
#include <aws/sagemaker/model/RenderUiTemplateResult.h>
#include <aws/sagemaker/model/SearchResult.h>
#include <aws/sagemaker/model/UpdateCodeRepositoryResult.h>
#include <aws/sagemaker/model/UpdateEndpointResult.h>
#include <aws/sagemaker/model/UpdateEndpointWeightsAndCapacitiesResult.h>
#include <aws/sagemaker/model/UpdateNotebookInstanceResult.h>
#include <aws/sagemaker/model/UpdateNotebookInstanceLifecycleConfigResult.h>
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
        class CreateAlgorithmRequest;
        class CreateCodeRepositoryRequest;
        class CreateCompilationJobRequest;
        class CreateEndpointRequest;
        class CreateEndpointConfigRequest;
        class CreateHyperParameterTuningJobRequest;
        class CreateLabelingJobRequest;
        class CreateModelRequest;
        class CreateModelPackageRequest;
        class CreateNotebookInstanceRequest;
        class CreateNotebookInstanceLifecycleConfigRequest;
        class CreatePresignedNotebookInstanceUrlRequest;
        class CreateTrainingJobRequest;
        class CreateTransformJobRequest;
        class CreateWorkteamRequest;
        class DeleteAlgorithmRequest;
        class DeleteCodeRepositoryRequest;
        class DeleteEndpointRequest;
        class DeleteEndpointConfigRequest;
        class DeleteModelRequest;
        class DeleteModelPackageRequest;
        class DeleteNotebookInstanceRequest;
        class DeleteNotebookInstanceLifecycleConfigRequest;
        class DeleteTagsRequest;
        class DeleteWorkteamRequest;
        class DescribeAlgorithmRequest;
        class DescribeCodeRepositoryRequest;
        class DescribeCompilationJobRequest;
        class DescribeEndpointRequest;
        class DescribeEndpointConfigRequest;
        class DescribeHyperParameterTuningJobRequest;
        class DescribeLabelingJobRequest;
        class DescribeModelRequest;
        class DescribeModelPackageRequest;
        class DescribeNotebookInstanceRequest;
        class DescribeNotebookInstanceLifecycleConfigRequest;
        class DescribeSubscribedWorkteamRequest;
        class DescribeTrainingJobRequest;
        class DescribeTransformJobRequest;
        class DescribeWorkteamRequest;
        class GetSearchSuggestionsRequest;
        class ListAlgorithmsRequest;
        class ListCodeRepositoriesRequest;
        class ListCompilationJobsRequest;
        class ListEndpointConfigsRequest;
        class ListEndpointsRequest;
        class ListHyperParameterTuningJobsRequest;
        class ListLabelingJobsRequest;
        class ListLabelingJobsForWorkteamRequest;
        class ListModelPackagesRequest;
        class ListModelsRequest;
        class ListNotebookInstanceLifecycleConfigsRequest;
        class ListNotebookInstancesRequest;
        class ListSubscribedWorkteamsRequest;
        class ListTagsRequest;
        class ListTrainingJobsRequest;
        class ListTrainingJobsForHyperParameterTuningJobRequest;
        class ListTransformJobsRequest;
        class ListWorkteamsRequest;
        class RenderUiTemplateRequest;
        class SearchRequest;
        class StartNotebookInstanceRequest;
        class StopCompilationJobRequest;
        class StopHyperParameterTuningJobRequest;
        class StopLabelingJobRequest;
        class StopNotebookInstanceRequest;
        class StopTrainingJobRequest;
        class StopTransformJobRequest;
        class UpdateCodeRepositoryRequest;
        class UpdateEndpointRequest;
        class UpdateEndpointWeightsAndCapacitiesRequest;
        class UpdateNotebookInstanceRequest;
        class UpdateNotebookInstanceLifecycleConfigRequest;
        class UpdateWorkteamRequest;

        typedef Aws::Utils::Outcome<AddTagsResult, Aws::Client::AWSError<SageMakerErrors>> AddTagsOutcome;
        typedef Aws::Utils::Outcome<CreateAlgorithmResult, Aws::Client::AWSError<SageMakerErrors>> CreateAlgorithmOutcome;
        typedef Aws::Utils::Outcome<CreateCodeRepositoryResult, Aws::Client::AWSError<SageMakerErrors>> CreateCodeRepositoryOutcome;
        typedef Aws::Utils::Outcome<CreateCompilationJobResult, Aws::Client::AWSError<SageMakerErrors>> CreateCompilationJobOutcome;
        typedef Aws::Utils::Outcome<CreateEndpointResult, Aws::Client::AWSError<SageMakerErrors>> CreateEndpointOutcome;
        typedef Aws::Utils::Outcome<CreateEndpointConfigResult, Aws::Client::AWSError<SageMakerErrors>> CreateEndpointConfigOutcome;
        typedef Aws::Utils::Outcome<CreateHyperParameterTuningJobResult, Aws::Client::AWSError<SageMakerErrors>> CreateHyperParameterTuningJobOutcome;
        typedef Aws::Utils::Outcome<CreateLabelingJobResult, Aws::Client::AWSError<SageMakerErrors>> CreateLabelingJobOutcome;
        typedef Aws::Utils::Outcome<CreateModelResult, Aws::Client::AWSError<SageMakerErrors>> CreateModelOutcome;
        typedef Aws::Utils::Outcome<CreateModelPackageResult, Aws::Client::AWSError<SageMakerErrors>> CreateModelPackageOutcome;
        typedef Aws::Utils::Outcome<CreateNotebookInstanceResult, Aws::Client::AWSError<SageMakerErrors>> CreateNotebookInstanceOutcome;
        typedef Aws::Utils::Outcome<CreateNotebookInstanceLifecycleConfigResult, Aws::Client::AWSError<SageMakerErrors>> CreateNotebookInstanceLifecycleConfigOutcome;
        typedef Aws::Utils::Outcome<CreatePresignedNotebookInstanceUrlResult, Aws::Client::AWSError<SageMakerErrors>> CreatePresignedNotebookInstanceUrlOutcome;
        typedef Aws::Utils::Outcome<CreateTrainingJobResult, Aws::Client::AWSError<SageMakerErrors>> CreateTrainingJobOutcome;
        typedef Aws::Utils::Outcome<CreateTransformJobResult, Aws::Client::AWSError<SageMakerErrors>> CreateTransformJobOutcome;
        typedef Aws::Utils::Outcome<CreateWorkteamResult, Aws::Client::AWSError<SageMakerErrors>> CreateWorkteamOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<SageMakerErrors>> DeleteAlgorithmOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<SageMakerErrors>> DeleteCodeRepositoryOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<SageMakerErrors>> DeleteEndpointOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<SageMakerErrors>> DeleteEndpointConfigOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<SageMakerErrors>> DeleteModelOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<SageMakerErrors>> DeleteModelPackageOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<SageMakerErrors>> DeleteNotebookInstanceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<SageMakerErrors>> DeleteNotebookInstanceLifecycleConfigOutcome;
        typedef Aws::Utils::Outcome<DeleteTagsResult, Aws::Client::AWSError<SageMakerErrors>> DeleteTagsOutcome;
        typedef Aws::Utils::Outcome<DeleteWorkteamResult, Aws::Client::AWSError<SageMakerErrors>> DeleteWorkteamOutcome;
        typedef Aws::Utils::Outcome<DescribeAlgorithmResult, Aws::Client::AWSError<SageMakerErrors>> DescribeAlgorithmOutcome;
        typedef Aws::Utils::Outcome<DescribeCodeRepositoryResult, Aws::Client::AWSError<SageMakerErrors>> DescribeCodeRepositoryOutcome;
        typedef Aws::Utils::Outcome<DescribeCompilationJobResult, Aws::Client::AWSError<SageMakerErrors>> DescribeCompilationJobOutcome;
        typedef Aws::Utils::Outcome<DescribeEndpointResult, Aws::Client::AWSError<SageMakerErrors>> DescribeEndpointOutcome;
        typedef Aws::Utils::Outcome<DescribeEndpointConfigResult, Aws::Client::AWSError<SageMakerErrors>> DescribeEndpointConfigOutcome;
        typedef Aws::Utils::Outcome<DescribeHyperParameterTuningJobResult, Aws::Client::AWSError<SageMakerErrors>> DescribeHyperParameterTuningJobOutcome;
        typedef Aws::Utils::Outcome<DescribeLabelingJobResult, Aws::Client::AWSError<SageMakerErrors>> DescribeLabelingJobOutcome;
        typedef Aws::Utils::Outcome<DescribeModelResult, Aws::Client::AWSError<SageMakerErrors>> DescribeModelOutcome;
        typedef Aws::Utils::Outcome<DescribeModelPackageResult, Aws::Client::AWSError<SageMakerErrors>> DescribeModelPackageOutcome;
        typedef Aws::Utils::Outcome<DescribeNotebookInstanceResult, Aws::Client::AWSError<SageMakerErrors>> DescribeNotebookInstanceOutcome;
        typedef Aws::Utils::Outcome<DescribeNotebookInstanceLifecycleConfigResult, Aws::Client::AWSError<SageMakerErrors>> DescribeNotebookInstanceLifecycleConfigOutcome;
        typedef Aws::Utils::Outcome<DescribeSubscribedWorkteamResult, Aws::Client::AWSError<SageMakerErrors>> DescribeSubscribedWorkteamOutcome;
        typedef Aws::Utils::Outcome<DescribeTrainingJobResult, Aws::Client::AWSError<SageMakerErrors>> DescribeTrainingJobOutcome;
        typedef Aws::Utils::Outcome<DescribeTransformJobResult, Aws::Client::AWSError<SageMakerErrors>> DescribeTransformJobOutcome;
        typedef Aws::Utils::Outcome<DescribeWorkteamResult, Aws::Client::AWSError<SageMakerErrors>> DescribeWorkteamOutcome;
        typedef Aws::Utils::Outcome<GetSearchSuggestionsResult, Aws::Client::AWSError<SageMakerErrors>> GetSearchSuggestionsOutcome;
        typedef Aws::Utils::Outcome<ListAlgorithmsResult, Aws::Client::AWSError<SageMakerErrors>> ListAlgorithmsOutcome;
        typedef Aws::Utils::Outcome<ListCodeRepositoriesResult, Aws::Client::AWSError<SageMakerErrors>> ListCodeRepositoriesOutcome;
        typedef Aws::Utils::Outcome<ListCompilationJobsResult, Aws::Client::AWSError<SageMakerErrors>> ListCompilationJobsOutcome;
        typedef Aws::Utils::Outcome<ListEndpointConfigsResult, Aws::Client::AWSError<SageMakerErrors>> ListEndpointConfigsOutcome;
        typedef Aws::Utils::Outcome<ListEndpointsResult, Aws::Client::AWSError<SageMakerErrors>> ListEndpointsOutcome;
        typedef Aws::Utils::Outcome<ListHyperParameterTuningJobsResult, Aws::Client::AWSError<SageMakerErrors>> ListHyperParameterTuningJobsOutcome;
        typedef Aws::Utils::Outcome<ListLabelingJobsResult, Aws::Client::AWSError<SageMakerErrors>> ListLabelingJobsOutcome;
        typedef Aws::Utils::Outcome<ListLabelingJobsForWorkteamResult, Aws::Client::AWSError<SageMakerErrors>> ListLabelingJobsForWorkteamOutcome;
        typedef Aws::Utils::Outcome<ListModelPackagesResult, Aws::Client::AWSError<SageMakerErrors>> ListModelPackagesOutcome;
        typedef Aws::Utils::Outcome<ListModelsResult, Aws::Client::AWSError<SageMakerErrors>> ListModelsOutcome;
        typedef Aws::Utils::Outcome<ListNotebookInstanceLifecycleConfigsResult, Aws::Client::AWSError<SageMakerErrors>> ListNotebookInstanceLifecycleConfigsOutcome;
        typedef Aws::Utils::Outcome<ListNotebookInstancesResult, Aws::Client::AWSError<SageMakerErrors>> ListNotebookInstancesOutcome;
        typedef Aws::Utils::Outcome<ListSubscribedWorkteamsResult, Aws::Client::AWSError<SageMakerErrors>> ListSubscribedWorkteamsOutcome;
        typedef Aws::Utils::Outcome<ListTagsResult, Aws::Client::AWSError<SageMakerErrors>> ListTagsOutcome;
        typedef Aws::Utils::Outcome<ListTrainingJobsResult, Aws::Client::AWSError<SageMakerErrors>> ListTrainingJobsOutcome;
        typedef Aws::Utils::Outcome<ListTrainingJobsForHyperParameterTuningJobResult, Aws::Client::AWSError<SageMakerErrors>> ListTrainingJobsForHyperParameterTuningJobOutcome;
        typedef Aws::Utils::Outcome<ListTransformJobsResult, Aws::Client::AWSError<SageMakerErrors>> ListTransformJobsOutcome;
        typedef Aws::Utils::Outcome<ListWorkteamsResult, Aws::Client::AWSError<SageMakerErrors>> ListWorkteamsOutcome;
        typedef Aws::Utils::Outcome<RenderUiTemplateResult, Aws::Client::AWSError<SageMakerErrors>> RenderUiTemplateOutcome;
        typedef Aws::Utils::Outcome<SearchResult, Aws::Client::AWSError<SageMakerErrors>> SearchOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<SageMakerErrors>> StartNotebookInstanceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<SageMakerErrors>> StopCompilationJobOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<SageMakerErrors>> StopHyperParameterTuningJobOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<SageMakerErrors>> StopLabelingJobOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<SageMakerErrors>> StopNotebookInstanceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<SageMakerErrors>> StopTrainingJobOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<SageMakerErrors>> StopTransformJobOutcome;
        typedef Aws::Utils::Outcome<UpdateCodeRepositoryResult, Aws::Client::AWSError<SageMakerErrors>> UpdateCodeRepositoryOutcome;
        typedef Aws::Utils::Outcome<UpdateEndpointResult, Aws::Client::AWSError<SageMakerErrors>> UpdateEndpointOutcome;
        typedef Aws::Utils::Outcome<UpdateEndpointWeightsAndCapacitiesResult, Aws::Client::AWSError<SageMakerErrors>> UpdateEndpointWeightsAndCapacitiesOutcome;
        typedef Aws::Utils::Outcome<UpdateNotebookInstanceResult, Aws::Client::AWSError<SageMakerErrors>> UpdateNotebookInstanceOutcome;
        typedef Aws::Utils::Outcome<UpdateNotebookInstanceLifecycleConfigResult, Aws::Client::AWSError<SageMakerErrors>> UpdateNotebookInstanceLifecycleConfigOutcome;
        typedef Aws::Utils::Outcome<UpdateWorkteamResult, Aws::Client::AWSError<SageMakerErrors>> UpdateWorkteamOutcome;

        typedef std::future<AddTagsOutcome> AddTagsOutcomeCallable;
        typedef std::future<CreateAlgorithmOutcome> CreateAlgorithmOutcomeCallable;
        typedef std::future<CreateCodeRepositoryOutcome> CreateCodeRepositoryOutcomeCallable;
        typedef std::future<CreateCompilationJobOutcome> CreateCompilationJobOutcomeCallable;
        typedef std::future<CreateEndpointOutcome> CreateEndpointOutcomeCallable;
        typedef std::future<CreateEndpointConfigOutcome> CreateEndpointConfigOutcomeCallable;
        typedef std::future<CreateHyperParameterTuningJobOutcome> CreateHyperParameterTuningJobOutcomeCallable;
        typedef std::future<CreateLabelingJobOutcome> CreateLabelingJobOutcomeCallable;
        typedef std::future<CreateModelOutcome> CreateModelOutcomeCallable;
        typedef std::future<CreateModelPackageOutcome> CreateModelPackageOutcomeCallable;
        typedef std::future<CreateNotebookInstanceOutcome> CreateNotebookInstanceOutcomeCallable;
        typedef std::future<CreateNotebookInstanceLifecycleConfigOutcome> CreateNotebookInstanceLifecycleConfigOutcomeCallable;
        typedef std::future<CreatePresignedNotebookInstanceUrlOutcome> CreatePresignedNotebookInstanceUrlOutcomeCallable;
        typedef std::future<CreateTrainingJobOutcome> CreateTrainingJobOutcomeCallable;
        typedef std::future<CreateTransformJobOutcome> CreateTransformJobOutcomeCallable;
        typedef std::future<CreateWorkteamOutcome> CreateWorkteamOutcomeCallable;
        typedef std::future<DeleteAlgorithmOutcome> DeleteAlgorithmOutcomeCallable;
        typedef std::future<DeleteCodeRepositoryOutcome> DeleteCodeRepositoryOutcomeCallable;
        typedef std::future<DeleteEndpointOutcome> DeleteEndpointOutcomeCallable;
        typedef std::future<DeleteEndpointConfigOutcome> DeleteEndpointConfigOutcomeCallable;
        typedef std::future<DeleteModelOutcome> DeleteModelOutcomeCallable;
        typedef std::future<DeleteModelPackageOutcome> DeleteModelPackageOutcomeCallable;
        typedef std::future<DeleteNotebookInstanceOutcome> DeleteNotebookInstanceOutcomeCallable;
        typedef std::future<DeleteNotebookInstanceLifecycleConfigOutcome> DeleteNotebookInstanceLifecycleConfigOutcomeCallable;
        typedef std::future<DeleteTagsOutcome> DeleteTagsOutcomeCallable;
        typedef std::future<DeleteWorkteamOutcome> DeleteWorkteamOutcomeCallable;
        typedef std::future<DescribeAlgorithmOutcome> DescribeAlgorithmOutcomeCallable;
        typedef std::future<DescribeCodeRepositoryOutcome> DescribeCodeRepositoryOutcomeCallable;
        typedef std::future<DescribeCompilationJobOutcome> DescribeCompilationJobOutcomeCallable;
        typedef std::future<DescribeEndpointOutcome> DescribeEndpointOutcomeCallable;
        typedef std::future<DescribeEndpointConfigOutcome> DescribeEndpointConfigOutcomeCallable;
        typedef std::future<DescribeHyperParameterTuningJobOutcome> DescribeHyperParameterTuningJobOutcomeCallable;
        typedef std::future<DescribeLabelingJobOutcome> DescribeLabelingJobOutcomeCallable;
        typedef std::future<DescribeModelOutcome> DescribeModelOutcomeCallable;
        typedef std::future<DescribeModelPackageOutcome> DescribeModelPackageOutcomeCallable;
        typedef std::future<DescribeNotebookInstanceOutcome> DescribeNotebookInstanceOutcomeCallable;
        typedef std::future<DescribeNotebookInstanceLifecycleConfigOutcome> DescribeNotebookInstanceLifecycleConfigOutcomeCallable;
        typedef std::future<DescribeSubscribedWorkteamOutcome> DescribeSubscribedWorkteamOutcomeCallable;
        typedef std::future<DescribeTrainingJobOutcome> DescribeTrainingJobOutcomeCallable;
        typedef std::future<DescribeTransformJobOutcome> DescribeTransformJobOutcomeCallable;
        typedef std::future<DescribeWorkteamOutcome> DescribeWorkteamOutcomeCallable;
        typedef std::future<GetSearchSuggestionsOutcome> GetSearchSuggestionsOutcomeCallable;
        typedef std::future<ListAlgorithmsOutcome> ListAlgorithmsOutcomeCallable;
        typedef std::future<ListCodeRepositoriesOutcome> ListCodeRepositoriesOutcomeCallable;
        typedef std::future<ListCompilationJobsOutcome> ListCompilationJobsOutcomeCallable;
        typedef std::future<ListEndpointConfigsOutcome> ListEndpointConfigsOutcomeCallable;
        typedef std::future<ListEndpointsOutcome> ListEndpointsOutcomeCallable;
        typedef std::future<ListHyperParameterTuningJobsOutcome> ListHyperParameterTuningJobsOutcomeCallable;
        typedef std::future<ListLabelingJobsOutcome> ListLabelingJobsOutcomeCallable;
        typedef std::future<ListLabelingJobsForWorkteamOutcome> ListLabelingJobsForWorkteamOutcomeCallable;
        typedef std::future<ListModelPackagesOutcome> ListModelPackagesOutcomeCallable;
        typedef std::future<ListModelsOutcome> ListModelsOutcomeCallable;
        typedef std::future<ListNotebookInstanceLifecycleConfigsOutcome> ListNotebookInstanceLifecycleConfigsOutcomeCallable;
        typedef std::future<ListNotebookInstancesOutcome> ListNotebookInstancesOutcomeCallable;
        typedef std::future<ListSubscribedWorkteamsOutcome> ListSubscribedWorkteamsOutcomeCallable;
        typedef std::future<ListTagsOutcome> ListTagsOutcomeCallable;
        typedef std::future<ListTrainingJobsOutcome> ListTrainingJobsOutcomeCallable;
        typedef std::future<ListTrainingJobsForHyperParameterTuningJobOutcome> ListTrainingJobsForHyperParameterTuningJobOutcomeCallable;
        typedef std::future<ListTransformJobsOutcome> ListTransformJobsOutcomeCallable;
        typedef std::future<ListWorkteamsOutcome> ListWorkteamsOutcomeCallable;
        typedef std::future<RenderUiTemplateOutcome> RenderUiTemplateOutcomeCallable;
        typedef std::future<SearchOutcome> SearchOutcomeCallable;
        typedef std::future<StartNotebookInstanceOutcome> StartNotebookInstanceOutcomeCallable;
        typedef std::future<StopCompilationJobOutcome> StopCompilationJobOutcomeCallable;
        typedef std::future<StopHyperParameterTuningJobOutcome> StopHyperParameterTuningJobOutcomeCallable;
        typedef std::future<StopLabelingJobOutcome> StopLabelingJobOutcomeCallable;
        typedef std::future<StopNotebookInstanceOutcome> StopNotebookInstanceOutcomeCallable;
        typedef std::future<StopTrainingJobOutcome> StopTrainingJobOutcomeCallable;
        typedef std::future<StopTransformJobOutcome> StopTransformJobOutcomeCallable;
        typedef std::future<UpdateCodeRepositoryOutcome> UpdateCodeRepositoryOutcomeCallable;
        typedef std::future<UpdateEndpointOutcome> UpdateEndpointOutcomeCallable;
        typedef std::future<UpdateEndpointWeightsAndCapacitiesOutcome> UpdateEndpointWeightsAndCapacitiesOutcomeCallable;
        typedef std::future<UpdateNotebookInstanceOutcome> UpdateNotebookInstanceOutcomeCallable;
        typedef std::future<UpdateNotebookInstanceLifecycleConfigOutcome> UpdateNotebookInstanceLifecycleConfigOutcomeCallable;
        typedef std::future<UpdateWorkteamOutcome> UpdateWorkteamOutcomeCallable;
} // namespace Model

  class SageMakerClient;

    typedef std::function<void(const SageMakerClient*, const Model::AddTagsRequest&, const Model::AddTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddTagsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateAlgorithmRequest&, const Model::CreateAlgorithmOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAlgorithmResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateCodeRepositoryRequest&, const Model::CreateCodeRepositoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCodeRepositoryResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateCompilationJobRequest&, const Model::CreateCompilationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCompilationJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateEndpointRequest&, const Model::CreateEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEndpointResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateEndpointConfigRequest&, const Model::CreateEndpointConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEndpointConfigResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateHyperParameterTuningJobRequest&, const Model::CreateHyperParameterTuningJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateHyperParameterTuningJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateLabelingJobRequest&, const Model::CreateLabelingJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLabelingJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateModelRequest&, const Model::CreateModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateModelResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateModelPackageRequest&, const Model::CreateModelPackageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateModelPackageResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateNotebookInstanceRequest&, const Model::CreateNotebookInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateNotebookInstanceResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateNotebookInstanceLifecycleConfigRequest&, const Model::CreateNotebookInstanceLifecycleConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateNotebookInstanceLifecycleConfigResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreatePresignedNotebookInstanceUrlRequest&, const Model::CreatePresignedNotebookInstanceUrlOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePresignedNotebookInstanceUrlResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateTrainingJobRequest&, const Model::CreateTrainingJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTrainingJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateTransformJobRequest&, const Model::CreateTransformJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTransformJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::CreateWorkteamRequest&, const Model::CreateWorkteamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateWorkteamResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteAlgorithmRequest&, const Model::DeleteAlgorithmOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAlgorithmResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteCodeRepositoryRequest&, const Model::DeleteCodeRepositoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCodeRepositoryResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteEndpointRequest&, const Model::DeleteEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEndpointResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteEndpointConfigRequest&, const Model::DeleteEndpointConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEndpointConfigResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteModelRequest&, const Model::DeleteModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteModelResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteModelPackageRequest&, const Model::DeleteModelPackageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteModelPackageResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteNotebookInstanceRequest&, const Model::DeleteNotebookInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteNotebookInstanceResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteNotebookInstanceLifecycleConfigRequest&, const Model::DeleteNotebookInstanceLifecycleConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteNotebookInstanceLifecycleConfigResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteTagsRequest&, const Model::DeleteTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTagsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DeleteWorkteamRequest&, const Model::DeleteWorkteamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteWorkteamResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeAlgorithmRequest&, const Model::DescribeAlgorithmOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAlgorithmResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeCodeRepositoryRequest&, const Model::DescribeCodeRepositoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCodeRepositoryResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeCompilationJobRequest&, const Model::DescribeCompilationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCompilationJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeEndpointRequest&, const Model::DescribeEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEndpointResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeEndpointConfigRequest&, const Model::DescribeEndpointConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEndpointConfigResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeHyperParameterTuningJobRequest&, const Model::DescribeHyperParameterTuningJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeHyperParameterTuningJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeLabelingJobRequest&, const Model::DescribeLabelingJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLabelingJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeModelRequest&, const Model::DescribeModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeModelResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeModelPackageRequest&, const Model::DescribeModelPackageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeModelPackageResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeNotebookInstanceRequest&, const Model::DescribeNotebookInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeNotebookInstanceResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeNotebookInstanceLifecycleConfigRequest&, const Model::DescribeNotebookInstanceLifecycleConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeNotebookInstanceLifecycleConfigResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeSubscribedWorkteamRequest&, const Model::DescribeSubscribedWorkteamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSubscribedWorkteamResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeTrainingJobRequest&, const Model::DescribeTrainingJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTrainingJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeTransformJobRequest&, const Model::DescribeTransformJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTransformJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::DescribeWorkteamRequest&, const Model::DescribeWorkteamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeWorkteamResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::GetSearchSuggestionsRequest&, const Model::GetSearchSuggestionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSearchSuggestionsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListAlgorithmsRequest&, const Model::ListAlgorithmsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAlgorithmsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListCodeRepositoriesRequest&, const Model::ListCodeRepositoriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCodeRepositoriesResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListCompilationJobsRequest&, const Model::ListCompilationJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCompilationJobsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListEndpointConfigsRequest&, const Model::ListEndpointConfigsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEndpointConfigsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListEndpointsRequest&, const Model::ListEndpointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEndpointsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListHyperParameterTuningJobsRequest&, const Model::ListHyperParameterTuningJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListHyperParameterTuningJobsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListLabelingJobsRequest&, const Model::ListLabelingJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLabelingJobsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListLabelingJobsForWorkteamRequest&, const Model::ListLabelingJobsForWorkteamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLabelingJobsForWorkteamResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListModelPackagesRequest&, const Model::ListModelPackagesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListModelPackagesResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListModelsRequest&, const Model::ListModelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListModelsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListNotebookInstanceLifecycleConfigsRequest&, const Model::ListNotebookInstanceLifecycleConfigsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListNotebookInstanceLifecycleConfigsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListNotebookInstancesRequest&, const Model::ListNotebookInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListNotebookInstancesResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListSubscribedWorkteamsRequest&, const Model::ListSubscribedWorkteamsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSubscribedWorkteamsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListTagsRequest&, const Model::ListTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListTrainingJobsRequest&, const Model::ListTrainingJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTrainingJobsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListTrainingJobsForHyperParameterTuningJobRequest&, const Model::ListTrainingJobsForHyperParameterTuningJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTrainingJobsForHyperParameterTuningJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListTransformJobsRequest&, const Model::ListTransformJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTransformJobsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::ListWorkteamsRequest&, const Model::ListWorkteamsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListWorkteamsResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::RenderUiTemplateRequest&, const Model::RenderUiTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RenderUiTemplateResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::SearchRequest&, const Model::SearchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::StartNotebookInstanceRequest&, const Model::StartNotebookInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartNotebookInstanceResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::StopCompilationJobRequest&, const Model::StopCompilationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopCompilationJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::StopHyperParameterTuningJobRequest&, const Model::StopHyperParameterTuningJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopHyperParameterTuningJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::StopLabelingJobRequest&, const Model::StopLabelingJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopLabelingJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::StopNotebookInstanceRequest&, const Model::StopNotebookInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopNotebookInstanceResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::StopTrainingJobRequest&, const Model::StopTrainingJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopTrainingJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::StopTransformJobRequest&, const Model::StopTransformJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopTransformJobResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::UpdateCodeRepositoryRequest&, const Model::UpdateCodeRepositoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCodeRepositoryResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::UpdateEndpointRequest&, const Model::UpdateEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEndpointResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::UpdateEndpointWeightsAndCapacitiesRequest&, const Model::UpdateEndpointWeightsAndCapacitiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEndpointWeightsAndCapacitiesResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::UpdateNotebookInstanceRequest&, const Model::UpdateNotebookInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateNotebookInstanceResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::UpdateNotebookInstanceLifecycleConfigRequest&, const Model::UpdateNotebookInstanceLifecycleConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateNotebookInstanceLifecycleConfigResponseReceivedHandler;
    typedef std::function<void(const SageMakerClient*, const Model::UpdateWorkteamRequest&, const Model::UpdateWorkteamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateWorkteamResponseReceivedHandler;

  /**
   * <p>Provides APIs for creating and managing Amazon SageMaker resources.</p>
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

        inline virtual const char* GetServiceClientName() const override { return "SageMaker"; }


        /**
         * <p>Adds or overwrites one or more tags for the specified Amazon SageMaker
         * resource. You can add tags to notebook instances, training jobs, hyperparameter
         * tuning jobs, batch transform jobs, models, labeling jobs, work teams, endpoint
         * configurations, and endpoints.</p> <p>Each tag consists of a key and an optional
         * value. Tag keys must be unique per resource. For more information about tags,
         * see For more information, see <a
         * href="https://aws.amazon.com/answers/account-management/aws-tagging-strategies/">AWS
         * Tagging Strategies</a>.</p> <note> <p>Tags that you add to a hyperparameter
         * tuning job by calling this API are also added to any training jobs that the
         * hyperparameter tuning job launches after you call this API, but not to training
         * jobs that the hyperparameter tuning job launched before you called this API. To
         * make sure that the tags associated with a hyperparameter tuning job are also
         * added to all training jobs that the hyperparameter tuning job launches, add the
         * tags when you first create the tuning job by specifying them in the
         * <code>Tags</code> parameter of <a>CreateHyperParameterTuningJob</a> </p>
         * </note><p><h3>See Also:</h3>   <a
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
         * Tagging Strategies</a>.</p> <note> <p>Tags that you add to a hyperparameter
         * tuning job by calling this API are also added to any training jobs that the
         * hyperparameter tuning job launches after you call this API, but not to training
         * jobs that the hyperparameter tuning job launched before you called this API. To
         * make sure that the tags associated with a hyperparameter tuning job are also
         * added to all training jobs that the hyperparameter tuning job launches, add the
         * tags when you first create the tuning job by specifying them in the
         * <code>Tags</code> parameter of <a>CreateHyperParameterTuningJob</a> </p>
         * </note><p><h3>See Also:</h3>   <a
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
         * Tagging Strategies</a>.</p> <note> <p>Tags that you add to a hyperparameter
         * tuning job by calling this API are also added to any training jobs that the
         * hyperparameter tuning job launches after you call this API, but not to training
         * jobs that the hyperparameter tuning job launched before you called this API. To
         * make sure that the tags associated with a hyperparameter tuning job are also
         * added to all training jobs that the hyperparameter tuning job launches, add the
         * tags when you first create the tuning job by specifying them in the
         * <code>Tags</code> parameter of <a>CreateHyperParameterTuningJob</a> </p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AddTags">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddTagsAsync(const Model::AddTagsRequest& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Creates a Git repository as a resource in your Amazon SageMaker account. You
         * can associate the repository with notebook instances so that you can use Git
         * source control for the notebooks you create. The Git repository is a resource in
         * your Amazon SageMaker account, so it can be associated with more than one
         * notebook instance, and it persists independently from the lifecycle of any
         * notebook instances it is associated with.</p> <p>The repository can be hosted
         * either in <a
         * href="http://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">AWS
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
         * href="http://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">AWS
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
         * href="http://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">AWS
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
         * the model runs on </p> </li> <li> <p> <code>The Amazon Resource Name (ARN) of
         * the IAM role that Amazon SageMaker assumes to perform the model compilation
         * job</code> </p> </li> </ul> <p>You can also provide a <code>Tag</code> to track
         * the model compilation job's resource use and costs. The response body contains
         * the <code>CompilationJobArn</code> for the compiled job.</p> <p>To stop a model
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
         * the model runs on </p> </li> <li> <p> <code>The Amazon Resource Name (ARN) of
         * the IAM role that Amazon SageMaker assumes to perform the model compilation
         * job</code> </p> </li> </ul> <p>You can also provide a <code>Tag</code> to track
         * the model compilation job's resource use and costs. The response body contains
         * the <code>CompilationJobArn</code> for the compiled job.</p> <p>To stop a model
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
         * the model runs on </p> </li> <li> <p> <code>The Amazon Resource Name (ARN) of
         * the IAM role that Amazon SageMaker assumes to perform the model compilation
         * job</code> </p> </li> </ul> <p>You can also provide a <code>Tag</code> to track
         * the model compilation job's resource use and costs. The response body contains
         * the <code>CompilationJobArn</code> for the compiled job.</p> <p>To stop a model
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
         * <p>Creates an endpoint using the endpoint configuration specified in the
         * request. Amazon SageMaker uses the endpoint to provision resources and deploy
         * models. You create the endpoint configuration with the <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/API_CreateEndpointConfig.html">CreateEndpointConfig</a>
         * API. </p> <note> <p> Use this API only for hosting models using Amazon SageMaker
         * hosting services. </p> <p> You must not delete an <code>EndpointConfig</code> in
         * use by an endpoint that is live or while the <code>UpdateEndpoint</code> or
         * <code>CreateEndpoint</code> operations are being performed on the endpoint. To
         * update an endpoint, you must create a new <code>EndpointConfig</code>.</p>
         * </note> <p>The endpoint name must be unique within an AWS Region in your AWS
         * account. </p> <p>When it receives the request, Amazon SageMaker creates the
         * endpoint, launches the resources (ML compute instances), and deploys the
         * model(s) on them. </p> <p>When Amazon SageMaker receives the request, it sets
         * the endpoint status to <code>Creating</code>. After it creates the endpoint, it
         * sets the status to <code>InService</code>. Amazon SageMaker can then process
         * incoming requests for inferences. To check the status of an endpoint, use the <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/API_DescribeEndpoint.html">DescribeEndpoint</a>
         * API.</p> <p>For an example, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/ex1.html">Exercise 1:
         * Using the K-Means Algorithm Provided by Amazon SageMaker</a>. </p> <p>If any of
         * the models hosted at this endpoint get model data from an Amazon S3 location,
         * Amazon SageMaker uses AWS Security Token Service to download model artifacts
         * from the S3 path you provided. AWS STS is activated in your IAM user account by
         * default. If you previously deactivated AWS STS for a region, you need to
         * reactivate AWS STS for that region. For more information, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_enable-regions.html">Activating
         * and Deactivating AWS STS i an AWS Region</a> in the <i>AWS Identity and Access
         * Management User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEndpointOutcome CreateEndpoint(const Model::CreateEndpointRequest& request) const;

        /**
         * <p>Creates an endpoint using the endpoint configuration specified in the
         * request. Amazon SageMaker uses the endpoint to provision resources and deploy
         * models. You create the endpoint configuration with the <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/API_CreateEndpointConfig.html">CreateEndpointConfig</a>
         * API. </p> <note> <p> Use this API only for hosting models using Amazon SageMaker
         * hosting services. </p> <p> You must not delete an <code>EndpointConfig</code> in
         * use by an endpoint that is live or while the <code>UpdateEndpoint</code> or
         * <code>CreateEndpoint</code> operations are being performed on the endpoint. To
         * update an endpoint, you must create a new <code>EndpointConfig</code>.</p>
         * </note> <p>The endpoint name must be unique within an AWS Region in your AWS
         * account. </p> <p>When it receives the request, Amazon SageMaker creates the
         * endpoint, launches the resources (ML compute instances), and deploys the
         * model(s) on them. </p> <p>When Amazon SageMaker receives the request, it sets
         * the endpoint status to <code>Creating</code>. After it creates the endpoint, it
         * sets the status to <code>InService</code>. Amazon SageMaker can then process
         * incoming requests for inferences. To check the status of an endpoint, use the <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/API_DescribeEndpoint.html">DescribeEndpoint</a>
         * API.</p> <p>For an example, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/ex1.html">Exercise 1:
         * Using the K-Means Algorithm Provided by Amazon SageMaker</a>. </p> <p>If any of
         * the models hosted at this endpoint get model data from an Amazon S3 location,
         * Amazon SageMaker uses AWS Security Token Service to download model artifacts
         * from the S3 path you provided. AWS STS is activated in your IAM user account by
         * default. If you previously deactivated AWS STS for a region, you need to
         * reactivate AWS STS for that region. For more information, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_enable-regions.html">Activating
         * and Deactivating AWS STS i an AWS Region</a> in the <i>AWS Identity and Access
         * Management User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateEndpoint">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateEndpointOutcomeCallable CreateEndpointCallable(const Model::CreateEndpointRequest& request) const;

        /**
         * <p>Creates an endpoint using the endpoint configuration specified in the
         * request. Amazon SageMaker uses the endpoint to provision resources and deploy
         * models. You create the endpoint configuration with the <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/API_CreateEndpointConfig.html">CreateEndpointConfig</a>
         * API. </p> <note> <p> Use this API only for hosting models using Amazon SageMaker
         * hosting services. </p> <p> You must not delete an <code>EndpointConfig</code> in
         * use by an endpoint that is live or while the <code>UpdateEndpoint</code> or
         * <code>CreateEndpoint</code> operations are being performed on the endpoint. To
         * update an endpoint, you must create a new <code>EndpointConfig</code>.</p>
         * </note> <p>The endpoint name must be unique within an AWS Region in your AWS
         * account. </p> <p>When it receives the request, Amazon SageMaker creates the
         * endpoint, launches the resources (ML compute instances), and deploys the
         * model(s) on them. </p> <p>When Amazon SageMaker receives the request, it sets
         * the endpoint status to <code>Creating</code>. After it creates the endpoint, it
         * sets the status to <code>InService</code>. Amazon SageMaker can then process
         * incoming requests for inferences. To check the status of an endpoint, use the <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/API_DescribeEndpoint.html">DescribeEndpoint</a>
         * API.</p> <p>For an example, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/ex1.html">Exercise 1:
         * Using the K-Means Algorithm Provided by Amazon SageMaker</a>. </p> <p>If any of
         * the models hosted at this endpoint get model data from an Amazon S3 location,
         * Amazon SageMaker uses AWS Security Token Service to download model artifacts
         * from the S3 path you provided. AWS STS is activated in your IAM user account by
         * default. If you previously deactivated AWS STS for a region, you need to
         * reactivate AWS STS for that region. For more information, see <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_enable-regions.html">Activating
         * and Deactivating AWS STS i an AWS Region</a> in the <i>AWS Identity and Access
         * Management User Guide</i>.</p><p><h3>See Also:</h3>   <a
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
         * want Amazon SageMaker to provision. Then you call the <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/API_CreateEndpoint.html">CreateEndpoint</a>
         * API.</p> <note> <p> Use this API only if you want to use Amazon SageMaker
         * hosting services to deploy models into production. </p> </note> <p>In the
         * request, you define one or more <code>ProductionVariant</code>s, each of which
         * identifies a model. Each <code>ProductionVariant</code> parameter also describes
         * the resources that you want Amazon SageMaker to provision. This includes the
         * number and type of ML compute instances to deploy. </p> <p>If you are hosting
         * multiple models, you also assign a <code>VariantWeight</code> to specify how
         * much traffic you want to allocate to each model. For example, suppose that you
         * want to host two models, A and B, and you assign traffic weight 2 for model A
         * and 1 for model B. Amazon SageMaker distributes two-thirds of the traffic to
         * Model A, and one-third to model B. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateEndpointConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEndpointConfigOutcome CreateEndpointConfig(const Model::CreateEndpointConfigRequest& request) const;

        /**
         * <p>Creates an endpoint configuration that Amazon SageMaker hosting services uses
         * to deploy models. In the configuration, you identify one or more models, created
         * using the <code>CreateModel</code> API, to deploy and the resources that you
         * want Amazon SageMaker to provision. Then you call the <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/API_CreateEndpoint.html">CreateEndpoint</a>
         * API.</p> <note> <p> Use this API only if you want to use Amazon SageMaker
         * hosting services to deploy models into production. </p> </note> <p>In the
         * request, you define one or more <code>ProductionVariant</code>s, each of which
         * identifies a model. Each <code>ProductionVariant</code> parameter also describes
         * the resources that you want Amazon SageMaker to provision. This includes the
         * number and type of ML compute instances to deploy. </p> <p>If you are hosting
         * multiple models, you also assign a <code>VariantWeight</code> to specify how
         * much traffic you want to allocate to each model. For example, suppose that you
         * want to host two models, A and B, and you assign traffic weight 2 for model A
         * and 1 for model B. Amazon SageMaker distributes two-thirds of the traffic to
         * Model A, and one-third to model B. </p><p><h3>See Also:</h3>   <a
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
         * want Amazon SageMaker to provision. Then you call the <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/API_CreateEndpoint.html">CreateEndpoint</a>
         * API.</p> <note> <p> Use this API only if you want to use Amazon SageMaker
         * hosting services to deploy models into production. </p> </note> <p>In the
         * request, you define one or more <code>ProductionVariant</code>s, each of which
         * identifies a model. Each <code>ProductionVariant</code> parameter also describes
         * the resources that you want Amazon SageMaker to provision. This includes the
         * number and type of ML compute instances to deploy. </p> <p>If you are hosting
         * multiple models, you also assign a <code>VariantWeight</code> to specify how
         * much traffic you want to allocate to each model. For example, suppose that you
         * want to host two models, A and B, and you assign traffic weight 2 for model A
         * and 1 for model B. Amazon SageMaker distributes two-thirds of the traffic to
         * Model A, and one-third to model B. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateEndpointConfig">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateEndpointConfigAsync(const Model::CreateEndpointConfigRequest& request, const CreateEndpointConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * href="http://docs.aws.amazon.com/sagemaker/latest/dg/sms-automated-labeling.html">Using
         * Automated Data Labeling</a>.</p> <p>The data objects to be labeled are contained
         * in an Amazon S3 bucket. You create a <i>manifest file</i> that describes the
         * location of each object. For more information, see <a
         * href="http://docs.aws.amazon.com/sagemaker/latest/dg/sms-data.html">Using Input
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
         * href="http://docs.aws.amazon.com/sagemaker/latest/dg/sms-automated-labeling.html">Using
         * Automated Data Labeling</a>.</p> <p>The data objects to be labeled are contained
         * in an Amazon S3 bucket. You create a <i>manifest file</i> that describes the
         * location of each object. For more information, see <a
         * href="http://docs.aws.amazon.com/sagemaker/latest/dg/sms-data.html">Using Input
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
         * href="http://docs.aws.amazon.com/sagemaker/latest/dg/sms-automated-labeling.html">Using
         * Automated Data Labeling</a>.</p> <p>The data objects to be labeled are contained
         * in an Amazon S3 bucket. You create a <i>manifest file</i> that describes the
         * location of each object. For more information, see <a
         * href="http://docs.aws.amazon.com/sagemaker/latest/dg/sms-data.html">Using Input
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
         * describe a primary container. For the primary container, you specify the docker
         * image containing inference code, artifacts (from prior training), and custom
         * environment map that the inference code uses when you deploy the model for
         * predictions.</p> <p>Use this API to create a model if you want to use Amazon
         * SageMaker hosting services or run a batch transform job.</p> <p>To host your
         * model, you create an endpoint configuration with the
         * <code>CreateEndpointConfig</code> API, and then create an endpoint with the
         * <code>CreateEndpoint</code> API. Amazon SageMaker then deploys all of the
         * containers that you defined for the model in the hosting environment. </p> <p>To
         * run a batch transform using your model, you start a job with the
         * <code>CreateTransformJob</code> API. Amazon SageMaker uses your model and your
         * dataset to get inferences which are then saved to a specified S3 location.</p>
         * <p>In the <code>CreateModel</code> request, you must define a container with the
         * <code>PrimaryContainer</code> parameter.</p> <p>In the request, you also provide
         * an IAM role that Amazon SageMaker can assume to access model artifacts and
         * docker image for deployment on ML compute hosting instances or for batch
         * transform jobs. In addition, you also use the IAM role to manage permissions the
         * inference code needs. For example, if the inference code access any other AWS
         * resources, you grant necessary permissions via this role.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateModel">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateModelOutcome CreateModel(const Model::CreateModelRequest& request) const;

        /**
         * <p>Creates a model in Amazon SageMaker. In the request, you name the model and
         * describe a primary container. For the primary container, you specify the docker
         * image containing inference code, artifacts (from prior training), and custom
         * environment map that the inference code uses when you deploy the model for
         * predictions.</p> <p>Use this API to create a model if you want to use Amazon
         * SageMaker hosting services or run a batch transform job.</p> <p>To host your
         * model, you create an endpoint configuration with the
         * <code>CreateEndpointConfig</code> API, and then create an endpoint with the
         * <code>CreateEndpoint</code> API. Amazon SageMaker then deploys all of the
         * containers that you defined for the model in the hosting environment. </p> <p>To
         * run a batch transform using your model, you start a job with the
         * <code>CreateTransformJob</code> API. Amazon SageMaker uses your model and your
         * dataset to get inferences which are then saved to a specified S3 location.</p>
         * <p>In the <code>CreateModel</code> request, you must define a container with the
         * <code>PrimaryContainer</code> parameter.</p> <p>In the request, you also provide
         * an IAM role that Amazon SageMaker can assume to access model artifacts and
         * docker image for deployment on ML compute hosting instances or for batch
         * transform jobs. In addition, you also use the IAM role to manage permissions the
         * inference code needs. For example, if the inference code access any other AWS
         * resources, you grant necessary permissions via this role.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateModel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateModelOutcomeCallable CreateModelCallable(const Model::CreateModelRequest& request) const;

        /**
         * <p>Creates a model in Amazon SageMaker. In the request, you name the model and
         * describe a primary container. For the primary container, you specify the docker
         * image containing inference code, artifacts (from prior training), and custom
         * environment map that the inference code uses when you deploy the model for
         * predictions.</p> <p>Use this API to create a model if you want to use Amazon
         * SageMaker hosting services or run a batch transform job.</p> <p>To host your
         * model, you create an endpoint configuration with the
         * <code>CreateEndpointConfig</code> API, and then create an endpoint with the
         * <code>CreateEndpoint</code> API. Amazon SageMaker then deploys all of the
         * containers that you defined for the model in the hosting environment. </p> <p>To
         * run a batch transform using your model, you start a job with the
         * <code>CreateTransformJob</code> API. Amazon SageMaker uses your model and your
         * dataset to get inferences which are then saved to a specified S3 location.</p>
         * <p>In the <code>CreateModel</code> request, you must define a container with the
         * <code>PrimaryContainer</code> parameter.</p> <p>In the request, you also provide
         * an IAM role that Amazon SageMaker can assume to access model artifacts and
         * docker image for deployment on ML compute hosting instances or for batch
         * transform jobs. In addition, you also use the IAM role to manage permissions the
         * inference code needs. For example, if the inference code access any other AWS
         * resources, you grant necessary permissions via this role.</p><p><h3>See
         * Also:</h3>   <a
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
         * SageMaker returns its Amazon Resource Name (ARN).</p> <p>After Amazon SageMaker
         * creates the notebook instance, you can connect to the Jupyter server and work in
         * Jupyter notebooks. For example, you can write code to explore a dataset that you
         * can use for model training, train a model, host models by creating Amazon
         * SageMaker endpoints, and validate hosted models. </p> <p>For more information,
         * see <a
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
         * SageMaker returns its Amazon Resource Name (ARN).</p> <p>After Amazon SageMaker
         * creates the notebook instance, you can connect to the Jupyter server and work in
         * Jupyter notebooks. For example, you can write code to explore a dataset that you
         * can use for model training, train a model, host models by creating Amazon
         * SageMaker endpoints, and validate hosted models. </p> <p>For more information,
         * see <a
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
         * SageMaker returns its Amazon Resource Name (ARN).</p> <p>After Amazon SageMaker
         * creates the notebook instance, you can connect to the Jupyter server and work in
         * Jupyter notebooks. For example, you can write code to explore a dataset that you
         * can use for model training, train a model, host models by creating Amazon
         * SageMaker endpoints, and validate hosted models. </p> <p>For more information,
         * see <a
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
         * <p>Returns a URL that you can use to connect to the Jupyter server from a
         * notebook instance. In the Amazon SageMaker console, when you choose
         * <code>Open</code> next to a notebook instance, Amazon SageMaker opens a new tab
         * showing the Jupyter server home page from the notebook instance. The console
         * uses this API to get the URL and show the page.</p> <p>IAM authorization
         * policies for this API are also enforced for every HTTP request and WebSocket
         * frame that attempts to connect to the notebook instance.For example, you can
         * restrict access to this API and to the URL that it returns to a list of IP
         * addresses that you specify. Use the <code>NotIpAddress</code> condition operator
         * and the <code>aws:SourceIP</code> condition context key to specify the list of
         * IP addresses that you want to have access to the notebook instance. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/nbi-ip-filter.html">Limit
         * Access to a Notebook Instance by IP Address</a>.</p> <note> <p>The URL that you
         * get from a call to is valid only for 5 minutes. If you try to use the URL after
         * the 5-minute limit expires, you are directed to the AWS console sign-in
         * page.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreatePresignedNotebookInstanceUrl">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePresignedNotebookInstanceUrlOutcome CreatePresignedNotebookInstanceUrl(const Model::CreatePresignedNotebookInstanceUrlRequest& request) const;

        /**
         * <p>Returns a URL that you can use to connect to the Jupyter server from a
         * notebook instance. In the Amazon SageMaker console, when you choose
         * <code>Open</code> next to a notebook instance, Amazon SageMaker opens a new tab
         * showing the Jupyter server home page from the notebook instance. The console
         * uses this API to get the URL and show the page.</p> <p>IAM authorization
         * policies for this API are also enforced for every HTTP request and WebSocket
         * frame that attempts to connect to the notebook instance.For example, you can
         * restrict access to this API and to the URL that it returns to a list of IP
         * addresses that you specify. Use the <code>NotIpAddress</code> condition operator
         * and the <code>aws:SourceIP</code> condition context key to specify the list of
         * IP addresses that you want to have access to the notebook instance. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/nbi-ip-filter.html">Limit
         * Access to a Notebook Instance by IP Address</a>.</p> <note> <p>The URL that you
         * get from a call to is valid only for 5 minutes. If you try to use the URL after
         * the 5-minute limit expires, you are directed to the AWS console sign-in
         * page.</p> </note><p><h3>See Also:</h3>   <a
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
         * uses this API to get the URL and show the page.</p> <p>IAM authorization
         * policies for this API are also enforced for every HTTP request and WebSocket
         * frame that attempts to connect to the notebook instance.For example, you can
         * restrict access to this API and to the URL that it returns to a list of IP
         * addresses that you specify. Use the <code>NotIpAddress</code> condition operator
         * and the <code>aws:SourceIP</code> condition context key to specify the list of
         * IP addresses that you want to have access to the notebook instance. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/nbi-ip-filter.html">Limit
         * Access to a Notebook Instance by IP Address</a>.</p> <note> <p>The URL that you
         * get from a call to is valid only for 5 minutes. If you try to use the URL after
         * the 5-minute limit expires, you are directed to the AWS console sign-in
         * page.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreatePresignedNotebookInstanceUrl">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePresignedNotebookInstanceUrlAsync(const Model::CreatePresignedNotebookInstanceUrlRequest& request, const CreatePresignedNotebookInstanceUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * dataset and the Amazon S3 location where it is stored.</p> </li> <li> <p>
         * <code>OutputDataConfig</code> - Identifies the Amazon S3 location where you want
         * Amazon SageMaker to save the results of model training. </p> <p/> </li> <li> <p>
         * <code>ResourceConfig</code> - Identifies the resources, ML compute instances,
         * and ML storage volumes to deploy for model training. In distributed training,
         * you specify more than one instance. </p> </li> <li> <p> <code>RoleARN</code> -
         * The Amazon Resource Number (ARN) that Amazon SageMaker assumes to perform tasks
         * on your behalf during model training. You must grant this role the necessary
         * permissions so that Amazon SageMaker can successfully complete model training.
         * </p> </li> <li> <p> <code>StoppingCondition</code> - Sets a time limit for
         * training. Use this parameter to cap model training costs. </p> </li> </ul> <p>
         * For more information about Amazon SageMaker, see <a
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
         * dataset and the Amazon S3 location where it is stored.</p> </li> <li> <p>
         * <code>OutputDataConfig</code> - Identifies the Amazon S3 location where you want
         * Amazon SageMaker to save the results of model training. </p> <p/> </li> <li> <p>
         * <code>ResourceConfig</code> - Identifies the resources, ML compute instances,
         * and ML storage volumes to deploy for model training. In distributed training,
         * you specify more than one instance. </p> </li> <li> <p> <code>RoleARN</code> -
         * The Amazon Resource Number (ARN) that Amazon SageMaker assumes to perform tasks
         * on your behalf during model training. You must grant this role the necessary
         * permissions so that Amazon SageMaker can successfully complete model training.
         * </p> </li> <li> <p> <code>StoppingCondition</code> - Sets a time limit for
         * training. Use this parameter to cap model training costs. </p> </li> </ul> <p>
         * For more information about Amazon SageMaker, see <a
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
         * dataset and the Amazon S3 location where it is stored.</p> </li> <li> <p>
         * <code>OutputDataConfig</code> - Identifies the Amazon S3 location where you want
         * Amazon SageMaker to save the results of model training. </p> <p/> </li> <li> <p>
         * <code>ResourceConfig</code> - Identifies the resources, ML compute instances,
         * and ML storage volumes to deploy for model training. In distributed training,
         * you specify more than one instance. </p> </li> <li> <p> <code>RoleARN</code> -
         * The Amazon Resource Number (ARN) that Amazon SageMaker assumes to perform tasks
         * on your behalf during model training. You must grant this role the necessary
         * permissions so that Amazon SageMaker can successfully complete model training.
         * </p> </li> <li> <p> <code>StoppingCondition</code> - Sets a time limit for
         * training. Use this parameter to cap model training costs. </p> </li> </ul> <p>
         * For more information about Amazon SageMaker, see <a
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
         * the ML compute instances for the transform job.</p> </li> </ul> <p> For more
         * information about how batch transformation works Amazon SageMaker, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/batch-transform.html">How
         * It Works</a>. </p><p><h3>See Also:</h3>   <a
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
         * the ML compute instances for the transform job.</p> </li> </ul> <p> For more
         * information about how batch transformation works Amazon SageMaker, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/batch-transform.html">How
         * It Works</a>. </p><p><h3>See Also:</h3>   <a
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
         * the ML compute instances for the transform job.</p> </li> </ul> <p> For more
         * information about how batch transformation works Amazon SageMaker, see <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/batch-transform.html">How
         * It Works</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateTransformJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTransformJobAsync(const Model::CreateTransformJobRequest& request, const CreateTransformJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * using the configuration. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteEndpointConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEndpointConfigOutcome DeleteEndpointConfig(const Model::DeleteEndpointConfigRequest& request) const;

        /**
         * <p>Deletes an endpoint configuration. The <code>DeleteEndpointConfig</code> API
         * deletes only the specified configuration. It does not delete endpoints created
         * using the configuration. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteEndpointConfig">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEndpointConfigOutcomeCallable DeleteEndpointConfigCallable(const Model::DeleteEndpointConfigRequest& request) const;

        /**
         * <p>Deletes an endpoint configuration. The <code>DeleteEndpointConfig</code> API
         * deletes only the specified configuration. It does not delete endpoints created
         * using the configuration. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteEndpointConfig">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEndpointConfigAsync(const Model::DeleteEndpointConfigRequest& request, const DeleteEndpointConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a model. The <code>DeleteModel</code> API deletes only the model
         * entry that was created in Amazon SageMaker when you called the <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/API_CreateModel.html">CreateModel</a>
         * API. It does not delete model artifacts, inference code, or the IAM role that
         * you specified when creating the model. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteModel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteModelOutcome DeleteModel(const Model::DeleteModelRequest& request) const;

        /**
         * <p>Deletes a model. The <code>DeleteModel</code> API deletes only the model
         * entry that was created in Amazon SageMaker when you called the <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/API_CreateModel.html">CreateModel</a>
         * API. It does not delete model artifacts, inference code, or the IAM role that
         * you specified when creating the model. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteModel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteModelOutcomeCallable DeleteModelCallable(const Model::DeleteModelRequest& request) const;

        /**
         * <p>Deletes a model. The <code>DeleteModel</code> API deletes only the model
         * entry that was created in Amazon SageMaker when you called the <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/API_CreateModel.html">CreateModel</a>
         * API. It does not delete model artifacts, inference code, or the IAM role that
         * you specified when creating the model. </p><p><h3>See Also:</h3>   <a
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
         * <p> Deletes an Amazon SageMaker notebook instance. Before you can delete a
         * notebook instance, you must call the <code>StopNotebookInstance</code> API. </p>
         * <important> <p>When you delete a notebook instance, you lose all of your data.
         * Amazon SageMaker removes the ML compute instance, and deletes the ML storage
         * volume and the network interface associated with the notebook instance. </p>
         * </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteNotebookInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNotebookInstanceOutcome DeleteNotebookInstance(const Model::DeleteNotebookInstanceRequest& request) const;

        /**
         * <p> Deletes an Amazon SageMaker notebook instance. Before you can delete a
         * notebook instance, you must call the <code>StopNotebookInstance</code> API. </p>
         * <important> <p>When you delete a notebook instance, you lose all of your data.
         * Amazon SageMaker removes the ML compute instance, and deletes the ML storage
         * volume and the network interface associated with the notebook instance. </p>
         * </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteNotebookInstance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteNotebookInstanceOutcomeCallable DeleteNotebookInstanceCallable(const Model::DeleteNotebookInstanceRequest& request) const;

        /**
         * <p> Deletes an Amazon SageMaker notebook instance. Before you can delete a
         * notebook instance, you must call the <code>StopNotebookInstance</code> API. </p>
         * <important> <p>When you delete a notebook instance, you lose all of your data.
         * Amazon SageMaker removes the ML compute instance, and deletes the ML storage
         * volume and the network interface associated with the notebook instance. </p>
         * </important><p><h3>See Also:</h3>   <a
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
         * a resource's tags, use the <code>ListTags</code> API. </p> <note> <p>When you
         * call this API to delete tags from a hyperparameter tuning job, the deleted tags
         * are not removed from training jobs that the hyperparameter tuning job launched
         * before you called this API.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteTags">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTagsOutcome DeleteTags(const Model::DeleteTagsRequest& request) const;

        /**
         * <p>Deletes the specified tags from an Amazon SageMaker resource.</p> <p>To list
         * a resource's tags, use the <code>ListTags</code> API. </p> <note> <p>When you
         * call this API to delete tags from a hyperparameter tuning job, the deleted tags
         * are not removed from training jobs that the hyperparameter tuning job launched
         * before you called this API.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteTags">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTagsOutcomeCallable DeleteTagsCallable(const Model::DeleteTagsRequest& request) const;

        /**
         * <p>Deletes the specified tags from an Amazon SageMaker resource.</p> <p>To list
         * a resource's tags, use the <code>ListTags</code> API. </p> <note> <p>When you
         * call this API to delete tags from a hyperparameter tuning job, the deleted tags
         * are not removed from training jobs that the hyperparameter tuning job launched
         * before you called this API.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeleteTags">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTagsAsync(const Model::DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Lists models created with the <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/API_CreateModel.html">CreateModel</a>
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListModels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListModelsOutcome ListModels(const Model::ListModelsRequest& request) const;

        /**
         * <p>Lists models created with the <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/API_CreateModel.html">CreateModel</a>
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListModels">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListModelsOutcomeCallable ListModelsCallable(const Model::ListModelsRequest& request) const;

        /**
         * <p>Lists models created with the <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/API_CreateModel.html">CreateModel</a>
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListModels">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListModelsAsync(const Model::ListModelsRequest& request, const ListModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Gets a list of work teams that you have defined in a region. The list may be
         * empty if no work team satisfies the filter specified in the
         * <code>NameContains</code> parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListWorkteams">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorkteamsOutcome ListWorkteams(const Model::ListWorkteamsRequest& request) const;

        /**
         * <p>Gets a list of work teams that you have defined in a region. The list may be
         * empty if no work team satisfies the filter specified in the
         * <code>NameContains</code> parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ListWorkteams">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListWorkteamsOutcomeCallable ListWorkteamsCallable(const Model::ListWorkteamsRequest& request) const;

        /**
         * <p>Gets a list of work teams that you have defined in a region. The list may be
         * empty if no work team satisfies the filter specified in the
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
         * <p>Finds Amazon SageMaker resources that match a search query. Matching resource
         * objects are returned as a list of <code>SearchResult</code> objects in the
         * response. You can sort the search results by any resource property in a
         * ascending or descending order.</p> <p>You can query against the following value
         * types: numerical, text, Booleans, and timestamps.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/Search">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchOutcome Search(const Model::SearchRequest& request) const;

        /**
         * <p>Finds Amazon SageMaker resources that match a search query. Matching resource
         * objects are returned as a list of <code>SearchResult</code> objects in the
         * response. You can sort the search results by any resource property in a
         * ascending or descending order.</p> <p>You can query against the following value
         * types: numerical, text, Booleans, and timestamps.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/Search">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchOutcomeCallable SearchCallable(const Model::SearchRequest& request) const;

        /**
         * <p>Finds Amazon SageMaker resources that match a search query. Matching resource
         * objects are returned as a list of <code>SearchResult</code> objects in the
         * response. You can sort the search results by any resource property in a
         * ascending or descending order.</p> <p>You can query against the following value
         * types: numerical, text, Booleans, and timestamps.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/Search">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchAsync(const Model::SearchRequest& request, const SearchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Deploys the new <code>EndpointConfig</code> specified in the request,
         * switches to using newly created endpoint, and then deletes resources provisioned
         * for the endpoint using the previous <code>EndpointConfig</code> (there is no
         * availability loss). </p> <p>When Amazon SageMaker receives the request, it sets
         * the endpoint status to <code>Updating</code>. After updating the endpoint, it
         * sets the status to <code>InService</code>. To check the status of an endpoint,
         * use the <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/API_DescribeEndpoint.html">DescribeEndpoint</a>
         * API. </p> <note> <p>You must not delete an <code>EndpointConfig</code> in use by
         * an endpoint that is live or while the <code>UpdateEndpoint</code> or
         * <code>CreateEndpoint</code> operations are being performed on the endpoint. To
         * update an endpoint, you must create a new <code>EndpointConfig</code>.</p>
         * </note><p><h3>See Also:</h3>   <a
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
         * use the <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/API_DescribeEndpoint.html">DescribeEndpoint</a>
         * API. </p> <note> <p>You must not delete an <code>EndpointConfig</code> in use by
         * an endpoint that is live or while the <code>UpdateEndpoint</code> or
         * <code>CreateEndpoint</code> operations are being performed on the endpoint. To
         * update an endpoint, you must create a new <code>EndpointConfig</code>.</p>
         * </note><p><h3>See Also:</h3>   <a
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
         * use the <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/API_DescribeEndpoint.html">DescribeEndpoint</a>
         * API. </p> <note> <p>You must not delete an <code>EndpointConfig</code> in use by
         * an endpoint that is live or while the <code>UpdateEndpoint</code> or
         * <code>CreateEndpoint</code> operations are being performed on the endpoint. To
         * update an endpoint, you must create a new <code>EndpointConfig</code>.</p>
         * </note><p><h3>See Also:</h3>   <a
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
         * <code>InService</code>. To check the status of an endpoint, use the <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/API_DescribeEndpoint.html">DescribeEndpoint</a>
         * API. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateEndpointWeightsAndCapacities">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEndpointWeightsAndCapacitiesOutcome UpdateEndpointWeightsAndCapacities(const Model::UpdateEndpointWeightsAndCapacitiesRequest& request) const;

        /**
         * <p>Updates variant weight of one or more variants associated with an existing
         * endpoint, or capacity of one variant associated with an existing endpoint. When
         * it receives the request, Amazon SageMaker sets the endpoint status to
         * <code>Updating</code>. After updating the endpoint, it sets the status to
         * <code>InService</code>. To check the status of an endpoint, use the <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/API_DescribeEndpoint.html">DescribeEndpoint</a>
         * API. </p><p><h3>See Also:</h3>   <a
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
         * <code>InService</code>. To check the status of an endpoint, use the <a
         * href="https://docs.aws.amazon.com/sagemaker/latest/dg/API_DescribeEndpoint.html">DescribeEndpoint</a>
         * API. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateEndpointWeightsAndCapacities">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateEndpointWeightsAndCapacitiesAsync(const Model::UpdateEndpointWeightsAndCapacitiesRequest& request, const UpdateEndpointWeightsAndCapacitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        void CreateAlgorithmAsyncHelper(const Model::CreateAlgorithmRequest& request, const CreateAlgorithmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateCodeRepositoryAsyncHelper(const Model::CreateCodeRepositoryRequest& request, const CreateCodeRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateCompilationJobAsyncHelper(const Model::CreateCompilationJobRequest& request, const CreateCompilationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateEndpointAsyncHelper(const Model::CreateEndpointRequest& request, const CreateEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateEndpointConfigAsyncHelper(const Model::CreateEndpointConfigRequest& request, const CreateEndpointConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateHyperParameterTuningJobAsyncHelper(const Model::CreateHyperParameterTuningJobRequest& request, const CreateHyperParameterTuningJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateLabelingJobAsyncHelper(const Model::CreateLabelingJobRequest& request, const CreateLabelingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateModelAsyncHelper(const Model::CreateModelRequest& request, const CreateModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateModelPackageAsyncHelper(const Model::CreateModelPackageRequest& request, const CreateModelPackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateNotebookInstanceAsyncHelper(const Model::CreateNotebookInstanceRequest& request, const CreateNotebookInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateNotebookInstanceLifecycleConfigAsyncHelper(const Model::CreateNotebookInstanceLifecycleConfigRequest& request, const CreateNotebookInstanceLifecycleConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePresignedNotebookInstanceUrlAsyncHelper(const Model::CreatePresignedNotebookInstanceUrlRequest& request, const CreatePresignedNotebookInstanceUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateTrainingJobAsyncHelper(const Model::CreateTrainingJobRequest& request, const CreateTrainingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateTransformJobAsyncHelper(const Model::CreateTransformJobRequest& request, const CreateTransformJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateWorkteamAsyncHelper(const Model::CreateWorkteamRequest& request, const CreateWorkteamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAlgorithmAsyncHelper(const Model::DeleteAlgorithmRequest& request, const DeleteAlgorithmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteCodeRepositoryAsyncHelper(const Model::DeleteCodeRepositoryRequest& request, const DeleteCodeRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteEndpointAsyncHelper(const Model::DeleteEndpointRequest& request, const DeleteEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteEndpointConfigAsyncHelper(const Model::DeleteEndpointConfigRequest& request, const DeleteEndpointConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteModelAsyncHelper(const Model::DeleteModelRequest& request, const DeleteModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteModelPackageAsyncHelper(const Model::DeleteModelPackageRequest& request, const DeleteModelPackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteNotebookInstanceAsyncHelper(const Model::DeleteNotebookInstanceRequest& request, const DeleteNotebookInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteNotebookInstanceLifecycleConfigAsyncHelper(const Model::DeleteNotebookInstanceLifecycleConfigRequest& request, const DeleteNotebookInstanceLifecycleConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteTagsAsyncHelper(const Model::DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteWorkteamAsyncHelper(const Model::DeleteWorkteamRequest& request, const DeleteWorkteamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAlgorithmAsyncHelper(const Model::DescribeAlgorithmRequest& request, const DescribeAlgorithmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeCodeRepositoryAsyncHelper(const Model::DescribeCodeRepositoryRequest& request, const DescribeCodeRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeCompilationJobAsyncHelper(const Model::DescribeCompilationJobRequest& request, const DescribeCompilationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEndpointAsyncHelper(const Model::DescribeEndpointRequest& request, const DescribeEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEndpointConfigAsyncHelper(const Model::DescribeEndpointConfigRequest& request, const DescribeEndpointConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeHyperParameterTuningJobAsyncHelper(const Model::DescribeHyperParameterTuningJobRequest& request, const DescribeHyperParameterTuningJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeLabelingJobAsyncHelper(const Model::DescribeLabelingJobRequest& request, const DescribeLabelingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeModelAsyncHelper(const Model::DescribeModelRequest& request, const DescribeModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeModelPackageAsyncHelper(const Model::DescribeModelPackageRequest& request, const DescribeModelPackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeNotebookInstanceAsyncHelper(const Model::DescribeNotebookInstanceRequest& request, const DescribeNotebookInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeNotebookInstanceLifecycleConfigAsyncHelper(const Model::DescribeNotebookInstanceLifecycleConfigRequest& request, const DescribeNotebookInstanceLifecycleConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeSubscribedWorkteamAsyncHelper(const Model::DescribeSubscribedWorkteamRequest& request, const DescribeSubscribedWorkteamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeTrainingJobAsyncHelper(const Model::DescribeTrainingJobRequest& request, const DescribeTrainingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeTransformJobAsyncHelper(const Model::DescribeTransformJobRequest& request, const DescribeTransformJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeWorkteamAsyncHelper(const Model::DescribeWorkteamRequest& request, const DescribeWorkteamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSearchSuggestionsAsyncHelper(const Model::GetSearchSuggestionsRequest& request, const GetSearchSuggestionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAlgorithmsAsyncHelper(const Model::ListAlgorithmsRequest& request, const ListAlgorithmsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListCodeRepositoriesAsyncHelper(const Model::ListCodeRepositoriesRequest& request, const ListCodeRepositoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListCompilationJobsAsyncHelper(const Model::ListCompilationJobsRequest& request, const ListCompilationJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListEndpointConfigsAsyncHelper(const Model::ListEndpointConfigsRequest& request, const ListEndpointConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListEndpointsAsyncHelper(const Model::ListEndpointsRequest& request, const ListEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListHyperParameterTuningJobsAsyncHelper(const Model::ListHyperParameterTuningJobsRequest& request, const ListHyperParameterTuningJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListLabelingJobsAsyncHelper(const Model::ListLabelingJobsRequest& request, const ListLabelingJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListLabelingJobsForWorkteamAsyncHelper(const Model::ListLabelingJobsForWorkteamRequest& request, const ListLabelingJobsForWorkteamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListModelPackagesAsyncHelper(const Model::ListModelPackagesRequest& request, const ListModelPackagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListModelsAsyncHelper(const Model::ListModelsRequest& request, const ListModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListNotebookInstanceLifecycleConfigsAsyncHelper(const Model::ListNotebookInstanceLifecycleConfigsRequest& request, const ListNotebookInstanceLifecycleConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListNotebookInstancesAsyncHelper(const Model::ListNotebookInstancesRequest& request, const ListNotebookInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSubscribedWorkteamsAsyncHelper(const Model::ListSubscribedWorkteamsRequest& request, const ListSubscribedWorkteamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsAsyncHelper(const Model::ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTrainingJobsAsyncHelper(const Model::ListTrainingJobsRequest& request, const ListTrainingJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTrainingJobsForHyperParameterTuningJobAsyncHelper(const Model::ListTrainingJobsForHyperParameterTuningJobRequest& request, const ListTrainingJobsForHyperParameterTuningJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTransformJobsAsyncHelper(const Model::ListTransformJobsRequest& request, const ListTransformJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListWorkteamsAsyncHelper(const Model::ListWorkteamsRequest& request, const ListWorkteamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RenderUiTemplateAsyncHelper(const Model::RenderUiTemplateRequest& request, const RenderUiTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SearchAsyncHelper(const Model::SearchRequest& request, const SearchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartNotebookInstanceAsyncHelper(const Model::StartNotebookInstanceRequest& request, const StartNotebookInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopCompilationJobAsyncHelper(const Model::StopCompilationJobRequest& request, const StopCompilationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopHyperParameterTuningJobAsyncHelper(const Model::StopHyperParameterTuningJobRequest& request, const StopHyperParameterTuningJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopLabelingJobAsyncHelper(const Model::StopLabelingJobRequest& request, const StopLabelingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopNotebookInstanceAsyncHelper(const Model::StopNotebookInstanceRequest& request, const StopNotebookInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopTrainingJobAsyncHelper(const Model::StopTrainingJobRequest& request, const StopTrainingJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopTransformJobAsyncHelper(const Model::StopTransformJobRequest& request, const StopTransformJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateCodeRepositoryAsyncHelper(const Model::UpdateCodeRepositoryRequest& request, const UpdateCodeRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateEndpointAsyncHelper(const Model::UpdateEndpointRequest& request, const UpdateEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateEndpointWeightsAndCapacitiesAsyncHelper(const Model::UpdateEndpointWeightsAndCapacitiesRequest& request, const UpdateEndpointWeightsAndCapacitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateNotebookInstanceAsyncHelper(const Model::UpdateNotebookInstanceRequest& request, const UpdateNotebookInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateNotebookInstanceLifecycleConfigAsyncHelper(const Model::UpdateNotebookInstanceLifecycleConfigRequest& request, const UpdateNotebookInstanceLifecycleConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateWorkteamAsyncHelper(const Model::UpdateWorkteamRequest& request, const UpdateWorkteamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace SageMaker
} // namespace Aws
