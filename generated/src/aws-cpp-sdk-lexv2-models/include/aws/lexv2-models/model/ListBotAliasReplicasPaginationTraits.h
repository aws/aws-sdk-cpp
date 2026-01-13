/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2ServiceClientModel.h>
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/ListBotAliasReplicasRequest.h>
#include <aws/lexv2-models/model/ListBotAliasReplicasResult.h>

namespace Aws {
namespace LexModelsV2 {
namespace Pagination {

template <typename Client = LexModelsV2Client>
struct ListBotAliasReplicasPaginationTraits {
  using RequestType = Model::ListBotAliasReplicasRequest;
  using ResultType = Model::ListBotAliasReplicasResult;
  using OutcomeType = Model::ListBotAliasReplicasOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListBotAliasReplicas(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace LexModelsV2
}  // namespace Aws
