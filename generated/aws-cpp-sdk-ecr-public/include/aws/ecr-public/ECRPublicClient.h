﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr-public/ECRPublic_EXPORTS.h>
#include <aws/ecr-public/ECRPublicErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecr-public/model/BatchCheckLayerAvailabilityResult.h>
#include <aws/ecr-public/model/BatchDeleteImageResult.h>
#include <aws/ecr-public/model/CompleteLayerUploadResult.h>
#include <aws/ecr-public/model/CreateRepositoryResult.h>
#include <aws/ecr-public/model/DeleteRepositoryResult.h>
#include <aws/ecr-public/model/DeleteRepositoryPolicyResult.h>
#include <aws/ecr-public/model/DescribeImageTagsResult.h>
#include <aws/ecr-public/model/DescribeImagesResult.h>
#include <aws/ecr-public/model/DescribeRegistriesResult.h>
#include <aws/ecr-public/model/DescribeRepositoriesResult.h>
#include <aws/ecr-public/model/GetAuthorizationTokenResult.h>
#include <aws/ecr-public/model/GetRegistryCatalogDataResult.h>
#include <aws/ecr-public/model/GetRepositoryCatalogDataResult.h>
#include <aws/ecr-public/model/GetRepositoryPolicyResult.h>
#include <aws/ecr-public/model/InitiateLayerUploadResult.h>
#include <aws/ecr-public/model/ListTagsForResourceResult.h>
#include <aws/ecr-public/model/PutImageResult.h>
#include <aws/ecr-public/model/PutRegistryCatalogDataResult.h>
#include <aws/ecr-public/model/PutRepositoryCatalogDataResult.h>
#include <aws/ecr-public/model/SetRepositoryPolicyResult.h>
#include <aws/ecr-public/model/TagResourceResult.h>
#include <aws/ecr-public/model/UntagResourceResult.h>
#include <aws/ecr-public/model/UploadLayerPartResult.h>
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

namespace ECRPublic
{

namespace Model
{
        class BatchCheckLayerAvailabilityRequest;
        class BatchDeleteImageRequest;
        class CompleteLayerUploadRequest;
        class CreateRepositoryRequest;
        class DeleteRepositoryRequest;
        class DeleteRepositoryPolicyRequest;
        class DescribeImageTagsRequest;
        class DescribeImagesRequest;
        class DescribeRegistriesRequest;
        class DescribeRepositoriesRequest;
        class GetAuthorizationTokenRequest;
        class GetRegistryCatalogDataRequest;
        class GetRepositoryCatalogDataRequest;
        class GetRepositoryPolicyRequest;
        class InitiateLayerUploadRequest;
        class ListTagsForResourceRequest;
        class PutImageRequest;
        class PutRegistryCatalogDataRequest;
        class PutRepositoryCatalogDataRequest;
        class SetRepositoryPolicyRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UploadLayerPartRequest;

        typedef Aws::Utils::Outcome<BatchCheckLayerAvailabilityResult, ECRPublicError> BatchCheckLayerAvailabilityOutcome;
        typedef Aws::Utils::Outcome<BatchDeleteImageResult, ECRPublicError> BatchDeleteImageOutcome;
        typedef Aws::Utils::Outcome<CompleteLayerUploadResult, ECRPublicError> CompleteLayerUploadOutcome;
        typedef Aws::Utils::Outcome<CreateRepositoryResult, ECRPublicError> CreateRepositoryOutcome;
        typedef Aws::Utils::Outcome<DeleteRepositoryResult, ECRPublicError> DeleteRepositoryOutcome;
        typedef Aws::Utils::Outcome<DeleteRepositoryPolicyResult, ECRPublicError> DeleteRepositoryPolicyOutcome;
        typedef Aws::Utils::Outcome<DescribeImageTagsResult, ECRPublicError> DescribeImageTagsOutcome;
        typedef Aws::Utils::Outcome<DescribeImagesResult, ECRPublicError> DescribeImagesOutcome;
        typedef Aws::Utils::Outcome<DescribeRegistriesResult, ECRPublicError> DescribeRegistriesOutcome;
        typedef Aws::Utils::Outcome<DescribeRepositoriesResult, ECRPublicError> DescribeRepositoriesOutcome;
        typedef Aws::Utils::Outcome<GetAuthorizationTokenResult, ECRPublicError> GetAuthorizationTokenOutcome;
        typedef Aws::Utils::Outcome<GetRegistryCatalogDataResult, ECRPublicError> GetRegistryCatalogDataOutcome;
        typedef Aws::Utils::Outcome<GetRepositoryCatalogDataResult, ECRPublicError> GetRepositoryCatalogDataOutcome;
        typedef Aws::Utils::Outcome<GetRepositoryPolicyResult, ECRPublicError> GetRepositoryPolicyOutcome;
        typedef Aws::Utils::Outcome<InitiateLayerUploadResult, ECRPublicError> InitiateLayerUploadOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, ECRPublicError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<PutImageResult, ECRPublicError> PutImageOutcome;
        typedef Aws::Utils::Outcome<PutRegistryCatalogDataResult, ECRPublicError> PutRegistryCatalogDataOutcome;
        typedef Aws::Utils::Outcome<PutRepositoryCatalogDataResult, ECRPublicError> PutRepositoryCatalogDataOutcome;
        typedef Aws::Utils::Outcome<SetRepositoryPolicyResult, ECRPublicError> SetRepositoryPolicyOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, ECRPublicError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, ECRPublicError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UploadLayerPartResult, ECRPublicError> UploadLayerPartOutcome;

        typedef std::future<BatchCheckLayerAvailabilityOutcome> BatchCheckLayerAvailabilityOutcomeCallable;
        typedef std::future<BatchDeleteImageOutcome> BatchDeleteImageOutcomeCallable;
        typedef std::future<CompleteLayerUploadOutcome> CompleteLayerUploadOutcomeCallable;
        typedef std::future<CreateRepositoryOutcome> CreateRepositoryOutcomeCallable;
        typedef std::future<DeleteRepositoryOutcome> DeleteRepositoryOutcomeCallable;
        typedef std::future<DeleteRepositoryPolicyOutcome> DeleteRepositoryPolicyOutcomeCallable;
        typedef std::future<DescribeImageTagsOutcome> DescribeImageTagsOutcomeCallable;
        typedef std::future<DescribeImagesOutcome> DescribeImagesOutcomeCallable;
        typedef std::future<DescribeRegistriesOutcome> DescribeRegistriesOutcomeCallable;
        typedef std::future<DescribeRepositoriesOutcome> DescribeRepositoriesOutcomeCallable;
        typedef std::future<GetAuthorizationTokenOutcome> GetAuthorizationTokenOutcomeCallable;
        typedef std::future<GetRegistryCatalogDataOutcome> GetRegistryCatalogDataOutcomeCallable;
        typedef std::future<GetRepositoryCatalogDataOutcome> GetRepositoryCatalogDataOutcomeCallable;
        typedef std::future<GetRepositoryPolicyOutcome> GetRepositoryPolicyOutcomeCallable;
        typedef std::future<InitiateLayerUploadOutcome> InitiateLayerUploadOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<PutImageOutcome> PutImageOutcomeCallable;
        typedef std::future<PutRegistryCatalogDataOutcome> PutRegistryCatalogDataOutcomeCallable;
        typedef std::future<PutRepositoryCatalogDataOutcome> PutRepositoryCatalogDataOutcomeCallable;
        typedef std::future<SetRepositoryPolicyOutcome> SetRepositoryPolicyOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UploadLayerPartOutcome> UploadLayerPartOutcomeCallable;
} // namespace Model

  class ECRPublicClient;

    typedef std::function<void(const ECRPublicClient*, const Model::BatchCheckLayerAvailabilityRequest&, const Model::BatchCheckLayerAvailabilityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchCheckLayerAvailabilityResponseReceivedHandler;
    typedef std::function<void(const ECRPublicClient*, const Model::BatchDeleteImageRequest&, const Model::BatchDeleteImageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDeleteImageResponseReceivedHandler;
    typedef std::function<void(const ECRPublicClient*, const Model::CompleteLayerUploadRequest&, const Model::CompleteLayerUploadOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CompleteLayerUploadResponseReceivedHandler;
    typedef std::function<void(const ECRPublicClient*, const Model::CreateRepositoryRequest&, const Model::CreateRepositoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRepositoryResponseReceivedHandler;
    typedef std::function<void(const ECRPublicClient*, const Model::DeleteRepositoryRequest&, const Model::DeleteRepositoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRepositoryResponseReceivedHandler;
    typedef std::function<void(const ECRPublicClient*, const Model::DeleteRepositoryPolicyRequest&, const Model::DeleteRepositoryPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRepositoryPolicyResponseReceivedHandler;
    typedef std::function<void(const ECRPublicClient*, const Model::DescribeImageTagsRequest&, const Model::DescribeImageTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeImageTagsResponseReceivedHandler;
    typedef std::function<void(const ECRPublicClient*, const Model::DescribeImagesRequest&, const Model::DescribeImagesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeImagesResponseReceivedHandler;
    typedef std::function<void(const ECRPublicClient*, const Model::DescribeRegistriesRequest&, const Model::DescribeRegistriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRegistriesResponseReceivedHandler;
    typedef std::function<void(const ECRPublicClient*, const Model::DescribeRepositoriesRequest&, const Model::DescribeRepositoriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRepositoriesResponseReceivedHandler;
    typedef std::function<void(const ECRPublicClient*, const Model::GetAuthorizationTokenRequest&, const Model::GetAuthorizationTokenOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAuthorizationTokenResponseReceivedHandler;
    typedef std::function<void(const ECRPublicClient*, const Model::GetRegistryCatalogDataRequest&, const Model::GetRegistryCatalogDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRegistryCatalogDataResponseReceivedHandler;
    typedef std::function<void(const ECRPublicClient*, const Model::GetRepositoryCatalogDataRequest&, const Model::GetRepositoryCatalogDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRepositoryCatalogDataResponseReceivedHandler;
    typedef std::function<void(const ECRPublicClient*, const Model::GetRepositoryPolicyRequest&, const Model::GetRepositoryPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRepositoryPolicyResponseReceivedHandler;
    typedef std::function<void(const ECRPublicClient*, const Model::InitiateLayerUploadRequest&, const Model::InitiateLayerUploadOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > InitiateLayerUploadResponseReceivedHandler;
    typedef std::function<void(const ECRPublicClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const ECRPublicClient*, const Model::PutImageRequest&, const Model::PutImageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutImageResponseReceivedHandler;
    typedef std::function<void(const ECRPublicClient*, const Model::PutRegistryCatalogDataRequest&, const Model::PutRegistryCatalogDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutRegistryCatalogDataResponseReceivedHandler;
    typedef std::function<void(const ECRPublicClient*, const Model::PutRepositoryCatalogDataRequest&, const Model::PutRepositoryCatalogDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutRepositoryCatalogDataResponseReceivedHandler;
    typedef std::function<void(const ECRPublicClient*, const Model::SetRepositoryPolicyRequest&, const Model::SetRepositoryPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetRepositoryPolicyResponseReceivedHandler;
    typedef std::function<void(const ECRPublicClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const ECRPublicClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const ECRPublicClient*, const Model::UploadLayerPartRequest&, const Model::UploadLayerPartOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UploadLayerPartResponseReceivedHandler;

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

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ECRPublicClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ECRPublicClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ECRPublicClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~ECRPublicClient();


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
         * <p>Checks the availability of one or more image layers within a repository in a
         * public registry. When an image is pushed to a repository, each image layer is
         * checked to verify if it has been uploaded before. If it has been uploaded, then
         * the image layer is skipped.</p>  <p>This operation is used by the Amazon
         * ECR proxy and is not generally used by customers for pulling and pushing images.
         * In most cases, you should use the <code>docker</code> CLI to pull, tag, and push
         * images.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/BatchCheckLayerAvailability">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchCheckLayerAvailabilityOutcomeCallable BatchCheckLayerAvailabilityCallable(const Model::BatchCheckLayerAvailabilityRequest& request) const;

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
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchCheckLayerAvailabilityAsync(const Model::BatchCheckLayerAvailabilityRequest& request, const BatchCheckLayerAvailabilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Deletes a list of specified images within a repository in a public registry.
         * Images are specified with either an <code>imageTag</code> or
         * <code>imageDigest</code>.</p> <p>You can remove a tag from an image by
         * specifying the image's tag in your request. When you remove the last tag from an
         * image, the image is deleted from your repository.</p> <p>You can completely
         * delete an image (and all of its tags) by specifying the image's digest in your
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/BatchDeleteImage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchDeleteImageOutcomeCallable BatchDeleteImageCallable(const Model::BatchDeleteImageRequest& request) const;

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
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchDeleteImageAsync(const Model::BatchDeleteImageRequest& request, const BatchDeleteImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CompleteLayerUploadOutcomeCallable CompleteLayerUploadCallable(const Model::CompleteLayerUploadRequest& request) const;

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
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CompleteLayerUploadAsync(const Model::CompleteLayerUploadRequest& request, const CompleteLayerUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Creates a repository in a public registry. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonECR/latest/userguide/Repositories.html">Amazon
         * ECR repositories</a> in the <i>Amazon Elastic Container Registry User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/CreateRepository">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRepositoryOutcomeCallable CreateRepositoryCallable(const Model::CreateRepositoryRequest& request) const;

        /**
         * <p>Creates a repository in a public registry. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonECR/latest/userguide/Repositories.html">Amazon
         * ECR repositories</a> in the <i>Amazon Elastic Container Registry User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/CreateRepository">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRepositoryAsync(const Model::CreateRepositoryRequest& request, const CreateRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Deletes a repository in a public registry. If the repository contains images,
         * you must either delete all images in the repository or use the
         * <code>force</code> option which deletes all images on your behalf before
         * deleting the repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/DeleteRepository">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRepositoryOutcomeCallable DeleteRepositoryCallable(const Model::DeleteRepositoryRequest& request) const;

        /**
         * <p>Deletes a repository in a public registry. If the repository contains images,
         * you must either delete all images in the repository or use the
         * <code>force</code> option which deletes all images on your behalf before
         * deleting the repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/DeleteRepository">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRepositoryAsync(const Model::DeleteRepositoryRequest& request, const DeleteRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the repository policy associated with the specified
         * repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/DeleteRepositoryPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRepositoryPolicyOutcome DeleteRepositoryPolicy(const Model::DeleteRepositoryPolicyRequest& request) const;

        /**
         * <p>Deletes the repository policy associated with the specified
         * repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/DeleteRepositoryPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRepositoryPolicyOutcomeCallable DeleteRepositoryPolicyCallable(const Model::DeleteRepositoryPolicyRequest& request) const;

        /**
         * <p>Deletes the repository policy associated with the specified
         * repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/DeleteRepositoryPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRepositoryPolicyAsync(const Model::DeleteRepositoryPolicyRequest& request, const DeleteRepositoryPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the image tag details for a repository in a public
         * registry.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/DescribeImageTags">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeImageTagsOutcome DescribeImageTags(const Model::DescribeImageTagsRequest& request) const;

        /**
         * <p>Returns the image tag details for a repository in a public
         * registry.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/DescribeImageTags">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeImageTagsOutcomeCallable DescribeImageTagsCallable(const Model::DescribeImageTagsRequest& request) const;

        /**
         * <p>Returns the image tag details for a repository in a public
         * registry.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/DescribeImageTags">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeImageTagsAsync(const Model::DescribeImageTagsRequest& request, const DescribeImageTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Returns metadata about the images in a repository in a public registry.</p>
         *  <p>Beginning with Docker version 1.9, the Docker client compresses image
         * layers before pushing them to a V2 Docker registry. The output of the
         * <code>docker images</code> command shows the uncompressed image size, so it may
         * return a larger image size than the image sizes returned by
         * <a>DescribeImages</a>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/DescribeImages">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeImagesOutcomeCallable DescribeImagesCallable(const Model::DescribeImagesRequest& request) const;

        /**
         * <p>Returns metadata about the images in a repository in a public registry.</p>
         *  <p>Beginning with Docker version 1.9, the Docker client compresses image
         * layers before pushing them to a V2 Docker registry. The output of the
         * <code>docker images</code> command shows the uncompressed image size, so it may
         * return a larger image size than the image sizes returned by
         * <a>DescribeImages</a>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/DescribeImages">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeImagesAsync(const Model::DescribeImagesRequest& request, const DescribeImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns details for a public registry.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/DescribeRegistries">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRegistriesOutcome DescribeRegistries(const Model::DescribeRegistriesRequest& request) const;

        /**
         * <p>Returns details for a public registry.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/DescribeRegistries">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRegistriesOutcomeCallable DescribeRegistriesCallable(const Model::DescribeRegistriesRequest& request) const;

        /**
         * <p>Returns details for a public registry.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/DescribeRegistries">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRegistriesAsync(const Model::DescribeRegistriesRequest& request, const DescribeRegistriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes repositories in a public registry.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/DescribeRepositories">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRepositoriesOutcome DescribeRepositories(const Model::DescribeRepositoriesRequest& request) const;

        /**
         * <p>Describes repositories in a public registry.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/DescribeRepositories">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRepositoriesOutcomeCallable DescribeRepositoriesCallable(const Model::DescribeRepositoriesRequest& request) const;

        /**
         * <p>Describes repositories in a public registry.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/DescribeRepositories">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRepositoriesAsync(const Model::DescribeRepositoriesRequest& request, const DescribeRepositoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Retrieves an authorization token. An authorization token represents your IAM
         * authentication credentials and can be used to access any Amazon ECR registry
         * that your IAM principal has access to. The authorization token is valid for 12
         * hours. This API requires the <code>ecr-public:GetAuthorizationToken</code> and
         * <code>sts:GetServiceBearerToken</code> permissions.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/GetAuthorizationToken">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAuthorizationTokenOutcomeCallable GetAuthorizationTokenCallable(const Model::GetAuthorizationTokenRequest& request) const;

        /**
         * <p>Retrieves an authorization token. An authorization token represents your IAM
         * authentication credentials and can be used to access any Amazon ECR registry
         * that your IAM principal has access to. The authorization token is valid for 12
         * hours. This API requires the <code>ecr-public:GetAuthorizationToken</code> and
         * <code>sts:GetServiceBearerToken</code> permissions.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/GetAuthorizationToken">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAuthorizationTokenAsync(const Model::GetAuthorizationTokenRequest& request, const GetAuthorizationTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves catalog metadata for a public registry.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/GetRegistryCatalogData">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRegistryCatalogDataOutcome GetRegistryCatalogData(const Model::GetRegistryCatalogDataRequest& request) const;

        /**
         * <p>Retrieves catalog metadata for a public registry.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/GetRegistryCatalogData">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRegistryCatalogDataOutcomeCallable GetRegistryCatalogDataCallable(const Model::GetRegistryCatalogDataRequest& request) const;

        /**
         * <p>Retrieves catalog metadata for a public registry.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/GetRegistryCatalogData">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRegistryCatalogDataAsync(const Model::GetRegistryCatalogDataRequest& request, const GetRegistryCatalogDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieve catalog metadata for a repository in a public registry. This
         * metadata is displayed publicly in the Amazon ECR Public Gallery.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/GetRepositoryCatalogData">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRepositoryCatalogDataOutcome GetRepositoryCatalogData(const Model::GetRepositoryCatalogDataRequest& request) const;

        /**
         * <p>Retrieve catalog metadata for a repository in a public registry. This
         * metadata is displayed publicly in the Amazon ECR Public Gallery.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/GetRepositoryCatalogData">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRepositoryCatalogDataOutcomeCallable GetRepositoryCatalogDataCallable(const Model::GetRepositoryCatalogDataRequest& request) const;

        /**
         * <p>Retrieve catalog metadata for a repository in a public registry. This
         * metadata is displayed publicly in the Amazon ECR Public Gallery.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/GetRepositoryCatalogData">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRepositoryCatalogDataAsync(const Model::GetRepositoryCatalogDataRequest& request, const GetRepositoryCatalogDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the repository policy for the specified repository.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/GetRepositoryPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRepositoryPolicyOutcome GetRepositoryPolicy(const Model::GetRepositoryPolicyRequest& request) const;

        /**
         * <p>Retrieves the repository policy for the specified repository.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/GetRepositoryPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRepositoryPolicyOutcomeCallable GetRepositoryPolicyCallable(const Model::GetRepositoryPolicyRequest& request) const;

        /**
         * <p>Retrieves the repository policy for the specified repository.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/GetRepositoryPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRepositoryPolicyAsync(const Model::GetRepositoryPolicyRequest& request, const GetRepositoryPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::InitiateLayerUploadOutcomeCallable InitiateLayerUploadCallable(const Model::InitiateLayerUploadRequest& request) const;

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
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void InitiateLayerUploadAsync(const Model::InitiateLayerUploadRequest& request, const InitiateLayerUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the tags for an Amazon ECR Public resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>List the tags for an Amazon ECR Public resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>List the tags for an Amazon ECR Public resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Creates or updates the image manifest and tags associated with an image.</p>
         * <p>When an image is pushed and all new image layers have been uploaded, the
         * PutImage API is called once to create or update the image manifest and the tags
         * associated with the image.</p>  <p>This operation is used by the Amazon
         * ECR proxy and is not generally used by customers for pulling and pushing images.
         * In most cases, you should use the <code>docker</code> CLI to pull, tag, and push
         * images.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/PutImage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutImageOutcomeCallable PutImageCallable(const Model::PutImageRequest& request) const;

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
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutImageAsync(const Model::PutImageRequest& request, const PutImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create or updates the catalog data for a public registry.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/PutRegistryCatalogData">AWS
         * API Reference</a></p>
         */
        virtual Model::PutRegistryCatalogDataOutcome PutRegistryCatalogData(const Model::PutRegistryCatalogDataRequest& request) const;

        /**
         * <p>Create or updates the catalog data for a public registry.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/PutRegistryCatalogData">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutRegistryCatalogDataOutcomeCallable PutRegistryCatalogDataCallable(const Model::PutRegistryCatalogDataRequest& request) const;

        /**
         * <p>Create or updates the catalog data for a public registry.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/PutRegistryCatalogData">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutRegistryCatalogDataAsync(const Model::PutRegistryCatalogDataRequest& request, const PutRegistryCatalogDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates or updates the catalog data for a repository in a public
         * registry.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/PutRepositoryCatalogData">AWS
         * API Reference</a></p>
         */
        virtual Model::PutRepositoryCatalogDataOutcome PutRepositoryCatalogData(const Model::PutRepositoryCatalogDataRequest& request) const;

        /**
         * <p>Creates or updates the catalog data for a repository in a public
         * registry.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/PutRepositoryCatalogData">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutRepositoryCatalogDataOutcomeCallable PutRepositoryCatalogDataCallable(const Model::PutRepositoryCatalogDataRequest& request) const;

        /**
         * <p>Creates or updates the catalog data for a repository in a public
         * registry.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/PutRepositoryCatalogData">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutRepositoryCatalogDataAsync(const Model::PutRepositoryCatalogDataRequest& request, const PutRepositoryCatalogDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Applies a repository policy to the specified public repository to control
         * access permissions. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonECR/latest/userguide/repository-policies.html">Amazon
         * ECR Repository Policies</a> in the <i>Amazon Elastic Container Registry User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/SetRepositoryPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetRepositoryPolicyOutcomeCallable SetRepositoryPolicyCallable(const Model::SetRepositoryPolicyRequest& request) const;

        /**
         * <p>Applies a repository policy to the specified public repository to control
         * access permissions. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonECR/latest/userguide/repository-policies.html">Amazon
         * ECR Repository Policies</a> in the <i>Amazon Elastic Container Registry User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/SetRepositoryPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetRepositoryPolicyAsync(const Model::SetRepositoryPolicyRequest& request, const SetRepositoryPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Associates the specified tags to a resource with the specified
         * <code>resourceArn</code>. If existing tags on a resource are not specified in
         * the request parameters, they are not changed. When a resource is deleted, the
         * tags associated with that resource are deleted as well.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Associates the specified tags to a resource with the specified
         * <code>resourceArn</code>. If existing tags on a resource are not specified in
         * the request parameters, they are not changed. When a resource is deleted, the
         * tags associated with that resource are deleted as well.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes specified tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Deletes specified tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Deletes specified tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UploadLayerPartOutcomeCallable UploadLayerPartCallable(const Model::UploadLayerPartRequest& request) const;

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
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UploadLayerPartAsync(const Model::UploadLayerPartRequest& request, const UploadLayerPartResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void BatchCheckLayerAvailabilityAsyncHelper(const Model::BatchCheckLayerAvailabilityRequest& request, const BatchCheckLayerAvailabilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchDeleteImageAsyncHelper(const Model::BatchDeleteImageRequest& request, const BatchDeleteImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CompleteLayerUploadAsyncHelper(const Model::CompleteLayerUploadRequest& request, const CompleteLayerUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateRepositoryAsyncHelper(const Model::CreateRepositoryRequest& request, const CreateRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRepositoryAsyncHelper(const Model::DeleteRepositoryRequest& request, const DeleteRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRepositoryPolicyAsyncHelper(const Model::DeleteRepositoryPolicyRequest& request, const DeleteRepositoryPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeImageTagsAsyncHelper(const Model::DescribeImageTagsRequest& request, const DescribeImageTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeImagesAsyncHelper(const Model::DescribeImagesRequest& request, const DescribeImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeRegistriesAsyncHelper(const Model::DescribeRegistriesRequest& request, const DescribeRegistriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeRepositoriesAsyncHelper(const Model::DescribeRepositoriesRequest& request, const DescribeRepositoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAuthorizationTokenAsyncHelper(const Model::GetAuthorizationTokenRequest& request, const GetAuthorizationTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRegistryCatalogDataAsyncHelper(const Model::GetRegistryCatalogDataRequest& request, const GetRegistryCatalogDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRepositoryCatalogDataAsyncHelper(const Model::GetRepositoryCatalogDataRequest& request, const GetRepositoryCatalogDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRepositoryPolicyAsyncHelper(const Model::GetRepositoryPolicyRequest& request, const GetRepositoryPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void InitiateLayerUploadAsyncHelper(const Model::InitiateLayerUploadRequest& request, const InitiateLayerUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutImageAsyncHelper(const Model::PutImageRequest& request, const PutImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutRegistryCatalogDataAsyncHelper(const Model::PutRegistryCatalogDataRequest& request, const PutRegistryCatalogDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutRepositoryCatalogDataAsyncHelper(const Model::PutRepositoryCatalogDataRequest& request, const PutRepositoryCatalogDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetRepositoryPolicyAsyncHelper(const Model::SetRepositoryPolicyRequest& request, const SetRepositoryPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UploadLayerPartAsyncHelper(const Model::UploadLayerPartRequest& request, const UploadLayerPartResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace ECRPublic
} // namespace Aws
