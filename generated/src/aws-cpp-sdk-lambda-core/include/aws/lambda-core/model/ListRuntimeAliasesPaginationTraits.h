/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda-core/LambdaCoreServiceClientModel.h>
#include <aws/lambda-core/LambdaCore_EXPORTS.h>
#include <aws/lambda-core/model/ListRuntimeAliasesRequest.h>
#include <aws/lambda-core/model/ListRuntimeAliasesResult.h>

namespace Aws {
namespace LambdaCore {
namespace Pagination {

template <typename Client = LambdaCoreClient>
struct ListRuntimeAliasesPaginationTraits {
  using RequestType = Model::ListRuntimeAliasesRequest;
  using ResultType = Model::ListRuntimeAliasesResult;
  using OutcomeType = Model::ListRuntimeAliasesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListRuntimeAliases(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace LambdaCore
}  // namespace Aws
