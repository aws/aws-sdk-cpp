/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDBServiceClientModel.h>
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/ListTablesRequest.h>
#include <aws/dynamodb/model/ListTablesResult.h>

namespace Aws {
namespace DynamoDB {
namespace Pagination {

template <typename Client = DynamoDBClient>
struct ListTablesPaginationTraits {
  using RequestType = Model::ListTablesRequest;
  using ResultType = Model::ListTablesResult;
  using OutcomeType = Model::ListTablesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListTables(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetLastEvaluatedTableName().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) {
    request.SetExclusiveStartTableName(result.GetLastEvaluatedTableName());
  }
};

}  // namespace Pagination
}  // namespace DynamoDB
}  // namespace Aws
