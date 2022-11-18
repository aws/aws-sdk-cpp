/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecr/ECRServiceClientModel.h>
#include <aws/ecr/ECRLegacyAsyncMacros.h>

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
  class AWS_ECR_API ECRClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ECRClient(const Aws::ECR::ECRClientConfiguration& clientConfiguration = Aws::ECR::ECRClientConfiguration(),
                  std::shared_ptr<ECREndpointProviderBase> endpointProvider = Aws::MakeShared<ECREndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ECRClient(const Aws::Auth::AWSCredentials& credentials,
                  std::shared_ptr<ECREndpointProviderBase> endpointProvider = Aws::MakeShared<ECREndpointProvider>(ALLOCATION_TAG),
                  const Aws::ECR::ECRClientConfiguration& clientConfiguration = Aws::ECR::ECRClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ECRClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  std::shared_ptr<ECREndpointProviderBase> endpointProvider = Aws::MakeShared<ECREndpointProvider>(ALLOCATION_TAG),
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
         * <p>Gets detailed information for an image. Images are specified with either an
         * <code>imageTag</code> or <code>imageDigest</code>.</p> <p>When an image is
         * pulled, the BatchGetImage API is called once to retrieve the image
         * manifest.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/BatchGetImage">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetImageOutcome BatchGetImage(const Model::BatchGetImageRequest& request) const;


        /**
         * <p>Gets the scanning configuration for one or more repositories.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/BatchGetRepositoryScanningConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetRepositoryScanningConfigurationOutcome BatchGetRepositoryScanningConfiguration(const Model::BatchGetRepositoryScanningConfigurationRequest& request) const;


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
         * <p>Creates a pull through cache rule. A pull through cache rule provides a way
         * to cache images from an external public registry in your Amazon ECR private
         * registry.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/CreatePullThroughCacheRule">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePullThroughCacheRuleOutcome CreatePullThroughCacheRule(const Model::CreatePullThroughCacheRuleRequest& request) const;


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
         * <p>Deletes the lifecycle policy associated with the specified
         * repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/DeleteLifecyclePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLifecyclePolicyOutcome DeleteLifecyclePolicy(const Model::DeleteLifecyclePolicyRequest& request) const;


        /**
         * <p>Deletes a pull through cache rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/DeletePullThroughCacheRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePullThroughCacheRuleOutcome DeletePullThroughCacheRule(const Model::DeletePullThroughCacheRuleRequest& request) const;


        /**
         * <p>Deletes the registry permissions policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/DeleteRegistryPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRegistryPolicyOutcome DeleteRegistryPolicy(const Model::DeleteRegistryPolicyRequest& request) const;


        /**
         * <p>Deletes a repository. If the repository contains images, you must either
         * delete all images in the repository or use the <code>force</code> option to
         * delete the repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/DeleteRepository">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRepositoryOutcome DeleteRepository(const Model::DeleteRepositoryRequest& request) const;


        /**
         * <p>Deletes the repository policy associated with the specified
         * repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/DeleteRepositoryPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRepositoryPolicyOutcome DeleteRepositoryPolicy(const Model::DeleteRepositoryPolicyRequest& request) const;


        /**
         * <p>Returns the replication status for a specified image.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/DescribeImageReplicationStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeImageReplicationStatusOutcome DescribeImageReplicationStatus(const Model::DescribeImageReplicationStatusRequest& request) const;


        /**
         * <p>Returns the scan findings for the specified image.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/DescribeImageScanFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeImageScanFindingsOutcome DescribeImageScanFindings(const Model::DescribeImageScanFindingsRequest& request) const;


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
         * <p>Returns the pull through cache rules for a registry.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/DescribePullThroughCacheRules">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePullThroughCacheRulesOutcome DescribePullThroughCacheRules(const Model::DescribePullThroughCacheRulesRequest& request) const;


        /**
         * <p>Describes the settings for a registry. The replication configuration for a
         * repository can be created or updated with the <a>PutReplicationConfiguration</a>
         * API action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/DescribeRegistry">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRegistryOutcome DescribeRegistry(const Model::DescribeRegistryRequest& request) const;


        /**
         * <p>Describes image repositories in a registry.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/DescribeRepositories">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRepositoriesOutcome DescribeRepositories(const Model::DescribeRepositoriesRequest& request) const;


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
        virtual Model::GetAuthorizationTokenOutcome GetAuthorizationToken(const Model::GetAuthorizationTokenRequest& request) const;


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
         * <p>Retrieves the lifecycle policy for the specified repository.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/GetLifecyclePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLifecyclePolicyOutcome GetLifecyclePolicy(const Model::GetLifecyclePolicyRequest& request) const;


        /**
         * <p>Retrieves the results of the lifecycle policy preview request for the
         * specified repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/GetLifecyclePolicyPreview">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLifecyclePolicyPreviewOutcome GetLifecyclePolicyPreview(const Model::GetLifecyclePolicyPreviewRequest& request) const;


        /**
         * <p>Retrieves the permissions policy for a registry.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/GetRegistryPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRegistryPolicyOutcome GetRegistryPolicy(const Model::GetRegistryPolicyRequest& request) const;


        /**
         * <p>Retrieves the scanning configuration for a registry.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/GetRegistryScanningConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRegistryScanningConfigurationOutcome GetRegistryScanningConfiguration(const Model::GetRegistryScanningConfigurationRequest& request) const;


        /**
         * <p>Retrieves the repository policy for the specified repository.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/GetRepositoryPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRepositoryPolicyOutcome GetRepositoryPolicy(const Model::GetRepositoryPolicyRequest& request) const;


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
         * <p>List the tags for an Amazon ECR resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


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
         * <p>Creates or updates the lifecycle policy for the specified repository. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/AmazonECR/latest/userguide/LifecyclePolicies.html">Lifecycle
         * policy template</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/PutLifecyclePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutLifecyclePolicyOutcome PutLifecyclePolicy(const Model::PutLifecyclePolicyRequest& request) const;


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
         * <p>Creates or updates the scanning configuration for your private
         * registry.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/PutRegistryScanningConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutRegistryScanningConfigurationOutcome PutRegistryScanningConfiguration(const Model::PutRegistryScanningConfigurationRequest& request) const;


        /**
         * <p>Creates or updates the replication configuration for a registry. The existing
         * replication configuration for a repository can be retrieved with the
         * <a>DescribeRegistry</a> API action. The first time the
         * PutReplicationConfiguration API is called, a service-linked IAM role is created
         * in your account for the replication process. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonECR/latest/userguide/using-service-linked-roles.html">Using
         * service-linked roles for Amazon ECR</a> in the <i>Amazon Elastic Container
         * Registry User Guide</i>.</p>  <p>When configuring cross-account
         * replication, the destination account must grant the source account permission to
         * replicate. This permission is controlled using a registry permissions policy.
         * For more information, see <a>PutRegistryPolicy</a>.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/PutReplicationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutReplicationConfigurationOutcome PutReplicationConfiguration(const Model::PutReplicationConfigurationRequest& request) const;


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
         * <p>Starts a preview of a lifecycle policy for the specified repository. This
         * allows you to see the results before associating the lifecycle policy with the
         * repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/StartLifecyclePolicyPreview">AWS
         * API Reference</a></p>
         */
        virtual Model::StartLifecyclePolicyPreviewOutcome StartLifecyclePolicyPreview(const Model::StartLifecyclePolicyPreviewRequest& request) const;


        /**
         * <p>Adds specified tags to a resource with the specified ARN. Existing tags on a
         * resource are not changed if they are not specified in the request
         * parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/TagResource">AWS API
         * Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Deletes specified tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


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



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ECREndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const ECRClientConfiguration& clientConfiguration);

      ECRClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ECREndpointProviderBase> m_endpointProvider;
  };

} // namespace ECR
} // namespace Aws
