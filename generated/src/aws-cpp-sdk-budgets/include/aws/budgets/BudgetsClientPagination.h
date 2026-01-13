/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/budgets/BudgetsClient.h>
#include <aws/budgets/model/DescribeBudgetActionHistoriesPaginationTraits.h>
#include <aws/budgets/model/DescribeBudgetActionsForAccountPaginationTraits.h>
#include <aws/budgets/model/DescribeBudgetActionsForBudgetPaginationTraits.h>
#include <aws/budgets/model/DescribeBudgetNotificationsForAccountPaginationTraits.h>
#include <aws/budgets/model/DescribeBudgetPerformanceHistoryPaginationTraits.h>
#include <aws/budgets/model/DescribeBudgetsPaginationTraits.h>
#include <aws/budgets/model/DescribeNotificationsForBudgetPaginationTraits.h>
#include <aws/budgets/model/DescribeSubscribersForNotificationPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace Budgets {

using DescribeBudgetActionHistoriesPaginator =
    Aws::Utils::Pagination::Paginator<BudgetsClient, Model::DescribeBudgetActionHistoriesRequest,
                                      Pagination::DescribeBudgetActionHistoriesPaginationTraits<BudgetsClient>>;
using DescribeBudgetActionsForAccountPaginator =
    Aws::Utils::Pagination::Paginator<BudgetsClient, Model::DescribeBudgetActionsForAccountRequest,
                                      Pagination::DescribeBudgetActionsForAccountPaginationTraits<BudgetsClient>>;
using DescribeBudgetActionsForBudgetPaginator =
    Aws::Utils::Pagination::Paginator<BudgetsClient, Model::DescribeBudgetActionsForBudgetRequest,
                                      Pagination::DescribeBudgetActionsForBudgetPaginationTraits<BudgetsClient>>;
using DescribeBudgetNotificationsForAccountPaginator =
    Aws::Utils::Pagination::Paginator<BudgetsClient, Model::DescribeBudgetNotificationsForAccountRequest,
                                      Pagination::DescribeBudgetNotificationsForAccountPaginationTraits<BudgetsClient>>;
using DescribeBudgetPerformanceHistoryPaginator =
    Aws::Utils::Pagination::Paginator<BudgetsClient, Model::DescribeBudgetPerformanceHistoryRequest,
                                      Pagination::DescribeBudgetPerformanceHistoryPaginationTraits<BudgetsClient>>;
using DescribeBudgetsPaginator = Aws::Utils::Pagination::Paginator<BudgetsClient, Model::DescribeBudgetsRequest,
                                                                   Pagination::DescribeBudgetsPaginationTraits<BudgetsClient>>;
using DescribeNotificationsForBudgetPaginator =
    Aws::Utils::Pagination::Paginator<BudgetsClient, Model::DescribeNotificationsForBudgetRequest,
                                      Pagination::DescribeNotificationsForBudgetPaginationTraits<BudgetsClient>>;
using DescribeSubscribersForNotificationPaginator =
    Aws::Utils::Pagination::Paginator<BudgetsClient, Model::DescribeSubscribersForNotificationRequest,
                                      Pagination::DescribeSubscribersForNotificationPaginationTraits<BudgetsClient>>;

}  // namespace Budgets
}  // namespace Aws
