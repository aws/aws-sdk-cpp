/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsMLServiceClientModel.h>
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/cleanroomsml/model/ListCollaborationTrainedModelsRequest.h>
#include <aws/cleanroomsml/model/ListCollaborationTrainedModelsResult.h>

namespace Aws {
namespace CleanRoomsML {
namespace Pagination {

template <typename Client = CleanRoomsMLClient>
struct ListCollaborationTrainedModelsPaginationTraits {
  using RequestType = Model::ListCollaborationTrainedModelsRequest;
  using ResultType = Model::ListCollaborationTrainedModelsResult;
  using OutcomeType = Model::ListCollaborationTrainedModelsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListCollaborationTrainedModels(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace CleanRoomsML
}  // namespace Aws
