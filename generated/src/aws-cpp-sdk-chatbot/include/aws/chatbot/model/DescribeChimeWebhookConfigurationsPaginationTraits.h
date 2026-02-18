/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chatbot/ChatbotServiceClientModel.h>
#include <aws/chatbot/Chatbot_EXPORTS.h>
#include <aws/chatbot/model/DescribeChimeWebhookConfigurationsRequest.h>
#include <aws/chatbot/model/DescribeChimeWebhookConfigurationsResult.h>

namespace Aws {
namespace chatbot {
namespace Pagination {

template <typename Client = ChatbotClient>
struct DescribeChimeWebhookConfigurationsPaginationTraits {
  using RequestType = Model::DescribeChimeWebhookConfigurationsRequest;
  using ResultType = Model::DescribeChimeWebhookConfigurationsResult;
  using OutcomeType = Model::DescribeChimeWebhookConfigurationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeChimeWebhookConfigurations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace chatbot
}  // namespace Aws
