/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmniServiceClientModel.h>
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/cloudwatchomni/model/GetContextGraphRequest.h>
#include <aws/cloudwatchomni/model/GetContextGraphResult.h>

namespace Aws {
namespace CloudWatchOmni {
namespace Pagination {

template <typename Client = CloudWatchOmniClient>
struct GetContextGraphPaginationTraits {
  using RequestType = Model::GetContextGraphRequest;
  using ResultType = Model::GetContextGraphResult;
  using OutcomeType = Model::GetContextGraphOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->GetContextGraph(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace CloudWatchOmni
}  // namespace Aws
