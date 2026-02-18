/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/AppflowServiceClientModel.h>
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/appflow/model/ListFlowsRequest.h>
#include <aws/appflow/model/ListFlowsResult.h>

namespace Aws {
namespace Appflow {
namespace Pagination {

template <typename Client = AppflowClient>
struct ListFlowsPaginationTraits {
  using RequestType = Model::ListFlowsRequest;
  using ResultType = Model::ListFlowsResult;
  using OutcomeType = Model::ListFlowsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListFlows(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Appflow
}  // namespace Aws
