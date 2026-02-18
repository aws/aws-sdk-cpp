/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarmServiceClientModel.h>
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/model/ListArtifactsRequest.h>
#include <aws/devicefarm/model/ListArtifactsResult.h>

namespace Aws {
namespace DeviceFarm {
namespace Pagination {

template <typename Client = DeviceFarmClient>
struct ListArtifactsPaginationTraits {
  using RequestType = Model::ListArtifactsRequest;
  using ResultType = Model::ListArtifactsResult;
  using OutcomeType = Model::ListArtifactsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListArtifacts(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace DeviceFarm
}  // namespace Aws
