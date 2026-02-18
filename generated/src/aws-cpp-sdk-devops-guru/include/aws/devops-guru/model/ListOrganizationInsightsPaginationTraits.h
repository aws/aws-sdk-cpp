/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuruServiceClientModel.h>
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/model/ListOrganizationInsightsRequest.h>
#include <aws/devops-guru/model/ListOrganizationInsightsResult.h>

namespace Aws {
namespace DevOpsGuru {
namespace Pagination {

template <typename Client = DevOpsGuruClient>
struct ListOrganizationInsightsPaginationTraits {
  using RequestType = Model::ListOrganizationInsightsRequest;
  using ResultType = Model::ListOrganizationInsightsResult;
  using OutcomeType = Model::ListOrganizationInsightsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListOrganizationInsights(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace DevOpsGuru
}  // namespace Aws
