/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECSServiceClientModel.h>
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/ListContainerInstancesRequest.h>
#include <aws/ecs/model/ListContainerInstancesResult.h>

namespace Aws {
namespace ECS {
namespace Pagination {

template <typename Client = ECSClient>
struct ListContainerInstancesPaginationTraits {
  using RequestType = Model::ListContainerInstancesRequest;
  using ResultType = Model::ListContainerInstancesResult;
  using OutcomeType = Model::ListContainerInstancesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListContainerInstances(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ECS
}  // namespace Aws
