/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControlServiceClientModel.h>
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/agent-registry-control/model/ListRegistryRecordsRequest.h>
#include <aws/agent-registry-control/model/ListRegistryRecordsResult.h>

namespace Aws {
namespace AgentRegistryControl {
namespace Pagination {

template <typename Client = AgentRegistryControlClient>
struct ListRegistryRecordsPaginationTraits {
  using RequestType = Model::ListRegistryRecordsRequest;
  using ResultType = Model::ListRegistryRecordsResult;
  using OutcomeType = Model::ListRegistryRecordsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListRegistryRecords(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace AgentRegistryControl
}  // namespace Aws
