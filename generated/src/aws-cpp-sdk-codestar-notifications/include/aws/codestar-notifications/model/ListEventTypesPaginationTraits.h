/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-notifications/CodeStarNotificationsServiceClientModel.h>
#include <aws/codestar-notifications/CodeStarNotifications_EXPORTS.h>
#include <aws/codestar-notifications/model/ListEventTypesRequest.h>
#include <aws/codestar-notifications/model/ListEventTypesResult.h>

namespace Aws {
namespace CodeStarNotifications {
namespace Pagination {

template <typename Client = CodeStarNotificationsClient>
struct ListEventTypesPaginationTraits {
  using RequestType = Model::ListEventTypesRequest;
  using ResultType = Model::ListEventTypesResult;
  using OutcomeType = Model::ListEventTypesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListEventTypes(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace CodeStarNotifications
}  // namespace Aws
