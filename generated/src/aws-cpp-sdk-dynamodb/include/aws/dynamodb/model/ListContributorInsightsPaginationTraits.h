/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDBServiceClientModel.h>
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/ListContributorInsightsRequest.h>
#include <aws/dynamodb/model/ListContributorInsightsResult.h>

namespace Aws {
namespace DynamoDB {
namespace Pagination {

template <typename Client = DynamoDBClient>
struct ListContributorInsightsPaginationTraits {
  using RequestType = Model::ListContributorInsightsRequest;
  using ResultType = Model::ListContributorInsightsResult;
  using OutcomeType = Model::ListContributorInsightsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListContributorInsights(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace DynamoDB
}  // namespace Aws
