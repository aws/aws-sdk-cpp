/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-reviewer/CodeGuruReviewerServiceClientModel.h>
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>
#include <aws/codeguru-reviewer/model/ListRepositoryAssociationsRequest.h>
#include <aws/codeguru-reviewer/model/ListRepositoryAssociationsResult.h>

namespace Aws {
namespace CodeGuruReviewer {
namespace Pagination {

template <typename Client = CodeGuruReviewerClient>
struct ListRepositoryAssociationsPaginationTraits {
  using RequestType = Model::ListRepositoryAssociationsRequest;
  using ResultType = Model::ListRepositoryAssociationsResult;
  using OutcomeType = Model::ListRepositoryAssociationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListRepositoryAssociations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace CodeGuruReviewer
}  // namespace Aws
