/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationServiceServiceClientModel.h>
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/model/DescribeMetadataModelExportsAsScriptRequest.h>
#include <aws/dms/model/DescribeMetadataModelExportsAsScriptResult.h>

namespace Aws {
namespace DatabaseMigrationService {
namespace Pagination {

template <typename Client = DatabaseMigrationServiceClient>
struct DescribeMetadataModelExportsAsScriptPaginationTraits {
  using RequestType = Model::DescribeMetadataModelExportsAsScriptRequest;
  using ResultType = Model::DescribeMetadataModelExportsAsScriptResult;
  using OutcomeType = Model::DescribeMetadataModelExportsAsScriptOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeMetadataModelExportsAsScript(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetMarker().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetMarker(result.GetMarker()); }
};

}  // namespace Pagination
}  // namespace DatabaseMigrationService
}  // namespace Aws
