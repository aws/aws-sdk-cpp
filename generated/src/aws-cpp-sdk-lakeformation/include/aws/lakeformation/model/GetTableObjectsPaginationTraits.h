/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormationServiceClientModel.h>
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/model/GetTableObjectsRequest.h>
#include <aws/lakeformation/model/GetTableObjectsResult.h>

namespace Aws {
namespace LakeFormation {
namespace Pagination {

template <typename Client = LakeFormationClient>
struct GetTableObjectsPaginationTraits {
  using RequestType = Model::GetTableObjectsRequest;
  using ResultType = Model::GetTableObjectsResult;
  using OutcomeType = Model::GetTableObjectsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->GetTableObjects(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace LakeFormation
}  // namespace Aws
