/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/budgets/Budgets_EXPORTS.h>
#include <aws/budgets/BudgetsErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/budgets/model/CreateBudgetResult.h>
#include <aws/budgets/model/CreateNotificationResult.h>
#include <aws/budgets/model/CreateSubscriberResult.h>
#include <aws/budgets/model/DeleteBudgetResult.h>
#include <aws/budgets/model/DeleteNotificationResult.h>
#include <aws/budgets/model/DeleteSubscriberResult.h>
#include <aws/budgets/model/DescribeBudgetResult.h>
#include <aws/budgets/model/DescribeBudgetsResult.h>
#include <aws/budgets/model/DescribeNotificationsForBudgetResult.h>
#include <aws/budgets/model/DescribeSubscribersForNotificationResult.h>
#include <aws/budgets/model/UpdateBudgetResult.h>
#include <aws/budgets/model/UpdateNotificationResult.h>
#include <aws/budgets/model/UpdateSubscriberResult.h>
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

namespace Json
{
  class JsonValue;
} // namespace Json
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

namespace Budgets
{

namespace Model
{
        class CreateBudgetRequest;
        class CreateNotificationRequest;
        class CreateSubscriberRequest;
        class DeleteBudgetRequest;
        class DeleteNotificationRequest;
        class DeleteSubscriberRequest;
        class DescribeBudgetRequest;
        class DescribeBudgetsRequest;
        class DescribeNotificationsForBudgetRequest;
        class DescribeSubscribersForNotificationRequest;
        class UpdateBudgetRequest;
        class UpdateNotificationRequest;
        class UpdateSubscriberRequest;

        typedef Aws::Utils::Outcome<CreateBudgetResult, Aws::Client::AWSError<BudgetsErrors>> CreateBudgetOutcome;
        typedef Aws::Utils::Outcome<CreateNotificationResult, Aws::Client::AWSError<BudgetsErrors>> CreateNotificationOutcome;
        typedef Aws::Utils::Outcome<CreateSubscriberResult, Aws::Client::AWSError<BudgetsErrors>> CreateSubscriberOutcome;
        typedef Aws::Utils::Outcome<DeleteBudgetResult, Aws::Client::AWSError<BudgetsErrors>> DeleteBudgetOutcome;
        typedef Aws::Utils::Outcome<DeleteNotificationResult, Aws::Client::AWSError<BudgetsErrors>> DeleteNotificationOutcome;
        typedef Aws::Utils::Outcome<DeleteSubscriberResult, Aws::Client::AWSError<BudgetsErrors>> DeleteSubscriberOutcome;
        typedef Aws::Utils::Outcome<DescribeBudgetResult, Aws::Client::AWSError<BudgetsErrors>> DescribeBudgetOutcome;
        typedef Aws::Utils::Outcome<DescribeBudgetsResult, Aws::Client::AWSError<BudgetsErrors>> DescribeBudgetsOutcome;
        typedef Aws::Utils::Outcome<DescribeNotificationsForBudgetResult, Aws::Client::AWSError<BudgetsErrors>> DescribeNotificationsForBudgetOutcome;
        typedef Aws::Utils::Outcome<DescribeSubscribersForNotificationResult, Aws::Client::AWSError<BudgetsErrors>> DescribeSubscribersForNotificationOutcome;
        typedef Aws::Utils::Outcome<UpdateBudgetResult, Aws::Client::AWSError<BudgetsErrors>> UpdateBudgetOutcome;
        typedef Aws::Utils::Outcome<UpdateNotificationResult, Aws::Client::AWSError<BudgetsErrors>> UpdateNotificationOutcome;
        typedef Aws::Utils::Outcome<UpdateSubscriberResult, Aws::Client::AWSError<BudgetsErrors>> UpdateSubscriberOutcome;

        typedef std::future<CreateBudgetOutcome> CreateBudgetOutcomeCallable;
        typedef std::future<CreateNotificationOutcome> CreateNotificationOutcomeCallable;
        typedef std::future<CreateSubscriberOutcome> CreateSubscriberOutcomeCallable;
        typedef std::future<DeleteBudgetOutcome> DeleteBudgetOutcomeCallable;
        typedef std::future<DeleteNotificationOutcome> DeleteNotificationOutcomeCallable;
        typedef std::future<DeleteSubscriberOutcome> DeleteSubscriberOutcomeCallable;
        typedef std::future<DescribeBudgetOutcome> DescribeBudgetOutcomeCallable;
        typedef std::future<DescribeBudgetsOutcome> DescribeBudgetsOutcomeCallable;
        typedef std::future<DescribeNotificationsForBudgetOutcome> DescribeNotificationsForBudgetOutcomeCallable;
        typedef std::future<DescribeSubscribersForNotificationOutcome> DescribeSubscribersForNotificationOutcomeCallable;
        typedef std::future<UpdateBudgetOutcome> UpdateBudgetOutcomeCallable;
        typedef std::future<UpdateNotificationOutcome> UpdateNotificationOutcomeCallable;
        typedef std::future<UpdateSubscriberOutcome> UpdateSubscriberOutcomeCallable;
} // namespace Model

  class BudgetsClient;

    typedef std::function<void(const BudgetsClient*, const Model::CreateBudgetRequest&, const Model::CreateBudgetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBudgetResponseReceivedHandler;
    typedef std::function<void(const BudgetsClient*, const Model::CreateNotificationRequest&, const Model::CreateNotificationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateNotificationResponseReceivedHandler;
    typedef std::function<void(const BudgetsClient*, const Model::CreateSubscriberRequest&, const Model::CreateSubscriberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSubscriberResponseReceivedHandler;
    typedef std::function<void(const BudgetsClient*, const Model::DeleteBudgetRequest&, const Model::DeleteBudgetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBudgetResponseReceivedHandler;
    typedef std::function<void(const BudgetsClient*, const Model::DeleteNotificationRequest&, const Model::DeleteNotificationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteNotificationResponseReceivedHandler;
    typedef std::function<void(const BudgetsClient*, const Model::DeleteSubscriberRequest&, const Model::DeleteSubscriberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSubscriberResponseReceivedHandler;
    typedef std::function<void(const BudgetsClient*, const Model::DescribeBudgetRequest&, const Model::DescribeBudgetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeBudgetResponseReceivedHandler;
    typedef std::function<void(const BudgetsClient*, const Model::DescribeBudgetsRequest&, const Model::DescribeBudgetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeBudgetsResponseReceivedHandler;
    typedef std::function<void(const BudgetsClient*, const Model::DescribeNotificationsForBudgetRequest&, const Model::DescribeNotificationsForBudgetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeNotificationsForBudgetResponseReceivedHandler;
    typedef std::function<void(const BudgetsClient*, const Model::DescribeSubscribersForNotificationRequest&, const Model::DescribeSubscribersForNotificationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSubscribersForNotificationResponseReceivedHandler;
    typedef std::function<void(const BudgetsClient*, const Model::UpdateBudgetRequest&, const Model::UpdateBudgetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateBudgetResponseReceivedHandler;
    typedef std::function<void(const BudgetsClient*, const Model::UpdateNotificationRequest&, const Model::UpdateNotificationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateNotificationResponseReceivedHandler;
    typedef std::function<void(const BudgetsClient*, const Model::UpdateSubscriberRequest&, const Model::UpdateSubscriberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSubscriberResponseReceivedHandler;

  /**
   * <p>Budgets enable you to plan your service usage, service costs, and your RI
   * utilization. You can also track how close your plan is to your budgeted amount
   * or to the free tier limits. Budgets provide you with a quick way to see your
   * usage-to-date and current estimated charges from AWS and to see how much your
   * predicted usage accrues in charges by the end of the month. Budgets also compare
   * current estimates and charges to the amount that you indicated you want to use
   * or spend and lets you see how much of your budget has been used. AWS updates
   * your budget status several times a day. Budgets track your unblended costs,
   * subscriptions, and refunds. You can create the following types of budgets:</p>
   * <ul> <li> <p>Cost budgets allow you to say how much you want to spend on a
   * service.</p> </li> <li> <p>Usage budgets allow you to say how many hours you
   * want to use for one or more services.</p> </li> <li> <p>RI utilization budgets
   * allow you to define a utilization threshold and receive alerts when RIs are
   * tracking below that threshold.</p> </li> </ul> <p>You can create up to 20,000
   * budgets per AWS master account. Your first two budgets are free of charge. Each
   * additional budget costs $0.02 per day. You can set up optional notifications
   * that warn you if you exceed, or are forecasted to exceed, your budgeted amount.
   * You can have notifications sent to an Amazon SNS topic, to an email address, or
   * to both. For more information, see <a
   * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/budgets-sns-policy.html">Creating
   * an Amazon SNS Topic for Budget Notifications</a>. AWS Free Tier usage alerts via
   * AWS Budgets are provided for you, and do not count toward your budget
   * limits.</p> <p>Service Endpoint</p> <p>The AWS Budgets API provides the
   * following endpoint:</p> <ul> <li> <p>https://budgets.amazonaws.com</p> </li>
   * </ul> <p>For information about costs associated with the AWS Budgets API, see <a
   * href="https://aws.amazon.com/aws-cost-management/pricing/">AWS Cost Management
   * Pricing</a>.</p>
   */
  class AWS_BUDGETS_API BudgetsClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BudgetsClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BudgetsClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        BudgetsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~BudgetsClient();

        inline virtual const char* GetServiceClientName() const override { return "budgets"; }


        /**
         * <p>Creates a budget and, if included, notifications and subscribers.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/CreateBudget">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBudgetOutcome CreateBudget(const Model::CreateBudgetRequest& request) const;

        /**
         * <p>Creates a budget and, if included, notifications and subscribers.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/CreateBudget">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateBudgetOutcomeCallable CreateBudgetCallable(const Model::CreateBudgetRequest& request) const;

        /**
         * <p>Creates a budget and, if included, notifications and subscribers.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/CreateBudget">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateBudgetAsync(const Model::CreateBudgetRequest& request, const CreateBudgetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a notification. You must create the budget before you create the
         * associated notification.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/CreateNotification">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNotificationOutcome CreateNotification(const Model::CreateNotificationRequest& request) const;

        /**
         * <p>Creates a notification. You must create the budget before you create the
         * associated notification.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/CreateNotification">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateNotificationOutcomeCallable CreateNotificationCallable(const Model::CreateNotificationRequest& request) const;

        /**
         * <p>Creates a notification. You must create the budget before you create the
         * associated notification.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/CreateNotification">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateNotificationAsync(const Model::CreateNotificationRequest& request, const CreateNotificationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a subscriber. You must create the associated budget and notification
         * before you create the subscriber.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/CreateSubscriber">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSubscriberOutcome CreateSubscriber(const Model::CreateSubscriberRequest& request) const;

        /**
         * <p>Creates a subscriber. You must create the associated budget and notification
         * before you create the subscriber.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/CreateSubscriber">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSubscriberOutcomeCallable CreateSubscriberCallable(const Model::CreateSubscriberRequest& request) const;

        /**
         * <p>Creates a subscriber. You must create the associated budget and notification
         * before you create the subscriber.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/CreateSubscriber">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSubscriberAsync(const Model::CreateSubscriberRequest& request, const CreateSubscriberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a budget. You can delete your budget at any time.</p> <p> <b>Deleting
         * a budget also deletes the notifications and subscribers associated with that
         * budget.</b> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/DeleteBudget">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBudgetOutcome DeleteBudget(const Model::DeleteBudgetRequest& request) const;

        /**
         * <p>Deletes a budget. You can delete your budget at any time.</p> <p> <b>Deleting
         * a budget also deletes the notifications and subscribers associated with that
         * budget.</b> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/DeleteBudget">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBudgetOutcomeCallable DeleteBudgetCallable(const Model::DeleteBudgetRequest& request) const;

        /**
         * <p>Deletes a budget. You can delete your budget at any time.</p> <p> <b>Deleting
         * a budget also deletes the notifications and subscribers associated with that
         * budget.</b> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/DeleteBudget">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBudgetAsync(const Model::DeleteBudgetRequest& request, const DeleteBudgetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a notification.</p> <p> <b>Deleting a notification also deletes the
         * subscribers associated with the notification.</b> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/DeleteNotification">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNotificationOutcome DeleteNotification(const Model::DeleteNotificationRequest& request) const;

        /**
         * <p>Deletes a notification.</p> <p> <b>Deleting a notification also deletes the
         * subscribers associated with the notification.</b> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/DeleteNotification">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteNotificationOutcomeCallable DeleteNotificationCallable(const Model::DeleteNotificationRequest& request) const;

        /**
         * <p>Deletes a notification.</p> <p> <b>Deleting a notification also deletes the
         * subscribers associated with the notification.</b> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/DeleteNotification">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteNotificationAsync(const Model::DeleteNotificationRequest& request, const DeleteNotificationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a subscriber.</p> <p> <b>Deleting the last subscriber to a
         * notification also deletes the notification.</b> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/DeleteSubscriber">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSubscriberOutcome DeleteSubscriber(const Model::DeleteSubscriberRequest& request) const;

        /**
         * <p>Deletes a subscriber.</p> <p> <b>Deleting the last subscriber to a
         * notification also deletes the notification.</b> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/DeleteSubscriber">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSubscriberOutcomeCallable DeleteSubscriberCallable(const Model::DeleteSubscriberRequest& request) const;

        /**
         * <p>Deletes a subscriber.</p> <p> <b>Deleting the last subscriber to a
         * notification also deletes the notification.</b> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/DeleteSubscriber">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSubscriberAsync(const Model::DeleteSubscriberRequest& request, const DeleteSubscriberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a budget.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/DescribeBudget">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBudgetOutcome DescribeBudget(const Model::DescribeBudgetRequest& request) const;

        /**
         * <p>Describes a budget.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/DescribeBudget">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeBudgetOutcomeCallable DescribeBudgetCallable(const Model::DescribeBudgetRequest& request) const;

        /**
         * <p>Describes a budget.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/DescribeBudget">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeBudgetAsync(const Model::DescribeBudgetRequest& request, const DescribeBudgetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the budgets associated with an account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/DescribeBudgets">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBudgetsOutcome DescribeBudgets(const Model::DescribeBudgetsRequest& request) const;

        /**
         * <p>Lists the budgets associated with an account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/DescribeBudgets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeBudgetsOutcomeCallable DescribeBudgetsCallable(const Model::DescribeBudgetsRequest& request) const;

        /**
         * <p>Lists the budgets associated with an account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/DescribeBudgets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeBudgetsAsync(const Model::DescribeBudgetsRequest& request, const DescribeBudgetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the notifications associated with a budget.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/DescribeNotificationsForBudget">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeNotificationsForBudgetOutcome DescribeNotificationsForBudget(const Model::DescribeNotificationsForBudgetRequest& request) const;

        /**
         * <p>Lists the notifications associated with a budget.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/DescribeNotificationsForBudget">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeNotificationsForBudgetOutcomeCallable DescribeNotificationsForBudgetCallable(const Model::DescribeNotificationsForBudgetRequest& request) const;

        /**
         * <p>Lists the notifications associated with a budget.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/DescribeNotificationsForBudget">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeNotificationsForBudgetAsync(const Model::DescribeNotificationsForBudgetRequest& request, const DescribeNotificationsForBudgetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the subscribers associated with a notification.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/DescribeSubscribersForNotification">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSubscribersForNotificationOutcome DescribeSubscribersForNotification(const Model::DescribeSubscribersForNotificationRequest& request) const;

        /**
         * <p>Lists the subscribers associated with a notification.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/DescribeSubscribersForNotification">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSubscribersForNotificationOutcomeCallable DescribeSubscribersForNotificationCallable(const Model::DescribeSubscribersForNotificationRequest& request) const;

        /**
         * <p>Lists the subscribers associated with a notification.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/DescribeSubscribersForNotification">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSubscribersForNotificationAsync(const Model::DescribeSubscribersForNotificationRequest& request, const DescribeSubscribersForNotificationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a budget. You can change every part of a budget except for the
         * <code>budgetName</code> and the <code>calculatedSpend</code>. When a budget is
         * modified, the <code>calculatedSpend</code> drops to zero until AWS has new usage
         * data to use for forecasting.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/UpdateBudget">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBudgetOutcome UpdateBudget(const Model::UpdateBudgetRequest& request) const;

        /**
         * <p>Updates a budget. You can change every part of a budget except for the
         * <code>budgetName</code> and the <code>calculatedSpend</code>. When a budget is
         * modified, the <code>calculatedSpend</code> drops to zero until AWS has new usage
         * data to use for forecasting.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/UpdateBudget">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateBudgetOutcomeCallable UpdateBudgetCallable(const Model::UpdateBudgetRequest& request) const;

        /**
         * <p>Updates a budget. You can change every part of a budget except for the
         * <code>budgetName</code> and the <code>calculatedSpend</code>. When a budget is
         * modified, the <code>calculatedSpend</code> drops to zero until AWS has new usage
         * data to use for forecasting.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/UpdateBudget">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateBudgetAsync(const Model::UpdateBudgetRequest& request, const UpdateBudgetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a notification.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/UpdateNotification">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateNotificationOutcome UpdateNotification(const Model::UpdateNotificationRequest& request) const;

        /**
         * <p>Updates a notification.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/UpdateNotification">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateNotificationOutcomeCallable UpdateNotificationCallable(const Model::UpdateNotificationRequest& request) const;

        /**
         * <p>Updates a notification.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/UpdateNotification">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateNotificationAsync(const Model::UpdateNotificationRequest& request, const UpdateNotificationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a subscriber.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/UpdateSubscriber">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSubscriberOutcome UpdateSubscriber(const Model::UpdateSubscriberRequest& request) const;

        /**
         * <p>Updates a subscriber.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/UpdateSubscriber">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSubscriberOutcomeCallable UpdateSubscriberCallable(const Model::UpdateSubscriberRequest& request) const;

        /**
         * <p>Updates a subscriber.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/UpdateSubscriber">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSubscriberAsync(const Model::UpdateSubscriberRequest& request, const UpdateSubscriberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void CreateBudgetAsyncHelper(const Model::CreateBudgetRequest& request, const CreateBudgetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateNotificationAsyncHelper(const Model::CreateNotificationRequest& request, const CreateNotificationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateSubscriberAsyncHelper(const Model::CreateSubscriberRequest& request, const CreateSubscriberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteBudgetAsyncHelper(const Model::DeleteBudgetRequest& request, const DeleteBudgetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteNotificationAsyncHelper(const Model::DeleteNotificationRequest& request, const DeleteNotificationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSubscriberAsyncHelper(const Model::DeleteSubscriberRequest& request, const DeleteSubscriberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeBudgetAsyncHelper(const Model::DescribeBudgetRequest& request, const DescribeBudgetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeBudgetsAsyncHelper(const Model::DescribeBudgetsRequest& request, const DescribeBudgetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeNotificationsForBudgetAsyncHelper(const Model::DescribeNotificationsForBudgetRequest& request, const DescribeNotificationsForBudgetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeSubscribersForNotificationAsyncHelper(const Model::DescribeSubscribersForNotificationRequest& request, const DescribeSubscribersForNotificationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateBudgetAsyncHelper(const Model::UpdateBudgetRequest& request, const UpdateBudgetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateNotificationAsyncHelper(const Model::UpdateNotificationRequest& request, const UpdateNotificationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateSubscriberAsyncHelper(const Model::UpdateSubscriberRequest& request, const UpdateSubscriberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace Budgets
} // namespace Aws
