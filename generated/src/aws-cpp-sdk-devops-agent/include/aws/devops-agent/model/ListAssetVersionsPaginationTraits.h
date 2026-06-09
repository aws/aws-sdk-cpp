/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-agent/DevOpsAgentServiceClientModel.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/ListAssetVersionsRequest.h>
#include <aws/devops-agent/model/ListAssetVersionsResult.h>

namespace Aws {
namespace DevOpsAgent {
namespace Pagination {

template <typename Client = DevOpsAgentClient>
struct ListAssetVersionsPaginationTraits {
  using RequestType = Model::ListAssetVersionsRequest;
  using ResultType = Model::ListAssetVersionsResult;
  using OutcomeType = Model::ListAssetVersionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListAssetVersions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace DevOpsAgent
}  // namespace Aws
