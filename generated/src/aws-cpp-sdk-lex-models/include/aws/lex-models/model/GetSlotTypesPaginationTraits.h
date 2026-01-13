/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingServiceServiceClientModel.h>
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/lex-models/model/GetSlotTypesRequest.h>
#include <aws/lex-models/model/GetSlotTypesResult.h>

namespace Aws {
namespace LexModelBuildingService {
namespace Pagination {

template <typename Client = LexModelBuildingServiceClient>
struct GetSlotTypesPaginationTraits {
  using RequestType = Model::GetSlotTypesRequest;
  using ResultType = Model::GetSlotTypesResult;
  using OutcomeType = Model::GetSlotTypesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->GetSlotTypes(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace LexModelBuildingService
}  // namespace Aws
