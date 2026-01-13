/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormationServiceClientModel.h>
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/model/ListResourcesRequest.h>
#include <aws/lakeformation/model/ListResourcesResult.h>

namespace Aws {
namespace LakeFormation {
namespace Pagination {

template <typename Client = LakeFormationClient>
struct ListResourcesPaginationTraits {
  using RequestType = Model::ListResourcesRequest;
  using ResultType = Model::ListResourcesResult;
  using OutcomeType = Model::ListResourcesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListResources(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace LakeFormation
}  // namespace Aws
