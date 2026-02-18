/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/LambdaServiceClientModel.h>
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/model/ListFunctionsRequest.h>
#include <aws/lambda/model/ListFunctionsResult.h>

namespace Aws {
namespace Lambda {
namespace Pagination {

template <typename Client = LambdaClient>
struct ListFunctionsPaginationTraits {
  using RequestType = Model::ListFunctionsRequest;
  using ResultType = Model::ListFunctionsResult;
  using OutcomeType = Model::ListFunctionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListFunctions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextMarker().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetMarker(result.GetNextMarker()); }
};

}  // namespace Pagination
}  // namespace Lambda
}  // namespace Aws
