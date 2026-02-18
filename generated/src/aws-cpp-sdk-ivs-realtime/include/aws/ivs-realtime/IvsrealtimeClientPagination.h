/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/ivs-realtime/IvsrealtimeClient.h>
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

namespace Aws {
namespace ivsrealtime {

using ListCompositionsPaginator = Aws::Utils::Pagination::Paginator<IvsrealtimeClient, Model::ListCompositionsRequest,
                                                                    Pagination::ListCompositionsPaginationTraits<IvsrealtimeClient>>;
using ListEncoderConfigurationsPaginator =
    Aws::Utils::Pagination::Paginator<IvsrealtimeClient, Model::ListEncoderConfigurationsRequest,
                                      Pagination::ListEncoderConfigurationsPaginationTraits<IvsrealtimeClient>>;
using ListIngestConfigurationsPaginator =
    Aws::Utils::Pagination::Paginator<IvsrealtimeClient, Model::ListIngestConfigurationsRequest,
                                      Pagination::ListIngestConfigurationsPaginationTraits<IvsrealtimeClient>>;
using ListParticipantEventsPaginator =
    Aws::Utils::Pagination::Paginator<IvsrealtimeClient, Model::ListParticipantEventsRequest,
                                      Pagination::ListParticipantEventsPaginationTraits<IvsrealtimeClient>>;
using ListParticipantReplicasPaginator =
    Aws::Utils::Pagination::Paginator<IvsrealtimeClient, Model::ListParticipantReplicasRequest,
                                      Pagination::ListParticipantReplicasPaginationTraits<IvsrealtimeClient>>;
using ListParticipantsPaginator = Aws::Utils::Pagination::Paginator<IvsrealtimeClient, Model::ListParticipantsRequest,
                                                                    Pagination::ListParticipantsPaginationTraits<IvsrealtimeClient>>;
using ListPublicKeysPaginator = Aws::Utils::Pagination::Paginator<IvsrealtimeClient, Model::ListPublicKeysRequest,
                                                                  Pagination::ListPublicKeysPaginationTraits<IvsrealtimeClient>>;
using ListStagesPaginator = Aws::Utils::Pagination::Paginator<IvsrealtimeClient, Model::ListStagesRequest,
                                                              Pagination::ListStagesPaginationTraits<IvsrealtimeClient>>;
using ListStageSessionsPaginator = Aws::Utils::Pagination::Paginator<IvsrealtimeClient, Model::ListStageSessionsRequest,
                                                                     Pagination::ListStageSessionsPaginationTraits<IvsrealtimeClient>>;
using ListStorageConfigurationsPaginator =
    Aws::Utils::Pagination::Paginator<IvsrealtimeClient, Model::ListStorageConfigurationsRequest,
                                      Pagination::ListStorageConfigurationsPaginationTraits<IvsrealtimeClient>>;

}  // namespace ivsrealtime
}  // namespace Aws
