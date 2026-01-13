/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-data/IoTDataPlaneServiceClientModel.h>
#include <aws/iot-data/IoTDataPlane_EXPORTS.h>
#include <aws/iot-data/model/ListRetainedMessagesRequest.h>
#include <aws/iot-data/model/ListRetainedMessagesResult.h>

namespace Aws {
namespace IoTDataPlane {
namespace Pagination {

template <typename Client = IoTDataPlaneClient>
struct ListRetainedMessagesPaginationTraits {
  using RequestType = Model::ListRetainedMessagesRequest;
  using ResultType = Model::ListRetainedMessagesResult;
  using OutcomeType = Model::ListRetainedMessagesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListRetainedMessages(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace IoTDataPlane
}  // namespace Aws
