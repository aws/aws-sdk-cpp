/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationServiceServiceClientModel.h>
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/model/DescribeFleetAdvisorDatabasesRequest.h>
#include <aws/dms/model/DescribeFleetAdvisorDatabasesResult.h>

namespace Aws {
namespace DatabaseMigrationService {
namespace Pagination {

template <typename Client = DatabaseMigrationServiceClient>
struct DescribeFleetAdvisorDatabasesPaginationTraits {
  using RequestType = Model::DescribeFleetAdvisorDatabasesRequest;
  using ResultType = Model::DescribeFleetAdvisorDatabasesResult;
  using OutcomeType = Model::DescribeFleetAdvisorDatabasesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeFleetAdvisorDatabases(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace DatabaseMigrationService
}  // namespace Aws
