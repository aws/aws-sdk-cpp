/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridgev2/EventBridgeV2ServiceClientModel.h>
#include <aws/eventbridgev2/EventBridgeV2_EXPORTS.h>
#include <aws/eventbridgev2/model/ListSubscribersRequest.h>
#include <aws/eventbridgev2/model/ListSubscribersResult.h>

namespace Aws {
namespace EventBridgeV2 {
namespace Pagination {

template <typename Client = EventBridgeV2Client>
struct ListSubscribersPaginationTraits {
  using RequestType = Model::ListSubscribersRequest;
  using ResultType = Model::ListSubscribersResult;
  using OutcomeType = Model::ListSubscribersOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListSubscribers(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace EventBridgeV2
}  // namespace Aws
