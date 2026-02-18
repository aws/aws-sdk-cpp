/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector/InspectorServiceClientModel.h>
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/inspector/model/PreviewAgentsRequest.h>
#include <aws/inspector/model/PreviewAgentsResult.h>

namespace Aws {
namespace Inspector {
namespace Pagination {

template <typename Client = InspectorClient>
struct PreviewAgentsPaginationTraits {
  using RequestType = Model::PreviewAgentsRequest;
  using ResultType = Model::PreviewAgentsResult;
  using OutcomeType = Model::PreviewAgentsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->PreviewAgents(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Inspector
}  // namespace Aws
