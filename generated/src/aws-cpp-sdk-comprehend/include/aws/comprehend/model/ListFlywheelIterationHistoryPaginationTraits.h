/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/ComprehendServiceClientModel.h>
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/model/ListFlywheelIterationHistoryRequest.h>
#include <aws/comprehend/model/ListFlywheelIterationHistoryResult.h>

namespace Aws {
namespace Comprehend {
namespace Pagination {

template <typename Client = ComprehendClient>
struct ListFlywheelIterationHistoryPaginationTraits {
  using RequestType = Model::ListFlywheelIterationHistoryRequest;
  using ResultType = Model::ListFlywheelIterationHistoryResult;
  using OutcomeType = Model::ListFlywheelIterationHistoryOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListFlywheelIterationHistory(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Comprehend
}  // namespace Aws
