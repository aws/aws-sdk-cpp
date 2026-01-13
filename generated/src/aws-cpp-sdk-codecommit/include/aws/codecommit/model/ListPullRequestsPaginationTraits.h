/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommitServiceClientModel.h>
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/codecommit/model/ListPullRequestsRequest.h>
#include <aws/codecommit/model/ListPullRequestsResult.h>

namespace Aws {
namespace CodeCommit {
namespace Pagination {

template <typename Client = CodeCommitClient>
struct ListPullRequestsPaginationTraits {
  using RequestType = Model::ListPullRequestsRequest;
  using ResultType = Model::ListPullRequestsResult;
  using OutcomeType = Model::ListPullRequestsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListPullRequests(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace CodeCommit
}  // namespace Aws
