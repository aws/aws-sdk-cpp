/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormationServiceClientModel.h>
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/model/ListLFTagExpressionsRequest.h>
#include <aws/lakeformation/model/ListLFTagExpressionsResult.h>

namespace Aws {
namespace LakeFormation {
namespace Pagination {

template <typename Client = LakeFormationClient>
struct ListLFTagExpressionsPaginationTraits {
  using RequestType = Model::ListLFTagExpressionsRequest;
  using ResultType = Model::ListLFTagExpressionsResult;
  using OutcomeType = Model::ListLFTagExpressionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListLFTagExpressions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace LakeFormation
}  // namespace Aws
