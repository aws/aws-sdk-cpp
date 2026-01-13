/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnectServiceClientModel.h>
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
#include <aws/kafkaconnect/model/ListConnectorOperationsRequest.h>
#include <aws/kafkaconnect/model/ListConnectorOperationsResult.h>

namespace Aws {
namespace KafkaConnect {
namespace Pagination {

template <typename Client = KafkaConnectClient>
struct ListConnectorOperationsPaginationTraits {
  using RequestType = Model::ListConnectorOperationsRequest;
  using ResultType = Model::ListConnectorOperationsResult;
  using OutcomeType = Model::ListConnectorOperationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListConnectorOperations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace KafkaConnect
}  // namespace Aws
