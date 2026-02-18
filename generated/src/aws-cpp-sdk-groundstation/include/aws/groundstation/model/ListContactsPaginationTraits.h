/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStationServiceClientModel.h>
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/model/ListContactsRequest.h>
#include <aws/groundstation/model/ListContactsResult.h>

namespace Aws {
namespace GroundStation {
namespace Pagination {

template <typename Client = GroundStationClient>
struct ListContactsPaginationTraits {
  using RequestType = Model::ListContactsRequest;
  using ResultType = Model::ListContactsResult;
  using OutcomeType = Model::ListContactsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListContacts(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace GroundStation
}  // namespace Aws
