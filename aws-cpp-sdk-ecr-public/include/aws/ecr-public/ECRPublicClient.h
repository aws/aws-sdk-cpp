/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr-public/ECRPublic_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecr-public/ECRPublicServiceClientModel.h>
#include <aws/ecr-public/ECRPublicLegacyAsyncMacros.h>

namespace Aws
{
namespace ECRPublic
{
  /**
   * <fullname>Amazon Elastic Container Registry Public</fullname> <p>Amazon Elastic
   * Container Registry (Amazon ECR) is a managed container image registry service.
   * Amazon ECR provides both public and private registries to host your container
   * images. You can use the familiar Docker CLI, or their preferred client, to push,
   * pull, and manage images. Amazon ECR provides a secure, scalable, and reliable
   * registry for your Docker or Open Container Initiative (OCI) images. Amazon ECR
   * supports public repositories with this API. For information about the Amazon ECR
   * API for private repositories, see <a
   * href="https://docs.aws.amazon.com/AmazonECR/latest/APIReference/Welcome.html">Amazon
   * Elastic Container Registry API Reference</a>.</p>
   */
  class AWS_ECRPUBLIC_API ECRPublicClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ECRPublicClient(const Aws::ECRPublic::ECRPublicClientConfiguration& clientConfiguration = Aws::ECRPublic::ECRPublicClientConfiguration(),
                        std::shared_ptr<ECRPublicEndpointProviderBase> endpointProvider = Aws::MakeShared<ECRPublicEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ECRPublicClient(const Aws::Auth::AWSCredentials& credentials,
                        std::shared_ptr<ECRPublicEndpointProviderBase> endpointProvider = Aws::MakeShared<ECRPublicEndpointProvider>(ALLOCATION_TAG),
                        const Aws::ECRPublic::ECRPublicClientConfiguration& clientConfiguration = Aws::ECRPublic::ECRPublicClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ECRPublicClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        std::shared_ptr<ECRPublicEndpointProviderBase> endpointProvider = Aws::MakeShared<ECRPublicEndpointProvider>(ALLOCATION_TAG),
                        const Aws::ECRPublic::ECRPublicClientConfiguration& clientConfiguration = Aws::ECRPublic::ECRPublicClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ECRPublicClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ECRPublicClient(const Aws::Auth::AWSCredentials& credentials,
                        const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ECRPublicClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~ECRPublicClient();


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
         * <p>Checks the availability of one or more image layers within a repository in a
         * public registry. When an image is pushed to a repository, each image layer is
         * checked to verify if it has been uploaded before. If it has been uploaded, then
         * the image layer is skipped.</p>  <p>This operation is used by the Amazon
         * ECR proxy and is not generally used by customers for pulling and pushing images.
         * In most cases, you should use the <code>docker</code> CLI to pull, tag, and push
         * images.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/BatchCheckLayerAvailability">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchCheckLayerAvailabilityOutcome BatchCheckLayerAvailability(const Model::BatchCheckLayerAvailabilityRequest& request) const;


        /**
         * <p>Deletes a list of specified images within a repository in a public registry.
         * Images are specified with either an <code>imageTag</code> or
         * <code>imageDigest</code>.</p> <p>You can remove a tag from an image by
         * specifying the image's tag in your request. When you remove the last tag from an
         * image, the image is deleted from your repository.</p> <p>You can completely
         * delete an image (and all of its tags) by specifying the image's digest in your
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/BatchDeleteImage">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDeleteImageOutcome BatchDeleteImage(const Model::BatchDeleteImageRequest& request) const;


        /**
         * <p>Informs Amazon ECR that the image layer upload has completed for a specified
         * public registry, repository name, and upload ID. You can optionally provide a
         * <code>sha256</code> digest of the image layer for data validation purposes.</p>
         * <p>When an image is pushed, the CompleteLayerUpload API is called once per each
         * new image layer to verify that the upload has completed.</p>  <p>This
         * operation is used by the Amazon ECR proxy and is not generally used by customers
         * for pulling and pushing images. In most cases, you should use the
         * <code>docker</code> CLI to pull, tag, and push images.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/CompleteLayerUpload">AWS
         * API Reference</a></p>
         */
        virtual Model::CompleteLayerUploadOutcome CompleteLayerUpload(const Model::CompleteLayerUploadRequest& request) const;


        /**
         * <p>Creates a repository in a public registry. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonECR/latest/userguide/Repositories.html">Amazon
         * ECR repositories</a> in the <i>Amazon Elastic Container Registry User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/CreateRepository">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRepositoryOutcome CreateRepository(const Model::CreateRepositoryRequest& request) const;


        /**
         * <p>Deletes a repository in a public registry. If the repository contains images,
         * you must either delete all images in the repository or use the
         * <code>force</code> option which deletes all images on your behalf before
         * deleting the repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/DeleteRepository">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRepositoryOutcome DeleteRepository(const Model::DeleteRepositoryRequest& request) const;


        /**
         * <p>Deletes the repository policy associated with the specified
         * repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/DeleteRepositoryPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRepositoryPolicyOutcome DeleteRepositoryPolicy(const Model::DeleteRepositoryPolicyRequest& request) const;


        /**
         * <p>Returns the image tag details for a repository in a public
         * registry.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/DescribeImageTags">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeImageTagsOutcome DescribeImageTags(const Model::DescribeImageTagsRequest& request) const;


        /**
         * <p>Returns metadata about the images in a repository in a public registry.</p>
         *  <p>Beginning with Docker version 1.9, the Docker client compresses image
         * layers before pushing them to a V2 Docker registry. The output of the
         * <code>docker images</code> command shows the uncompressed image size, so it may
         * return a larger image size than the image sizes returned by
         * <a>DescribeImages</a>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/DescribeImages">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeImagesOutcome DescribeImages(const Model::DescribeImagesRequest& request) const;


        /**
         * <p>Returns details for a public registry.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/DescribeRegistries">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRegistriesOutcome DescribeRegistries(const Model::DescribeRegistriesRequest& request) const;


        /**
         * <p>Describes repositories in a public registry.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/DescribeRepositories">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRepositoriesOutcome DescribeRepositories(const Model::DescribeRepositoriesRequest& request) const;


        /**
         * <p>Retrieves an authorization token. An authorization token represents your IAM
         * authentication credentials and can be used to access any Amazon ECR registry
         * that your IAM principal has access to. The authorization token is valid for 12
         * hours. This API requires the <code>ecr-public:GetAuthorizationToken</code> and
         * <code>sts:GetServiceBearerToken</code> permissions.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/GetAuthorizationToken">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAuthorizationTokenOutcome GetAuthorizationToken(const Model::GetAuthorizationTokenRequest& request) const;


        /**
         * <p>Retrieves catalog metadata for a public registry.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/GetRegistryCatalogData">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRegistryCatalogDataOutcome GetRegistryCatalogData(const Model::GetRegistryCatalogDataRequest& request) const;


        /**
         * <p>Retrieve catalog metadata for a repository in a public registry. This
         * metadata is displayed publicly in the Amazon ECR Public Gallery.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/GetRepositoryCatalogData">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRepositoryCatalogDataOutcome GetRepositoryCatalogData(const Model::GetRepositoryCatalogDataRequest& request) const;


        /**
         * <p>Retrieves the repository policy for the specified repository.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/GetRepositoryPolicy">AWS
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
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/InitiateLayerUpload">AWS
         * API Reference</a></p>
         */
        virtual Model::InitiateLayerUploadOutcome InitiateLayerUpload(const Model::InitiateLayerUploadRequest& request) const;


        /**
         * <p>List the tags for an Amazon ECR Public resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/ListTagsForResource">AWS
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
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/PutImage">AWS
         * API Reference</a></p>
         */
        virtual Model::PutImageOutcome PutImage(const Model::PutImageRequest& request) const;


        /**
         * <p>Create or updates the catalog data for a public registry.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/PutRegistryCatalogData">AWS
         * API Reference</a></p>
         */
        virtual Model::PutRegistryCatalogDataOutcome PutRegistryCatalogData(const Model::PutRegistryCatalogDataRequest& request) const;


        /**
         * <p>Creates or updates the catalog data for a repository in a public
         * registry.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/PutRepositoryCatalogData">AWS
         * API Reference</a></p>
         */
        virtual Model::PutRepositoryCatalogDataOutcome PutRepositoryCatalogData(const Model::PutRepositoryCatalogDataRequest& request) const;


        /**
         * <p>Applies a repository policy to the specified public repository to control
         * access permissions. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonECR/latest/userguide/repository-policies.html">Amazon
         * ECR Repository Policies</a> in the <i>Amazon Elastic Container Registry User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/SetRepositoryPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::SetRepositoryPolicyOutcome SetRepositoryPolicy(const Model::SetRepositoryPolicyRequest& request) const;


        /**
         * <p>Associates the specified tags to a resource with the specified
         * <code>resourceArn</code>. If existing tags on a resource are not specified in
         * the request parameters, they are not changed. When a resource is deleted, the
         * tags associated with that resource are deleted as well.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Deletes specified tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/UntagResource">AWS
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
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/UploadLayerPart">AWS
         * API Reference</a></p>
         */
        virtual Model::UploadLayerPartOutcome UploadLayerPart(const Model::UploadLayerPartRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ECRPublicEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const ECRPublicClientConfiguration& clientConfiguration);

      ECRPublicClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ECRPublicEndpointProviderBase> m_endpointProvider;
  };

} // namespace ECRPublic
} // namespace Aws
