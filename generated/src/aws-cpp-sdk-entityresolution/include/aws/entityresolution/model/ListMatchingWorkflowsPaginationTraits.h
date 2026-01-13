/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolutionServiceClientModel.h>
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/entityresolution/model/ListMatchingWorkflowsRequest.h>
#include <aws/entityresolution/model/ListMatchingWorkflowsResult.h>

namespace Aws {
namespace EntityResolution {
namespace Pagination {

template <typename Client = EntityResolutionClient>
struct ListMatchingWorkflowsPaginationTraits {
  using RequestType = Model::ListMatchingWorkflowsRequest;
  using ResultType = Model::ListMatchingWorkflowsResult;
  using OutcomeType = Model::ListMatchingWorkflowsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListMatchingWorkflows(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace EntityResolution
}  // namespace Aws
