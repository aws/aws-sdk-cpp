/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSxServiceClientModel.h>
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/DescribeFileCachesRequest.h>
#include <aws/fsx/model/DescribeFileCachesResult.h>

namespace Aws {
namespace FSx {
namespace Pagination {

template <typename Client = FSxClient>
struct DescribeFileCachesPaginationTraits {
  using RequestType = Model::DescribeFileCachesRequest;
  using ResultType = Model::DescribeFileCachesResult;
  using OutcomeType = Model::DescribeFileCachesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeFileCaches(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace FSx
}  // namespace Aws
