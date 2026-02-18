/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSyncServiceClientModel.h>
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/model/ListAgentsRequest.h>
#include <aws/datasync/model/ListAgentsResult.h>

namespace Aws {
namespace DataSync {
namespace Pagination {

template <typename Client = DataSyncClient>
struct ListAgentsPaginationTraits {
  using RequestType = Model::ListAgentsRequest;
  using ResultType = Model::ListAgentsResult;
  using OutcomeType = Model::ListAgentsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListAgents(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace DataSync
}  // namespace Aws
