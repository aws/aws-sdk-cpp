/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect-contact-lens/ConnectContactLensServiceClientModel.h>
#include <aws/connect-contact-lens/ConnectContactLens_EXPORTS.h>
#include <aws/connect-contact-lens/model/ListRealtimeContactAnalysisSegmentsRequest.h>
#include <aws/connect-contact-lens/model/ListRealtimeContactAnalysisSegmentsResult.h>

namespace Aws {
namespace ConnectContactLens {
namespace Pagination {

template <typename Client = ConnectContactLensClient>
struct ListRealtimeContactAnalysisSegmentsPaginationTraits {
  using RequestType = Model::ListRealtimeContactAnalysisSegmentsRequest;
  using ResultType = Model::ListRealtimeContactAnalysisSegmentsResult;
  using OutcomeType = Model::ListRealtimeContactAnalysisSegmentsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListRealtimeContactAnalysisSegments(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ConnectContactLens
}  // namespace Aws
