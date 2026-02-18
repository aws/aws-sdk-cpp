/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/LambdaServiceClientModel.h>
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/model/ListCodeSigningConfigsRequest.h>
#include <aws/lambda/model/ListCodeSigningConfigsResult.h>

namespace Aws {
namespace Lambda {
namespace Pagination {

template <typename Client = LambdaClient>
struct ListCodeSigningConfigsPaginationTraits {
  using RequestType = Model::ListCodeSigningConfigsRequest;
  using ResultType = Model::ListCodeSigningConfigsResult;
  using OutcomeType = Model::ListCodeSigningConfigsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListCodeSigningConfigs(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextMarker().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetMarker(result.GetNextMarker()); }
};

}  // namespace Pagination
}  // namespace Lambda
}  // namespace Aws
