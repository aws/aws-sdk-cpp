/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLiftServiceClientModel.h>
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/ListContainerGroupDefinitionVersionsRequest.h>
#include <aws/gamelift/model/ListContainerGroupDefinitionVersionsResult.h>

namespace Aws {
namespace GameLift {
namespace Pagination {

template <typename Client = GameLiftClient>
struct ListContainerGroupDefinitionVersionsPaginationTraits {
  using RequestType = Model::ListContainerGroupDefinitionVersionsRequest;
  using ResultType = Model::ListContainerGroupDefinitionVersionsResult;
  using OutcomeType = Model::ListContainerGroupDefinitionVersionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListContainerGroupDefinitionVersions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace GameLift
}  // namespace Aws
