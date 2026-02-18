/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticfilesystem/EFSServiceClientModel.h>
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/elasticfilesystem/model/DescribeAccessPointsRequest.h>
#include <aws/elasticfilesystem/model/DescribeAccessPointsResult.h>

namespace Aws {
namespace EFS {
namespace Pagination {

template <typename Client = EFSClient>
struct DescribeAccessPointsPaginationTraits {
  using RequestType = Model::DescribeAccessPointsRequest;
  using ResultType = Model::DescribeAccessPointsResult;
  using OutcomeType = Model::DescribeAccessPointsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeAccessPoints(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace EFS
}  // namespace Aws
