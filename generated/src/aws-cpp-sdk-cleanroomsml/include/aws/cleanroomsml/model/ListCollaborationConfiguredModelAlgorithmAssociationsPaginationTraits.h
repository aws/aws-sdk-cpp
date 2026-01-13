/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsMLServiceClientModel.h>
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/cleanroomsml/model/ListCollaborationConfiguredModelAlgorithmAssociationsRequest.h>
#include <aws/cleanroomsml/model/ListCollaborationConfiguredModelAlgorithmAssociationsResult.h>

namespace Aws {
namespace CleanRoomsML {
namespace Pagination {

template <typename Client = CleanRoomsMLClient>
struct ListCollaborationConfiguredModelAlgorithmAssociationsPaginationTraits {
  using RequestType = Model::ListCollaborationConfiguredModelAlgorithmAssociationsRequest;
  using ResultType = Model::ListCollaborationConfiguredModelAlgorithmAssociationsResult;
  using OutcomeType = Model::ListCollaborationConfiguredModelAlgorithmAssociationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) {
    return client->ListCollaborationConfiguredModelAlgorithmAssociations(request);
  }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace CleanRoomsML
}  // namespace Aws
