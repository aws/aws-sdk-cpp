/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda-core/LambdaCoreServiceClientModel.h>
#include <aws/lambda-core/LambdaCore_EXPORTS.h>
#include <aws/lambda-core/model/ListRuntimeVersionsRequest.h>
#include <aws/lambda-core/model/ListRuntimeVersionsResult.h>

namespace Aws {
namespace LambdaCore {
namespace Pagination {

template <typename Client = LambdaCoreClient>
struct ListRuntimeVersionsPaginationTraits {
  using RequestType = Model::ListRuntimeVersionsRequest;
  using ResultType = Model::ListRuntimeVersionsResult;
  using OutcomeType = Model::ListRuntimeVersionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListRuntimeVersions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace LambdaCore
}  // namespace Aws
