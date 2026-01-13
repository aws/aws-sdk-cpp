/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/AmplifyServiceClientModel.h>
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/amplify/model/ListJobsRequest.h>
#include <aws/amplify/model/ListJobsResult.h>

namespace Aws {
namespace Amplify {
namespace Pagination {

template <typename Client = AmplifyClient>
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
}  // namespace Amplify
}  // namespace Aws
