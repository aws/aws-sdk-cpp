/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/opensearchserverless/OpenSearchServerlessErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/opensearchserverless/OpenSearchServerlessEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in OpenSearchServerlessClient header */
#include <aws/opensearchserverless/model/BatchGetCollectionResult.h>
#include <aws/opensearchserverless/model/BatchGetVpcEndpointResult.h>
#include <aws/opensearchserverless/model/CreateAccessPolicyResult.h>
#include <aws/opensearchserverless/model/CreateCollectionResult.h>
#include <aws/opensearchserverless/model/CreateSecurityConfigResult.h>
#include <aws/opensearchserverless/model/CreateSecurityPolicyResult.h>
#include <aws/opensearchserverless/model/CreateVpcEndpointResult.h>
#include <aws/opensearchserverless/model/DeleteAccessPolicyResult.h>
#include <aws/opensearchserverless/model/DeleteCollectionResult.h>
#include <aws/opensearchserverless/model/DeleteSecurityConfigResult.h>
#include <aws/opensearchserverless/model/DeleteSecurityPolicyResult.h>
#include <aws/opensearchserverless/model/DeleteVpcEndpointResult.h>
#include <aws/opensearchserverless/model/GetAccessPolicyResult.h>
#include <aws/opensearchserverless/model/GetAccountSettingsResult.h>
#include <aws/opensearchserverless/model/GetPoliciesStatsResult.h>
#include <aws/opensearchserverless/model/GetSecurityConfigResult.h>
#include <aws/opensearchserverless/model/GetSecurityPolicyResult.h>
#include <aws/opensearchserverless/model/ListAccessPoliciesResult.h>
#include <aws/opensearchserverless/model/ListCollectionsResult.h>
#include <aws/opensearchserverless/model/ListSecurityConfigsResult.h>
#include <aws/opensearchserverless/model/ListSecurityPoliciesResult.h>
#include <aws/opensearchserverless/model/ListTagsForResourceResult.h>
#include <aws/opensearchserverless/model/ListVpcEndpointsResult.h>
#include <aws/opensearchserverless/model/TagResourceResult.h>
#include <aws/opensearchserverless/model/UntagResourceResult.h>
#include <aws/opensearchserverless/model/UpdateAccessPolicyResult.h>
#include <aws/opensearchserverless/model/UpdateAccountSettingsResult.h>
#include <aws/opensearchserverless/model/UpdateCollectionResult.h>
#include <aws/opensearchserverless/model/UpdateSecurityConfigResult.h>
#include <aws/opensearchserverless/model/UpdateSecurityPolicyResult.h>
#include <aws/opensearchserverless/model/UpdateVpcEndpointResult.h>
/* End of service model headers required in OpenSearchServerlessClient header */

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

  namespace OpenSearchServerless
  {
    using OpenSearchServerlessClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using OpenSearchServerlessEndpointProviderBase = Aws::OpenSearchServerless::Endpoint::OpenSearchServerlessEndpointProviderBase;
    using OpenSearchServerlessEndpointProvider = Aws::OpenSearchServerless::Endpoint::OpenSearchServerlessEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in OpenSearchServerlessClient header */
      class BatchGetCollectionRequest;
      class BatchGetVpcEndpointRequest;
      class CreateAccessPolicyRequest;
      class CreateCollectionRequest;
      class CreateSecurityConfigRequest;
      class CreateSecurityPolicyRequest;
      class CreateVpcEndpointRequest;
      class DeleteAccessPolicyRequest;
      class DeleteCollectionRequest;
      class DeleteSecurityConfigRequest;
      class DeleteSecurityPolicyRequest;
      class DeleteVpcEndpointRequest;
      class GetAccessPolicyRequest;
      class GetAccountSettingsRequest;
      class GetPoliciesStatsRequest;
      class GetSecurityConfigRequest;
      class GetSecurityPolicyRequest;
      class ListAccessPoliciesRequest;
      class ListCollectionsRequest;
      class ListSecurityConfigsRequest;
      class ListSecurityPoliciesRequest;
      class ListTagsForResourceRequest;
      class ListVpcEndpointsRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateAccessPolicyRequest;
      class UpdateAccountSettingsRequest;
      class UpdateCollectionRequest;
      class UpdateSecurityConfigRequest;
      class UpdateSecurityPolicyRequest;
      class UpdateVpcEndpointRequest;
      /* End of service model forward declarations required in OpenSearchServerlessClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<BatchGetCollectionResult, OpenSearchServerlessError> BatchGetCollectionOutcome;
      typedef Aws::Utils::Outcome<BatchGetVpcEndpointResult, OpenSearchServerlessError> BatchGetVpcEndpointOutcome;
      typedef Aws::Utils::Outcome<CreateAccessPolicyResult, OpenSearchServerlessError> CreateAccessPolicyOutcome;
      typedef Aws::Utils::Outcome<CreateCollectionResult, OpenSearchServerlessError> CreateCollectionOutcome;
      typedef Aws::Utils::Outcome<CreateSecurityConfigResult, OpenSearchServerlessError> CreateSecurityConfigOutcome;
      typedef Aws::Utils::Outcome<CreateSecurityPolicyResult, OpenSearchServerlessError> CreateSecurityPolicyOutcome;
      typedef Aws::Utils::Outcome<CreateVpcEndpointResult, OpenSearchServerlessError> CreateVpcEndpointOutcome;
      typedef Aws::Utils::Outcome<DeleteAccessPolicyResult, OpenSearchServerlessError> DeleteAccessPolicyOutcome;
      typedef Aws::Utils::Outcome<DeleteCollectionResult, OpenSearchServerlessError> DeleteCollectionOutcome;
      typedef Aws::Utils::Outcome<DeleteSecurityConfigResult, OpenSearchServerlessError> DeleteSecurityConfigOutcome;
      typedef Aws::Utils::Outcome<DeleteSecurityPolicyResult, OpenSearchServerlessError> DeleteSecurityPolicyOutcome;
      typedef Aws::Utils::Outcome<DeleteVpcEndpointResult, OpenSearchServerlessError> DeleteVpcEndpointOutcome;
      typedef Aws::Utils::Outcome<GetAccessPolicyResult, OpenSearchServerlessError> GetAccessPolicyOutcome;
      typedef Aws::Utils::Outcome<GetAccountSettingsResult, OpenSearchServerlessError> GetAccountSettingsOutcome;
      typedef Aws::Utils::Outcome<GetPoliciesStatsResult, OpenSearchServerlessError> GetPoliciesStatsOutcome;
      typedef Aws::Utils::Outcome<GetSecurityConfigResult, OpenSearchServerlessError> GetSecurityConfigOutcome;
      typedef Aws::Utils::Outcome<GetSecurityPolicyResult, OpenSearchServerlessError> GetSecurityPolicyOutcome;
      typedef Aws::Utils::Outcome<ListAccessPoliciesResult, OpenSearchServerlessError> ListAccessPoliciesOutcome;
      typedef Aws::Utils::Outcome<ListCollectionsResult, OpenSearchServerlessError> ListCollectionsOutcome;
      typedef Aws::Utils::Outcome<ListSecurityConfigsResult, OpenSearchServerlessError> ListSecurityConfigsOutcome;
      typedef Aws::Utils::Outcome<ListSecurityPoliciesResult, OpenSearchServerlessError> ListSecurityPoliciesOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, OpenSearchServerlessError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListVpcEndpointsResult, OpenSearchServerlessError> ListVpcEndpointsOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, OpenSearchServerlessError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, OpenSearchServerlessError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateAccessPolicyResult, OpenSearchServerlessError> UpdateAccessPolicyOutcome;
      typedef Aws::Utils::Outcome<UpdateAccountSettingsResult, OpenSearchServerlessError> UpdateAccountSettingsOutcome;
      typedef Aws::Utils::Outcome<UpdateCollectionResult, OpenSearchServerlessError> UpdateCollectionOutcome;
      typedef Aws::Utils::Outcome<UpdateSecurityConfigResult, OpenSearchServerlessError> UpdateSecurityConfigOutcome;
      typedef Aws::Utils::Outcome<UpdateSecurityPolicyResult, OpenSearchServerlessError> UpdateSecurityPolicyOutcome;
      typedef Aws::Utils::Outcome<UpdateVpcEndpointResult, OpenSearchServerlessError> UpdateVpcEndpointOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<BatchGetCollectionOutcome> BatchGetCollectionOutcomeCallable;
      typedef std::future<BatchGetVpcEndpointOutcome> BatchGetVpcEndpointOutcomeCallable;
      typedef std::future<CreateAccessPolicyOutcome> CreateAccessPolicyOutcomeCallable;
      typedef std::future<CreateCollectionOutcome> CreateCollectionOutcomeCallable;
      typedef std::future<CreateSecurityConfigOutcome> CreateSecurityConfigOutcomeCallable;
      typedef std::future<CreateSecurityPolicyOutcome> CreateSecurityPolicyOutcomeCallable;
      typedef std::future<CreateVpcEndpointOutcome> CreateVpcEndpointOutcomeCallable;
      typedef std::future<DeleteAccessPolicyOutcome> DeleteAccessPolicyOutcomeCallable;
      typedef std::future<DeleteCollectionOutcome> DeleteCollectionOutcomeCallable;
      typedef std::future<DeleteSecurityConfigOutcome> DeleteSecurityConfigOutcomeCallable;
      typedef std::future<DeleteSecurityPolicyOutcome> DeleteSecurityPolicyOutcomeCallable;
      typedef std::future<DeleteVpcEndpointOutcome> DeleteVpcEndpointOutcomeCallable;
      typedef std::future<GetAccessPolicyOutcome> GetAccessPolicyOutcomeCallable;
      typedef std::future<GetAccountSettingsOutcome> GetAccountSettingsOutcomeCallable;
      typedef std::future<GetPoliciesStatsOutcome> GetPoliciesStatsOutcomeCallable;
      typedef std::future<GetSecurityConfigOutcome> GetSecurityConfigOutcomeCallable;
      typedef std::future<GetSecurityPolicyOutcome> GetSecurityPolicyOutcomeCallable;
      typedef std::future<ListAccessPoliciesOutcome> ListAccessPoliciesOutcomeCallable;
      typedef std::future<ListCollectionsOutcome> ListCollectionsOutcomeCallable;
      typedef std::future<ListSecurityConfigsOutcome> ListSecurityConfigsOutcomeCallable;
      typedef std::future<ListSecurityPoliciesOutcome> ListSecurityPoliciesOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListVpcEndpointsOutcome> ListVpcEndpointsOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateAccessPolicyOutcome> UpdateAccessPolicyOutcomeCallable;
      typedef std::future<UpdateAccountSettingsOutcome> UpdateAccountSettingsOutcomeCallable;
      typedef std::future<UpdateCollectionOutcome> UpdateCollectionOutcomeCallable;
      typedef std::future<UpdateSecurityConfigOutcome> UpdateSecurityConfigOutcomeCallable;
      typedef std::future<UpdateSecurityPolicyOutcome> UpdateSecurityPolicyOutcomeCallable;
      typedef std::future<UpdateVpcEndpointOutcome> UpdateVpcEndpointOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class OpenSearchServerlessClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const OpenSearchServerlessClient*, const Model::BatchGetCollectionRequest&, const Model::BatchGetCollectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetCollectionResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServerlessClient*, const Model::BatchGetVpcEndpointRequest&, const Model::BatchGetVpcEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetVpcEndpointResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServerlessClient*, const Model::CreateAccessPolicyRequest&, const Model::CreateAccessPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAccessPolicyResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServerlessClient*, const Model::CreateCollectionRequest&, const Model::CreateCollectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCollectionResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServerlessClient*, const Model::CreateSecurityConfigRequest&, const Model::CreateSecurityConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSecurityConfigResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServerlessClient*, const Model::CreateSecurityPolicyRequest&, const Model::CreateSecurityPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSecurityPolicyResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServerlessClient*, const Model::CreateVpcEndpointRequest&, const Model::CreateVpcEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVpcEndpointResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServerlessClient*, const Model::DeleteAccessPolicyRequest&, const Model::DeleteAccessPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAccessPolicyResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServerlessClient*, const Model::DeleteCollectionRequest&, const Model::DeleteCollectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCollectionResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServerlessClient*, const Model::DeleteSecurityConfigRequest&, const Model::DeleteSecurityConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSecurityConfigResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServerlessClient*, const Model::DeleteSecurityPolicyRequest&, const Model::DeleteSecurityPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSecurityPolicyResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServerlessClient*, const Model::DeleteVpcEndpointRequest&, const Model::DeleteVpcEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVpcEndpointResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServerlessClient*, const Model::GetAccessPolicyRequest&, const Model::GetAccessPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccessPolicyResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServerlessClient*, const Model::GetAccountSettingsRequest&, const Model::GetAccountSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccountSettingsResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServerlessClient*, const Model::GetPoliciesStatsRequest&, const Model::GetPoliciesStatsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPoliciesStatsResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServerlessClient*, const Model::GetSecurityConfigRequest&, const Model::GetSecurityConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSecurityConfigResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServerlessClient*, const Model::GetSecurityPolicyRequest&, const Model::GetSecurityPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSecurityPolicyResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServerlessClient*, const Model::ListAccessPoliciesRequest&, const Model::ListAccessPoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAccessPoliciesResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServerlessClient*, const Model::ListCollectionsRequest&, const Model::ListCollectionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCollectionsResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServerlessClient*, const Model::ListSecurityConfigsRequest&, const Model::ListSecurityConfigsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSecurityConfigsResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServerlessClient*, const Model::ListSecurityPoliciesRequest&, const Model::ListSecurityPoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSecurityPoliciesResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServerlessClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServerlessClient*, const Model::ListVpcEndpointsRequest&, const Model::ListVpcEndpointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListVpcEndpointsResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServerlessClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServerlessClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServerlessClient*, const Model::UpdateAccessPolicyRequest&, const Model::UpdateAccessPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAccessPolicyResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServerlessClient*, const Model::UpdateAccountSettingsRequest&, const Model::UpdateAccountSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAccountSettingsResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServerlessClient*, const Model::UpdateCollectionRequest&, const Model::UpdateCollectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCollectionResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServerlessClient*, const Model::UpdateSecurityConfigRequest&, const Model::UpdateSecurityConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSecurityConfigResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServerlessClient*, const Model::UpdateSecurityPolicyRequest&, const Model::UpdateSecurityPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSecurityPolicyResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServerlessClient*, const Model::UpdateVpcEndpointRequest&, const Model::UpdateVpcEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateVpcEndpointResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace OpenSearchServerless
} // namespace Aws
