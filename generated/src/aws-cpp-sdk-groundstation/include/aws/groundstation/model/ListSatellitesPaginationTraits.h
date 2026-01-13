/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStationServiceClientModel.h>
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/model/ListSatellitesRequest.h>
#include <aws/groundstation/model/ListSatellitesResult.h>

namespace Aws {
namespace GroundStation {
namespace Pagination {

template <typename Client = GroundStationClient>
struct ListSatellitesPaginationTraits {
  using RequestType = Model::ListSatellitesRequest;
  using ResultType = Model::ListSatellitesResult;
  using OutcomeType = Model::ListSatellitesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListSatellites(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace GroundStation
}  // namespace Aws
