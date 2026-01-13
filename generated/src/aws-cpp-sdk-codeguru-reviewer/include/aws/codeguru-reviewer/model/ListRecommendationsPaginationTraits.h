/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-reviewer/CodeGuruReviewerServiceClientModel.h>
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>
#include <aws/codeguru-reviewer/model/ListRecommendationsRequest.h>
#include <aws/codeguru-reviewer/model/ListRecommendationsResult.h>

namespace Aws {
namespace CodeGuruReviewer {
namespace Pagination {

template <typename Client = CodeGuruReviewerClient>
struct ListRecommendationsPaginationTraits {
  using RequestType = Model::ListRecommendationsRequest;
  using ResultType = Model::ListRecommendationsResult;
  using OutcomeType = Model::ListRecommendationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListRecommendations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace CodeGuruReviewer
}  // namespace Aws
