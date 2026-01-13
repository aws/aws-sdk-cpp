/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/budgets/BudgetsServiceClientModel.h>
#include <aws/budgets/Budgets_EXPORTS.h>
#include <aws/budgets/model/DescribeBudgetActionsForBudgetRequest.h>
#include <aws/budgets/model/DescribeBudgetActionsForBudgetResult.h>

namespace Aws {
namespace Budgets {
namespace Pagination {

template <typename Client = BudgetsClient>
struct DescribeBudgetActionsForBudgetPaginationTraits {
  using RequestType = Model::DescribeBudgetActionsForBudgetRequest;
  using ResultType = Model::DescribeBudgetActionsForBudgetResult;
  using OutcomeType = Model::DescribeBudgetActionsForBudgetOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeBudgetActionsForBudget(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Budgets
}  // namespace Aws
