/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecr/ECRServiceClientModel.h>

namespace Aws
{
namespace ECR
{
  /**
   * <fullname>Amazon Elastic Container Registry</fullname> <p>Amazon Elastic
   * Container Registry (Amazon ECR) is a managed container image registry service.
   * Customers can use the familiar Docker CLI, or their preferred client, to push,
   * pull, and manage images. Amazon ECR provides a secure, scalable, and reliable
   * registry for your Docker or Open Container Initiative (OCI) images. Amazon ECR
   * supports private repositories with resource-based permissions using IAM so that
   * specific users or Amazon EC2 instances can access repositories and images.</p>
   * <p>Amazon ECR has service endpoints in each supported Region. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/general/latest/gr/ecr.html">Amazon ECR
   * endpoints</a> in the <i>Amazon Web Services General Reference</i>.</p>
   */
  class AWS_ECR_API ECRClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<ECRClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef ECRClientConfiguration ClientConfigurationType;
      typedef ECREndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ECRClient(const Aws::ECR::ECRClientConfiguration& clientConfiguration = Aws::ECR::ECRClientConfiguration(),
                  std::shared_ptr<ECREndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ECRClient(const Aws::Auth::AWSCredentials& credentials,
                  std::shared_ptr<ECREndpointProviderBase> endpointProvider = nullptr,
                  const Aws::ECR::ECRClientConfiguration& clientConfiguration = Aws::ECR::ECRClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ECRClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  std::shared_ptr<ECREndpointProviderBase> endpointProvider = nullptr,
                  const Aws::ECR::ECRClientConfiguration& clientConfiguration = Aws::ECR::ECRClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ECRClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ECRClient(const Aws::Auth::AWSCredentials& credentials,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ECRClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~ECRClient();

        /**
         * <p>Checks the availability of one or more image layers in a repository.</p>
         * <p>When an image is pushed to a repository, each image layer is checked to
         * verify if it has been uploaded before. If it has been uploaded, then the image
         * layer is skipped.</p>  <p>This operation is used by the Amazon ECR proxy
         * and is not generally used by customers for pulling and pushing images. In most
         * cases, you should use the <code>docker</code> CLI to pull, tag, and push
         * images.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/BatchCheckLayerAvailability">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchCheckLayerAvailabilityOutcome BatchCheckLayerAvailability(const Model::BatchCheckLayerAvailabilityRequest& request) const;

        /**
         * A Callable wrapper for BatchCheckLayerAvailability that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchCheckLayerAvailabilityRequestT = Model::BatchCheckLayerAvailabilityRequest>
        Model::BatchCheckLayerAvailabilityOutcomeCallable BatchCheckLayerAvailabilityCallable(const BatchCheckLayerAvailabilityRequestT& request) const
        {
            return SubmitCallable(&ECRClient::BatchCheckLayerAvailability, request);
        }

        /**
         * An Async wrapper for BatchCheckLayerAvailability that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchCheckLayerAvailabilityRequestT = Model::BatchCheckLayerAvailabilityRequest>
        void BatchCheckLayerAvailabilityAsync(const BatchCheckLayerAvailabilityRequestT& request, const BatchCheckLayerAvailabilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECRClient::BatchCheckLayerAvailability, request, handler, context);
        }

        /**
         * <p>Deletes a list of specified images within a repository. Images are specified
         * with either an <code>imageTag</code> or <code>imageDigest</code>.</p> <p>You can
         * remove a tag from an image by specifying the image's tag in your request. When
         * you remove the last tag from an image, the image is deleted from your
         * repository.</p> <p>You can completely delete an image (and all of its tags) by
         * specifying the image's digest in your request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/BatchDeleteImage">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDeleteImageOutcome BatchDeleteImage(const Model::BatchDeleteImageRequest& request) const;

        /**
         * A Callable wrapper for BatchDeleteImage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchDeleteImageRequestT = Model::BatchDeleteImageRequest>
        Model::BatchDeleteImageOutcomeCallable BatchDeleteImageCallable(const BatchDeleteImageRequestT& request) const
        {
            return SubmitCallable(&ECRClient::BatchDeleteImage, request);
        }

        /**
         * An Async wrapper for BatchDeleteImage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchDeleteImageRequestT = Model::BatchDeleteImageRequest>
        void BatchDeleteImageAsync(const BatchDeleteImageRequestT& request, const BatchDeleteImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECRClient::BatchDeleteImage, request, handler, context);
        }

        /**
         * <p>Gets detailed information for an image. Images are specified with either an
         * <code>imageTag</code> or <code>imageDigest</code>.</p> <p>When an image is
         * pulled, the BatchGetImage API is called once to retrieve the image
         * manifest.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/BatchGetImage">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetImageOutcome BatchGetImage(const Model::BatchGetImageRequest& request) const;

        /**
         * A Callable wrapper for BatchGetImage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchGetImageRequestT = Model::BatchGetImageRequest>
        Model::BatchGetImageOutcomeCallable BatchGetImageCallable(const BatchGetImageRequestT& request) const
        {
            return SubmitCallable(&ECRClient::BatchGetImage, request);
        }

        /**
         * An Async wrapper for BatchGetImage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchGetImageRequestT = Model::BatchGetImageRequest>
        void BatchGetImageAsync(const BatchGetImageRequestT& request, const BatchGetImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECRClient::BatchGetImage, request, handler, context);
        }

        /**
         * <p>Gets the scanning configuration for one or more repositories.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/BatchGetRepositoryScanningConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetRepositoryScanningConfigurationOutcome BatchGetRepositoryScanningConfiguration(const Model::BatchGetRepositoryScanningConfigurationRequest& request) const;

        /**
         * A Callable wrapper for BatchGetRepositoryScanningConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchGetRepositoryScanningConfigurationRequestT = Model::BatchGetRepositoryScanningConfigurationRequest>
        Model::BatchGetRepositoryScanningConfigurationOutcomeCallable BatchGetRepositoryScanningConfigurationCallable(const BatchGetRepositoryScanningConfigurationRequestT& request) const
        {
            return SubmitCallable(&ECRClient::BatchGetRepositoryScanningConfiguration, request);
        }

        /**
         * An Async wrapper for BatchGetRepositoryScanningConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchGetRepositoryScanningConfigurationRequestT = Model::BatchGetRepositoryScanningConfigurationRequest>
        void BatchGetRepositoryScanningConfigurationAsync(const BatchGetRepositoryScanningConfigurationRequestT& request, const BatchGetRepositoryScanningConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECRClient::BatchGetRepositoryScanningConfiguration, request, handler, context);
        }

        /**
         * <p>Informs Amazon ECR that the image layer upload has completed for a specified
         * registry, repository name, and upload ID. You can optionally provide a
         * <code>sha256</code> digest of the image layer for data validation purposes.</p>
         * <p>When an image is pushed, the CompleteLayerUpload API is called once per each
         * new image layer to verify that the upload has completed.</p>  <p>This
         * operation is used by the Amazon ECR proxy and is not generally used by customers
         * for pulling and pushing images. In most cases, you should use the
         * <code>docker</code> CLI to pull, tag, and push images.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/CompleteLayerUpload">AWS
         * API Reference</a></p>
         */
        virtual Model::CompleteLayerUploadOutcome CompleteLayerUpload(const Model::CompleteLayerUploadRequest& request) const;

        /**
         * A Callable wrapper for CompleteLayerUpload that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CompleteLayerUploadRequestT = Model::CompleteLayerUploadRequest>
        Model::CompleteLayerUploadOutcomeCallable CompleteLayerUploadCallable(const CompleteLayerUploadRequestT& request) const
        {
            return SubmitCallable(&ECRClient::CompleteLayerUpload, request);
        }

        /**
         * An Async wrapper for CompleteLayerUpload that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CompleteLayerUploadRequestT = Model::CompleteLayerUploadRequest>
        void CompleteLayerUploadAsync(const CompleteLayerUploadRequestT& request, const CompleteLayerUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECRClient::CompleteLayerUpload, request, handler, context);
        }

        /**
         * <p>Creates a pull through cache rule. A pull through cache rule provides a way
         * to cache images from an upstream registry source in your Amazon ECR private
         * registry. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonECR/latest/userguide/pull-through-cache.html">Using
         * pull through cache rules</a> in the <i>Amazon Elastic Container Registry User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/CreatePullThroughCacheRule">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePullThroughCacheRuleOutcome CreatePullThroughCacheRule(const Model::CreatePullThroughCacheRuleRequest& request) const;

        /**
         * A Callable wrapper for CreatePullThroughCacheRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreatePullThroughCacheRuleRequestT = Model::CreatePullThroughCacheRuleRequest>
        Model::CreatePullThroughCacheRuleOutcomeCallable CreatePullThroughCacheRuleCallable(const CreatePullThroughCacheRuleRequestT& request) const
        {
            return SubmitCallable(&ECRClient::CreatePullThroughCacheRule, request);
        }

        /**
         * An Async wrapper for CreatePullThroughCacheRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreatePullThroughCacheRuleRequestT = Model::CreatePullThroughCacheRuleRequest>
        void CreatePullThroughCacheRuleAsync(const CreatePullThroughCacheRuleRequestT& request, const CreatePullThroughCacheRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECRClient::CreatePullThroughCacheRule, request, handler, context);
        }

        /**
         * <p>Creates a repository. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonECR/latest/userguide/Repositories.html">Amazon
         * ECR repositories</a> in the <i>Amazon Elastic Container Registry User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/CreateRepository">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRepositoryOutcome CreateRepository(const Model::CreateRepositoryRequest& request) const;

        /**
         * A Callable wrapper for CreateRepository that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateRepositoryRequestT = Model::CreateRepositoryRequest>
        Model::CreateRepositoryOutcomeCallable CreateRepositoryCallable(const CreateRepositoryRequestT& request) const
        {
            return SubmitCallable(&ECRClient::CreateRepository, request);
        }

        /**
         * An Async wrapper for CreateRepository that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateRepositoryRequestT = Model::CreateRepositoryRequest>
        void CreateRepositoryAsync(const CreateRepositoryRequestT& request, const CreateRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECRClient::CreateRepository, request, handler, context);
        }

        /**
         * <p>Creates a repository creation template. This template is used to define the
         * settings for repositories created by Amazon ECR on your behalf. For example,
         * repositories created through pull through cache actions. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/AmazonECR/latest/userguide/repository-creation-templates.html">Private
         * repository creation templates</a> in the <i>Amazon Elastic Container Registry
         * User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/CreateRepositoryCreationTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRepositoryCreationTemplateOutcome CreateRepositoryCreationTemplate(const Model::CreateRepositoryCreationTemplateRequest& request) const;

        /**
         * A Callable wrapper for CreateRepositoryCreationTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateRepositoryCreationTemplateRequestT = Model::CreateRepositoryCreationTemplateRequest>
        Model::CreateRepositoryCreationTemplateOutcomeCallable CreateRepositoryCreationTemplateCallable(const CreateRepositoryCreationTemplateRequestT& request) const
        {
            return SubmitCallable(&ECRClient::CreateRepositoryCreationTemplate, request);
        }

        /**
         * An Async wrapper for CreateRepositoryCreationTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateRepositoryCreationTemplateRequestT = Model::CreateRepositoryCreationTemplateRequest>
        void CreateRepositoryCreationTemplateAsync(const CreateRepositoryCreationTemplateRequestT& request, const CreateRepositoryCreationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECRClient::CreateRepositoryCreationTemplate, request, handler, context);
        }

        /**
         * <p>Deletes the lifecycle policy associated with the specified
         * repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/DeleteLifecyclePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLifecyclePolicyOutcome DeleteLifecyclePolicy(const Model::DeleteLifecyclePolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteLifecyclePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteLifecyclePolicyRequestT = Model::DeleteLifecyclePolicyRequest>
        Model::DeleteLifecyclePolicyOutcomeCallable DeleteLifecyclePolicyCallable(const DeleteLifecyclePolicyRequestT& request) const
        {
            return SubmitCallable(&ECRClient::DeleteLifecyclePolicy, request);
        }

        /**
         * An Async wrapper for DeleteLifecyclePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteLifecyclePolicyRequestT = Model::DeleteLifecyclePolicyRequest>
        void DeleteLifecyclePolicyAsync(const DeleteLifecyclePolicyRequestT& request, const DeleteLifecyclePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECRClient::DeleteLifecyclePolicy, request, handler, context);
        }

        /**
         * <p>Deletes a pull through cache rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/DeletePullThroughCacheRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePullThroughCacheRuleOutcome DeletePullThroughCacheRule(const Model::DeletePullThroughCacheRuleRequest& request) const;

        /**
         * A Callable wrapper for DeletePullThroughCacheRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeletePullThroughCacheRuleRequestT = Model::DeletePullThroughCacheRuleRequest>
        Model::DeletePullThroughCacheRuleOutcomeCallable DeletePullThroughCacheRuleCallable(const DeletePullThroughCacheRuleRequestT& request) const
        {
            return SubmitCallable(&ECRClient::DeletePullThroughCacheRule, request);
        }

        /**
         * An Async wrapper for DeletePullThroughCacheRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeletePullThroughCacheRuleRequestT = Model::DeletePullThroughCacheRuleRequest>
        void DeletePullThroughCacheRuleAsync(const DeletePullThroughCacheRuleRequestT& request, const DeletePullThroughCacheRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECRClient::DeletePullThroughCacheRule, request, handler, context);
        }

        /**
         * <p>Deletes the registry permissions policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/DeleteRegistryPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRegistryPolicyOutcome DeleteRegistryPolicy(const Model::DeleteRegistryPolicyRequest& request = {}) const;

        /**
         * A Callable wrapper for DeleteRegistryPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRegistryPolicyRequestT = Model::DeleteRegistryPolicyRequest>
        Model::DeleteRegistryPolicyOutcomeCallable DeleteRegistryPolicyCallable(const DeleteRegistryPolicyRequestT& request = {}) const
        {
            return SubmitCallable(&ECRClient::DeleteRegistryPolicy, request);
        }

        /**
         * An Async wrapper for DeleteRegistryPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRegistryPolicyRequestT = Model::DeleteRegistryPolicyRequest>
        void DeleteRegistryPolicyAsync(const DeleteRegistryPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const DeleteRegistryPolicyRequestT& request = {}) const
        {
            return SubmitAsync(&ECRClient::DeleteRegistryPolicy, request, handler, context);
        }

        /**
         * <p>Deletes a repository. If the repository isn't empty, you must either delete
         * the contents of the repository or use the <code>force</code> option to delete
         * the repository and have Amazon ECR delete all of its contents on your
         * behalf.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/DeleteRepository">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRepositoryOutcome DeleteRepository(const Model::DeleteRepositoryRequest& request) const;

        /**
         * A Callable wrapper for DeleteRepository that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRepositoryRequestT = Model::DeleteRepositoryRequest>
        Model::DeleteRepositoryOutcomeCallable DeleteRepositoryCallable(const DeleteRepositoryRequestT& request) const
        {
            return SubmitCallable(&ECRClient::DeleteRepository, request);
        }

        /**
         * An Async wrapper for DeleteRepository that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRepositoryRequestT = Model::DeleteRepositoryRequest>
        void DeleteRepositoryAsync(const DeleteRepositoryRequestT& request, const DeleteRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECRClient::DeleteRepository, request, handler, context);
        }

        /**
         * <p>Deletes a repository creation template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/DeleteRepositoryCreationTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRepositoryCreationTemplateOutcome DeleteRepositoryCreationTemplate(const Model::DeleteRepositoryCreationTemplateRequest& request) const;

        /**
         * A Callable wrapper for DeleteRepositoryCreationTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRepositoryCreationTemplateRequestT = Model::DeleteRepositoryCreationTemplateRequest>
        Model::DeleteRepositoryCreationTemplateOutcomeCallable DeleteRepositoryCreationTemplateCallable(const DeleteRepositoryCreationTemplateRequestT& request) const
        {
            return SubmitCallable(&ECRClient::DeleteRepositoryCreationTemplate, request);
        }

        /**
         * An Async wrapper for DeleteRepositoryCreationTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRepositoryCreationTemplateRequestT = Model::DeleteRepositoryCreationTemplateRequest>
        void DeleteRepositoryCreationTemplateAsync(const DeleteRepositoryCreationTemplateRequestT& request, const DeleteRepositoryCreationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECRClient::DeleteRepositoryCreationTemplate, request, handler, context);
        }

        /**
         * <p>Deletes the repository policy associated with the specified
         * repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/DeleteRepositoryPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRepositoryPolicyOutcome DeleteRepositoryPolicy(const Model::DeleteRepositoryPolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteRepositoryPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRepositoryPolicyRequestT = Model::DeleteRepositoryPolicyRequest>
        Model::DeleteRepositoryPolicyOutcomeCallable DeleteRepositoryPolicyCallable(const DeleteRepositoryPolicyRequestT& request) const
        {
            return SubmitCallable(&ECRClient::DeleteRepositoryPolicy, request);
        }

        /**
         * An Async wrapper for DeleteRepositoryPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRepositoryPolicyRequestT = Model::DeleteRepositoryPolicyRequest>
        void DeleteRepositoryPolicyAsync(const DeleteRepositoryPolicyRequestT& request, const DeleteRepositoryPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECRClient::DeleteRepositoryPolicy, request, handler, context);
        }

        /**
         * <p>Returns the replication status for a specified image.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/DescribeImageReplicationStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeImageReplicationStatusOutcome DescribeImageReplicationStatus(const Model::DescribeImageReplicationStatusRequest& request) const;

        /**
         * A Callable wrapper for DescribeImageReplicationStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeImageReplicationStatusRequestT = Model::DescribeImageReplicationStatusRequest>
        Model::DescribeImageReplicationStatusOutcomeCallable DescribeImageReplicationStatusCallable(const DescribeImageReplicationStatusRequestT& request) const
        {
            return SubmitCallable(&ECRClient::DescribeImageReplicationStatus, request);
        }

        /**
         * An Async wrapper for DescribeImageReplicationStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeImageReplicationStatusRequestT = Model::DescribeImageReplicationStatusRequest>
        void DescribeImageReplicationStatusAsync(const DescribeImageReplicationStatusRequestT& request, const DescribeImageReplicationStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECRClient::DescribeImageReplicationStatus, request, handler, context);
        }

        /**
         * <p>Returns the scan findings for the specified image.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/DescribeImageScanFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeImageScanFindingsOutcome DescribeImageScanFindings(const Model::DescribeImageScanFindingsRequest& request) const;

        /**
         * A Callable wrapper for DescribeImageScanFindings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeImageScanFindingsRequestT = Model::DescribeImageScanFindingsRequest>
        Model::DescribeImageScanFindingsOutcomeCallable DescribeImageScanFindingsCallable(const DescribeImageScanFindingsRequestT& request) const
        {
            return SubmitCallable(&ECRClient::DescribeImageScanFindings, request);
        }

        /**
         * An Async wrapper for DescribeImageScanFindings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeImageScanFindingsRequestT = Model::DescribeImageScanFindingsRequest>
        void DescribeImageScanFindingsAsync(const DescribeImageScanFindingsRequestT& request, const DescribeImageScanFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECRClient::DescribeImageScanFindings, request, handler, context);
        }

        /**
         * <p>Returns metadata about the images in a repository.</p>  <p>Beginning
         * with Docker version 1.9, the Docker client compresses image layers before
         * pushing them to a V2 Docker registry. The output of the <code>docker
         * images</code> command shows the uncompressed image size, so it may return a
         * larger image size than the image sizes returned by <a>DescribeImages</a>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/DescribeImages">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeImagesOutcome DescribeImages(const Model::DescribeImagesRequest& request) const;

        /**
         * A Callable wrapper for DescribeImages that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeImagesRequestT = Model::DescribeImagesRequest>
        Model::DescribeImagesOutcomeCallable DescribeImagesCallable(const DescribeImagesRequestT& request) const
        {
            return SubmitCallable(&ECRClient::DescribeImages, request);
        }

        /**
         * An Async wrapper for DescribeImages that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeImagesRequestT = Model::DescribeImagesRequest>
        void DescribeImagesAsync(const DescribeImagesRequestT& request, const DescribeImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECRClient::DescribeImages, request, handler, context);
        }

        /**
         * <p>Returns the pull through cache rules for a registry.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/DescribePullThroughCacheRules">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePullThroughCacheRulesOutcome DescribePullThroughCacheRules(const Model::DescribePullThroughCacheRulesRequest& request = {}) const;

        /**
         * A Callable wrapper for DescribePullThroughCacheRules that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribePullThroughCacheRulesRequestT = Model::DescribePullThroughCacheRulesRequest>
        Model::DescribePullThroughCacheRulesOutcomeCallable DescribePullThroughCacheRulesCallable(const DescribePullThroughCacheRulesRequestT& request = {}) const
        {
            return SubmitCallable(&ECRClient::DescribePullThroughCacheRules, request);
        }

        /**
         * An Async wrapper for DescribePullThroughCacheRules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribePullThroughCacheRulesRequestT = Model::DescribePullThroughCacheRulesRequest>
        void DescribePullThroughCacheRulesAsync(const DescribePullThroughCacheRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const DescribePullThroughCacheRulesRequestT& request = {}) const
        {
            return SubmitAsync(&ECRClient::DescribePullThroughCacheRules, request, handler, context);
        }

        /**
         * <p>Describes the settings for a registry. The replication configuration for a
         * repository can be created or updated with the <a>PutReplicationConfiguration</a>
         * API action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/DescribeRegistry">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRegistryOutcome DescribeRegistry(const Model::DescribeRegistryRequest& request = {}) const;

        /**
         * A Callable wrapper for DescribeRegistry that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeRegistryRequestT = Model::DescribeRegistryRequest>
        Model::DescribeRegistryOutcomeCallable DescribeRegistryCallable(const DescribeRegistryRequestT& request = {}) const
        {
            return SubmitCallable(&ECRClient::DescribeRegistry, request);
        }

        /**
         * An Async wrapper for DescribeRegistry that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeRegistryRequestT = Model::DescribeRegistryRequest>
        void DescribeRegistryAsync(const DescribeRegistryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const DescribeRegistryRequestT& request = {}) const
        {
            return SubmitAsync(&ECRClient::DescribeRegistry, request, handler, context);
        }

        /**
         * <p>Describes image repositories in a registry.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/DescribeRepositories">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRepositoriesOutcome DescribeRepositories(const Model::DescribeRepositoriesRequest& request = {}) const;

        /**
         * A Callable wrapper for DescribeRepositories that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeRepositoriesRequestT = Model::DescribeRepositoriesRequest>
        Model::DescribeRepositoriesOutcomeCallable DescribeRepositoriesCallable(const DescribeRepositoriesRequestT& request = {}) const
        {
            return SubmitCallable(&ECRClient::DescribeRepositories, request);
        }

        /**
         * An Async wrapper for DescribeRepositories that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeRepositoriesRequestT = Model::DescribeRepositoriesRequest>
        void DescribeRepositoriesAsync(const DescribeRepositoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const DescribeRepositoriesRequestT& request = {}) const
        {
            return SubmitAsync(&ECRClient::DescribeRepositories, request, handler, context);
        }

        /**
         * <p>Returns details about the repository creation templates in a registry. The
         * <code>prefixes</code> request parameter can be used to return the details for a
         * specific repository creation template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/DescribeRepositoryCreationTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRepositoryCreationTemplatesOutcome DescribeRepositoryCreationTemplates(const Model::DescribeRepositoryCreationTemplatesRequest& request = {}) const;

        /**
         * A Callable wrapper for DescribeRepositoryCreationTemplates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeRepositoryCreationTemplatesRequestT = Model::DescribeRepositoryCreationTemplatesRequest>
        Model::DescribeRepositoryCreationTemplatesOutcomeCallable DescribeRepositoryCreationTemplatesCallable(const DescribeRepositoryCreationTemplatesRequestT& request = {}) const
        {
            return SubmitCallable(&ECRClient::DescribeRepositoryCreationTemplates, request);
        }

        /**
         * An Async wrapper for DescribeRepositoryCreationTemplates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeRepositoryCreationTemplatesRequestT = Model::DescribeRepositoryCreationTemplatesRequest>
        void DescribeRepositoryCreationTemplatesAsync(const DescribeRepositoryCreationTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const DescribeRepositoryCreationTemplatesRequestT& request = {}) const
        {
            return SubmitAsync(&ECRClient::DescribeRepositoryCreationTemplates, request, handler, context);
        }

        /**
         * <p>Retrieves the basic scan type version name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/GetAccountSetting">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccountSettingOutcome GetAccountSetting(const Model::GetAccountSettingRequest& request) const;

        /**
         * A Callable wrapper for GetAccountSetting that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAccountSettingRequestT = Model::GetAccountSettingRequest>
        Model::GetAccountSettingOutcomeCallable GetAccountSettingCallable(const GetAccountSettingRequestT& request) const
        {
            return SubmitCallable(&ECRClient::GetAccountSetting, request);
        }

        /**
         * An Async wrapper for GetAccountSetting that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAccountSettingRequestT = Model::GetAccountSettingRequest>
        void GetAccountSettingAsync(const GetAccountSettingRequestT& request, const GetAccountSettingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECRClient::GetAccountSetting, request, handler, context);
        }

        /**
         * <p>Retrieves an authorization token. An authorization token represents your IAM
         * authentication credentials and can be used to access any Amazon ECR registry
         * that your IAM principal has access to. The authorization token is valid for 12
         * hours.</p> <p>The <code>authorizationToken</code> returned is a base64 encoded
         * string that can be decoded and used in a <code>docker login</code> command to
         * authenticate to a registry. The CLI offers an <code>get-login-password</code>
         * command that simplifies the login process. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonECR/latest/userguide/Registries.html#registry_auth">Registry
         * authentication</a> in the <i>Amazon Elastic Container Registry User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/GetAuthorizationToken">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAuthorizationTokenOutcome GetAuthorizationToken(const Model::GetAuthorizationTokenRequest& request = {}) const;

        /**
         * A Callable wrapper for GetAuthorizationToken that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAuthorizationTokenRequestT = Model::GetAuthorizationTokenRequest>
        Model::GetAuthorizationTokenOutcomeCallable GetAuthorizationTokenCallable(const GetAuthorizationTokenRequestT& request = {}) const
        {
            return SubmitCallable(&ECRClient::GetAuthorizationToken, request);
        }

        /**
         * An Async wrapper for GetAuthorizationToken that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAuthorizationTokenRequestT = Model::GetAuthorizationTokenRequest>
        void GetAuthorizationTokenAsync(const GetAuthorizationTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const GetAuthorizationTokenRequestT& request = {}) const
        {
            return SubmitAsync(&ECRClient::GetAuthorizationToken, request, handler, context);
        }

        /**
         * <p>Retrieves the pre-signed Amazon S3 download URL corresponding to an image
         * layer. You can only get URLs for image layers that are referenced in an
         * image.</p> <p>When an image is pulled, the GetDownloadUrlForLayer API is called
         * once per image layer that is not already cached.</p>  <p>This operation is
         * used by the Amazon ECR proxy and is not generally used by customers for pulling
         * and pushing images. In most cases, you should use the <code>docker</code> CLI to
         * pull, tag, and push images.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/GetDownloadUrlForLayer">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDownloadUrlForLayerOutcome GetDownloadUrlForLayer(const Model::GetDownloadUrlForLayerRequest& request) const;

        /**
         * A Callable wrapper for GetDownloadUrlForLayer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDownloadUrlForLayerRequestT = Model::GetDownloadUrlForLayerRequest>
        Model::GetDownloadUrlForLayerOutcomeCallable GetDownloadUrlForLayerCallable(const GetDownloadUrlForLayerRequestT& request) const
        {
            return SubmitCallable(&ECRClient::GetDownloadUrlForLayer, request);
        }

        /**
         * An Async wrapper for GetDownloadUrlForLayer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDownloadUrlForLayerRequestT = Model::GetDownloadUrlForLayerRequest>
        void GetDownloadUrlForLayerAsync(const GetDownloadUrlForLayerRequestT& request, const GetDownloadUrlForLayerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECRClient::GetDownloadUrlForLayer, request, handler, context);
        }

        /**
         * <p>Retrieves the lifecycle policy for the specified repository.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/GetLifecyclePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLifecyclePolicyOutcome GetLifecyclePolicy(const Model::GetLifecyclePolicyRequest& request) const;

        /**
         * A Callable wrapper for GetLifecyclePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetLifecyclePolicyRequestT = Model::GetLifecyclePolicyRequest>
        Model::GetLifecyclePolicyOutcomeCallable GetLifecyclePolicyCallable(const GetLifecyclePolicyRequestT& request) const
        {
            return SubmitCallable(&ECRClient::GetLifecyclePolicy, request);
        }

        /**
         * An Async wrapper for GetLifecyclePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetLifecyclePolicyRequestT = Model::GetLifecyclePolicyRequest>
        void GetLifecyclePolicyAsync(const GetLifecyclePolicyRequestT& request, const GetLifecyclePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECRClient::GetLifecyclePolicy, request, handler, context);
        }

        /**
         * <p>Retrieves the results of the lifecycle policy preview request for the
         * specified repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/GetLifecyclePolicyPreview">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLifecyclePolicyPreviewOutcome GetLifecyclePolicyPreview(const Model::GetLifecyclePolicyPreviewRequest& request) const;

        /**
         * A Callable wrapper for GetLifecyclePolicyPreview that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetLifecyclePolicyPreviewRequestT = Model::GetLifecyclePolicyPreviewRequest>
        Model::GetLifecyclePolicyPreviewOutcomeCallable GetLifecyclePolicyPreviewCallable(const GetLifecyclePolicyPreviewRequestT& request) const
        {
            return SubmitCallable(&ECRClient::GetLifecyclePolicyPreview, request);
        }

        /**
         * An Async wrapper for GetLifecyclePolicyPreview that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetLifecyclePolicyPreviewRequestT = Model::GetLifecyclePolicyPreviewRequest>
        void GetLifecyclePolicyPreviewAsync(const GetLifecyclePolicyPreviewRequestT& request, const GetLifecyclePolicyPreviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECRClient::GetLifecyclePolicyPreview, request, handler, context);
        }

        /**
         * <p>Retrieves the permissions policy for a registry.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/GetRegistryPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRegistryPolicyOutcome GetRegistryPolicy(const Model::GetRegistryPolicyRequest& request = {}) const;

        /**
         * A Callable wrapper for GetRegistryPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRegistryPolicyRequestT = Model::GetRegistryPolicyRequest>
        Model::GetRegistryPolicyOutcomeCallable GetRegistryPolicyCallable(const GetRegistryPolicyRequestT& request = {}) const
        {
            return SubmitCallable(&ECRClient::GetRegistryPolicy, request);
        }

        /**
         * An Async wrapper for GetRegistryPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRegistryPolicyRequestT = Model::GetRegistryPolicyRequest>
        void GetRegistryPolicyAsync(const GetRegistryPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const GetRegistryPolicyRequestT& request = {}) const
        {
            return SubmitAsync(&ECRClient::GetRegistryPolicy, request, handler, context);
        }

        /**
         * <p>Retrieves the scanning configuration for a registry.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/GetRegistryScanningConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRegistryScanningConfigurationOutcome GetRegistryScanningConfiguration(const Model::GetRegistryScanningConfigurationRequest& request = {}) const;

        /**
         * A Callable wrapper for GetRegistryScanningConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRegistryScanningConfigurationRequestT = Model::GetRegistryScanningConfigurationRequest>
        Model::GetRegistryScanningConfigurationOutcomeCallable GetRegistryScanningConfigurationCallable(const GetRegistryScanningConfigurationRequestT& request = {}) const
        {
            return SubmitCallable(&ECRClient::GetRegistryScanningConfiguration, request);
        }

        /**
         * An Async wrapper for GetRegistryScanningConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRegistryScanningConfigurationRequestT = Model::GetRegistryScanningConfigurationRequest>
        void GetRegistryScanningConfigurationAsync(const GetRegistryScanningConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const GetRegistryScanningConfigurationRequestT& request = {}) const
        {
            return SubmitAsync(&ECRClient::GetRegistryScanningConfiguration, request, handler, context);
        }

        /**
         * <p>Retrieves the repository policy for the specified repository.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/GetRepositoryPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRepositoryPolicyOutcome GetRepositoryPolicy(const Model::GetRepositoryPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetRepositoryPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRepositoryPolicyRequestT = Model::GetRepositoryPolicyRequest>
        Model::GetRepositoryPolicyOutcomeCallable GetRepositoryPolicyCallable(const GetRepositoryPolicyRequestT& request) const
        {
            return SubmitCallable(&ECRClient::GetRepositoryPolicy, request);
        }

        /**
         * An Async wrapper for GetRepositoryPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRepositoryPolicyRequestT = Model::GetRepositoryPolicyRequest>
        void GetRepositoryPolicyAsync(const GetRepositoryPolicyRequestT& request, const GetRepositoryPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECRClient::GetRepositoryPolicy, request, handler, context);
        }

        /**
         * <p>Notifies Amazon ECR that you intend to upload an image layer.</p> <p>When an
         * image is pushed, the InitiateLayerUpload API is called once per image layer that
         * has not already been uploaded. Whether or not an image layer has been uploaded
         * is determined by the BatchCheckLayerAvailability API action.</p>  <p>This
         * operation is used by the Amazon ECR proxy and is not generally used by customers
         * for pulling and pushing images. In most cases, you should use the
         * <code>docker</code> CLI to pull, tag, and push images.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/InitiateLayerUpload">AWS
         * API Reference</a></p>
         */
        virtual Model::InitiateLayerUploadOutcome InitiateLayerUpload(const Model::InitiateLayerUploadRequest& request) const;

        /**
         * A Callable wrapper for InitiateLayerUpload that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename InitiateLayerUploadRequestT = Model::InitiateLayerUploadRequest>
        Model::InitiateLayerUploadOutcomeCallable InitiateLayerUploadCallable(const InitiateLayerUploadRequestT& request) const
        {
            return SubmitCallable(&ECRClient::InitiateLayerUpload, request);
        }

        /**
         * An Async wrapper for InitiateLayerUpload that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename InitiateLayerUploadRequestT = Model::InitiateLayerUploadRequest>
        void InitiateLayerUploadAsync(const InitiateLayerUploadRequestT& request, const InitiateLayerUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECRClient::InitiateLayerUpload, request, handler, context);
        }

        /**
         * <p>Lists all the image IDs for the specified repository.</p> <p>You can filter
         * images based on whether or not they are tagged by using the
         * <code>tagStatus</code> filter and specifying either <code>TAGGED</code>,
         * <code>UNTAGGED</code> or <code>ANY</code>. For example, you can filter your
         * results to return only <code>UNTAGGED</code> images and then pipe that result to
         * a <a>BatchDeleteImage</a> operation to delete them. Or, you can filter your
         * results to return only <code>TAGGED</code> images to list all of the tags in
         * your repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/ListImages">AWS API
         * Reference</a></p>
         */
        virtual Model::ListImagesOutcome ListImages(const Model::ListImagesRequest& request) const;

        /**
         * A Callable wrapper for ListImages that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListImagesRequestT = Model::ListImagesRequest>
        Model::ListImagesOutcomeCallable ListImagesCallable(const ListImagesRequestT& request) const
        {
            return SubmitCallable(&ECRClient::ListImages, request);
        }

        /**
         * An Async wrapper for ListImages that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListImagesRequestT = Model::ListImagesRequest>
        void ListImagesAsync(const ListImagesRequestT& request, const ListImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECRClient::ListImages, request, handler, context);
        }

        /**
         * <p>List the tags for an Amazon ECR resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&ECRClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECRClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Allows you to change the basic scan type version by setting the
         * <code>name</code> parameter to either <code>CLAIR</code> to
         * <code>AWS_NATIVE</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/PutAccountSetting">AWS
         * API Reference</a></p>
         */
        virtual Model::PutAccountSettingOutcome PutAccountSetting(const Model::PutAccountSettingRequest& request) const;

        /**
         * A Callable wrapper for PutAccountSetting that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutAccountSettingRequestT = Model::PutAccountSettingRequest>
        Model::PutAccountSettingOutcomeCallable PutAccountSettingCallable(const PutAccountSettingRequestT& request) const
        {
            return SubmitCallable(&ECRClient::PutAccountSetting, request);
        }

        /**
         * An Async wrapper for PutAccountSetting that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutAccountSettingRequestT = Model::PutAccountSettingRequest>
        void PutAccountSettingAsync(const PutAccountSettingRequestT& request, const PutAccountSettingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECRClient::PutAccountSetting, request, handler, context);
        }

        /**
         * <p>Creates or updates the image manifest and tags associated with an image.</p>
         * <p>When an image is pushed and all new image layers have been uploaded, the
         * PutImage API is called once to create or update the image manifest and the tags
         * associated with the image.</p>  <p>This operation is used by the Amazon
         * ECR proxy and is not generally used by customers for pulling and pushing images.
         * In most cases, you should use the <code>docker</code> CLI to pull, tag, and push
         * images.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/PutImage">AWS API
         * Reference</a></p>
         */
        virtual Model::PutImageOutcome PutImage(const Model::PutImageRequest& request) const;

        /**
         * A Callable wrapper for PutImage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutImageRequestT = Model::PutImageRequest>
        Model::PutImageOutcomeCallable PutImageCallable(const PutImageRequestT& request) const
        {
            return SubmitCallable(&ECRClient::PutImage, request);
        }

        /**
         * An Async wrapper for PutImage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutImageRequestT = Model::PutImageRequest>
        void PutImageAsync(const PutImageRequestT& request, const PutImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECRClient::PutImage, request, handler, context);
        }

        /**
         *  <p>The <code>PutImageScanningConfiguration</code> API is being
         * deprecated, in favor of specifying the image scanning configuration at the
         * registry level. For more information, see
         * <a>PutRegistryScanningConfiguration</a>.</p>  <p>Updates the image
         * scanning configuration for the specified repository.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/PutImageScanningConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutImageScanningConfigurationOutcome PutImageScanningConfiguration(const Model::PutImageScanningConfigurationRequest& request) const;

        /**
         * A Callable wrapper for PutImageScanningConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutImageScanningConfigurationRequestT = Model::PutImageScanningConfigurationRequest>
        Model::PutImageScanningConfigurationOutcomeCallable PutImageScanningConfigurationCallable(const PutImageScanningConfigurationRequestT& request) const
        {
            return SubmitCallable(&ECRClient::PutImageScanningConfiguration, request);
        }

        /**
         * An Async wrapper for PutImageScanningConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutImageScanningConfigurationRequestT = Model::PutImageScanningConfigurationRequest>
        void PutImageScanningConfigurationAsync(const PutImageScanningConfigurationRequestT& request, const PutImageScanningConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECRClient::PutImageScanningConfiguration, request, handler, context);
        }

        /**
         * <p>Updates the image tag mutability settings for the specified repository. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/AmazonECR/latest/userguide/image-tag-mutability.html">Image
         * tag mutability</a> in the <i>Amazon Elastic Container Registry User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/PutImageTagMutability">AWS
         * API Reference</a></p>
         */
        virtual Model::PutImageTagMutabilityOutcome PutImageTagMutability(const Model::PutImageTagMutabilityRequest& request) const;

        /**
         * A Callable wrapper for PutImageTagMutability that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutImageTagMutabilityRequestT = Model::PutImageTagMutabilityRequest>
        Model::PutImageTagMutabilityOutcomeCallable PutImageTagMutabilityCallable(const PutImageTagMutabilityRequestT& request) const
        {
            return SubmitCallable(&ECRClient::PutImageTagMutability, request);
        }

        /**
         * An Async wrapper for PutImageTagMutability that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutImageTagMutabilityRequestT = Model::PutImageTagMutabilityRequest>
        void PutImageTagMutabilityAsync(const PutImageTagMutabilityRequestT& request, const PutImageTagMutabilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECRClient::PutImageTagMutability, request, handler, context);
        }

        /**
         * <p>Creates or updates the lifecycle policy for the specified repository. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/AmazonECR/latest/userguide/LifecyclePolicies.html">Lifecycle
         * policy template</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/PutLifecyclePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutLifecyclePolicyOutcome PutLifecyclePolicy(const Model::PutLifecyclePolicyRequest& request) const;

        /**
         * A Callable wrapper for PutLifecyclePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutLifecyclePolicyRequestT = Model::PutLifecyclePolicyRequest>
        Model::PutLifecyclePolicyOutcomeCallable PutLifecyclePolicyCallable(const PutLifecyclePolicyRequestT& request) const
        {
            return SubmitCallable(&ECRClient::PutLifecyclePolicy, request);
        }

        /**
         * An Async wrapper for PutLifecyclePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutLifecyclePolicyRequestT = Model::PutLifecyclePolicyRequest>
        void PutLifecyclePolicyAsync(const PutLifecyclePolicyRequestT& request, const PutLifecyclePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECRClient::PutLifecyclePolicy, request, handler, context);
        }

        /**
         * <p>Creates or updates the permissions policy for your registry.</p> <p>A
         * registry policy is used to specify permissions for another Amazon Web Services
         * account and is used when configuring cross-account replication. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonECR/latest/userguide/registry-permissions.html">Registry
         * permissions</a> in the <i>Amazon Elastic Container Registry User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/PutRegistryPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutRegistryPolicyOutcome PutRegistryPolicy(const Model::PutRegistryPolicyRequest& request) const;

        /**
         * A Callable wrapper for PutRegistryPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutRegistryPolicyRequestT = Model::PutRegistryPolicyRequest>
        Model::PutRegistryPolicyOutcomeCallable PutRegistryPolicyCallable(const PutRegistryPolicyRequestT& request) const
        {
            return SubmitCallable(&ECRClient::PutRegistryPolicy, request);
        }

        /**
         * An Async wrapper for PutRegistryPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutRegistryPolicyRequestT = Model::PutRegistryPolicyRequest>
        void PutRegistryPolicyAsync(const PutRegistryPolicyRequestT& request, const PutRegistryPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECRClient::PutRegistryPolicy, request, handler, context);
        }

        /**
         * <p>Creates or updates the scanning configuration for your private
         * registry.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/PutRegistryScanningConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutRegistryScanningConfigurationOutcome PutRegistryScanningConfiguration(const Model::PutRegistryScanningConfigurationRequest& request = {}) const;

        /**
         * A Callable wrapper for PutRegistryScanningConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutRegistryScanningConfigurationRequestT = Model::PutRegistryScanningConfigurationRequest>
        Model::PutRegistryScanningConfigurationOutcomeCallable PutRegistryScanningConfigurationCallable(const PutRegistryScanningConfigurationRequestT& request = {}) const
        {
            return SubmitCallable(&ECRClient::PutRegistryScanningConfiguration, request);
        }

        /**
         * An Async wrapper for PutRegistryScanningConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutRegistryScanningConfigurationRequestT = Model::PutRegistryScanningConfigurationRequest>
        void PutRegistryScanningConfigurationAsync(const PutRegistryScanningConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const PutRegistryScanningConfigurationRequestT& request = {}) const
        {
            return SubmitAsync(&ECRClient::PutRegistryScanningConfiguration, request, handler, context);
        }

        /**
         * <p>Creates or updates the replication configuration for a registry. The existing
         * replication configuration for a repository can be retrieved with the
         * <a>DescribeRegistry</a> API action. The first time the
         * PutReplicationConfiguration API is called, a service-linked IAM role is created
         * in your account for the replication process. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonECR/latest/userguide/using-service-linked-roles.html">Using
         * service-linked roles for Amazon ECR</a> in the <i>Amazon Elastic Container
         * Registry User Guide</i>. For more information on the custom role for
         * replication, see <a
         * href="https://docs.aws.amazon.com/AmazonECR/latest/userguide/replication-creation-templates.html#roles-creatingrole-user-console">Creating
         * an IAM role for replication</a>.</p>  <p>When configuring cross-account
         * replication, the destination account must grant the source account permission to
         * replicate. This permission is controlled using a registry permissions policy.
         * For more information, see <a>PutRegistryPolicy</a>.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/PutReplicationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutReplicationConfigurationOutcome PutReplicationConfiguration(const Model::PutReplicationConfigurationRequest& request) const;

        /**
         * A Callable wrapper for PutReplicationConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutReplicationConfigurationRequestT = Model::PutReplicationConfigurationRequest>
        Model::PutReplicationConfigurationOutcomeCallable PutReplicationConfigurationCallable(const PutReplicationConfigurationRequestT& request) const
        {
            return SubmitCallable(&ECRClient::PutReplicationConfiguration, request);
        }

        /**
         * An Async wrapper for PutReplicationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutReplicationConfigurationRequestT = Model::PutReplicationConfigurationRequest>
        void PutReplicationConfigurationAsync(const PutReplicationConfigurationRequestT& request, const PutReplicationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECRClient::PutReplicationConfiguration, request, handler, context);
        }

        /**
         * <p>Applies a repository policy to the specified repository to control access
         * permissions. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonECR/latest/userguide/repository-policies.html">Amazon
         * ECR Repository policies</a> in the <i>Amazon Elastic Container Registry User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/SetRepositoryPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::SetRepositoryPolicyOutcome SetRepositoryPolicy(const Model::SetRepositoryPolicyRequest& request) const;

        /**
         * A Callable wrapper for SetRepositoryPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SetRepositoryPolicyRequestT = Model::SetRepositoryPolicyRequest>
        Model::SetRepositoryPolicyOutcomeCallable SetRepositoryPolicyCallable(const SetRepositoryPolicyRequestT& request) const
        {
            return SubmitCallable(&ECRClient::SetRepositoryPolicy, request);
        }

        /**
         * An Async wrapper for SetRepositoryPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SetRepositoryPolicyRequestT = Model::SetRepositoryPolicyRequest>
        void SetRepositoryPolicyAsync(const SetRepositoryPolicyRequestT& request, const SetRepositoryPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECRClient::SetRepositoryPolicy, request, handler, context);
        }

        /**
         * <p>Starts an image vulnerability scan. An image scan can only be started once
         * per 24 hours on an individual image. This limit includes if an image was scanned
         * on initial push. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonECR/latest/userguide/image-scanning.html">Image
         * scanning</a> in the <i>Amazon Elastic Container Registry User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/StartImageScan">AWS
         * API Reference</a></p>
         */
        virtual Model::StartImageScanOutcome StartImageScan(const Model::StartImageScanRequest& request) const;

        /**
         * A Callable wrapper for StartImageScan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartImageScanRequestT = Model::StartImageScanRequest>
        Model::StartImageScanOutcomeCallable StartImageScanCallable(const StartImageScanRequestT& request) const
        {
            return SubmitCallable(&ECRClient::StartImageScan, request);
        }

        /**
         * An Async wrapper for StartImageScan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartImageScanRequestT = Model::StartImageScanRequest>
        void StartImageScanAsync(const StartImageScanRequestT& request, const StartImageScanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECRClient::StartImageScan, request, handler, context);
        }

        /**
         * <p>Starts a preview of a lifecycle policy for the specified repository. This
         * allows you to see the results before associating the lifecycle policy with the
         * repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/StartLifecyclePolicyPreview">AWS
         * API Reference</a></p>
         */
        virtual Model::StartLifecyclePolicyPreviewOutcome StartLifecyclePolicyPreview(const Model::StartLifecyclePolicyPreviewRequest& request) const;

        /**
         * A Callable wrapper for StartLifecyclePolicyPreview that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartLifecyclePolicyPreviewRequestT = Model::StartLifecyclePolicyPreviewRequest>
        Model::StartLifecyclePolicyPreviewOutcomeCallable StartLifecyclePolicyPreviewCallable(const StartLifecyclePolicyPreviewRequestT& request) const
        {
            return SubmitCallable(&ECRClient::StartLifecyclePolicyPreview, request);
        }

        /**
         * An Async wrapper for StartLifecyclePolicyPreview that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartLifecyclePolicyPreviewRequestT = Model::StartLifecyclePolicyPreviewRequest>
        void StartLifecyclePolicyPreviewAsync(const StartLifecyclePolicyPreviewRequestT& request, const StartLifecyclePolicyPreviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECRClient::StartLifecyclePolicyPreview, request, handler, context);
        }

        /**
         * <p>Adds specified tags to a resource with the specified ARN. Existing tags on a
         * resource are not changed if they are not specified in the request
         * parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/TagResource">AWS API
         * Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&ECRClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECRClient::TagResource, request, handler, context);
        }

        /**
         * <p>Deletes specified tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&ECRClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECRClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates an existing pull through cache rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/UpdatePullThroughCacheRule">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePullThroughCacheRuleOutcome UpdatePullThroughCacheRule(const Model::UpdatePullThroughCacheRuleRequest& request) const;

        /**
         * A Callable wrapper for UpdatePullThroughCacheRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdatePullThroughCacheRuleRequestT = Model::UpdatePullThroughCacheRuleRequest>
        Model::UpdatePullThroughCacheRuleOutcomeCallable UpdatePullThroughCacheRuleCallable(const UpdatePullThroughCacheRuleRequestT& request) const
        {
            return SubmitCallable(&ECRClient::UpdatePullThroughCacheRule, request);
        }

        /**
         * An Async wrapper for UpdatePullThroughCacheRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdatePullThroughCacheRuleRequestT = Model::UpdatePullThroughCacheRuleRequest>
        void UpdatePullThroughCacheRuleAsync(const UpdatePullThroughCacheRuleRequestT& request, const UpdatePullThroughCacheRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECRClient::UpdatePullThroughCacheRule, request, handler, context);
        }

        /**
         * <p>Updates an existing repository creation template.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/UpdateRepositoryCreationTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRepositoryCreationTemplateOutcome UpdateRepositoryCreationTemplate(const Model::UpdateRepositoryCreationTemplateRequest& request) const;

        /**
         * A Callable wrapper for UpdateRepositoryCreationTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateRepositoryCreationTemplateRequestT = Model::UpdateRepositoryCreationTemplateRequest>
        Model::UpdateRepositoryCreationTemplateOutcomeCallable UpdateRepositoryCreationTemplateCallable(const UpdateRepositoryCreationTemplateRequestT& request) const
        {
            return SubmitCallable(&ECRClient::UpdateRepositoryCreationTemplate, request);
        }

        /**
         * An Async wrapper for UpdateRepositoryCreationTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateRepositoryCreationTemplateRequestT = Model::UpdateRepositoryCreationTemplateRequest>
        void UpdateRepositoryCreationTemplateAsync(const UpdateRepositoryCreationTemplateRequestT& request, const UpdateRepositoryCreationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECRClient::UpdateRepositoryCreationTemplate, request, handler, context);
        }

        /**
         * <p>Uploads an image layer part to Amazon ECR.</p> <p>When an image is pushed,
         * each new image layer is uploaded in parts. The maximum size of each image layer
         * part can be 20971520 bytes (or about 20MB). The UploadLayerPart API is called
         * once per each new image layer part.</p>  <p>This operation is used by the
         * Amazon ECR proxy and is not generally used by customers for pulling and pushing
         * images. In most cases, you should use the <code>docker</code> CLI to pull, tag,
         * and push images.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/UploadLayerPart">AWS
         * API Reference</a></p>
         */
        virtual Model::UploadLayerPartOutcome UploadLayerPart(const Model::UploadLayerPartRequest& request) const;

        /**
         * A Callable wrapper for UploadLayerPart that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UploadLayerPartRequestT = Model::UploadLayerPartRequest>
        Model::UploadLayerPartOutcomeCallable UploadLayerPartCallable(const UploadLayerPartRequestT& request) const
        {
            return SubmitCallable(&ECRClient::UploadLayerPart, request);
        }

        /**
         * An Async wrapper for UploadLayerPart that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UploadLayerPartRequestT = Model::UploadLayerPartRequest>
        void UploadLayerPartAsync(const UploadLayerPartRequestT& request, const UploadLayerPartResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECRClient::UploadLayerPart, request, handler, context);
        }

        /**
         * <p>Validates an existing pull through cache rule for an upstream registry that
         * requires authentication. This will retrieve the contents of the Amazon Web
         * Services Secrets Manager secret, verify the syntax, and then validate that
         * authentication to the upstream registry is successful.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/ValidatePullThroughCacheRule">AWS
         * API Reference</a></p>
         */
        virtual Model::ValidatePullThroughCacheRuleOutcome ValidatePullThroughCacheRule(const Model::ValidatePullThroughCacheRuleRequest& request) const;

        /**
         * A Callable wrapper for ValidatePullThroughCacheRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ValidatePullThroughCacheRuleRequestT = Model::ValidatePullThroughCacheRuleRequest>
        Model::ValidatePullThroughCacheRuleOutcomeCallable ValidatePullThroughCacheRuleCallable(const ValidatePullThroughCacheRuleRequestT& request) const
        {
            return SubmitCallable(&ECRClient::ValidatePullThroughCacheRule, request);
        }

        /**
         * An Async wrapper for ValidatePullThroughCacheRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ValidatePullThroughCacheRuleRequestT = Model::ValidatePullThroughCacheRuleRequest>
        void ValidatePullThroughCacheRuleAsync(const ValidatePullThroughCacheRuleRequestT& request, const ValidatePullThroughCacheRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ECRClient::ValidatePullThroughCacheRule, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ECREndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<ECRClient>;
      void init(const ECRClientConfiguration& clientConfiguration);

      ECRClientConfiguration m_clientConfiguration;
      std::shared_ptr<ECREndpointProviderBase> m_endpointProvider;
  };

} // namespace ECR
} // namespace Aws
