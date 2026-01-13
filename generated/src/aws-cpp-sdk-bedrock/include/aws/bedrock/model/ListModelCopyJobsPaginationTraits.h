/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/BedrockServiceClientModel.h>
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/ListModelCopyJobsRequest.h>
#include <aws/bedrock/model/ListModelCopyJobsResult.h>

namespace Aws {
namespace Bedrock {
namespace Pagination {

template <typename Client = BedrockClient>
struct ListModelCopyJobsPaginationTraits {
  using RequestType = Model::ListModelCopyJobsRequest;
  using ResultType = Model::ListModelCopyJobsResult;
  using OutcomeType = Model::ListModelCopyJobsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListModelCopyJobs(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Bedrock
}  // namespace Aws
