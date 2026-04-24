/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDBServiceClientModel.h>
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/QueryRequest.h>
#include <aws/dynamodb/model/QueryResult.h>

namespace Aws {
namespace DynamoDB {
namespace Pagination {

template <typename Client = DynamoDBClient>
struct QueryPaginationTraits {
  using RequestType = Model::QueryRequest;
  using ResultType = Model::QueryResult;
  using OutcomeType = Model::QueryOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->Query(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetLastEvaluatedKey().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetExclusiveStartKey(result.GetLastEvaluatedKey()); }
};

}  // namespace Pagination
}  // namespace DynamoDB
}  // namespace Aws
