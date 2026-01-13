/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/TransferServiceClientModel.h>
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/model/ListExecutionsRequest.h>
#include <aws/awstransfer/model/ListExecutionsResult.h>

namespace Aws {
namespace Transfer {
namespace Pagination {

template <typename Client = TransferClient>
struct ListExecutionsPaginationTraits {
  using RequestType = Model::ListExecutionsRequest;
  using ResultType = Model::ListExecutionsResult;
  using OutcomeType = Model::ListExecutionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListExecutions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Transfer
}  // namespace Aws
