/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationServiceServiceClientModel.h>
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/location/model/GetDevicePositionHistoryRequest.h>
#include <aws/location/model/GetDevicePositionHistoryResult.h>

namespace Aws {
namespace LocationService {
namespace Pagination {

template <typename Client = LocationServiceClient>
struct GetDevicePositionHistoryPaginationTraits {
  using RequestType = Model::GetDevicePositionHistoryRequest;
  using ResultType = Model::GetDevicePositionHistoryResult;
  using OutcomeType = Model::GetDevicePositionHistoryOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->GetDevicePositionHistory(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace LocationService
}  // namespace Aws
