/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/discovery/ApplicationDiscoveryServiceServiceClientModel.h>
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/discovery/model/DescribeImportTasksRequest.h>
#include <aws/discovery/model/DescribeImportTasksResult.h>

namespace Aws {
namespace ApplicationDiscoveryService {
namespace Pagination {

template <typename Client = ApplicationDiscoveryServiceClient>
struct DescribeImportTasksPaginationTraits {
  using RequestType = Model::DescribeImportTasksRequest;
  using ResultType = Model::DescribeImportTasksResult;
  using OutcomeType = Model::DescribeImportTasksOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeImportTasks(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ApplicationDiscoveryService
}  // namespace Aws
