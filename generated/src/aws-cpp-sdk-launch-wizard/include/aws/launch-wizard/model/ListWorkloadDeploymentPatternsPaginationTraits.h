/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/launch-wizard/LaunchWizardServiceClientModel.h>
#include <aws/launch-wizard/LaunchWizard_EXPORTS.h>
#include <aws/launch-wizard/model/ListWorkloadDeploymentPatternsRequest.h>
#include <aws/launch-wizard/model/ListWorkloadDeploymentPatternsResult.h>

namespace Aws {
namespace LaunchWizard {
namespace Pagination {

template <typename Client = LaunchWizardClient>
struct ListWorkloadDeploymentPatternsPaginationTraits {
  using RequestType = Model::ListWorkloadDeploymentPatternsRequest;
  using ResultType = Model::ListWorkloadDeploymentPatternsResult;
  using OutcomeType = Model::ListWorkloadDeploymentPatternsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListWorkloadDeploymentPatterns(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace LaunchWizard
}  // namespace Aws
