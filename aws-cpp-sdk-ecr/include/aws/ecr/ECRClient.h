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
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/ecr/ECRErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecr/model/BatchCheckLayerAvailabilityResult.h>
#include <aws/ecr/model/BatchDeleteImageResult.h>
#include <aws/ecr/model/BatchGetImageResult.h>
#include <aws/ecr/model/CompleteLayerUploadResult.h>
#include <aws/ecr/model/CreateRepositoryResult.h>
#include <aws/ecr/model/DeleteLifecyclePolicyResult.h>
#include <aws/ecr/model/DeleteRepositoryResult.h>
#include <aws/ecr/model/DeleteRepositoryPolicyResult.h>
#include <aws/ecr/model/DescribeImagesResult.h>
#include <aws/ecr/model/DescribeRepositoriesResult.h>
#include <aws/ecr/model/GetAuthorizationTokenResult.h>
#include <aws/ecr/model/GetDownloadUrlForLayerResult.h>
#include <aws/ecr/model/GetLifecyclePolicyResult.h>
#include <aws/ecr/model/GetLifecyclePolicyPreviewResult.h>
#include <aws/ecr/model/GetRepositoryPolicyResult.h>
#include <aws/ecr/model/InitiateLayerUploadResult.h>
#include <aws/ecr/model/ListImagesResult.h>
#include <aws/ecr/model/ListTagsForResourceResult.h>
#include <aws/ecr/model/PutImageResult.h>
#include <aws/ecr/model/PutLifecyclePolicyResult.h>
#include <aws/ecr/model/SetRepositoryPolicyResult.h>
#include <aws/ecr/model/StartLifecyclePolicyPreviewResult.h>
#include <aws/ecr/model/TagResourceResult.h>
#include <aws/ecr/model/UntagResourceResult.h>
#include <aws/ecr/model/UploadLayerPartResult.h>
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

namespace ECR
{

namespace Model
{
        class BatchCheckLayerAvailabilityRequest;
        class BatchDeleteImageRequest;
        class BatchGetImageRequest;
        class CompleteLayerUploadRequest;
        class CreateRepositoryRequest;
        class DeleteLifecyclePolicyRequest;
        class DeleteRepositoryRequest;
        class DeleteRepositoryPolicyRequest;
        class DescribeImagesRequest;
        class DescribeRepositoriesRequest;
        class GetAuthorizationTokenRequest;
        class GetDownloadUrlForLayerRequest;
        class GetLifecyclePolicyRequest;
        class GetLifecyclePolicyPreviewRequest;
        class GetRepositoryPolicyRequest;
        class InitiateLayerUploadRequest;
        class ListImagesRequest;
        class ListTagsForResourceRequest;
        class PutImageRequest;
        class PutLifecyclePolicyRequest;
        class SetRepositoryPolicyRequest;
        class StartLifecyclePolicyPreviewRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UploadLayerPartRequest;

        typedef Aws::Utils::Outcome<BatchCheckLayerAvailabilityResult, Aws::Client::AWSError<ECRErrors>> BatchCheckLayerAvailabilityOutcome;
        typedef Aws::Utils::Outcome<BatchDeleteImageResult, Aws::Client::AWSError<ECRErrors>> BatchDeleteImageOutcome;
        typedef Aws::Utils::Outcome<BatchGetImageResult, Aws::Client::AWSError<ECRErrors>> BatchGetImageOutcome;
        typedef Aws::Utils::Outcome<CompleteLayerUploadResult, Aws::Client::AWSError<ECRErrors>> CompleteLayerUploadOutcome;
        typedef Aws::Utils::Outcome<CreateRepositoryResult, Aws::Client::AWSError<ECRErrors>> CreateRepositoryOutcome;
        typedef Aws::Utils::Outcome<DeleteLifecyclePolicyResult, Aws::Client::AWSError<ECRErrors>> DeleteLifecyclePolicyOutcome;
        typedef Aws::Utils::Outcome<DeleteRepositoryResult, Aws::Client::AWSError<ECRErrors>> DeleteRepositoryOutcome;
        typedef Aws::Utils::Outcome<DeleteRepositoryPolicyResult, Aws::Client::AWSError<ECRErrors>> DeleteRepositoryPolicyOutcome;
        typedef Aws::Utils::Outcome<DescribeImagesResult, Aws::Client::AWSError<ECRErrors>> DescribeImagesOutcome;
        typedef Aws::Utils::Outcome<DescribeRepositoriesResult, Aws::Client::AWSError<ECRErrors>> DescribeRepositoriesOutcome;
        typedef Aws::Utils::Outcome<GetAuthorizationTokenResult, Aws::Client::AWSError<ECRErrors>> GetAuthorizationTokenOutcome;
        typedef Aws::Utils::Outcome<GetDownloadUrlForLayerResult, Aws::Client::AWSError<ECRErrors>> GetDownloadUrlForLayerOutcome;
        typedef Aws::Utils::Outcome<GetLifecyclePolicyResult, Aws::Client::AWSError<ECRErrors>> GetLifecyclePolicyOutcome;
        typedef Aws::Utils::Outcome<GetLifecyclePolicyPreviewResult, Aws::Client::AWSError<ECRErrors>> GetLifecyclePolicyPreviewOutcome;
        typedef Aws::Utils::Outcome<GetRepositoryPolicyResult, Aws::Client::AWSError<ECRErrors>> GetRepositoryPolicyOutcome;
        typedef Aws::Utils::Outcome<InitiateLayerUploadResult, Aws::Client::AWSError<ECRErrors>> InitiateLayerUploadOutcome;
        typedef Aws::Utils::Outcome<ListImagesResult, Aws::Client::AWSError<ECRErrors>> ListImagesOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, Aws::Client::AWSError<ECRErrors>> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<PutImageResult, Aws::Client::AWSError<ECRErrors>> PutImageOutcome;
        typedef Aws::Utils::Outcome<PutLifecyclePolicyResult, Aws::Client::AWSError<ECRErrors>> PutLifecyclePolicyOutcome;
        typedef Aws::Utils::Outcome<SetRepositoryPolicyResult, Aws::Client::AWSError<ECRErrors>> SetRepositoryPolicyOutcome;
        typedef Aws::Utils::Outcome<StartLifecyclePolicyPreviewResult, Aws::Client::AWSError<ECRErrors>> StartLifecyclePolicyPreviewOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, Aws::Client::AWSError<ECRErrors>> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, Aws::Client::AWSError<ECRErrors>> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UploadLayerPartResult, Aws::Client::AWSError<ECRErrors>> UploadLayerPartOutcome;

        typedef std::future<BatchCheckLayerAvailabilityOutcome> BatchCheckLayerAvailabilityOutcomeCallable;
        typedef std::future<BatchDeleteImageOutcome> BatchDeleteImageOutcomeCallable;
        typedef std::future<BatchGetImageOutcome> BatchGetImageOutcomeCallable;
        typedef std::future<CompleteLayerUploadOutcome> CompleteLayerUploadOutcomeCallable;
        typedef std::future<CreateRepositoryOutcome> CreateRepositoryOutcomeCallable;
        typedef std::future<DeleteLifecyclePolicyOutcome> DeleteLifecyclePolicyOutcomeCallable;
        typedef std::future<DeleteRepositoryOutcome> DeleteRepositoryOutcomeCallable;
        typedef std::future<DeleteRepositoryPolicyOutcome> DeleteRepositoryPolicyOutcomeCallable;
        typedef std::future<DescribeImagesOutcome> DescribeImagesOutcomeCallable;
        typedef std::future<DescribeRepositoriesOutcome> DescribeRepositoriesOutcomeCallable;
        typedef std::future<GetAuthorizationTokenOutcome> GetAuthorizationTokenOutcomeCallable;
        typedef std::future<GetDownloadUrlForLayerOutcome> GetDownloadUrlForLayerOutcomeCallable;
        typedef std::future<GetLifecyclePolicyOutcome> GetLifecyclePolicyOutcomeCallable;
        typedef std::future<GetLifecyclePolicyPreviewOutcome> GetLifecyclePolicyPreviewOutcomeCallable;
        typedef std::future<GetRepositoryPolicyOutcome> GetRepositoryPolicyOutcomeCallable;
        typedef std::future<InitiateLayerUploadOutcome> InitiateLayerUploadOutcomeCallable;
        typedef std::future<ListImagesOutcome> ListImagesOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<PutImageOutcome> PutImageOutcomeCallable;
        typedef std::future<PutLifecyclePolicyOutcome> PutLifecyclePolicyOutcomeCallable;
        typedef std::future<SetRepositoryPolicyOutcome> SetRepositoryPolicyOutcomeCallable;
        typedef std::future<StartLifecyclePolicyPreviewOutcome> StartLifecyclePolicyPreviewOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UploadLayerPartOutcome> UploadLayerPartOutcomeCallable;
} // namespace Model

  class ECRClient;

    typedef std::function<void(const ECRClient*, const Model::BatchCheckLayerAvailabilityRequest&, const Model::BatchCheckLayerAvailabilityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchCheckLayerAvailabilityResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::BatchDeleteImageRequest&, const Model::BatchDeleteImageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDeleteImageResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::BatchGetImageRequest&, const Model::BatchGetImageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetImageResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::CompleteLayerUploadRequest&, const Model::CompleteLayerUploadOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CompleteLayerUploadResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::CreateRepositoryRequest&, const Model::CreateRepositoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRepositoryResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::DeleteLifecyclePolicyRequest&, const Model::DeleteLifecyclePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLifecyclePolicyResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::DeleteRepositoryRequest&, const Model::DeleteRepositoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRepositoryResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::DeleteRepositoryPolicyRequest&, const Model::DeleteRepositoryPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRepositoryPolicyResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::DescribeImagesRequest&, const Model::DescribeImagesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeImagesResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::DescribeRepositoriesRequest&, const Model::DescribeRepositoriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRepositoriesResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::GetAuthorizationTokenRequest&, const Model::GetAuthorizationTokenOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAuthorizationTokenResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::GetDownloadUrlForLayerRequest&, const Model::GetDownloadUrlForLayerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDownloadUrlForLayerResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::GetLifecyclePolicyRequest&, const Model::GetLifecyclePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLifecyclePolicyResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::GetLifecyclePolicyPreviewRequest&, const Model::GetLifecyclePolicyPreviewOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLifecyclePolicyPreviewResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::GetRepositoryPolicyRequest&, const Model::GetRepositoryPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRepositoryPolicyResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::InitiateLayerUploadRequest&, const Model::InitiateLayerUploadOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > InitiateLayerUploadResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::ListImagesRequest&, const Model::ListImagesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListImagesResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::PutImageRequest&, const Model::PutImageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutImageResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::PutLifecyclePolicyRequest&, const Model::PutLifecyclePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutLifecyclePolicyResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::SetRepositoryPolicyRequest&, const Model::SetRepositoryPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetRepositoryPolicyResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::StartLifecyclePolicyPreviewRequest&, const Model::StartLifecyclePolicyPreviewOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartLifecyclePolicyPreviewResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::UploadLayerPartRequest&, const Model::UploadLayerPartOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UploadLayerPartResponseReceivedHandler;

  /**
   * <p>Amazon Elastic Container Registry (Amazon ECR) is a managed Docker registry
   * service. Customers can use the familiar Docker CLI to push, pull, and manage
   * images. Amazon ECR provides a secure, scalable, and reliable registry. Amazon
   * ECR supports private Docker repositories with resource-based permissions using
   * IAM so that specific users or Amazon EC2 instances can access repositories and
   * images. Developers can use the Docker CLI to author and manage images.</p>
   */
  class AWS_ECR_API ECRClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ECRClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ECRClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ECRClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~ECRClient();

        inline virtual const char* GetServiceClientName() const override { return "ECR"; }


        /**
         * <p>Check the availability of multiple image layers in a specified registry and
         * repository.</p> <note> <p>This operation is used by the Amazon ECR proxy, and it
         * is not intended for general use by customers for pulling and pushing images. In
         * most cases, you should use the <code>docker</code> CLI to pull, tag, and push
         * images.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/BatchCheckLayerAvailability">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchCheckLayerAvailabilityOutcome BatchCheckLayerAvailability(const Model::BatchCheckLayerAvailabilityRequest& request) const;

        /**
         * <p>Check the availability of multiple image layers in a specified registry and
         * repository.</p> <note> <p>This operation is used by the Amazon ECR proxy, and it
         * is not intended for general use by customers for pulling and pushing images. In
         * most cases, you should use the <code>docker</code> CLI to pull, tag, and push
         * images.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/BatchCheckLayerAvailability">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchCheckLayerAvailabilityOutcomeCallable BatchCheckLayerAvailabilityCallable(const Model::BatchCheckLayerAvailabilityRequest& request) const;

        /**
         * <p>Check the availability of multiple image layers in a specified registry and
         * repository.</p> <note> <p>This operation is used by the Amazon ECR proxy, and it
         * is not intended for general use by customers for pulling and pushing images. In
         * most cases, you should use the <code>docker</code> CLI to pull, tag, and push
         * images.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/BatchCheckLayerAvailability">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchCheckLayerAvailabilityAsync(const Model::BatchCheckLayerAvailabilityRequest& request, const BatchCheckLayerAvailabilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a list of specified images within a specified repository. Images are
         * specified with either <code>imageTag</code> or <code>imageDigest</code>.</p>
         * <p>You can remove a tag from an image by specifying the image's tag in your
         * request. When you remove the last tag from an image, the image is deleted from
         * your repository.</p> <p>You can completely delete an image (and all of its tags)
         * by specifying the image's digest in your request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/BatchDeleteImage">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDeleteImageOutcome BatchDeleteImage(const Model::BatchDeleteImageRequest& request) const;

        /**
         * <p>Deletes a list of specified images within a specified repository. Images are
         * specified with either <code>imageTag</code> or <code>imageDigest</code>.</p>
         * <p>You can remove a tag from an image by specifying the image's tag in your
         * request. When you remove the last tag from an image, the image is deleted from
         * your repository.</p> <p>You can completely delete an image (and all of its tags)
         * by specifying the image's digest in your request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/BatchDeleteImage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchDeleteImageOutcomeCallable BatchDeleteImageCallable(const Model::BatchDeleteImageRequest& request) const;

        /**
         * <p>Deletes a list of specified images within a specified repository. Images are
         * specified with either <code>imageTag</code> or <code>imageDigest</code>.</p>
         * <p>You can remove a tag from an image by specifying the image's tag in your
         * request. When you remove the last tag from an image, the image is deleted from
         * your repository.</p> <p>You can completely delete an image (and all of its tags)
         * by specifying the image's digest in your request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/BatchDeleteImage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchDeleteImageAsync(const Model::BatchDeleteImageRequest& request, const BatchDeleteImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets detailed information for specified images within a specified repository.
         * Images are specified with either <code>imageTag</code> or
         * <code>imageDigest</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/BatchGetImage">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetImageOutcome BatchGetImage(const Model::BatchGetImageRequest& request) const;

        /**
         * <p>Gets detailed information for specified images within a specified repository.
         * Images are specified with either <code>imageTag</code> or
         * <code>imageDigest</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/BatchGetImage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetImageOutcomeCallable BatchGetImageCallable(const Model::BatchGetImageRequest& request) const;

        /**
         * <p>Gets detailed information for specified images within a specified repository.
         * Images are specified with either <code>imageTag</code> or
         * <code>imageDigest</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/BatchGetImage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetImageAsync(const Model::BatchGetImageRequest& request, const BatchGetImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Informs Amazon ECR that the image layer upload has completed for a specified
         * registry, repository name, and upload ID. You can optionally provide a
         * <code>sha256</code> digest of the image layer for data validation purposes.</p>
         * <note> <p>This operation is used by the Amazon ECR proxy, and it is not intended
         * for general use by customers for pulling and pushing images. In most cases, you
         * should use the <code>docker</code> CLI to pull, tag, and push images.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/CompleteLayerUpload">AWS
         * API Reference</a></p>
         */
        virtual Model::CompleteLayerUploadOutcome CompleteLayerUpload(const Model::CompleteLayerUploadRequest& request) const;

        /**
         * <p>Informs Amazon ECR that the image layer upload has completed for a specified
         * registry, repository name, and upload ID. You can optionally provide a
         * <code>sha256</code> digest of the image layer for data validation purposes.</p>
         * <note> <p>This operation is used by the Amazon ECR proxy, and it is not intended
         * for general use by customers for pulling and pushing images. In most cases, you
         * should use the <code>docker</code> CLI to pull, tag, and push images.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/CompleteLayerUpload">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CompleteLayerUploadOutcomeCallable CompleteLayerUploadCallable(const Model::CompleteLayerUploadRequest& request) const;

        /**
         * <p>Informs Amazon ECR that the image layer upload has completed for a specified
         * registry, repository name, and upload ID. You can optionally provide a
         * <code>sha256</code> digest of the image layer for data validation purposes.</p>
         * <note> <p>This operation is used by the Amazon ECR proxy, and it is not intended
         * for general use by customers for pulling and pushing images. In most cases, you
         * should use the <code>docker</code> CLI to pull, tag, and push images.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/CompleteLayerUpload">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CompleteLayerUploadAsync(const Model::CompleteLayerUploadRequest& request, const CompleteLayerUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an image repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/CreateRepository">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRepositoryOutcome CreateRepository(const Model::CreateRepositoryRequest& request) const;

        /**
         * <p>Creates an image repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/CreateRepository">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRepositoryOutcomeCallable CreateRepositoryCallable(const Model::CreateRepositoryRequest& request) const;

        /**
         * <p>Creates an image repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/CreateRepository">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRepositoryAsync(const Model::CreateRepositoryRequest& request, const CreateRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified lifecycle policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/DeleteLifecyclePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLifecyclePolicyOutcome DeleteLifecyclePolicy(const Model::DeleteLifecyclePolicyRequest& request) const;

        /**
         * <p>Deletes the specified lifecycle policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/DeleteLifecyclePolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteLifecyclePolicyOutcomeCallable DeleteLifecyclePolicyCallable(const Model::DeleteLifecyclePolicyRequest& request) const;

        /**
         * <p>Deletes the specified lifecycle policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/DeleteLifecyclePolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteLifecyclePolicyAsync(const Model::DeleteLifecyclePolicyRequest& request, const DeleteLifecyclePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an existing image repository. If a repository contains images, you
         * must use the <code>force</code> option to delete it.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/DeleteRepository">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRepositoryOutcome DeleteRepository(const Model::DeleteRepositoryRequest& request) const;

        /**
         * <p>Deletes an existing image repository. If a repository contains images, you
         * must use the <code>force</code> option to delete it.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/DeleteRepository">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRepositoryOutcomeCallable DeleteRepositoryCallable(const Model::DeleteRepositoryRequest& request) const;

        /**
         * <p>Deletes an existing image repository. If a repository contains images, you
         * must use the <code>force</code> option to delete it.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/DeleteRepository">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRepositoryAsync(const Model::DeleteRepositoryRequest& request, const DeleteRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the repository policy from a specified repository.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/DeleteRepositoryPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRepositoryPolicyOutcome DeleteRepositoryPolicy(const Model::DeleteRepositoryPolicyRequest& request) const;

        /**
         * <p>Deletes the repository policy from a specified repository.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/DeleteRepositoryPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRepositoryPolicyOutcomeCallable DeleteRepositoryPolicyCallable(const Model::DeleteRepositoryPolicyRequest& request) const;

        /**
         * <p>Deletes the repository policy from a specified repository.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/DeleteRepositoryPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRepositoryPolicyAsync(const Model::DeleteRepositoryPolicyRequest& request, const DeleteRepositoryPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns metadata about the images in a repository, including image size,
         * image tags, and creation date.</p> <note> <p>Beginning with Docker version 1.9,
         * the Docker client compresses image layers before pushing them to a V2 Docker
         * registry. The output of the <code>docker images</code> command shows the
         * uncompressed image size, so it may return a larger image size than the image
         * sizes returned by <a>DescribeImages</a>.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/DescribeImages">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeImagesOutcome DescribeImages(const Model::DescribeImagesRequest& request) const;

        /**
         * <p>Returns metadata about the images in a repository, including image size,
         * image tags, and creation date.</p> <note> <p>Beginning with Docker version 1.9,
         * the Docker client compresses image layers before pushing them to a V2 Docker
         * registry. The output of the <code>docker images</code> command shows the
         * uncompressed image size, so it may return a larger image size than the image
         * sizes returned by <a>DescribeImages</a>.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/DescribeImages">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeImagesOutcomeCallable DescribeImagesCallable(const Model::DescribeImagesRequest& request) const;

        /**
         * <p>Returns metadata about the images in a repository, including image size,
         * image tags, and creation date.</p> <note> <p>Beginning with Docker version 1.9,
         * the Docker client compresses image layers before pushing them to a V2 Docker
         * registry. The output of the <code>docker images</code> command shows the
         * uncompressed image size, so it may return a larger image size than the image
         * sizes returned by <a>DescribeImages</a>.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/DescribeImages">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeImagesAsync(const Model::DescribeImagesRequest& request, const DescribeImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes image repositories in a registry.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/DescribeRepositories">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRepositoriesOutcome DescribeRepositories(const Model::DescribeRepositoriesRequest& request) const;

        /**
         * <p>Describes image repositories in a registry.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/DescribeRepositories">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRepositoriesOutcomeCallable DescribeRepositoriesCallable(const Model::DescribeRepositoriesRequest& request) const;

        /**
         * <p>Describes image repositories in a registry.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/DescribeRepositories">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRepositoriesAsync(const Model::DescribeRepositoriesRequest& request, const DescribeRepositoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a token that is valid for a specified registry for 12 hours. This
         * command allows you to use the <code>docker</code> CLI to push and pull images
         * with Amazon ECR. If you do not specify a registry, the default registry is
         * assumed.</p> <p>The <code>authorizationToken</code> returned for each registry
         * specified is a base64 encoded string that can be decoded and used in a
         * <code>docker login</code> command to authenticate to a registry. The AWS CLI
         * offers an <code>aws ecr get-login</code> command that simplifies the login
         * process.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/GetAuthorizationToken">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAuthorizationTokenOutcome GetAuthorizationToken(const Model::GetAuthorizationTokenRequest& request) const;

        /**
         * <p>Retrieves a token that is valid for a specified registry for 12 hours. This
         * command allows you to use the <code>docker</code> CLI to push and pull images
         * with Amazon ECR. If you do not specify a registry, the default registry is
         * assumed.</p> <p>The <code>authorizationToken</code> returned for each registry
         * specified is a base64 encoded string that can be decoded and used in a
         * <code>docker login</code> command to authenticate to a registry. The AWS CLI
         * offers an <code>aws ecr get-login</code> command that simplifies the login
         * process.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/GetAuthorizationToken">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAuthorizationTokenOutcomeCallable GetAuthorizationTokenCallable(const Model::GetAuthorizationTokenRequest& request) const;

        /**
         * <p>Retrieves a token that is valid for a specified registry for 12 hours. This
         * command allows you to use the <code>docker</code> CLI to push and pull images
         * with Amazon ECR. If you do not specify a registry, the default registry is
         * assumed.</p> <p>The <code>authorizationToken</code> returned for each registry
         * specified is a base64 encoded string that can be decoded and used in a
         * <code>docker login</code> command to authenticate to a registry. The AWS CLI
         * offers an <code>aws ecr get-login</code> command that simplifies the login
         * process.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/GetAuthorizationToken">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAuthorizationTokenAsync(const Model::GetAuthorizationTokenRequest& request, const GetAuthorizationTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the pre-signed Amazon S3 download URL corresponding to an image
         * layer. You can only get URLs for image layers that are referenced in an
         * image.</p> <note> <p>This operation is used by the Amazon ECR proxy, and it is
         * not intended for general use by customers for pulling and pushing images. In
         * most cases, you should use the <code>docker</code> CLI to pull, tag, and push
         * images.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/GetDownloadUrlForLayer">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDownloadUrlForLayerOutcome GetDownloadUrlForLayer(const Model::GetDownloadUrlForLayerRequest& request) const;

        /**
         * <p>Retrieves the pre-signed Amazon S3 download URL corresponding to an image
         * layer. You can only get URLs for image layers that are referenced in an
         * image.</p> <note> <p>This operation is used by the Amazon ECR proxy, and it is
         * not intended for general use by customers for pulling and pushing images. In
         * most cases, you should use the <code>docker</code> CLI to pull, tag, and push
         * images.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/GetDownloadUrlForLayer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDownloadUrlForLayerOutcomeCallable GetDownloadUrlForLayerCallable(const Model::GetDownloadUrlForLayerRequest& request) const;

        /**
         * <p>Retrieves the pre-signed Amazon S3 download URL corresponding to an image
         * layer. You can only get URLs for image layers that are referenced in an
         * image.</p> <note> <p>This operation is used by the Amazon ECR proxy, and it is
         * not intended for general use by customers for pulling and pushing images. In
         * most cases, you should use the <code>docker</code> CLI to pull, tag, and push
         * images.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/GetDownloadUrlForLayer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDownloadUrlForLayerAsync(const Model::GetDownloadUrlForLayerRequest& request, const GetDownloadUrlForLayerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the specified lifecycle policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/GetLifecyclePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLifecyclePolicyOutcome GetLifecyclePolicy(const Model::GetLifecyclePolicyRequest& request) const;

        /**
         * <p>Retrieves the specified lifecycle policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/GetLifecyclePolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLifecyclePolicyOutcomeCallable GetLifecyclePolicyCallable(const Model::GetLifecyclePolicyRequest& request) const;

        /**
         * <p>Retrieves the specified lifecycle policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/GetLifecyclePolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLifecyclePolicyAsync(const Model::GetLifecyclePolicyRequest& request, const GetLifecyclePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the results of the specified lifecycle policy preview
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/GetLifecyclePolicyPreview">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLifecyclePolicyPreviewOutcome GetLifecyclePolicyPreview(const Model::GetLifecyclePolicyPreviewRequest& request) const;

        /**
         * <p>Retrieves the results of the specified lifecycle policy preview
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/GetLifecyclePolicyPreview">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLifecyclePolicyPreviewOutcomeCallable GetLifecyclePolicyPreviewCallable(const Model::GetLifecyclePolicyPreviewRequest& request) const;

        /**
         * <p>Retrieves the results of the specified lifecycle policy preview
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/GetLifecyclePolicyPreview">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLifecyclePolicyPreviewAsync(const Model::GetLifecyclePolicyPreviewRequest& request, const GetLifecyclePolicyPreviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the repository policy for a specified repository.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/GetRepositoryPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRepositoryPolicyOutcome GetRepositoryPolicy(const Model::GetRepositoryPolicyRequest& request) const;

        /**
         * <p>Retrieves the repository policy for a specified repository.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/GetRepositoryPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRepositoryPolicyOutcomeCallable GetRepositoryPolicyCallable(const Model::GetRepositoryPolicyRequest& request) const;

        /**
         * <p>Retrieves the repository policy for a specified repository.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/GetRepositoryPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRepositoryPolicyAsync(const Model::GetRepositoryPolicyRequest& request, const GetRepositoryPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Notify Amazon ECR that you intend to upload an image layer.</p> <note>
         * <p>This operation is used by the Amazon ECR proxy, and it is not intended for
         * general use by customers for pulling and pushing images. In most cases, you
         * should use the <code>docker</code> CLI to pull, tag, and push images.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/InitiateLayerUpload">AWS
         * API Reference</a></p>
         */
        virtual Model::InitiateLayerUploadOutcome InitiateLayerUpload(const Model::InitiateLayerUploadRequest& request) const;

        /**
         * <p>Notify Amazon ECR that you intend to upload an image layer.</p> <note>
         * <p>This operation is used by the Amazon ECR proxy, and it is not intended for
         * general use by customers for pulling and pushing images. In most cases, you
         * should use the <code>docker</code> CLI to pull, tag, and push images.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/InitiateLayerUpload">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::InitiateLayerUploadOutcomeCallable InitiateLayerUploadCallable(const Model::InitiateLayerUploadRequest& request) const;

        /**
         * <p>Notify Amazon ECR that you intend to upload an image layer.</p> <note>
         * <p>This operation is used by the Amazon ECR proxy, and it is not intended for
         * general use by customers for pulling and pushing images. In most cases, you
         * should use the <code>docker</code> CLI to pull, tag, and push images.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/InitiateLayerUpload">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void InitiateLayerUploadAsync(const Model::InitiateLayerUploadRequest& request, const InitiateLayerUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all the image IDs for a given repository.</p> <p>You can filter images
         * based on whether or not they are tagged by setting the <code>tagStatus</code>
         * parameter to <code>TAGGED</code> or <code>UNTAGGED</code>. For example, you can
         * filter your results to return only <code>UNTAGGED</code> images and then pipe
         * that result to a <a>BatchDeleteImage</a> operation to delete them. Or, you can
         * filter your results to return only <code>TAGGED</code> images to list all of the
         * tags in your repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/ListImages">AWS API
         * Reference</a></p>
         */
        virtual Model::ListImagesOutcome ListImages(const Model::ListImagesRequest& request) const;

        /**
         * <p>Lists all the image IDs for a given repository.</p> <p>You can filter images
         * based on whether or not they are tagged by setting the <code>tagStatus</code>
         * parameter to <code>TAGGED</code> or <code>UNTAGGED</code>. For example, you can
         * filter your results to return only <code>UNTAGGED</code> images and then pipe
         * that result to a <a>BatchDeleteImage</a> operation to delete them. Or, you can
         * filter your results to return only <code>TAGGED</code> images to list all of the
         * tags in your repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/ListImages">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListImagesOutcomeCallable ListImagesCallable(const Model::ListImagesRequest& request) const;

        /**
         * <p>Lists all the image IDs for a given repository.</p> <p>You can filter images
         * based on whether or not they are tagged by setting the <code>tagStatus</code>
         * parameter to <code>TAGGED</code> or <code>UNTAGGED</code>. For example, you can
         * filter your results to return only <code>UNTAGGED</code> images and then pipe
         * that result to a <a>BatchDeleteImage</a> operation to delete them. Or, you can
         * filter your results to return only <code>TAGGED</code> images to list all of the
         * tags in your repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/ListImages">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListImagesAsync(const Model::ListImagesRequest& request, const ListImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the tags for an Amazon ECR resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>List the tags for an Amazon ECR resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>List the tags for an Amazon ECR resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates or updates the image manifest and tags associated with an image.</p>
         * <note> <p>This operation is used by the Amazon ECR proxy, and it is not intended
         * for general use by customers for pulling and pushing images. In most cases, you
         * should use the <code>docker</code> CLI to pull, tag, and push images.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/PutImage">AWS API
         * Reference</a></p>
         */
        virtual Model::PutImageOutcome PutImage(const Model::PutImageRequest& request) const;

        /**
         * <p>Creates or updates the image manifest and tags associated with an image.</p>
         * <note> <p>This operation is used by the Amazon ECR proxy, and it is not intended
         * for general use by customers for pulling and pushing images. In most cases, you
         * should use the <code>docker</code> CLI to pull, tag, and push images.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/PutImage">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutImageOutcomeCallable PutImageCallable(const Model::PutImageRequest& request) const;

        /**
         * <p>Creates or updates the image manifest and tags associated with an image.</p>
         * <note> <p>This operation is used by the Amazon ECR proxy, and it is not intended
         * for general use by customers for pulling and pushing images. In most cases, you
         * should use the <code>docker</code> CLI to pull, tag, and push images.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/PutImage">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutImageAsync(const Model::PutImageRequest& request, const PutImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates or updates a lifecycle policy. For information about lifecycle policy
         * syntax, see <a
         * href="http://docs.aws.amazon.com/AmazonECR/latest/userguide/LifecyclePolicies.html">Lifecycle
         * Policy Template</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/PutLifecyclePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutLifecyclePolicyOutcome PutLifecyclePolicy(const Model::PutLifecyclePolicyRequest& request) const;

        /**
         * <p>Creates or updates a lifecycle policy. For information about lifecycle policy
         * syntax, see <a
         * href="http://docs.aws.amazon.com/AmazonECR/latest/userguide/LifecyclePolicies.html">Lifecycle
         * Policy Template</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/PutLifecyclePolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutLifecyclePolicyOutcomeCallable PutLifecyclePolicyCallable(const Model::PutLifecyclePolicyRequest& request) const;

        /**
         * <p>Creates or updates a lifecycle policy. For information about lifecycle policy
         * syntax, see <a
         * href="http://docs.aws.amazon.com/AmazonECR/latest/userguide/LifecyclePolicies.html">Lifecycle
         * Policy Template</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/PutLifecyclePolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutLifecyclePolicyAsync(const Model::PutLifecyclePolicyRequest& request, const PutLifecyclePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Applies a repository policy on a specified repository to control access
         * permissions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/SetRepositoryPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::SetRepositoryPolicyOutcome SetRepositoryPolicy(const Model::SetRepositoryPolicyRequest& request) const;

        /**
         * <p>Applies a repository policy on a specified repository to control access
         * permissions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/SetRepositoryPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetRepositoryPolicyOutcomeCallable SetRepositoryPolicyCallable(const Model::SetRepositoryPolicyRequest& request) const;

        /**
         * <p>Applies a repository policy on a specified repository to control access
         * permissions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/SetRepositoryPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetRepositoryPolicyAsync(const Model::SetRepositoryPolicyRequest& request, const SetRepositoryPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a preview of the specified lifecycle policy. This allows you to see
         * the results before creating the lifecycle policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/StartLifecyclePolicyPreview">AWS
         * API Reference</a></p>
         */
        virtual Model::StartLifecyclePolicyPreviewOutcome StartLifecyclePolicyPreview(const Model::StartLifecyclePolicyPreviewRequest& request) const;

        /**
         * <p>Starts a preview of the specified lifecycle policy. This allows you to see
         * the results before creating the lifecycle policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/StartLifecyclePolicyPreview">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartLifecyclePolicyPreviewOutcomeCallable StartLifecyclePolicyPreviewCallable(const Model::StartLifecyclePolicyPreviewRequest& request) const;

        /**
         * <p>Starts a preview of the specified lifecycle policy. This allows you to see
         * the results before creating the lifecycle policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/StartLifecyclePolicyPreview">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartLifecyclePolicyPreviewAsync(const Model::StartLifecyclePolicyPreviewRequest& request, const StartLifecyclePolicyPreviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds specified tags to a resource with the specified ARN. Existing tags on a
         * resource are not changed if they are not specified in the request
         * parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/TagResource">AWS API
         * Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds specified tags to a resource with the specified ARN. Existing tags on a
         * resource are not changed if they are not specified in the request
         * parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/TagResource">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds specified tags to a resource with the specified ARN. Existing tags on a
         * resource are not changed if they are not specified in the request
         * parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/TagResource">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes specified tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Deletes specified tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Deletes specified tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Uploads an image layer part to Amazon ECR.</p> <note> <p>This operation is
         * used by the Amazon ECR proxy, and it is not intended for general use by
         * customers for pulling and pushing images. In most cases, you should use the
         * <code>docker</code> CLI to pull, tag, and push images.</p> </note><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/UploadLayerPart">AWS
         * API Reference</a></p>
         */
        virtual Model::UploadLayerPartOutcome UploadLayerPart(const Model::UploadLayerPartRequest& request) const;

        /**
         * <p>Uploads an image layer part to Amazon ECR.</p> <note> <p>This operation is
         * used by the Amazon ECR proxy, and it is not intended for general use by
         * customers for pulling and pushing images. In most cases, you should use the
         * <code>docker</code> CLI to pull, tag, and push images.</p> </note><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/UploadLayerPart">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UploadLayerPartOutcomeCallable UploadLayerPartCallable(const Model::UploadLayerPartRequest& request) const;

        /**
         * <p>Uploads an image layer part to Amazon ECR.</p> <note> <p>This operation is
         * used by the Amazon ECR proxy, and it is not intended for general use by
         * customers for pulling and pushing images. In most cases, you should use the
         * <code>docker</code> CLI to pull, tag, and push images.</p> </note><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/UploadLayerPart">AWS
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
        void BatchGetImageAsyncHelper(const Model::BatchGetImageRequest& request, const BatchGetImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CompleteLayerUploadAsyncHelper(const Model::CompleteLayerUploadRequest& request, const CompleteLayerUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateRepositoryAsyncHelper(const Model::CreateRepositoryRequest& request, const CreateRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteLifecyclePolicyAsyncHelper(const Model::DeleteLifecyclePolicyRequest& request, const DeleteLifecyclePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRepositoryAsyncHelper(const Model::DeleteRepositoryRequest& request, const DeleteRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRepositoryPolicyAsyncHelper(const Model::DeleteRepositoryPolicyRequest& request, const DeleteRepositoryPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeImagesAsyncHelper(const Model::DescribeImagesRequest& request, const DescribeImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeRepositoriesAsyncHelper(const Model::DescribeRepositoriesRequest& request, const DescribeRepositoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAuthorizationTokenAsyncHelper(const Model::GetAuthorizationTokenRequest& request, const GetAuthorizationTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDownloadUrlForLayerAsyncHelper(const Model::GetDownloadUrlForLayerRequest& request, const GetDownloadUrlForLayerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetLifecyclePolicyAsyncHelper(const Model::GetLifecyclePolicyRequest& request, const GetLifecyclePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetLifecyclePolicyPreviewAsyncHelper(const Model::GetLifecyclePolicyPreviewRequest& request, const GetLifecyclePolicyPreviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRepositoryPolicyAsyncHelper(const Model::GetRepositoryPolicyRequest& request, const GetRepositoryPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void InitiateLayerUploadAsyncHelper(const Model::InitiateLayerUploadRequest& request, const InitiateLayerUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListImagesAsyncHelper(const Model::ListImagesRequest& request, const ListImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutImageAsyncHelper(const Model::PutImageRequest& request, const PutImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutLifecyclePolicyAsyncHelper(const Model::PutLifecyclePolicyRequest& request, const PutLifecyclePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetRepositoryPolicyAsyncHelper(const Model::SetRepositoryPolicyRequest& request, const SetRepositoryPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartLifecyclePolicyPreviewAsyncHelper(const Model::StartLifecyclePolicyPreviewRequest& request, const StartLifecyclePolicyPreviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UploadLayerPartAsyncHelper(const Model::UploadLayerPartRequest& request, const UploadLayerPartResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace ECR
} // namespace Aws
