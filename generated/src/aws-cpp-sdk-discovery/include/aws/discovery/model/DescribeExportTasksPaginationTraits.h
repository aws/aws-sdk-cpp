/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/discovery/ApplicationDiscoveryServiceServiceClientModel.h>
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/discovery/model/DescribeExportTasksRequest.h>
#include <aws/discovery/model/DescribeExportTasksResult.h>

namespace Aws {
namespace ApplicationDiscoveryService {
namespace Pagination {

template <typename Client = ApplicationDiscoveryServiceClient>
struct DescribeExportTasksPaginationTraits {
  using RequestType = Model::DescribeExportTasksRequest;
  using ResultType = Model::DescribeExportTasksResult;
  using OutcomeType = Model::DescribeExportTasksOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeExportTasks(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ApplicationDiscoveryService
}  // namespace Aws
