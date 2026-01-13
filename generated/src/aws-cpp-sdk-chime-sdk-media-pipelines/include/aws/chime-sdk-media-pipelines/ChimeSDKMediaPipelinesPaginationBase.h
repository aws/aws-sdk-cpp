/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/chime-sdk-media-pipelines/model/ListMediaCapturePipelinesPaginationTraits.h>
#include <aws/chime-sdk-media-pipelines/model/ListMediaInsightsPipelineConfigurationsPaginationTraits.h>
#include <aws/chime-sdk-media-pipelines/model/ListMediaPipelineKinesisVideoStreamPoolsPaginationTraits.h>
#include <aws/chime-sdk-media-pipelines/model/ListMediaPipelinesPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace ChimeSDKMediaPipelines {

class ChimeSDKMediaPipelinesClient;

template <typename DerivedClient>
class ChimeSDKMediaPipelinesPaginationBase {
 public:
  /**
   * Create a paginator for ListMediaCapturePipelines operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMediaCapturePipelinesRequest,
                                    Pagination::ListMediaCapturePipelinesPaginationTraits<DerivedClient>>
  ListMediaCapturePipelinesPaginator(const Model::ListMediaCapturePipelinesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMediaCapturePipelinesRequest,
                                             Pagination::ListMediaCapturePipelinesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListMediaInsightsPipelineConfigurations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMediaInsightsPipelineConfigurationsRequest,
                                    Pagination::ListMediaInsightsPipelineConfigurationsPaginationTraits<DerivedClient>>
  ListMediaInsightsPipelineConfigurationsPaginator(const Model::ListMediaInsightsPipelineConfigurationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMediaInsightsPipelineConfigurationsRequest,
                                             Pagination::ListMediaInsightsPipelineConfigurationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListMediaPipelineKinesisVideoStreamPools operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMediaPipelineKinesisVideoStreamPoolsRequest,
                                    Pagination::ListMediaPipelineKinesisVideoStreamPoolsPaginationTraits<DerivedClient>>
  ListMediaPipelineKinesisVideoStreamPoolsPaginator(const Model::ListMediaPipelineKinesisVideoStreamPoolsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMediaPipelineKinesisVideoStreamPoolsRequest,
                                             Pagination::ListMediaPipelineKinesisVideoStreamPoolsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListMediaPipelines operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMediaPipelinesRequest,
                                    Pagination::ListMediaPipelinesPaginationTraits<DerivedClient>>
  ListMediaPipelinesPaginator(const Model::ListMediaPipelinesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMediaPipelinesRequest,
                                             Pagination::ListMediaPipelinesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace ChimeSDKMediaPipelines
}  // namespace Aws
