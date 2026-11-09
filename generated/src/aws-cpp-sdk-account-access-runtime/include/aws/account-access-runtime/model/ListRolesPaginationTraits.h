/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account-access-runtime/AccountAccessRuntimeServiceClientModel.h>
#include <aws/account-access-runtime/AccountAccessRuntime_EXPORTS.h>
#include <aws/account-access-runtime/model/ListRolesRequest.h>
#include <aws/account-access-runtime/model/ListRolesResult.h>

namespace Aws {
namespace AccountAccessRuntime {
namespace Pagination {

template <typename Client = AccountAccessRuntimeClient>
struct ListRolesPaginationTraits {
  using RequestType = Model::ListRolesRequest;
  using ResultType = Model::ListRolesResult;
  using OutcomeType = Model::ListRolesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListRoles(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace AccountAccessRuntime
}  // namespace Aws
