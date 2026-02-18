/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuildServiceClientModel.h>
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/model/DescribeCodeCoveragesRequest.h>
#include <aws/codebuild/model/DescribeCodeCoveragesResult.h>

namespace Aws {
namespace CodeBuild {
namespace Pagination {

template <typename Client = CodeBuildClient>
struct DescribeCodeCoveragesPaginationTraits {
  using RequestType = Model::DescribeCodeCoveragesRequest;
  using ResultType = Model::DescribeCodeCoveragesResult;
  using OutcomeType = Model::DescribeCodeCoveragesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeCodeCoverages(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace CodeBuild
}  // namespace Aws
