/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/KafkaServiceClientModel.h>
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/ListClustersRequest.h>
#include <aws/kafka/model/ListClustersResult.h>

namespace Aws {
namespace Kafka {
namespace Pagination {

template <typename Client = KafkaClient>
struct ListClustersPaginationTraits {
  using RequestType = Model::ListClustersRequest;
  using ResultType = Model::ListClustersResult;
  using OutcomeType = Model::ListClustersOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListClusters(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Kafka
}  // namespace Aws
