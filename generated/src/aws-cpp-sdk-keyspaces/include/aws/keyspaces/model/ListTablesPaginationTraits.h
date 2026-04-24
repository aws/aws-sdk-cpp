/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspaces/KeyspacesServiceClientModel.h>
#include <aws/keyspaces/Keyspaces_EXPORTS.h>
#include <aws/keyspaces/model/ListTablesRequest.h>
#include <aws/keyspaces/model/ListTablesResult.h>

namespace Aws {
namespace Keyspaces {
namespace Pagination {

template <typename Client = KeyspacesClient>
struct ListTablesPaginationTraits {
  using RequestType = Model::ListTablesRequest;
  using ResultType = Model::ListTablesResult;
  using OutcomeType = Model::ListTablesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListTables(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Keyspaces
}  // namespace Aws
