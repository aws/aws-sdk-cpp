/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECSServiceClientModel.h>
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/ListTaskDefinitionFamiliesRequest.h>
#include <aws/ecs/model/ListTaskDefinitionFamiliesResult.h>

namespace Aws {
namespace ECS {
namespace Pagination {

template <typename Client = ECSClient>
struct ListTaskDefinitionFamiliesPaginationTraits {
  using RequestType = Model::ListTaskDefinitionFamiliesRequest;
  using ResultType = Model::ListTaskDefinitionFamiliesResult;
  using OutcomeType = Model::ListTaskDefinitionFamiliesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListTaskDefinitionFamilies(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ECS
}  // namespace Aws
