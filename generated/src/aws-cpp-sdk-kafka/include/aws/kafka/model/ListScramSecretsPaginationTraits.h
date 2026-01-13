/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/KafkaServiceClientModel.h>
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/ListScramSecretsRequest.h>
#include <aws/kafka/model/ListScramSecretsResult.h>

namespace Aws {
namespace Kafka {
namespace Pagination {

template <typename Client = KafkaClient>
struct ListScramSecretsPaginationTraits {
  using RequestType = Model::ListScramSecretsRequest;
  using ResultType = Model::ListScramSecretsResult;
  using OutcomeType = Model::ListScramSecretsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListScramSecrets(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Kafka
}  // namespace Aws
