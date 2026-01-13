/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLiftServiceClientModel.h>
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/DescribeFleetUtilizationRequest.h>
#include <aws/gamelift/model/DescribeFleetUtilizationResult.h>

namespace Aws {
namespace GameLift {
namespace Pagination {

template <typename Client = GameLiftClient>
struct DescribeFleetUtilizationPaginationTraits {
  using RequestType = Model::DescribeFleetUtilizationRequest;
  using ResultType = Model::DescribeFleetUtilizationResult;
  using OutcomeType = Model::DescribeFleetUtilizationOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeFleetUtilization(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace GameLift
}  // namespace Aws
