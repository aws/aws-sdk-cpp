/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/ecr/ECRErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/ecr/ECREndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in ECRClient header */
#include <aws/ecr/model/BatchCheckLayerAvailabilityResult.h>
#include <aws/ecr/model/BatchDeleteImageResult.h>
#include <aws/ecr/model/BatchGetImageResult.h>
#include <aws/ecr/model/BatchGetRepositoryScanningConfigurationResult.h>
#include <aws/ecr/model/CompleteLayerUploadResult.h>
#include <aws/ecr/model/CreatePullThroughCacheRuleResult.h>
#include <aws/ecr/model/CreateRepositoryResult.h>
#include <aws/ecr/model/CreateRepositoryCreationTemplateResult.h>
#include <aws/ecr/model/DeleteLifecyclePolicyResult.h>
#include <aws/ecr/model/DeletePullThroughCacheRuleResult.h>
#include <aws/ecr/model/DeleteRegistryPolicyResult.h>
#include <aws/ecr/model/DeleteRepositoryResult.h>
#include <aws/ecr/model/DeleteRepositoryCreationTemplateResult.h>
#include <aws/ecr/model/DeleteRepositoryPolicyResult.h>
#include <aws/ecr/model/DescribeImageReplicationStatusResult.h>
#include <aws/ecr/model/DescribeImageScanFindingsResult.h>
#include <aws/ecr/model/DescribeImagesResult.h>
#include <aws/ecr/model/DescribePullThroughCacheRulesResult.h>
#include <aws/ecr/model/DescribeRegistryResult.h>
#include <aws/ecr/model/DescribeRepositoriesResult.h>
#include <aws/ecr/model/DescribeRepositoryCreationTemplatesResult.h>
#include <aws/ecr/model/GetAccountSettingResult.h>
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
#include <aws/ecr/model/PutAccountSettingResult.h>
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
#include <aws/ecr/model/UpdatePullThroughCacheRuleResult.h>
#include <aws/ecr/model/UpdateRepositoryCreationTemplateResult.h>
#include <aws/ecr/model/UploadLayerPartResult.h>
#include <aws/ecr/model/ValidatePullThroughCacheRuleResult.h>
#include <aws/ecr/model/DescribeRepositoriesRequest.h>
#include <aws/ecr/model/DescribeRegistryRequest.h>
#include <aws/ecr/model/PutRegistryScanningConfigurationRequest.h>
#include <aws/ecr/model/DeleteRegistryPolicyRequest.h>
#include <aws/ecr/model/DescribeRepositoryCreationTemplatesRequest.h>
#include <aws/ecr/model/GetRegistryPolicyRequest.h>
#include <aws/ecr/model/GetAuthorizationTokenRequest.h>
#include <aws/ecr/model/GetRegistryScanningConfigurationRequest.h>
#include <aws/ecr/model/DescribePullThroughCacheRulesRequest.h>
/* End of service model headers required in ECRClient header */

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
    using ECRClientConfiguration = Aws::Client::GenericClientConfiguration;
    using ECREndpointProviderBase = Aws::ECR::Endpoint::ECREndpointProviderBase;
    using ECREndpointProvider = Aws::ECR::Endpoint::ECREndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in ECRClient header */
      class BatchCheckLayerAvailabilityRequest;
      class BatchDeleteImageRequest;
      class BatchGetImageRequest;
      class BatchGetRepositoryScanningConfigurationRequest;
      class CompleteLayerUploadRequest;
      class CreatePullThroughCacheRuleRequest;
      class CreateRepositoryRequest;
      class CreateRepositoryCreationTemplateRequest;
      class DeleteLifecyclePolicyRequest;
      class DeletePullThroughCacheRuleRequest;
      class DeleteRegistryPolicyRequest;
      class DeleteRepositoryRequest;
      class DeleteRepositoryCreationTemplateRequest;
      class DeleteRepositoryPolicyRequest;
      class DescribeImageReplicationStatusRequest;
      class DescribeImageScanFindingsRequest;
      class DescribeImagesRequest;
      class DescribePullThroughCacheRulesRequest;
      class DescribeRegistryRequest;
      class DescribeRepositoriesRequest;
      class DescribeRepositoryCreationTemplatesRequest;
      class GetAccountSettingRequest;
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
      class PutAccountSettingRequest;
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
      class UpdatePullThroughCacheRuleRequest;
      class UpdateRepositoryCreationTemplateRequest;
      class UploadLayerPartRequest;
      class ValidatePullThroughCacheRuleRequest;
      /* End of service model forward declarations required in ECRClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<BatchCheckLayerAvailabilityResult, ECRError> BatchCheckLayerAvailabilityOutcome;
      typedef Aws::Utils::Outcome<BatchDeleteImageResult, ECRError> BatchDeleteImageOutcome;
      typedef Aws::Utils::Outcome<BatchGetImageResult, ECRError> BatchGetImageOutcome;
      typedef Aws::Utils::Outcome<BatchGetRepositoryScanningConfigurationResult, ECRError> BatchGetRepositoryScanningConfigurationOutcome;
      typedef Aws::Utils::Outcome<CompleteLayerUploadResult, ECRError> CompleteLayerUploadOutcome;
      typedef Aws::Utils::Outcome<CreatePullThroughCacheRuleResult, ECRError> CreatePullThroughCacheRuleOutcome;
      typedef Aws::Utils::Outcome<CreateRepositoryResult, ECRError> CreateRepositoryOutcome;
      typedef Aws::Utils::Outcome<CreateRepositoryCreationTemplateResult, ECRError> CreateRepositoryCreationTemplateOutcome;
      typedef Aws::Utils::Outcome<DeleteLifecyclePolicyResult, ECRError> DeleteLifecyclePolicyOutcome;
      typedef Aws::Utils::Outcome<DeletePullThroughCacheRuleResult, ECRError> DeletePullThroughCacheRuleOutcome;
      typedef Aws::Utils::Outcome<DeleteRegistryPolicyResult, ECRError> DeleteRegistryPolicyOutcome;
      typedef Aws::Utils::Outcome<DeleteRepositoryResult, ECRError> DeleteRepositoryOutcome;
      typedef Aws::Utils::Outcome<DeleteRepositoryCreationTemplateResult, ECRError> DeleteRepositoryCreationTemplateOutcome;
      typedef Aws::Utils::Outcome<DeleteRepositoryPolicyResult, ECRError> DeleteRepositoryPolicyOutcome;
      typedef Aws::Utils::Outcome<DescribeImageReplicationStatusResult, ECRError> DescribeImageReplicationStatusOutcome;
      typedef Aws::Utils::Outcome<DescribeImageScanFindingsResult, ECRError> DescribeImageScanFindingsOutcome;
      typedef Aws::Utils::Outcome<DescribeImagesResult, ECRError> DescribeImagesOutcome;
      typedef Aws::Utils::Outcome<DescribePullThroughCacheRulesResult, ECRError> DescribePullThroughCacheRulesOutcome;
      typedef Aws::Utils::Outcome<DescribeRegistryResult, ECRError> DescribeRegistryOutcome;
      typedef Aws::Utils::Outcome<DescribeRepositoriesResult, ECRError> DescribeRepositoriesOutcome;
      typedef Aws::Utils::Outcome<DescribeRepositoryCreationTemplatesResult, ECRError> DescribeRepositoryCreationTemplatesOutcome;
      typedef Aws::Utils::Outcome<GetAccountSettingResult, ECRError> GetAccountSettingOutcome;
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
      typedef Aws::Utils::Outcome<PutAccountSettingResult, ECRError> PutAccountSettingOutcome;
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
      typedef Aws::Utils::Outcome<UpdatePullThroughCacheRuleResult, ECRError> UpdatePullThroughCacheRuleOutcome;
      typedef Aws::Utils::Outcome<UpdateRepositoryCreationTemplateResult, ECRError> UpdateRepositoryCreationTemplateOutcome;
      typedef Aws::Utils::Outcome<UploadLayerPartResult, ECRError> UploadLayerPartOutcome;
      typedef Aws::Utils::Outcome<ValidatePullThroughCacheRuleResult, ECRError> ValidatePullThroughCacheRuleOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<BatchCheckLayerAvailabilityOutcome> BatchCheckLayerAvailabilityOutcomeCallable;
      typedef std::future<BatchDeleteImageOutcome> BatchDeleteImageOutcomeCallable;
      typedef std::future<BatchGetImageOutcome> BatchGetImageOutcomeCallable;
      typedef std::future<BatchGetRepositoryScanningConfigurationOutcome> BatchGetRepositoryScanningConfigurationOutcomeCallable;
      typedef std::future<CompleteLayerUploadOutcome> CompleteLayerUploadOutcomeCallable;
      typedef std::future<CreatePullThroughCacheRuleOutcome> CreatePullThroughCacheRuleOutcomeCallable;
      typedef std::future<CreateRepositoryOutcome> CreateRepositoryOutcomeCallable;
      typedef std::future<CreateRepositoryCreationTemplateOutcome> CreateRepositoryCreationTemplateOutcomeCallable;
      typedef std::future<DeleteLifecyclePolicyOutcome> DeleteLifecyclePolicyOutcomeCallable;
      typedef std::future<DeletePullThroughCacheRuleOutcome> DeletePullThroughCacheRuleOutcomeCallable;
      typedef std::future<DeleteRegistryPolicyOutcome> DeleteRegistryPolicyOutcomeCallable;
      typedef std::future<DeleteRepositoryOutcome> DeleteRepositoryOutcomeCallable;
      typedef std::future<DeleteRepositoryCreationTemplateOutcome> DeleteRepositoryCreationTemplateOutcomeCallable;
      typedef std::future<DeleteRepositoryPolicyOutcome> DeleteRepositoryPolicyOutcomeCallable;
      typedef std::future<DescribeImageReplicationStatusOutcome> DescribeImageReplicationStatusOutcomeCallable;
      typedef std::future<DescribeImageScanFindingsOutcome> DescribeImageScanFindingsOutcomeCallable;
      typedef std::future<DescribeImagesOutcome> DescribeImagesOutcomeCallable;
      typedef std::future<DescribePullThroughCacheRulesOutcome> DescribePullThroughCacheRulesOutcomeCallable;
      typedef std::future<DescribeRegistryOutcome> DescribeRegistryOutcomeCallable;
      typedef std::future<DescribeRepositoriesOutcome> DescribeRepositoriesOutcomeCallable;
      typedef std::future<DescribeRepositoryCreationTemplatesOutcome> DescribeRepositoryCreationTemplatesOutcomeCallable;
      typedef std::future<GetAccountSettingOutcome> GetAccountSettingOutcomeCallable;
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
      typedef std::future<PutAccountSettingOutcome> PutAccountSettingOutcomeCallable;
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
      typedef std::future<UpdatePullThroughCacheRuleOutcome> UpdatePullThroughCacheRuleOutcomeCallable;
      typedef std::future<UpdateRepositoryCreationTemplateOutcome> UpdateRepositoryCreationTemplateOutcomeCallable;
      typedef std::future<UploadLayerPartOutcome> UploadLayerPartOutcomeCallable;
      typedef std::future<ValidatePullThroughCacheRuleOutcome> ValidatePullThroughCacheRuleOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class ECRClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const ECRClient*, const Model::BatchCheckLayerAvailabilityRequest&, const Model::BatchCheckLayerAvailabilityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchCheckLayerAvailabilityResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::BatchDeleteImageRequest&, const Model::BatchDeleteImageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDeleteImageResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::BatchGetImageRequest&, const Model::BatchGetImageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetImageResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::BatchGetRepositoryScanningConfigurationRequest&, const Model::BatchGetRepositoryScanningConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetRepositoryScanningConfigurationResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::CompleteLayerUploadRequest&, const Model::CompleteLayerUploadOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CompleteLayerUploadResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::CreatePullThroughCacheRuleRequest&, const Model::CreatePullThroughCacheRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePullThroughCacheRuleResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::CreateRepositoryRequest&, const Model::CreateRepositoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRepositoryResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::CreateRepositoryCreationTemplateRequest&, const Model::CreateRepositoryCreationTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRepositoryCreationTemplateResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::DeleteLifecyclePolicyRequest&, const Model::DeleteLifecyclePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLifecyclePolicyResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::DeletePullThroughCacheRuleRequest&, const Model::DeletePullThroughCacheRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePullThroughCacheRuleResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::DeleteRegistryPolicyRequest&, const Model::DeleteRegistryPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRegistryPolicyResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::DeleteRepositoryRequest&, const Model::DeleteRepositoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRepositoryResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::DeleteRepositoryCreationTemplateRequest&, const Model::DeleteRepositoryCreationTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRepositoryCreationTemplateResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::DeleteRepositoryPolicyRequest&, const Model::DeleteRepositoryPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRepositoryPolicyResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::DescribeImageReplicationStatusRequest&, const Model::DescribeImageReplicationStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeImageReplicationStatusResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::DescribeImageScanFindingsRequest&, const Model::DescribeImageScanFindingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeImageScanFindingsResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::DescribeImagesRequest&, const Model::DescribeImagesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeImagesResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::DescribePullThroughCacheRulesRequest&, const Model::DescribePullThroughCacheRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePullThroughCacheRulesResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::DescribeRegistryRequest&, const Model::DescribeRegistryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRegistryResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::DescribeRepositoriesRequest&, const Model::DescribeRepositoriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRepositoriesResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::DescribeRepositoryCreationTemplatesRequest&, const Model::DescribeRepositoryCreationTemplatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRepositoryCreationTemplatesResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::GetAccountSettingRequest&, const Model::GetAccountSettingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccountSettingResponseReceivedHandler;
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
    typedef std::function<void(const ECRClient*, const Model::PutAccountSettingRequest&, const Model::PutAccountSettingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutAccountSettingResponseReceivedHandler;
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
    typedef std::function<void(const ECRClient*, const Model::UpdatePullThroughCacheRuleRequest&, const Model::UpdatePullThroughCacheRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePullThroughCacheRuleResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::UpdateRepositoryCreationTemplateRequest&, const Model::UpdateRepositoryCreationTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRepositoryCreationTemplateResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::UploadLayerPartRequest&, const Model::UploadLayerPartOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UploadLayerPartResponseReceivedHandler;
    typedef std::function<void(const ECRClient*, const Model::ValidatePullThroughCacheRuleRequest&, const Model::ValidatePullThroughCacheRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ValidatePullThroughCacheRuleResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace ECR
} // namespace Aws
