/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-notifications/CodeStarNotificationsServiceClientModel.h>
#include <aws/codestar-notifications/CodeStarNotifications_EXPORTS.h>
#include <aws/codestar-notifications/model/ListTargetsRequest.h>
#include <aws/codestar-notifications/model/ListTargetsResult.h>

namespace Aws {
namespace CodeStarNotifications {
namespace Pagination {

template <typename Client = CodeStarNotificationsClient>
struct ListTargetsPaginationTraits {
  using RequestType = Model::ListTargetsRequest;
  using ResultType = Model::ListTargetsResult;
  using OutcomeType = Model::ListTargetsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListTargets(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace CodeStarNotifications
}  // namespace Aws
