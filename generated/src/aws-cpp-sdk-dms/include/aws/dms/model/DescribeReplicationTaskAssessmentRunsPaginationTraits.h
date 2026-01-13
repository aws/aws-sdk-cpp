/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationServiceServiceClientModel.h>
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/model/DescribeReplicationTaskAssessmentRunsRequest.h>
#include <aws/dms/model/DescribeReplicationTaskAssessmentRunsResult.h>

namespace Aws {
namespace DatabaseMigrationService {
namespace Pagination {

template <typename Client = DatabaseMigrationServiceClient>
struct DescribeReplicationTaskAssessmentRunsPaginationTraits {
  using RequestType = Model::DescribeReplicationTaskAssessmentRunsRequest;
  using ResultType = Model::DescribeReplicationTaskAssessmentRunsResult;
  using OutcomeType = Model::DescribeReplicationTaskAssessmentRunsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeReplicationTaskAssessmentRuns(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetMarker().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetMarker(result.GetMarker()); }
};

}  // namespace Pagination
}  // namespace DatabaseMigrationService
}  // namespace Aws
