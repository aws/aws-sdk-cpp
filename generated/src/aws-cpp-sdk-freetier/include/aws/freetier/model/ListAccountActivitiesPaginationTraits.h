/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/freetier/FreeTierServiceClientModel.h>
#include <aws/freetier/FreeTier_EXPORTS.h>
#include <aws/freetier/model/ListAccountActivitiesRequest.h>
#include <aws/freetier/model/ListAccountActivitiesResult.h>

namespace Aws {
namespace FreeTier {
namespace Pagination {

template <typename Client = FreeTierClient>
struct ListAccountActivitiesPaginationTraits {
  using RequestType = Model::ListAccountActivitiesRequest;
  using ResultType = Model::ListAccountActivitiesResult;
  using OutcomeType = Model::ListAccountActivitiesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListAccountActivities(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace FreeTier
}  // namespace Aws
