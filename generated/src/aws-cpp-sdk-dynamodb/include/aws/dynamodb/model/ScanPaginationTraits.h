/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDBServiceClientModel.h>
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/ScanRequest.h>
#include <aws/dynamodb/model/ScanResult.h>

namespace Aws {
namespace DynamoDB {
class DynamoDBClient;
namespace Pagination {

struct ScanPaginationTraits {
  using RequestType = Model::ScanRequest;
  using ResultType = Model::ScanResult;
  using OutcomeType = Model::ScanOutcome;
  using ClientType = DynamoDBClient;

  template <typename Client = ClientType>
  static OutcomeType Invoke(Client& client, const RequestType& request) {
    return client.Scan(request);
  }

  static bool HasMoreResults(const ResultType& result) { return !result.GetLastEvaluatedKey().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetExclusiveStartKey(result.GetLastEvaluatedKey()); }
};

}  // namespace Pagination
}  // namespace DynamoDB
}  // namespace Aws
