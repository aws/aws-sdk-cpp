/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/BraketServiceClientModel.h>
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/braket/model/SearchJobsRequest.h>
#include <aws/braket/model/SearchJobsResult.h>

namespace Aws {
namespace Braket {
namespace Pagination {

template <typename Client = BraketClient>
struct SearchJobsPaginationTraits {
  using RequestType = Model::SearchJobsRequest;
  using ResultType = Model::SearchJobsResult;
  using OutcomeType = Model::SearchJobsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->SearchJobs(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Braket
}  // namespace Aws
