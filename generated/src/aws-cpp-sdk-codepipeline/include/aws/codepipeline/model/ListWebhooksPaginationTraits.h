/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipelineServiceClientModel.h>
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/model/ListWebhooksRequest.h>
#include <aws/codepipeline/model/ListWebhooksResult.h>

namespace Aws {
namespace CodePipeline {
namespace Pagination {

template <typename Client = CodePipelineClient>
struct ListWebhooksPaginationTraits {
  using RequestType = Model::ListWebhooksRequest;
  using ResultType = Model::ListWebhooksResult;
  using OutcomeType = Model::ListWebhooksOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListWebhooks(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace CodePipeline
}  // namespace Aws
