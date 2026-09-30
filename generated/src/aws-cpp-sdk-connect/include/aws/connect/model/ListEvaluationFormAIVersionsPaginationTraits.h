/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/ConnectServiceClientModel.h>
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/ListEvaluationFormAIVersionsRequest.h>
#include <aws/connect/model/ListEvaluationFormAIVersionsResult.h>

namespace Aws {
namespace Connect {
namespace Pagination {

template <typename Client = ConnectClient>
struct ListEvaluationFormAIVersionsPaginationTraits {
  using RequestType = Model::ListEvaluationFormAIVersionsRequest;
  using ResultType = Model::ListEvaluationFormAIVersionsResult;
  using OutcomeType = Model::ListEvaluationFormAIVersionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListEvaluationFormAIVersions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Connect
}  // namespace Aws
