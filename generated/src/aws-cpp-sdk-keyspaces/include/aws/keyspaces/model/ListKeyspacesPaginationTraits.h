/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspaces/KeyspacesServiceClientModel.h>
#include <aws/keyspaces/Keyspaces_EXPORTS.h>
#include <aws/keyspaces/model/ListKeyspacesRequest.h>
#include <aws/keyspaces/model/ListKeyspacesResult.h>

namespace Aws {
namespace Keyspaces {
namespace Pagination {

template <typename Client = KeyspacesClient>
struct ListKeyspacesPaginationTraits {
  using RequestType = Model::ListKeyspacesRequest;
  using ResultType = Model::ListKeyspacesResult;
  using OutcomeType = Model::ListKeyspacesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListKeyspaces(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Keyspaces
}  // namespace Aws
