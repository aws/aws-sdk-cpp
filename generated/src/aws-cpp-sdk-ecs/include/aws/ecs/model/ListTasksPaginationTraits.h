/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECSServiceClientModel.h>
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/ListTasksRequest.h>
#include <aws/ecs/model/ListTasksResult.h>

namespace Aws {
namespace ECS {
namespace Pagination {

template <typename Client = ECSClient>
struct ListTasksPaginationTraits {
  using RequestType = Model::ListTasksRequest;
  using ResultType = Model::ListTasksResult;
  using OutcomeType = Model::ListTasksOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListTasks(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ECS
}  // namespace Aws
