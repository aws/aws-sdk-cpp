/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoTServiceClientModel.h>
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/ListRoleAliasesRequest.h>
#include <aws/iot/model/ListRoleAliasesResult.h>

namespace Aws {
namespace IoT {
namespace Pagination {

template <typename Client = IoTClient>
struct ListRoleAliasesPaginationTraits {
  using RequestType = Model::ListRoleAliasesRequest;
  using ResultType = Model::ListRoleAliasesResult;
  using OutcomeType = Model::ListRoleAliasesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListRoleAliases(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextMarker().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetMarker(result.GetNextMarker()); }
};

}  // namespace Pagination
}  // namespace IoT
}  // namespace Aws
