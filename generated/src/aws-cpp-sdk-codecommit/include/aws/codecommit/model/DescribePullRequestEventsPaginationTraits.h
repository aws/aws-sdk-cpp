/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommitServiceClientModel.h>
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/codecommit/model/DescribePullRequestEventsRequest.h>
#include <aws/codecommit/model/DescribePullRequestEventsResult.h>

namespace Aws {
namespace CodeCommit {
namespace Pagination {

template <typename Client = CodeCommitClient>
struct DescribePullRequestEventsPaginationTraits {
  using RequestType = Model::DescribePullRequestEventsRequest;
  using ResultType = Model::DescribePullRequestEventsResult;
  using OutcomeType = Model::DescribePullRequestEventsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribePullRequestEvents(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace CodeCommit
}  // namespace Aws
