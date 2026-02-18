/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingServiceServiceClientModel.h>
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/lex-models/model/GetBotChannelAssociationsRequest.h>
#include <aws/lex-models/model/GetBotChannelAssociationsResult.h>

namespace Aws {
namespace LexModelBuildingService {
namespace Pagination {

template <typename Client = LexModelBuildingServiceClient>
struct GetBotChannelAssociationsPaginationTraits {
  using RequestType = Model::GetBotChannelAssociationsRequest;
  using ResultType = Model::GetBotChannelAssociationsResult;
  using OutcomeType = Model::GetBotChannelAssociationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->GetBotChannelAssociations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace LexModelBuildingService
}  // namespace Aws
