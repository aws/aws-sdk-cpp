/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chatbot/ChatbotServiceClientModel.h>
#include <aws/chatbot/Chatbot_EXPORTS.h>
#include <aws/chatbot/model/ListAssociationsRequest.h>
#include <aws/chatbot/model/ListAssociationsResult.h>

namespace Aws {
namespace chatbot {
namespace Pagination {

template <typename Client = ChatbotClient>
struct ListAssociationsPaginationTraits {
  using RequestType = Model::ListAssociationsRequest;
  using ResultType = Model::ListAssociationsResult;
  using OutcomeType = Model::ListAssociationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListAssociations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace chatbot
}  // namespace Aws
