/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-reviewer/CodeGuruReviewerServiceClientModel.h>
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>
#include <aws/codeguru-reviewer/model/ListCodeReviewsRequest.h>
#include <aws/codeguru-reviewer/model/ListCodeReviewsResult.h>

namespace Aws {
namespace CodeGuruReviewer {
namespace Pagination {

template <typename Client = CodeGuruReviewerClient>
struct ListCodeReviewsPaginationTraits {
  using RequestType = Model::ListCodeReviewsRequest;
  using ResultType = Model::ListCodeReviewsResult;
  using OutcomeType = Model::ListCodeReviewsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListCodeReviews(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace CodeGuruReviewer
}  // namespace Aws
