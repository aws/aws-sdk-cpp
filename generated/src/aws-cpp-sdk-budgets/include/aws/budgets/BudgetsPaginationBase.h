/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/budgets/model/DescribeBudgetActionHistoriesPaginationTraits.h>
#include <aws/budgets/model/DescribeBudgetActionsForAccountPaginationTraits.h>
#include <aws/budgets/model/DescribeBudgetActionsForBudgetPaginationTraits.h>
#include <aws/budgets/model/DescribeBudgetNotificationsForAccountPaginationTraits.h>
#include <aws/budgets/model/DescribeBudgetPerformanceHistoryPaginationTraits.h>
#include <aws/budgets/model/DescribeBudgetsPaginationTraits.h>
#include <aws/budgets/model/DescribeNotificationsForBudgetPaginationTraits.h>
#include <aws/budgets/model/DescribeSubscribersForNotificationPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace Budgets {

class BudgetsClient;

template <typename DerivedClient>
class BudgetsPaginationBase {
 public:
  /**
   * Create a paginator for DescribeBudgetActionHistories operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeBudgetActionHistoriesRequest,
                                    Pagination::DescribeBudgetActionHistoriesPaginationTraits<DerivedClient>>
  DescribeBudgetActionHistoriesPaginator(const Model::DescribeBudgetActionHistoriesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeBudgetActionHistoriesRequest,
                                             Pagination::DescribeBudgetActionHistoriesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeBudgetActionsForAccount operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeBudgetActionsForAccountRequest,
                                    Pagination::DescribeBudgetActionsForAccountPaginationTraits<DerivedClient>>
  DescribeBudgetActionsForAccountPaginator(const Model::DescribeBudgetActionsForAccountRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeBudgetActionsForAccountRequest,
                                             Pagination::DescribeBudgetActionsForAccountPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeBudgetActionsForBudget operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeBudgetActionsForBudgetRequest,
                                    Pagination::DescribeBudgetActionsForBudgetPaginationTraits<DerivedClient>>
  DescribeBudgetActionsForBudgetPaginator(const Model::DescribeBudgetActionsForBudgetRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeBudgetActionsForBudgetRequest,
                                             Pagination::DescribeBudgetActionsForBudgetPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeBudgetNotificationsForAccount operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeBudgetNotificationsForAccountRequest,
                                    Pagination::DescribeBudgetNotificationsForAccountPaginationTraits<DerivedClient>>
  DescribeBudgetNotificationsForAccountPaginator(const Model::DescribeBudgetNotificationsForAccountRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeBudgetNotificationsForAccountRequest,
                                             Pagination::DescribeBudgetNotificationsForAccountPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeBudgetPerformanceHistory operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeBudgetPerformanceHistoryRequest,
                                    Pagination::DescribeBudgetPerformanceHistoryPaginationTraits<DerivedClient>>
  DescribeBudgetPerformanceHistoryPaginator(const Model::DescribeBudgetPerformanceHistoryRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeBudgetPerformanceHistoryRequest,
                                             Pagination::DescribeBudgetPerformanceHistoryPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeBudgets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeBudgetsRequest,
                                    Pagination::DescribeBudgetsPaginationTraits<DerivedClient>>
  DescribeBudgetsPaginator(const Model::DescribeBudgetsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeBudgetsRequest,
                                             Pagination::DescribeBudgetsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for DescribeNotificationsForBudget operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeNotificationsForBudgetRequest,
                                    Pagination::DescribeNotificationsForBudgetPaginationTraits<DerivedClient>>
  DescribeNotificationsForBudgetPaginator(const Model::DescribeNotificationsForBudgetRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeNotificationsForBudgetRequest,
                                             Pagination::DescribeNotificationsForBudgetPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeSubscribersForNotification operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeSubscribersForNotificationRequest,
                                    Pagination::DescribeSubscribersForNotificationPaginationTraits<DerivedClient>>
  DescribeSubscribersForNotificationPaginator(const Model::DescribeSubscribersForNotificationRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeSubscribersForNotificationRequest,
                                             Pagination::DescribeSubscribersForNotificationPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace Budgets
}  // namespace Aws
