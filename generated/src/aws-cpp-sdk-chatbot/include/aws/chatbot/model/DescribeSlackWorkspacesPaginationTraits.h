/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chatbot/ChatbotServiceClientModel.h>
#include <aws/chatbot/Chatbot_EXPORTS.h>
#include <aws/chatbot/model/DescribeSlackWorkspacesRequest.h>
#include <aws/chatbot/model/DescribeSlackWorkspacesResult.h>

namespace Aws {
namespace chatbot {
namespace Pagination {

template <typename Client = ChatbotClient>
struct DescribeSlackWorkspacesPaginationTraits {
  using RequestType = Model::DescribeSlackWorkspacesRequest;
  using ResultType = Model::DescribeSlackWorkspacesResult;
  using OutcomeType = Model::DescribeSlackWorkspacesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeSlackWorkspaces(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace chatbot
}  // namespace Aws
