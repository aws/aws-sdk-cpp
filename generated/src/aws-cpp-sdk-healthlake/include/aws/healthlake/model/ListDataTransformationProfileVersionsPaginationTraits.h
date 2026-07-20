/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/healthlake/HealthLakeServiceClientModel.h>
#include <aws/healthlake/HealthLake_EXPORTS.h>
#include <aws/healthlake/model/ListDataTransformationProfileVersionsRequest.h>
#include <aws/healthlake/model/ListDataTransformationProfileVersionsResult.h>

namespace Aws {
namespace HealthLake {
namespace Pagination {

template <typename Client = HealthLakeClient>
struct ListDataTransformationProfileVersionsPaginationTraits {
  using RequestType = Model::ListDataTransformationProfileVersionsRequest;
  using ResultType = Model::ListDataTransformationProfileVersionsResult;
  using OutcomeType = Model::ListDataTransformationProfileVersionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListDataTransformationProfileVersions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace HealthLake
}  // namespace Aws
