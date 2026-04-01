/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-agent/DevOpsAgentServiceClientModel.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/ListExecutionsRequest.h>
#include <aws/devops-agent/model/ListExecutionsResult.h>

namespace Aws {
namespace DevOpsAgent {
namespace Pagination {

template <typename Client = DevOpsAgentClient>
struct ListExecutionsPaginationTraits {
  using RequestType = Model::ListExecutionsRequest;
  using ResultType = Model::ListExecutionsResult;
  using OutcomeType = Model::ListExecutionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListExecutions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace DevOpsAgent
}  // namespace Aws
