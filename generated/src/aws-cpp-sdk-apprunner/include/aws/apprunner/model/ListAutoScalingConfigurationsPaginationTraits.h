/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunnerServiceClientModel.h>
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/apprunner/model/ListAutoScalingConfigurationsRequest.h>
#include <aws/apprunner/model/ListAutoScalingConfigurationsResult.h>

namespace Aws {
namespace AppRunner {
namespace Pagination {

template <typename Client = AppRunnerClient>
struct ListAutoScalingConfigurationsPaginationTraits {
  using RequestType = Model::ListAutoScalingConfigurationsRequest;
  using ResultType = Model::ListAutoScalingConfigurationsResult;
  using OutcomeType = Model::ListAutoScalingConfigurationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListAutoScalingConfigurations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace AppRunner
}  // namespace Aws
