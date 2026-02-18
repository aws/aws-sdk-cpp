/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/budgets/BudgetsServiceClientModel.h>
#include <aws/budgets/Budgets_EXPORTS.h>
#include <aws/budgets/model/DescribeSubscribersForNotificationRequest.h>
#include <aws/budgets/model/DescribeSubscribersForNotificationResult.h>

namespace Aws {
namespace Budgets {
namespace Pagination {

template <typename Client = BudgetsClient>
struct DescribeSubscribersForNotificationPaginationTraits {
  using RequestType = Model::DescribeSubscribersForNotificationRequest;
  using ResultType = Model::DescribeSubscribersForNotificationResult;
  using OutcomeType = Model::DescribeSubscribersForNotificationOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeSubscribersForNotification(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Budgets
}  // namespace Aws
