/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/budgets/BudgetsServiceClientModel.h>
#include <aws/budgets/Budgets_EXPORTS.h>
#include <aws/budgets/model/DescribeBudgetActionHistoriesRequest.h>
#include <aws/budgets/model/DescribeBudgetActionHistoriesResult.h>

namespace Aws {
namespace Budgets {
namespace Pagination {

template <typename Client = BudgetsClient>
struct DescribeBudgetActionHistoriesPaginationTraits {
  using RequestType = Model::DescribeBudgetActionHistoriesRequest;
  using ResultType = Model::DescribeBudgetActionHistoriesResult;
  using OutcomeType = Model::DescribeBudgetActionHistoriesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeBudgetActionHistories(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Budgets
}  // namespace Aws
