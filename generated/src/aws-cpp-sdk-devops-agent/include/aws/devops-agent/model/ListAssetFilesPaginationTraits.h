/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-agent/DevOpsAgentServiceClientModel.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/ListAssetFilesRequest.h>
#include <aws/devops-agent/model/ListAssetFilesResult.h>

namespace Aws {
namespace DevOpsAgent {
namespace Pagination {

template <typename Client = DevOpsAgentClient>
struct ListAssetFilesPaginationTraits {
  using RequestType = Model::ListAssetFilesRequest;
  using ResultType = Model::ListAssetFilesResult;
  using OutcomeType = Model::ListAssetFilesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListAssetFiles(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace DevOpsAgent
}  // namespace Aws
