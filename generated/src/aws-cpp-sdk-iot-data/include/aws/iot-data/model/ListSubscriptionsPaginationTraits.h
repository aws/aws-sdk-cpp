/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-data/IoTDataPlaneServiceClientModel.h>
#include <aws/iot-data/IoTDataPlane_EXPORTS.h>
#include <aws/iot-data/model/ListSubscriptionsRequest.h>
#include <aws/iot-data/model/ListSubscriptionsResult.h>

namespace Aws {
namespace IoTDataPlane {
namespace Pagination {

template <typename Client = IoTDataPlaneClient>
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
}  // namespace IoTDataPlane
}  // namespace Aws
