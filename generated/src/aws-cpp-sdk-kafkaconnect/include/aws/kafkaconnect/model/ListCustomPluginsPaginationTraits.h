/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnectServiceClientModel.h>
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
#include <aws/kafkaconnect/model/ListCustomPluginsRequest.h>
#include <aws/kafkaconnect/model/ListCustomPluginsResult.h>

namespace Aws {
namespace KafkaConnect {
namespace Pagination {

template <typename Client = KafkaConnectClient>
struct ListCustomPluginsPaginationTraits {
  using RequestType = Model::ListCustomPluginsRequest;
  using ResultType = Model::ListCustomPluginsResult;
  using OutcomeType = Model::ListCustomPluginsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListCustomPlugins(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace KafkaConnect
}  // namespace Aws
