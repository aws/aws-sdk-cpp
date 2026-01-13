/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKSServiceClientModel.h>
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/DescribeClusterVersionsRequest.h>
#include <aws/eks/model/DescribeClusterVersionsResult.h>

namespace Aws {
namespace EKS {
namespace Pagination {

template <typename Client = EKSClient>
struct DescribeClusterVersionsPaginationTraits {
  using RequestType = Model::DescribeClusterVersionsRequest;
  using ResultType = Model::DescribeClusterVersionsResult;
  using OutcomeType = Model::DescribeClusterVersionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeClusterVersions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace EKS
}  // namespace Aws
