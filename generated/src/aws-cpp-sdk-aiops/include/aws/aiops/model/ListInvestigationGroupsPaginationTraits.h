/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/aiops/AIOpsServiceClientModel.h>
#include <aws/aiops/AIOps_EXPORTS.h>
#include <aws/aiops/model/ListInvestigationGroupsRequest.h>
#include <aws/aiops/model/ListInvestigationGroupsResult.h>

namespace Aws {
namespace AIOps {
namespace Pagination {

template <typename Client = AIOpsClient>
struct ListInvestigationGroupsPaginationTraits {
  using RequestType = Model::ListInvestigationGroupsRequest;
  using ResultType = Model::ListInvestigationGroupsResult;
  using OutcomeType = Model::ListInvestigationGroupsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListInvestigationGroups(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace AIOps
}  // namespace Aws
