/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datapipeline/DataPipelineServiceClientModel.h>
#include <aws/datapipeline/DataPipeline_EXPORTS.h>
#include <aws/datapipeline/model/ListPipelinesRequest.h>
#include <aws/datapipeline/model/ListPipelinesResult.h>

namespace Aws {
namespace DataPipeline {
namespace Pagination {

template <typename Client = DataPipelineClient>
struct ListPipelinesPaginationTraits {
  using RequestType = Model::ListPipelinesRequest;
  using ResultType = Model::ListPipelinesResult;
  using OutcomeType = Model::ListPipelinesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListPipelines(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetMarker().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetMarker(result.GetMarker()); }
};

}  // namespace Pagination
}  // namespace DataPipeline
}  // namespace Aws
