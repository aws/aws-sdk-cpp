/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelinesServiceClientModel.h>
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/chime-sdk-media-pipelines/model/ListMediaPipelineKinesisVideoStreamPoolsRequest.h>
#include <aws/chime-sdk-media-pipelines/model/ListMediaPipelineKinesisVideoStreamPoolsResult.h>

namespace Aws {
namespace ChimeSDKMediaPipelines {
namespace Pagination {

template <typename Client = ChimeSDKMediaPipelinesClient>
struct ListMediaPipelineKinesisVideoStreamPoolsPaginationTraits {
  using RequestType = Model::ListMediaPipelineKinesisVideoStreamPoolsRequest;
  using ResultType = Model::ListMediaPipelineKinesisVideoStreamPoolsResult;
  using OutcomeType = Model::ListMediaPipelineKinesisVideoStreamPoolsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) {
    return client->ListMediaPipelineKinesisVideoStreamPools(request);
  }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ChimeSDKMediaPipelines
}  // namespace Aws
