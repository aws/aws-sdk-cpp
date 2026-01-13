/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/ConnectServiceClientModel.h>
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/ListRealtimeContactAnalysisSegmentsV2Request.h>
#include <aws/connect/model/ListRealtimeContactAnalysisSegmentsV2Result.h>

namespace Aws {
namespace Connect {
namespace Pagination {

template <typename Client = ConnectClient>
struct ListRealtimeContactAnalysisSegmentsV2PaginationTraits {
  using RequestType = Model::ListRealtimeContactAnalysisSegmentsV2Request;
  using ResultType = Model::ListRealtimeContactAnalysisSegmentsV2Result;
  using OutcomeType = Model::ListRealtimeContactAnalysisSegmentsV2Outcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListRealtimeContactAnalysisSegmentsV2(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Connect
}  // namespace Aws
