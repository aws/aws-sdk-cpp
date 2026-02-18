/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWirelessServiceClientModel.h>
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/model/ListMulticastGroupsByFuotaTaskRequest.h>
#include <aws/iotwireless/model/ListMulticastGroupsByFuotaTaskResult.h>

namespace Aws {
namespace IoTWireless {
namespace Pagination {

template <typename Client = IoTWirelessClient>
struct ListMulticastGroupsByFuotaTaskPaginationTraits {
  using RequestType = Model::ListMulticastGroupsByFuotaTaskRequest;
  using ResultType = Model::ListMulticastGroupsByFuotaTaskResult;
  using OutcomeType = Model::ListMulticastGroupsByFuotaTaskOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListMulticastGroupsByFuotaTask(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace IoTWireless
}  // namespace Aws
