/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZoneServiceClientModel.h>
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/ListNotebookRunsRequest.h>
#include <aws/datazone/model/ListNotebookRunsResult.h>

namespace Aws {
namespace DataZone {
namespace Pagination {

template <typename Client = DataZoneClient>
struct ListNotebookRunsPaginationTraits {
  using RequestType = Model::ListNotebookRunsRequest;
  using ResultType = Model::ListNotebookRunsResult;
  using OutcomeType = Model::ListNotebookRunsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListNotebookRuns(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace DataZone
}  // namespace Aws
