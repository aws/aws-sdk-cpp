/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelinesServiceClientModel.h>
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/chime-sdk-media-pipelines/model/ListMediaPipelinesRequest.h>
#include <aws/chime-sdk-media-pipelines/model/ListMediaPipelinesResult.h>

namespace Aws {
namespace ChimeSDKMediaPipelines {
namespace Pagination {

template <typename Client = ChimeSDKMediaPipelinesClient>
struct ListMediaPipelinesPaginationTraits {
  using RequestType = Model::ListMediaPipelinesRequest;
  using ResultType = Model::ListMediaPipelinesResult;
  using OutcomeType = Model::ListMediaPipelinesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListMediaPipelines(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ChimeSDKMediaPipelines
}  // namespace Aws
