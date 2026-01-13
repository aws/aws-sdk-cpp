/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWirelessServiceClientModel.h>
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/model/ListDeviceProfilesRequest.h>
#include <aws/iotwireless/model/ListDeviceProfilesResult.h>

namespace Aws {
namespace IoTWireless {
namespace Pagination {

template <typename Client = IoTWirelessClient>
struct ListDeviceProfilesPaginationTraits {
  using RequestType = Model::ListDeviceProfilesRequest;
  using ResultType = Model::ListDeviceProfilesResult;
  using OutcomeType = Model::ListDeviceProfilesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListDeviceProfiles(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace IoTWireless
}  // namespace Aws
