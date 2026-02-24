/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elementalinference/ElementalInferenceServiceClientModel.h>
#include <aws/elementalinference/ElementalInference_EXPORTS.h>
#include <aws/elementalinference/model/ListFeedsRequest.h>
#include <aws/elementalinference/model/ListFeedsResult.h>

namespace Aws {
namespace ElementalInference {
namespace Pagination {

template <typename Client = ElementalInferenceClient>
struct ListFeedsPaginationTraits {
  using RequestType = Model::ListFeedsRequest;
  using ResultType = Model::ListFeedsResult;
  using OutcomeType = Model::ListFeedsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListFeeds(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ElementalInference
}  // namespace Aws
