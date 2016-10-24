/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
   * All public APIs for AWS Budgets
   */
  class AWS_BUDGETS_API BudgetsClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BudgetsClient(const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BudgetsClient(const Auth::AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        BudgetsClient(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider,
            const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

        virtual ~BudgetsClient();

        /**
         * Create a new budget
         */
        virtual Model::CreateBudgetOutcome CreateBudget(const Model::CreateBudgetRequest& request) const;

        /**
         * Create a new budget
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateBudgetOutcomeCallable CreateBudgetCallable(const Model::CreateBudgetRequest& request) const;

        /**
         * Create a new budget
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateBudgetAsync(const Model::CreateBudgetRequest& request, const CreateBudgetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Create a new Notification with subscribers for a budget
         */
        virtual Model::CreateNotificationOutcome CreateNotification(const Model::CreateNotificationRequest& request) const;

        /**
         * Create a new Notification with subscribers for a budget
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateNotificationOutcomeCallable CreateNotificationCallable(const Model::CreateNotificationRequest& request) const;

        /**
         * Create a new Notification with subscribers for a budget
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateNotificationAsync(const Model::CreateNotificationRequest& request, const CreateNotificationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Create a new Subscriber for a notification
         */
        virtual Model::CreateSubscriberOutcome CreateSubscriber(const Model::CreateSubscriberRequest& request) const;

        /**
         * Create a new Subscriber for a notification
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSubscriberOutcomeCallable CreateSubscriberCallable(const Model::CreateSubscriberRequest& request) const;

        /**
         * Create a new Subscriber for a notification
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSubscriberAsync(const Model::CreateSubscriberRequest& request, const CreateSubscriberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Delete a budget and related notifications
         */
        virtual Model::DeleteBudgetOutcome DeleteBudget(const Model::DeleteBudgetRequest& request) const;

        /**
         * Delete a budget and related notifications
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBudgetOutcomeCallable DeleteBudgetCallable(const Model::DeleteBudgetRequest& request) const;

        /**
         * Delete a budget and related notifications
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBudgetAsync(const Model::DeleteBudgetRequest& request, const DeleteBudgetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Delete a notification and related subscribers
         */
        virtual Model::DeleteNotificationOutcome DeleteNotification(const Model::DeleteNotificationRequest& request) const;

        /**
         * Delete a notification and related subscribers
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteNotificationOutcomeCallable DeleteNotificationCallable(const Model::DeleteNotificationRequest& request) const;

        /**
         * Delete a notification and related subscribers
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteNotificationAsync(const Model::DeleteNotificationRequest& request, const DeleteNotificationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Delete a Subscriber for a notification
         */
        virtual Model::DeleteSubscriberOutcome DeleteSubscriber(const Model::DeleteSubscriberRequest& request) const;

        /**
         * Delete a Subscriber for a notification
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSubscriberOutcomeCallable DeleteSubscriberCallable(const Model::DeleteSubscriberRequest& request) const;

        /**
         * Delete a Subscriber for a notification
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSubscriberAsync(const Model::DeleteSubscriberRequest& request, const DeleteSubscriberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Get a single budget
         */
        virtual Model::DescribeBudgetOutcome DescribeBudget(const Model::DescribeBudgetRequest& request) const;

        /**
         * Get a single budget
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeBudgetOutcomeCallable DescribeBudgetCallable(const Model::DescribeBudgetRequest& request) const;

        /**
         * Get a single budget
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeBudgetAsync(const Model::DescribeBudgetRequest& request, const DescribeBudgetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Get all budgets for an account
         */
        virtual Model::DescribeBudgetsOutcome DescribeBudgets(const Model::DescribeBudgetsRequest& request) const;

        /**
         * Get all budgets for an account
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeBudgetsOutcomeCallable DescribeBudgetsCallable(const Model::DescribeBudgetsRequest& request) const;

        /**
         * Get all budgets for an account
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeBudgetsAsync(const Model::DescribeBudgetsRequest& request, const DescribeBudgetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Get notifications of a budget
         */
        virtual Model::DescribeNotificationsForBudgetOutcome DescribeNotificationsForBudget(const Model::DescribeNotificationsForBudgetRequest& request) const;

        /**
         * Get notifications of a budget
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeNotificationsForBudgetOutcomeCallable DescribeNotificationsForBudgetCallable(const Model::DescribeNotificationsForBudgetRequest& request) const;

        /**
         * Get notifications of a budget
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeNotificationsForBudgetAsync(const Model::DescribeNotificationsForBudgetRequest& request, const DescribeNotificationsForBudgetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Get subscribers of a notification
         */
        virtual Model::DescribeSubscribersForNotificationOutcome DescribeSubscribersForNotification(const Model::DescribeSubscribersForNotificationRequest& request) const;

        /**
         * Get subscribers of a notification
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSubscribersForNotificationOutcomeCallable DescribeSubscribersForNotificationCallable(const Model::DescribeSubscribersForNotificationRequest& request) const;

        /**
         * Get subscribers of a notification
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSubscribersForNotificationAsync(const Model::DescribeSubscribersForNotificationRequest& request, const DescribeSubscribersForNotificationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Update the information of a budget already created
         */
        virtual Model::UpdateBudgetOutcome UpdateBudget(const Model::UpdateBudgetRequest& request) const;

        /**
         * Update the information of a budget already created
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateBudgetOutcomeCallable UpdateBudgetCallable(const Model::UpdateBudgetRequest& request) const;

        /**
         * Update the information of a budget already created
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateBudgetAsync(const Model::UpdateBudgetRequest& request, const UpdateBudgetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Update the information about a notification already created
         */
        virtual Model::UpdateNotificationOutcome UpdateNotification(const Model::UpdateNotificationRequest& request) const;

        /**
         * Update the information about a notification already created
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateNotificationOutcomeCallable UpdateNotificationCallable(const Model::UpdateNotificationRequest& request) const;

        /**
         * Update the information about a notification already created
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateNotificationAsync(const Model::UpdateNotificationRequest& request, const UpdateNotificationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Update a subscriber
         */
        virtual Model::UpdateSubscriberOutcome UpdateSubscriber(const Model::UpdateSubscriberRequest& request) const;

        /**
         * Update a subscriber
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSubscriberOutcomeCallable UpdateSubscriberCallable(const Model::UpdateSubscriberRequest& request) const;

        /**
         * Update a subscriber
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSubscriberAsync(const Model::UpdateSubscriberRequest& request, const UpdateSubscriberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


    private:
      void init(const Client::ClientConfiguration& clientConfiguration);

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
      std::shared_ptr<Utils::Threading::Executor> m_executor;
  };

} // namespace Budgets
} // namespace Aws
