/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelinesClient.h>
#include <aws/chime-sdk-media-pipelines/model/ListMediaCapturePipelinesPaginationTraits.h>
#include <aws/chime-sdk-media-pipelines/model/ListMediaInsightsPipelineConfigurationsPaginationTraits.h>
#include <aws/chime-sdk-media-pipelines/model/ListMediaPipelineKinesisVideoStreamPoolsPaginationTraits.h>
#include <aws/chime-sdk-media-pipelines/model/ListMediaPipelinesPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace ChimeSDKMediaPipelines {

using ListMediaCapturePipelinesPaginator =
    Aws::Utils::Pagination::Paginator<ChimeSDKMediaPipelinesClient, Model::ListMediaCapturePipelinesRequest,
                                      Pagination::ListMediaCapturePipelinesPaginationTraits<ChimeSDKMediaPipelinesClient>>;
using ListMediaInsightsPipelineConfigurationsPaginator =
    Aws::Utils::Pagination::Paginator<ChimeSDKMediaPipelinesClient, Model::ListMediaInsightsPipelineConfigurationsRequest,
                                      Pagination::ListMediaInsightsPipelineConfigurationsPaginationTraits<ChimeSDKMediaPipelinesClient>>;
using ListMediaPipelineKinesisVideoStreamPoolsPaginator =
    Aws::Utils::Pagination::Paginator<ChimeSDKMediaPipelinesClient, Model::ListMediaPipelineKinesisVideoStreamPoolsRequest,
                                      Pagination::ListMediaPipelineKinesisVideoStreamPoolsPaginationTraits<ChimeSDKMediaPipelinesClient>>;
using ListMediaPipelinesPaginator =
    Aws::Utils::Pagination::Paginator<ChimeSDKMediaPipelinesClient, Model::ListMediaPipelinesRequest,
                                      Pagination::ListMediaPipelinesPaginationTraits<ChimeSDKMediaPipelinesClient>>;

}  // namespace ChimeSDKMediaPipelines
}  // namespace Aws
