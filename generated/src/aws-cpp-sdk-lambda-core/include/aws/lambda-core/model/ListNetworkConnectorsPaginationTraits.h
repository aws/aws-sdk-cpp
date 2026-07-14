/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda-core/LambdaCoreServiceClientModel.h>
#include <aws/lambda-core/LambdaCore_EXPORTS.h>
#include <aws/lambda-core/model/ListNetworkConnectorsRequest.h>
#include <aws/lambda-core/model/ListNetworkConnectorsResult.h>

namespace Aws {
namespace LambdaCore {
namespace Pagination {

template <typename Client = LambdaCoreClient>
struct ListNetworkConnectorsPaginationTraits {
  using RequestType = Model::ListNetworkConnectorsRequest;
  using ResultType = Model::ListNetworkConnectorsResult;
  using OutcomeType = Model::ListNetworkConnectorsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListNetworkConnectors(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextMarker().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetMarker(result.GetNextMarker()); }
};

}  // namespace Pagination
}  // namespace LambdaCore
}  // namespace Aws
