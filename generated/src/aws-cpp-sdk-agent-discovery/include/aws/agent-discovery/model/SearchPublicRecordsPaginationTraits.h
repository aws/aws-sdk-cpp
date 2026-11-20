/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-discovery/AgentDiscoveryServiceClientModel.h>
#include <aws/agent-discovery/AgentDiscovery_EXPORTS.h>
#include <aws/agent-discovery/model/SearchPublicRecordsRequest.h>
#include <aws/agent-discovery/model/SearchPublicRecordsResult.h>

namespace Aws {
namespace AgentDiscovery {
namespace Pagination {

template <typename Client = AgentDiscoveryClient>
struct SearchPublicRecordsPaginationTraits {
  using RequestType = Model::SearchPublicRecordsRequest;
  using ResultType = Model::SearchPublicRecordsResult;
  using OutcomeType = Model::SearchPublicRecordsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->SearchPublicRecords(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace AgentDiscovery
}  // namespace Aws
