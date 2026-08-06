/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControlServiceClientModel.h>
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/agent-registry-control/model/ListRegistriesRequest.h>
#include <aws/agent-registry-control/model/ListRegistriesResult.h>

namespace Aws {
namespace AgentRegistryControl {
namespace Pagination {

template <typename Client = AgentRegistryControlClient>
struct ListRegistriesPaginationTraits {
  using RequestType = Model::ListRegistriesRequest;
  using ResultType = Model::ListRegistriesResult;
  using OutcomeType = Model::ListRegistriesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListRegistries(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace AgentRegistryControl
}  // namespace Aws
