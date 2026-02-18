/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSxServiceClientModel.h>
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/DescribeSnapshotsRequest.h>
#include <aws/fsx/model/DescribeSnapshotsResult.h>

namespace Aws {
namespace FSx {
namespace Pagination {

template <typename Client = FSxClient>
struct DescribeSnapshotsPaginationTraits {
  using RequestType = Model::DescribeSnapshotsRequest;
  using ResultType = Model::DescribeSnapshotsResult;
  using OutcomeType = Model::DescribeSnapshotsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeSnapshots(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace FSx
}  // namespace Aws
