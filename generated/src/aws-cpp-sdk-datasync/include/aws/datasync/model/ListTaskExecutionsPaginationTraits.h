/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSyncServiceClientModel.h>
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/model/ListTaskExecutionsRequest.h>
#include <aws/datasync/model/ListTaskExecutionsResult.h>

namespace Aws {
namespace DataSync {
namespace Pagination {

template <typename Client = DataSyncClient>
struct ListTaskExecutionsPaginationTraits {
  using RequestType = Model::ListTaskExecutionsRequest;
  using ResultType = Model::ListTaskExecutionsResult;
  using OutcomeType = Model::ListTaskExecutionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListTaskExecutions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace DataSync
}  // namespace Aws
