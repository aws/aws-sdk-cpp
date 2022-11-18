/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/imagebuilder/ImagebuilderServiceClientModel.h>
#include <aws/imagebuilder/ImagebuilderLegacyAsyncMacros.h>

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
  class AWS_IMAGEBUILDER_API ImagebuilderClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ImagebuilderClient(const Aws::imagebuilder::ImagebuilderClientConfiguration& clientConfiguration = Aws::imagebuilder::ImagebuilderClientConfiguration(),
                           std::shared_ptr<ImagebuilderEndpointProviderBase> endpointProvider = Aws::MakeShared<ImagebuilderEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ImagebuilderClient(const Aws::Auth::AWSCredentials& credentials,
                           std::shared_ptr<ImagebuilderEndpointProviderBase> endpointProvider = Aws::MakeShared<ImagebuilderEndpointProvider>(ALLOCATION_TAG),
                           const Aws::imagebuilder::ImagebuilderClientConfiguration& clientConfiguration = Aws::imagebuilder::ImagebuilderClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ImagebuilderClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<ImagebuilderEndpointProviderBase> endpointProvider = Aws::MakeShared<ImagebuilderEndpointProvider>(ALLOCATION_TAG),
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


        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         const RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncStreamingOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            const RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableStreamingOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }


        /**
         * <p>CancelImageCreation cancels the creation of Image. This operation can only be
         * used on images in a non-terminal state.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/CancelImageCreation">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelImageCreationOutcome CancelImageCreation(const Model::CancelImageCreationRequest& request) const;


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
         * <p>Creates a new container recipe. Container recipes define how images are
         * configured, tested, and assessed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/CreateContainerRecipe">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateContainerRecipeOutcome CreateContainerRecipe(const Model::CreateContainerRecipeRequest& request) const;


        /**
         * <p>Creates a new distribution configuration. Distribution configurations define
         * and configure the outputs of your pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/CreateDistributionConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDistributionConfigurationOutcome CreateDistributionConfiguration(const Model::CreateDistributionConfigurationRequest& request) const;


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
         * <p> Creates a new image pipeline. Image pipelines enable you to automate the
         * creation and distribution of images.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/CreateImagePipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateImagePipelineOutcome CreateImagePipeline(const Model::CreateImagePipelineRequest& request) const;


        /**
         * <p> Creates a new image recipe. Image recipes define how images are configured,
         * tested, and assessed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/CreateImageRecipe">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateImageRecipeOutcome CreateImageRecipe(const Model::CreateImageRecipeRequest& request) const;


        /**
         * <p> Creates a new infrastructure configuration. An infrastructure configuration
         * defines the environment in which your image will be built and
         * tested.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/CreateInfrastructureConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInfrastructureConfigurationOutcome CreateInfrastructureConfiguration(const Model::CreateInfrastructureConfigurationRequest& request) const;


        /**
         * <p> Deletes a component build version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/DeleteComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteComponentOutcome DeleteComponent(const Model::DeleteComponentRequest& request) const;


        /**
         * <p>Deletes a container recipe.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/DeleteContainerRecipe">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteContainerRecipeOutcome DeleteContainerRecipe(const Model::DeleteContainerRecipeRequest& request) const;


        /**
         * <p> Deletes a distribution configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/DeleteDistributionConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDistributionConfigurationOutcome DeleteDistributionConfiguration(const Model::DeleteDistributionConfigurationRequest& request) const;


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
         * <p> Deletes an image pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/DeleteImagePipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteImagePipelineOutcome DeleteImagePipeline(const Model::DeleteImagePipelineRequest& request) const;


        /**
         * <p> Deletes an image recipe.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/DeleteImageRecipe">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteImageRecipeOutcome DeleteImageRecipe(const Model::DeleteImageRecipeRequest& request) const;


        /**
         * <p> Deletes an infrastructure configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/DeleteInfrastructureConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInfrastructureConfigurationOutcome DeleteInfrastructureConfiguration(const Model::DeleteInfrastructureConfigurationRequest& request) const;


        /**
         * <p> Gets a component object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/GetComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::GetComponentOutcome GetComponent(const Model::GetComponentRequest& request) const;


        /**
         * <p> Gets a component policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/GetComponentPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetComponentPolicyOutcome GetComponentPolicy(const Model::GetComponentPolicyRequest& request) const;


        /**
         * <p>Retrieves a container recipe.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/GetContainerRecipe">AWS
         * API Reference</a></p>
         */
        virtual Model::GetContainerRecipeOutcome GetContainerRecipe(const Model::GetContainerRecipeRequest& request) const;


        /**
         * <p>Retrieves the policy for a container recipe.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/GetContainerRecipePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetContainerRecipePolicyOutcome GetContainerRecipePolicy(const Model::GetContainerRecipePolicyRequest& request) const;


        /**
         * <p> Gets a distribution configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/GetDistributionConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDistributionConfigurationOutcome GetDistributionConfiguration(const Model::GetDistributionConfigurationRequest& request) const;


        /**
         * <p> Gets an image.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/GetImage">AWS
         * API Reference</a></p>
         */
        virtual Model::GetImageOutcome GetImage(const Model::GetImageRequest& request) const;


        /**
         * <p> Gets an image pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/GetImagePipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::GetImagePipelineOutcome GetImagePipeline(const Model::GetImagePipelineRequest& request) const;


        /**
         * <p> Gets an image policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/GetImagePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetImagePolicyOutcome GetImagePolicy(const Model::GetImagePolicyRequest& request) const;


        /**
         * <p> Gets an image recipe.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/GetImageRecipe">AWS
         * API Reference</a></p>
         */
        virtual Model::GetImageRecipeOutcome GetImageRecipe(const Model::GetImageRecipeRequest& request) const;


        /**
         * <p> Gets an image recipe policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/GetImageRecipePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetImageRecipePolicyOutcome GetImageRecipePolicy(const Model::GetImageRecipePolicyRequest& request) const;


        /**
         * <p> Gets an infrastructure configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/GetInfrastructureConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInfrastructureConfigurationOutcome GetInfrastructureConfiguration(const Model::GetInfrastructureConfigurationRequest& request) const;


        /**
         * <p>Imports a component and transforms its data into a component
         * document.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ImportComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportComponentOutcome ImportComponent(const Model::ImportComponentRequest& request) const;


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
         * <p>Returns a list of container recipes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ListContainerRecipes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListContainerRecipesOutcome ListContainerRecipes(const Model::ListContainerRecipesRequest& request) const;


        /**
         * <p>Returns a list of distribution configurations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ListDistributionConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDistributionConfigurationsOutcome ListDistributionConfigurations(const Model::ListDistributionConfigurationsRequest& request) const;


        /**
         * <p> Returns a list of image build versions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ListImageBuildVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListImageBuildVersionsOutcome ListImageBuildVersions(const Model::ListImageBuildVersionsRequest& request) const;


        /**
         * <p>List the Packages that are associated with an Image Build Version, as
         * determined by Amazon Web Services Systems Manager Inventory at build
         * time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ListImagePackages">AWS
         * API Reference</a></p>
         */
        virtual Model::ListImagePackagesOutcome ListImagePackages(const Model::ListImagePackagesRequest& request) const;


        /**
         * <p> Returns a list of images created by the specified pipeline.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ListImagePipelineImages">AWS
         * API Reference</a></p>
         */
        virtual Model::ListImagePipelineImagesOutcome ListImagePipelineImages(const Model::ListImagePipelineImagesRequest& request) const;


        /**
         * <p>Returns a list of image pipelines.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ListImagePipelines">AWS
         * API Reference</a></p>
         */
        virtual Model::ListImagePipelinesOutcome ListImagePipelines(const Model::ListImagePipelinesRequest& request) const;


        /**
         * <p> Returns a list of image recipes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ListImageRecipes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListImageRecipesOutcome ListImageRecipes(const Model::ListImageRecipesRequest& request) const;


        /**
         * <p> Returns the list of images that you have access to.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ListImages">AWS
         * API Reference</a></p>
         */
        virtual Model::ListImagesOutcome ListImages(const Model::ListImagesRequest& request) const;


        /**
         * <p> Returns a list of infrastructure configurations.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ListInfrastructureConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInfrastructureConfigurationsOutcome ListInfrastructureConfigurations(const Model::ListInfrastructureConfigurationsRequest& request) const;


        /**
         * <p> Returns the list of tags for the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


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
         * <p> Manually triggers a pipeline to create an image.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/StartImagePipelineExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::StartImagePipelineExecutionOutcome StartImagePipelineExecution(const Model::StartImagePipelineExecutionRequest& request) const;


        /**
         * <p> Adds a tag to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p> Removes a tag from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p> Updates a new distribution configuration. Distribution configurations define
         * and configure the outputs of your pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/UpdateDistributionConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDistributionConfigurationOutcome UpdateDistributionConfiguration(const Model::UpdateDistributionConfigurationRequest& request) const;


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
         * <p> Updates a new infrastructure configuration. An infrastructure configuration
         * defines the environment in which your image will be built and
         * tested.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/UpdateInfrastructureConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateInfrastructureConfigurationOutcome UpdateInfrastructureConfiguration(const Model::UpdateInfrastructureConfigurationRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ImagebuilderEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const ImagebuilderClientConfiguration& clientConfiguration);

      ImagebuilderClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ImagebuilderEndpointProviderBase> m_endpointProvider;
  };

} // namespace imagebuilder
} // namespace Aws
