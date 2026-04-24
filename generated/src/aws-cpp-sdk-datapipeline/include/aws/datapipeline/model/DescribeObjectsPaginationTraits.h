/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datapipeline/DataPipelineServiceClientModel.h>
#include <aws/datapipeline/DataPipeline_EXPORTS.h>
#include <aws/datapipeline/model/DescribeObjectsRequest.h>
#include <aws/datapipeline/model/DescribeObjectsResult.h>

namespace Aws {
namespace DataPipeline {
namespace Pagination {

template <typename Client = DataPipelineClient>
struct DescribeObjectsPaginationTraits {
  using RequestType = Model::DescribeObjectsRequest;
  using ResultType = Model::DescribeObjectsResult;
  using OutcomeType = Model::DescribeObjectsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeObjects(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetMarker().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetMarker(result.GetMarker()); }
};

}  // namespace Pagination
}  // namespace DataPipeline
}  // namespace Aws
