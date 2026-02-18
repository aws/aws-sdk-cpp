/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/ivs/model/ListChannelsPaginationTraits.h>
#include <aws/ivs/model/ListPlaybackKeyPairsPaginationTraits.h>
#include <aws/ivs/model/ListPlaybackRestrictionPoliciesPaginationTraits.h>
#include <aws/ivs/model/ListRecordingConfigurationsPaginationTraits.h>
#include <aws/ivs/model/ListStreamKeysPaginationTraits.h>
#include <aws/ivs/model/ListStreamSessionsPaginationTraits.h>
#include <aws/ivs/model/ListStreamsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace IVS {

class IVSClient;

template <typename DerivedClient>
class IVSPaginationBase {
 public:
  /**
   * Create a paginator for ListChannels operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListChannelsRequest, Pagination::ListChannelsPaginationTraits<DerivedClient>>
  ListChannelsPaginator(const Model::ListChannelsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListChannelsRequest,
                                             Pagination::ListChannelsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListPlaybackKeyPairs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPlaybackKeyPairsRequest,
                                    Pagination::ListPlaybackKeyPairsPaginationTraits<DerivedClient>>
  ListPlaybackKeyPairsPaginator(const Model::ListPlaybackKeyPairsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPlaybackKeyPairsRequest,
                                             Pagination::ListPlaybackKeyPairsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPlaybackRestrictionPolicies operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPlaybackRestrictionPoliciesRequest,
                                    Pagination::ListPlaybackRestrictionPoliciesPaginationTraits<DerivedClient>>
  ListPlaybackRestrictionPoliciesPaginator(const Model::ListPlaybackRestrictionPoliciesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPlaybackRestrictionPoliciesRequest,
                                             Pagination::ListPlaybackRestrictionPoliciesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRecordingConfigurations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRecordingConfigurationsRequest,
                                    Pagination::ListRecordingConfigurationsPaginationTraits<DerivedClient>>
  ListRecordingConfigurationsPaginator(const Model::ListRecordingConfigurationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRecordingConfigurationsRequest,
                                             Pagination::ListRecordingConfigurationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListStreamKeys operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStreamKeysRequest, Pagination::ListStreamKeysPaginationTraits<DerivedClient>>
  ListStreamKeysPaginator(const Model::ListStreamKeysRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStreamKeysRequest,
                                             Pagination::ListStreamKeysPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
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

  /**
   * Create a paginator for ListStreamSessions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStreamSessionsRequest,
                                    Pagination::ListStreamSessionsPaginationTraits<DerivedClient>>
  ListStreamSessionsPaginator(const Model::ListStreamSessionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStreamSessionsRequest,
                                             Pagination::ListStreamSessionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace IVS
}  // namespace Aws
