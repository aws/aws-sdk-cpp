/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chatbot/ChatbotServiceClientModel.h>
#include <aws/chatbot/Chatbot_EXPORTS.h>
#include <aws/chatbot/model/DescribeSlackUserIdentitiesRequest.h>
#include <aws/chatbot/model/DescribeSlackUserIdentitiesResult.h>

namespace Aws {
namespace chatbot {
namespace Pagination {

template <typename Client = ChatbotClient>
struct DescribeSlackUserIdentitiesPaginationTraits {
  using RequestType = Model::DescribeSlackUserIdentitiesRequest;
  using ResultType = Model::DescribeSlackUserIdentitiesResult;
  using OutcomeType = Model::DescribeSlackUserIdentitiesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeSlackUserIdentities(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace chatbot
}  // namespace Aws
