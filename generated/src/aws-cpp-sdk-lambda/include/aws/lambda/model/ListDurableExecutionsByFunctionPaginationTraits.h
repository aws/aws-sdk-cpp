/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/LambdaServiceClientModel.h>
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/model/ListDurableExecutionsByFunctionRequest.h>
#include <aws/lambda/model/ListDurableExecutionsByFunctionResult.h>

namespace Aws {
namespace Lambda {
namespace Pagination {

template <typename Client = LambdaClient>
struct ListDurableExecutionsByFunctionPaginationTraits {
  using RequestType = Model::ListDurableExecutionsByFunctionRequest;
  using ResultType = Model::ListDurableExecutionsByFunctionResult;
  using OutcomeType = Model::ListDurableExecutionsByFunctionOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListDurableExecutionsByFunction(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextMarker().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetMarker(result.GetNextMarker()); }
};

}  // namespace Pagination
}  // namespace Lambda
}  // namespace Aws
