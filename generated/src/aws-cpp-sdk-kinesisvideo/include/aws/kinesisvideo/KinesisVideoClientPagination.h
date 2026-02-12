/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/kinesisvideo/KinesisVideoClient.h>
#include <aws/kinesisvideo/model/DescribeMappedResourceConfigurationPaginationTraits.h>
#include <aws/kinesisvideo/model/ListEdgeAgentConfigurationsPaginationTraits.h>
#include <aws/kinesisvideo/model/ListSignalingChannelsPaginationTraits.h>
#include <aws/kinesisvideo/model/ListStreamsPaginationTraits.h>

namespace Aws {
namespace KinesisVideo {

using DescribeMappedResourceConfigurationPaginator =
    Aws::Utils::Pagination::Paginator<KinesisVideoClient, Model::DescribeMappedResourceConfigurationRequest,
                                      Pagination::DescribeMappedResourceConfigurationPaginationTraits<KinesisVideoClient>>;
using ListEdgeAgentConfigurationsPaginator =
    Aws::Utils::Pagination::Paginator<KinesisVideoClient, Model::ListEdgeAgentConfigurationsRequest,
                                      Pagination::ListEdgeAgentConfigurationsPaginationTraits<KinesisVideoClient>>;
using ListSignalingChannelsPaginator =
    Aws::Utils::Pagination::Paginator<KinesisVideoClient, Model::ListSignalingChannelsRequest,
                                      Pagination::ListSignalingChannelsPaginationTraits<KinesisVideoClient>>;
using ListStreamsPaginator = Aws::Utils::Pagination::Paginator<KinesisVideoClient, Model::ListStreamsRequest,
                                                               Pagination::ListStreamsPaginationTraits<KinesisVideoClient>>;

}  // namespace KinesisVideo
}  // namespace Aws
