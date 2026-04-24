/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FISServiceClientModel.h>
#include <aws/fis/FIS_EXPORTS.h>
#include <aws/fis/model/ListActionsRequest.h>
#include <aws/fis/model/ListActionsResult.h>

namespace Aws {
namespace FIS {
namespace Pagination {

template <typename Client = FISClient>
struct ListActionsPaginationTraits {
  using RequestType = Model::ListActionsRequest;
  using ResultType = Model::ListActionsResult;
  using OutcomeType = Model::ListActionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListActions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace FIS
}  // namespace Aws
