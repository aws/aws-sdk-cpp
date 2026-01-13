/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryServiceServiceClientModel.h>
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/ds/model/DescribeRegionsRequest.h>
#include <aws/ds/model/DescribeRegionsResult.h>

namespace Aws {
namespace DirectoryService {
namespace Pagination {

template <typename Client = DirectoryServiceClient>
struct DescribeRegionsPaginationTraits {
  using RequestType = Model::DescribeRegionsRequest;
  using ResultType = Model::DescribeRegionsResult;
  using OutcomeType = Model::DescribeRegionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeRegions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace DirectoryService
}  // namespace Aws
