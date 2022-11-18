/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/budgets/Budgets_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/budgets/BudgetsServiceClientModel.h>
#include <aws/budgets/BudgetsLegacyAsyncMacros.h>

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
  class AWS_BUDGETS_API BudgetsClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BudgetsClient(const Aws::Budgets::BudgetsClientConfiguration& clientConfiguration = Aws::Budgets::BudgetsClientConfiguration(),
                      std::shared_ptr<BudgetsEndpointProviderBase> endpointProvider = Aws::MakeShared<BudgetsEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BudgetsClient(const Aws::Auth::AWSCredentials& credentials,
                      std::shared_ptr<BudgetsEndpointProviderBase> endpointProvider = Aws::MakeShared<BudgetsEndpointProvider>(ALLOCATION_TAG),
                      const Aws::Budgets::BudgetsClientConfiguration& clientConfiguration = Aws::Budgets::BudgetsClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        BudgetsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      std::shared_ptr<BudgetsEndpointProviderBase> endpointProvider = Aws::MakeShared<BudgetsEndpointProvider>(ALLOCATION_TAG),
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
         * <p> Creates a budget action. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/CreateBudgetAction">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBudgetActionOutcome CreateBudgetAction(const Model::CreateBudgetActionRequest& request) const;


        /**
         * <p>Creates a notification. You must create the budget before you create the
         * associated notification.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/CreateNotification">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNotificationOutcome CreateNotification(const Model::CreateNotificationRequest& request) const;


        /**
         * <p>Creates a subscriber. You must create the associated budget and notification
         * before you create the subscriber.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/CreateSubscriber">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSubscriberOutcome CreateSubscriber(const Model::CreateSubscriberRequest& request) const;


        /**
         * <p>Deletes a budget. You can delete your budget at any time.</p> 
         * <p>Deleting a budget also deletes the notifications and subscribers that are
         * associated with that budget.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/DeleteBudget">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBudgetOutcome DeleteBudget(const Model::DeleteBudgetRequest& request) const;


        /**
         * <p> Deletes a budget action. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/DeleteBudgetAction">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBudgetActionOutcome DeleteBudgetAction(const Model::DeleteBudgetActionRequest& request) const;


        /**
         * <p>Deletes a notification.</p>  <p>Deleting a notification also
         * deletes the subscribers that are associated with the notification.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/DeleteNotification">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNotificationOutcome DeleteNotification(const Model::DeleteNotificationRequest& request) const;


        /**
         * <p>Deletes a subscriber.</p>  <p>Deleting the last subscriber to a
         * notification also deletes the notification.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/DeleteSubscriber">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSubscriberOutcome DeleteSubscriber(const Model::DeleteSubscriberRequest& request) const;


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
         * <p> Describes a budget action detail. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/DescribeBudgetAction">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBudgetActionOutcome DescribeBudgetAction(const Model::DescribeBudgetActionRequest& request) const;


        /**
         * <p> Describes a budget action history detail. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/DescribeBudgetActionHistories">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBudgetActionHistoriesOutcome DescribeBudgetActionHistories(const Model::DescribeBudgetActionHistoriesRequest& request) const;


        /**
         * <p> Describes all of the budget actions for an account. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/DescribeBudgetActionsForAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBudgetActionsForAccountOutcome DescribeBudgetActionsForAccount(const Model::DescribeBudgetActionsForAccountRequest& request) const;


        /**
         * <p> Describes all of the budget actions for a budget. </p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/DescribeBudgetActionsForBudget">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBudgetActionsForBudgetOutcome DescribeBudgetActionsForBudget(const Model::DescribeBudgetActionsForBudgetRequest& request) const;


        /**
         * <p> Lists the budget names and notifications that are associated with an
         * account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/DescribeBudgetNotificationsForAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBudgetNotificationsForAccountOutcome DescribeBudgetNotificationsForAccount(const Model::DescribeBudgetNotificationsForAccountRequest& request) const;


        /**
         * <p>Describes the history for <code>DAILY</code>, <code>MONTHLY</code>, and
         * <code>QUARTERLY</code> budgets. Budget history isn't available for
         * <code>ANNUAL</code> budgets.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/DescribeBudgetPerformanceHistory">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBudgetPerformanceHistoryOutcome DescribeBudgetPerformanceHistory(const Model::DescribeBudgetPerformanceHistoryRequest& request) const;


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
         * <p>Lists the notifications that are associated with a budget.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/DescribeNotificationsForBudget">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeNotificationsForBudgetOutcome DescribeNotificationsForBudget(const Model::DescribeNotificationsForBudgetRequest& request) const;


        /**
         * <p>Lists the subscribers that are associated with a notification.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/DescribeSubscribersForNotification">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSubscribersForNotificationOutcome DescribeSubscribersForNotification(const Model::DescribeSubscribersForNotificationRequest& request) const;


        /**
         * <p> Executes a budget action. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/ExecuteBudgetAction">AWS
         * API Reference</a></p>
         */
        virtual Model::ExecuteBudgetActionOutcome ExecuteBudgetAction(const Model::ExecuteBudgetActionRequest& request) const;


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
         * <p> Updates a budget action. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/UpdateBudgetAction">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBudgetActionOutcome UpdateBudgetAction(const Model::UpdateBudgetActionRequest& request) const;


        /**
         * <p>Updates a notification.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/UpdateNotification">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateNotificationOutcome UpdateNotification(const Model::UpdateNotificationRequest& request) const;


        /**
         * <p>Updates a subscriber.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/UpdateSubscriber">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSubscriberOutcome UpdateSubscriber(const Model::UpdateSubscriberRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<BudgetsEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const BudgetsClientConfiguration& clientConfiguration);

      BudgetsClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<BudgetsEndpointProviderBase> m_endpointProvider;
  };

} // namespace Budgets
} // namespace Aws
