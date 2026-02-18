/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommitServiceClientModel.h>
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/codecommit/model/ListBranchesRequest.h>
#include <aws/codecommit/model/ListBranchesResult.h>

namespace Aws {
namespace CodeCommit {
namespace Pagination {

template <typename Client = CodeCommitClient>
struct ListBranchesPaginationTraits {
  using RequestType = Model::ListBranchesRequest;
  using ResultType = Model::ListBranchesResult;
  using OutcomeType = Model::ListBranchesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListBranches(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace CodeCommit
}  // namespace Aws
