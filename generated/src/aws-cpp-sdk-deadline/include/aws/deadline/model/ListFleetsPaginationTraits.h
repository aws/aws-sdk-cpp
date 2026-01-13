/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/DeadlineServiceClientModel.h>
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/ListFleetsRequest.h>
#include <aws/deadline/model/ListFleetsResult.h>

namespace Aws {
namespace deadline {
namespace Pagination {

template <typename Client = DeadlineClient>
struct ListFleetsPaginationTraits {
  using RequestType = Model::ListFleetsRequest;
  using ResultType = Model::ListFleetsResult;
  using OutcomeType = Model::ListFleetsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListFleets(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace deadline
}  // namespace Aws
