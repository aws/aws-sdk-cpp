/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FISServiceClientModel.h>
#include <aws/fis/FIS_EXPORTS.h>
#include <aws/fis/model/ListTargetResourceTypesRequest.h>
#include <aws/fis/model/ListTargetResourceTypesResult.h>

namespace Aws {
namespace FIS {
namespace Pagination {

template <typename Client = FISClient>
struct ListTargetResourceTypesPaginationTraits {
  using RequestType = Model::ListTargetResourceTypesRequest;
  using ResultType = Model::ListTargetResourceTypesResult;
  using OutcomeType = Model::ListTargetResourceTypesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListTargetResourceTypes(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace FIS
}  // namespace Aws
