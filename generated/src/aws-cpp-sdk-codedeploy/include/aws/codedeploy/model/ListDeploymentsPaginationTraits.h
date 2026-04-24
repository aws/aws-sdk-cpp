/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeployServiceClientModel.h>
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/codedeploy/model/ListDeploymentsRequest.h>
#include <aws/codedeploy/model/ListDeploymentsResult.h>

namespace Aws {
namespace CodeDeploy {
namespace Pagination {

template <typename Client = CodeDeployClient>
struct ListDeploymentsPaginationTraits {
  using RequestType = Model::ListDeploymentsRequest;
  using ResultType = Model::ListDeploymentsResult;
  using OutcomeType = Model::ListDeploymentsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListDeployments(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace CodeDeploy
}  // namespace Aws
