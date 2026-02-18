/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeployServiceClientModel.h>
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/codedeploy/model/ListDeploymentConfigsRequest.h>
#include <aws/codedeploy/model/ListDeploymentConfigsResult.h>

namespace Aws {
namespace CodeDeploy {
namespace Pagination {

template <typename Client = CodeDeployClient>
struct ListDeploymentConfigsPaginationTraits {
  using RequestType = Model::ListDeploymentConfigsRequest;
  using ResultType = Model::ListDeploymentConfigsResult;
  using OutcomeType = Model::ListDeploymentConfigsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListDeploymentConfigs(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace CodeDeploy
}  // namespace Aws
