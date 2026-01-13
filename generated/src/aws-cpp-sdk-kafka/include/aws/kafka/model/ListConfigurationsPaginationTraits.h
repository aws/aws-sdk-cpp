/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/KafkaServiceClientModel.h>
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/ListConfigurationsRequest.h>
#include <aws/kafka/model/ListConfigurationsResult.h>

namespace Aws {
namespace Kafka {
namespace Pagination {

template <typename Client = KafkaClient>
struct ListConfigurationsPaginationTraits {
  using RequestType = Model::ListConfigurationsRequest;
  using ResultType = Model::ListConfigurationsResult;
  using OutcomeType = Model::ListConfigurationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListConfigurations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Kafka
}  // namespace Aws
