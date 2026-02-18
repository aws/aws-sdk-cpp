/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormationServiceClientModel.h>
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/model/ListPermissionsRequest.h>
#include <aws/lakeformation/model/ListPermissionsResult.h>

namespace Aws {
namespace LakeFormation {
namespace Pagination {

template <typename Client = LakeFormationClient>
struct ListPermissionsPaginationTraits {
  using RequestType = Model::ListPermissionsRequest;
  using ResultType = Model::ListPermissionsResult;
  using OutcomeType = Model::ListPermissionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListPermissions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace LakeFormation
}  // namespace Aws
