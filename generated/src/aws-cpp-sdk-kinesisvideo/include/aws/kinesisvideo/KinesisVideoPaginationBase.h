/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/kinesisvideo/model/DescribeMappedResourceConfigurationPaginationTraits.h>
#include <aws/kinesisvideo/model/ListEdgeAgentConfigurationsPaginationTraits.h>
#include <aws/kinesisvideo/model/ListSignalingChannelsPaginationTraits.h>
#include <aws/kinesisvideo/model/ListStreamsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace KinesisVideo {

class KinesisVideoClient;

template <typename DerivedClient>
class KinesisVideoPaginationBase {
 public:
  /**
   * Create a paginator for DescribeMappedResourceConfiguration operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeMappedResourceConfigurationRequest,
                                    Pagination::DescribeMappedResourceConfigurationPaginationTraits<DerivedClient>>
  DescribeMappedResourceConfigurationPaginator(const Model::DescribeMappedResourceConfigurationRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeMappedResourceConfigurationRequest,
                                             Pagination::DescribeMappedResourceConfigurationPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListEdgeAgentConfigurations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEdgeAgentConfigurationsRequest,
                                    Pagination::ListEdgeAgentConfigurationsPaginationTraits<DerivedClient>>
  ListEdgeAgentConfigurationsPaginator(const Model::ListEdgeAgentConfigurationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEdgeAgentConfigurationsRequest,
                                             Pagination::ListEdgeAgentConfigurationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSignalingChannels operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSignalingChannelsRequest,
                                    Pagination::ListSignalingChannelsPaginationTraits<DerivedClient>>
  ListSignalingChannelsPaginator(const Model::ListSignalingChannelsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSignalingChannelsRequest,
                                             Pagination::ListSignalingChannelsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListStreams operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStreamsRequest, Pagination::ListStreamsPaginationTraits<DerivedClient>>
  ListStreamsPaginator(const Model::ListStreamsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStreamsRequest,
                                             Pagination::ListStreamsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }
};
}  // namespace KinesisVideo
}  // namespace Aws
