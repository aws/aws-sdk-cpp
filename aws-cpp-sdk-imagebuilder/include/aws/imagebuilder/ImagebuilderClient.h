/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/ImagebuilderErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/imagebuilder/model/CancelImageCreationResult.h>
#include <aws/imagebuilder/model/CreateComponentResult.h>
#include <aws/imagebuilder/model/CreateContainerRecipeResult.h>
#include <aws/imagebuilder/model/CreateDistributionConfigurationResult.h>
#include <aws/imagebuilder/model/CreateImageResult.h>
#include <aws/imagebuilder/model/CreateImagePipelineResult.h>
#include <aws/imagebuilder/model/CreateImageRecipeResult.h>
#include <aws/imagebuilder/model/CreateInfrastructureConfigurationResult.h>
#include <aws/imagebuilder/model/DeleteComponentResult.h>
#include <aws/imagebuilder/model/DeleteContainerRecipeResult.h>
#include <aws/imagebuilder/model/DeleteDistributionConfigurationResult.h>
#include <aws/imagebuilder/model/DeleteImageResult.h>
#include <aws/imagebuilder/model/DeleteImagePipelineResult.h>
#include <aws/imagebuilder/model/DeleteImageRecipeResult.h>
#include <aws/imagebuilder/model/DeleteInfrastructureConfigurationResult.h>
#include <aws/imagebuilder/model/GetComponentResult.h>
#include <aws/imagebuilder/model/GetComponentPolicyResult.h>
#include <aws/imagebuilder/model/GetContainerRecipeResult.h>
#include <aws/imagebuilder/model/GetContainerRecipePolicyResult.h>
#include <aws/imagebuilder/model/GetDistributionConfigurationResult.h>
#include <aws/imagebuilder/model/GetImageResult.h>
#include <aws/imagebuilder/model/GetImagePipelineResult.h>
#include <aws/imagebuilder/model/GetImagePolicyResult.h>
#include <aws/imagebuilder/model/GetImageRecipeResult.h>
#include <aws/imagebuilder/model/GetImageRecipePolicyResult.h>
#include <aws/imagebuilder/model/GetInfrastructureConfigurationResult.h>
#include <aws/imagebuilder/model/ImportComponentResult.h>
#include <aws/imagebuilder/model/ImportVmImageResult.h>
#include <aws/imagebuilder/model/ListComponentBuildVersionsResult.h>
#include <aws/imagebuilder/model/ListComponentsResult.h>
#include <aws/imagebuilder/model/ListContainerRecipesResult.h>
#include <aws/imagebuilder/model/ListDistributionConfigurationsResult.h>
#include <aws/imagebuilder/model/ListImageBuildVersionsResult.h>
#include <aws/imagebuilder/model/ListImagePackagesResult.h>
#include <aws/imagebuilder/model/ListImagePipelineImagesResult.h>
#include <aws/imagebuilder/model/ListImagePipelinesResult.h>
#include <aws/imagebuilder/model/ListImageRecipesResult.h>
#include <aws/imagebuilder/model/ListImagesResult.h>
#include <aws/imagebuilder/model/ListInfrastructureConfigurationsResult.h>
#include <aws/imagebuilder/model/ListTagsForResourceResult.h>
#include <aws/imagebuilder/model/PutComponentPolicyResult.h>
#include <aws/imagebuilder/model/PutContainerRecipePolicyResult.h>
#include <aws/imagebuilder/model/PutImagePolicyResult.h>
#include <aws/imagebuilder/model/PutImageRecipePolicyResult.h>
#include <aws/imagebuilder/model/StartImagePipelineExecutionResult.h>
#include <aws/imagebuilder/model/TagResourceResult.h>
#include <aws/imagebuilder/model/UntagResourceResult.h>
#include <aws/imagebuilder/model/UpdateDistributionConfigurationResult.h>
#include <aws/imagebuilder/model/UpdateImagePipelineResult.h>
#include <aws/imagebuilder/model/UpdateInfrastructureConfigurationResult.h>
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

namespace imagebuilder
{

namespace Model
{
        class CancelImageCreationRequest;
        class CreateComponentRequest;
        class CreateContainerRecipeRequest;
        class CreateDistributionConfigurationRequest;
        class CreateImageRequest;
        class CreateImagePipelineRequest;
        class CreateImageRecipeRequest;
        class CreateInfrastructureConfigurationRequest;
        class DeleteComponentRequest;
        class DeleteContainerRecipeRequest;
        class DeleteDistributionConfigurationRequest;
        class DeleteImageRequest;
        class DeleteImagePipelineRequest;
        class DeleteImageRecipeRequest;
        class DeleteInfrastructureConfigurationRequest;
        class GetComponentRequest;
        class GetComponentPolicyRequest;
        class GetContainerRecipeRequest;
        class GetContainerRecipePolicyRequest;
        class GetDistributionConfigurationRequest;
        class GetImageRequest;
        class GetImagePipelineRequest;
        class GetImagePolicyRequest;
        class GetImageRecipeRequest;
        class GetImageRecipePolicyRequest;
        class GetInfrastructureConfigurationRequest;
        class ImportComponentRequest;
        class ImportVmImageRequest;
        class ListComponentBuildVersionsRequest;
        class ListComponentsRequest;
        class ListContainerRecipesRequest;
        class ListDistributionConfigurationsRequest;
        class ListImageBuildVersionsRequest;
        class ListImagePackagesRequest;
        class ListImagePipelineImagesRequest;
        class ListImagePipelinesRequest;
        class ListImageRecipesRequest;
        class ListImagesRequest;
        class ListInfrastructureConfigurationsRequest;
        class ListTagsForResourceRequest;
        class PutComponentPolicyRequest;
        class PutContainerRecipePolicyRequest;
        class PutImagePolicyRequest;
        class PutImageRecipePolicyRequest;
        class StartImagePipelineExecutionRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateDistributionConfigurationRequest;
        class UpdateImagePipelineRequest;
        class UpdateInfrastructureConfigurationRequest;

        typedef Aws::Utils::Outcome<CancelImageCreationResult, ImagebuilderError> CancelImageCreationOutcome;
        typedef Aws::Utils::Outcome<CreateComponentResult, ImagebuilderError> CreateComponentOutcome;
        typedef Aws::Utils::Outcome<CreateContainerRecipeResult, ImagebuilderError> CreateContainerRecipeOutcome;
        typedef Aws::Utils::Outcome<CreateDistributionConfigurationResult, ImagebuilderError> CreateDistributionConfigurationOutcome;
        typedef Aws::Utils::Outcome<CreateImageResult, ImagebuilderError> CreateImageOutcome;
        typedef Aws::Utils::Outcome<CreateImagePipelineResult, ImagebuilderError> CreateImagePipelineOutcome;
        typedef Aws::Utils::Outcome<CreateImageRecipeResult, ImagebuilderError> CreateImageRecipeOutcome;
        typedef Aws::Utils::Outcome<CreateInfrastructureConfigurationResult, ImagebuilderError> CreateInfrastructureConfigurationOutcome;
        typedef Aws::Utils::Outcome<DeleteComponentResult, ImagebuilderError> DeleteComponentOutcome;
        typedef Aws::Utils::Outcome<DeleteContainerRecipeResult, ImagebuilderError> DeleteContainerRecipeOutcome;
        typedef Aws::Utils::Outcome<DeleteDistributionConfigurationResult, ImagebuilderError> DeleteDistributionConfigurationOutcome;
        typedef Aws::Utils::Outcome<DeleteImageResult, ImagebuilderError> DeleteImageOutcome;
        typedef Aws::Utils::Outcome<DeleteImagePipelineResult, ImagebuilderError> DeleteImagePipelineOutcome;
        typedef Aws::Utils::Outcome<DeleteImageRecipeResult, ImagebuilderError> DeleteImageRecipeOutcome;
        typedef Aws::Utils::Outcome<DeleteInfrastructureConfigurationResult, ImagebuilderError> DeleteInfrastructureConfigurationOutcome;
        typedef Aws::Utils::Outcome<GetComponentResult, ImagebuilderError> GetComponentOutcome;
        typedef Aws::Utils::Outcome<GetComponentPolicyResult, ImagebuilderError> GetComponentPolicyOutcome;
        typedef Aws::Utils::Outcome<GetContainerRecipeResult, ImagebuilderError> GetContainerRecipeOutcome;
        typedef Aws::Utils::Outcome<GetContainerRecipePolicyResult, ImagebuilderError> GetContainerRecipePolicyOutcome;
        typedef Aws::Utils::Outcome<GetDistributionConfigurationResult, ImagebuilderError> GetDistributionConfigurationOutcome;
        typedef Aws::Utils::Outcome<GetImageResult, ImagebuilderError> GetImageOutcome;
        typedef Aws::Utils::Outcome<GetImagePipelineResult, ImagebuilderError> GetImagePipelineOutcome;
        typedef Aws::Utils::Outcome<GetImagePolicyResult, ImagebuilderError> GetImagePolicyOutcome;
        typedef Aws::Utils::Outcome<GetImageRecipeResult, ImagebuilderError> GetImageRecipeOutcome;
        typedef Aws::Utils::Outcome<GetImageRecipePolicyResult, ImagebuilderError> GetImageRecipePolicyOutcome;
        typedef Aws::Utils::Outcome<GetInfrastructureConfigurationResult, ImagebuilderError> GetInfrastructureConfigurationOutcome;
        typedef Aws::Utils::Outcome<ImportComponentResult, ImagebuilderError> ImportComponentOutcome;
        typedef Aws::Utils::Outcome<ImportVmImageResult, ImagebuilderError> ImportVmImageOutcome;
        typedef Aws::Utils::Outcome<ListComponentBuildVersionsResult, ImagebuilderError> ListComponentBuildVersionsOutcome;
        typedef Aws::Utils::Outcome<ListComponentsResult, ImagebuilderError> ListComponentsOutcome;
        typedef Aws::Utils::Outcome<ListContainerRecipesResult, ImagebuilderError> ListContainerRecipesOutcome;
        typedef Aws::Utils::Outcome<ListDistributionConfigurationsResult, ImagebuilderError> ListDistributionConfigurationsOutcome;
        typedef Aws::Utils::Outcome<ListImageBuildVersionsResult, ImagebuilderError> ListImageBuildVersionsOutcome;
        typedef Aws::Utils::Outcome<ListImagePackagesResult, ImagebuilderError> ListImagePackagesOutcome;
        typedef Aws::Utils::Outcome<ListImagePipelineImagesResult, ImagebuilderError> ListImagePipelineImagesOutcome;
        typedef Aws::Utils::Outcome<ListImagePipelinesResult, ImagebuilderError> ListImagePipelinesOutcome;
        typedef Aws::Utils::Outcome<ListImageRecipesResult, ImagebuilderError> ListImageRecipesOutcome;
        typedef Aws::Utils::Outcome<ListImagesResult, ImagebuilderError> ListImagesOutcome;
        typedef Aws::Utils::Outcome<ListInfrastructureConfigurationsResult, ImagebuilderError> ListInfrastructureConfigurationsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, ImagebuilderError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<PutComponentPolicyResult, ImagebuilderError> PutComponentPolicyOutcome;
        typedef Aws::Utils::Outcome<PutContainerRecipePolicyResult, ImagebuilderError> PutContainerRecipePolicyOutcome;
        typedef Aws::Utils::Outcome<PutImagePolicyResult, ImagebuilderError> PutImagePolicyOutcome;
        typedef Aws::Utils::Outcome<PutImageRecipePolicyResult, ImagebuilderError> PutImageRecipePolicyOutcome;
        typedef Aws::Utils::Outcome<StartImagePipelineExecutionResult, ImagebuilderError> StartImagePipelineExecutionOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, ImagebuilderError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, ImagebuilderError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateDistributionConfigurationResult, ImagebuilderError> UpdateDistributionConfigurationOutcome;
        typedef Aws::Utils::Outcome<UpdateImagePipelineResult, ImagebuilderError> UpdateImagePipelineOutcome;
        typedef Aws::Utils::Outcome<UpdateInfrastructureConfigurationResult, ImagebuilderError> UpdateInfrastructureConfigurationOutcome;

        typedef std::future<CancelImageCreationOutcome> CancelImageCreationOutcomeCallable;
        typedef std::future<CreateComponentOutcome> CreateComponentOutcomeCallable;
        typedef std::future<CreateContainerRecipeOutcome> CreateContainerRecipeOutcomeCallable;
        typedef std::future<CreateDistributionConfigurationOutcome> CreateDistributionConfigurationOutcomeCallable;
        typedef std::future<CreateImageOutcome> CreateImageOutcomeCallable;
        typedef std::future<CreateImagePipelineOutcome> CreateImagePipelineOutcomeCallable;
        typedef std::future<CreateImageRecipeOutcome> CreateImageRecipeOutcomeCallable;
        typedef std::future<CreateInfrastructureConfigurationOutcome> CreateInfrastructureConfigurationOutcomeCallable;
        typedef std::future<DeleteComponentOutcome> DeleteComponentOutcomeCallable;
        typedef std::future<DeleteContainerRecipeOutcome> DeleteContainerRecipeOutcomeCallable;
        typedef std::future<DeleteDistributionConfigurationOutcome> DeleteDistributionConfigurationOutcomeCallable;
        typedef std::future<DeleteImageOutcome> DeleteImageOutcomeCallable;
        typedef std::future<DeleteImagePipelineOutcome> DeleteImagePipelineOutcomeCallable;
        typedef std::future<DeleteImageRecipeOutcome> DeleteImageRecipeOutcomeCallable;
        typedef std::future<DeleteInfrastructureConfigurationOutcome> DeleteInfrastructureConfigurationOutcomeCallable;
        typedef std::future<GetComponentOutcome> GetComponentOutcomeCallable;
        typedef std::future<GetComponentPolicyOutcome> GetComponentPolicyOutcomeCallable;
        typedef std::future<GetContainerRecipeOutcome> GetContainerRecipeOutcomeCallable;
        typedef std::future<GetContainerRecipePolicyOutcome> GetContainerRecipePolicyOutcomeCallable;
        typedef std::future<GetDistributionConfigurationOutcome> GetDistributionConfigurationOutcomeCallable;
        typedef std::future<GetImageOutcome> GetImageOutcomeCallable;
        typedef std::future<GetImagePipelineOutcome> GetImagePipelineOutcomeCallable;
        typedef std::future<GetImagePolicyOutcome> GetImagePolicyOutcomeCallable;
        typedef std::future<GetImageRecipeOutcome> GetImageRecipeOutcomeCallable;
        typedef std::future<GetImageRecipePolicyOutcome> GetImageRecipePolicyOutcomeCallable;
        typedef std::future<GetInfrastructureConfigurationOutcome> GetInfrastructureConfigurationOutcomeCallable;
        typedef std::future<ImportComponentOutcome> ImportComponentOutcomeCallable;
        typedef std::future<ImportVmImageOutcome> ImportVmImageOutcomeCallable;
        typedef std::future<ListComponentBuildVersionsOutcome> ListComponentBuildVersionsOutcomeCallable;
        typedef std::future<ListComponentsOutcome> ListComponentsOutcomeCallable;
        typedef std::future<ListContainerRecipesOutcome> ListContainerRecipesOutcomeCallable;
        typedef std::future<ListDistributionConfigurationsOutcome> ListDistributionConfigurationsOutcomeCallable;
        typedef std::future<ListImageBuildVersionsOutcome> ListImageBuildVersionsOutcomeCallable;
        typedef std::future<ListImagePackagesOutcome> ListImagePackagesOutcomeCallable;
        typedef std::future<ListImagePipelineImagesOutcome> ListImagePipelineImagesOutcomeCallable;
        typedef std::future<ListImagePipelinesOutcome> ListImagePipelinesOutcomeCallable;
        typedef std::future<ListImageRecipesOutcome> ListImageRecipesOutcomeCallable;
        typedef std::future<ListImagesOutcome> ListImagesOutcomeCallable;
        typedef std::future<ListInfrastructureConfigurationsOutcome> ListInfrastructureConfigurationsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<PutComponentPolicyOutcome> PutComponentPolicyOutcomeCallable;
        typedef std::future<PutContainerRecipePolicyOutcome> PutContainerRecipePolicyOutcomeCallable;
        typedef std::future<PutImagePolicyOutcome> PutImagePolicyOutcomeCallable;
        typedef std::future<PutImageRecipePolicyOutcome> PutImageRecipePolicyOutcomeCallable;
        typedef std::future<StartImagePipelineExecutionOutcome> StartImagePipelineExecutionOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateDistributionConfigurationOutcome> UpdateDistributionConfigurationOutcomeCallable;
        typedef std::future<UpdateImagePipelineOutcome> UpdateImagePipelineOutcomeCallable;
        typedef std::future<UpdateInfrastructureConfigurationOutcome> UpdateInfrastructureConfigurationOutcomeCallable;
} // namespace Model

  class ImagebuilderClient;

    typedef std::function<void(const ImagebuilderClient*, const Model::CancelImageCreationRequest&, const Model::CancelImageCreationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelImageCreationResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::CreateComponentRequest&, const Model::CreateComponentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateComponentResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::CreateContainerRecipeRequest&, const Model::CreateContainerRecipeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateContainerRecipeResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::CreateDistributionConfigurationRequest&, const Model::CreateDistributionConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDistributionConfigurationResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::CreateImageRequest&, const Model::CreateImageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateImageResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::CreateImagePipelineRequest&, const Model::CreateImagePipelineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateImagePipelineResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::CreateImageRecipeRequest&, const Model::CreateImageRecipeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateImageRecipeResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::CreateInfrastructureConfigurationRequest&, const Model::CreateInfrastructureConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateInfrastructureConfigurationResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::DeleteComponentRequest&, const Model::DeleteComponentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteComponentResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::DeleteContainerRecipeRequest&, const Model::DeleteContainerRecipeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteContainerRecipeResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::DeleteDistributionConfigurationRequest&, const Model::DeleteDistributionConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDistributionConfigurationResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::DeleteImageRequest&, const Model::DeleteImageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteImageResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::DeleteImagePipelineRequest&, const Model::DeleteImagePipelineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteImagePipelineResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::DeleteImageRecipeRequest&, const Model::DeleteImageRecipeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteImageRecipeResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::DeleteInfrastructureConfigurationRequest&, const Model::DeleteInfrastructureConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteInfrastructureConfigurationResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::GetComponentRequest&, const Model::GetComponentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetComponentResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::GetComponentPolicyRequest&, const Model::GetComponentPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetComponentPolicyResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::GetContainerRecipeRequest&, const Model::GetContainerRecipeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetContainerRecipeResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::GetContainerRecipePolicyRequest&, const Model::GetContainerRecipePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetContainerRecipePolicyResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::GetDistributionConfigurationRequest&, const Model::GetDistributionConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDistributionConfigurationResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::GetImageRequest&, const Model::GetImageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetImageResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::GetImagePipelineRequest&, const Model::GetImagePipelineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetImagePipelineResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::GetImagePolicyRequest&, const Model::GetImagePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetImagePolicyResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::GetImageRecipeRequest&, const Model::GetImageRecipeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetImageRecipeResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::GetImageRecipePolicyRequest&, const Model::GetImageRecipePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetImageRecipePolicyResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::GetInfrastructureConfigurationRequest&, const Model::GetInfrastructureConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInfrastructureConfigurationResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::ImportComponentRequest&, const Model::ImportComponentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportComponentResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::ImportVmImageRequest&, const Model::ImportVmImageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportVmImageResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::ListComponentBuildVersionsRequest&, const Model::ListComponentBuildVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListComponentBuildVersionsResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::ListComponentsRequest&, const Model::ListComponentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListComponentsResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::ListContainerRecipesRequest&, const Model::ListContainerRecipesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListContainerRecipesResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::ListDistributionConfigurationsRequest&, const Model::ListDistributionConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDistributionConfigurationsResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::ListImageBuildVersionsRequest&, const Model::ListImageBuildVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListImageBuildVersionsResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::ListImagePackagesRequest&, const Model::ListImagePackagesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListImagePackagesResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::ListImagePipelineImagesRequest&, const Model::ListImagePipelineImagesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListImagePipelineImagesResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::ListImagePipelinesRequest&, const Model::ListImagePipelinesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListImagePipelinesResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::ListImageRecipesRequest&, const Model::ListImageRecipesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListImageRecipesResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::ListImagesRequest&, const Model::ListImagesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListImagesResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::ListInfrastructureConfigurationsRequest&, const Model::ListInfrastructureConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInfrastructureConfigurationsResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::PutComponentPolicyRequest&, const Model::PutComponentPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutComponentPolicyResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::PutContainerRecipePolicyRequest&, const Model::PutContainerRecipePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutContainerRecipePolicyResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::PutImagePolicyRequest&, const Model::PutImagePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutImagePolicyResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::PutImageRecipePolicyRequest&, const Model::PutImageRecipePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutImageRecipePolicyResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::StartImagePipelineExecutionRequest&, const Model::StartImagePipelineExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartImagePipelineExecutionResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::UpdateDistributionConfigurationRequest&, const Model::UpdateDistributionConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDistributionConfigurationResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::UpdateImagePipelineRequest&, const Model::UpdateImagePipelineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateImagePipelineResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::UpdateInfrastructureConfigurationRequest&, const Model::UpdateInfrastructureConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateInfrastructureConfigurationResponseReceivedHandler;

  /**
   * <p>EC2 Image Builder is a fully managed Amazon Web Services service that makes
   * it easier to automate the creation, management, and deployment of customized,
   * secure, and up-to-date "golden" server images that are pre-installed and
   * pre-configured with software and settings to meet specific IT standards.</p>
   */
  class AWS_IMAGEBUILDER_API ImagebuilderClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ImagebuilderClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ImagebuilderClient(const Aws::Auth::AWSCredentials& credentials,
                           const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ImagebuilderClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~ImagebuilderClient();


        /**
         * <p>CancelImageCreation cancels the creation of Image. This operation can only be
         * used on images in a non-terminal state.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/CancelImageCreation">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelImageCreationOutcome CancelImageCreation(const Model::CancelImageCreationRequest& request) const;

        /**
         * A Callable wrapper for CancelImageCreation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelImageCreationOutcomeCallable CancelImageCreationCallable(const Model::CancelImageCreationRequest& request) const;

        /**
         * An Async wrapper for CancelImageCreation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelImageCreationAsync(const Model::CancelImageCreationRequest& request, const CancelImageCreationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new component that can be used to build, validate, test, and assess
         * your image. The component is based on a YAML document that you specify using
         * exactly one of the following methods:</p> <ul> <li> <p>Inline, using the
         * <code>data</code> property in the request body.</p> </li> <li> <p>A URL that
         * points to a YAML document file stored in Amazon S3, using the <code>uri</code>
         * property in the request body.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/CreateComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateComponentOutcome CreateComponent(const Model::CreateComponentRequest& request) const;

        /**
         * A Callable wrapper for CreateComponent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateComponentOutcomeCallable CreateComponentCallable(const Model::CreateComponentRequest& request) const;

        /**
         * An Async wrapper for CreateComponent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateComponentAsync(const Model::CreateComponentRequest& request, const CreateComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new container recipe. Container recipes define how images are
         * configured, tested, and assessed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/CreateContainerRecipe">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateContainerRecipeOutcome CreateContainerRecipe(const Model::CreateContainerRecipeRequest& request) const;

        /**
         * A Callable wrapper for CreateContainerRecipe that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateContainerRecipeOutcomeCallable CreateContainerRecipeCallable(const Model::CreateContainerRecipeRequest& request) const;

        /**
         * An Async wrapper for CreateContainerRecipe that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateContainerRecipeAsync(const Model::CreateContainerRecipeRequest& request, const CreateContainerRecipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new distribution configuration. Distribution configurations define
         * and configure the outputs of your pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/CreateDistributionConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDistributionConfigurationOutcome CreateDistributionConfiguration(const Model::CreateDistributionConfigurationRequest& request) const;

        /**
         * A Callable wrapper for CreateDistributionConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDistributionConfigurationOutcomeCallable CreateDistributionConfigurationCallable(const Model::CreateDistributionConfigurationRequest& request) const;

        /**
         * An Async wrapper for CreateDistributionConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDistributionConfigurationAsync(const Model::CreateDistributionConfigurationRequest& request, const CreateDistributionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Creates a new image. This request will create a new image along with all of
         * the configured output resources defined in the distribution configuration. You
         * must specify exactly one recipe for your image, using either a
         * ContainerRecipeArn or an ImageRecipeArn.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/CreateImage">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateImageOutcome CreateImage(const Model::CreateImageRequest& request) const;

        /**
         * A Callable wrapper for CreateImage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateImageOutcomeCallable CreateImageCallable(const Model::CreateImageRequest& request) const;

        /**
         * An Async wrapper for CreateImage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateImageAsync(const Model::CreateImageRequest& request, const CreateImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Creates a new image pipeline. Image pipelines enable you to automate the
         * creation and distribution of images.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/CreateImagePipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateImagePipelineOutcome CreateImagePipeline(const Model::CreateImagePipelineRequest& request) const;

        /**
         * A Callable wrapper for CreateImagePipeline that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateImagePipelineOutcomeCallable CreateImagePipelineCallable(const Model::CreateImagePipelineRequest& request) const;

        /**
         * An Async wrapper for CreateImagePipeline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateImagePipelineAsync(const Model::CreateImagePipelineRequest& request, const CreateImagePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Creates a new image recipe. Image recipes define how images are configured,
         * tested, and assessed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/CreateImageRecipe">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateImageRecipeOutcome CreateImageRecipe(const Model::CreateImageRecipeRequest& request) const;

        /**
         * A Callable wrapper for CreateImageRecipe that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateImageRecipeOutcomeCallable CreateImageRecipeCallable(const Model::CreateImageRecipeRequest& request) const;

        /**
         * An Async wrapper for CreateImageRecipe that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateImageRecipeAsync(const Model::CreateImageRecipeRequest& request, const CreateImageRecipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Creates a new infrastructure configuration. An infrastructure configuration
         * defines the environment in which your image will be built and
         * tested.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/CreateInfrastructureConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInfrastructureConfigurationOutcome CreateInfrastructureConfiguration(const Model::CreateInfrastructureConfigurationRequest& request) const;

        /**
         * A Callable wrapper for CreateInfrastructureConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateInfrastructureConfigurationOutcomeCallable CreateInfrastructureConfigurationCallable(const Model::CreateInfrastructureConfigurationRequest& request) const;

        /**
         * An Async wrapper for CreateInfrastructureConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateInfrastructureConfigurationAsync(const Model::CreateInfrastructureConfigurationRequest& request, const CreateInfrastructureConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Deletes a component build version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/DeleteComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteComponentOutcome DeleteComponent(const Model::DeleteComponentRequest& request) const;

        /**
         * A Callable wrapper for DeleteComponent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteComponentOutcomeCallable DeleteComponentCallable(const Model::DeleteComponentRequest& request) const;

        /**
         * An Async wrapper for DeleteComponent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteComponentAsync(const Model::DeleteComponentRequest& request, const DeleteComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a container recipe.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/DeleteContainerRecipe">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteContainerRecipeOutcome DeleteContainerRecipe(const Model::DeleteContainerRecipeRequest& request) const;

        /**
         * A Callable wrapper for DeleteContainerRecipe that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteContainerRecipeOutcomeCallable DeleteContainerRecipeCallable(const Model::DeleteContainerRecipeRequest& request) const;

        /**
         * An Async wrapper for DeleteContainerRecipe that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteContainerRecipeAsync(const Model::DeleteContainerRecipeRequest& request, const DeleteContainerRecipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Deletes a distribution configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/DeleteDistributionConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDistributionConfigurationOutcome DeleteDistributionConfiguration(const Model::DeleteDistributionConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteDistributionConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDistributionConfigurationOutcomeCallable DeleteDistributionConfigurationCallable(const Model::DeleteDistributionConfigurationRequest& request) const;

        /**
         * An Async wrapper for DeleteDistributionConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDistributionConfigurationAsync(const Model::DeleteDistributionConfigurationRequest& request, const DeleteDistributionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an Image Builder image resource. This does not delete any EC2 AMIs or
         * ECR container images that are created during the image build process. You must
         * clean those up separately, using the appropriate Amazon EC2 or Amazon ECR
         * console actions, or API or CLI commands.</p> <ul> <li> <p>To deregister an EC2
         * Linux AMI, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/deregister-ami.html">Deregister
         * your Linux AMI</a> in the <i> <i>Amazon EC2 User Guide</i> </i>.</p> </li> <li>
         * <p>To deregister an EC2 Windows AMI, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/deregister-ami.html">Deregister
         * your Windows AMI</a> in the <i> <i>Amazon EC2 Windows Guide</i> </i>.</p> </li>
         * <li> <p>To delete a container image from Amazon ECR, see <a
         * href="https://docs.aws.amazon.com/AmazonECR/latest/userguide/delete_image.html">Deleting
         * an image</a> in the <i>Amazon ECR User Guide</i>.</p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/DeleteImage">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteImageOutcome DeleteImage(const Model::DeleteImageRequest& request) const;

        /**
         * A Callable wrapper for DeleteImage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteImageOutcomeCallable DeleteImageCallable(const Model::DeleteImageRequest& request) const;

        /**
         * An Async wrapper for DeleteImage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteImageAsync(const Model::DeleteImageRequest& request, const DeleteImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Deletes an image pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/DeleteImagePipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteImagePipelineOutcome DeleteImagePipeline(const Model::DeleteImagePipelineRequest& request) const;

        /**
         * A Callable wrapper for DeleteImagePipeline that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteImagePipelineOutcomeCallable DeleteImagePipelineCallable(const Model::DeleteImagePipelineRequest& request) const;

        /**
         * An Async wrapper for DeleteImagePipeline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteImagePipelineAsync(const Model::DeleteImagePipelineRequest& request, const DeleteImagePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Deletes an image recipe.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/DeleteImageRecipe">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteImageRecipeOutcome DeleteImageRecipe(const Model::DeleteImageRecipeRequest& request) const;

        /**
         * A Callable wrapper for DeleteImageRecipe that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteImageRecipeOutcomeCallable DeleteImageRecipeCallable(const Model::DeleteImageRecipeRequest& request) const;

        /**
         * An Async wrapper for DeleteImageRecipe that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteImageRecipeAsync(const Model::DeleteImageRecipeRequest& request, const DeleteImageRecipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Deletes an infrastructure configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/DeleteInfrastructureConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInfrastructureConfigurationOutcome DeleteInfrastructureConfiguration(const Model::DeleteInfrastructureConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteInfrastructureConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteInfrastructureConfigurationOutcomeCallable DeleteInfrastructureConfigurationCallable(const Model::DeleteInfrastructureConfigurationRequest& request) const;

        /**
         * An Async wrapper for DeleteInfrastructureConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteInfrastructureConfigurationAsync(const Model::DeleteInfrastructureConfigurationRequest& request, const DeleteInfrastructureConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Gets a component object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/GetComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::GetComponentOutcome GetComponent(const Model::GetComponentRequest& request) const;

        /**
         * A Callable wrapper for GetComponent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetComponentOutcomeCallable GetComponentCallable(const Model::GetComponentRequest& request) const;

        /**
         * An Async wrapper for GetComponent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetComponentAsync(const Model::GetComponentRequest& request, const GetComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Gets a component policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/GetComponentPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetComponentPolicyOutcome GetComponentPolicy(const Model::GetComponentPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetComponentPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetComponentPolicyOutcomeCallable GetComponentPolicyCallable(const Model::GetComponentPolicyRequest& request) const;

        /**
         * An Async wrapper for GetComponentPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetComponentPolicyAsync(const Model::GetComponentPolicyRequest& request, const GetComponentPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a container recipe.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/GetContainerRecipe">AWS
         * API Reference</a></p>
         */
        virtual Model::GetContainerRecipeOutcome GetContainerRecipe(const Model::GetContainerRecipeRequest& request) const;

        /**
         * A Callable wrapper for GetContainerRecipe that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetContainerRecipeOutcomeCallable GetContainerRecipeCallable(const Model::GetContainerRecipeRequest& request) const;

        /**
         * An Async wrapper for GetContainerRecipe that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetContainerRecipeAsync(const Model::GetContainerRecipeRequest& request, const GetContainerRecipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the policy for a container recipe.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/GetContainerRecipePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetContainerRecipePolicyOutcome GetContainerRecipePolicy(const Model::GetContainerRecipePolicyRequest& request) const;

        /**
         * A Callable wrapper for GetContainerRecipePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetContainerRecipePolicyOutcomeCallable GetContainerRecipePolicyCallable(const Model::GetContainerRecipePolicyRequest& request) const;

        /**
         * An Async wrapper for GetContainerRecipePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetContainerRecipePolicyAsync(const Model::GetContainerRecipePolicyRequest& request, const GetContainerRecipePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Gets a distribution configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/GetDistributionConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDistributionConfigurationOutcome GetDistributionConfiguration(const Model::GetDistributionConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetDistributionConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDistributionConfigurationOutcomeCallable GetDistributionConfigurationCallable(const Model::GetDistributionConfigurationRequest& request) const;

        /**
         * An Async wrapper for GetDistributionConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDistributionConfigurationAsync(const Model::GetDistributionConfigurationRequest& request, const GetDistributionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Gets an image.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/GetImage">AWS
         * API Reference</a></p>
         */
        virtual Model::GetImageOutcome GetImage(const Model::GetImageRequest& request) const;

        /**
         * A Callable wrapper for GetImage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetImageOutcomeCallable GetImageCallable(const Model::GetImageRequest& request) const;

        /**
         * An Async wrapper for GetImage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetImageAsync(const Model::GetImageRequest& request, const GetImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Gets an image pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/GetImagePipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::GetImagePipelineOutcome GetImagePipeline(const Model::GetImagePipelineRequest& request) const;

        /**
         * A Callable wrapper for GetImagePipeline that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetImagePipelineOutcomeCallable GetImagePipelineCallable(const Model::GetImagePipelineRequest& request) const;

        /**
         * An Async wrapper for GetImagePipeline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetImagePipelineAsync(const Model::GetImagePipelineRequest& request, const GetImagePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Gets an image policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/GetImagePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetImagePolicyOutcome GetImagePolicy(const Model::GetImagePolicyRequest& request) const;

        /**
         * A Callable wrapper for GetImagePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetImagePolicyOutcomeCallable GetImagePolicyCallable(const Model::GetImagePolicyRequest& request) const;

        /**
         * An Async wrapper for GetImagePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetImagePolicyAsync(const Model::GetImagePolicyRequest& request, const GetImagePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Gets an image recipe.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/GetImageRecipe">AWS
         * API Reference</a></p>
         */
        virtual Model::GetImageRecipeOutcome GetImageRecipe(const Model::GetImageRecipeRequest& request) const;

        /**
         * A Callable wrapper for GetImageRecipe that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetImageRecipeOutcomeCallable GetImageRecipeCallable(const Model::GetImageRecipeRequest& request) const;

        /**
         * An Async wrapper for GetImageRecipe that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetImageRecipeAsync(const Model::GetImageRecipeRequest& request, const GetImageRecipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Gets an image recipe policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/GetImageRecipePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetImageRecipePolicyOutcome GetImageRecipePolicy(const Model::GetImageRecipePolicyRequest& request) const;

        /**
         * A Callable wrapper for GetImageRecipePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetImageRecipePolicyOutcomeCallable GetImageRecipePolicyCallable(const Model::GetImageRecipePolicyRequest& request) const;

        /**
         * An Async wrapper for GetImageRecipePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetImageRecipePolicyAsync(const Model::GetImageRecipePolicyRequest& request, const GetImageRecipePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Gets an infrastructure configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/GetInfrastructureConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInfrastructureConfigurationOutcome GetInfrastructureConfiguration(const Model::GetInfrastructureConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetInfrastructureConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetInfrastructureConfigurationOutcomeCallable GetInfrastructureConfigurationCallable(const Model::GetInfrastructureConfigurationRequest& request) const;

        /**
         * An Async wrapper for GetInfrastructureConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetInfrastructureConfigurationAsync(const Model::GetInfrastructureConfigurationRequest& request, const GetInfrastructureConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Imports a component and transforms its data into a component
         * document.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ImportComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportComponentOutcome ImportComponent(const Model::ImportComponentRequest& request) const;

        /**
         * A Callable wrapper for ImportComponent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ImportComponentOutcomeCallable ImportComponentCallable(const Model::ImportComponentRequest& request) const;

        /**
         * An Async wrapper for ImportComponent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ImportComponentAsync(const Model::ImportComponentRequest& request, const ImportComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>When you export your virtual machine (VM) from its virtualization
         * environment, that process creates a set of one or more disk container files that
         * act as snapshots of your VM’s environment, settings, and data. The Amazon EC2
         * API <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_ImportImage.html">ImportImage</a>
         * action uses those files to import your VM and create an AMI. To import using the
         * CLI command, see <a
         * href="https://docs.aws.amazon.com/cli/latest/reference/ec2/import-image.html">import-image</a>
         * </p> <p>You can reference the task ID from the VM import to pull in the AMI that
         * the import created as the base image for your Image Builder
         * recipe.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ImportVmImage">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportVmImageOutcome ImportVmImage(const Model::ImportVmImageRequest& request) const;

        /**
         * A Callable wrapper for ImportVmImage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ImportVmImageOutcomeCallable ImportVmImageCallable(const Model::ImportVmImageRequest& request) const;

        /**
         * An Async wrapper for ImportVmImage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ImportVmImageAsync(const Model::ImportVmImageRequest& request, const ImportVmImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns the list of component build versions for the specified semantic
         * version.</p>  <p>The semantic version has four nodes:
         * &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;/&lt;build&gt;. You can assign values
         * for the first three, and can filter on all of them.</p> <p> <b>Filtering:</b>
         * With semantic versioning, you have the flexibility to use wildcards (x) to
         * specify the most recent versions or nodes when selecting the base image or
         * components for your recipe. When you use a wildcard in any node, all nodes to
         * the right of the first wildcard must also be wildcards.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ListComponentBuildVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListComponentBuildVersionsOutcome ListComponentBuildVersions(const Model::ListComponentBuildVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListComponentBuildVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListComponentBuildVersionsOutcomeCallable ListComponentBuildVersionsCallable(const Model::ListComponentBuildVersionsRequest& request) const;

        /**
         * An Async wrapper for ListComponentBuildVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListComponentBuildVersionsAsync(const Model::ListComponentBuildVersionsRequest& request, const ListComponentBuildVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the list of component build versions for the specified semantic
         * version.</p>  <p>The semantic version has four nodes:
         * &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;/&lt;build&gt;. You can assign values
         * for the first three, and can filter on all of them.</p> <p> <b>Filtering:</b>
         * With semantic versioning, you have the flexibility to use wildcards (x) to
         * specify the most recent versions or nodes when selecting the base image or
         * components for your recipe. When you use a wildcard in any node, all nodes to
         * the right of the first wildcard must also be wildcards.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ListComponents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListComponentsOutcome ListComponents(const Model::ListComponentsRequest& request) const;

        /**
         * A Callable wrapper for ListComponents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListComponentsOutcomeCallable ListComponentsCallable(const Model::ListComponentsRequest& request) const;

        /**
         * An Async wrapper for ListComponents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListComponentsAsync(const Model::ListComponentsRequest& request, const ListComponentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of container recipes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ListContainerRecipes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListContainerRecipesOutcome ListContainerRecipes(const Model::ListContainerRecipesRequest& request) const;

        /**
         * A Callable wrapper for ListContainerRecipes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListContainerRecipesOutcomeCallable ListContainerRecipesCallable(const Model::ListContainerRecipesRequest& request) const;

        /**
         * An Async wrapper for ListContainerRecipes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListContainerRecipesAsync(const Model::ListContainerRecipesRequest& request, const ListContainerRecipesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of distribution configurations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ListDistributionConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDistributionConfigurationsOutcome ListDistributionConfigurations(const Model::ListDistributionConfigurationsRequest& request) const;

        /**
         * A Callable wrapper for ListDistributionConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDistributionConfigurationsOutcomeCallable ListDistributionConfigurationsCallable(const Model::ListDistributionConfigurationsRequest& request) const;

        /**
         * An Async wrapper for ListDistributionConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDistributionConfigurationsAsync(const Model::ListDistributionConfigurationsRequest& request, const ListDistributionConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of image build versions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ListImageBuildVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListImageBuildVersionsOutcome ListImageBuildVersions(const Model::ListImageBuildVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListImageBuildVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListImageBuildVersionsOutcomeCallable ListImageBuildVersionsCallable(const Model::ListImageBuildVersionsRequest& request) const;

        /**
         * An Async wrapper for ListImageBuildVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListImageBuildVersionsAsync(const Model::ListImageBuildVersionsRequest& request, const ListImageBuildVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the Packages that are associated with an Image Build Version, as
         * determined by Amazon Web Services Systems Manager Inventory at build
         * time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ListImagePackages">AWS
         * API Reference</a></p>
         */
        virtual Model::ListImagePackagesOutcome ListImagePackages(const Model::ListImagePackagesRequest& request) const;

        /**
         * A Callable wrapper for ListImagePackages that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListImagePackagesOutcomeCallable ListImagePackagesCallable(const Model::ListImagePackagesRequest& request) const;

        /**
         * An Async wrapper for ListImagePackages that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListImagePackagesAsync(const Model::ListImagePackagesRequest& request, const ListImagePackagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of images created by the specified pipeline.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ListImagePipelineImages">AWS
         * API Reference</a></p>
         */
        virtual Model::ListImagePipelineImagesOutcome ListImagePipelineImages(const Model::ListImagePipelineImagesRequest& request) const;

        /**
         * A Callable wrapper for ListImagePipelineImages that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListImagePipelineImagesOutcomeCallable ListImagePipelineImagesCallable(const Model::ListImagePipelineImagesRequest& request) const;

        /**
         * An Async wrapper for ListImagePipelineImages that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListImagePipelineImagesAsync(const Model::ListImagePipelineImagesRequest& request, const ListImagePipelineImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of image pipelines.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ListImagePipelines">AWS
         * API Reference</a></p>
         */
        virtual Model::ListImagePipelinesOutcome ListImagePipelines(const Model::ListImagePipelinesRequest& request) const;

        /**
         * A Callable wrapper for ListImagePipelines that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListImagePipelinesOutcomeCallable ListImagePipelinesCallable(const Model::ListImagePipelinesRequest& request) const;

        /**
         * An Async wrapper for ListImagePipelines that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListImagePipelinesAsync(const Model::ListImagePipelinesRequest& request, const ListImagePipelinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of image recipes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ListImageRecipes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListImageRecipesOutcome ListImageRecipes(const Model::ListImageRecipesRequest& request) const;

        /**
         * A Callable wrapper for ListImageRecipes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListImageRecipesOutcomeCallable ListImageRecipesCallable(const Model::ListImageRecipesRequest& request) const;

        /**
         * An Async wrapper for ListImageRecipes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListImageRecipesAsync(const Model::ListImageRecipesRequest& request, const ListImageRecipesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns the list of images that you have access to.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ListImages">AWS
         * API Reference</a></p>
         */
        virtual Model::ListImagesOutcome ListImages(const Model::ListImagesRequest& request) const;

        /**
         * A Callable wrapper for ListImages that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListImagesOutcomeCallable ListImagesCallable(const Model::ListImagesRequest& request) const;

        /**
         * An Async wrapper for ListImages that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListImagesAsync(const Model::ListImagesRequest& request, const ListImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of infrastructure configurations.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ListInfrastructureConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInfrastructureConfigurationsOutcome ListInfrastructureConfigurations(const Model::ListInfrastructureConfigurationsRequest& request) const;

        /**
         * A Callable wrapper for ListInfrastructureConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListInfrastructureConfigurationsOutcomeCallable ListInfrastructureConfigurationsCallable(const Model::ListInfrastructureConfigurationsRequest& request) const;

        /**
         * An Async wrapper for ListInfrastructureConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListInfrastructureConfigurationsAsync(const Model::ListInfrastructureConfigurationsRequest& request, const ListInfrastructureConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns the list of tags for the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Applies a policy to a component. We recommend that you call the RAM API <a
         * href="https://docs.aws.amazon.com/ram/latest/APIReference/API_CreateResourceShare.html">CreateResourceShare</a>
         * to share resources. If you call the Image Builder API
         * <code>PutComponentPolicy</code>, you must also call the RAM API <a
         * href="https://docs.aws.amazon.com/ram/latest/APIReference/API_PromoteResourceShareCreatedFromPolicy.html">PromoteResourceShareCreatedFromPolicy</a>
         * in order for the resource to be visible to all principals with whom the resource
         * is shared.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/PutComponentPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutComponentPolicyOutcome PutComponentPolicy(const Model::PutComponentPolicyRequest& request) const;

        /**
         * A Callable wrapper for PutComponentPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutComponentPolicyOutcomeCallable PutComponentPolicyCallable(const Model::PutComponentPolicyRequest& request) const;

        /**
         * An Async wrapper for PutComponentPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutComponentPolicyAsync(const Model::PutComponentPolicyRequest& request, const PutComponentPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Applies a policy to a container image. We recommend that you call the RAM API
         * CreateResourceShare
         * (https://docs.aws.amazon.com//ram/latest/APIReference/API_CreateResourceShare.html)
         * to share resources. If you call the Image Builder API
         * <code>PutContainerImagePolicy</code>, you must also call the RAM API
         * PromoteResourceShareCreatedFromPolicy
         * (https://docs.aws.amazon.com//ram/latest/APIReference/API_PromoteResourceShareCreatedFromPolicy.html)
         * in order for the resource to be visible to all principals with whom the resource
         * is shared.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/PutContainerRecipePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutContainerRecipePolicyOutcome PutContainerRecipePolicy(const Model::PutContainerRecipePolicyRequest& request) const;

        /**
         * A Callable wrapper for PutContainerRecipePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutContainerRecipePolicyOutcomeCallable PutContainerRecipePolicyCallable(const Model::PutContainerRecipePolicyRequest& request) const;

        /**
         * An Async wrapper for PutContainerRecipePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutContainerRecipePolicyAsync(const Model::PutContainerRecipePolicyRequest& request, const PutContainerRecipePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Applies a policy to an image. We recommend that you call the RAM API <a
         * href="https://docs.aws.amazon.com/ram/latest/APIReference/API_CreateResourceShare.html">CreateResourceShare</a>
         * to share resources. If you call the Image Builder API
         * <code>PutImagePolicy</code>, you must also call the RAM API <a
         * href="https://docs.aws.amazon.com/ram/latest/APIReference/API_PromoteResourceShareCreatedFromPolicy.html">PromoteResourceShareCreatedFromPolicy</a>
         * in order for the resource to be visible to all principals with whom the resource
         * is shared.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/PutImagePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutImagePolicyOutcome PutImagePolicy(const Model::PutImagePolicyRequest& request) const;

        /**
         * A Callable wrapper for PutImagePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutImagePolicyOutcomeCallable PutImagePolicyCallable(const Model::PutImagePolicyRequest& request) const;

        /**
         * An Async wrapper for PutImagePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutImagePolicyAsync(const Model::PutImagePolicyRequest& request, const PutImagePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Applies a policy to an image recipe. We recommend that you call the RAM API
         * <a
         * href="https://docs.aws.amazon.com/ram/latest/APIReference/API_CreateResourceShare.html">CreateResourceShare</a>
         * to share resources. If you call the Image Builder API
         * <code>PutImageRecipePolicy</code>, you must also call the RAM API <a
         * href="https://docs.aws.amazon.com/ram/latest/APIReference/API_PromoteResourceShareCreatedFromPolicy.html">PromoteResourceShareCreatedFromPolicy</a>
         * in order for the resource to be visible to all principals with whom the resource
         * is shared.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/PutImageRecipePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutImageRecipePolicyOutcome PutImageRecipePolicy(const Model::PutImageRecipePolicyRequest& request) const;

        /**
         * A Callable wrapper for PutImageRecipePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutImageRecipePolicyOutcomeCallable PutImageRecipePolicyCallable(const Model::PutImageRecipePolicyRequest& request) const;

        /**
         * An Async wrapper for PutImageRecipePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutImageRecipePolicyAsync(const Model::PutImageRecipePolicyRequest& request, const PutImageRecipePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Manually triggers a pipeline to create an image.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/StartImagePipelineExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::StartImagePipelineExecutionOutcome StartImagePipelineExecution(const Model::StartImagePipelineExecutionRequest& request) const;

        /**
         * A Callable wrapper for StartImagePipelineExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartImagePipelineExecutionOutcomeCallable StartImagePipelineExecutionCallable(const Model::StartImagePipelineExecutionRequest& request) const;

        /**
         * An Async wrapper for StartImagePipelineExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartImagePipelineExecutionAsync(const Model::StartImagePipelineExecutionRequest& request, const StartImagePipelineExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Adds a tag to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Removes a tag from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Updates a new distribution configuration. Distribution configurations define
         * and configure the outputs of your pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/UpdateDistributionConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDistributionConfigurationOutcome UpdateDistributionConfiguration(const Model::UpdateDistributionConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateDistributionConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDistributionConfigurationOutcomeCallable UpdateDistributionConfigurationCallable(const Model::UpdateDistributionConfigurationRequest& request) const;

        /**
         * An Async wrapper for UpdateDistributionConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDistributionConfigurationAsync(const Model::UpdateDistributionConfigurationRequest& request, const UpdateDistributionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Updates an image pipeline. Image pipelines enable you to automate the
         * creation and distribution of images.</p>  <p>UpdateImagePipeline does not
         * support selective updates for the pipeline. You must specify all of the required
         * properties in the update request, not just the properties that have changed.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/UpdateImagePipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateImagePipelineOutcome UpdateImagePipeline(const Model::UpdateImagePipelineRequest& request) const;

        /**
         * A Callable wrapper for UpdateImagePipeline that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateImagePipelineOutcomeCallable UpdateImagePipelineCallable(const Model::UpdateImagePipelineRequest& request) const;

        /**
         * An Async wrapper for UpdateImagePipeline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateImagePipelineAsync(const Model::UpdateImagePipelineRequest& request, const UpdateImagePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Updates a new infrastructure configuration. An infrastructure configuration
         * defines the environment in which your image will be built and
         * tested.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/UpdateInfrastructureConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateInfrastructureConfigurationOutcome UpdateInfrastructureConfiguration(const Model::UpdateInfrastructureConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateInfrastructureConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateInfrastructureConfigurationOutcomeCallable UpdateInfrastructureConfigurationCallable(const Model::UpdateInfrastructureConfigurationRequest& request) const;

        /**
         * An Async wrapper for UpdateInfrastructureConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateInfrastructureConfigurationAsync(const Model::UpdateInfrastructureConfigurationRequest& request, const UpdateInfrastructureConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace imagebuilder
} // namespace Aws
