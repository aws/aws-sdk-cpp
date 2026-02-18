/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/launch-wizard/LaunchWizardServiceClientModel.h>
#include <aws/launch-wizard/LaunchWizard_EXPORTS.h>
#include <aws/launch-wizard/model/ListDeploymentPatternVersionsRequest.h>
#include <aws/launch-wizard/model/ListDeploymentPatternVersionsResult.h>

namespace Aws {
namespace LaunchWizard {
namespace Pagination {

template <typename Client = LaunchWizardClient>
struct ListDeploymentPatternVersionsPaginationTraits {
  using RequestType = Model::ListDeploymentPatternVersionsRequest;
  using ResultType = Model::ListDeploymentPatternVersionsResult;
  using OutcomeType = Model::ListDeploymentPatternVersionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListDeploymentPatternVersions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace LaunchWizard
}  // namespace Aws
