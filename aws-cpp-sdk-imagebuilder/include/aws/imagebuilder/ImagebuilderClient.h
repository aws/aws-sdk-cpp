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
#include <aws/imagebuilder/model/CreateDistributionConfigurationResult.h>
#include <aws/imagebuilder/model/CreateImageResult.h>
#include <aws/imagebuilder/model/CreateImagePipelineResult.h>
#include <aws/imagebuilder/model/CreateImageRecipeResult.h>
#include <aws/imagebuilder/model/CreateInfrastructureConfigurationResult.h>
#include <aws/imagebuilder/model/DeleteComponentResult.h>
#include <aws/imagebuilder/model/DeleteDistributionConfigurationResult.h>
#include <aws/imagebuilder/model/DeleteImageResult.h>
#include <aws/imagebuilder/model/DeleteImagePipelineResult.h>
#include <aws/imagebuilder/model/DeleteImageRecipeResult.h>
#include <aws/imagebuilder/model/DeleteInfrastructureConfigurationResult.h>
#include <aws/imagebuilder/model/GetComponentResult.h>
#include <aws/imagebuilder/model/GetComponentPolicyResult.h>
#include <aws/imagebuilder/model/GetDistributionConfigurationResult.h>
#include <aws/imagebuilder/model/GetImageResult.h>
#include <aws/imagebuilder/model/GetImagePipelineResult.h>
#include <aws/imagebuilder/model/GetImagePolicyResult.h>
#include <aws/imagebuilder/model/GetImageRecipeResult.h>
#include <aws/imagebuilder/model/GetImageRecipePolicyResult.h>
#include <aws/imagebuilder/model/GetInfrastructureConfigurationResult.h>
#include <aws/imagebuilder/model/ImportComponentResult.h>
#include <aws/imagebuilder/model/ListComponentBuildVersionsResult.h>
#include <aws/imagebuilder/model/ListComponentsResult.h>
#include <aws/imagebuilder/model/ListDistributionConfigurationsResult.h>
#include <aws/imagebuilder/model/ListImageBuildVersionsResult.h>
#include <aws/imagebuilder/model/ListImagePipelineImagesResult.h>
#include <aws/imagebuilder/model/ListImagePipelinesResult.h>
#include <aws/imagebuilder/model/ListImageRecipesResult.h>
#include <aws/imagebuilder/model/ListImagesResult.h>
#include <aws/imagebuilder/model/ListInfrastructureConfigurationsResult.h>
#include <aws/imagebuilder/model/ListTagsForResourceResult.h>
#include <aws/imagebuilder/model/PutComponentPolicyResult.h>
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
        class CreateDistributionConfigurationRequest;
        class CreateImageRequest;
        class CreateImagePipelineRequest;
        class CreateImageRecipeRequest;
        class CreateInfrastructureConfigurationRequest;
        class DeleteComponentRequest;
        class DeleteDistributionConfigurationRequest;
        class DeleteImageRequest;
        class DeleteImagePipelineRequest;
        class DeleteImageRecipeRequest;
        class DeleteInfrastructureConfigurationRequest;
        class GetComponentRequest;
        class GetComponentPolicyRequest;
        class GetDistributionConfigurationRequest;
        class GetImageRequest;
        class GetImagePipelineRequest;
        class GetImagePolicyRequest;
        class GetImageRecipeRequest;
        class GetImageRecipePolicyRequest;
        class GetInfrastructureConfigurationRequest;
        class ImportComponentRequest;
        class ListComponentBuildVersionsRequest;
        class ListComponentsRequest;
        class ListDistributionConfigurationsRequest;
        class ListImageBuildVersionsRequest;
        class ListImagePipelineImagesRequest;
        class ListImagePipelinesRequest;
        class ListImageRecipesRequest;
        class ListImagesRequest;
        class ListInfrastructureConfigurationsRequest;
        class ListTagsForResourceRequest;
        class PutComponentPolicyRequest;
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
        typedef Aws::Utils::Outcome<CreateDistributionConfigurationResult, ImagebuilderError> CreateDistributionConfigurationOutcome;
        typedef Aws::Utils::Outcome<CreateImageResult, ImagebuilderError> CreateImageOutcome;
        typedef Aws::Utils::Outcome<CreateImagePipelineResult, ImagebuilderError> CreateImagePipelineOutcome;
        typedef Aws::Utils::Outcome<CreateImageRecipeResult, ImagebuilderError> CreateImageRecipeOutcome;
        typedef Aws::Utils::Outcome<CreateInfrastructureConfigurationResult, ImagebuilderError> CreateInfrastructureConfigurationOutcome;
        typedef Aws::Utils::Outcome<DeleteComponentResult, ImagebuilderError> DeleteComponentOutcome;
        typedef Aws::Utils::Outcome<DeleteDistributionConfigurationResult, ImagebuilderError> DeleteDistributionConfigurationOutcome;
        typedef Aws::Utils::Outcome<DeleteImageResult, ImagebuilderError> DeleteImageOutcome;
        typedef Aws::Utils::Outcome<DeleteImagePipelineResult, ImagebuilderError> DeleteImagePipelineOutcome;
        typedef Aws::Utils::Outcome<DeleteImageRecipeResult, ImagebuilderError> DeleteImageRecipeOutcome;
        typedef Aws::Utils::Outcome<DeleteInfrastructureConfigurationResult, ImagebuilderError> DeleteInfrastructureConfigurationOutcome;
        typedef Aws::Utils::Outcome<GetComponentResult, ImagebuilderError> GetComponentOutcome;
        typedef Aws::Utils::Outcome<GetComponentPolicyResult, ImagebuilderError> GetComponentPolicyOutcome;
        typedef Aws::Utils::Outcome<GetDistributionConfigurationResult, ImagebuilderError> GetDistributionConfigurationOutcome;
        typedef Aws::Utils::Outcome<GetImageResult, ImagebuilderError> GetImageOutcome;
        typedef Aws::Utils::Outcome<GetImagePipelineResult, ImagebuilderError> GetImagePipelineOutcome;
        typedef Aws::Utils::Outcome<GetImagePolicyResult, ImagebuilderError> GetImagePolicyOutcome;
        typedef Aws::Utils::Outcome<GetImageRecipeResult, ImagebuilderError> GetImageRecipeOutcome;
        typedef Aws::Utils::Outcome<GetImageRecipePolicyResult, ImagebuilderError> GetImageRecipePolicyOutcome;
        typedef Aws::Utils::Outcome<GetInfrastructureConfigurationResult, ImagebuilderError> GetInfrastructureConfigurationOutcome;
        typedef Aws::Utils::Outcome<ImportComponentResult, ImagebuilderError> ImportComponentOutcome;
        typedef Aws::Utils::Outcome<ListComponentBuildVersionsResult, ImagebuilderError> ListComponentBuildVersionsOutcome;
        typedef Aws::Utils::Outcome<ListComponentsResult, ImagebuilderError> ListComponentsOutcome;
        typedef Aws::Utils::Outcome<ListDistributionConfigurationsResult, ImagebuilderError> ListDistributionConfigurationsOutcome;
        typedef Aws::Utils::Outcome<ListImageBuildVersionsResult, ImagebuilderError> ListImageBuildVersionsOutcome;
        typedef Aws::Utils::Outcome<ListImagePipelineImagesResult, ImagebuilderError> ListImagePipelineImagesOutcome;
        typedef Aws::Utils::Outcome<ListImagePipelinesResult, ImagebuilderError> ListImagePipelinesOutcome;
        typedef Aws::Utils::Outcome<ListImageRecipesResult, ImagebuilderError> ListImageRecipesOutcome;
        typedef Aws::Utils::Outcome<ListImagesResult, ImagebuilderError> ListImagesOutcome;
        typedef Aws::Utils::Outcome<ListInfrastructureConfigurationsResult, ImagebuilderError> ListInfrastructureConfigurationsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, ImagebuilderError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<PutComponentPolicyResult, ImagebuilderError> PutComponentPolicyOutcome;
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
        typedef std::future<CreateDistributionConfigurationOutcome> CreateDistributionConfigurationOutcomeCallable;
        typedef std::future<CreateImageOutcome> CreateImageOutcomeCallable;
        typedef std::future<CreateImagePipelineOutcome> CreateImagePipelineOutcomeCallable;
        typedef std::future<CreateImageRecipeOutcome> CreateImageRecipeOutcomeCallable;
        typedef std::future<CreateInfrastructureConfigurationOutcome> CreateInfrastructureConfigurationOutcomeCallable;
        typedef std::future<DeleteComponentOutcome> DeleteComponentOutcomeCallable;
        typedef std::future<DeleteDistributionConfigurationOutcome> DeleteDistributionConfigurationOutcomeCallable;
        typedef std::future<DeleteImageOutcome> DeleteImageOutcomeCallable;
        typedef std::future<DeleteImagePipelineOutcome> DeleteImagePipelineOutcomeCallable;
        typedef std::future<DeleteImageRecipeOutcome> DeleteImageRecipeOutcomeCallable;
        typedef std::future<DeleteInfrastructureConfigurationOutcome> DeleteInfrastructureConfigurationOutcomeCallable;
        typedef std::future<GetComponentOutcome> GetComponentOutcomeCallable;
        typedef std::future<GetComponentPolicyOutcome> GetComponentPolicyOutcomeCallable;
        typedef std::future<GetDistributionConfigurationOutcome> GetDistributionConfigurationOutcomeCallable;
        typedef std::future<GetImageOutcome> GetImageOutcomeCallable;
        typedef std::future<GetImagePipelineOutcome> GetImagePipelineOutcomeCallable;
        typedef std::future<GetImagePolicyOutcome> GetImagePolicyOutcomeCallable;
        typedef std::future<GetImageRecipeOutcome> GetImageRecipeOutcomeCallable;
        typedef std::future<GetImageRecipePolicyOutcome> GetImageRecipePolicyOutcomeCallable;
        typedef std::future<GetInfrastructureConfigurationOutcome> GetInfrastructureConfigurationOutcomeCallable;
        typedef std::future<ImportComponentOutcome> ImportComponentOutcomeCallable;
        typedef std::future<ListComponentBuildVersionsOutcome> ListComponentBuildVersionsOutcomeCallable;
        typedef std::future<ListComponentsOutcome> ListComponentsOutcomeCallable;
        typedef std::future<ListDistributionConfigurationsOutcome> ListDistributionConfigurationsOutcomeCallable;
        typedef std::future<ListImageBuildVersionsOutcome> ListImageBuildVersionsOutcomeCallable;
        typedef std::future<ListImagePipelineImagesOutcome> ListImagePipelineImagesOutcomeCallable;
        typedef std::future<ListImagePipelinesOutcome> ListImagePipelinesOutcomeCallable;
        typedef std::future<ListImageRecipesOutcome> ListImageRecipesOutcomeCallable;
        typedef std::future<ListImagesOutcome> ListImagesOutcomeCallable;
        typedef std::future<ListInfrastructureConfigurationsOutcome> ListInfrastructureConfigurationsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<PutComponentPolicyOutcome> PutComponentPolicyOutcomeCallable;
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
    typedef std::function<void(const ImagebuilderClient*, const Model::CreateDistributionConfigurationRequest&, const Model::CreateDistributionConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDistributionConfigurationResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::CreateImageRequest&, const Model::CreateImageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateImageResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::CreateImagePipelineRequest&, const Model::CreateImagePipelineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateImagePipelineResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::CreateImageRecipeRequest&, const Model::CreateImageRecipeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateImageRecipeResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::CreateInfrastructureConfigurationRequest&, const Model::CreateInfrastructureConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateInfrastructureConfigurationResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::DeleteComponentRequest&, const Model::DeleteComponentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteComponentResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::DeleteDistributionConfigurationRequest&, const Model::DeleteDistributionConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDistributionConfigurationResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::DeleteImageRequest&, const Model::DeleteImageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteImageResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::DeleteImagePipelineRequest&, const Model::DeleteImagePipelineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteImagePipelineResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::DeleteImageRecipeRequest&, const Model::DeleteImageRecipeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteImageRecipeResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::DeleteInfrastructureConfigurationRequest&, const Model::DeleteInfrastructureConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteInfrastructureConfigurationResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::GetComponentRequest&, const Model::GetComponentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetComponentResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::GetComponentPolicyRequest&, const Model::GetComponentPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetComponentPolicyResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::GetDistributionConfigurationRequest&, const Model::GetDistributionConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDistributionConfigurationResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::GetImageRequest&, const Model::GetImageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetImageResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::GetImagePipelineRequest&, const Model::GetImagePipelineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetImagePipelineResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::GetImagePolicyRequest&, const Model::GetImagePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetImagePolicyResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::GetImageRecipeRequest&, const Model::GetImageRecipeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetImageRecipeResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::GetImageRecipePolicyRequest&, const Model::GetImageRecipePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetImageRecipePolicyResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::GetInfrastructureConfigurationRequest&, const Model::GetInfrastructureConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInfrastructureConfigurationResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::ImportComponentRequest&, const Model::ImportComponentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportComponentResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::ListComponentBuildVersionsRequest&, const Model::ListComponentBuildVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListComponentBuildVersionsResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::ListComponentsRequest&, const Model::ListComponentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListComponentsResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::ListDistributionConfigurationsRequest&, const Model::ListDistributionConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDistributionConfigurationsResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::ListImageBuildVersionsRequest&, const Model::ListImageBuildVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListImageBuildVersionsResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::ListImagePipelineImagesRequest&, const Model::ListImagePipelineImagesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListImagePipelineImagesResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::ListImagePipelinesRequest&, const Model::ListImagePipelinesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListImagePipelinesResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::ListImageRecipesRequest&, const Model::ListImageRecipesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListImageRecipesResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::ListImagesRequest&, const Model::ListImagesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListImagesResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::ListInfrastructureConfigurationsRequest&, const Model::ListInfrastructureConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInfrastructureConfigurationsResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::PutComponentPolicyRequest&, const Model::PutComponentPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutComponentPolicyResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::PutImagePolicyRequest&, const Model::PutImagePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutImagePolicyResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::PutImageRecipePolicyRequest&, const Model::PutImageRecipePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutImageRecipePolicyResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::StartImagePipelineExecutionRequest&, const Model::StartImagePipelineExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartImagePipelineExecutionResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::UpdateDistributionConfigurationRequest&, const Model::UpdateDistributionConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDistributionConfigurationResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::UpdateImagePipelineRequest&, const Model::UpdateImagePipelineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateImagePipelineResponseReceivedHandler;
    typedef std::function<void(const ImagebuilderClient*, const Model::UpdateInfrastructureConfigurationRequest&, const Model::UpdateInfrastructureConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateInfrastructureConfigurationResponseReceivedHandler;

  /**
   * <p>EC2 Image Builder is a fully managed AWS service that makes it easier to
   * automate the creation, management, and deployment of customized, secure, and
   * up-to-date “golden” server images that are pre-installed and pre-configured with
   * software and settings to meet specific IT standards.</p>
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
        ImagebuilderClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

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
         * <p>CancelImageCreation cancels the creation of Image. This operation can only be
         * used on images in a non-terminal state.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/CancelImageCreation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelImageCreationOutcomeCallable CancelImageCreationCallable(const Model::CancelImageCreationRequest& request) const;

        /**
         * <p>CancelImageCreation cancels the creation of Image. This operation can only be
         * used on images in a non-terminal state.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/CancelImageCreation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelImageCreationAsync(const Model::CancelImageCreationRequest& request, const CancelImageCreationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new component that can be used to build, validate, test, and assess
         * your image.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/CreateComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateComponentOutcome CreateComponent(const Model::CreateComponentRequest& request) const;

        /**
         * <p>Creates a new component that can be used to build, validate, test, and assess
         * your image.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/CreateComponent">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateComponentOutcomeCallable CreateComponentCallable(const Model::CreateComponentRequest& request) const;

        /**
         * <p>Creates a new component that can be used to build, validate, test, and assess
         * your image.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/CreateComponent">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateComponentAsync(const Model::CreateComponentRequest& request, const CreateComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new distribution configuration. Distribution configurations define
         * and configure the outputs of your pipeline. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/CreateDistributionConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDistributionConfigurationOutcome CreateDistributionConfiguration(const Model::CreateDistributionConfigurationRequest& request) const;

        /**
         * <p>Creates a new distribution configuration. Distribution configurations define
         * and configure the outputs of your pipeline. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/CreateDistributionConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDistributionConfigurationOutcomeCallable CreateDistributionConfigurationCallable(const Model::CreateDistributionConfigurationRequest& request) const;

        /**
         * <p>Creates a new distribution configuration. Distribution configurations define
         * and configure the outputs of your pipeline. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/CreateDistributionConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDistributionConfigurationAsync(const Model::CreateDistributionConfigurationRequest& request, const CreateDistributionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Creates a new image. This request will create a new image along with all of
         * the configured output resources defined in the distribution configuration.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/CreateImage">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateImageOutcome CreateImage(const Model::CreateImageRequest& request) const;

        /**
         * <p> Creates a new image. This request will create a new image along with all of
         * the configured output resources defined in the distribution configuration.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/CreateImage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateImageOutcomeCallable CreateImageCallable(const Model::CreateImageRequest& request) const;

        /**
         * <p> Creates a new image. This request will create a new image along with all of
         * the configured output resources defined in the distribution configuration.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/CreateImage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateImageAsync(const Model::CreateImageRequest& request, const CreateImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Creates a new image pipeline. Image pipelines enable you to automate the
         * creation and distribution of images. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/CreateImagePipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateImagePipelineOutcome CreateImagePipeline(const Model::CreateImagePipelineRequest& request) const;

        /**
         * <p> Creates a new image pipeline. Image pipelines enable you to automate the
         * creation and distribution of images. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/CreateImagePipeline">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateImagePipelineOutcomeCallable CreateImagePipelineCallable(const Model::CreateImagePipelineRequest& request) const;

        /**
         * <p> Creates a new image pipeline. Image pipelines enable you to automate the
         * creation and distribution of images. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/CreateImagePipeline">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateImagePipelineAsync(const Model::CreateImagePipelineRequest& request, const CreateImagePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Creates a new image recipe. Image recipes define how images are configured,
         * tested, and assessed. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/CreateImageRecipe">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateImageRecipeOutcome CreateImageRecipe(const Model::CreateImageRecipeRequest& request) const;

        /**
         * <p> Creates a new image recipe. Image recipes define how images are configured,
         * tested, and assessed. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/CreateImageRecipe">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateImageRecipeOutcomeCallable CreateImageRecipeCallable(const Model::CreateImageRecipeRequest& request) const;

        /**
         * <p> Creates a new image recipe. Image recipes define how images are configured,
         * tested, and assessed. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/CreateImageRecipe">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateImageRecipeAsync(const Model::CreateImageRecipeRequest& request, const CreateImageRecipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Creates a new infrastructure configuration. An infrastructure configuration
         * defines the environment in which your image will be built and tested.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/CreateInfrastructureConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInfrastructureConfigurationOutcome CreateInfrastructureConfiguration(const Model::CreateInfrastructureConfigurationRequest& request) const;

        /**
         * <p> Creates a new infrastructure configuration. An infrastructure configuration
         * defines the environment in which your image will be built and tested.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/CreateInfrastructureConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateInfrastructureConfigurationOutcomeCallable CreateInfrastructureConfigurationCallable(const Model::CreateInfrastructureConfigurationRequest& request) const;

        /**
         * <p> Creates a new infrastructure configuration. An infrastructure configuration
         * defines the environment in which your image will be built and tested.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/CreateInfrastructureConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateInfrastructureConfigurationAsync(const Model::CreateInfrastructureConfigurationRequest& request, const CreateInfrastructureConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Deletes a component build version. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/DeleteComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteComponentOutcome DeleteComponent(const Model::DeleteComponentRequest& request) const;

        /**
         * <p> Deletes a component build version. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/DeleteComponent">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteComponentOutcomeCallable DeleteComponentCallable(const Model::DeleteComponentRequest& request) const;

        /**
         * <p> Deletes a component build version. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/DeleteComponent">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteComponentAsync(const Model::DeleteComponentRequest& request, const DeleteComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Deletes a distribution configuration. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/DeleteDistributionConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDistributionConfigurationOutcome DeleteDistributionConfiguration(const Model::DeleteDistributionConfigurationRequest& request) const;

        /**
         * <p> Deletes a distribution configuration. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/DeleteDistributionConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDistributionConfigurationOutcomeCallable DeleteDistributionConfigurationCallable(const Model::DeleteDistributionConfigurationRequest& request) const;

        /**
         * <p> Deletes a distribution configuration. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/DeleteDistributionConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDistributionConfigurationAsync(const Model::DeleteDistributionConfigurationRequest& request, const DeleteDistributionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Deletes an image. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/DeleteImage">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteImageOutcome DeleteImage(const Model::DeleteImageRequest& request) const;

        /**
         * <p> Deletes an image. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/DeleteImage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteImageOutcomeCallable DeleteImageCallable(const Model::DeleteImageRequest& request) const;

        /**
         * <p> Deletes an image. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/DeleteImage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteImageAsync(const Model::DeleteImageRequest& request, const DeleteImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Deletes an image pipeline. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/DeleteImagePipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteImagePipelineOutcome DeleteImagePipeline(const Model::DeleteImagePipelineRequest& request) const;

        /**
         * <p> Deletes an image pipeline. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/DeleteImagePipeline">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteImagePipelineOutcomeCallable DeleteImagePipelineCallable(const Model::DeleteImagePipelineRequest& request) const;

        /**
         * <p> Deletes an image pipeline. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/DeleteImagePipeline">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteImagePipelineAsync(const Model::DeleteImagePipelineRequest& request, const DeleteImagePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Deletes an image recipe. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/DeleteImageRecipe">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteImageRecipeOutcome DeleteImageRecipe(const Model::DeleteImageRecipeRequest& request) const;

        /**
         * <p> Deletes an image recipe. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/DeleteImageRecipe">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteImageRecipeOutcomeCallable DeleteImageRecipeCallable(const Model::DeleteImageRecipeRequest& request) const;

        /**
         * <p> Deletes an image recipe. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/DeleteImageRecipe">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteImageRecipeAsync(const Model::DeleteImageRecipeRequest& request, const DeleteImageRecipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Deletes an infrastructure configuration. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/DeleteInfrastructureConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInfrastructureConfigurationOutcome DeleteInfrastructureConfiguration(const Model::DeleteInfrastructureConfigurationRequest& request) const;

        /**
         * <p> Deletes an infrastructure configuration. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/DeleteInfrastructureConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteInfrastructureConfigurationOutcomeCallable DeleteInfrastructureConfigurationCallable(const Model::DeleteInfrastructureConfigurationRequest& request) const;

        /**
         * <p> Deletes an infrastructure configuration. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/DeleteInfrastructureConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteInfrastructureConfigurationAsync(const Model::DeleteInfrastructureConfigurationRequest& request, const DeleteInfrastructureConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Gets a component object. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/GetComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::GetComponentOutcome GetComponent(const Model::GetComponentRequest& request) const;

        /**
         * <p> Gets a component object. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/GetComponent">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetComponentOutcomeCallable GetComponentCallable(const Model::GetComponentRequest& request) const;

        /**
         * <p> Gets a component object. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/GetComponent">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetComponentAsync(const Model::GetComponentRequest& request, const GetComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Gets a component policy. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/GetComponentPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetComponentPolicyOutcome GetComponentPolicy(const Model::GetComponentPolicyRequest& request) const;

        /**
         * <p> Gets a component policy. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/GetComponentPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetComponentPolicyOutcomeCallable GetComponentPolicyCallable(const Model::GetComponentPolicyRequest& request) const;

        /**
         * <p> Gets a component policy. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/GetComponentPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetComponentPolicyAsync(const Model::GetComponentPolicyRequest& request, const GetComponentPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Gets a distribution configuration. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/GetDistributionConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDistributionConfigurationOutcome GetDistributionConfiguration(const Model::GetDistributionConfigurationRequest& request) const;

        /**
         * <p> Gets a distribution configuration. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/GetDistributionConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDistributionConfigurationOutcomeCallable GetDistributionConfigurationCallable(const Model::GetDistributionConfigurationRequest& request) const;

        /**
         * <p> Gets a distribution configuration. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/GetDistributionConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDistributionConfigurationAsync(const Model::GetDistributionConfigurationRequest& request, const GetDistributionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Gets an image. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/GetImage">AWS
         * API Reference</a></p>
         */
        virtual Model::GetImageOutcome GetImage(const Model::GetImageRequest& request) const;

        /**
         * <p> Gets an image. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/GetImage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetImageOutcomeCallable GetImageCallable(const Model::GetImageRequest& request) const;

        /**
         * <p> Gets an image. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/GetImage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetImageAsync(const Model::GetImageRequest& request, const GetImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Gets an image pipeline. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/GetImagePipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::GetImagePipelineOutcome GetImagePipeline(const Model::GetImagePipelineRequest& request) const;

        /**
         * <p> Gets an image pipeline. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/GetImagePipeline">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetImagePipelineOutcomeCallable GetImagePipelineCallable(const Model::GetImagePipelineRequest& request) const;

        /**
         * <p> Gets an image pipeline. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/GetImagePipeline">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetImagePipelineAsync(const Model::GetImagePipelineRequest& request, const GetImagePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Gets an image policy. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/GetImagePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetImagePolicyOutcome GetImagePolicy(const Model::GetImagePolicyRequest& request) const;

        /**
         * <p> Gets an image policy. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/GetImagePolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetImagePolicyOutcomeCallable GetImagePolicyCallable(const Model::GetImagePolicyRequest& request) const;

        /**
         * <p> Gets an image policy. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/GetImagePolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetImagePolicyAsync(const Model::GetImagePolicyRequest& request, const GetImagePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Gets an image recipe. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/GetImageRecipe">AWS
         * API Reference</a></p>
         */
        virtual Model::GetImageRecipeOutcome GetImageRecipe(const Model::GetImageRecipeRequest& request) const;

        /**
         * <p> Gets an image recipe. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/GetImageRecipe">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetImageRecipeOutcomeCallable GetImageRecipeCallable(const Model::GetImageRecipeRequest& request) const;

        /**
         * <p> Gets an image recipe. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/GetImageRecipe">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetImageRecipeAsync(const Model::GetImageRecipeRequest& request, const GetImageRecipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Gets an image recipe policy. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/GetImageRecipePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetImageRecipePolicyOutcome GetImageRecipePolicy(const Model::GetImageRecipePolicyRequest& request) const;

        /**
         * <p> Gets an image recipe policy. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/GetImageRecipePolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetImageRecipePolicyOutcomeCallable GetImageRecipePolicyCallable(const Model::GetImageRecipePolicyRequest& request) const;

        /**
         * <p> Gets an image recipe policy. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/GetImageRecipePolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetImageRecipePolicyAsync(const Model::GetImageRecipePolicyRequest& request, const GetImageRecipePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Gets an infrastructure configuration. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/GetInfrastructureConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInfrastructureConfigurationOutcome GetInfrastructureConfiguration(const Model::GetInfrastructureConfigurationRequest& request) const;

        /**
         * <p> Gets an infrastructure configuration. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/GetInfrastructureConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetInfrastructureConfigurationOutcomeCallable GetInfrastructureConfigurationCallable(const Model::GetInfrastructureConfigurationRequest& request) const;

        /**
         * <p> Gets an infrastructure configuration. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/GetInfrastructureConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetInfrastructureConfigurationAsync(const Model::GetInfrastructureConfigurationRequest& request, const GetInfrastructureConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Imports a component and transforms its data into a component document.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ImportComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportComponentOutcome ImportComponent(const Model::ImportComponentRequest& request) const;

        /**
         * <p>Imports a component and transforms its data into a component document.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ImportComponent">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ImportComponentOutcomeCallable ImportComponentCallable(const Model::ImportComponentRequest& request) const;

        /**
         * <p>Imports a component and transforms its data into a component document.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ImportComponent">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ImportComponentAsync(const Model::ImportComponentRequest& request, const ImportComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns the list of component build versions for the specified semantic
         * version. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ListComponentBuildVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListComponentBuildVersionsOutcome ListComponentBuildVersions(const Model::ListComponentBuildVersionsRequest& request) const;

        /**
         * <p> Returns the list of component build versions for the specified semantic
         * version. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ListComponentBuildVersions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListComponentBuildVersionsOutcomeCallable ListComponentBuildVersionsCallable(const Model::ListComponentBuildVersionsRequest& request) const;

        /**
         * <p> Returns the list of component build versions for the specified semantic
         * version. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ListComponentBuildVersions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListComponentBuildVersionsAsync(const Model::ListComponentBuildVersionsRequest& request, const ListComponentBuildVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the list of component build versions for the specified semantic
         * version. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ListComponents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListComponentsOutcome ListComponents(const Model::ListComponentsRequest& request) const;

        /**
         * <p>Returns the list of component build versions for the specified semantic
         * version. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ListComponents">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListComponentsOutcomeCallable ListComponentsCallable(const Model::ListComponentsRequest& request) const;

        /**
         * <p>Returns the list of component build versions for the specified semantic
         * version. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ListComponents">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListComponentsAsync(const Model::ListComponentsRequest& request, const ListComponentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of distribution configurations. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ListDistributionConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDistributionConfigurationsOutcome ListDistributionConfigurations(const Model::ListDistributionConfigurationsRequest& request) const;

        /**
         * <p> Returns a list of distribution configurations. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ListDistributionConfigurations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDistributionConfigurationsOutcomeCallable ListDistributionConfigurationsCallable(const Model::ListDistributionConfigurationsRequest& request) const;

        /**
         * <p> Returns a list of distribution configurations. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ListDistributionConfigurations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDistributionConfigurationsAsync(const Model::ListDistributionConfigurationsRequest& request, const ListDistributionConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of image build versions. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ListImageBuildVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListImageBuildVersionsOutcome ListImageBuildVersions(const Model::ListImageBuildVersionsRequest& request) const;

        /**
         * <p> Returns a list of image build versions. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ListImageBuildVersions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListImageBuildVersionsOutcomeCallable ListImageBuildVersionsCallable(const Model::ListImageBuildVersionsRequest& request) const;

        /**
         * <p> Returns a list of image build versions. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ListImageBuildVersions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListImageBuildVersionsAsync(const Model::ListImageBuildVersionsRequest& request, const ListImageBuildVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of images created by the specified pipeline. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ListImagePipelineImages">AWS
         * API Reference</a></p>
         */
        virtual Model::ListImagePipelineImagesOutcome ListImagePipelineImages(const Model::ListImagePipelineImagesRequest& request) const;

        /**
         * <p> Returns a list of images created by the specified pipeline. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ListImagePipelineImages">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListImagePipelineImagesOutcomeCallable ListImagePipelineImagesCallable(const Model::ListImagePipelineImagesRequest& request) const;

        /**
         * <p> Returns a list of images created by the specified pipeline. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ListImagePipelineImages">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListImagePipelineImagesAsync(const Model::ListImagePipelineImagesRequest& request, const ListImagePipelineImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of image pipelines. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ListImagePipelines">AWS
         * API Reference</a></p>
         */
        virtual Model::ListImagePipelinesOutcome ListImagePipelines(const Model::ListImagePipelinesRequest& request) const;

        /**
         * <p>Returns a list of image pipelines. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ListImagePipelines">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListImagePipelinesOutcomeCallable ListImagePipelinesCallable(const Model::ListImagePipelinesRequest& request) const;

        /**
         * <p>Returns a list of image pipelines. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ListImagePipelines">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListImagePipelinesAsync(const Model::ListImagePipelinesRequest& request, const ListImagePipelinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of image recipes. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ListImageRecipes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListImageRecipesOutcome ListImageRecipes(const Model::ListImageRecipesRequest& request) const;

        /**
         * <p> Returns a list of image recipes. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ListImageRecipes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListImageRecipesOutcomeCallable ListImageRecipesCallable(const Model::ListImageRecipesRequest& request) const;

        /**
         * <p> Returns a list of image recipes. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ListImageRecipes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListImageRecipesAsync(const Model::ListImageRecipesRequest& request, const ListImageRecipesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns the list of images that you have access to. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ListImages">AWS
         * API Reference</a></p>
         */
        virtual Model::ListImagesOutcome ListImages(const Model::ListImagesRequest& request) const;

        /**
         * <p> Returns the list of images that you have access to. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ListImages">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListImagesOutcomeCallable ListImagesCallable(const Model::ListImagesRequest& request) const;

        /**
         * <p> Returns the list of images that you have access to. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ListImages">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListImagesAsync(const Model::ListImagesRequest& request, const ListImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of infrastructure configurations. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ListInfrastructureConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInfrastructureConfigurationsOutcome ListInfrastructureConfigurations(const Model::ListInfrastructureConfigurationsRequest& request) const;

        /**
         * <p> Returns a list of infrastructure configurations. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ListInfrastructureConfigurations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListInfrastructureConfigurationsOutcomeCallable ListInfrastructureConfigurationsCallable(const Model::ListInfrastructureConfigurationsRequest& request) const;

        /**
         * <p> Returns a list of infrastructure configurations. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ListInfrastructureConfigurations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListInfrastructureConfigurationsAsync(const Model::ListInfrastructureConfigurationsRequest& request, const ListInfrastructureConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns the list of tags for the specified resource. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p> Returns the list of tags for the specified resource. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p> Returns the list of tags for the specified resource. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Applies a policy to a component. We recommend that you call the RAM API <a
         * href="https://docs.aws.amazon.com/ram/latest/APIReference/API_CreateResourceShare.html">CreateResourceShare</a>
         * to share resources. If you call the Image Builder API
         * <code>PutComponentPolicy</code>, you must also call the RAM API <a
         * href="https://docs.aws.amazon.com/ram/latest/APIReference/API_PromoteResourceShareCreatedFromPolicy.html">PromoteResourceShareCreatedFromPolicy</a>
         * in order for the resource to be visible to all principals with whom the resource
         * is shared. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/PutComponentPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutComponentPolicyOutcome PutComponentPolicy(const Model::PutComponentPolicyRequest& request) const;

        /**
         * <p> Applies a policy to a component. We recommend that you call the RAM API <a
         * href="https://docs.aws.amazon.com/ram/latest/APIReference/API_CreateResourceShare.html">CreateResourceShare</a>
         * to share resources. If you call the Image Builder API
         * <code>PutComponentPolicy</code>, you must also call the RAM API <a
         * href="https://docs.aws.amazon.com/ram/latest/APIReference/API_PromoteResourceShareCreatedFromPolicy.html">PromoteResourceShareCreatedFromPolicy</a>
         * in order for the resource to be visible to all principals with whom the resource
         * is shared. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/PutComponentPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutComponentPolicyOutcomeCallable PutComponentPolicyCallable(const Model::PutComponentPolicyRequest& request) const;

        /**
         * <p> Applies a policy to a component. We recommend that you call the RAM API <a
         * href="https://docs.aws.amazon.com/ram/latest/APIReference/API_CreateResourceShare.html">CreateResourceShare</a>
         * to share resources. If you call the Image Builder API
         * <code>PutComponentPolicy</code>, you must also call the RAM API <a
         * href="https://docs.aws.amazon.com/ram/latest/APIReference/API_PromoteResourceShareCreatedFromPolicy.html">PromoteResourceShareCreatedFromPolicy</a>
         * in order for the resource to be visible to all principals with whom the resource
         * is shared. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/PutComponentPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutComponentPolicyAsync(const Model::PutComponentPolicyRequest& request, const PutComponentPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Applies a policy to an image. We recommend that you call the RAM API <a
         * href="https://docs.aws.amazon.com/ram/latest/APIReference/API_CreateResourceShare.html">CreateResourceShare</a>
         * to share resources. If you call the Image Builder API
         * <code>PutImagePolicy</code>, you must also call the RAM API <a
         * href="https://docs.aws.amazon.com/ram/latest/APIReference/API_PromoteResourceShareCreatedFromPolicy.html">PromoteResourceShareCreatedFromPolicy</a>
         * in order for the resource to be visible to all principals with whom the resource
         * is shared. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/PutImagePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutImagePolicyOutcome PutImagePolicy(const Model::PutImagePolicyRequest& request) const;

        /**
         * <p>Applies a policy to an image. We recommend that you call the RAM API <a
         * href="https://docs.aws.amazon.com/ram/latest/APIReference/API_CreateResourceShare.html">CreateResourceShare</a>
         * to share resources. If you call the Image Builder API
         * <code>PutImagePolicy</code>, you must also call the RAM API <a
         * href="https://docs.aws.amazon.com/ram/latest/APIReference/API_PromoteResourceShareCreatedFromPolicy.html">PromoteResourceShareCreatedFromPolicy</a>
         * in order for the resource to be visible to all principals with whom the resource
         * is shared. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/PutImagePolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutImagePolicyOutcomeCallable PutImagePolicyCallable(const Model::PutImagePolicyRequest& request) const;

        /**
         * <p>Applies a policy to an image. We recommend that you call the RAM API <a
         * href="https://docs.aws.amazon.com/ram/latest/APIReference/API_CreateResourceShare.html">CreateResourceShare</a>
         * to share resources. If you call the Image Builder API
         * <code>PutImagePolicy</code>, you must also call the RAM API <a
         * href="https://docs.aws.amazon.com/ram/latest/APIReference/API_PromoteResourceShareCreatedFromPolicy.html">PromoteResourceShareCreatedFromPolicy</a>
         * in order for the resource to be visible to all principals with whom the resource
         * is shared. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/PutImagePolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * is shared. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/PutImageRecipePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutImageRecipePolicyOutcome PutImageRecipePolicy(const Model::PutImageRecipePolicyRequest& request) const;

        /**
         * <p> Applies a policy to an image recipe. We recommend that you call the RAM API
         * <a
         * href="https://docs.aws.amazon.com/ram/latest/APIReference/API_CreateResourceShare.html">CreateResourceShare</a>
         * to share resources. If you call the Image Builder API
         * <code>PutImageRecipePolicy</code>, you must also call the RAM API <a
         * href="https://docs.aws.amazon.com/ram/latest/APIReference/API_PromoteResourceShareCreatedFromPolicy.html">PromoteResourceShareCreatedFromPolicy</a>
         * in order for the resource to be visible to all principals with whom the resource
         * is shared. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/PutImageRecipePolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutImageRecipePolicyOutcomeCallable PutImageRecipePolicyCallable(const Model::PutImageRecipePolicyRequest& request) const;

        /**
         * <p> Applies a policy to an image recipe. We recommend that you call the RAM API
         * <a
         * href="https://docs.aws.amazon.com/ram/latest/APIReference/API_CreateResourceShare.html">CreateResourceShare</a>
         * to share resources. If you call the Image Builder API
         * <code>PutImageRecipePolicy</code>, you must also call the RAM API <a
         * href="https://docs.aws.amazon.com/ram/latest/APIReference/API_PromoteResourceShareCreatedFromPolicy.html">PromoteResourceShareCreatedFromPolicy</a>
         * in order for the resource to be visible to all principals with whom the resource
         * is shared. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/PutImageRecipePolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutImageRecipePolicyAsync(const Model::PutImageRecipePolicyRequest& request, const PutImageRecipePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Manually triggers a pipeline to create an image. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/StartImagePipelineExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::StartImagePipelineExecutionOutcome StartImagePipelineExecution(const Model::StartImagePipelineExecutionRequest& request) const;

        /**
         * <p> Manually triggers a pipeline to create an image. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/StartImagePipelineExecution">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartImagePipelineExecutionOutcomeCallable StartImagePipelineExecutionCallable(const Model::StartImagePipelineExecutionRequest& request) const;

        /**
         * <p> Manually triggers a pipeline to create an image. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/StartImagePipelineExecution">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartImagePipelineExecutionAsync(const Model::StartImagePipelineExecutionRequest& request, const StartImagePipelineExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Adds a tag to a resource. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p> Adds a tag to a resource. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p> Adds a tag to a resource. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Removes a tag from a resource. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p> Removes a tag from a resource. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p> Removes a tag from a resource. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Updates a new distribution configuration. Distribution configurations define
         * and configure the outputs of your pipeline. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/UpdateDistributionConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDistributionConfigurationOutcome UpdateDistributionConfiguration(const Model::UpdateDistributionConfigurationRequest& request) const;

        /**
         * <p> Updates a new distribution configuration. Distribution configurations define
         * and configure the outputs of your pipeline. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/UpdateDistributionConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDistributionConfigurationOutcomeCallable UpdateDistributionConfigurationCallable(const Model::UpdateDistributionConfigurationRequest& request) const;

        /**
         * <p> Updates a new distribution configuration. Distribution configurations define
         * and configure the outputs of your pipeline. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/UpdateDistributionConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDistributionConfigurationAsync(const Model::UpdateDistributionConfigurationRequest& request, const UpdateDistributionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Updates a new image pipeline. Image pipelines enable you to automate the
         * creation and distribution of images. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/UpdateImagePipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateImagePipelineOutcome UpdateImagePipeline(const Model::UpdateImagePipelineRequest& request) const;

        /**
         * <p> Updates a new image pipeline. Image pipelines enable you to automate the
         * creation and distribution of images. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/UpdateImagePipeline">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateImagePipelineOutcomeCallable UpdateImagePipelineCallable(const Model::UpdateImagePipelineRequest& request) const;

        /**
         * <p> Updates a new image pipeline. Image pipelines enable you to automate the
         * creation and distribution of images. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/UpdateImagePipeline">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateImagePipelineAsync(const Model::UpdateImagePipelineRequest& request, const UpdateImagePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Updates a new infrastructure configuration. An infrastructure configuration
         * defines the environment in which your image will be built and tested.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/UpdateInfrastructureConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateInfrastructureConfigurationOutcome UpdateInfrastructureConfiguration(const Model::UpdateInfrastructureConfigurationRequest& request) const;

        /**
         * <p> Updates a new infrastructure configuration. An infrastructure configuration
         * defines the environment in which your image will be built and tested.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/UpdateInfrastructureConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateInfrastructureConfigurationOutcomeCallable UpdateInfrastructureConfigurationCallable(const Model::UpdateInfrastructureConfigurationRequest& request) const;

        /**
         * <p> Updates a new infrastructure configuration. An infrastructure configuration
         * defines the environment in which your image will be built and tested.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/UpdateInfrastructureConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateInfrastructureConfigurationAsync(const Model::UpdateInfrastructureConfigurationRequest& request, const UpdateInfrastructureConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CancelImageCreationAsyncHelper(const Model::CancelImageCreationRequest& request, const CancelImageCreationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateComponentAsyncHelper(const Model::CreateComponentRequest& request, const CreateComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDistributionConfigurationAsyncHelper(const Model::CreateDistributionConfigurationRequest& request, const CreateDistributionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateImageAsyncHelper(const Model::CreateImageRequest& request, const CreateImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateImagePipelineAsyncHelper(const Model::CreateImagePipelineRequest& request, const CreateImagePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateImageRecipeAsyncHelper(const Model::CreateImageRecipeRequest& request, const CreateImageRecipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateInfrastructureConfigurationAsyncHelper(const Model::CreateInfrastructureConfigurationRequest& request, const CreateInfrastructureConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteComponentAsyncHelper(const Model::DeleteComponentRequest& request, const DeleteComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDistributionConfigurationAsyncHelper(const Model::DeleteDistributionConfigurationRequest& request, const DeleteDistributionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteImageAsyncHelper(const Model::DeleteImageRequest& request, const DeleteImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteImagePipelineAsyncHelper(const Model::DeleteImagePipelineRequest& request, const DeleteImagePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteImageRecipeAsyncHelper(const Model::DeleteImageRecipeRequest& request, const DeleteImageRecipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteInfrastructureConfigurationAsyncHelper(const Model::DeleteInfrastructureConfigurationRequest& request, const DeleteInfrastructureConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetComponentAsyncHelper(const Model::GetComponentRequest& request, const GetComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetComponentPolicyAsyncHelper(const Model::GetComponentPolicyRequest& request, const GetComponentPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDistributionConfigurationAsyncHelper(const Model::GetDistributionConfigurationRequest& request, const GetDistributionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetImageAsyncHelper(const Model::GetImageRequest& request, const GetImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetImagePipelineAsyncHelper(const Model::GetImagePipelineRequest& request, const GetImagePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetImagePolicyAsyncHelper(const Model::GetImagePolicyRequest& request, const GetImagePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetImageRecipeAsyncHelper(const Model::GetImageRecipeRequest& request, const GetImageRecipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetImageRecipePolicyAsyncHelper(const Model::GetImageRecipePolicyRequest& request, const GetImageRecipePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetInfrastructureConfigurationAsyncHelper(const Model::GetInfrastructureConfigurationRequest& request, const GetInfrastructureConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ImportComponentAsyncHelper(const Model::ImportComponentRequest& request, const ImportComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListComponentBuildVersionsAsyncHelper(const Model::ListComponentBuildVersionsRequest& request, const ListComponentBuildVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListComponentsAsyncHelper(const Model::ListComponentsRequest& request, const ListComponentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDistributionConfigurationsAsyncHelper(const Model::ListDistributionConfigurationsRequest& request, const ListDistributionConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListImageBuildVersionsAsyncHelper(const Model::ListImageBuildVersionsRequest& request, const ListImageBuildVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListImagePipelineImagesAsyncHelper(const Model::ListImagePipelineImagesRequest& request, const ListImagePipelineImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListImagePipelinesAsyncHelper(const Model::ListImagePipelinesRequest& request, const ListImagePipelinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListImageRecipesAsyncHelper(const Model::ListImageRecipesRequest& request, const ListImageRecipesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListImagesAsyncHelper(const Model::ListImagesRequest& request, const ListImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListInfrastructureConfigurationsAsyncHelper(const Model::ListInfrastructureConfigurationsRequest& request, const ListInfrastructureConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutComponentPolicyAsyncHelper(const Model::PutComponentPolicyRequest& request, const PutComponentPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutImagePolicyAsyncHelper(const Model::PutImagePolicyRequest& request, const PutImagePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutImageRecipePolicyAsyncHelper(const Model::PutImageRecipePolicyRequest& request, const PutImageRecipePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartImagePipelineExecutionAsyncHelper(const Model::StartImagePipelineExecutionRequest& request, const StartImagePipelineExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDistributionConfigurationAsyncHelper(const Model::UpdateDistributionConfigurationRequest& request, const UpdateDistributionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateImagePipelineAsyncHelper(const Model::UpdateImagePipelineRequest& request, const UpdateImagePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateInfrastructureConfigurationAsyncHelper(const Model::UpdateInfrastructureConfigurationRequest& request, const UpdateInfrastructureConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace imagebuilder
} // namespace Aws
