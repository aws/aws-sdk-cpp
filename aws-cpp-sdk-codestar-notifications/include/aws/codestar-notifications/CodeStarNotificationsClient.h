/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-notifications/CodeStarNotifications_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/codestar-notifications/CodeStarNotificationsServiceClientModel.h>
#include <aws/codestar-notifications/CodeStarNotificationsLegacyAsyncMacros.h>

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
  class AWS_CODESTARNOTIFICATIONS_API CodeStarNotificationsClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodeStarNotificationsClient(const Aws::CodeStarNotifications::CodeStarNotificationsClientConfiguration& clientConfiguration = Aws::CodeStarNotifications::CodeStarNotificationsClientConfiguration(),
                                    std::shared_ptr<CodeStarNotificationsEndpointProviderBase> endpointProvider = Aws::MakeShared<CodeStarNotificationsEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodeStarNotificationsClient(const Aws::Auth::AWSCredentials& credentials,
                                    std::shared_ptr<CodeStarNotificationsEndpointProviderBase> endpointProvider = Aws::MakeShared<CodeStarNotificationsEndpointProvider>(ALLOCATION_TAG),
                                    const Aws::CodeStarNotifications::CodeStarNotificationsClientConfiguration& clientConfiguration = Aws::CodeStarNotifications::CodeStarNotificationsClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CodeStarNotificationsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                    std::shared_ptr<CodeStarNotificationsEndpointProviderBase> endpointProvider = Aws::MakeShared<CodeStarNotificationsEndpointProvider>(ALLOCATION_TAG),
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


        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         const RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncStreamingOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            const RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableStreamingOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }


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
         * <p>Deletes a notification rule for a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-notifications-2019-10-15/DeleteNotificationRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNotificationRuleOutcome DeleteNotificationRule(const Model::DeleteNotificationRuleRequest& request) const;


        /**
         * <p>Deletes a specified target for notifications.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-notifications-2019-10-15/DeleteTarget">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTargetOutcome DeleteTarget(const Model::DeleteTargetRequest& request) const;


        /**
         * <p>Returns information about a specified notification rule.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-notifications-2019-10-15/DescribeNotificationRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeNotificationRuleOutcome DescribeNotificationRule(const Model::DescribeNotificationRuleRequest& request) const;


        /**
         * <p>Returns information about the event types available for configuring
         * notifications.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-notifications-2019-10-15/ListEventTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEventTypesOutcome ListEventTypes(const Model::ListEventTypesRequest& request) const;


        /**
         * <p>Returns a list of the notification rules for an Amazon Web Services
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-notifications-2019-10-15/ListNotificationRules">AWS
         * API Reference</a></p>
         */
        virtual Model::ListNotificationRulesOutcome ListNotificationRules(const Model::ListNotificationRulesRequest& request) const;


        /**
         * <p>Returns a list of the tags associated with a notification rule.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-notifications-2019-10-15/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p>Returns a list of the notification rule targets for an Amazon Web Services
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-notifications-2019-10-15/ListTargets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTargetsOutcome ListTargets(const Model::ListTargetsRequest& request) const;


        /**
         * <p>Creates an association between a notification rule and an Chatbot topic or
         * Chatbot client so that the associated target can receive notifications when the
         * events described in the rule are triggered.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-notifications-2019-10-15/Subscribe">AWS
         * API Reference</a></p>
         */
        virtual Model::SubscribeOutcome Subscribe(const Model::SubscribeRequest& request) const;


        /**
         * <p>Associates a set of provided tags with a notification rule.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-notifications-2019-10-15/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Removes an association between a notification rule and an Chatbot topic so
         * that subscribers to that topic stop receiving notifications when the events
         * described in the rule are triggered.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-notifications-2019-10-15/Unsubscribe">AWS
         * API Reference</a></p>
         */
        virtual Model::UnsubscribeOutcome Unsubscribe(const Model::UnsubscribeRequest& request) const;


        /**
         * <p>Removes the association between one or more provided tags and a notification
         * rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-notifications-2019-10-15/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


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



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<CodeStarNotificationsEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const CodeStarNotificationsClientConfiguration& clientConfiguration);

      CodeStarNotificationsClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<CodeStarNotificationsEndpointProviderBase> m_endpointProvider;
  };

} // namespace CodeStarNotifications
} // namespace Aws
