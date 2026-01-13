/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/GlueServiceClientModel.h>
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/ListTableOptimizerRunsRequest.h>
#include <aws/glue/model/ListTableOptimizerRunsResult.h>

namespace Aws {
namespace Glue {
namespace Pagination {

template <typename Client = GlueClient>
struct ListTableOptimizerRunsPaginationTraits {
  using RequestType = Model::ListTableOptimizerRunsRequest;
  using ResultType = Model::ListTableOptimizerRunsResult;
  using OutcomeType = Model::ListTableOptimizerRunsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListTableOptimizerRuns(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Glue
}  // namespace Aws
