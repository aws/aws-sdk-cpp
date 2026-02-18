/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrewServiceClientModel.h>
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/databrew/model/ListJobsRequest.h>
#include <aws/databrew/model/ListJobsResult.h>

namespace Aws {
namespace GlueDataBrew {
namespace Pagination {

template <typename Client = GlueDataBrewClient>
struct ListJobsPaginationTraits {
  using RequestType = Model::ListJobsRequest;
  using ResultType = Model::ListJobsResult;
  using OutcomeType = Model::ListJobsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListJobs(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace GlueDataBrew
}  // namespace Aws
