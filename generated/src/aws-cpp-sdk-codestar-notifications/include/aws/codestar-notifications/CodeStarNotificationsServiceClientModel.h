/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/codestar-notifications/CodeStarNotificationsErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/codestar-notifications/CodeStarNotificationsEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in CodeStarNotificationsClient header */
#include <aws/codestar-notifications/model/CreateNotificationRuleResult.h>
#include <aws/codestar-notifications/model/DeleteNotificationRuleResult.h>
#include <aws/codestar-notifications/model/DeleteTargetResult.h>
#include <aws/codestar-notifications/model/DescribeNotificationRuleResult.h>
#include <aws/codestar-notifications/model/ListEventTypesResult.h>
#include <aws/codestar-notifications/model/ListNotificationRulesResult.h>
#include <aws/codestar-notifications/model/ListTagsForResourceResult.h>
#include <aws/codestar-notifications/model/ListTargetsResult.h>
#include <aws/codestar-notifications/model/SubscribeResult.h>
#include <aws/codestar-notifications/model/TagResourceResult.h>
#include <aws/codestar-notifications/model/UnsubscribeResult.h>
#include <aws/codestar-notifications/model/UntagResourceResult.h>
#include <aws/codestar-notifications/model/UpdateNotificationRuleResult.h>
/* End of service model headers required in CodeStarNotificationsClient header */

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

  namespace CodeStarNotifications
  {
    using CodeStarNotificationsClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using CodeStarNotificationsEndpointProviderBase = Aws::CodeStarNotifications::Endpoint::CodeStarNotificationsEndpointProviderBase;
    using CodeStarNotificationsEndpointProvider = Aws::CodeStarNotifications::Endpoint::CodeStarNotificationsEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in CodeStarNotificationsClient header */
      class CreateNotificationRuleRequest;
      class DeleteNotificationRuleRequest;
      class DeleteTargetRequest;
      class DescribeNotificationRuleRequest;
      class ListEventTypesRequest;
      class ListNotificationRulesRequest;
      class ListTagsForResourceRequest;
      class ListTargetsRequest;
      class SubscribeRequest;
      class TagResourceRequest;
      class UnsubscribeRequest;
      class UntagResourceRequest;
      class UpdateNotificationRuleRequest;
      /* End of service model forward declarations required in CodeStarNotificationsClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateNotificationRuleResult, CodeStarNotificationsError> CreateNotificationRuleOutcome;
      typedef Aws::Utils::Outcome<DeleteNotificationRuleResult, CodeStarNotificationsError> DeleteNotificationRuleOutcome;
      typedef Aws::Utils::Outcome<DeleteTargetResult, CodeStarNotificationsError> DeleteTargetOutcome;
      typedef Aws::Utils::Outcome<DescribeNotificationRuleResult, CodeStarNotificationsError> DescribeNotificationRuleOutcome;
      typedef Aws::Utils::Outcome<ListEventTypesResult, CodeStarNotificationsError> ListEventTypesOutcome;
      typedef Aws::Utils::Outcome<ListNotificationRulesResult, CodeStarNotificationsError> ListNotificationRulesOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, CodeStarNotificationsError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListTargetsResult, CodeStarNotificationsError> ListTargetsOutcome;
      typedef Aws::Utils::Outcome<SubscribeResult, CodeStarNotificationsError> SubscribeOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, CodeStarNotificationsError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UnsubscribeResult, CodeStarNotificationsError> UnsubscribeOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, CodeStarNotificationsError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateNotificationRuleResult, CodeStarNotificationsError> UpdateNotificationRuleOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateNotificationRuleOutcome> CreateNotificationRuleOutcomeCallable;
      typedef std::future<DeleteNotificationRuleOutcome> DeleteNotificationRuleOutcomeCallable;
      typedef std::future<DeleteTargetOutcome> DeleteTargetOutcomeCallable;
      typedef std::future<DescribeNotificationRuleOutcome> DescribeNotificationRuleOutcomeCallable;
      typedef std::future<ListEventTypesOutcome> ListEventTypesOutcomeCallable;
      typedef std::future<ListNotificationRulesOutcome> ListNotificationRulesOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListTargetsOutcome> ListTargetsOutcomeCallable;
      typedef std::future<SubscribeOutcome> SubscribeOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UnsubscribeOutcome> UnsubscribeOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateNotificationRuleOutcome> UpdateNotificationRuleOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class CodeStarNotificationsClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const CodeStarNotificationsClient*, const Model::CreateNotificationRuleRequest&, const Model::CreateNotificationRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateNotificationRuleResponseReceivedHandler;
    typedef std::function<void(const CodeStarNotificationsClient*, const Model::DeleteNotificationRuleRequest&, const Model::DeleteNotificationRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteNotificationRuleResponseReceivedHandler;
    typedef std::function<void(const CodeStarNotificationsClient*, const Model::DeleteTargetRequest&, const Model::DeleteTargetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTargetResponseReceivedHandler;
    typedef std::function<void(const CodeStarNotificationsClient*, const Model::DescribeNotificationRuleRequest&, const Model::DescribeNotificationRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeNotificationRuleResponseReceivedHandler;
    typedef std::function<void(const CodeStarNotificationsClient*, const Model::ListEventTypesRequest&, const Model::ListEventTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEventTypesResponseReceivedHandler;
    typedef std::function<void(const CodeStarNotificationsClient*, const Model::ListNotificationRulesRequest&, const Model::ListNotificationRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListNotificationRulesResponseReceivedHandler;
    typedef std::function<void(const CodeStarNotificationsClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const CodeStarNotificationsClient*, const Model::ListTargetsRequest&, const Model::ListTargetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTargetsResponseReceivedHandler;
    typedef std::function<void(const CodeStarNotificationsClient*, const Model::SubscribeRequest&, const Model::SubscribeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SubscribeResponseReceivedHandler;
    typedef std::function<void(const CodeStarNotificationsClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const CodeStarNotificationsClient*, const Model::UnsubscribeRequest&, const Model::UnsubscribeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UnsubscribeResponseReceivedHandler;
    typedef std::function<void(const CodeStarNotificationsClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const CodeStarNotificationsClient*, const Model::UpdateNotificationRuleRequest&, const Model::UpdateNotificationRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateNotificationRuleResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace CodeStarNotifications
} // namespace Aws
