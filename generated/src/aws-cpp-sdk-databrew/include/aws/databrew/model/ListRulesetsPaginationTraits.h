/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrewServiceClientModel.h>
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/databrew/model/ListRulesetsRequest.h>
#include <aws/databrew/model/ListRulesetsResult.h>

namespace Aws {
namespace GlueDataBrew {
namespace Pagination {

template <typename Client = GlueDataBrewClient>
struct ListRulesetsPaginationTraits {
  using RequestType = Model::ListRulesetsRequest;
  using ResultType = Model::ListRulesetsResult;
  using OutcomeType = Model::ListRulesetsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListRulesets(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace GlueDataBrew
}  // namespace Aws
