/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/FinspaceServiceClientModel.h>
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/finspace/model/ListKxScalingGroupsRequest.h>
#include <aws/finspace/model/ListKxScalingGroupsResult.h>

namespace Aws {
namespace finspace {
namespace Pagination {

template <typename Client = FinspaceClient>
struct ListKxScalingGroupsPaginationTraits {
  using RequestType = Model::ListKxScalingGroupsRequest;
  using ResultType = Model::ListKxScalingGroupsResult;
  using OutcomeType = Model::ListKxScalingGroupsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListKxScalingGroups(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace finspace
}  // namespace Aws
