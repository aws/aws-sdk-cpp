/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elementalinference/ElementalInferenceServiceClientModel.h>
#include <aws/elementalinference/ElementalInference_EXPORTS.h>
#include <aws/elementalinference/model/ListFunctionsRequest.h>
#include <aws/elementalinference/model/ListFunctionsResult.h>

namespace Aws {
namespace ElementalInference {
namespace Pagination {

template <typename Client = ElementalInferenceClient>
struct ListFunctionsPaginationTraits {
  using RequestType = Model::ListFunctionsRequest;
  using ResultType = Model::ListFunctionsResult;
  using OutcomeType = Model::ListFunctionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListFunctions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ElementalInference
}  // namespace Aws
