/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/kendra-ranking/KendraRankingErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/kendra-ranking/KendraRankingEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in KendraRankingClient header */
#include <aws/kendra-ranking/model/CreateRescoreExecutionPlanResult.h>
#include <aws/kendra-ranking/model/DescribeRescoreExecutionPlanResult.h>
#include <aws/kendra-ranking/model/ListRescoreExecutionPlansResult.h>
#include <aws/kendra-ranking/model/ListTagsForResourceResult.h>
#include <aws/kendra-ranking/model/RescoreResult.h>
#include <aws/kendra-ranking/model/TagResourceResult.h>
#include <aws/kendra-ranking/model/UntagResourceResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in KendraRankingClient header */

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

  namespace KendraRanking
  {
    using KendraRankingClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using KendraRankingEndpointProviderBase = Aws::KendraRanking::Endpoint::KendraRankingEndpointProviderBase;
    using KendraRankingEndpointProvider = Aws::KendraRanking::Endpoint::KendraRankingEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in KendraRankingClient header */
      class CreateRescoreExecutionPlanRequest;
      class DeleteRescoreExecutionPlanRequest;
      class DescribeRescoreExecutionPlanRequest;
      class ListRescoreExecutionPlansRequest;
      class ListTagsForResourceRequest;
      class RescoreRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateRescoreExecutionPlanRequest;
      /* End of service model forward declarations required in KendraRankingClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateRescoreExecutionPlanResult, KendraRankingError> CreateRescoreExecutionPlanOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, KendraRankingError> DeleteRescoreExecutionPlanOutcome;
      typedef Aws::Utils::Outcome<DescribeRescoreExecutionPlanResult, KendraRankingError> DescribeRescoreExecutionPlanOutcome;
      typedef Aws::Utils::Outcome<ListRescoreExecutionPlansResult, KendraRankingError> ListRescoreExecutionPlansOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, KendraRankingError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<RescoreResult, KendraRankingError> RescoreOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, KendraRankingError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, KendraRankingError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, KendraRankingError> UpdateRescoreExecutionPlanOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateRescoreExecutionPlanOutcome> CreateRescoreExecutionPlanOutcomeCallable;
      typedef std::future<DeleteRescoreExecutionPlanOutcome> DeleteRescoreExecutionPlanOutcomeCallable;
      typedef std::future<DescribeRescoreExecutionPlanOutcome> DescribeRescoreExecutionPlanOutcomeCallable;
      typedef std::future<ListRescoreExecutionPlansOutcome> ListRescoreExecutionPlansOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<RescoreOutcome> RescoreOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateRescoreExecutionPlanOutcome> UpdateRescoreExecutionPlanOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class KendraRankingClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const KendraRankingClient*, const Model::CreateRescoreExecutionPlanRequest&, const Model::CreateRescoreExecutionPlanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRescoreExecutionPlanResponseReceivedHandler;
    typedef std::function<void(const KendraRankingClient*, const Model::DeleteRescoreExecutionPlanRequest&, const Model::DeleteRescoreExecutionPlanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRescoreExecutionPlanResponseReceivedHandler;
    typedef std::function<void(const KendraRankingClient*, const Model::DescribeRescoreExecutionPlanRequest&, const Model::DescribeRescoreExecutionPlanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRescoreExecutionPlanResponseReceivedHandler;
    typedef std::function<void(const KendraRankingClient*, const Model::ListRescoreExecutionPlansRequest&, const Model::ListRescoreExecutionPlansOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRescoreExecutionPlansResponseReceivedHandler;
    typedef std::function<void(const KendraRankingClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const KendraRankingClient*, const Model::RescoreRequest&, const Model::RescoreOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RescoreResponseReceivedHandler;
    typedef std::function<void(const KendraRankingClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const KendraRankingClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const KendraRankingClient*, const Model::UpdateRescoreExecutionPlanRequest&, const Model::UpdateRescoreExecutionPlanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRescoreExecutionPlanResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace KendraRanking
} // namespace Aws
