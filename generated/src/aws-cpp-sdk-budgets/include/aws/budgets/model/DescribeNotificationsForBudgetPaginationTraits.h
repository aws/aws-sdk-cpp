/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/budgets/BudgetsServiceClientModel.h>
#include <aws/budgets/Budgets_EXPORTS.h>
#include <aws/budgets/model/DescribeNotificationsForBudgetRequest.h>
#include <aws/budgets/model/DescribeNotificationsForBudgetResult.h>

namespace Aws {
namespace Budgets {
namespace Pagination {

template <typename Client = BudgetsClient>
struct DescribeNotificationsForBudgetPaginationTraits {
  using RequestType = Model::DescribeNotificationsForBudgetRequest;
  using ResultType = Model::DescribeNotificationsForBudgetResult;
  using OutcomeType = Model::DescribeNotificationsForBudgetOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeNotificationsForBudget(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Budgets
}  // namespace Aws
