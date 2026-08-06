/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry/AgentRegistryServiceClientModel.h>
#include <aws/agent-registry/AgentRegistry_EXPORTS.h>
#include <aws/agent-registry/model/ListDiscoverableRegistryRecordsRequest.h>
#include <aws/agent-registry/model/ListDiscoverableRegistryRecordsResult.h>

namespace Aws {
namespace AgentRegistry {
namespace Pagination {

template <typename Client = AgentRegistryClient>
struct ListDiscoverableRegistryRecordsPaginationTraits {
  using RequestType = Model::ListDiscoverableRegistryRecordsRequest;
  using ResultType = Model::ListDiscoverableRegistryRecordsResult;
  using OutcomeType = Model::ListDiscoverableRegistryRecordsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListDiscoverableRegistryRecords(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace AgentRegistry
}  // namespace Aws
