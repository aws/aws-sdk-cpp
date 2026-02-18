/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMSServiceClientModel.h>
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/fms/model/ListAppsListsRequest.h>
#include <aws/fms/model/ListAppsListsResult.h>

namespace Aws {
namespace FMS {
namespace Pagination {

template <typename Client = FMSClient>
struct ListAppsListsPaginationTraits {
  using RequestType = Model::ListAppsListsRequest;
  using ResultType = Model::ListAppsListsResult;
  using OutcomeType = Model::ListAppsListsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListAppsLists(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace FMS
}  // namespace Aws
