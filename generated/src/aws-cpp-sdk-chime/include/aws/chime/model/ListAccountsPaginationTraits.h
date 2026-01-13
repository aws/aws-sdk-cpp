/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/ChimeServiceClientModel.h>
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/ListAccountsRequest.h>
#include <aws/chime/model/ListAccountsResult.h>

namespace Aws {
namespace Chime {
namespace Pagination {

template <typename Client = ChimeClient>
struct ListAccountsPaginationTraits {
  using RequestType = Model::ListAccountsRequest;
  using ResultType = Model::ListAccountsResult;
  using OutcomeType = Model::ListAccountsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListAccounts(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Chime
}  // namespace Aws
