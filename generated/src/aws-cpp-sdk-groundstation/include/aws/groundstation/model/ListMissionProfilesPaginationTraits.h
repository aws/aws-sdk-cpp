/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStationServiceClientModel.h>
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/model/ListMissionProfilesRequest.h>
#include <aws/groundstation/model/ListMissionProfilesResult.h>

namespace Aws {
namespace GroundStation {
namespace Pagination {

template <typename Client = GroundStationClient>
struct ListMissionProfilesPaginationTraits {
  using RequestType = Model::ListMissionProfilesRequest;
  using ResultType = Model::ListMissionProfilesResult;
  using OutcomeType = Model::ListMissionProfilesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListMissionProfiles(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace GroundStation
}  // namespace Aws
