/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb/DocDBServiceClientModel.h>
#include <aws/docdb/DocDB_EXPORTS.h>
#include <aws/docdb/model/DescribeDBEngineVersionsRequest.h>
#include <aws/docdb/model/DescribeDBEngineVersionsResult.h>

namespace Aws {
namespace DocDB {
namespace Pagination {

template <typename Client = DocDBClient>
struct DescribeDBEngineVersionsPaginationTraits {
  using RequestType = Model::DescribeDBEngineVersionsRequest;
  using ResultType = Model::DescribeDBEngineVersionsResult;
  using OutcomeType = Model::DescribeDBEngineVersionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeDBEngineVersions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetMarker().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetMarker(result.GetMarker()); }
};

}  // namespace Pagination
}  // namespace DocDB
}  // namespace Aws
