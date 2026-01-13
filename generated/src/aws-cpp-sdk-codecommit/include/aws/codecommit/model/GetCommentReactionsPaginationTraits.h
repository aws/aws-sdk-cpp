/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommitServiceClientModel.h>
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/codecommit/model/GetCommentReactionsRequest.h>
#include <aws/codecommit/model/GetCommentReactionsResult.h>

namespace Aws {
namespace CodeCommit {
namespace Pagination {

template <typename Client = CodeCommitClient>
struct GetCommentReactionsPaginationTraits {
  using RequestType = Model::GetCommentReactionsRequest;
  using ResultType = Model::GetCommentReactionsResult;
  using OutcomeType = Model::GetCommentReactionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->GetCommentReactions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace CodeCommit
}  // namespace Aws
