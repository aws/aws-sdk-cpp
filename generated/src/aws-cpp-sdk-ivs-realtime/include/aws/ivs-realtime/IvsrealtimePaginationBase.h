/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/ivs-realtime/model/ListCompositionsPaginationTraits.h>
#include <aws/ivs-realtime/model/ListEncoderConfigurationsPaginationTraits.h>
#include <aws/ivs-realtime/model/ListIngestConfigurationsPaginationTraits.h>
#include <aws/ivs-realtime/model/ListParticipantEventsPaginationTraits.h>
#include <aws/ivs-realtime/model/ListParticipantReplicasPaginationTraits.h>
#include <aws/ivs-realtime/model/ListParticipantsPaginationTraits.h>
#include <aws/ivs-realtime/model/ListPublicKeysPaginationTraits.h>
#include <aws/ivs-realtime/model/ListStageSessionsPaginationTraits.h>
#include <aws/ivs-realtime/model/ListStagesPaginationTraits.h>
#include <aws/ivs-realtime/model/ListStorageConfigurationsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace ivsrealtime {

class IvsrealtimeClient;

template <typename DerivedClient>
class IvsrealtimePaginationBase {
 public:
  /**
   * Create a paginator for ListCompositions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCompositionsRequest,
                                    Pagination::ListCompositionsPaginationTraits<DerivedClient>>
  ListCompositionsPaginator(const Model::ListCompositionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCompositionsRequest,
                                             Pagination::ListCompositionsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListEncoderConfigurations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEncoderConfigurationsRequest,
                                    Pagination::ListEncoderConfigurationsPaginationTraits<DerivedClient>>
  ListEncoderConfigurationsPaginator(const Model::ListEncoderConfigurationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEncoderConfigurationsRequest,
                                             Pagination::ListEncoderConfigurationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListIngestConfigurations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIngestConfigurationsRequest,
                                    Pagination::ListIngestConfigurationsPaginationTraits<DerivedClient>>
  ListIngestConfigurationsPaginator(const Model::ListIngestConfigurationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIngestConfigurationsRequest,
                                             Pagination::ListIngestConfigurationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListParticipantEvents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListParticipantEventsRequest,
                                    Pagination::ListParticipantEventsPaginationTraits<DerivedClient>>
  ListParticipantEventsPaginator(const Model::ListParticipantEventsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListParticipantEventsRequest,
                                             Pagination::ListParticipantEventsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListParticipantReplicas operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListParticipantReplicasRequest,
                                    Pagination::ListParticipantReplicasPaginationTraits<DerivedClient>>
  ListParticipantReplicasPaginator(const Model::ListParticipantReplicasRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListParticipantReplicasRequest,
                                             Pagination::ListParticipantReplicasPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListParticipants operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListParticipantsRequest,
                                    Pagination::ListParticipantsPaginationTraits<DerivedClient>>
  ListParticipantsPaginator(const Model::ListParticipantsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListParticipantsRequest,
                                             Pagination::ListParticipantsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListPublicKeys operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPublicKeysRequest, Pagination::ListPublicKeysPaginationTraits<DerivedClient>>
  ListPublicKeysPaginator(const Model::ListPublicKeysRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPublicKeysRequest,
                                             Pagination::ListPublicKeysPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListStages operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStagesRequest, Pagination::ListStagesPaginationTraits<DerivedClient>>
  ListStagesPaginator(const Model::ListStagesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStagesRequest,
                                             Pagination::ListStagesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for ListStageSessions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStageSessionsRequest,
                                    Pagination::ListStageSessionsPaginationTraits<DerivedClient>>
  ListStageSessionsPaginator(const Model::ListStageSessionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStageSessionsRequest,
                                             Pagination::ListStageSessionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListStorageConfigurations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStorageConfigurationsRequest,
                                    Pagination::ListStorageConfigurationsPaginationTraits<DerivedClient>>
  ListStorageConfigurationsPaginator(const Model::ListStorageConfigurationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStorageConfigurationsRequest,
                                             Pagination::ListStorageConfigurationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace ivsrealtime
}  // namespace Aws
