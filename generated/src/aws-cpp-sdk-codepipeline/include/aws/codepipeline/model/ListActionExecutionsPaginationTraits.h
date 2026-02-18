/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipelineServiceClientModel.h>
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/model/ListActionExecutionsRequest.h>
#include <aws/codepipeline/model/ListActionExecutionsResult.h>

namespace Aws {
namespace CodePipeline {
namespace Pagination {

template <typename Client = CodePipelineClient>
struct ListActionExecutionsPaginationTraits {
  using RequestType = Model::ListActionExecutionsRequest;
  using ResultType = Model::ListActionExecutionsResult;
  using OutcomeType = Model::ListActionExecutionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListActionExecutions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace CodePipeline
}  // namespace Aws
