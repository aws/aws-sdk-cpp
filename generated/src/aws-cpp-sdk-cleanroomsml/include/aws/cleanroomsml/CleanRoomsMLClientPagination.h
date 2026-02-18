/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsMLClient.h>
#include <aws/cleanroomsml/model/ListAudienceExportJobsPaginationTraits.h>
#include <aws/cleanroomsml/model/ListAudienceGenerationJobsPaginationTraits.h>
#include <aws/cleanroomsml/model/ListAudienceModelsPaginationTraits.h>
#include <aws/cleanroomsml/model/ListCollaborationConfiguredModelAlgorithmAssociationsPaginationTraits.h>
#include <aws/cleanroomsml/model/ListCollaborationMLInputChannelsPaginationTraits.h>
#include <aws/cleanroomsml/model/ListCollaborationTrainedModelExportJobsPaginationTraits.h>
#include <aws/cleanroomsml/model/ListCollaborationTrainedModelInferenceJobsPaginationTraits.h>
#include <aws/cleanroomsml/model/ListCollaborationTrainedModelsPaginationTraits.h>
#include <aws/cleanroomsml/model/ListConfiguredAudienceModelsPaginationTraits.h>
#include <aws/cleanroomsml/model/ListConfiguredModelAlgorithmAssociationsPaginationTraits.h>
#include <aws/cleanroomsml/model/ListConfiguredModelAlgorithmsPaginationTraits.h>
#include <aws/cleanroomsml/model/ListMLInputChannelsPaginationTraits.h>
#include <aws/cleanroomsml/model/ListTrainedModelInferenceJobsPaginationTraits.h>
#include <aws/cleanroomsml/model/ListTrainedModelVersionsPaginationTraits.h>
#include <aws/cleanroomsml/model/ListTrainedModelsPaginationTraits.h>
#include <aws/cleanroomsml/model/ListTrainingDatasetsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace CleanRoomsML {

using ListAudienceExportJobsPaginator =
    Aws::Utils::Pagination::Paginator<CleanRoomsMLClient, Model::ListAudienceExportJobsRequest,
                                      Pagination::ListAudienceExportJobsPaginationTraits<CleanRoomsMLClient>>;
using ListAudienceGenerationJobsPaginator =
    Aws::Utils::Pagination::Paginator<CleanRoomsMLClient, Model::ListAudienceGenerationJobsRequest,
                                      Pagination::ListAudienceGenerationJobsPaginationTraits<CleanRoomsMLClient>>;
using ListAudienceModelsPaginator = Aws::Utils::Pagination::Paginator<CleanRoomsMLClient, Model::ListAudienceModelsRequest,
                                                                      Pagination::ListAudienceModelsPaginationTraits<CleanRoomsMLClient>>;
using ListCollaborationConfiguredModelAlgorithmAssociationsPaginator = Aws::Utils::Pagination::Paginator<
    CleanRoomsMLClient, Model::ListCollaborationConfiguredModelAlgorithmAssociationsRequest,
    Pagination::ListCollaborationConfiguredModelAlgorithmAssociationsPaginationTraits<CleanRoomsMLClient>>;
using ListCollaborationMLInputChannelsPaginator =
    Aws::Utils::Pagination::Paginator<CleanRoomsMLClient, Model::ListCollaborationMLInputChannelsRequest,
                                      Pagination::ListCollaborationMLInputChannelsPaginationTraits<CleanRoomsMLClient>>;
using ListCollaborationTrainedModelExportJobsPaginator =
    Aws::Utils::Pagination::Paginator<CleanRoomsMLClient, Model::ListCollaborationTrainedModelExportJobsRequest,
                                      Pagination::ListCollaborationTrainedModelExportJobsPaginationTraits<CleanRoomsMLClient>>;
using ListCollaborationTrainedModelInferenceJobsPaginator =
    Aws::Utils::Pagination::Paginator<CleanRoomsMLClient, Model::ListCollaborationTrainedModelInferenceJobsRequest,
                                      Pagination::ListCollaborationTrainedModelInferenceJobsPaginationTraits<CleanRoomsMLClient>>;
using ListCollaborationTrainedModelsPaginator =
    Aws::Utils::Pagination::Paginator<CleanRoomsMLClient, Model::ListCollaborationTrainedModelsRequest,
                                      Pagination::ListCollaborationTrainedModelsPaginationTraits<CleanRoomsMLClient>>;
using ListConfiguredAudienceModelsPaginator =
    Aws::Utils::Pagination::Paginator<CleanRoomsMLClient, Model::ListConfiguredAudienceModelsRequest,
                                      Pagination::ListConfiguredAudienceModelsPaginationTraits<CleanRoomsMLClient>>;
using ListConfiguredModelAlgorithmAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<CleanRoomsMLClient, Model::ListConfiguredModelAlgorithmAssociationsRequest,
                                      Pagination::ListConfiguredModelAlgorithmAssociationsPaginationTraits<CleanRoomsMLClient>>;
using ListConfiguredModelAlgorithmsPaginator =
    Aws::Utils::Pagination::Paginator<CleanRoomsMLClient, Model::ListConfiguredModelAlgorithmsRequest,
                                      Pagination::ListConfiguredModelAlgorithmsPaginationTraits<CleanRoomsMLClient>>;
using ListMLInputChannelsPaginator = Aws::Utils::Pagination::Paginator<CleanRoomsMLClient, Model::ListMLInputChannelsRequest,
                                                                       Pagination::ListMLInputChannelsPaginationTraits<CleanRoomsMLClient>>;
using ListTrainedModelInferenceJobsPaginator =
    Aws::Utils::Pagination::Paginator<CleanRoomsMLClient, Model::ListTrainedModelInferenceJobsRequest,
                                      Pagination::ListTrainedModelInferenceJobsPaginationTraits<CleanRoomsMLClient>>;
using ListTrainedModelsPaginator = Aws::Utils::Pagination::Paginator<CleanRoomsMLClient, Model::ListTrainedModelsRequest,
                                                                     Pagination::ListTrainedModelsPaginationTraits<CleanRoomsMLClient>>;
using ListTrainedModelVersionsPaginator =
    Aws::Utils::Pagination::Paginator<CleanRoomsMLClient, Model::ListTrainedModelVersionsRequest,
                                      Pagination::ListTrainedModelVersionsPaginationTraits<CleanRoomsMLClient>>;
using ListTrainingDatasetsPaginator =
    Aws::Utils::Pagination::Paginator<CleanRoomsMLClient, Model::ListTrainingDatasetsRequest,
                                      Pagination::ListTrainingDatasetsPaginationTraits<CleanRoomsMLClient>>;

}  // namespace CleanRoomsML
}  // namespace Aws
