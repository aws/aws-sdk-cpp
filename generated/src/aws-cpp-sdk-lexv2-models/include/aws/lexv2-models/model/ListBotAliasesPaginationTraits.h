/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2ServiceClientModel.h>
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/ListBotAliasesRequest.h>
#include <aws/lexv2-models/model/ListBotAliasesResult.h>

namespace Aws {
namespace LexModelsV2 {
namespace Pagination {

template <typename Client = LexModelsV2Client>
struct ListBotAliasesPaginationTraits {
  using RequestType = Model::ListBotAliasesRequest;
  using ResultType = Model::ListBotAliasesResult;
  using OutcomeType = Model::ListBotAliasesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListBotAliases(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace LexModelsV2
}  // namespace Aws
