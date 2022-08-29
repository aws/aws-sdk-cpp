/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
#include <aws/ecr/model/BatchGetRepositoryScanningConfigurationResult.h>
#include <aws/ecr/model/CompleteLayerUploadResult.h>
#include <aws/ecr/model/CreatePullThroughCacheRuleResult.h>
#include <aws/ecr/model/CreateRepositoryResult.h>
#include <aws/ecr/model/DeleteLifecyclePolicyResult.h>
#include <aws/ecr/model/DeletePullThroughCacheRuleResult.h>
#include <aws/ecr/model/DeleteRegistryPolicyResult.h>
#include <aws/ecr/model/DeleteRepositoryResult.h>
#include <aws/ecr/model/DeleteRepositoryPolicyResult.h>
#include <aws/ecr/model/DescribeImageReplicationStatusResult.h>
#include <aws/ecr/model/DescribeImageScanFindingsResult.h>
#include <aws/ecr/model/DescribeImagesResult.h>
#include <aws/ecr/model/DescribePullThroughCacheRulesResult.h>
#include <aws/ecr/model/DescribeRegistryResult.h>
#include <aws/ecr/model/DescribeRepositoriesResult.h>
#include <aws/ecr/model/GetAuthorizationTokenResult.h>
#include <aws/ecr/model/GetDownloadUrlForLayerResult.h>
#include <aws/ecr/model/GetLifecyclePolicyResult.h>
#include <aws/ecr/model/GetLifecyclePolicyPreviewResult.h>
#include <aws/ecr/model/GetRegistryPolicyResult.h>
#include <aws/ecr/model/GetRegistryScanningConfigurationResult.h>
#include <aws/ecr/model/GetRepositoryPolicyResult.h>
#include <aws/ecr/model/InitiateLayerUploadResult.h>
#include <aws/ecr/model/ListImagesResult.h>
#include <aws/ecr/model/ListTagsForResourceResult.h>
#include <aws/ecr/model/PutImageResult.h>
#include <aws/ecr/model/PutImageScanningConfigurationResult.h>
#include <aws/ecr/model/PutImageTagMutabilityResult.h>
#include <aws/ecr/model/PutLifecyclePolicyResult.h>
#include <aws/ecr/model/PutRegistryPolicyResult.h>
#include <aws/ecr/model/PutRegistryScanningConfigurationResult.h>
#include <aws/ecr/model/PutReplicationConfigurationResult.h>
#include <aws/ecr/model/SetRepositoryPolicyResult.h>
#include <aws/ecr/model/StartImageScanResult.h>
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
        class BatchGetRepositoryScanningConfigurationRequest;
        class CompleteLayerUploadRequest;
        class CreatePullThroughCacheRuleRequest;
        class CreateRepositoryRequest;
        class DeleteLifecyclePolicyRequest;
        class DeletePullThroughCacheRuleRequest;
        class DeleteRegistryPolicyRequest;
        class DeleteRepositoryRequest;
        class DeleteRepositoryPolicyRequest;
        class DescribeImageReplicationStatusRequest;
        class DescribeImageScanFindingsRequest;
        class DescribeImagesRequest;
        class DescribePullThroughCacheRulesRequest;
        class DescribeRegistryRequest;
        class DescribeRepositoriesRequest;
        class GetAuthorizationTokenRequest;
        class GetDownloadUrlForLayerRequest;
        class GetLifecyclePolicyRequest;
        class GetLifecyclePolicyPreviewRequest;
        class GetRegistryPolicyRequest;
        class GetRegistryScanningConfigurationRequest;
        class GetRepositoryPolicyRequest;
        class InitiateLayerUploadRequest;
        class ListImagesRequest;
        class ListTagsForResourceRequest;
        class PutImageRequest;
        class PutImageScanningConfigurationRequest;
        class PutImageTagMutabilityRequest;
        class PutLifecyclePolicyRequest;
        class PutRegistryPolicyRequest;
        class PutRegistryScanningConfigurationRequest;
        class PutReplicationConfigurationRequest;
        class SetRepositoryPolicyRequest;
        class StartImageScanRequest;
        class StartLifecyclePolicyPreviewRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UploadLayerPartRequest;

        typedef Aws::Utils::Outcome<BatchCheckLayerAvailabilityResult, ECRError> BatchCheckLayerAvailabilityOutcome;
        typedef Aws::Utils::Outcome<BatchDeleteImageResult, ECRError> BatchDeleteImageOutcome;
        typedef Aws::Utils::Outcome<BatchGetImageResult, ECRError> BatchGetImageOutcome;
        typedef Aws::Utils::Outcome<BatchGetRepositoryScanningConfigurationResult, ECRError> BatchGetRepositoryScanningConfigurationOutcome;
        typedef Aws::Utils::Outcome<CompleteLayerUploadResult, ECRError> CompleteLayerUploadOutcome;
        typedef Aws::Utils::Outcome<CreatePullThroughCacheRuleResult, ECRError> CreatePullThroughCacheRuleOutcome;
        typedef Aws::Utils::Outcome<CreateRepositoryResult, ECRError> CreateRepositoryOutcome;
        typedef Aws::Utils::Outcome<DeleteLifecyclePolicyResult, ECRError> DeleteLifecyclePolicyOutcome;
        typedef Aws::Utils::Outcome<DeletePullThroughCacheRuleResult, ECRError> DeletePullThroughCacheRuleOutcome;
        typedef Aws::Utils::Outcome<DeleteRegistryPolicyResult, ECRError> DeleteRegistryPolicyOutcome;
        typedef Aws::Utils::Outcome<DeleteRepositoryResult, ECRError> DeleteRepositoryOutcome;
        typedef Aws::Utils::Outcome<DeleteRepositoryPolicyResult, ECRError> DeleteRepositoryPolicyOutcome;
        typedef Aws::Utils::Outcome<DescribeImageReplicationStatusResult, ECRError> DescribeImageReplicationStatusOutcome;
        typedef Aws::Utils::Outcome<DescribeImageScanFindingsResult, ECRError> DescribeImageScanFindingsOutcome;
        typedef Aws::Utils::Outcome<DescribeImagesResult, ECRError> DescribeImagesOutcome;
        typedef Aws::Utils::Outcome<DescribePullThroughCacheRulesResult, ECRError> DescribePullThroughCacheRulesOutcome;
        typedef Aws::Utils::Outcome<DescribeRegistryResult, ECRError> DescribeRegistryOutcome;
        typedef Aws::Utils::Outcome<DescribeRepositoriesResult, ECRError> DescribeRepositoriesOutcome;
        typedef Aws::Utils::Outcome<GetAuthorizationTokenResult, ECRError> GetAuthorizationTokenOutcome;
        typedef Aws::Utils::Outcome<GetDownloadUrlForLayerResult, ECRError> GetDownloadUrlForLayerOutcome;
        typedef Aws::Utils::Outcome<GetLifecyclePolicyResult, ECRError> GetLifecyclePolicyOutcome;
        typedef Aws::Utils::Outcome<GetLifecyclePolicyPreviewResult, ECRError> GetLifecyclePolicyPreviewOutcome;
        typedef Aws::Utils::Outcome<GetRegistryPolicyResult, ECRError> GetRegistryPolicyOutcome;
        typedef Aws::Utils::Outcome<GetRegistryScanningConfigurationResult, ECRError> GetRegistryScanningConfigurationOutcome;
        typedef Aws::Utils::Outcome<GetRepositoryPolicyResult, ECRError> GetRepositoryPolicyOutcome;
        typedef Aws::Utils::Outcome<InitiateLayerUploadResult, ECRError> InitiateLayerUploadOutcome;
        typedef Aws::Utils::Outcome<ListImagesResult, ECRError> ListImagesOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, ECRError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<PutImageResult, ECRError> PutImageOutcome;
        typedef Aws::Utils::Outcome<PutImageScanningConfigurationResult, ECRError> PutImageScanningConfigurationOutcome;
        typedef Aws::Utils::Outcome<PutImageTagMutabilityResult, ECRError> PutImageTagMutabilityOutcome;
        typedef Aws::Utils::Outcome<PutLifecyclePolicyResult, ECRError> PutLifecyclePolicyOutcome;
        typedef Aws::Utils::Outcome<PutRegistryPolicyResult, ECRError> PutRegistryPolicyOutcome;
        typedef Aws::Utils::Outcome<PutRegistryScanningConfigurationResult, ECRError> PutRegistryScanningConfigurationOutcome;
        typedef Aws::Utils::Outcome<PutReplicationConfigurationResult, ECRError> PutReplicationConfigurationOutcome;
        typedef Aws::Utils::Outcome<SetRepositoryPolicyResult, ECRError> SetRepositoryPolicyOutcome;
        typedef Aws::Utils::Outcome<StartImageScanResult, ECRError> StartImageScanOutcome;
        typedef Aws::Utils::Outcome<StartLifecyclePolicyPreviewResult, ECRError> StartLifecyclePolicyPreviewOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, ECRError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, ECRError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UploadLayerPartResult, ECRError> UploadLayerPartOutcome;

        typedef std::future<BatchCheckLayerAvailabilityOutcome> BatchCheckLayerAvailabilityOutcomeCallable;
        typedef std::future<BatchDeleteImageOutcome> BatchDeleteImageOutcomeCallable;
        typedef std::future<BatchGetImageOutcome> BatchGetImageOutcomeCallable;
        typedef std::future<BatchGetRepositoryScanningConfigurationOutcome> BatchGetRepositoryScanningConfigurationOutcomeCallable;
        typedef std::future<CompleteLayerUploadOutcome> CompleteLayerUploadOutcomeCallable;
        typedef std::future<CreatePullThroughCacheRuleOutcome> CreatePullThroughCacheRuleOutcomeCallable;
        typedef std::future<CreateRepositoryOutcome> CreateRepositoryOutcomeCallable;
        typedef std::future<DeleteLifecyclePolicyOutcome> DeleteLifecyclePolicyOutcomeCallable;
        typedef std::future<DeletePullThroughCacheRuleOutcome> DeletePullThroughCacheRuleOutcomeCallable;
        typedef std::future<DeleteRegistryPolicyOutcome> DeleteRegistryPolicyOutcomeCallable;
        typedef std::future<DeleteRepositoryOutcome> DeleteRepositoryOutcomeCallable;
        typedef std::future<DeleteRepositoryPolicyOutcome> DeleteRepositoryPolicyOutcomeCallable;
        typedef std::future<DescribeImageReplicationStatusOutcome> DescribeImageReplicationStatusOutcomeCallable;
        typedef std::future<DescribeImageScanFindingsOutcome> DescribeImageScanFindingsOutcomeCallable;
        typedef std::future<DescribeImagesOutcome> DescribeImagesOutcomeCallable;
        typedef std::future<DescribePullThroughCacheRulesOutcome> DescribePullThroughCacheRulesOutcomeCallable;
        typedef std::future<DescribeRegistryOutcome> DescribeRegistryOutcomeCallable;
        typedef std::future<DescribeRepositoriesOutcome> DescribeRepositoriesOutcomeCallable;
        typedef std::future<GetAuthorizationTokenOutcome> GetAuthorizationTokenOutcomeCallable;
        typedef std::future<GetDownloadUrlForLayerOutcome> GetDownloadUrlForLayerOutcomeCallable;
        typedef std::future<GetLifecyclePolicyOutcome> GetLifecyclePolicyOutcomeCallable;
        typedef std::future<GetLifecyclePolicyPreviewOutcome> GetLifecyclePolicyPreviewOutcomeCallable;
        typedef std::future<GetRegistryPolicyOutcome> GetRegistryPolicyOutcomeCallable;
        typedef std::future<GetRegistryScanningConfigurationOutcome> GetRegistryScanningConfigurationOutcomeCallable;
        typedef std::future<GetRepositoryPolicyOutcome> GetRepositoryPolicyOutcomeCallable;
        typedef std::future<InitiateLayerUploadOutcome> InitiateLayerUploadOutcomeCallable;
        typedef std::future<ListImagesOutcome> ListImagesOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<PutImageOutcome> PutImageOutcomeCallable;
        typedef std::future<PutImageScanningConfigurationOutcome> PutImageScanningConfigurationOutcomeCallable;
        typedef std::future<PutImageTagMutabilityOutcome> PutImageTagMutabilityOutcomeCallable;
        typedef std::future<PutLifecyclePolicyOutcome> PutLifecyclePolicyOutcomeCallable;
        typedef std::future<PutRegistryPolicyOutcome> PutRegistryPolicyOutcomeCallable;
        typedef std::future<PutRegistryScanningConfigurationOutcome> PutRegistryScanningConfigurationOutcomeCallable;
        typedef std::future<PutReplicationConfigurationOutcome> PutReplicationConfigurationOutcomeCallable;
        typedef std::future<SetRepositoryPolicyOutcome> SetRepositoryPolicyOutcomeCallable;
        typedef std::future<StartImageScanOutcome> StartImageScanOutcomeCallable;
        typedef std::future<StartLifecyclePolicyPreviewOutcome> StartLifecyclePolicyPreviewOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UploadLayerPartOutcome> UploadLayerPartOutcomeCallable;
} // namespace Model

  class ECRClient;

    typedef std::function<void(const ECRClient*, const Model::BatchCheckLayerAvailabilityRequest&, const Model::BatchCheckLayerAvailabilityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchCheckLayerAvailabilityResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::BatchDeleteImageRequest&, const Model::BatchDeleteImageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDeleteImageResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::BatchGetImageRequest&, const Model::BatchGetImageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetImageResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::BatchGetRepositoryScanningConfigurationRequest&, const Model::BatchGetRepositoryScanningConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetRepositoryScanningConfigurationResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::CompleteLayerUploadRequest&, const Model::CompleteLayerUploadOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CompleteLayerUploadResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::CreatePullThroughCacheRuleRequest&, const Model::CreatePullThroughCacheRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePullThroughCacheRuleResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::CreateRepositoryRequest&, const Model::CreateRepositoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRepositoryResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::DeleteLifecyclePolicyRequest&, const Model::DeleteLifecyclePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLifecyclePolicyResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::DeletePullThroughCacheRuleRequest&, const Model::DeletePullThroughCacheRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePullThroughCacheRuleResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::DeleteRegistryPolicyRequest&, const Model::DeleteRegistryPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRegistryPolicyResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::DeleteRepositoryRequest&, const Model::DeleteRepositoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRepositoryResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::DeleteRepositoryPolicyRequest&, const Model::DeleteRepositoryPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRepositoryPolicyResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::DescribeImageReplicationStatusRequest&, const Model::DescribeImageReplicationStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeImageReplicationStatusResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::DescribeImageScanFindingsRequest&, const Model::DescribeImageScanFindingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeImageScanFindingsResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::DescribeImagesRequest&, const Model::DescribeImagesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeImagesResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::DescribePullThroughCacheRulesRequest&, const Model::DescribePullThroughCacheRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePullThroughCacheRulesResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::DescribeRegistryRequest&, const Model::DescribeRegistryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRegistryResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::DescribeRepositoriesRequest&, const Model::DescribeRepositoriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRepositoriesResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::GetAuthorizationTokenRequest&, const Model::GetAuthorizationTokenOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAuthorizationTokenResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::GetDownloadUrlForLayerRequest&, const Model::GetDownloadUrlForLayerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDownloadUrlForLayerResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::GetLifecyclePolicyRequest&, const Model::GetLifecyclePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLifecyclePolicyResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::GetLifecyclePolicyPreviewRequest&, const Model::GetLifecyclePolicyPreviewOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLifecyclePolicyPreviewResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::GetRegistryPolicyRequest&, const Model::GetRegistryPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRegistryPolicyResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::GetRegistryScanningConfigurationRequest&, const Model::GetRegistryScanningConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRegistryScanningConfigurationResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::GetRepositoryPolicyRequest&, const Model::GetRepositoryPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRepositoryPolicyResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::InitiateLayerUploadRequest&, const Model::InitiateLayerUploadOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > InitiateLayerUploadResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::ListImagesRequest&, const Model::ListImagesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListImagesResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::PutImageRequest&, const Model::PutImageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutImageResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::PutImageScanningConfigurationRequest&, const Model::PutImageScanningConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutImageScanningConfigurationResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::PutImageTagMutabilityRequest&, const Model::PutImageTagMutabilityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutImageTagMutabilityResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::PutLifecyclePolicyRequest&, const Model::PutLifecyclePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutLifecyclePolicyResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::PutRegistryPolicyRequest&, const Model::PutRegistryPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutRegistryPolicyResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::PutRegistryScanningConfigurationRequest&, const Model::PutRegistryScanningConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutRegistryScanningConfigurationResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::PutReplicationConfigurationRequest&, const Model::PutReplicationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutReplicationConfigurationResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::SetRepositoryPolicyRequest&, const Model::SetRepositoryPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetRepositoryPolicyResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::StartImageScanRequest&, const Model::StartImageScanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartImageScanResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::StartLifecyclePolicyPreviewRequest&, const Model::StartLifecyclePolicyPreviewOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartLifecyclePolicyPreviewResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::UploadLayerPartRequest&, const Model::UploadLayerPartOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UploadLayerPartResponseReceivedHandler;

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

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ECRClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ECRClient(const Aws::Auth::AWSCredentials& credentials,
                  const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ECRClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

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
        virtual Model::BatchCheckLayerAvailabilityOutcomeCallable BatchCheckLayerAvailabilityCallable(const Model::BatchCheckLayerAvailabilityRequest& request) const;

        /**
         * An Async wrapper for BatchCheckLayerAvailability that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchCheckLayerAvailabilityAsync(const Model::BatchCheckLayerAvailabilityRequest& request, const BatchCheckLayerAvailabilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::BatchDeleteImageOutcomeCallable BatchDeleteImageCallable(const Model::BatchDeleteImageRequest& request) const;

        /**
         * An Async wrapper for BatchDeleteImage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchDeleteImageAsync(const Model::BatchDeleteImageRequest& request, const BatchDeleteImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::BatchGetImageOutcomeCallable BatchGetImageCallable(const Model::BatchGetImageRequest& request) const;

        /**
         * An Async wrapper for BatchGetImage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetImageAsync(const Model::BatchGetImageRequest& request, const BatchGetImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::BatchGetRepositoryScanningConfigurationOutcomeCallable BatchGetRepositoryScanningConfigurationCallable(const Model::BatchGetRepositoryScanningConfigurationRequest& request) const;

        /**
         * An Async wrapper for BatchGetRepositoryScanningConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetRepositoryScanningConfigurationAsync(const Model::BatchGetRepositoryScanningConfigurationRequest& request, const BatchGetRepositoryScanningConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CompleteLayerUploadOutcomeCallable CompleteLayerUploadCallable(const Model::CompleteLayerUploadRequest& request) const;

        /**
         * An Async wrapper for CompleteLayerUpload that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CompleteLayerUploadAsync(const Model::CompleteLayerUploadRequest& request, const CompleteLayerUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a pull through cache rule. A pull through cache rule provides a way
         * to cache images from an external public registry in your Amazon ECR private
         * registry.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/CreatePullThroughCacheRule">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePullThroughCacheRuleOutcome CreatePullThroughCacheRule(const Model::CreatePullThroughCacheRuleRequest& request) const;

        /**
         * A Callable wrapper for CreatePullThroughCacheRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePullThroughCacheRuleOutcomeCallable CreatePullThroughCacheRuleCallable(const Model::CreatePullThroughCacheRuleRequest& request) const;

        /**
         * An Async wrapper for CreatePullThroughCacheRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePullThroughCacheRuleAsync(const Model::CreatePullThroughCacheRuleRequest& request, const CreatePullThroughCacheRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateRepositoryOutcomeCallable CreateRepositoryCallable(const Model::CreateRepositoryRequest& request) const;

        /**
         * An Async wrapper for CreateRepository that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRepositoryAsync(const Model::CreateRepositoryRequest& request, const CreateRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteLifecyclePolicyOutcomeCallable DeleteLifecyclePolicyCallable(const Model::DeleteLifecyclePolicyRequest& request) const;

        /**
         * An Async wrapper for DeleteLifecyclePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteLifecyclePolicyAsync(const Model::DeleteLifecyclePolicyRequest& request, const DeleteLifecyclePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a pull through cache rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/DeletePullThroughCacheRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePullThroughCacheRuleOutcome DeletePullThroughCacheRule(const Model::DeletePullThroughCacheRuleRequest& request) const;

        /**
         * A Callable wrapper for DeletePullThroughCacheRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePullThroughCacheRuleOutcomeCallable DeletePullThroughCacheRuleCallable(const Model::DeletePullThroughCacheRuleRequest& request) const;

        /**
         * An Async wrapper for DeletePullThroughCacheRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePullThroughCacheRuleAsync(const Model::DeletePullThroughCacheRuleRequest& request, const DeletePullThroughCacheRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the registry permissions policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/DeleteRegistryPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRegistryPolicyOutcome DeleteRegistryPolicy(const Model::DeleteRegistryPolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteRegistryPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRegistryPolicyOutcomeCallable DeleteRegistryPolicyCallable(const Model::DeleteRegistryPolicyRequest& request) const;

        /**
         * An Async wrapper for DeleteRegistryPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRegistryPolicyAsync(const Model::DeleteRegistryPolicyRequest& request, const DeleteRegistryPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a repository. If the repository contains images, you must either
         * delete all images in the repository or use the <code>force</code> option to
         * delete the repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/DeleteRepository">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRepositoryOutcome DeleteRepository(const Model::DeleteRepositoryRequest& request) const;

        /**
         * A Callable wrapper for DeleteRepository that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRepositoryOutcomeCallable DeleteRepositoryCallable(const Model::DeleteRepositoryRequest& request) const;

        /**
         * An Async wrapper for DeleteRepository that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRepositoryAsync(const Model::DeleteRepositoryRequest& request, const DeleteRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteRepositoryPolicyOutcomeCallable DeleteRepositoryPolicyCallable(const Model::DeleteRepositoryPolicyRequest& request) const;

        /**
         * An Async wrapper for DeleteRepositoryPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRepositoryPolicyAsync(const Model::DeleteRepositoryPolicyRequest& request, const DeleteRepositoryPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeImageReplicationStatusOutcomeCallable DescribeImageReplicationStatusCallable(const Model::DescribeImageReplicationStatusRequest& request) const;

        /**
         * An Async wrapper for DescribeImageReplicationStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeImageReplicationStatusAsync(const Model::DescribeImageReplicationStatusRequest& request, const DescribeImageReplicationStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeImageScanFindingsOutcomeCallable DescribeImageScanFindingsCallable(const Model::DescribeImageScanFindingsRequest& request) const;

        /**
         * An Async wrapper for DescribeImageScanFindings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeImageScanFindingsAsync(const Model::DescribeImageScanFindingsRequest& request, const DescribeImageScanFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeImagesOutcomeCallable DescribeImagesCallable(const Model::DescribeImagesRequest& request) const;

        /**
         * An Async wrapper for DescribeImages that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeImagesAsync(const Model::DescribeImagesRequest& request, const DescribeImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the pull through cache rules for a registry.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/DescribePullThroughCacheRules">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePullThroughCacheRulesOutcome DescribePullThroughCacheRules(const Model::DescribePullThroughCacheRulesRequest& request) const;

        /**
         * A Callable wrapper for DescribePullThroughCacheRules that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePullThroughCacheRulesOutcomeCallable DescribePullThroughCacheRulesCallable(const Model::DescribePullThroughCacheRulesRequest& request) const;

        /**
         * An Async wrapper for DescribePullThroughCacheRules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePullThroughCacheRulesAsync(const Model::DescribePullThroughCacheRulesRequest& request, const DescribePullThroughCacheRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the settings for a registry. The replication configuration for a
         * repository can be created or updated with the <a>PutReplicationConfiguration</a>
         * API action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/DescribeRegistry">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRegistryOutcome DescribeRegistry(const Model::DescribeRegistryRequest& request) const;

        /**
         * A Callable wrapper for DescribeRegistry that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRegistryOutcomeCallable DescribeRegistryCallable(const Model::DescribeRegistryRequest& request) const;

        /**
         * An Async wrapper for DescribeRegistry that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRegistryAsync(const Model::DescribeRegistryRequest& request, const DescribeRegistryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes image repositories in a registry.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/DescribeRepositories">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRepositoriesOutcome DescribeRepositories(const Model::DescribeRepositoriesRequest& request) const;

        /**
         * A Callable wrapper for DescribeRepositories that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRepositoriesOutcomeCallable DescribeRepositoriesCallable(const Model::DescribeRepositoriesRequest& request) const;

        /**
         * An Async wrapper for DescribeRepositories that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRepositoriesAsync(const Model::DescribeRepositoriesRequest& request, const DescribeRepositoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for GetAuthorizationToken that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAuthorizationTokenOutcomeCallable GetAuthorizationTokenCallable(const Model::GetAuthorizationTokenRequest& request) const;

        /**
         * An Async wrapper for GetAuthorizationToken that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAuthorizationTokenAsync(const Model::GetAuthorizationTokenRequest& request, const GetAuthorizationTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetDownloadUrlForLayerOutcomeCallable GetDownloadUrlForLayerCallable(const Model::GetDownloadUrlForLayerRequest& request) const;

        /**
         * An Async wrapper for GetDownloadUrlForLayer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDownloadUrlForLayerAsync(const Model::GetDownloadUrlForLayerRequest& request, const GetDownloadUrlForLayerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetLifecyclePolicyOutcomeCallable GetLifecyclePolicyCallable(const Model::GetLifecyclePolicyRequest& request) const;

        /**
         * An Async wrapper for GetLifecyclePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLifecyclePolicyAsync(const Model::GetLifecyclePolicyRequest& request, const GetLifecyclePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetLifecyclePolicyPreviewOutcomeCallable GetLifecyclePolicyPreviewCallable(const Model::GetLifecyclePolicyPreviewRequest& request) const;

        /**
         * An Async wrapper for GetLifecyclePolicyPreview that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLifecyclePolicyPreviewAsync(const Model::GetLifecyclePolicyPreviewRequest& request, const GetLifecyclePolicyPreviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the permissions policy for a registry.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/GetRegistryPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRegistryPolicyOutcome GetRegistryPolicy(const Model::GetRegistryPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetRegistryPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRegistryPolicyOutcomeCallable GetRegistryPolicyCallable(const Model::GetRegistryPolicyRequest& request) const;

        /**
         * An Async wrapper for GetRegistryPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRegistryPolicyAsync(const Model::GetRegistryPolicyRequest& request, const GetRegistryPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the scanning configuration for a registry.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/GetRegistryScanningConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRegistryScanningConfigurationOutcome GetRegistryScanningConfiguration(const Model::GetRegistryScanningConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetRegistryScanningConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRegistryScanningConfigurationOutcomeCallable GetRegistryScanningConfigurationCallable(const Model::GetRegistryScanningConfigurationRequest& request) const;

        /**
         * An Async wrapper for GetRegistryScanningConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRegistryScanningConfigurationAsync(const Model::GetRegistryScanningConfigurationRequest& request, const GetRegistryScanningConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetRepositoryPolicyOutcomeCallable GetRepositoryPolicyCallable(const Model::GetRepositoryPolicyRequest& request) const;

        /**
         * An Async wrapper for GetRepositoryPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/InitiateLayerUpload">AWS
         * API Reference</a></p>
         */
        virtual Model::InitiateLayerUploadOutcome InitiateLayerUpload(const Model::InitiateLayerUploadRequest& request) const;

        /**
         * A Callable wrapper for InitiateLayerUpload that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::InitiateLayerUploadOutcomeCallable InitiateLayerUploadCallable(const Model::InitiateLayerUploadRequest& request) const;

        /**
         * An Async wrapper for InitiateLayerUpload that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void InitiateLayerUploadAsync(const Model::InitiateLayerUploadRequest& request, const InitiateLayerUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListImagesOutcomeCallable ListImagesCallable(const Model::ListImagesRequest& request) const;

        /**
         * An Async wrapper for ListImages that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListImagesAsync(const Model::ListImagesRequest& request, const ListImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the tags for an Amazon ECR resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/ListTagsForResource">AWS
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
        virtual Model::PutImageOutcomeCallable PutImageCallable(const Model::PutImageRequest& request) const;

        /**
         * An Async wrapper for PutImage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutImageAsync(const Model::PutImageRequest& request, const PutImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::PutImageScanningConfigurationOutcomeCallable PutImageScanningConfigurationCallable(const Model::PutImageScanningConfigurationRequest& request) const;

        /**
         * An Async wrapper for PutImageScanningConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutImageScanningConfigurationAsync(const Model::PutImageScanningConfigurationRequest& request, const PutImageScanningConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::PutImageTagMutabilityOutcomeCallable PutImageTagMutabilityCallable(const Model::PutImageTagMutabilityRequest& request) const;

        /**
         * An Async wrapper for PutImageTagMutability that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutImageTagMutabilityAsync(const Model::PutImageTagMutabilityRequest& request, const PutImageTagMutabilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::PutLifecyclePolicyOutcomeCallable PutLifecyclePolicyCallable(const Model::PutLifecyclePolicyRequest& request) const;

        /**
         * An Async wrapper for PutLifecyclePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutLifecyclePolicyAsync(const Model::PutLifecyclePolicyRequest& request, const PutLifecyclePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::PutRegistryPolicyOutcomeCallable PutRegistryPolicyCallable(const Model::PutRegistryPolicyRequest& request) const;

        /**
         * An Async wrapper for PutRegistryPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutRegistryPolicyAsync(const Model::PutRegistryPolicyRequest& request, const PutRegistryPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates or updates the scanning configuration for your private
         * registry.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/PutRegistryScanningConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutRegistryScanningConfigurationOutcome PutRegistryScanningConfiguration(const Model::PutRegistryScanningConfigurationRequest& request) const;

        /**
         * A Callable wrapper for PutRegistryScanningConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutRegistryScanningConfigurationOutcomeCallable PutRegistryScanningConfigurationCallable(const Model::PutRegistryScanningConfigurationRequest& request) const;

        /**
         * An Async wrapper for PutRegistryScanningConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutRegistryScanningConfigurationAsync(const Model::PutRegistryScanningConfigurationRequest& request, const PutRegistryScanningConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for PutReplicationConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutReplicationConfigurationOutcomeCallable PutReplicationConfigurationCallable(const Model::PutReplicationConfigurationRequest& request) const;

        /**
         * An Async wrapper for PutReplicationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutReplicationConfigurationAsync(const Model::PutReplicationConfigurationRequest& request, const PutReplicationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::SetRepositoryPolicyOutcomeCallable SetRepositoryPolicyCallable(const Model::SetRepositoryPolicyRequest& request) const;

        /**
         * An Async wrapper for SetRepositoryPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetRepositoryPolicyAsync(const Model::SetRepositoryPolicyRequest& request, const SetRepositoryPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::StartImageScanOutcomeCallable StartImageScanCallable(const Model::StartImageScanRequest& request) const;

        /**
         * An Async wrapper for StartImageScan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartImageScanAsync(const Model::StartImageScanRequest& request, const StartImageScanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::StartLifecyclePolicyPreviewOutcomeCallable StartLifecyclePolicyPreviewCallable(const Model::StartLifecyclePolicyPreviewRequest& request) const;

        /**
         * An Async wrapper for StartLifecyclePolicyPreview that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes specified tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/UntagResource">AWS
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
        virtual Model::UploadLayerPartOutcomeCallable UploadLayerPartCallable(const Model::UploadLayerPartRequest& request) const;

        /**
         * An Async wrapper for UploadLayerPart that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UploadLayerPartAsync(const Model::UploadLayerPartRequest& request, const UploadLayerPartResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void BatchCheckLayerAvailabilityAsyncHelper(const Model::BatchCheckLayerAvailabilityRequest& request, const BatchCheckLayerAvailabilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchDeleteImageAsyncHelper(const Model::BatchDeleteImageRequest& request, const BatchDeleteImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchGetImageAsyncHelper(const Model::BatchGetImageRequest& request, const BatchGetImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchGetRepositoryScanningConfigurationAsyncHelper(const Model::BatchGetRepositoryScanningConfigurationRequest& request, const BatchGetRepositoryScanningConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CompleteLayerUploadAsyncHelper(const Model::CompleteLayerUploadRequest& request, const CompleteLayerUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePullThroughCacheRuleAsyncHelper(const Model::CreatePullThroughCacheRuleRequest& request, const CreatePullThroughCacheRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateRepositoryAsyncHelper(const Model::CreateRepositoryRequest& request, const CreateRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteLifecyclePolicyAsyncHelper(const Model::DeleteLifecyclePolicyRequest& request, const DeleteLifecyclePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeletePullThroughCacheRuleAsyncHelper(const Model::DeletePullThroughCacheRuleRequest& request, const DeletePullThroughCacheRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRegistryPolicyAsyncHelper(const Model::DeleteRegistryPolicyRequest& request, const DeleteRegistryPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRepositoryAsyncHelper(const Model::DeleteRepositoryRequest& request, const DeleteRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRepositoryPolicyAsyncHelper(const Model::DeleteRepositoryPolicyRequest& request, const DeleteRepositoryPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeImageReplicationStatusAsyncHelper(const Model::DescribeImageReplicationStatusRequest& request, const DescribeImageReplicationStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeImageScanFindingsAsyncHelper(const Model::DescribeImageScanFindingsRequest& request, const DescribeImageScanFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeImagesAsyncHelper(const Model::DescribeImagesRequest& request, const DescribeImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribePullThroughCacheRulesAsyncHelper(const Model::DescribePullThroughCacheRulesRequest& request, const DescribePullThroughCacheRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeRegistryAsyncHelper(const Model::DescribeRegistryRequest& request, const DescribeRegistryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeRepositoriesAsyncHelper(const Model::DescribeRepositoriesRequest& request, const DescribeRepositoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAuthorizationTokenAsyncHelper(const Model::GetAuthorizationTokenRequest& request, const GetAuthorizationTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDownloadUrlForLayerAsyncHelper(const Model::GetDownloadUrlForLayerRequest& request, const GetDownloadUrlForLayerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetLifecyclePolicyAsyncHelper(const Model::GetLifecyclePolicyRequest& request, const GetLifecyclePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetLifecyclePolicyPreviewAsyncHelper(const Model::GetLifecyclePolicyPreviewRequest& request, const GetLifecyclePolicyPreviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRegistryPolicyAsyncHelper(const Model::GetRegistryPolicyRequest& request, const GetRegistryPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRegistryScanningConfigurationAsyncHelper(const Model::GetRegistryScanningConfigurationRequest& request, const GetRegistryScanningConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRepositoryPolicyAsyncHelper(const Model::GetRepositoryPolicyRequest& request, const GetRepositoryPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void InitiateLayerUploadAsyncHelper(const Model::InitiateLayerUploadRequest& request, const InitiateLayerUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListImagesAsyncHelper(const Model::ListImagesRequest& request, const ListImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutImageAsyncHelper(const Model::PutImageRequest& request, const PutImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutImageScanningConfigurationAsyncHelper(const Model::PutImageScanningConfigurationRequest& request, const PutImageScanningConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutImageTagMutabilityAsyncHelper(const Model::PutImageTagMutabilityRequest& request, const PutImageTagMutabilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutLifecyclePolicyAsyncHelper(const Model::PutLifecyclePolicyRequest& request, const PutLifecyclePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutRegistryPolicyAsyncHelper(const Model::PutRegistryPolicyRequest& request, const PutRegistryPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutRegistryScanningConfigurationAsyncHelper(const Model::PutRegistryScanningConfigurationRequest& request, const PutRegistryScanningConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutReplicationConfigurationAsyncHelper(const Model::PutReplicationConfigurationRequest& request, const PutReplicationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetRepositoryPolicyAsyncHelper(const Model::SetRepositoryPolicyRequest& request, const SetRepositoryPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartImageScanAsyncHelper(const Model::StartImageScanRequest& request, const StartImageScanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
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
