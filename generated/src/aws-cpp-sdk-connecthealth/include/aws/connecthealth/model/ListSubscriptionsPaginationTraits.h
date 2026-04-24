/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealthServiceClientModel.h>
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/connecthealth/model/ListSubscriptionsRequest.h>
#include <aws/connecthealth/model/ListSubscriptionsResult.h>

namespace Aws {
namespace ConnectHealth {
namespace Pagination {

template <typename Client = ConnectHealthClient>
struct ListSubscriptionsPaginationTraits {
  using RequestType = Model::ListSubscriptionsRequest;
  using ResultType = Model::ListSubscriptionsResult;
  using OutcomeType = Model::ListSubscriptionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListSubscriptions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ConnectHealth
}  // namespace Aws
