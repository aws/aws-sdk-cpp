/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-notifications/CodeStarNotifications_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/codestar-notifications/CodeStarNotificationsServiceClientModel.h>

namespace Aws
{
namespace CodeStarNotifications
{
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
   * <a>DeleteTarget</a>, which removes a notification rule target from a
   * notification rule. </p> </li> <li> <p> <a>ListTargets</a>, which lists the
   * targets associated with a notification rule. </p> </li> </ul> <p>Events, by
   * calling the following: </p> <ul> <li> <p> <a>ListEventTypes</a>, which lists the
   * event types you can include in a notification rule. </p> </li> </ul> <p>Tags, by
   * calling the following: </p> <ul> <li> <p> <a>ListTagsForResource</a>, which
   * lists the tags already associated with a notification rule in your account. </p>
   * </li> <li> <p> <a>TagResource</a>, which associates a tag you provide with a
   * notification rule in your account. </p> </li> <li> <p> <a>UntagResource</a>,
   * which removes a tag from a notification rule in your account. </p> </li> </ul>
   * <p> For information about how to use AWS CodeStar Notifications, see the <a
   * href="https://docs.aws.amazon.com/dtconsole/latest/userguide/what-is-dtconsole.html">Amazon
   * Web Services Developer Tools Console User Guide</a>. </p>
   */
  class AWS_CODESTARNOTIFICATIONS_API CodeStarNotificationsClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<CodeStarNotificationsClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef CodeStarNotificationsClientConfiguration ClientConfigurationType;
      typedef CodeStarNotificationsEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodeStarNotificationsClient(const Aws::CodeStarNotifications::CodeStarNotificationsClientConfiguration& clientConfiguration = Aws::CodeStarNotifications::CodeStarNotificationsClientConfiguration(),
                                    std::shared_ptr<CodeStarNotificationsEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodeStarNotificationsClient(const Aws::Auth::AWSCredentials& credentials,
                                    std::shared_ptr<CodeStarNotificationsEndpointProviderBase> endpointProvider = nullptr,
                                    const Aws::CodeStarNotifications::CodeStarNotificationsClientConfiguration& clientConfiguration = Aws::CodeStarNotifications::CodeStarNotificationsClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CodeStarNotificationsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                    std::shared_ptr<CodeStarNotificationsEndpointProviderBase> endpointProvider = nullptr,
                                    const Aws::CodeStarNotifications::CodeStarNotificationsClientConfiguration& clientConfiguration = Aws::CodeStarNotifications::CodeStarNotificationsClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodeStarNotificationsClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodeStarNotificationsClient(const Aws::Auth::AWSCredentials& credentials,
                                    const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CodeStarNotificationsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                    const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~CodeStarNotificationsClient();

        /**
         * <p>Creates a notification rule for a resource. The rule specifies the events you
         * want notifications about and the targets (such as Chatbot topics or Chatbot
         * clients configured for Slack) where you want to receive them.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-notifications-2019-10-15/CreateNotificationRule">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNotificationRuleOutcome CreateNotificationRule(const Model::CreateNotificationRuleRequest& request) const;

        /**
         * A Callable wrapper for CreateNotificationRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateNotificationRuleRequestT = Model::CreateNotificationRuleRequest>
        Model::CreateNotificationRuleOutcomeCallable CreateNotificationRuleCallable(const CreateNotificationRuleRequestT& request) const
        {
            return SubmitCallable(&CodeStarNotificationsClient::CreateNotificationRule, request);
        }

        /**
         * An Async wrapper for CreateNotificationRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateNotificationRuleRequestT = Model::CreateNotificationRuleRequest>
        void CreateNotificationRuleAsync(const CreateNotificationRuleRequestT& request, const CreateNotificationRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeStarNotificationsClient::CreateNotificationRule, request, handler, context);
        }

        /**
         * <p>Deletes a notification rule for a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-notifications-2019-10-15/DeleteNotificationRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNotificationRuleOutcome DeleteNotificationRule(const Model::DeleteNotificationRuleRequest& request) const;

        /**
         * A Callable wrapper for DeleteNotificationRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteNotificationRuleRequestT = Model::DeleteNotificationRuleRequest>
        Model::DeleteNotificationRuleOutcomeCallable DeleteNotificationRuleCallable(const DeleteNotificationRuleRequestT& request) const
        {
            return SubmitCallable(&CodeStarNotificationsClient::DeleteNotificationRule, request);
        }

        /**
         * An Async wrapper for DeleteNotificationRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteNotificationRuleRequestT = Model::DeleteNotificationRuleRequest>
        void DeleteNotificationRuleAsync(const DeleteNotificationRuleRequestT& request, const DeleteNotificationRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeStarNotificationsClient::DeleteNotificationRule, request, handler, context);
        }

        /**
         * <p>Deletes a specified target for notifications.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-notifications-2019-10-15/DeleteTarget">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTargetOutcome DeleteTarget(const Model::DeleteTargetRequest& request) const;

        /**
         * A Callable wrapper for DeleteTarget that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteTargetRequestT = Model::DeleteTargetRequest>
        Model::DeleteTargetOutcomeCallable DeleteTargetCallable(const DeleteTargetRequestT& request) const
        {
            return SubmitCallable(&CodeStarNotificationsClient::DeleteTarget, request);
        }

        /**
         * An Async wrapper for DeleteTarget that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTargetRequestT = Model::DeleteTargetRequest>
        void DeleteTargetAsync(const DeleteTargetRequestT& request, const DeleteTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeStarNotificationsClient::DeleteTarget, request, handler, context);
        }

        /**
         * <p>Returns information about a specified notification rule.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-notifications-2019-10-15/DescribeNotificationRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeNotificationRuleOutcome DescribeNotificationRule(const Model::DescribeNotificationRuleRequest& request) const;

        /**
         * A Callable wrapper for DescribeNotificationRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeNotificationRuleRequestT = Model::DescribeNotificationRuleRequest>
        Model::DescribeNotificationRuleOutcomeCallable DescribeNotificationRuleCallable(const DescribeNotificationRuleRequestT& request) const
        {
            return SubmitCallable(&CodeStarNotificationsClient::DescribeNotificationRule, request);
        }

        /**
         * An Async wrapper for DescribeNotificationRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeNotificationRuleRequestT = Model::DescribeNotificationRuleRequest>
        void DescribeNotificationRuleAsync(const DescribeNotificationRuleRequestT& request, const DescribeNotificationRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeStarNotificationsClient::DescribeNotificationRule, request, handler, context);
        }

        /**
         * <p>Returns information about the event types available for configuring
         * notifications.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-notifications-2019-10-15/ListEventTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEventTypesOutcome ListEventTypes(const Model::ListEventTypesRequest& request) const;

        /**
         * A Callable wrapper for ListEventTypes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListEventTypesRequestT = Model::ListEventTypesRequest>
        Model::ListEventTypesOutcomeCallable ListEventTypesCallable(const ListEventTypesRequestT& request) const
        {
            return SubmitCallable(&CodeStarNotificationsClient::ListEventTypes, request);
        }

        /**
         * An Async wrapper for ListEventTypes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEventTypesRequestT = Model::ListEventTypesRequest>
        void ListEventTypesAsync(const ListEventTypesRequestT& request, const ListEventTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeStarNotificationsClient::ListEventTypes, request, handler, context);
        }

        /**
         * <p>Returns a list of the notification rules for an Amazon Web Services
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-notifications-2019-10-15/ListNotificationRules">AWS
         * API Reference</a></p>
         */
        virtual Model::ListNotificationRulesOutcome ListNotificationRules(const Model::ListNotificationRulesRequest& request) const;

        /**
         * A Callable wrapper for ListNotificationRules that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListNotificationRulesRequestT = Model::ListNotificationRulesRequest>
        Model::ListNotificationRulesOutcomeCallable ListNotificationRulesCallable(const ListNotificationRulesRequestT& request) const
        {
            return SubmitCallable(&CodeStarNotificationsClient::ListNotificationRules, request);
        }

        /**
         * An Async wrapper for ListNotificationRules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListNotificationRulesRequestT = Model::ListNotificationRulesRequest>
        void ListNotificationRulesAsync(const ListNotificationRulesRequestT& request, const ListNotificationRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeStarNotificationsClient::ListNotificationRules, request, handler, context);
        }

        /**
         * <p>Returns a list of the tags associated with a notification rule.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-notifications-2019-10-15/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&CodeStarNotificationsClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeStarNotificationsClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Returns a list of the notification rule targets for an Amazon Web Services
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-notifications-2019-10-15/ListTargets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTargetsOutcome ListTargets(const Model::ListTargetsRequest& request) const;

        /**
         * A Callable wrapper for ListTargets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTargetsRequestT = Model::ListTargetsRequest>
        Model::ListTargetsOutcomeCallable ListTargetsCallable(const ListTargetsRequestT& request) const
        {
            return SubmitCallable(&CodeStarNotificationsClient::ListTargets, request);
        }

        /**
         * An Async wrapper for ListTargets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTargetsRequestT = Model::ListTargetsRequest>
        void ListTargetsAsync(const ListTargetsRequestT& request, const ListTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeStarNotificationsClient::ListTargets, request, handler, context);
        }

        /**
         * <p>Creates an association between a notification rule and an Chatbot topic or
         * Chatbot client so that the associated target can receive notifications when the
         * events described in the rule are triggered.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-notifications-2019-10-15/Subscribe">AWS
         * API Reference</a></p>
         */
        virtual Model::SubscribeOutcome Subscribe(const Model::SubscribeRequest& request) const;

        /**
         * A Callable wrapper for Subscribe that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SubscribeRequestT = Model::SubscribeRequest>
        Model::SubscribeOutcomeCallable SubscribeCallable(const SubscribeRequestT& request) const
        {
            return SubmitCallable(&CodeStarNotificationsClient::Subscribe, request);
        }

        /**
         * An Async wrapper for Subscribe that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SubscribeRequestT = Model::SubscribeRequest>
        void SubscribeAsync(const SubscribeRequestT& request, const SubscribeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeStarNotificationsClient::Subscribe, request, handler, context);
        }

        /**
         * <p>Associates a set of provided tags with a notification rule.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-notifications-2019-10-15/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&CodeStarNotificationsClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeStarNotificationsClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes an association between a notification rule and an Chatbot topic so
         * that subscribers to that topic stop receiving notifications when the events
         * described in the rule are triggered.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-notifications-2019-10-15/Unsubscribe">AWS
         * API Reference</a></p>
         */
        virtual Model::UnsubscribeOutcome Unsubscribe(const Model::UnsubscribeRequest& request) const;

        /**
         * A Callable wrapper for Unsubscribe that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UnsubscribeRequestT = Model::UnsubscribeRequest>
        Model::UnsubscribeOutcomeCallable UnsubscribeCallable(const UnsubscribeRequestT& request) const
        {
            return SubmitCallable(&CodeStarNotificationsClient::Unsubscribe, request);
        }

        /**
         * An Async wrapper for Unsubscribe that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UnsubscribeRequestT = Model::UnsubscribeRequest>
        void UnsubscribeAsync(const UnsubscribeRequestT& request, const UnsubscribeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeStarNotificationsClient::Unsubscribe, request, handler, context);
        }

        /**
         * <p>Removes the association between one or more provided tags and a notification
         * rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-notifications-2019-10-15/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&CodeStarNotificationsClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeStarNotificationsClient::UntagResource, request, handler, context);
        }

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
         * A Callable wrapper for UpdateNotificationRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateNotificationRuleRequestT = Model::UpdateNotificationRuleRequest>
        Model::UpdateNotificationRuleOutcomeCallable UpdateNotificationRuleCallable(const UpdateNotificationRuleRequestT& request) const
        {
            return SubmitCallable(&CodeStarNotificationsClient::UpdateNotificationRule, request);
        }

        /**
         * An Async wrapper for UpdateNotificationRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateNotificationRuleRequestT = Model::UpdateNotificationRuleRequest>
        void UpdateNotificationRuleAsync(const UpdateNotificationRuleRequestT& request, const UpdateNotificationRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeStarNotificationsClient::UpdateNotificationRule, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<CodeStarNotificationsEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<CodeStarNotificationsClient>;
      void init(const CodeStarNotificationsClientConfiguration& clientConfiguration);

      CodeStarNotificationsClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<CodeStarNotificationsEndpointProviderBase> m_endpointProvider;
  };

} // namespace CodeStarNotifications
} // namespace Aws
