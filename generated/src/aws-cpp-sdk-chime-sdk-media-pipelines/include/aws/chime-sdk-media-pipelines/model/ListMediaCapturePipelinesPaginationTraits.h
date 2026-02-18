/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelinesServiceClientModel.h>
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/chime-sdk-media-pipelines/model/ListMediaCapturePipelinesRequest.h>
#include <aws/chime-sdk-media-pipelines/model/ListMediaCapturePipelinesResult.h>

namespace Aws {
namespace ChimeSDKMediaPipelines {
namespace Pagination {

template <typename Client = ChimeSDKMediaPipelinesClient>
struct ListMediaCapturePipelinesPaginationTraits {
  using RequestType = Model::ListMediaCapturePipelinesRequest;
  using ResultType = Model::ListMediaCapturePipelinesResult;
  using OutcomeType = Model::ListMediaCapturePipelinesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListMediaCapturePipelines(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ChimeSDKMediaPipelines
}  // namespace Aws
