/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRoomsServiceClientModel.h>
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/ListCollaborationAnalysisTemplatesRequest.h>
#include <aws/cleanrooms/model/ListCollaborationAnalysisTemplatesResult.h>

namespace Aws {
namespace CleanRooms {
namespace Pagination {

template <typename Client = CleanRoomsClient>
struct ListCollaborationAnalysisTemplatesPaginationTraits {
  using RequestType = Model::ListCollaborationAnalysisTemplatesRequest;
  using ResultType = Model::ListCollaborationAnalysisTemplatesResult;
  using OutcomeType = Model::ListCollaborationAnalysisTemplatesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListCollaborationAnalysisTemplates(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace CleanRooms
}  // namespace Aws
