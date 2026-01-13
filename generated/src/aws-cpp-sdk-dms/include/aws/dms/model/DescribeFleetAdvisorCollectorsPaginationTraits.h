/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationServiceServiceClientModel.h>
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/model/DescribeFleetAdvisorCollectorsRequest.h>
#include <aws/dms/model/DescribeFleetAdvisorCollectorsResult.h>

namespace Aws {
namespace DatabaseMigrationService {
namespace Pagination {

template <typename Client = DatabaseMigrationServiceClient>
struct DescribeFleetAdvisorCollectorsPaginationTraits {
  using RequestType = Model::DescribeFleetAdvisorCollectorsRequest;
  using ResultType = Model::DescribeFleetAdvisorCollectorsResult;
  using OutcomeType = Model::DescribeFleetAdvisorCollectorsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeFleetAdvisorCollectors(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace DatabaseMigrationService
}  // namespace Aws
