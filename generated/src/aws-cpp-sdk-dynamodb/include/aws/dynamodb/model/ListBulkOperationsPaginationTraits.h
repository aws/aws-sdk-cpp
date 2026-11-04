/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDBServiceClientModel.h>
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/ListBulkOperationsRequest.h>
#include <aws/dynamodb/model/ListBulkOperationsResult.h>

namespace Aws {
namespace DynamoDB {
namespace Pagination {

template <typename Client = DynamoDBClient>
struct ListBulkOperationsPaginationTraits {
  using RequestType = Model::ListBulkOperationsRequest;
  using ResultType = Model::ListBulkOperationsResult;
  using OutcomeType = Model::ListBulkOperationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListBulkOperations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace DynamoDB
}  // namespace Aws
