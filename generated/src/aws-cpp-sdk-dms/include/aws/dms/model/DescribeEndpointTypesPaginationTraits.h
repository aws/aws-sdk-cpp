/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationServiceServiceClientModel.h>
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/model/DescribeEndpointTypesRequest.h>
#include <aws/dms/model/DescribeEndpointTypesResult.h>

namespace Aws {
namespace DatabaseMigrationService {
namespace Pagination {

template <typename Client = DatabaseMigrationServiceClient>
struct DescribeEndpointTypesPaginationTraits {
  using RequestType = Model::DescribeEndpointTypesRequest;
  using ResultType = Model::DescribeEndpointTypesResult;
  using OutcomeType = Model::DescribeEndpointTypesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeEndpointTypes(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetMarker().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetMarker(result.GetMarker()); }
};

}  // namespace Pagination
}  // namespace DatabaseMigrationService
}  // namespace Aws
