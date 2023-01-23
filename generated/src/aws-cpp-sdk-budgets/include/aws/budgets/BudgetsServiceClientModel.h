/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/budgets/BudgetsErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/budgets/BudgetsEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in BudgetsClient header */
#include <aws/budgets/model/CreateBudgetResult.h>
#include <aws/budgets/model/CreateBudgetActionResult.h>
#include <aws/budgets/model/CreateNotificationResult.h>
#include <aws/budgets/model/CreateSubscriberResult.h>
#include <aws/budgets/model/DeleteBudgetResult.h>
#include <aws/budgets/model/DeleteBudgetActionResult.h>
#include <aws/budgets/model/DeleteNotificationResult.h>
#include <aws/budgets/model/DeleteSubscriberResult.h>
#include <aws/budgets/model/DescribeBudgetResult.h>
#include <aws/budgets/model/DescribeBudgetActionResult.h>
#include <aws/budgets/model/DescribeBudgetActionHistoriesResult.h>
#include <aws/budgets/model/DescribeBudgetActionsForAccountResult.h>
#include <aws/budgets/model/DescribeBudgetActionsForBudgetResult.h>
#include <aws/budgets/model/DescribeBudgetNotificationsForAccountResult.h>
#include <aws/budgets/model/DescribeBudgetPerformanceHistoryResult.h>
#include <aws/budgets/model/DescribeBudgetsResult.h>
#include <aws/budgets/model/DescribeNotificationsForBudgetResult.h>
#include <aws/budgets/model/DescribeSubscribersForNotificationResult.h>
#include <aws/budgets/model/ExecuteBudgetActionResult.h>
#include <aws/budgets/model/UpdateBudgetResult.h>
#include <aws/budgets/model/UpdateBudgetActionResult.h>
#include <aws/budgets/model/UpdateNotificationResult.h>
#include <aws/budgets/model/UpdateSubscriberResult.h>
/* End of service model headers required in BudgetsClient header */

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

  namespace Budgets
  {
    using BudgetsClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using BudgetsEndpointProviderBase = Aws::Budgets::Endpoint::BudgetsEndpointProviderBase;
    using BudgetsEndpointProvider = Aws::Budgets::Endpoint::BudgetsEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in BudgetsClient header */
      class CreateBudgetRequest;
      class CreateBudgetActionRequest;
      class CreateNotificationRequest;
      class CreateSubscriberRequest;
      class DeleteBudgetRequest;
      class DeleteBudgetActionRequest;
      class DeleteNotificationRequest;
      class DeleteSubscriberRequest;
      class DescribeBudgetRequest;
      class DescribeBudgetActionRequest;
      class DescribeBudgetActionHistoriesRequest;
      class DescribeBudgetActionsForAccountRequest;
      class DescribeBudgetActionsForBudgetRequest;
      class DescribeBudgetNotificationsForAccountRequest;
      class DescribeBudgetPerformanceHistoryRequest;
      class DescribeBudgetsRequest;
      class DescribeNotificationsForBudgetRequest;
      class DescribeSubscribersForNotificationRequest;
      class ExecuteBudgetActionRequest;
      class UpdateBudgetRequest;
      class UpdateBudgetActionRequest;
      class UpdateNotificationRequest;
      class UpdateSubscriberRequest;
      /* End of service model forward declarations required in BudgetsClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateBudgetResult, BudgetsError> CreateBudgetOutcome;
      typedef Aws::Utils::Outcome<CreateBudgetActionResult, BudgetsError> CreateBudgetActionOutcome;
      typedef Aws::Utils::Outcome<CreateNotificationResult, BudgetsError> CreateNotificationOutcome;
      typedef Aws::Utils::Outcome<CreateSubscriberResult, BudgetsError> CreateSubscriberOutcome;
      typedef Aws::Utils::Outcome<DeleteBudgetResult, BudgetsError> DeleteBudgetOutcome;
      typedef Aws::Utils::Outcome<DeleteBudgetActionResult, BudgetsError> DeleteBudgetActionOutcome;
      typedef Aws::Utils::Outcome<DeleteNotificationResult, BudgetsError> DeleteNotificationOutcome;
      typedef Aws::Utils::Outcome<DeleteSubscriberResult, BudgetsError> DeleteSubscriberOutcome;
      typedef Aws::Utils::Outcome<DescribeBudgetResult, BudgetsError> DescribeBudgetOutcome;
      typedef Aws::Utils::Outcome<DescribeBudgetActionResult, BudgetsError> DescribeBudgetActionOutcome;
      typedef Aws::Utils::Outcome<DescribeBudgetActionHistoriesResult, BudgetsError> DescribeBudgetActionHistoriesOutcome;
      typedef Aws::Utils::Outcome<DescribeBudgetActionsForAccountResult, BudgetsError> DescribeBudgetActionsForAccountOutcome;
      typedef Aws::Utils::Outcome<DescribeBudgetActionsForBudgetResult, BudgetsError> DescribeBudgetActionsForBudgetOutcome;
      typedef Aws::Utils::Outcome<DescribeBudgetNotificationsForAccountResult, BudgetsError> DescribeBudgetNotificationsForAccountOutcome;
      typedef Aws::Utils::Outcome<DescribeBudgetPerformanceHistoryResult, BudgetsError> DescribeBudgetPerformanceHistoryOutcome;
      typedef Aws::Utils::Outcome<DescribeBudgetsResult, BudgetsError> DescribeBudgetsOutcome;
      typedef Aws::Utils::Outcome<DescribeNotificationsForBudgetResult, BudgetsError> DescribeNotificationsForBudgetOutcome;
      typedef Aws::Utils::Outcome<DescribeSubscribersForNotificationResult, BudgetsError> DescribeSubscribersForNotificationOutcome;
      typedef Aws::Utils::Outcome<ExecuteBudgetActionResult, BudgetsError> ExecuteBudgetActionOutcome;
      typedef Aws::Utils::Outcome<UpdateBudgetResult, BudgetsError> UpdateBudgetOutcome;
      typedef Aws::Utils::Outcome<UpdateBudgetActionResult, BudgetsError> UpdateBudgetActionOutcome;
      typedef Aws::Utils::Outcome<UpdateNotificationResult, BudgetsError> UpdateNotificationOutcome;
      typedef Aws::Utils::Outcome<UpdateSubscriberResult, BudgetsError> UpdateSubscriberOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateBudgetOutcome> CreateBudgetOutcomeCallable;
      typedef std::future<CreateBudgetActionOutcome> CreateBudgetActionOutcomeCallable;
      typedef std::future<CreateNotificationOutcome> CreateNotificationOutcomeCallable;
      typedef std::future<CreateSubscriberOutcome> CreateSubscriberOutcomeCallable;
      typedef std::future<DeleteBudgetOutcome> DeleteBudgetOutcomeCallable;
      typedef std::future<DeleteBudgetActionOutcome> DeleteBudgetActionOutcomeCallable;
      typedef std::future<DeleteNotificationOutcome> DeleteNotificationOutcomeCallable;
      typedef std::future<DeleteSubscriberOutcome> DeleteSubscriberOutcomeCallable;
      typedef std::future<DescribeBudgetOutcome> DescribeBudgetOutcomeCallable;
      typedef std::future<DescribeBudgetActionOutcome> DescribeBudgetActionOutcomeCallable;
      typedef std::future<DescribeBudgetActionHistoriesOutcome> DescribeBudgetActionHistoriesOutcomeCallable;
      typedef std::future<DescribeBudgetActionsForAccountOutcome> DescribeBudgetActionsForAccountOutcomeCallable;
      typedef std::future<DescribeBudgetActionsForBudgetOutcome> DescribeBudgetActionsForBudgetOutcomeCallable;
      typedef std::future<DescribeBudgetNotificationsForAccountOutcome> DescribeBudgetNotificationsForAccountOutcomeCallable;
      typedef std::future<DescribeBudgetPerformanceHistoryOutcome> DescribeBudgetPerformanceHistoryOutcomeCallable;
      typedef std::future<DescribeBudgetsOutcome> DescribeBudgetsOutcomeCallable;
      typedef std::future<DescribeNotificationsForBudgetOutcome> DescribeNotificationsForBudgetOutcomeCallable;
      typedef std::future<DescribeSubscribersForNotificationOutcome> DescribeSubscribersForNotificationOutcomeCallable;
      typedef std::future<ExecuteBudgetActionOutcome> ExecuteBudgetActionOutcomeCallable;
      typedef std::future<UpdateBudgetOutcome> UpdateBudgetOutcomeCallable;
      typedef std::future<UpdateBudgetActionOutcome> UpdateBudgetActionOutcomeCallable;
      typedef std::future<UpdateNotificationOutcome> UpdateNotificationOutcomeCallable;
      typedef std::future<UpdateSubscriberOutcome> UpdateSubscriberOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class BudgetsClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const BudgetsClient*, const Model::CreateBudgetRequest&, const Model::CreateBudgetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBudgetResponseReceivedHandler;
    typedef std::function<void(const BudgetsClient*, const Model::CreateBudgetActionRequest&, const Model::CreateBudgetActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBudgetActionResponseReceivedHandler;
    typedef std::function<void(const BudgetsClient*, const Model::CreateNotificationRequest&, const Model::CreateNotificationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateNotificationResponseReceivedHandler;
    typedef std::function<void(const BudgetsClient*, const Model::CreateSubscriberRequest&, const Model::CreateSubscriberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSubscriberResponseReceivedHandler;
    typedef std::function<void(const BudgetsClient*, const Model::DeleteBudgetRequest&, const Model::DeleteBudgetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBudgetResponseReceivedHandler;
    typedef std::function<void(const BudgetsClient*, const Model::DeleteBudgetActionRequest&, const Model::DeleteBudgetActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBudgetActionResponseReceivedHandler;
    typedef std::function<void(const BudgetsClient*, const Model::DeleteNotificationRequest&, const Model::DeleteNotificationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteNotificationResponseReceivedHandler;
    typedef std::function<void(const BudgetsClient*, const Model::DeleteSubscriberRequest&, const Model::DeleteSubscriberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSubscriberResponseReceivedHandler;
    typedef std::function<void(const BudgetsClient*, const Model::DescribeBudgetRequest&, const Model::DescribeBudgetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeBudgetResponseReceivedHandler;
    typedef std::function<void(const BudgetsClient*, const Model::DescribeBudgetActionRequest&, const Model::DescribeBudgetActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeBudgetActionResponseReceivedHandler;
    typedef std::function<void(const BudgetsClient*, const Model::DescribeBudgetActionHistoriesRequest&, const Model::DescribeBudgetActionHistoriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeBudgetActionHistoriesResponseReceivedHandler;
    typedef std::function<void(const BudgetsClient*, const Model::DescribeBudgetActionsForAccountRequest&, const Model::DescribeBudgetActionsForAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeBudgetActionsForAccountResponseReceivedHandler;
    typedef std::function<void(const BudgetsClient*, const Model::DescribeBudgetActionsForBudgetRequest&, const Model::DescribeBudgetActionsForBudgetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeBudgetActionsForBudgetResponseReceivedHandler;
    typedef std::function<void(const BudgetsClient*, const Model::DescribeBudgetNotificationsForAccountRequest&, const Model::DescribeBudgetNotificationsForAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeBudgetNotificationsForAccountResponseReceivedHandler;
    typedef std::function<void(const BudgetsClient*, const Model::DescribeBudgetPerformanceHistoryRequest&, const Model::DescribeBudgetPerformanceHistoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeBudgetPerformanceHistoryResponseReceivedHandler;
    typedef std::function<void(const BudgetsClient*, const Model::DescribeBudgetsRequest&, const Model::DescribeBudgetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeBudgetsResponseReceivedHandler;
    typedef std::function<void(const BudgetsClient*, const Model::DescribeNotificationsForBudgetRequest&, const Model::DescribeNotificationsForBudgetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeNotificationsForBudgetResponseReceivedHandler;
    typedef std::function<void(const BudgetsClient*, const Model::DescribeSubscribersForNotificationRequest&, const Model::DescribeSubscribersForNotificationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSubscribersForNotificationResponseReceivedHandler;
    typedef std::function<void(const BudgetsClient*, const Model::ExecuteBudgetActionRequest&, const Model::ExecuteBudgetActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExecuteBudgetActionResponseReceivedHandler;
    typedef std::function<void(const BudgetsClient*, const Model::UpdateBudgetRequest&, const Model::UpdateBudgetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateBudgetResponseReceivedHandler;
    typedef std::function<void(const BudgetsClient*, const Model::UpdateBudgetActionRequest&, const Model::UpdateBudgetActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateBudgetActionResponseReceivedHandler;
    typedef std::function<void(const BudgetsClient*, const Model::UpdateNotificationRequest&, const Model::UpdateNotificationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateNotificationResponseReceivedHandler;
    typedef std::function<void(const BudgetsClient*, const Model::UpdateSubscriberRequest&, const Model::UpdateSubscriberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSubscriberResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace Budgets
} // namespace Aws
