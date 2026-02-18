/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datapipeline/DataPipelineServiceClientModel.h>
#include <aws/datapipeline/DataPipeline_EXPORTS.h>
#include <aws/datapipeline/model/QueryObjectsRequest.h>
#include <aws/datapipeline/model/QueryObjectsResult.h>

namespace Aws {
namespace DataPipeline {
namespace Pagination {

template <typename Client = DataPipelineClient>
struct QueryObjectsPaginationTraits {
  using RequestType = Model::QueryObjectsRequest;
  using ResultType = Model::QueryObjectsResult;
  using OutcomeType = Model::QueryObjectsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->QueryObjects(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetMarker().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetMarker(result.GetMarker()); }
};

}  // namespace Pagination
}  // namespace DataPipeline
}  // namespace Aws
