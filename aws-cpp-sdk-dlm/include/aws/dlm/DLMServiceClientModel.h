/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/dlm/DLMErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/dlm/DLMEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in DLMClient header */
#include <aws/dlm/model/CreateLifecyclePolicyResult.h>
#include <aws/dlm/model/DeleteLifecyclePolicyResult.h>
#include <aws/dlm/model/GetLifecyclePoliciesResult.h>
#include <aws/dlm/model/GetLifecyclePolicyResult.h>
#include <aws/dlm/model/ListTagsForResourceResult.h>
#include <aws/dlm/model/TagResourceResult.h>
#include <aws/dlm/model/UntagResourceResult.h>
#include <aws/dlm/model/UpdateLifecyclePolicyResult.h>
/* End of service model headers required in DLMClient header */

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

  namespace DLM
  {
    using DLMClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using DLMEndpointProviderBase = Aws::DLM::Endpoint::DLMEndpointProviderBase;
    using DLMEndpointProvider = Aws::DLM::Endpoint::DLMEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in DLMClient header */
      class CreateLifecyclePolicyRequest;
      class DeleteLifecyclePolicyRequest;
      class GetLifecyclePoliciesRequest;
      class GetLifecyclePolicyRequest;
      class ListTagsForResourceRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateLifecyclePolicyRequest;
      /* End of service model forward declarations required in DLMClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateLifecyclePolicyResult, DLMError> CreateLifecyclePolicyOutcome;
      typedef Aws::Utils::Outcome<DeleteLifecyclePolicyResult, DLMError> DeleteLifecyclePolicyOutcome;
      typedef Aws::Utils::Outcome<GetLifecyclePoliciesResult, DLMError> GetLifecyclePoliciesOutcome;
      typedef Aws::Utils::Outcome<GetLifecyclePolicyResult, DLMError> GetLifecyclePolicyOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, DLMError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, DLMError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, DLMError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateLifecyclePolicyResult, DLMError> UpdateLifecyclePolicyOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateLifecyclePolicyOutcome> CreateLifecyclePolicyOutcomeCallable;
      typedef std::future<DeleteLifecyclePolicyOutcome> DeleteLifecyclePolicyOutcomeCallable;
      typedef std::future<GetLifecyclePoliciesOutcome> GetLifecyclePoliciesOutcomeCallable;
      typedef std::future<GetLifecyclePolicyOutcome> GetLifecyclePolicyOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateLifecyclePolicyOutcome> UpdateLifecyclePolicyOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class DLMClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const DLMClient*, const Model::CreateLifecyclePolicyRequest&, const Model::CreateLifecyclePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLifecyclePolicyResponseReceivedHandler;
    typedef std::function<void(const DLMClient*, const Model::DeleteLifecyclePolicyRequest&, const Model::DeleteLifecyclePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLifecyclePolicyResponseReceivedHandler;
    typedef std::function<void(const DLMClient*, const Model::GetLifecyclePoliciesRequest&, const Model::GetLifecyclePoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLifecyclePoliciesResponseReceivedHandler;
    typedef std::function<void(const DLMClient*, const Model::GetLifecyclePolicyRequest&, const Model::GetLifecyclePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLifecyclePolicyResponseReceivedHandler;
    typedef std::function<void(const DLMClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const DLMClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const DLMClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const DLMClient*, const Model::UpdateLifecyclePolicyRequest&, const Model::UpdateLifecyclePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateLifecyclePolicyResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace DLM
} // namespace Aws
