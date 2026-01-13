/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backupsearch/BackupSearchServiceClientModel.h>
#include <aws/backupsearch/BackupSearch_EXPORTS.h>
#include <aws/backupsearch/model/ListSearchJobsRequest.h>
#include <aws/backupsearch/model/ListSearchJobsResult.h>

namespace Aws {
namespace BackupSearch {
namespace Pagination {

template <typename Client = BackupSearchClient>
struct ListSearchJobsPaginationTraits {
  using RequestType = Model::ListSearchJobsRequest;
  using ResultType = Model::ListSearchJobsResult;
  using OutcomeType = Model::ListSearchJobsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListSearchJobs(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace BackupSearch
}  // namespace Aws
