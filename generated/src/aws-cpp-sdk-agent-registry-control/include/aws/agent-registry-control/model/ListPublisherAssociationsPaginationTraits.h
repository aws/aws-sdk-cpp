/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControlServiceClientModel.h>
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/agent-registry-control/model/ListPublisherAssociationsRequest.h>
#include <aws/agent-registry-control/model/ListPublisherAssociationsResult.h>

namespace Aws {
namespace AgentRegistryControl {
namespace Pagination {

template <typename Client = AgentRegistryControlClient>
struct ListPublisherAssociationsPaginationTraits {
  using RequestType = Model::ListPublisherAssociationsRequest;
  using ResultType = Model::ListPublisherAssociationsResult;
  using OutcomeType = Model::ListPublisherAssociationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListPublisherAssociations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace AgentRegistryControl
}  // namespace Aws
