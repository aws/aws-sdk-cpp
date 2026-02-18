/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRoomsServiceClientModel.h>
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/ListCollaborationPrivacyBudgetTemplatesRequest.h>
#include <aws/cleanrooms/model/ListCollaborationPrivacyBudgetTemplatesResult.h>

namespace Aws {
namespace CleanRooms {
namespace Pagination {

template <typename Client = CleanRoomsClient>
struct ListCollaborationPrivacyBudgetTemplatesPaginationTraits {
  using RequestType = Model::ListCollaborationPrivacyBudgetTemplatesRequest;
  using ResultType = Model::ListCollaborationPrivacyBudgetTemplatesResult;
  using OutcomeType = Model::ListCollaborationPrivacyBudgetTemplatesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListCollaborationPrivacyBudgetTemplates(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace CleanRooms
}  // namespace Aws
