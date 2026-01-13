/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuildServiceClientModel.h>
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/model/ListReportsForReportGroupRequest.h>
#include <aws/codebuild/model/ListReportsForReportGroupResult.h>

namespace Aws {
namespace CodeBuild {
namespace Pagination {

template <typename Client = CodeBuildClient>
struct ListReportsForReportGroupPaginationTraits {
  using RequestType = Model::ListReportsForReportGroupRequest;
  using ResultType = Model::ListReportsForReportGroupResult;
  using OutcomeType = Model::ListReportsForReportGroupOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListReportsForReportGroup(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace CodeBuild
}  // namespace Aws
