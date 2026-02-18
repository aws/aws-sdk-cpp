/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfigServiceClientModel.h>
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/appconfig/model/ListDeploymentStrategiesRequest.h>
#include <aws/appconfig/model/ListDeploymentStrategiesResult.h>

namespace Aws {
namespace AppConfig {
namespace Pagination {

template <typename Client = AppConfigClient>
struct ListDeploymentStrategiesPaginationTraits {
  using RequestType = Model::ListDeploymentStrategiesRequest;
  using ResultType = Model::ListDeploymentStrategiesResult;
  using OutcomeType = Model::ListDeploymentStrategiesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListDeploymentStrategies(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace AppConfig
}  // namespace Aws
