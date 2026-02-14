/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/ivs/IVSClient.h>
#include <aws/ivs/model/ListChannelsPaginationTraits.h>
#include <aws/ivs/model/ListPlaybackKeyPairsPaginationTraits.h>
#include <aws/ivs/model/ListPlaybackRestrictionPoliciesPaginationTraits.h>
#include <aws/ivs/model/ListRecordingConfigurationsPaginationTraits.h>
#include <aws/ivs/model/ListStreamKeysPaginationTraits.h>
#include <aws/ivs/model/ListStreamSessionsPaginationTraits.h>
#include <aws/ivs/model/ListStreamsPaginationTraits.h>

namespace Aws {
namespace IVS {

using ListChannelsPaginator =
    Aws::Utils::Pagination::Paginator<IVSClient, Model::ListChannelsRequest, Pagination::ListChannelsPaginationTraits<IVSClient>>;
using ListPlaybackKeyPairsPaginator = Aws::Utils::Pagination::Paginator<IVSClient, Model::ListPlaybackKeyPairsRequest,
                                                                        Pagination::ListPlaybackKeyPairsPaginationTraits<IVSClient>>;
using ListPlaybackRestrictionPoliciesPaginator =
    Aws::Utils::Pagination::Paginator<IVSClient, Model::ListPlaybackRestrictionPoliciesRequest,
                                      Pagination::ListPlaybackRestrictionPoliciesPaginationTraits<IVSClient>>;
using ListRecordingConfigurationsPaginator =
    Aws::Utils::Pagination::Paginator<IVSClient, Model::ListRecordingConfigurationsRequest,
                                      Pagination::ListRecordingConfigurationsPaginationTraits<IVSClient>>;
using ListStreamKeysPaginator =
    Aws::Utils::Pagination::Paginator<IVSClient, Model::ListStreamKeysRequest, Pagination::ListStreamKeysPaginationTraits<IVSClient>>;
using ListStreamsPaginator =
    Aws::Utils::Pagination::Paginator<IVSClient, Model::ListStreamsRequest, Pagination::ListStreamsPaginationTraits<IVSClient>>;
using ListStreamSessionsPaginator = Aws::Utils::Pagination::Paginator<IVSClient, Model::ListStreamSessionsRequest,
                                                                      Pagination::ListStreamSessionsPaginationTraits<IVSClient>>;

}  // namespace IVS
}  // namespace Aws
