/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ebs/EBSServiceClientModel.h>
#include <aws/ebs/EBS_EXPORTS.h>
#include <aws/ebs/model/ListSnapshotBlocksRequest.h>
#include <aws/ebs/model/ListSnapshotBlocksResult.h>

namespace Aws {
namespace EBS {
namespace Pagination {

template <typename Client = EBSClient>
struct ListSnapshotBlocksPaginationTraits {
  using RequestType = Model::ListSnapshotBlocksRequest;
  using ResultType = Model::ListSnapshotBlocksResult;
  using OutcomeType = Model::ListSnapshotBlocksOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListSnapshotBlocks(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace EBS
}  // namespace Aws
