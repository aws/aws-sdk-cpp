/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/imagebuilder/ImagebuilderServiceClientModel.h>

namespace Aws
{
namespace imagebuilder
{
  /**
   * <p>EC2 Image Builder is a fully managed Amazon Web Services service that makes
   * it easier to automate the creation, management, and deployment of customized,
   * secure, and up-to-date "golden" server images that are pre-installed and
   * pre-configured with software and settings to meet specific IT standards.</p>
   */
  class AWS_IMAGEBUILDER_API ImagebuilderClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<ImagebuilderClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef ImagebuilderClientConfiguration ClientConfigurationType;
      typedef ImagebuilderEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ImagebuilderClient(const Aws::imagebuilder::ImagebuilderClientConfiguration& clientConfiguration = Aws::imagebuilder::ImagebuilderClientConfiguration(),
                           std::shared_ptr<ImagebuilderEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ImagebuilderClient(const Aws::Auth::AWSCredentials& credentials,
                           std::shared_ptr<ImagebuilderEndpointProviderBase> endpointProvider = nullptr,
                           const Aws::imagebuilder::ImagebuilderClientConfiguration& clientConfiguration = Aws::imagebuilder::ImagebuilderClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ImagebuilderClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<ImagebuilderEndpointProviderBase> endpointProvider = nullptr,
                           const Aws::imagebuilder::ImagebuilderClientConfiguration& clientConfiguration = Aws::imagebuilder::ImagebuilderClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ImagebuilderClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ImagebuilderClient(const Aws::Auth::AWSCredentials& credentials,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ImagebuilderClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
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
        template<typename CancelImageCreationRequestT = Model::CancelImageCreationRequest>
        Model::CancelImageCreationOutcomeCallable CancelImageCreationCallable(const CancelImageCreationRequestT& request) const
        {
            return SubmitCallable(&ImagebuilderClient::CancelImageCreation, request);
        }

        /**
         * An Async wrapper for CancelImageCreation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelImageCreationRequestT = Model::CancelImageCreationRequest>
        void CancelImageCreationAsync(const CancelImageCreationRequestT& request, const CancelImageCreationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImagebuilderClient::CancelImageCreation, request, handler, context);
        }

        /**
         * <p>Cancel a specific image lifecycle policy runtime instance.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/CancelLifecycleExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelLifecycleExecutionOutcome CancelLifecycleExecution(const Model::CancelLifecycleExecutionRequest& request) const;

        /**
         * A Callable wrapper for CancelLifecycleExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelLifecycleExecutionRequestT = Model::CancelLifecycleExecutionRequest>
        Model::CancelLifecycleExecutionOutcomeCallable CancelLifecycleExecutionCallable(const CancelLifecycleExecutionRequestT& request) const
        {
            return SubmitCallable(&ImagebuilderClient::CancelLifecycleExecution, request);
        }

        /**
         * An Async wrapper for CancelLifecycleExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelLifecycleExecutionRequestT = Model::CancelLifecycleExecutionRequest>
        void CancelLifecycleExecutionAsync(const CancelLifecycleExecutionRequestT& request, const CancelLifecycleExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImagebuilderClient::CancelLifecycleExecution, request, handler, context);
        }

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
        template<typename CreateComponentRequestT = Model::CreateComponentRequest>
        Model::CreateComponentOutcomeCallable CreateComponentCallable(const CreateComponentRequestT& request) const
        {
            return SubmitCallable(&ImagebuilderClient::CreateComponent, request);
        }

        /**
         * An Async wrapper for CreateComponent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateComponentRequestT = Model::CreateComponentRequest>
        void CreateComponentAsync(const CreateComponentRequestT& request, const CreateComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImagebuilderClient::CreateComponent, request, handler, context);
        }

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
        template<typename CreateContainerRecipeRequestT = Model::CreateContainerRecipeRequest>
        Model::CreateContainerRecipeOutcomeCallable CreateContainerRecipeCallable(const CreateContainerRecipeRequestT& request) const
        {
            return SubmitCallable(&ImagebuilderClient::CreateContainerRecipe, request);
        }

        /**
         * An Async wrapper for CreateContainerRecipe that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateContainerRecipeRequestT = Model::CreateContainerRecipeRequest>
        void CreateContainerRecipeAsync(const CreateContainerRecipeRequestT& request, const CreateContainerRecipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImagebuilderClient::CreateContainerRecipe, request, handler, context);
        }

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
        template<typename CreateDistributionConfigurationRequestT = Model::CreateDistributionConfigurationRequest>
        Model::CreateDistributionConfigurationOutcomeCallable CreateDistributionConfigurationCallable(const CreateDistributionConfigurationRequestT& request) const
        {
            return SubmitCallable(&ImagebuilderClient::CreateDistributionConfiguration, request);
        }

        /**
         * An Async wrapper for CreateDistributionConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDistributionConfigurationRequestT = Model::CreateDistributionConfigurationRequest>
        void CreateDistributionConfigurationAsync(const CreateDistributionConfigurationRequestT& request, const CreateDistributionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImagebuilderClient::CreateDistributionConfiguration, request, handler, context);
        }

        /**
         * <p>Creates a new image. This request will create a new image along with all of
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
        template<typename CreateImageRequestT = Model::CreateImageRequest>
        Model::CreateImageOutcomeCallable CreateImageCallable(const CreateImageRequestT& request) const
        {
            return SubmitCallable(&ImagebuilderClient::CreateImage, request);
        }

        /**
         * An Async wrapper for CreateImage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateImageRequestT = Model::CreateImageRequest>
        void CreateImageAsync(const CreateImageRequestT& request, const CreateImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImagebuilderClient::CreateImage, request, handler, context);
        }

        /**
         * <p>Creates a new image pipeline. Image pipelines enable you to automate the
         * creation and distribution of images.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/CreateImagePipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateImagePipelineOutcome CreateImagePipeline(const Model::CreateImagePipelineRequest& request) const;

        /**
         * A Callable wrapper for CreateImagePipeline that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateImagePipelineRequestT = Model::CreateImagePipelineRequest>
        Model::CreateImagePipelineOutcomeCallable CreateImagePipelineCallable(const CreateImagePipelineRequestT& request) const
        {
            return SubmitCallable(&ImagebuilderClient::CreateImagePipeline, request);
        }

        /**
         * An Async wrapper for CreateImagePipeline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateImagePipelineRequestT = Model::CreateImagePipelineRequest>
        void CreateImagePipelineAsync(const CreateImagePipelineRequestT& request, const CreateImagePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImagebuilderClient::CreateImagePipeline, request, handler, context);
        }

        /**
         * <p>Creates a new image recipe. Image recipes define how images are configured,
         * tested, and assessed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/CreateImageRecipe">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateImageRecipeOutcome CreateImageRecipe(const Model::CreateImageRecipeRequest& request) const;

        /**
         * A Callable wrapper for CreateImageRecipe that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateImageRecipeRequestT = Model::CreateImageRecipeRequest>
        Model::CreateImageRecipeOutcomeCallable CreateImageRecipeCallable(const CreateImageRecipeRequestT& request) const
        {
            return SubmitCallable(&ImagebuilderClient::CreateImageRecipe, request);
        }

        /**
         * An Async wrapper for CreateImageRecipe that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateImageRecipeRequestT = Model::CreateImageRecipeRequest>
        void CreateImageRecipeAsync(const CreateImageRecipeRequestT& request, const CreateImageRecipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImagebuilderClient::CreateImageRecipe, request, handler, context);
        }

        /**
         * <p>Creates a new infrastructure configuration. An infrastructure configuration
         * defines the environment in which your image will be built and
         * tested.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/CreateInfrastructureConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInfrastructureConfigurationOutcome CreateInfrastructureConfiguration(const Model::CreateInfrastructureConfigurationRequest& request) const;

        /**
         * A Callable wrapper for CreateInfrastructureConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateInfrastructureConfigurationRequestT = Model::CreateInfrastructureConfigurationRequest>
        Model::CreateInfrastructureConfigurationOutcomeCallable CreateInfrastructureConfigurationCallable(const CreateInfrastructureConfigurationRequestT& request) const
        {
            return SubmitCallable(&ImagebuilderClient::CreateInfrastructureConfiguration, request);
        }

        /**
         * An Async wrapper for CreateInfrastructureConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateInfrastructureConfigurationRequestT = Model::CreateInfrastructureConfigurationRequest>
        void CreateInfrastructureConfigurationAsync(const CreateInfrastructureConfigurationRequestT& request, const CreateInfrastructureConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImagebuilderClient::CreateInfrastructureConfiguration, request, handler, context);
        }

        /**
         * <p>Create a lifecycle policy resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/CreateLifecyclePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLifecyclePolicyOutcome CreateLifecyclePolicy(const Model::CreateLifecyclePolicyRequest& request) const;

        /**
         * A Callable wrapper for CreateLifecyclePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateLifecyclePolicyRequestT = Model::CreateLifecyclePolicyRequest>
        Model::CreateLifecyclePolicyOutcomeCallable CreateLifecyclePolicyCallable(const CreateLifecyclePolicyRequestT& request) const
        {
            return SubmitCallable(&ImagebuilderClient::CreateLifecyclePolicy, request);
        }

        /**
         * An Async wrapper for CreateLifecyclePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateLifecyclePolicyRequestT = Model::CreateLifecyclePolicyRequest>
        void CreateLifecyclePolicyAsync(const CreateLifecyclePolicyRequestT& request, const CreateLifecyclePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImagebuilderClient::CreateLifecyclePolicy, request, handler, context);
        }

        /**
         * <p>Create a new workflow or a new version of an existing workflow.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/CreateWorkflow">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorkflowOutcome CreateWorkflow(const Model::CreateWorkflowRequest& request) const;

        /**
         * A Callable wrapper for CreateWorkflow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateWorkflowRequestT = Model::CreateWorkflowRequest>
        Model::CreateWorkflowOutcomeCallable CreateWorkflowCallable(const CreateWorkflowRequestT& request) const
        {
            return SubmitCallable(&ImagebuilderClient::CreateWorkflow, request);
        }

        /**
         * An Async wrapper for CreateWorkflow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateWorkflowRequestT = Model::CreateWorkflowRequest>
        void CreateWorkflowAsync(const CreateWorkflowRequestT& request, const CreateWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImagebuilderClient::CreateWorkflow, request, handler, context);
        }

        /**
         * <p>Deletes a component build version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/DeleteComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteComponentOutcome DeleteComponent(const Model::DeleteComponentRequest& request) const;

        /**
         * A Callable wrapper for DeleteComponent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteComponentRequestT = Model::DeleteComponentRequest>
        Model::DeleteComponentOutcomeCallable DeleteComponentCallable(const DeleteComponentRequestT& request) const
        {
            return SubmitCallable(&ImagebuilderClient::DeleteComponent, request);
        }

        /**
         * An Async wrapper for DeleteComponent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteComponentRequestT = Model::DeleteComponentRequest>
        void DeleteComponentAsync(const DeleteComponentRequestT& request, const DeleteComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImagebuilderClient::DeleteComponent, request, handler, context);
        }

        /**
         * <p>Deletes a container recipe.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/DeleteContainerRecipe">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteContainerRecipeOutcome DeleteContainerRecipe(const Model::DeleteContainerRecipeRequest& request) const;

        /**
         * A Callable wrapper for DeleteContainerRecipe that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteContainerRecipeRequestT = Model::DeleteContainerRecipeRequest>
        Model::DeleteContainerRecipeOutcomeCallable DeleteContainerRecipeCallable(const DeleteContainerRecipeRequestT& request) const
        {
            return SubmitCallable(&ImagebuilderClient::DeleteContainerRecipe, request);
        }

        /**
         * An Async wrapper for DeleteContainerRecipe that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteContainerRecipeRequestT = Model::DeleteContainerRecipeRequest>
        void DeleteContainerRecipeAsync(const DeleteContainerRecipeRequestT& request, const DeleteContainerRecipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImagebuilderClient::DeleteContainerRecipe, request, handler, context);
        }

        /**
         * <p>Deletes a distribution configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/DeleteDistributionConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDistributionConfigurationOutcome DeleteDistributionConfiguration(const Model::DeleteDistributionConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteDistributionConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDistributionConfigurationRequestT = Model::DeleteDistributionConfigurationRequest>
        Model::DeleteDistributionConfigurationOutcomeCallable DeleteDistributionConfigurationCallable(const DeleteDistributionConfigurationRequestT& request) const
        {
            return SubmitCallable(&ImagebuilderClient::DeleteDistributionConfiguration, request);
        }

        /**
         * An Async wrapper for DeleteDistributionConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDistributionConfigurationRequestT = Model::DeleteDistributionConfigurationRequest>
        void DeleteDistributionConfigurationAsync(const DeleteDistributionConfigurationRequestT& request, const DeleteDistributionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImagebuilderClient::DeleteDistributionConfiguration, request, handler, context);
        }

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
        template<typename DeleteImageRequestT = Model::DeleteImageRequest>
        Model::DeleteImageOutcomeCallable DeleteImageCallable(const DeleteImageRequestT& request) const
        {
            return SubmitCallable(&ImagebuilderClient::DeleteImage, request);
        }

        /**
         * An Async wrapper for DeleteImage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteImageRequestT = Model::DeleteImageRequest>
        void DeleteImageAsync(const DeleteImageRequestT& request, const DeleteImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImagebuilderClient::DeleteImage, request, handler, context);
        }

        /**
         * <p>Deletes an image pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/DeleteImagePipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteImagePipelineOutcome DeleteImagePipeline(const Model::DeleteImagePipelineRequest& request) const;

        /**
         * A Callable wrapper for DeleteImagePipeline that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteImagePipelineRequestT = Model::DeleteImagePipelineRequest>
        Model::DeleteImagePipelineOutcomeCallable DeleteImagePipelineCallable(const DeleteImagePipelineRequestT& request) const
        {
            return SubmitCallable(&ImagebuilderClient::DeleteImagePipeline, request);
        }

        /**
         * An Async wrapper for DeleteImagePipeline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteImagePipelineRequestT = Model::DeleteImagePipelineRequest>
        void DeleteImagePipelineAsync(const DeleteImagePipelineRequestT& request, const DeleteImagePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImagebuilderClient::DeleteImagePipeline, request, handler, context);
        }

        /**
         * <p>Deletes an image recipe.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/DeleteImageRecipe">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteImageRecipeOutcome DeleteImageRecipe(const Model::DeleteImageRecipeRequest& request) const;

        /**
         * A Callable wrapper for DeleteImageRecipe that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteImageRecipeRequestT = Model::DeleteImageRecipeRequest>
        Model::DeleteImageRecipeOutcomeCallable DeleteImageRecipeCallable(const DeleteImageRecipeRequestT& request) const
        {
            return SubmitCallable(&ImagebuilderClient::DeleteImageRecipe, request);
        }

        /**
         * An Async wrapper for DeleteImageRecipe that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteImageRecipeRequestT = Model::DeleteImageRecipeRequest>
        void DeleteImageRecipeAsync(const DeleteImageRecipeRequestT& request, const DeleteImageRecipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImagebuilderClient::DeleteImageRecipe, request, handler, context);
        }

        /**
         * <p>Deletes an infrastructure configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/DeleteInfrastructureConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInfrastructureConfigurationOutcome DeleteInfrastructureConfiguration(const Model::DeleteInfrastructureConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteInfrastructureConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteInfrastructureConfigurationRequestT = Model::DeleteInfrastructureConfigurationRequest>
        Model::DeleteInfrastructureConfigurationOutcomeCallable DeleteInfrastructureConfigurationCallable(const DeleteInfrastructureConfigurationRequestT& request) const
        {
            return SubmitCallable(&ImagebuilderClient::DeleteInfrastructureConfiguration, request);
        }

        /**
         * An Async wrapper for DeleteInfrastructureConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteInfrastructureConfigurationRequestT = Model::DeleteInfrastructureConfigurationRequest>
        void DeleteInfrastructureConfigurationAsync(const DeleteInfrastructureConfigurationRequestT& request, const DeleteInfrastructureConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImagebuilderClient::DeleteInfrastructureConfiguration, request, handler, context);
        }

        /**
         * <p>Delete the specified lifecycle policy resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/DeleteLifecyclePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLifecyclePolicyOutcome DeleteLifecyclePolicy(const Model::DeleteLifecyclePolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteLifecyclePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteLifecyclePolicyRequestT = Model::DeleteLifecyclePolicyRequest>
        Model::DeleteLifecyclePolicyOutcomeCallable DeleteLifecyclePolicyCallable(const DeleteLifecyclePolicyRequestT& request) const
        {
            return SubmitCallable(&ImagebuilderClient::DeleteLifecyclePolicy, request);
        }

        /**
         * An Async wrapper for DeleteLifecyclePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteLifecyclePolicyRequestT = Model::DeleteLifecyclePolicyRequest>
        void DeleteLifecyclePolicyAsync(const DeleteLifecyclePolicyRequestT& request, const DeleteLifecyclePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImagebuilderClient::DeleteLifecyclePolicy, request, handler, context);
        }

        /**
         * <p>Deletes a specific workflow resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/DeleteWorkflow">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWorkflowOutcome DeleteWorkflow(const Model::DeleteWorkflowRequest& request) const;

        /**
         * A Callable wrapper for DeleteWorkflow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteWorkflowRequestT = Model::DeleteWorkflowRequest>
        Model::DeleteWorkflowOutcomeCallable DeleteWorkflowCallable(const DeleteWorkflowRequestT& request) const
        {
            return SubmitCallable(&ImagebuilderClient::DeleteWorkflow, request);
        }

        /**
         * An Async wrapper for DeleteWorkflow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteWorkflowRequestT = Model::DeleteWorkflowRequest>
        void DeleteWorkflowAsync(const DeleteWorkflowRequestT& request, const DeleteWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImagebuilderClient::DeleteWorkflow, request, handler, context);
        }

        /**
         * <p>Gets a component object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/GetComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::GetComponentOutcome GetComponent(const Model::GetComponentRequest& request) const;

        /**
         * A Callable wrapper for GetComponent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetComponentRequestT = Model::GetComponentRequest>
        Model::GetComponentOutcomeCallable GetComponentCallable(const GetComponentRequestT& request) const
        {
            return SubmitCallable(&ImagebuilderClient::GetComponent, request);
        }

        /**
         * An Async wrapper for GetComponent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetComponentRequestT = Model::GetComponentRequest>
        void GetComponentAsync(const GetComponentRequestT& request, const GetComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImagebuilderClient::GetComponent, request, handler, context);
        }

        /**
         * <p>Gets a component policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/GetComponentPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetComponentPolicyOutcome GetComponentPolicy(const Model::GetComponentPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetComponentPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetComponentPolicyRequestT = Model::GetComponentPolicyRequest>
        Model::GetComponentPolicyOutcomeCallable GetComponentPolicyCallable(const GetComponentPolicyRequestT& request) const
        {
            return SubmitCallable(&ImagebuilderClient::GetComponentPolicy, request);
        }

        /**
         * An Async wrapper for GetComponentPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetComponentPolicyRequestT = Model::GetComponentPolicyRequest>
        void GetComponentPolicyAsync(const GetComponentPolicyRequestT& request, const GetComponentPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImagebuilderClient::GetComponentPolicy, request, handler, context);
        }

        /**
         * <p>Retrieves a container recipe.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/GetContainerRecipe">AWS
         * API Reference</a></p>
         */
        virtual Model::GetContainerRecipeOutcome GetContainerRecipe(const Model::GetContainerRecipeRequest& request) const;

        /**
         * A Callable wrapper for GetContainerRecipe that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetContainerRecipeRequestT = Model::GetContainerRecipeRequest>
        Model::GetContainerRecipeOutcomeCallable GetContainerRecipeCallable(const GetContainerRecipeRequestT& request) const
        {
            return SubmitCallable(&ImagebuilderClient::GetContainerRecipe, request);
        }

        /**
         * An Async wrapper for GetContainerRecipe that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetContainerRecipeRequestT = Model::GetContainerRecipeRequest>
        void GetContainerRecipeAsync(const GetContainerRecipeRequestT& request, const GetContainerRecipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImagebuilderClient::GetContainerRecipe, request, handler, context);
        }

        /**
         * <p>Retrieves the policy for a container recipe.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/GetContainerRecipePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetContainerRecipePolicyOutcome GetContainerRecipePolicy(const Model::GetContainerRecipePolicyRequest& request) const;

        /**
         * A Callable wrapper for GetContainerRecipePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetContainerRecipePolicyRequestT = Model::GetContainerRecipePolicyRequest>
        Model::GetContainerRecipePolicyOutcomeCallable GetContainerRecipePolicyCallable(const GetContainerRecipePolicyRequestT& request) const
        {
            return SubmitCallable(&ImagebuilderClient::GetContainerRecipePolicy, request);
        }

        /**
         * An Async wrapper for GetContainerRecipePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetContainerRecipePolicyRequestT = Model::GetContainerRecipePolicyRequest>
        void GetContainerRecipePolicyAsync(const GetContainerRecipePolicyRequestT& request, const GetContainerRecipePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImagebuilderClient::GetContainerRecipePolicy, request, handler, context);
        }

        /**
         * <p>Gets a distribution configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/GetDistributionConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDistributionConfigurationOutcome GetDistributionConfiguration(const Model::GetDistributionConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetDistributionConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDistributionConfigurationRequestT = Model::GetDistributionConfigurationRequest>
        Model::GetDistributionConfigurationOutcomeCallable GetDistributionConfigurationCallable(const GetDistributionConfigurationRequestT& request) const
        {
            return SubmitCallable(&ImagebuilderClient::GetDistributionConfiguration, request);
        }

        /**
         * An Async wrapper for GetDistributionConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDistributionConfigurationRequestT = Model::GetDistributionConfigurationRequest>
        void GetDistributionConfigurationAsync(const GetDistributionConfigurationRequestT& request, const GetDistributionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImagebuilderClient::GetDistributionConfiguration, request, handler, context);
        }

        /**
         * <p>Gets an image.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/GetImage">AWS
         * API Reference</a></p>
         */
        virtual Model::GetImageOutcome GetImage(const Model::GetImageRequest& request) const;

        /**
         * A Callable wrapper for GetImage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetImageRequestT = Model::GetImageRequest>
        Model::GetImageOutcomeCallable GetImageCallable(const GetImageRequestT& request) const
        {
            return SubmitCallable(&ImagebuilderClient::GetImage, request);
        }

        /**
         * An Async wrapper for GetImage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetImageRequestT = Model::GetImageRequest>
        void GetImageAsync(const GetImageRequestT& request, const GetImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImagebuilderClient::GetImage, request, handler, context);
        }

        /**
         * <p>Gets an image pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/GetImagePipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::GetImagePipelineOutcome GetImagePipeline(const Model::GetImagePipelineRequest& request) const;

        /**
         * A Callable wrapper for GetImagePipeline that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetImagePipelineRequestT = Model::GetImagePipelineRequest>
        Model::GetImagePipelineOutcomeCallable GetImagePipelineCallable(const GetImagePipelineRequestT& request) const
        {
            return SubmitCallable(&ImagebuilderClient::GetImagePipeline, request);
        }

        /**
         * An Async wrapper for GetImagePipeline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetImagePipelineRequestT = Model::GetImagePipelineRequest>
        void GetImagePipelineAsync(const GetImagePipelineRequestT& request, const GetImagePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImagebuilderClient::GetImagePipeline, request, handler, context);
        }

        /**
         * <p>Gets an image policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/GetImagePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetImagePolicyOutcome GetImagePolicy(const Model::GetImagePolicyRequest& request) const;

        /**
         * A Callable wrapper for GetImagePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetImagePolicyRequestT = Model::GetImagePolicyRequest>
        Model::GetImagePolicyOutcomeCallable GetImagePolicyCallable(const GetImagePolicyRequestT& request) const
        {
            return SubmitCallable(&ImagebuilderClient::GetImagePolicy, request);
        }

        /**
         * An Async wrapper for GetImagePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetImagePolicyRequestT = Model::GetImagePolicyRequest>
        void GetImagePolicyAsync(const GetImagePolicyRequestT& request, const GetImagePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImagebuilderClient::GetImagePolicy, request, handler, context);
        }

        /**
         * <p>Gets an image recipe.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/GetImageRecipe">AWS
         * API Reference</a></p>
         */
        virtual Model::GetImageRecipeOutcome GetImageRecipe(const Model::GetImageRecipeRequest& request) const;

        /**
         * A Callable wrapper for GetImageRecipe that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetImageRecipeRequestT = Model::GetImageRecipeRequest>
        Model::GetImageRecipeOutcomeCallable GetImageRecipeCallable(const GetImageRecipeRequestT& request) const
        {
            return SubmitCallable(&ImagebuilderClient::GetImageRecipe, request);
        }

        /**
         * An Async wrapper for GetImageRecipe that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetImageRecipeRequestT = Model::GetImageRecipeRequest>
        void GetImageRecipeAsync(const GetImageRecipeRequestT& request, const GetImageRecipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImagebuilderClient::GetImageRecipe, request, handler, context);
        }

        /**
         * <p>Gets an image recipe policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/GetImageRecipePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetImageRecipePolicyOutcome GetImageRecipePolicy(const Model::GetImageRecipePolicyRequest& request) const;

        /**
         * A Callable wrapper for GetImageRecipePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetImageRecipePolicyRequestT = Model::GetImageRecipePolicyRequest>
        Model::GetImageRecipePolicyOutcomeCallable GetImageRecipePolicyCallable(const GetImageRecipePolicyRequestT& request) const
        {
            return SubmitCallable(&ImagebuilderClient::GetImageRecipePolicy, request);
        }

        /**
         * An Async wrapper for GetImageRecipePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetImageRecipePolicyRequestT = Model::GetImageRecipePolicyRequest>
        void GetImageRecipePolicyAsync(const GetImageRecipePolicyRequestT& request, const GetImageRecipePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImagebuilderClient::GetImageRecipePolicy, request, handler, context);
        }

        /**
         * <p>Gets an infrastructure configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/GetInfrastructureConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInfrastructureConfigurationOutcome GetInfrastructureConfiguration(const Model::GetInfrastructureConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetInfrastructureConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetInfrastructureConfigurationRequestT = Model::GetInfrastructureConfigurationRequest>
        Model::GetInfrastructureConfigurationOutcomeCallable GetInfrastructureConfigurationCallable(const GetInfrastructureConfigurationRequestT& request) const
        {
            return SubmitCallable(&ImagebuilderClient::GetInfrastructureConfiguration, request);
        }

        /**
         * An Async wrapper for GetInfrastructureConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetInfrastructureConfigurationRequestT = Model::GetInfrastructureConfigurationRequest>
        void GetInfrastructureConfigurationAsync(const GetInfrastructureConfigurationRequestT& request, const GetInfrastructureConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImagebuilderClient::GetInfrastructureConfiguration, request, handler, context);
        }

        /**
         * <p>Get the runtime information that was logged for a specific runtime instance
         * of the lifecycle policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/GetLifecycleExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLifecycleExecutionOutcome GetLifecycleExecution(const Model::GetLifecycleExecutionRequest& request) const;

        /**
         * A Callable wrapper for GetLifecycleExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetLifecycleExecutionRequestT = Model::GetLifecycleExecutionRequest>
        Model::GetLifecycleExecutionOutcomeCallable GetLifecycleExecutionCallable(const GetLifecycleExecutionRequestT& request) const
        {
            return SubmitCallable(&ImagebuilderClient::GetLifecycleExecution, request);
        }

        /**
         * An Async wrapper for GetLifecycleExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetLifecycleExecutionRequestT = Model::GetLifecycleExecutionRequest>
        void GetLifecycleExecutionAsync(const GetLifecycleExecutionRequestT& request, const GetLifecycleExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImagebuilderClient::GetLifecycleExecution, request, handler, context);
        }

        /**
         * <p>Get details for the specified image lifecycle policy.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/GetLifecyclePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLifecyclePolicyOutcome GetLifecyclePolicy(const Model::GetLifecyclePolicyRequest& request) const;

        /**
         * A Callable wrapper for GetLifecyclePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetLifecyclePolicyRequestT = Model::GetLifecyclePolicyRequest>
        Model::GetLifecyclePolicyOutcomeCallable GetLifecyclePolicyCallable(const GetLifecyclePolicyRequestT& request) const
        {
            return SubmitCallable(&ImagebuilderClient::GetLifecyclePolicy, request);
        }

        /**
         * An Async wrapper for GetLifecyclePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetLifecyclePolicyRequestT = Model::GetLifecyclePolicyRequest>
        void GetLifecyclePolicyAsync(const GetLifecyclePolicyRequestT& request, const GetLifecyclePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImagebuilderClient::GetLifecyclePolicy, request, handler, context);
        }

        /**
         * <p>Get a workflow resource object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/GetWorkflow">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWorkflowOutcome GetWorkflow(const Model::GetWorkflowRequest& request) const;

        /**
         * A Callable wrapper for GetWorkflow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetWorkflowRequestT = Model::GetWorkflowRequest>
        Model::GetWorkflowOutcomeCallable GetWorkflowCallable(const GetWorkflowRequestT& request) const
        {
            return SubmitCallable(&ImagebuilderClient::GetWorkflow, request);
        }

        /**
         * An Async wrapper for GetWorkflow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetWorkflowRequestT = Model::GetWorkflowRequest>
        void GetWorkflowAsync(const GetWorkflowRequestT& request, const GetWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImagebuilderClient::GetWorkflow, request, handler, context);
        }

        /**
         * <p>Get the runtime information that was logged for a specific runtime instance
         * of the workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/GetWorkflowExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWorkflowExecutionOutcome GetWorkflowExecution(const Model::GetWorkflowExecutionRequest& request) const;

        /**
         * A Callable wrapper for GetWorkflowExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetWorkflowExecutionRequestT = Model::GetWorkflowExecutionRequest>
        Model::GetWorkflowExecutionOutcomeCallable GetWorkflowExecutionCallable(const GetWorkflowExecutionRequestT& request) const
        {
            return SubmitCallable(&ImagebuilderClient::GetWorkflowExecution, request);
        }

        /**
         * An Async wrapper for GetWorkflowExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetWorkflowExecutionRequestT = Model::GetWorkflowExecutionRequest>
        void GetWorkflowExecutionAsync(const GetWorkflowExecutionRequestT& request, const GetWorkflowExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImagebuilderClient::GetWorkflowExecution, request, handler, context);
        }

        /**
         * <p>Get the runtime information that was logged for a specific runtime instance
         * of the workflow step.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/GetWorkflowStepExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWorkflowStepExecutionOutcome GetWorkflowStepExecution(const Model::GetWorkflowStepExecutionRequest& request) const;

        /**
         * A Callable wrapper for GetWorkflowStepExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetWorkflowStepExecutionRequestT = Model::GetWorkflowStepExecutionRequest>
        Model::GetWorkflowStepExecutionOutcomeCallable GetWorkflowStepExecutionCallable(const GetWorkflowStepExecutionRequestT& request) const
        {
            return SubmitCallable(&ImagebuilderClient::GetWorkflowStepExecution, request);
        }

        /**
         * An Async wrapper for GetWorkflowStepExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetWorkflowStepExecutionRequestT = Model::GetWorkflowStepExecutionRequest>
        void GetWorkflowStepExecutionAsync(const GetWorkflowStepExecutionRequestT& request, const GetWorkflowStepExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImagebuilderClient::GetWorkflowStepExecution, request, handler, context);
        }

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
        template<typename ImportComponentRequestT = Model::ImportComponentRequest>
        Model::ImportComponentOutcomeCallable ImportComponentCallable(const ImportComponentRequestT& request) const
        {
            return SubmitCallable(&ImagebuilderClient::ImportComponent, request);
        }

        /**
         * An Async wrapper for ImportComponent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ImportComponentRequestT = Model::ImportComponentRequest>
        void ImportComponentAsync(const ImportComponentRequestT& request, const ImportComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImagebuilderClient::ImportComponent, request, handler, context);
        }

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
        template<typename ImportVmImageRequestT = Model::ImportVmImageRequest>
        Model::ImportVmImageOutcomeCallable ImportVmImageCallable(const ImportVmImageRequestT& request) const
        {
            return SubmitCallable(&ImagebuilderClient::ImportVmImage, request);
        }

        /**
         * An Async wrapper for ImportVmImage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ImportVmImageRequestT = Model::ImportVmImageRequest>
        void ImportVmImageAsync(const ImportVmImageRequestT& request, const ImportVmImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImagebuilderClient::ImportVmImage, request, handler, context);
        }

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
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ListComponentBuildVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListComponentBuildVersionsOutcome ListComponentBuildVersions(const Model::ListComponentBuildVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListComponentBuildVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListComponentBuildVersionsRequestT = Model::ListComponentBuildVersionsRequest>
        Model::ListComponentBuildVersionsOutcomeCallable ListComponentBuildVersionsCallable(const ListComponentBuildVersionsRequestT& request) const
        {
            return SubmitCallable(&ImagebuilderClient::ListComponentBuildVersions, request);
        }

        /**
         * An Async wrapper for ListComponentBuildVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListComponentBuildVersionsRequestT = Model::ListComponentBuildVersionsRequest>
        void ListComponentBuildVersionsAsync(const ListComponentBuildVersionsRequestT& request, const ListComponentBuildVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImagebuilderClient::ListComponentBuildVersions, request, handler, context);
        }

        /**
         * <p>Returns the list of components that can be filtered by name, or by using the
         * listed <code>filters</code> to streamline results. Newly created components can
         * take up to two minutes to appear in the ListComponents API Results.</p> 
         * <p>The semantic version has four nodes:
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
        template<typename ListComponentsRequestT = Model::ListComponentsRequest>
        Model::ListComponentsOutcomeCallable ListComponentsCallable(const ListComponentsRequestT& request) const
        {
            return SubmitCallable(&ImagebuilderClient::ListComponents, request);
        }

        /**
         * An Async wrapper for ListComponents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListComponentsRequestT = Model::ListComponentsRequest>
        void ListComponentsAsync(const ListComponentsRequestT& request, const ListComponentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImagebuilderClient::ListComponents, request, handler, context);
        }

        /**
         * <p>Returns a list of container recipes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ListContainerRecipes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListContainerRecipesOutcome ListContainerRecipes(const Model::ListContainerRecipesRequest& request) const;

        /**
         * A Callable wrapper for ListContainerRecipes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListContainerRecipesRequestT = Model::ListContainerRecipesRequest>
        Model::ListContainerRecipesOutcomeCallable ListContainerRecipesCallable(const ListContainerRecipesRequestT& request) const
        {
            return SubmitCallable(&ImagebuilderClient::ListContainerRecipes, request);
        }

        /**
         * An Async wrapper for ListContainerRecipes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListContainerRecipesRequestT = Model::ListContainerRecipesRequest>
        void ListContainerRecipesAsync(const ListContainerRecipesRequestT& request, const ListContainerRecipesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImagebuilderClient::ListContainerRecipes, request, handler, context);
        }

        /**
         * <p>Returns a list of distribution configurations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ListDistributionConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDistributionConfigurationsOutcome ListDistributionConfigurations(const Model::ListDistributionConfigurationsRequest& request) const;

        /**
         * A Callable wrapper for ListDistributionConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDistributionConfigurationsRequestT = Model::ListDistributionConfigurationsRequest>
        Model::ListDistributionConfigurationsOutcomeCallable ListDistributionConfigurationsCallable(const ListDistributionConfigurationsRequestT& request) const
        {
            return SubmitCallable(&ImagebuilderClient::ListDistributionConfigurations, request);
        }

        /**
         * An Async wrapper for ListDistributionConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDistributionConfigurationsRequestT = Model::ListDistributionConfigurationsRequest>
        void ListDistributionConfigurationsAsync(const ListDistributionConfigurationsRequestT& request, const ListDistributionConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImagebuilderClient::ListDistributionConfigurations, request, handler, context);
        }

        /**
         * <p>Returns a list of image build versions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ListImageBuildVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListImageBuildVersionsOutcome ListImageBuildVersions(const Model::ListImageBuildVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListImageBuildVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListImageBuildVersionsRequestT = Model::ListImageBuildVersionsRequest>
        Model::ListImageBuildVersionsOutcomeCallable ListImageBuildVersionsCallable(const ListImageBuildVersionsRequestT& request) const
        {
            return SubmitCallable(&ImagebuilderClient::ListImageBuildVersions, request);
        }

        /**
         * An Async wrapper for ListImageBuildVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListImageBuildVersionsRequestT = Model::ListImageBuildVersionsRequest>
        void ListImageBuildVersionsAsync(const ListImageBuildVersionsRequestT& request, const ListImageBuildVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImagebuilderClient::ListImageBuildVersions, request, handler, context);
        }

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
        template<typename ListImagePackagesRequestT = Model::ListImagePackagesRequest>
        Model::ListImagePackagesOutcomeCallable ListImagePackagesCallable(const ListImagePackagesRequestT& request) const
        {
            return SubmitCallable(&ImagebuilderClient::ListImagePackages, request);
        }

        /**
         * An Async wrapper for ListImagePackages that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListImagePackagesRequestT = Model::ListImagePackagesRequest>
        void ListImagePackagesAsync(const ListImagePackagesRequestT& request, const ListImagePackagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImagebuilderClient::ListImagePackages, request, handler, context);
        }

        /**
         * <p>Returns a list of images created by the specified pipeline.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ListImagePipelineImages">AWS
         * API Reference</a></p>
         */
        virtual Model::ListImagePipelineImagesOutcome ListImagePipelineImages(const Model::ListImagePipelineImagesRequest& request) const;

        /**
         * A Callable wrapper for ListImagePipelineImages that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListImagePipelineImagesRequestT = Model::ListImagePipelineImagesRequest>
        Model::ListImagePipelineImagesOutcomeCallable ListImagePipelineImagesCallable(const ListImagePipelineImagesRequestT& request) const
        {
            return SubmitCallable(&ImagebuilderClient::ListImagePipelineImages, request);
        }

        /**
         * An Async wrapper for ListImagePipelineImages that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListImagePipelineImagesRequestT = Model::ListImagePipelineImagesRequest>
        void ListImagePipelineImagesAsync(const ListImagePipelineImagesRequestT& request, const ListImagePipelineImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImagebuilderClient::ListImagePipelineImages, request, handler, context);
        }

        /**
         * <p>Returns a list of image pipelines.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ListImagePipelines">AWS
         * API Reference</a></p>
         */
        virtual Model::ListImagePipelinesOutcome ListImagePipelines(const Model::ListImagePipelinesRequest& request) const;

        /**
         * A Callable wrapper for ListImagePipelines that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListImagePipelinesRequestT = Model::ListImagePipelinesRequest>
        Model::ListImagePipelinesOutcomeCallable ListImagePipelinesCallable(const ListImagePipelinesRequestT& request) const
        {
            return SubmitCallable(&ImagebuilderClient::ListImagePipelines, request);
        }

        /**
         * An Async wrapper for ListImagePipelines that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListImagePipelinesRequestT = Model::ListImagePipelinesRequest>
        void ListImagePipelinesAsync(const ListImagePipelinesRequestT& request, const ListImagePipelinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImagebuilderClient::ListImagePipelines, request, handler, context);
        }

        /**
         * <p>Returns a list of image recipes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ListImageRecipes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListImageRecipesOutcome ListImageRecipes(const Model::ListImageRecipesRequest& request) const;

        /**
         * A Callable wrapper for ListImageRecipes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListImageRecipesRequestT = Model::ListImageRecipesRequest>
        Model::ListImageRecipesOutcomeCallable ListImageRecipesCallable(const ListImageRecipesRequestT& request) const
        {
            return SubmitCallable(&ImagebuilderClient::ListImageRecipes, request);
        }

        /**
         * An Async wrapper for ListImageRecipes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListImageRecipesRequestT = Model::ListImageRecipesRequest>
        void ListImageRecipesAsync(const ListImageRecipesRequestT& request, const ListImageRecipesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImagebuilderClient::ListImageRecipes, request, handler, context);
        }

        /**
         * <p>Returns a list of image scan aggregations for your account. You can filter by
         * the type of key that Image Builder uses to group results. For example, if you
         * want to get a list of findings by severity level for one of your pipelines, you
         * might specify your pipeline with the <code>imagePipelineArn</code> filter. If
         * you don't specify a filter, Image Builder returns an aggregation for your
         * account.</p> <p>To streamline results, you can use the following filters in your
         * request:</p> <ul> <li> <p> <code>accountId</code> </p> </li> <li> <p>
         * <code>imageBuildVersionArn</code> </p> </li> <li> <p>
         * <code>imagePipelineArn</code> </p> </li> <li> <p> <code>vulnerabilityId</code>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ListImageScanFindingAggregations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListImageScanFindingAggregationsOutcome ListImageScanFindingAggregations(const Model::ListImageScanFindingAggregationsRequest& request) const;

        /**
         * A Callable wrapper for ListImageScanFindingAggregations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListImageScanFindingAggregationsRequestT = Model::ListImageScanFindingAggregationsRequest>
        Model::ListImageScanFindingAggregationsOutcomeCallable ListImageScanFindingAggregationsCallable(const ListImageScanFindingAggregationsRequestT& request) const
        {
            return SubmitCallable(&ImagebuilderClient::ListImageScanFindingAggregations, request);
        }

        /**
         * An Async wrapper for ListImageScanFindingAggregations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListImageScanFindingAggregationsRequestT = Model::ListImageScanFindingAggregationsRequest>
        void ListImageScanFindingAggregationsAsync(const ListImageScanFindingAggregationsRequestT& request, const ListImageScanFindingAggregationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImagebuilderClient::ListImageScanFindingAggregations, request, handler, context);
        }

        /**
         * <p>Returns a list of image scan findings for your account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ListImageScanFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::ListImageScanFindingsOutcome ListImageScanFindings(const Model::ListImageScanFindingsRequest& request) const;

        /**
         * A Callable wrapper for ListImageScanFindings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListImageScanFindingsRequestT = Model::ListImageScanFindingsRequest>
        Model::ListImageScanFindingsOutcomeCallable ListImageScanFindingsCallable(const ListImageScanFindingsRequestT& request) const
        {
            return SubmitCallable(&ImagebuilderClient::ListImageScanFindings, request);
        }

        /**
         * An Async wrapper for ListImageScanFindings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListImageScanFindingsRequestT = Model::ListImageScanFindingsRequest>
        void ListImageScanFindingsAsync(const ListImageScanFindingsRequestT& request, const ListImageScanFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImagebuilderClient::ListImageScanFindings, request, handler, context);
        }

        /**
         * <p>Returns the list of images that you have access to. Newly created images can
         * take up to two minutes to appear in the ListImages API Results.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ListImages">AWS
         * API Reference</a></p>
         */
        virtual Model::ListImagesOutcome ListImages(const Model::ListImagesRequest& request) const;

        /**
         * A Callable wrapper for ListImages that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListImagesRequestT = Model::ListImagesRequest>
        Model::ListImagesOutcomeCallable ListImagesCallable(const ListImagesRequestT& request) const
        {
            return SubmitCallable(&ImagebuilderClient::ListImages, request);
        }

        /**
         * An Async wrapper for ListImages that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListImagesRequestT = Model::ListImagesRequest>
        void ListImagesAsync(const ListImagesRequestT& request, const ListImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImagebuilderClient::ListImages, request, handler, context);
        }

        /**
         * <p>Returns a list of infrastructure configurations.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ListInfrastructureConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInfrastructureConfigurationsOutcome ListInfrastructureConfigurations(const Model::ListInfrastructureConfigurationsRequest& request) const;

        /**
         * A Callable wrapper for ListInfrastructureConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListInfrastructureConfigurationsRequestT = Model::ListInfrastructureConfigurationsRequest>
        Model::ListInfrastructureConfigurationsOutcomeCallable ListInfrastructureConfigurationsCallable(const ListInfrastructureConfigurationsRequestT& request) const
        {
            return SubmitCallable(&ImagebuilderClient::ListInfrastructureConfigurations, request);
        }

        /**
         * An Async wrapper for ListInfrastructureConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListInfrastructureConfigurationsRequestT = Model::ListInfrastructureConfigurationsRequest>
        void ListInfrastructureConfigurationsAsync(const ListInfrastructureConfigurationsRequestT& request, const ListInfrastructureConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImagebuilderClient::ListInfrastructureConfigurations, request, handler, context);
        }

        /**
         * <p>List resources that the runtime instance of the image lifecycle identified
         * for lifecycle actions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ListLifecycleExecutionResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLifecycleExecutionResourcesOutcome ListLifecycleExecutionResources(const Model::ListLifecycleExecutionResourcesRequest& request) const;

        /**
         * A Callable wrapper for ListLifecycleExecutionResources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListLifecycleExecutionResourcesRequestT = Model::ListLifecycleExecutionResourcesRequest>
        Model::ListLifecycleExecutionResourcesOutcomeCallable ListLifecycleExecutionResourcesCallable(const ListLifecycleExecutionResourcesRequestT& request) const
        {
            return SubmitCallable(&ImagebuilderClient::ListLifecycleExecutionResources, request);
        }

        /**
         * An Async wrapper for ListLifecycleExecutionResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListLifecycleExecutionResourcesRequestT = Model::ListLifecycleExecutionResourcesRequest>
        void ListLifecycleExecutionResourcesAsync(const ListLifecycleExecutionResourcesRequestT& request, const ListLifecycleExecutionResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImagebuilderClient::ListLifecycleExecutionResources, request, handler, context);
        }

        /**
         * <p>Get the lifecycle runtime history for the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ListLifecycleExecutions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLifecycleExecutionsOutcome ListLifecycleExecutions(const Model::ListLifecycleExecutionsRequest& request) const;

        /**
         * A Callable wrapper for ListLifecycleExecutions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListLifecycleExecutionsRequestT = Model::ListLifecycleExecutionsRequest>
        Model::ListLifecycleExecutionsOutcomeCallable ListLifecycleExecutionsCallable(const ListLifecycleExecutionsRequestT& request) const
        {
            return SubmitCallable(&ImagebuilderClient::ListLifecycleExecutions, request);
        }

        /**
         * An Async wrapper for ListLifecycleExecutions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListLifecycleExecutionsRequestT = Model::ListLifecycleExecutionsRequest>
        void ListLifecycleExecutionsAsync(const ListLifecycleExecutionsRequestT& request, const ListLifecycleExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImagebuilderClient::ListLifecycleExecutions, request, handler, context);
        }

        /**
         * <p>Get a list of lifecycle policies in your Amazon Web Services
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ListLifecyclePolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLifecyclePoliciesOutcome ListLifecyclePolicies(const Model::ListLifecyclePoliciesRequest& request) const;

        /**
         * A Callable wrapper for ListLifecyclePolicies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListLifecyclePoliciesRequestT = Model::ListLifecyclePoliciesRequest>
        Model::ListLifecyclePoliciesOutcomeCallable ListLifecyclePoliciesCallable(const ListLifecyclePoliciesRequestT& request) const
        {
            return SubmitCallable(&ImagebuilderClient::ListLifecyclePolicies, request);
        }

        /**
         * An Async wrapper for ListLifecyclePolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListLifecyclePoliciesRequestT = Model::ListLifecyclePoliciesRequest>
        void ListLifecyclePoliciesAsync(const ListLifecyclePoliciesRequestT& request, const ListLifecyclePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImagebuilderClient::ListLifecyclePolicies, request, handler, context);
        }

        /**
         * <p>Returns the list of tags for the specified resource.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&ImagebuilderClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImagebuilderClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Get a list of workflow steps that are waiting for action for workflows in
         * your Amazon Web Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ListWaitingWorkflowSteps">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWaitingWorkflowStepsOutcome ListWaitingWorkflowSteps(const Model::ListWaitingWorkflowStepsRequest& request) const;

        /**
         * A Callable wrapper for ListWaitingWorkflowSteps that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListWaitingWorkflowStepsRequestT = Model::ListWaitingWorkflowStepsRequest>
        Model::ListWaitingWorkflowStepsOutcomeCallable ListWaitingWorkflowStepsCallable(const ListWaitingWorkflowStepsRequestT& request) const
        {
            return SubmitCallable(&ImagebuilderClient::ListWaitingWorkflowSteps, request);
        }

        /**
         * An Async wrapper for ListWaitingWorkflowSteps that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListWaitingWorkflowStepsRequestT = Model::ListWaitingWorkflowStepsRequest>
        void ListWaitingWorkflowStepsAsync(const ListWaitingWorkflowStepsRequestT& request, const ListWaitingWorkflowStepsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImagebuilderClient::ListWaitingWorkflowSteps, request, handler, context);
        }

        /**
         * <p>Returns a list of build versions for a specific workflow
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ListWorkflowBuildVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorkflowBuildVersionsOutcome ListWorkflowBuildVersions(const Model::ListWorkflowBuildVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListWorkflowBuildVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListWorkflowBuildVersionsRequestT = Model::ListWorkflowBuildVersionsRequest>
        Model::ListWorkflowBuildVersionsOutcomeCallable ListWorkflowBuildVersionsCallable(const ListWorkflowBuildVersionsRequestT& request) const
        {
            return SubmitCallable(&ImagebuilderClient::ListWorkflowBuildVersions, request);
        }

        /**
         * An Async wrapper for ListWorkflowBuildVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListWorkflowBuildVersionsRequestT = Model::ListWorkflowBuildVersionsRequest>
        void ListWorkflowBuildVersionsAsync(const ListWorkflowBuildVersionsRequestT& request, const ListWorkflowBuildVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImagebuilderClient::ListWorkflowBuildVersions, request, handler, context);
        }

        /**
         * <p>Returns a list of workflow runtime instance metadata objects for a specific
         * image build version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ListWorkflowExecutions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorkflowExecutionsOutcome ListWorkflowExecutions(const Model::ListWorkflowExecutionsRequest& request) const;

        /**
         * A Callable wrapper for ListWorkflowExecutions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListWorkflowExecutionsRequestT = Model::ListWorkflowExecutionsRequest>
        Model::ListWorkflowExecutionsOutcomeCallable ListWorkflowExecutionsCallable(const ListWorkflowExecutionsRequestT& request) const
        {
            return SubmitCallable(&ImagebuilderClient::ListWorkflowExecutions, request);
        }

        /**
         * An Async wrapper for ListWorkflowExecutions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListWorkflowExecutionsRequestT = Model::ListWorkflowExecutionsRequest>
        void ListWorkflowExecutionsAsync(const ListWorkflowExecutionsRequestT& request, const ListWorkflowExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImagebuilderClient::ListWorkflowExecutions, request, handler, context);
        }

        /**
         * <p>Returns runtime data for each step in a runtime instance of the workflow that
         * you specify in the request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ListWorkflowStepExecutions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorkflowStepExecutionsOutcome ListWorkflowStepExecutions(const Model::ListWorkflowStepExecutionsRequest& request) const;

        /**
         * A Callable wrapper for ListWorkflowStepExecutions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListWorkflowStepExecutionsRequestT = Model::ListWorkflowStepExecutionsRequest>
        Model::ListWorkflowStepExecutionsOutcomeCallable ListWorkflowStepExecutionsCallable(const ListWorkflowStepExecutionsRequestT& request) const
        {
            return SubmitCallable(&ImagebuilderClient::ListWorkflowStepExecutions, request);
        }

        /**
         * An Async wrapper for ListWorkflowStepExecutions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListWorkflowStepExecutionsRequestT = Model::ListWorkflowStepExecutionsRequest>
        void ListWorkflowStepExecutionsAsync(const ListWorkflowStepExecutionsRequestT& request, const ListWorkflowStepExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImagebuilderClient::ListWorkflowStepExecutions, request, handler, context);
        }

        /**
         * <p>Lists workflow build versions based on filtering parameters.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ListWorkflows">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorkflowsOutcome ListWorkflows(const Model::ListWorkflowsRequest& request) const;

        /**
         * A Callable wrapper for ListWorkflows that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListWorkflowsRequestT = Model::ListWorkflowsRequest>
        Model::ListWorkflowsOutcomeCallable ListWorkflowsCallable(const ListWorkflowsRequestT& request) const
        {
            return SubmitCallable(&ImagebuilderClient::ListWorkflows, request);
        }

        /**
         * An Async wrapper for ListWorkflows that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListWorkflowsRequestT = Model::ListWorkflowsRequest>
        void ListWorkflowsAsync(const ListWorkflowsRequestT& request, const ListWorkflowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImagebuilderClient::ListWorkflows, request, handler, context);
        }

        /**
         * <p>Applies a policy to a component. We recommend that you call the RAM API <a
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
        template<typename PutComponentPolicyRequestT = Model::PutComponentPolicyRequest>
        Model::PutComponentPolicyOutcomeCallable PutComponentPolicyCallable(const PutComponentPolicyRequestT& request) const
        {
            return SubmitCallable(&ImagebuilderClient::PutComponentPolicy, request);
        }

        /**
         * An Async wrapper for PutComponentPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutComponentPolicyRequestT = Model::PutComponentPolicyRequest>
        void PutComponentPolicyAsync(const PutComponentPolicyRequestT& request, const PutComponentPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImagebuilderClient::PutComponentPolicy, request, handler, context);
        }

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
        template<typename PutContainerRecipePolicyRequestT = Model::PutContainerRecipePolicyRequest>
        Model::PutContainerRecipePolicyOutcomeCallable PutContainerRecipePolicyCallable(const PutContainerRecipePolicyRequestT& request) const
        {
            return SubmitCallable(&ImagebuilderClient::PutContainerRecipePolicy, request);
        }

        /**
         * An Async wrapper for PutContainerRecipePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutContainerRecipePolicyRequestT = Model::PutContainerRecipePolicyRequest>
        void PutContainerRecipePolicyAsync(const PutContainerRecipePolicyRequestT& request, const PutContainerRecipePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImagebuilderClient::PutContainerRecipePolicy, request, handler, context);
        }

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
        template<typename PutImagePolicyRequestT = Model::PutImagePolicyRequest>
        Model::PutImagePolicyOutcomeCallable PutImagePolicyCallable(const PutImagePolicyRequestT& request) const
        {
            return SubmitCallable(&ImagebuilderClient::PutImagePolicy, request);
        }

        /**
         * An Async wrapper for PutImagePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutImagePolicyRequestT = Model::PutImagePolicyRequest>
        void PutImagePolicyAsync(const PutImagePolicyRequestT& request, const PutImagePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImagebuilderClient::PutImagePolicy, request, handler, context);
        }

        /**
         * <p>Applies a policy to an image recipe. We recommend that you call the RAM API
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
        template<typename PutImageRecipePolicyRequestT = Model::PutImageRecipePolicyRequest>
        Model::PutImageRecipePolicyOutcomeCallable PutImageRecipePolicyCallable(const PutImageRecipePolicyRequestT& request) const
        {
            return SubmitCallable(&ImagebuilderClient::PutImageRecipePolicy, request);
        }

        /**
         * An Async wrapper for PutImageRecipePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutImageRecipePolicyRequestT = Model::PutImageRecipePolicyRequest>
        void PutImageRecipePolicyAsync(const PutImageRecipePolicyRequestT& request, const PutImageRecipePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImagebuilderClient::PutImageRecipePolicy, request, handler, context);
        }

        /**
         * <p>Pauses or resumes image creation when the associated workflow runs a
         * <code>WaitForAction</code> step.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/SendWorkflowStepAction">AWS
         * API Reference</a></p>
         */
        virtual Model::SendWorkflowStepActionOutcome SendWorkflowStepAction(const Model::SendWorkflowStepActionRequest& request) const;

        /**
         * A Callable wrapper for SendWorkflowStepAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SendWorkflowStepActionRequestT = Model::SendWorkflowStepActionRequest>
        Model::SendWorkflowStepActionOutcomeCallable SendWorkflowStepActionCallable(const SendWorkflowStepActionRequestT& request) const
        {
            return SubmitCallable(&ImagebuilderClient::SendWorkflowStepAction, request);
        }

        /**
         * An Async wrapper for SendWorkflowStepAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SendWorkflowStepActionRequestT = Model::SendWorkflowStepActionRequest>
        void SendWorkflowStepActionAsync(const SendWorkflowStepActionRequestT& request, const SendWorkflowStepActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImagebuilderClient::SendWorkflowStepAction, request, handler, context);
        }

        /**
         * <p>Manually triggers a pipeline to create an image.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/StartImagePipelineExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::StartImagePipelineExecutionOutcome StartImagePipelineExecution(const Model::StartImagePipelineExecutionRequest& request) const;

        /**
         * A Callable wrapper for StartImagePipelineExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartImagePipelineExecutionRequestT = Model::StartImagePipelineExecutionRequest>
        Model::StartImagePipelineExecutionOutcomeCallable StartImagePipelineExecutionCallable(const StartImagePipelineExecutionRequestT& request) const
        {
            return SubmitCallable(&ImagebuilderClient::StartImagePipelineExecution, request);
        }

        /**
         * An Async wrapper for StartImagePipelineExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartImagePipelineExecutionRequestT = Model::StartImagePipelineExecutionRequest>
        void StartImagePipelineExecutionAsync(const StartImagePipelineExecutionRequestT& request, const StartImagePipelineExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImagebuilderClient::StartImagePipelineExecution, request, handler, context);
        }

        /**
         * <p>Begin asynchronous resource state update for lifecycle changes to the
         * specified image resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/StartResourceStateUpdate">AWS
         * API Reference</a></p>
         */
        virtual Model::StartResourceStateUpdateOutcome StartResourceStateUpdate(const Model::StartResourceStateUpdateRequest& request) const;

        /**
         * A Callable wrapper for StartResourceStateUpdate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartResourceStateUpdateRequestT = Model::StartResourceStateUpdateRequest>
        Model::StartResourceStateUpdateOutcomeCallable StartResourceStateUpdateCallable(const StartResourceStateUpdateRequestT& request) const
        {
            return SubmitCallable(&ImagebuilderClient::StartResourceStateUpdate, request);
        }

        /**
         * An Async wrapper for StartResourceStateUpdate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartResourceStateUpdateRequestT = Model::StartResourceStateUpdateRequest>
        void StartResourceStateUpdateAsync(const StartResourceStateUpdateRequestT& request, const StartResourceStateUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImagebuilderClient::StartResourceStateUpdate, request, handler, context);
        }

        /**
         * <p>Adds a tag to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&ImagebuilderClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImagebuilderClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes a tag from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&ImagebuilderClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImagebuilderClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates a new distribution configuration. Distribution configurations define
         * and configure the outputs of your pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/UpdateDistributionConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDistributionConfigurationOutcome UpdateDistributionConfiguration(const Model::UpdateDistributionConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateDistributionConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDistributionConfigurationRequestT = Model::UpdateDistributionConfigurationRequest>
        Model::UpdateDistributionConfigurationOutcomeCallable UpdateDistributionConfigurationCallable(const UpdateDistributionConfigurationRequestT& request) const
        {
            return SubmitCallable(&ImagebuilderClient::UpdateDistributionConfiguration, request);
        }

        /**
         * An Async wrapper for UpdateDistributionConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDistributionConfigurationRequestT = Model::UpdateDistributionConfigurationRequest>
        void UpdateDistributionConfigurationAsync(const UpdateDistributionConfigurationRequestT& request, const UpdateDistributionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImagebuilderClient::UpdateDistributionConfiguration, request, handler, context);
        }

        /**
         * <p>Updates an image pipeline. Image pipelines enable you to automate the
         * creation and distribution of images. You must specify exactly one recipe for
         * your image, using either a <code>containerRecipeArn</code> or an
         * <code>imageRecipeArn</code>.</p>  <p>UpdateImagePipeline does not support
         * selective updates for the pipeline. You must specify all of the required
         * properties in the update request, not just the properties that have changed.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/UpdateImagePipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateImagePipelineOutcome UpdateImagePipeline(const Model::UpdateImagePipelineRequest& request) const;

        /**
         * A Callable wrapper for UpdateImagePipeline that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateImagePipelineRequestT = Model::UpdateImagePipelineRequest>
        Model::UpdateImagePipelineOutcomeCallable UpdateImagePipelineCallable(const UpdateImagePipelineRequestT& request) const
        {
            return SubmitCallable(&ImagebuilderClient::UpdateImagePipeline, request);
        }

        /**
         * An Async wrapper for UpdateImagePipeline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateImagePipelineRequestT = Model::UpdateImagePipelineRequest>
        void UpdateImagePipelineAsync(const UpdateImagePipelineRequestT& request, const UpdateImagePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImagebuilderClient::UpdateImagePipeline, request, handler, context);
        }

        /**
         * <p>Updates a new infrastructure configuration. An infrastructure configuration
         * defines the environment in which your image will be built and
         * tested.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/UpdateInfrastructureConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateInfrastructureConfigurationOutcome UpdateInfrastructureConfiguration(const Model::UpdateInfrastructureConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateInfrastructureConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateInfrastructureConfigurationRequestT = Model::UpdateInfrastructureConfigurationRequest>
        Model::UpdateInfrastructureConfigurationOutcomeCallable UpdateInfrastructureConfigurationCallable(const UpdateInfrastructureConfigurationRequestT& request) const
        {
            return SubmitCallable(&ImagebuilderClient::UpdateInfrastructureConfiguration, request);
        }

        /**
         * An Async wrapper for UpdateInfrastructureConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateInfrastructureConfigurationRequestT = Model::UpdateInfrastructureConfigurationRequest>
        void UpdateInfrastructureConfigurationAsync(const UpdateInfrastructureConfigurationRequestT& request, const UpdateInfrastructureConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImagebuilderClient::UpdateInfrastructureConfiguration, request, handler, context);
        }

        /**
         * <p>Update the specified lifecycle policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/UpdateLifecyclePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLifecyclePolicyOutcome UpdateLifecyclePolicy(const Model::UpdateLifecyclePolicyRequest& request) const;

        /**
         * A Callable wrapper for UpdateLifecyclePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateLifecyclePolicyRequestT = Model::UpdateLifecyclePolicyRequest>
        Model::UpdateLifecyclePolicyOutcomeCallable UpdateLifecyclePolicyCallable(const UpdateLifecyclePolicyRequestT& request) const
        {
            return SubmitCallable(&ImagebuilderClient::UpdateLifecyclePolicy, request);
        }

        /**
         * An Async wrapper for UpdateLifecyclePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateLifecyclePolicyRequestT = Model::UpdateLifecyclePolicyRequest>
        void UpdateLifecyclePolicyAsync(const UpdateLifecyclePolicyRequestT& request, const UpdateLifecyclePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ImagebuilderClient::UpdateLifecyclePolicy, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ImagebuilderEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<ImagebuilderClient>;
      void init(const ImagebuilderClientConfiguration& clientConfiguration);

      ImagebuilderClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ImagebuilderEndpointProviderBase> m_endpointProvider;
  };

} // namespace imagebuilder
} // namespace Aws
