/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-notifications/CodeStarNotifications_EXPORTS.h>
#include <aws/codestar-notifications/CodeStarNotificationsErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
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

namespace CodeStarNotifications
{

namespace Model
{
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
} // namespace Model

  class CodeStarNotificationsClient;

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

  /**
   * <p>This AWS CodeStar Notifications API Reference provides descriptions and usage
   * examples of the operations and data types for the AWS CodeStar Notifications
   * API. You can use the AWS CodeStar Notifications API to work with the following
   * objects:</p> <p>Notification rules, by calling the following: </p> <ul> <li> <p>
   * <a>CreateNotificationRule</a>, which creates a notification rule for a resource
   * in your account. </p> </li> <li> <p> <a>DeleteNotificationRule</a>, which
   * deletes a notification rule. </p> </li> <li> <p>
   * <a>DescribeNotificationRule</a>, which provides information about a notification
   * rule. </p> </li> <li> <p> <a>ListNotificationRules</a>, which lists the
   * notification rules associated with your account. </p> </li> <li> <p>
   * <a>UpdateNotificationRule</a>, which changes the name, events, or targets
   * associated with a notification rule. </p> </li> <li> <p> <a>Subscribe</a>, which
   * subscribes a target to a notification rule. </p> </li> <li> <p>
   * <a>Unsubscribe</a>, which removes a target from a notification rule. </p> </li>
   * </ul> <p>Targets, by calling the following: </p> <ul> <li> <p>
   * <a>DeleteTarget</a>, which removes a notification rule target (SNS topic) from a
   * notification rule. </p> </li> <li> <p> <a>ListTargets</a>, which lists the
   * targets associated with a notification rule. </p> </li> </ul> <p>Events, by
   * calling the following: </p> <ul> <li> <p> <a>ListEventTypes</a>, which lists the
   * event types you can include in a notification rule. </p> </li> </ul> <p>Tags, by
   * calling the following: </p> <ul> <li> <p> <a>ListTagsForResource</a>, which
   * lists the tags already associated with a notification rule in your account. </p>
   * </li> <li> <p> <a>TagResource</a>, which associates a tag you provide with a
   * notification rule in your account. </p> </li> <li> <p> <a>UntagResource</a>,
   * which removes a tag from a notification rule in your account. </p> </li> </ul>
   * <p> For information about how to use AWS CodeStar Notifications, see link in the
   * CodeStarNotifications User Guide. </p>
   */
  class AWS_CODESTARNOTIFICATIONS_API CodeStarNotificationsClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodeStarNotificationsClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodeStarNotificationsClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CodeStarNotificationsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~CodeStarNotificationsClient();


        /**
         * <p>Creates a notification rule for a resource. The rule specifies the events you
         * want notifications about and the targets (such as SNS topics) where you want to
         * receive them.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-notifications-2019-10-15/CreateNotificationRule">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNotificationRuleOutcome CreateNotificationRule(const Model::CreateNotificationRuleRequest& request) const;

        /**
         * <p>Creates a notification rule for a resource. The rule specifies the events you
         * want notifications about and the targets (such as SNS topics) where you want to
         * receive them.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-notifications-2019-10-15/CreateNotificationRule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateNotificationRuleOutcomeCallable CreateNotificationRuleCallable(const Model::CreateNotificationRuleRequest& request) const;

        /**
         * <p>Creates a notification rule for a resource. The rule specifies the events you
         * want notifications about and the targets (such as SNS topics) where you want to
         * receive them.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-notifications-2019-10-15/CreateNotificationRule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateNotificationRuleAsync(const Model::CreateNotificationRuleRequest& request, const CreateNotificationRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a notification rule for a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-notifications-2019-10-15/DeleteNotificationRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNotificationRuleOutcome DeleteNotificationRule(const Model::DeleteNotificationRuleRequest& request) const;

        /**
         * <p>Deletes a notification rule for a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-notifications-2019-10-15/DeleteNotificationRule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteNotificationRuleOutcomeCallable DeleteNotificationRuleCallable(const Model::DeleteNotificationRuleRequest& request) const;

        /**
         * <p>Deletes a notification rule for a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-notifications-2019-10-15/DeleteNotificationRule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteNotificationRuleAsync(const Model::DeleteNotificationRuleRequest& request, const DeleteNotificationRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a specified target for notifications.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-notifications-2019-10-15/DeleteTarget">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTargetOutcome DeleteTarget(const Model::DeleteTargetRequest& request) const;

        /**
         * <p>Deletes a specified target for notifications.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-notifications-2019-10-15/DeleteTarget">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTargetOutcomeCallable DeleteTargetCallable(const Model::DeleteTargetRequest& request) const;

        /**
         * <p>Deletes a specified target for notifications.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-notifications-2019-10-15/DeleteTarget">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTargetAsync(const Model::DeleteTargetRequest& request, const DeleteTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a specified notification rule.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-notifications-2019-10-15/DescribeNotificationRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeNotificationRuleOutcome DescribeNotificationRule(const Model::DescribeNotificationRuleRequest& request) const;

        /**
         * <p>Returns information about a specified notification rule.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-notifications-2019-10-15/DescribeNotificationRule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeNotificationRuleOutcomeCallable DescribeNotificationRuleCallable(const Model::DescribeNotificationRuleRequest& request) const;

        /**
         * <p>Returns information about a specified notification rule.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-notifications-2019-10-15/DescribeNotificationRule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeNotificationRuleAsync(const Model::DescribeNotificationRuleRequest& request, const DescribeNotificationRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the event types available for configuring
         * notifications.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-notifications-2019-10-15/ListEventTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEventTypesOutcome ListEventTypes(const Model::ListEventTypesRequest& request) const;

        /**
         * <p>Returns information about the event types available for configuring
         * notifications.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-notifications-2019-10-15/ListEventTypes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEventTypesOutcomeCallable ListEventTypesCallable(const Model::ListEventTypesRequest& request) const;

        /**
         * <p>Returns information about the event types available for configuring
         * notifications.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-notifications-2019-10-15/ListEventTypes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEventTypesAsync(const Model::ListEventTypesRequest& request, const ListEventTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of the notification rules for an AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-notifications-2019-10-15/ListNotificationRules">AWS
         * API Reference</a></p>
         */
        virtual Model::ListNotificationRulesOutcome ListNotificationRules(const Model::ListNotificationRulesRequest& request) const;

        /**
         * <p>Returns a list of the notification rules for an AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-notifications-2019-10-15/ListNotificationRules">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListNotificationRulesOutcomeCallable ListNotificationRulesCallable(const Model::ListNotificationRulesRequest& request) const;

        /**
         * <p>Returns a list of the notification rules for an AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-notifications-2019-10-15/ListNotificationRules">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListNotificationRulesAsync(const Model::ListNotificationRulesRequest& request, const ListNotificationRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of the tags associated with a notification rule.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-notifications-2019-10-15/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Returns a list of the tags associated with a notification rule.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-notifications-2019-10-15/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Returns a list of the tags associated with a notification rule.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-notifications-2019-10-15/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of the notification rule targets for an AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-notifications-2019-10-15/ListTargets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTargetsOutcome ListTargets(const Model::ListTargetsRequest& request) const;

        /**
         * <p>Returns a list of the notification rule targets for an AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-notifications-2019-10-15/ListTargets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTargetsOutcomeCallable ListTargetsCallable(const Model::ListTargetsRequest& request) const;

        /**
         * <p>Returns a list of the notification rule targets for an AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-notifications-2019-10-15/ListTargets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTargetsAsync(const Model::ListTargetsRequest& request, const ListTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an association between a notification rule and an SNS topic so that
         * the associated target can receive notifications when the events described in the
         * rule are triggered.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-notifications-2019-10-15/Subscribe">AWS
         * API Reference</a></p>
         */
        virtual Model::SubscribeOutcome Subscribe(const Model::SubscribeRequest& request) const;

        /**
         * <p>Creates an association between a notification rule and an SNS topic so that
         * the associated target can receive notifications when the events described in the
         * rule are triggered.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-notifications-2019-10-15/Subscribe">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SubscribeOutcomeCallable SubscribeCallable(const Model::SubscribeRequest& request) const;

        /**
         * <p>Creates an association between a notification rule and an SNS topic so that
         * the associated target can receive notifications when the events described in the
         * rule are triggered.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-notifications-2019-10-15/Subscribe">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SubscribeAsync(const Model::SubscribeRequest& request, const SubscribeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates a set of provided tags with a notification rule.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-notifications-2019-10-15/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Associates a set of provided tags with a notification rule.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-notifications-2019-10-15/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Associates a set of provided tags with a notification rule.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-notifications-2019-10-15/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes an association between a notification rule and an Amazon SNS topic so
         * that subscribers to that topic stop receiving notifications when the events
         * described in the rule are triggered.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-notifications-2019-10-15/Unsubscribe">AWS
         * API Reference</a></p>
         */
        virtual Model::UnsubscribeOutcome Unsubscribe(const Model::UnsubscribeRequest& request) const;

        /**
         * <p>Removes an association between a notification rule and an Amazon SNS topic so
         * that subscribers to that topic stop receiving notifications when the events
         * described in the rule are triggered.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-notifications-2019-10-15/Unsubscribe">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UnsubscribeOutcomeCallable UnsubscribeCallable(const Model::UnsubscribeRequest& request) const;

        /**
         * <p>Removes an association between a notification rule and an Amazon SNS topic so
         * that subscribers to that topic stop receiving notifications when the events
         * described in the rule are triggered.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-notifications-2019-10-15/Unsubscribe">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UnsubscribeAsync(const Model::UnsubscribeRequest& request, const UnsubscribeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the association between one or more provided tags and a notification
         * rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-notifications-2019-10-15/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes the association between one or more provided tags and a notification
         * rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-notifications-2019-10-15/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes the association between one or more provided tags and a notification
         * rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-notifications-2019-10-15/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a notification rule for a resource. You can change the events that
         * trigger the notification rule, the status of the rule, and the targets that
         * receive the notifications.</p>  <p>To add or remove tags for a
         * notification rule, you must use <a>TagResource</a> and <a>UntagResource</a>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-notifications-2019-10-15/UpdateNotificationRule">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateNotificationRuleOutcome UpdateNotificationRule(const Model::UpdateNotificationRuleRequest& request) const;

        /**
         * <p>Updates a notification rule for a resource. You can change the events that
         * trigger the notification rule, the status of the rule, and the targets that
         * receive the notifications.</p>  <p>To add or remove tags for a
         * notification rule, you must use <a>TagResource</a> and <a>UntagResource</a>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-notifications-2019-10-15/UpdateNotificationRule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateNotificationRuleOutcomeCallable UpdateNotificationRuleCallable(const Model::UpdateNotificationRuleRequest& request) const;

        /**
         * <p>Updates a notification rule for a resource. You can change the events that
         * trigger the notification rule, the status of the rule, and the targets that
         * receive the notifications.</p>  <p>To add or remove tags for a
         * notification rule, you must use <a>TagResource</a> and <a>UntagResource</a>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-notifications-2019-10-15/UpdateNotificationRule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateNotificationRuleAsync(const Model::UpdateNotificationRuleRequest& request, const UpdateNotificationRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateNotificationRuleAsyncHelper(const Model::CreateNotificationRuleRequest& request, const CreateNotificationRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteNotificationRuleAsyncHelper(const Model::DeleteNotificationRuleRequest& request, const DeleteNotificationRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteTargetAsyncHelper(const Model::DeleteTargetRequest& request, const DeleteTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeNotificationRuleAsyncHelper(const Model::DescribeNotificationRuleRequest& request, const DescribeNotificationRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListEventTypesAsyncHelper(const Model::ListEventTypesRequest& request, const ListEventTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListNotificationRulesAsyncHelper(const Model::ListNotificationRulesRequest& request, const ListNotificationRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTargetsAsyncHelper(const Model::ListTargetsRequest& request, const ListTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SubscribeAsyncHelper(const Model::SubscribeRequest& request, const SubscribeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UnsubscribeAsyncHelper(const Model::UnsubscribeRequest& request, const UnsubscribeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateNotificationRuleAsyncHelper(const Model::UpdateNotificationRuleRequest& request, const UpdateNotificationRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace CodeStarNotifications
} // namespace Aws
