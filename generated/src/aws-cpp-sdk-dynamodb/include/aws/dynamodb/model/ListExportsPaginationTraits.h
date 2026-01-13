/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDBServiceClientModel.h>
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/ListExportsRequest.h>
#include <aws/dynamodb/model/ListExportsResult.h>

namespace Aws {
namespace DynamoDB {
namespace Pagination {

template <typename Client = DynamoDBClient>
struct ListExportsPaginationTraits {
  using RequestType = Model::ListExportsRequest;
  using ResultType = Model::ListExportsResult;
  using OutcomeType = Model::ListExportsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListExports(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace DynamoDB
}  // namespace Aws
