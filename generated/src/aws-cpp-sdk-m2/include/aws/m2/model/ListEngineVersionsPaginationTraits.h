/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernizationServiceClientModel.h>
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/m2/model/ListEngineVersionsRequest.h>
#include <aws/m2/model/ListEngineVersionsResult.h>

namespace Aws {
namespace MainframeModernization {
namespace Pagination {

template <typename Client = MainframeModernizationClient>
struct ListEngineVersionsPaginationTraits {
  using RequestType = Model::ListEngineVersionsRequest;
  using ResultType = Model::ListEngineVersionsResult;
  using OutcomeType = Model::ListEngineVersionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListEngineVersions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace MainframeModernization
}  // namespace Aws
