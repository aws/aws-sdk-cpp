/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/ecr-public/ECRPublicErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/ecr-public/ECRPublicEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in ECRPublicClient header */
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
/* End of service model headers required in ECRPublicClient header */

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
    using ECRPublicClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using ECRPublicEndpointProviderBase = Aws::ECRPublic::Endpoint::ECRPublicEndpointProviderBase;
    using ECRPublicEndpointProvider = Aws::ECRPublic::Endpoint::ECRPublicEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in ECRPublicClient header */
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
      /* End of service model forward declarations required in ECRPublicClient header */

      /* Service model Outcome class definitions */
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
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
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
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class ECRPublicClient;

    /* Service model async handlers definitions */
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
    /* End of service model async handlers definitions */
  } // namespace ECRPublic
} // namespace Aws
