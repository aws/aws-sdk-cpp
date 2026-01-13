/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/ConnectServiceClientModel.h>
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/ListRoutingProfileManualAssignmentQueuesRequest.h>
#include <aws/connect/model/ListRoutingProfileManualAssignmentQueuesResult.h>

namespace Aws {
namespace Connect {
namespace Pagination {

template <typename Client = ConnectClient>
struct ListRoutingProfileManualAssignmentQueuesPaginationTraits {
  using RequestType = Model::ListRoutingProfileManualAssignmentQueuesRequest;
  using ResultType = Model::ListRoutingProfileManualAssignmentQueuesResult;
  using OutcomeType = Model::ListRoutingProfileManualAssignmentQueuesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) {
    return client->ListRoutingProfileManualAssignmentQueues(request);
  }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Connect
}  // namespace Aws
