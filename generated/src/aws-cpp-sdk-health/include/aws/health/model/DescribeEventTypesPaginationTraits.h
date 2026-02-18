/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/health/HealthServiceClientModel.h>
#include <aws/health/Health_EXPORTS.h>
#include <aws/health/model/DescribeEventTypesRequest.h>
#include <aws/health/model/DescribeEventTypesResult.h>

namespace Aws {
namespace Health {
namespace Pagination {

template <typename Client = HealthClient>
struct DescribeEventTypesPaginationTraits {
  using RequestType = Model::DescribeEventTypesRequest;
  using ResultType = Model::DescribeEventTypesResult;
  using OutcomeType = Model::DescribeEventTypesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeEventTypes(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Health
}  // namespace Aws
