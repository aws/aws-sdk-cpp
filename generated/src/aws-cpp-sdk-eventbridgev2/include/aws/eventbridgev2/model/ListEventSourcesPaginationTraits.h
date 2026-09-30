/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridgev2/EventBridgeV2ServiceClientModel.h>
#include <aws/eventbridgev2/EventBridgeV2_EXPORTS.h>
#include <aws/eventbridgev2/model/ListEventSourcesRequest.h>
#include <aws/eventbridgev2/model/ListEventSourcesResult.h>

namespace Aws {
namespace EventBridgeV2 {
namespace Pagination {

template <typename Client = EventBridgeV2Client>
struct ListEventSourcesPaginationTraits {
  using RequestType = Model::ListEventSourcesRequest;
  using ResultType = Model::ListEventSourcesResult;
  using OutcomeType = Model::ListEventSourcesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListEventSources(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace EventBridgeV2
}  // namespace Aws
