/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/BraketServiceClientModel.h>
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/braket/model/SearchQuantumTasksRequest.h>
#include <aws/braket/model/SearchQuantumTasksResult.h>

namespace Aws {
namespace Braket {
namespace Pagination {

template <typename Client = BraketClient>
struct SearchQuantumTasksPaginationTraits {
  using RequestType = Model::SearchQuantumTasksRequest;
  using ResultType = Model::SearchQuantumTasksResult;
  using OutcomeType = Model::SearchQuantumTasksOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->SearchQuantumTasks(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Braket
}  // namespace Aws
