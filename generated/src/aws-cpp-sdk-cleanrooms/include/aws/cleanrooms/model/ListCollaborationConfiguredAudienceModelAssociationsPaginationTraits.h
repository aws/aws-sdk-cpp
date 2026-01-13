/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRoomsServiceClientModel.h>
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/ListCollaborationConfiguredAudienceModelAssociationsRequest.h>
#include <aws/cleanrooms/model/ListCollaborationConfiguredAudienceModelAssociationsResult.h>

namespace Aws {
namespace CleanRooms {
namespace Pagination {

template <typename Client = CleanRoomsClient>
struct ListCollaborationConfiguredAudienceModelAssociationsPaginationTraits {
  using RequestType = Model::ListCollaborationConfiguredAudienceModelAssociationsRequest;
  using ResultType = Model::ListCollaborationConfiguredAudienceModelAssociationsResult;
  using OutcomeType = Model::ListCollaborationConfiguredAudienceModelAssociationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) {
    return client->ListCollaborationConfiguredAudienceModelAssociations(request);
  }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace CleanRooms
}  // namespace Aws
