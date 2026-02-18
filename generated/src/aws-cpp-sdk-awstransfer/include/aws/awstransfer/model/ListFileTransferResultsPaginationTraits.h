/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/TransferServiceClientModel.h>
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/model/ListFileTransferResultsRequest.h>
#include <aws/awstransfer/model/ListFileTransferResultsResult.h>

namespace Aws {
namespace Transfer {
namespace Pagination {

template <typename Client = TransferClient>
struct ListFileTransferResultsPaginationTraits {
  using RequestType = Model::ListFileTransferResultsRequest;
  using ResultType = Model::ListFileTransferResultsResult;
  using OutcomeType = Model::ListFileTransferResultsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListFileTransferResults(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Transfer
}  // namespace Aws
