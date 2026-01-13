/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb/DocDBServiceClientModel.h>
#include <aws/docdb/DocDB_EXPORTS.h>
#include <aws/docdb/model/DescribeDBClusterParametersRequest.h>
#include <aws/docdb/model/DescribeDBClusterParametersResult.h>

namespace Aws {
namespace DocDB {
namespace Pagination {

template <typename Client = DocDBClient>
struct DescribeDBClusterParametersPaginationTraits {
  using RequestType = Model::DescribeDBClusterParametersRequest;
  using ResultType = Model::DescribeDBClusterParametersResult;
  using OutcomeType = Model::DescribeDBClusterParametersOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeDBClusterParameters(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetMarker().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetMarker(result.GetMarker()); }
};

}  // namespace Pagination
}  // namespace DocDB
}  // namespace Aws
