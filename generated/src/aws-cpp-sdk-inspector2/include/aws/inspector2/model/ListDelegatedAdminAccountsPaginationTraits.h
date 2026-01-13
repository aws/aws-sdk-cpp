/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2ServiceClientModel.h>
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/ListDelegatedAdminAccountsRequest.h>
#include <aws/inspector2/model/ListDelegatedAdminAccountsResult.h>

namespace Aws {
namespace Inspector2 {
namespace Pagination {

template <typename Client = Inspector2Client>
struct ListDelegatedAdminAccountsPaginationTraits {
  using RequestType = Model::ListDelegatedAdminAccountsRequest;
  using ResultType = Model::ListDelegatedAdminAccountsResult;
  using OutcomeType = Model::ListDelegatedAdminAccountsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListDelegatedAdminAccounts(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Inspector2
}  // namespace Aws
