/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/billing/BillingErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/billing/BillingEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in BillingClient header */
#include <aws/billing/model/CreateBillingViewResult.h>
#include <aws/billing/model/DeleteBillingViewResult.h>
#include <aws/billing/model/GetBillingViewResult.h>
#include <aws/billing/model/GetResourcePolicyResult.h>
#include <aws/billing/model/ListBillingViewsResult.h>
#include <aws/billing/model/ListSourceViewsForBillingViewResult.h>
#include <aws/billing/model/ListTagsForResourceResult.h>
#include <aws/billing/model/TagResourceResult.h>
#include <aws/billing/model/UntagResourceResult.h>
#include <aws/billing/model/UpdateBillingViewResult.h>
#include <aws/billing/model/ListBillingViewsRequest.h>
/* End of service model headers required in BillingClient header */

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

  namespace Billing
  {
    using BillingClientConfiguration = Aws::Client::GenericClientConfiguration;
    using BillingEndpointProviderBase = Aws::Billing::Endpoint::BillingEndpointProviderBase;
    using BillingEndpointProvider = Aws::Billing::Endpoint::BillingEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in BillingClient header */
      class CreateBillingViewRequest;
      class DeleteBillingViewRequest;
      class GetBillingViewRequest;
      class GetResourcePolicyRequest;
      class ListBillingViewsRequest;
      class ListSourceViewsForBillingViewRequest;
      class ListTagsForResourceRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateBillingViewRequest;
      /* End of service model forward declarations required in BillingClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateBillingViewResult, BillingError> CreateBillingViewOutcome;
      typedef Aws::Utils::Outcome<DeleteBillingViewResult, BillingError> DeleteBillingViewOutcome;
      typedef Aws::Utils::Outcome<GetBillingViewResult, BillingError> GetBillingViewOutcome;
      typedef Aws::Utils::Outcome<GetResourcePolicyResult, BillingError> GetResourcePolicyOutcome;
      typedef Aws::Utils::Outcome<ListBillingViewsResult, BillingError> ListBillingViewsOutcome;
      typedef Aws::Utils::Outcome<ListSourceViewsForBillingViewResult, BillingError> ListSourceViewsForBillingViewOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, BillingError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, BillingError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, BillingError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateBillingViewResult, BillingError> UpdateBillingViewOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateBillingViewOutcome> CreateBillingViewOutcomeCallable;
      typedef std::future<DeleteBillingViewOutcome> DeleteBillingViewOutcomeCallable;
      typedef std::future<GetBillingViewOutcome> GetBillingViewOutcomeCallable;
      typedef std::future<GetResourcePolicyOutcome> GetResourcePolicyOutcomeCallable;
      typedef std::future<ListBillingViewsOutcome> ListBillingViewsOutcomeCallable;
      typedef std::future<ListSourceViewsForBillingViewOutcome> ListSourceViewsForBillingViewOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateBillingViewOutcome> UpdateBillingViewOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class BillingClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const BillingClient*, const Model::CreateBillingViewRequest&, const Model::CreateBillingViewOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBillingViewResponseReceivedHandler;
    typedef std::function<void(const BillingClient*, const Model::DeleteBillingViewRequest&, const Model::DeleteBillingViewOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBillingViewResponseReceivedHandler;
    typedef std::function<void(const BillingClient*, const Model::GetBillingViewRequest&, const Model::GetBillingViewOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBillingViewResponseReceivedHandler;
    typedef std::function<void(const BillingClient*, const Model::GetResourcePolicyRequest&, const Model::GetResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const BillingClient*, const Model::ListBillingViewsRequest&, const Model::ListBillingViewsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBillingViewsResponseReceivedHandler;
    typedef std::function<void(const BillingClient*, const Model::ListSourceViewsForBillingViewRequest&, const Model::ListSourceViewsForBillingViewOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSourceViewsForBillingViewResponseReceivedHandler;
    typedef std::function<void(const BillingClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const BillingClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const BillingClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const BillingClient*, const Model::UpdateBillingViewRequest&, const Model::UpdateBillingViewOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateBillingViewResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace Billing
} // namespace Aws
