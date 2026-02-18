/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/DrsServiceClientModel.h>
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/model/DescribeJobLogItemsRequest.h>
#include <aws/drs/model/DescribeJobLogItemsResult.h>

namespace Aws {
namespace drs {
namespace Pagination {

template <typename Client = DrsClient>
struct DescribeJobLogItemsPaginationTraits {
  using RequestType = Model::DescribeJobLogItemsRequest;
  using ResultType = Model::DescribeJobLogItemsResult;
  using OutcomeType = Model::DescribeJobLogItemsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeJobLogItems(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace drs
}  // namespace Aws
