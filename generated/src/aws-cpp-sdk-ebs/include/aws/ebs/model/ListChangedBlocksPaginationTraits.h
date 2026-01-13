/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ebs/EBSServiceClientModel.h>
#include <aws/ebs/EBS_EXPORTS.h>
#include <aws/ebs/model/ListChangedBlocksRequest.h>
#include <aws/ebs/model/ListChangedBlocksResult.h>

namespace Aws {
namespace EBS {
namespace Pagination {

template <typename Client = EBSClient>
struct ListChangedBlocksPaginationTraits {
  using RequestType = Model::ListChangedBlocksRequest;
  using ResultType = Model::ListChangedBlocksResult;
  using OutcomeType = Model::ListChangedBlocksOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListChangedBlocks(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace EBS
}  // namespace Aws
