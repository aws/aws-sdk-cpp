/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuildServiceClientModel.h>
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/model/ListBuildBatchesForProjectRequest.h>
#include <aws/codebuild/model/ListBuildBatchesForProjectResult.h>

namespace Aws {
namespace CodeBuild {
namespace Pagination {

template <typename Client = CodeBuildClient>
struct ListBuildBatchesForProjectPaginationTraits {
  using RequestType = Model::ListBuildBatchesForProjectRequest;
  using ResultType = Model::ListBuildBatchesForProjectResult;
  using OutcomeType = Model::ListBuildBatchesForProjectOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListBuildBatchesForProject(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace CodeBuild
}  // namespace Aws
