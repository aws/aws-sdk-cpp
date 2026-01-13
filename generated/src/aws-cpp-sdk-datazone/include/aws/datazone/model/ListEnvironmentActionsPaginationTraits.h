/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZoneServiceClientModel.h>
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/ListEnvironmentActionsRequest.h>
#include <aws/datazone/model/ListEnvironmentActionsResult.h>

namespace Aws {
namespace DataZone {
namespace Pagination {

template <typename Client = DataZoneClient>
struct ListEnvironmentActionsPaginationTraits {
  using RequestType = Model::ListEnvironmentActionsRequest;
  using ResultType = Model::ListEnvironmentActionsResult;
  using OutcomeType = Model::ListEnvironmentActionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListEnvironmentActions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace DataZone
}  // namespace Aws
