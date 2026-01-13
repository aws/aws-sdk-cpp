/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspaces/KeyspacesServiceClientModel.h>
#include <aws/keyspaces/Keyspaces_EXPORTS.h>
#include <aws/keyspaces/model/ListTagsForResourceRequest.h>
#include <aws/keyspaces/model/ListTagsForResourceResult.h>

namespace Aws {
namespace Keyspaces {
namespace Pagination {

template <typename Client = KeyspacesClient>
struct ListTagsForResourcePaginationTraits {
  using RequestType = Model::ListTagsForResourceRequest;
  using ResultType = Model::ListTagsForResourceResult;
  using OutcomeType = Model::ListTagsForResourceOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListTagsForResource(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Keyspaces
}  // namespace Aws
