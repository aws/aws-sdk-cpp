/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/aiops/AIOpsErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/aiops/AIOpsEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in AIOpsClient header */
#include <aws/aiops/model/CreateInvestigationGroupResult.h>
#include <aws/aiops/model/DeleteInvestigationGroupPolicyResult.h>
#include <aws/aiops/model/GetInvestigationGroupResult.h>
#include <aws/aiops/model/GetInvestigationGroupPolicyResult.h>
#include <aws/aiops/model/ListInvestigationGroupsResult.h>
#include <aws/aiops/model/ListTagsForResourceResult.h>
#include <aws/aiops/model/PutInvestigationGroupPolicyResult.h>
#include <aws/aiops/model/TagResourceResult.h>
#include <aws/aiops/model/UntagResourceResult.h>
#include <aws/aiops/model/UpdateInvestigationGroupResult.h>
#include <aws/aiops/model/ListInvestigationGroupsRequest.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in AIOpsClient header */

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

  namespace AIOps
  {
    using AIOpsClientConfiguration = Aws::Client::GenericClientConfiguration;
    using AIOpsEndpointProviderBase = Aws::AIOps::Endpoint::AIOpsEndpointProviderBase;
    using AIOpsEndpointProvider = Aws::AIOps::Endpoint::AIOpsEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in AIOpsClient header */
      class CreateInvestigationGroupRequest;
      class DeleteInvestigationGroupRequest;
      class DeleteInvestigationGroupPolicyRequest;
      class GetInvestigationGroupRequest;
      class GetInvestigationGroupPolicyRequest;
      class ListInvestigationGroupsRequest;
      class ListTagsForResourceRequest;
      class PutInvestigationGroupPolicyRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateInvestigationGroupRequest;
      /* End of service model forward declarations required in AIOpsClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateInvestigationGroupResult, AIOpsError> CreateInvestigationGroupOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, AIOpsError> DeleteInvestigationGroupOutcome;
      typedef Aws::Utils::Outcome<DeleteInvestigationGroupPolicyResult, AIOpsError> DeleteInvestigationGroupPolicyOutcome;
      typedef Aws::Utils::Outcome<GetInvestigationGroupResult, AIOpsError> GetInvestigationGroupOutcome;
      typedef Aws::Utils::Outcome<GetInvestigationGroupPolicyResult, AIOpsError> GetInvestigationGroupPolicyOutcome;
      typedef Aws::Utils::Outcome<ListInvestigationGroupsResult, AIOpsError> ListInvestigationGroupsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, AIOpsError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<PutInvestigationGroupPolicyResult, AIOpsError> PutInvestigationGroupPolicyOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, AIOpsError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, AIOpsError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateInvestigationGroupResult, AIOpsError> UpdateInvestigationGroupOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateInvestigationGroupOutcome> CreateInvestigationGroupOutcomeCallable;
      typedef std::future<DeleteInvestigationGroupOutcome> DeleteInvestigationGroupOutcomeCallable;
      typedef std::future<DeleteInvestigationGroupPolicyOutcome> DeleteInvestigationGroupPolicyOutcomeCallable;
      typedef std::future<GetInvestigationGroupOutcome> GetInvestigationGroupOutcomeCallable;
      typedef std::future<GetInvestigationGroupPolicyOutcome> GetInvestigationGroupPolicyOutcomeCallable;
      typedef std::future<ListInvestigationGroupsOutcome> ListInvestigationGroupsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<PutInvestigationGroupPolicyOutcome> PutInvestigationGroupPolicyOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateInvestigationGroupOutcome> UpdateInvestigationGroupOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class AIOpsClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const AIOpsClient*, const Model::CreateInvestigationGroupRequest&, const Model::CreateInvestigationGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateInvestigationGroupResponseReceivedHandler;
    typedef std::function<void(const AIOpsClient*, const Model::DeleteInvestigationGroupRequest&, const Model::DeleteInvestigationGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteInvestigationGroupResponseReceivedHandler;
    typedef std::function<void(const AIOpsClient*, const Model::DeleteInvestigationGroupPolicyRequest&, const Model::DeleteInvestigationGroupPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteInvestigationGroupPolicyResponseReceivedHandler;
    typedef std::function<void(const AIOpsClient*, const Model::GetInvestigationGroupRequest&, const Model::GetInvestigationGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInvestigationGroupResponseReceivedHandler;
    typedef std::function<void(const AIOpsClient*, const Model::GetInvestigationGroupPolicyRequest&, const Model::GetInvestigationGroupPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInvestigationGroupPolicyResponseReceivedHandler;
    typedef std::function<void(const AIOpsClient*, const Model::ListInvestigationGroupsRequest&, const Model::ListInvestigationGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInvestigationGroupsResponseReceivedHandler;
    typedef std::function<void(const AIOpsClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const AIOpsClient*, const Model::PutInvestigationGroupPolicyRequest&, const Model::PutInvestigationGroupPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutInvestigationGroupPolicyResponseReceivedHandler;
    typedef std::function<void(const AIOpsClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const AIOpsClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const AIOpsClient*, const Model::UpdateInvestigationGroupRequest&, const Model::UpdateInvestigationGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateInvestigationGroupResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace AIOps
} // namespace Aws
