/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/imagebuilder/ImagebuilderErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/imagebuilder/ImagebuilderEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in ImagebuilderClient header */
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
/* End of service model headers required in ImagebuilderClient header */

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
    using ImagebuilderClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using ImagebuilderEndpointProviderBase = Aws::imagebuilder::Endpoint::ImagebuilderEndpointProviderBase;
    using ImagebuilderEndpointProvider = Aws::imagebuilder::Endpoint::ImagebuilderEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in ImagebuilderClient header */
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
      /* End of service model forward declarations required in ImagebuilderClient header */

      /* Service model Outcome class definitions */
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
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
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
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class ImagebuilderClient;

    /* Service model async handlers definitions */
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
    /* End of service model async handlers definitions */
  } // namespace imagebuilder
} // namespace Aws
