/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/FinspaceServiceClientModel.h>
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/finspace/model/ListKxChangesetsRequest.h>
#include <aws/finspace/model/ListKxChangesetsResult.h>

namespace Aws {
namespace finspace {
namespace Pagination {

template <typename Client = FinspaceClient>
struct ListKxChangesetsPaginationTraits {
  using RequestType = Model::ListKxChangesetsRequest;
  using ResultType = Model::ListKxChangesetsResult;
  using OutcomeType = Model::ListKxChangesetsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListKxChangesets(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace finspace
}  // namespace Aws
