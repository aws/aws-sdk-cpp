/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/budgets/Budgets_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/budgets/BudgetsServiceClientModel.h>

namespace Aws
{
namespace Budgets
{
  /**
   * <p>Use the Amazon Web Services Budgets API to plan your service usage, service
   * costs, and instance reservations. This API reference provides descriptions,
   * syntax, and usage examples for each of the actions and data types for the Amazon
   * Web Services Budgets feature. </p> <p>Budgets provide you with a way to see the
   * following information:</p> <ul> <li> <p>How close your plan is to your budgeted
   * amount or to the free tier limits</p> </li> <li> <p>Your usage-to-date,
   * including how much you've used of your Reserved Instances (RIs)</p> </li> <li>
   * <p>Your current estimated charges from Amazon Web Services, and how much your
   * predicted usage will accrue in charges by the end of the month</p> </li> <li>
   * <p>How much of your budget has been used</p> </li> </ul> <p>Amazon Web Services
   * updates your budget status several times a day. Budgets track your unblended
   * costs, subscriptions, refunds, and RIs. You can create the following types of
   * budgets:</p> <ul> <li> <p> <b>Cost budgets</b> - Plan how much you want to spend
   * on a service.</p> </li> <li> <p> <b>Usage budgets</b> - Plan how much you want
   * to use one or more services.</p> </li> <li> <p> <b>RI utilization budgets</b> -
   * Define a utilization threshold, and receive alerts when your RI usage falls
   * below that threshold. This lets you see if your RIs are unused or
   * under-utilized.</p> </li> <li> <p> <b>RI coverage budgets</b> - Define a
   * coverage threshold, and receive alerts when the number of your instance hours
   * that are covered by RIs fall below that threshold. This lets you see how much of
   * your instance usage is covered by a reservation.</p> </li> </ul> <p>Service
   * Endpoint</p> <p>The Amazon Web Services Budgets API provides the following
   * endpoint:</p> <ul> <li> <p>https://budgets.amazonaws.com</p> </li> </ul> <p>For
   * information about costs that are associated with the Amazon Web Services Budgets
   * API, see <a href="https://aws.amazon.com/aws-cost-management/pricing/">Amazon
   * Web Services Cost Management Pricing</a>.</p>
   */
  class AWS_BUDGETS_API BudgetsClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<BudgetsClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef BudgetsClientConfiguration ClientConfigurationType;
      typedef BudgetsEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BudgetsClient(const Aws::Budgets::BudgetsClientConfiguration& clientConfiguration = Aws::Budgets::BudgetsClientConfiguration(),
                      std::shared_ptr<BudgetsEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BudgetsClient(const Aws::Auth::AWSCredentials& credentials,
                      std::shared_ptr<BudgetsEndpointProviderBase> endpointProvider = nullptr,
                      const Aws::Budgets::BudgetsClientConfiguration& clientConfiguration = Aws::Budgets::BudgetsClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        BudgetsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      std::shared_ptr<BudgetsEndpointProviderBase> endpointProvider = nullptr,
                      const Aws::Budgets::BudgetsClientConfiguration& clientConfiguration = Aws::Budgets::BudgetsClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BudgetsClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BudgetsClient(const Aws::Auth::AWSCredentials& credentials,
                      const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        BudgetsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~BudgetsClient();

        /**
         * <p>Creates a budget and, if included, notifications and subscribers. </p>
         *  <p>Only one of <code>BudgetLimit</code> or
         * <code>PlannedBudgetLimits</code> can be present in the syntax at one time. Use
         * the syntax that matches your case. The Request Syntax section shows the
         * <code>BudgetLimit</code> syntax. For <code>PlannedBudgetLimits</code>, see the
         * <a
         * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_budgets_CreateBudget.html#API_CreateBudget_Examples">Examples</a>
         * section. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/CreateBudget">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBudgetOutcome CreateBudget(const Model::CreateBudgetRequest& request) const;

        /**
         * A Callable wrapper for CreateBudget that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateBudgetRequestT = Model::CreateBudgetRequest>
        Model::CreateBudgetOutcomeCallable CreateBudgetCallable(const CreateBudgetRequestT& request) const
        {
            return SubmitCallable(&BudgetsClient::CreateBudget, request);
        }

        /**
         * An Async wrapper for CreateBudget that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateBudgetRequestT = Model::CreateBudgetRequest>
        void CreateBudgetAsync(const CreateBudgetRequestT& request, const CreateBudgetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BudgetsClient::CreateBudget, request, handler, context);
        }

        /**
         * <p> Creates a budget action. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/CreateBudgetAction">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBudgetActionOutcome CreateBudgetAction(const Model::CreateBudgetActionRequest& request) const;

        /**
         * A Callable wrapper for CreateBudgetAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateBudgetActionRequestT = Model::CreateBudgetActionRequest>
        Model::CreateBudgetActionOutcomeCallable CreateBudgetActionCallable(const CreateBudgetActionRequestT& request) const
        {
            return SubmitCallable(&BudgetsClient::CreateBudgetAction, request);
        }

        /**
         * An Async wrapper for CreateBudgetAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateBudgetActionRequestT = Model::CreateBudgetActionRequest>
        void CreateBudgetActionAsync(const CreateBudgetActionRequestT& request, const CreateBudgetActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BudgetsClient::CreateBudgetAction, request, handler, context);
        }

        /**
         * <p>Creates a notification. You must create the budget before you create the
         * associated notification.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/CreateNotification">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNotificationOutcome CreateNotification(const Model::CreateNotificationRequest& request) const;

        /**
         * A Callable wrapper for CreateNotification that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateNotificationRequestT = Model::CreateNotificationRequest>
        Model::CreateNotificationOutcomeCallable CreateNotificationCallable(const CreateNotificationRequestT& request) const
        {
            return SubmitCallable(&BudgetsClient::CreateNotification, request);
        }

        /**
         * An Async wrapper for CreateNotification that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateNotificationRequestT = Model::CreateNotificationRequest>
        void CreateNotificationAsync(const CreateNotificationRequestT& request, const CreateNotificationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BudgetsClient::CreateNotification, request, handler, context);
        }

        /**
         * <p>Creates a subscriber. You must create the associated budget and notification
         * before you create the subscriber.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/CreateSubscriber">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSubscriberOutcome CreateSubscriber(const Model::CreateSubscriberRequest& request) const;

        /**
         * A Callable wrapper for CreateSubscriber that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSubscriberRequestT = Model::CreateSubscriberRequest>
        Model::CreateSubscriberOutcomeCallable CreateSubscriberCallable(const CreateSubscriberRequestT& request) const
        {
            return SubmitCallable(&BudgetsClient::CreateSubscriber, request);
        }

        /**
         * An Async wrapper for CreateSubscriber that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSubscriberRequestT = Model::CreateSubscriberRequest>
        void CreateSubscriberAsync(const CreateSubscriberRequestT& request, const CreateSubscriberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BudgetsClient::CreateSubscriber, request, handler, context);
        }

        /**
         * <p>Deletes a budget. You can delete your budget at any time.</p> 
         * <p>Deleting a budget also deletes the notifications and subscribers that are
         * associated with that budget.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/DeleteBudget">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBudgetOutcome DeleteBudget(const Model::DeleteBudgetRequest& request) const;

        /**
         * A Callable wrapper for DeleteBudget that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteBudgetRequestT = Model::DeleteBudgetRequest>
        Model::DeleteBudgetOutcomeCallable DeleteBudgetCallable(const DeleteBudgetRequestT& request) const
        {
            return SubmitCallable(&BudgetsClient::DeleteBudget, request);
        }

        /**
         * An Async wrapper for DeleteBudget that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteBudgetRequestT = Model::DeleteBudgetRequest>
        void DeleteBudgetAsync(const DeleteBudgetRequestT& request, const DeleteBudgetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BudgetsClient::DeleteBudget, request, handler, context);
        }

        /**
         * <p> Deletes a budget action. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/DeleteBudgetAction">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBudgetActionOutcome DeleteBudgetAction(const Model::DeleteBudgetActionRequest& request) const;

        /**
         * A Callable wrapper for DeleteBudgetAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteBudgetActionRequestT = Model::DeleteBudgetActionRequest>
        Model::DeleteBudgetActionOutcomeCallable DeleteBudgetActionCallable(const DeleteBudgetActionRequestT& request) const
        {
            return SubmitCallable(&BudgetsClient::DeleteBudgetAction, request);
        }

        /**
         * An Async wrapper for DeleteBudgetAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteBudgetActionRequestT = Model::DeleteBudgetActionRequest>
        void DeleteBudgetActionAsync(const DeleteBudgetActionRequestT& request, const DeleteBudgetActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BudgetsClient::DeleteBudgetAction, request, handler, context);
        }

        /**
         * <p>Deletes a notification.</p>  <p>Deleting a notification also
         * deletes the subscribers that are associated with the notification.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/DeleteNotification">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNotificationOutcome DeleteNotification(const Model::DeleteNotificationRequest& request) const;

        /**
         * A Callable wrapper for DeleteNotification that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteNotificationRequestT = Model::DeleteNotificationRequest>
        Model::DeleteNotificationOutcomeCallable DeleteNotificationCallable(const DeleteNotificationRequestT& request) const
        {
            return SubmitCallable(&BudgetsClient::DeleteNotification, request);
        }

        /**
         * An Async wrapper for DeleteNotification that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteNotificationRequestT = Model::DeleteNotificationRequest>
        void DeleteNotificationAsync(const DeleteNotificationRequestT& request, const DeleteNotificationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BudgetsClient::DeleteNotification, request, handler, context);
        }

        /**
         * <p>Deletes a subscriber.</p>  <p>Deleting the last subscriber to a
         * notification also deletes the notification.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/DeleteSubscriber">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSubscriberOutcome DeleteSubscriber(const Model::DeleteSubscriberRequest& request) const;

        /**
         * A Callable wrapper for DeleteSubscriber that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSubscriberRequestT = Model::DeleteSubscriberRequest>
        Model::DeleteSubscriberOutcomeCallable DeleteSubscriberCallable(const DeleteSubscriberRequestT& request) const
        {
            return SubmitCallable(&BudgetsClient::DeleteSubscriber, request);
        }

        /**
         * An Async wrapper for DeleteSubscriber that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSubscriberRequestT = Model::DeleteSubscriberRequest>
        void DeleteSubscriberAsync(const DeleteSubscriberRequestT& request, const DeleteSubscriberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BudgetsClient::DeleteSubscriber, request, handler, context);
        }

        /**
         * <p>Describes a budget.</p>  <p>The Request Syntax section shows the
         * <code>BudgetLimit</code> syntax. For <code>PlannedBudgetLimits</code>, see the
         * <a
         * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_budgets_DescribeBudget.html#API_DescribeBudget_Examples">Examples</a>
         * section. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/DescribeBudget">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBudgetOutcome DescribeBudget(const Model::DescribeBudgetRequest& request) const;

        /**
         * A Callable wrapper for DescribeBudget that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeBudgetRequestT = Model::DescribeBudgetRequest>
        Model::DescribeBudgetOutcomeCallable DescribeBudgetCallable(const DescribeBudgetRequestT& request) const
        {
            return SubmitCallable(&BudgetsClient::DescribeBudget, request);
        }

        /**
         * An Async wrapper for DescribeBudget that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeBudgetRequestT = Model::DescribeBudgetRequest>
        void DescribeBudgetAsync(const DescribeBudgetRequestT& request, const DescribeBudgetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BudgetsClient::DescribeBudget, request, handler, context);
        }

        /**
         * <p> Describes a budget action detail. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/DescribeBudgetAction">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBudgetActionOutcome DescribeBudgetAction(const Model::DescribeBudgetActionRequest& request) const;

        /**
         * A Callable wrapper for DescribeBudgetAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeBudgetActionRequestT = Model::DescribeBudgetActionRequest>
        Model::DescribeBudgetActionOutcomeCallable DescribeBudgetActionCallable(const DescribeBudgetActionRequestT& request) const
        {
            return SubmitCallable(&BudgetsClient::DescribeBudgetAction, request);
        }

        /**
         * An Async wrapper for DescribeBudgetAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeBudgetActionRequestT = Model::DescribeBudgetActionRequest>
        void DescribeBudgetActionAsync(const DescribeBudgetActionRequestT& request, const DescribeBudgetActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BudgetsClient::DescribeBudgetAction, request, handler, context);
        }

        /**
         * <p> Describes a budget action history detail. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/DescribeBudgetActionHistories">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBudgetActionHistoriesOutcome DescribeBudgetActionHistories(const Model::DescribeBudgetActionHistoriesRequest& request) const;

        /**
         * A Callable wrapper for DescribeBudgetActionHistories that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeBudgetActionHistoriesRequestT = Model::DescribeBudgetActionHistoriesRequest>
        Model::DescribeBudgetActionHistoriesOutcomeCallable DescribeBudgetActionHistoriesCallable(const DescribeBudgetActionHistoriesRequestT& request) const
        {
            return SubmitCallable(&BudgetsClient::DescribeBudgetActionHistories, request);
        }

        /**
         * An Async wrapper for DescribeBudgetActionHistories that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeBudgetActionHistoriesRequestT = Model::DescribeBudgetActionHistoriesRequest>
        void DescribeBudgetActionHistoriesAsync(const DescribeBudgetActionHistoriesRequestT& request, const DescribeBudgetActionHistoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BudgetsClient::DescribeBudgetActionHistories, request, handler, context);
        }

        /**
         * <p> Describes all of the budget actions for an account. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/DescribeBudgetActionsForAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBudgetActionsForAccountOutcome DescribeBudgetActionsForAccount(const Model::DescribeBudgetActionsForAccountRequest& request) const;

        /**
         * A Callable wrapper for DescribeBudgetActionsForAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeBudgetActionsForAccountRequestT = Model::DescribeBudgetActionsForAccountRequest>
        Model::DescribeBudgetActionsForAccountOutcomeCallable DescribeBudgetActionsForAccountCallable(const DescribeBudgetActionsForAccountRequestT& request) const
        {
            return SubmitCallable(&BudgetsClient::DescribeBudgetActionsForAccount, request);
        }

        /**
         * An Async wrapper for DescribeBudgetActionsForAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeBudgetActionsForAccountRequestT = Model::DescribeBudgetActionsForAccountRequest>
        void DescribeBudgetActionsForAccountAsync(const DescribeBudgetActionsForAccountRequestT& request, const DescribeBudgetActionsForAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BudgetsClient::DescribeBudgetActionsForAccount, request, handler, context);
        }

        /**
         * <p> Describes all of the budget actions for a budget. </p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/DescribeBudgetActionsForBudget">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBudgetActionsForBudgetOutcome DescribeBudgetActionsForBudget(const Model::DescribeBudgetActionsForBudgetRequest& request) const;

        /**
         * A Callable wrapper for DescribeBudgetActionsForBudget that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeBudgetActionsForBudgetRequestT = Model::DescribeBudgetActionsForBudgetRequest>
        Model::DescribeBudgetActionsForBudgetOutcomeCallable DescribeBudgetActionsForBudgetCallable(const DescribeBudgetActionsForBudgetRequestT& request) const
        {
            return SubmitCallable(&BudgetsClient::DescribeBudgetActionsForBudget, request);
        }

        /**
         * An Async wrapper for DescribeBudgetActionsForBudget that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeBudgetActionsForBudgetRequestT = Model::DescribeBudgetActionsForBudgetRequest>
        void DescribeBudgetActionsForBudgetAsync(const DescribeBudgetActionsForBudgetRequestT& request, const DescribeBudgetActionsForBudgetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BudgetsClient::DescribeBudgetActionsForBudget, request, handler, context);
        }

        /**
         * <p> Lists the budget names and notifications that are associated with an
         * account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/DescribeBudgetNotificationsForAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBudgetNotificationsForAccountOutcome DescribeBudgetNotificationsForAccount(const Model::DescribeBudgetNotificationsForAccountRequest& request) const;

        /**
         * A Callable wrapper for DescribeBudgetNotificationsForAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeBudgetNotificationsForAccountRequestT = Model::DescribeBudgetNotificationsForAccountRequest>
        Model::DescribeBudgetNotificationsForAccountOutcomeCallable DescribeBudgetNotificationsForAccountCallable(const DescribeBudgetNotificationsForAccountRequestT& request) const
        {
            return SubmitCallable(&BudgetsClient::DescribeBudgetNotificationsForAccount, request);
        }

        /**
         * An Async wrapper for DescribeBudgetNotificationsForAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeBudgetNotificationsForAccountRequestT = Model::DescribeBudgetNotificationsForAccountRequest>
        void DescribeBudgetNotificationsForAccountAsync(const DescribeBudgetNotificationsForAccountRequestT& request, const DescribeBudgetNotificationsForAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BudgetsClient::DescribeBudgetNotificationsForAccount, request, handler, context);
        }

        /**
         * <p>Describes the history for <code>DAILY</code>, <code>MONTHLY</code>, and
         * <code>QUARTERLY</code> budgets. Budget history isn't available for
         * <code>ANNUAL</code> budgets.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/DescribeBudgetPerformanceHistory">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBudgetPerformanceHistoryOutcome DescribeBudgetPerformanceHistory(const Model::DescribeBudgetPerformanceHistoryRequest& request) const;

        /**
         * A Callable wrapper for DescribeBudgetPerformanceHistory that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeBudgetPerformanceHistoryRequestT = Model::DescribeBudgetPerformanceHistoryRequest>
        Model::DescribeBudgetPerformanceHistoryOutcomeCallable DescribeBudgetPerformanceHistoryCallable(const DescribeBudgetPerformanceHistoryRequestT& request) const
        {
            return SubmitCallable(&BudgetsClient::DescribeBudgetPerformanceHistory, request);
        }

        /**
         * An Async wrapper for DescribeBudgetPerformanceHistory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeBudgetPerformanceHistoryRequestT = Model::DescribeBudgetPerformanceHistoryRequest>
        void DescribeBudgetPerformanceHistoryAsync(const DescribeBudgetPerformanceHistoryRequestT& request, const DescribeBudgetPerformanceHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BudgetsClient::DescribeBudgetPerformanceHistory, request, handler, context);
        }

        /**
         * <p>Lists the budgets that are associated with an account.</p>  <p>The
         * Request Syntax section shows the <code>BudgetLimit</code> syntax. For
         * <code>PlannedBudgetLimits</code>, see the <a
         * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_budgets_DescribeBudgets.html#API_DescribeBudgets_Examples">Examples</a>
         * section. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/DescribeBudgets">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBudgetsOutcome DescribeBudgets(const Model::DescribeBudgetsRequest& request) const;

        /**
         * A Callable wrapper for DescribeBudgets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeBudgetsRequestT = Model::DescribeBudgetsRequest>
        Model::DescribeBudgetsOutcomeCallable DescribeBudgetsCallable(const DescribeBudgetsRequestT& request) const
        {
            return SubmitCallable(&BudgetsClient::DescribeBudgets, request);
        }

        /**
         * An Async wrapper for DescribeBudgets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeBudgetsRequestT = Model::DescribeBudgetsRequest>
        void DescribeBudgetsAsync(const DescribeBudgetsRequestT& request, const DescribeBudgetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BudgetsClient::DescribeBudgets, request, handler, context);
        }

        /**
         * <p>Lists the notifications that are associated with a budget.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/DescribeNotificationsForBudget">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeNotificationsForBudgetOutcome DescribeNotificationsForBudget(const Model::DescribeNotificationsForBudgetRequest& request) const;

        /**
         * A Callable wrapper for DescribeNotificationsForBudget that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeNotificationsForBudgetRequestT = Model::DescribeNotificationsForBudgetRequest>
        Model::DescribeNotificationsForBudgetOutcomeCallable DescribeNotificationsForBudgetCallable(const DescribeNotificationsForBudgetRequestT& request) const
        {
            return SubmitCallable(&BudgetsClient::DescribeNotificationsForBudget, request);
        }

        /**
         * An Async wrapper for DescribeNotificationsForBudget that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeNotificationsForBudgetRequestT = Model::DescribeNotificationsForBudgetRequest>
        void DescribeNotificationsForBudgetAsync(const DescribeNotificationsForBudgetRequestT& request, const DescribeNotificationsForBudgetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BudgetsClient::DescribeNotificationsForBudget, request, handler, context);
        }

        /**
         * <p>Lists the subscribers that are associated with a notification.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/DescribeSubscribersForNotification">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSubscribersForNotificationOutcome DescribeSubscribersForNotification(const Model::DescribeSubscribersForNotificationRequest& request) const;

        /**
         * A Callable wrapper for DescribeSubscribersForNotification that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeSubscribersForNotificationRequestT = Model::DescribeSubscribersForNotificationRequest>
        Model::DescribeSubscribersForNotificationOutcomeCallable DescribeSubscribersForNotificationCallable(const DescribeSubscribersForNotificationRequestT& request) const
        {
            return SubmitCallable(&BudgetsClient::DescribeSubscribersForNotification, request);
        }

        /**
         * An Async wrapper for DescribeSubscribersForNotification that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeSubscribersForNotificationRequestT = Model::DescribeSubscribersForNotificationRequest>
        void DescribeSubscribersForNotificationAsync(const DescribeSubscribersForNotificationRequestT& request, const DescribeSubscribersForNotificationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BudgetsClient::DescribeSubscribersForNotification, request, handler, context);
        }

        /**
         * <p> Executes a budget action. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/ExecuteBudgetAction">AWS
         * API Reference</a></p>
         */
        virtual Model::ExecuteBudgetActionOutcome ExecuteBudgetAction(const Model::ExecuteBudgetActionRequest& request) const;

        /**
         * A Callable wrapper for ExecuteBudgetAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ExecuteBudgetActionRequestT = Model::ExecuteBudgetActionRequest>
        Model::ExecuteBudgetActionOutcomeCallable ExecuteBudgetActionCallable(const ExecuteBudgetActionRequestT& request) const
        {
            return SubmitCallable(&BudgetsClient::ExecuteBudgetAction, request);
        }

        /**
         * An Async wrapper for ExecuteBudgetAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ExecuteBudgetActionRequestT = Model::ExecuteBudgetActionRequest>
        void ExecuteBudgetActionAsync(const ExecuteBudgetActionRequestT& request, const ExecuteBudgetActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BudgetsClient::ExecuteBudgetAction, request, handler, context);
        }

        /**
         * <p>Updates a budget. You can change every part of a budget except for the
         * <code>budgetName</code> and the <code>calculatedSpend</code>. When you modify a
         * budget, the <code>calculatedSpend</code> drops to zero until Amazon Web Services
         * has new usage data to use for forecasting.</p>  <p>Only one of
         * <code>BudgetLimit</code> or <code>PlannedBudgetLimits</code> can be present in
         * the syntax at one time. Use the syntax that matches your case. The Request
         * Syntax section shows the <code>BudgetLimit</code> syntax. For
         * <code>PlannedBudgetLimits</code>, see the <a
         * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_budgets_UpdateBudget.html#API_UpdateBudget_Examples">Examples</a>
         * section. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/UpdateBudget">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBudgetOutcome UpdateBudget(const Model::UpdateBudgetRequest& request) const;

        /**
         * A Callable wrapper for UpdateBudget that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateBudgetRequestT = Model::UpdateBudgetRequest>
        Model::UpdateBudgetOutcomeCallable UpdateBudgetCallable(const UpdateBudgetRequestT& request) const
        {
            return SubmitCallable(&BudgetsClient::UpdateBudget, request);
        }

        /**
         * An Async wrapper for UpdateBudget that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateBudgetRequestT = Model::UpdateBudgetRequest>
        void UpdateBudgetAsync(const UpdateBudgetRequestT& request, const UpdateBudgetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BudgetsClient::UpdateBudget, request, handler, context);
        }

        /**
         * <p> Updates a budget action. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/UpdateBudgetAction">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBudgetActionOutcome UpdateBudgetAction(const Model::UpdateBudgetActionRequest& request) const;

        /**
         * A Callable wrapper for UpdateBudgetAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateBudgetActionRequestT = Model::UpdateBudgetActionRequest>
        Model::UpdateBudgetActionOutcomeCallable UpdateBudgetActionCallable(const UpdateBudgetActionRequestT& request) const
        {
            return SubmitCallable(&BudgetsClient::UpdateBudgetAction, request);
        }

        /**
         * An Async wrapper for UpdateBudgetAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateBudgetActionRequestT = Model::UpdateBudgetActionRequest>
        void UpdateBudgetActionAsync(const UpdateBudgetActionRequestT& request, const UpdateBudgetActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BudgetsClient::UpdateBudgetAction, request, handler, context);
        }

        /**
         * <p>Updates a notification.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/UpdateNotification">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateNotificationOutcome UpdateNotification(const Model::UpdateNotificationRequest& request) const;

        /**
         * A Callable wrapper for UpdateNotification that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateNotificationRequestT = Model::UpdateNotificationRequest>
        Model::UpdateNotificationOutcomeCallable UpdateNotificationCallable(const UpdateNotificationRequestT& request) const
        {
            return SubmitCallable(&BudgetsClient::UpdateNotification, request);
        }

        /**
         * An Async wrapper for UpdateNotification that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateNotificationRequestT = Model::UpdateNotificationRequest>
        void UpdateNotificationAsync(const UpdateNotificationRequestT& request, const UpdateNotificationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BudgetsClient::UpdateNotification, request, handler, context);
        }

        /**
         * <p>Updates a subscriber.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/UpdateSubscriber">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSubscriberOutcome UpdateSubscriber(const Model::UpdateSubscriberRequest& request) const;

        /**
         * A Callable wrapper for UpdateSubscriber that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateSubscriberRequestT = Model::UpdateSubscriberRequest>
        Model::UpdateSubscriberOutcomeCallable UpdateSubscriberCallable(const UpdateSubscriberRequestT& request) const
        {
            return SubmitCallable(&BudgetsClient::UpdateSubscriber, request);
        }

        /**
         * An Async wrapper for UpdateSubscriber that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSubscriberRequestT = Model::UpdateSubscriberRequest>
        void UpdateSubscriberAsync(const UpdateSubscriberRequestT& request, const UpdateSubscriberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BudgetsClient::UpdateSubscriber, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<BudgetsEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<BudgetsClient>;
      void init(const BudgetsClientConfiguration& clientConfiguration);

      BudgetsClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<BudgetsEndpointProviderBase> m_endpointProvider;
  };

} // namespace Budgets
} // namespace Aws
