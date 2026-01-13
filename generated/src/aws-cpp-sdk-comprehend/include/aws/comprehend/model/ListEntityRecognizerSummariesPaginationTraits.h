/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/ComprehendServiceClientModel.h>
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/model/ListEntityRecognizerSummariesRequest.h>
#include <aws/comprehend/model/ListEntityRecognizerSummariesResult.h>

namespace Aws {
namespace Comprehend {
namespace Pagination {

template <typename Client = ComprehendClient>
struct ListEntityRecognizerSummariesPaginationTraits {
  using RequestType = Model::ListEntityRecognizerSummariesRequest;
  using ResultType = Model::ListEntityRecognizerSummariesResult;
  using OutcomeType = Model::ListEntityRecognizerSummariesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListEntityRecognizerSummaries(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Comprehend
}  // namespace Aws
