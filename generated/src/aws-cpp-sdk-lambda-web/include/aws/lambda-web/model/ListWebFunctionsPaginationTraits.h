/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda-web/LambdaWebServiceClientModel.h>
#include <aws/lambda-web/LambdaWeb_EXPORTS.h>
#include <aws/lambda-web/model/ListWebFunctionsRequest.h>
#include <aws/lambda-web/model/ListWebFunctionsResult.h>

namespace Aws {
namespace LambdaWeb {
namespace Pagination {

template <typename Client = LambdaWebClient>
struct ListWebFunctionsPaginationTraits {
  using RequestType = Model::ListWebFunctionsRequest;
  using ResultType = Model::ListWebFunctionsResult;
  using OutcomeType = Model::ListWebFunctionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListWebFunctions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace LambdaWeb
}  // namespace Aws
