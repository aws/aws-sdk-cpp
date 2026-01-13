/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipelineServiceClientModel.h>
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/model/ListRuleExecutionsRequest.h>
#include <aws/codepipeline/model/ListRuleExecutionsResult.h>

namespace Aws {
namespace CodePipeline {
namespace Pagination {

template <typename Client = CodePipelineClient>
struct ListRuleExecutionsPaginationTraits {
  using RequestType = Model::ListRuleExecutionsRequest;
  using ResultType = Model::ListRuleExecutionsResult;
  using OutcomeType = Model::ListRuleExecutionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListRuleExecutions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace CodePipeline
}  // namespace Aws
