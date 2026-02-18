/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrewServiceClientModel.h>
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/databrew/model/ListSchedulesRequest.h>
#include <aws/databrew/model/ListSchedulesResult.h>

namespace Aws {
namespace GlueDataBrew {
namespace Pagination {

template <typename Client = GlueDataBrewClient>
struct ListSchedulesPaginationTraits {
  using RequestType = Model::ListSchedulesRequest;
  using ResultType = Model::ListSchedulesResult;
  using OutcomeType = Model::ListSchedulesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListSchedules(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace GlueDataBrew
}  // namespace Aws
