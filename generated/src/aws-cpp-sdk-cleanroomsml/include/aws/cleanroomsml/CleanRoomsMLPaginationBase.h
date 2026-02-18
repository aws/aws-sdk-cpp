/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

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

#include <memory>

namespace Aws {
namespace CleanRoomsML {

class CleanRoomsMLClient;

template <typename DerivedClient>
class CleanRoomsMLPaginationBase {
 public:
  /**
   * Create a paginator for ListAudienceExportJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAudienceExportJobsRequest,
                                    Pagination::ListAudienceExportJobsPaginationTraits<DerivedClient>>
  ListAudienceExportJobsPaginator(const Model::ListAudienceExportJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAudienceExportJobsRequest,
                                             Pagination::ListAudienceExportJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAudienceGenerationJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAudienceGenerationJobsRequest,
                                    Pagination::ListAudienceGenerationJobsPaginationTraits<DerivedClient>>
  ListAudienceGenerationJobsPaginator(const Model::ListAudienceGenerationJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAudienceGenerationJobsRequest,
                                             Pagination::ListAudienceGenerationJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAudienceModels operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAudienceModelsRequest,
                                    Pagination::ListAudienceModelsPaginationTraits<DerivedClient>>
  ListAudienceModelsPaginator(const Model::ListAudienceModelsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAudienceModelsRequest,
                                             Pagination::ListAudienceModelsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCollaborationConfiguredModelAlgorithmAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCollaborationConfiguredModelAlgorithmAssociationsRequest,
                                    Pagination::ListCollaborationConfiguredModelAlgorithmAssociationsPaginationTraits<DerivedClient>>
  ListCollaborationConfiguredModelAlgorithmAssociationsPaginator(
      const Model::ListCollaborationConfiguredModelAlgorithmAssociationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<
        DerivedClient, Model::ListCollaborationConfiguredModelAlgorithmAssociationsRequest,
        Pagination::ListCollaborationConfiguredModelAlgorithmAssociationsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListCollaborationMLInputChannels operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCollaborationMLInputChannelsRequest,
                                    Pagination::ListCollaborationMLInputChannelsPaginationTraits<DerivedClient>>
  ListCollaborationMLInputChannelsPaginator(const Model::ListCollaborationMLInputChannelsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCollaborationMLInputChannelsRequest,
                                             Pagination::ListCollaborationMLInputChannelsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCollaborationTrainedModelExportJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCollaborationTrainedModelExportJobsRequest,
                                    Pagination::ListCollaborationTrainedModelExportJobsPaginationTraits<DerivedClient>>
  ListCollaborationTrainedModelExportJobsPaginator(const Model::ListCollaborationTrainedModelExportJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCollaborationTrainedModelExportJobsRequest,
                                             Pagination::ListCollaborationTrainedModelExportJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCollaborationTrainedModelInferenceJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCollaborationTrainedModelInferenceJobsRequest,
                                    Pagination::ListCollaborationTrainedModelInferenceJobsPaginationTraits<DerivedClient>>
  ListCollaborationTrainedModelInferenceJobsPaginator(const Model::ListCollaborationTrainedModelInferenceJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCollaborationTrainedModelInferenceJobsRequest,
                                             Pagination::ListCollaborationTrainedModelInferenceJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCollaborationTrainedModels operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCollaborationTrainedModelsRequest,
                                    Pagination::ListCollaborationTrainedModelsPaginationTraits<DerivedClient>>
  ListCollaborationTrainedModelsPaginator(const Model::ListCollaborationTrainedModelsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCollaborationTrainedModelsRequest,
                                             Pagination::ListCollaborationTrainedModelsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListConfiguredAudienceModels operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConfiguredAudienceModelsRequest,
                                    Pagination::ListConfiguredAudienceModelsPaginationTraits<DerivedClient>>
  ListConfiguredAudienceModelsPaginator(const Model::ListConfiguredAudienceModelsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConfiguredAudienceModelsRequest,
                                             Pagination::ListConfiguredAudienceModelsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListConfiguredModelAlgorithmAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConfiguredModelAlgorithmAssociationsRequest,
                                    Pagination::ListConfiguredModelAlgorithmAssociationsPaginationTraits<DerivedClient>>
  ListConfiguredModelAlgorithmAssociationsPaginator(const Model::ListConfiguredModelAlgorithmAssociationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConfiguredModelAlgorithmAssociationsRequest,
                                             Pagination::ListConfiguredModelAlgorithmAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListConfiguredModelAlgorithms operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConfiguredModelAlgorithmsRequest,
                                    Pagination::ListConfiguredModelAlgorithmsPaginationTraits<DerivedClient>>
  ListConfiguredModelAlgorithmsPaginator(const Model::ListConfiguredModelAlgorithmsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConfiguredModelAlgorithmsRequest,
                                             Pagination::ListConfiguredModelAlgorithmsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListMLInputChannels operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMLInputChannelsRequest,
                                    Pagination::ListMLInputChannelsPaginationTraits<DerivedClient>>
  ListMLInputChannelsPaginator(const Model::ListMLInputChannelsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMLInputChannelsRequest,
                                             Pagination::ListMLInputChannelsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTrainedModelInferenceJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTrainedModelInferenceJobsRequest,
                                    Pagination::ListTrainedModelInferenceJobsPaginationTraits<DerivedClient>>
  ListTrainedModelInferenceJobsPaginator(const Model::ListTrainedModelInferenceJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTrainedModelInferenceJobsRequest,
                                             Pagination::ListTrainedModelInferenceJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTrainedModels operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTrainedModelsRequest,
                                    Pagination::ListTrainedModelsPaginationTraits<DerivedClient>>
  ListTrainedModelsPaginator(const Model::ListTrainedModelsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTrainedModelsRequest,
                                             Pagination::ListTrainedModelsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTrainedModelVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTrainedModelVersionsRequest,
                                    Pagination::ListTrainedModelVersionsPaginationTraits<DerivedClient>>
  ListTrainedModelVersionsPaginator(const Model::ListTrainedModelVersionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTrainedModelVersionsRequest,
                                             Pagination::ListTrainedModelVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTrainingDatasets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTrainingDatasetsRequest,
                                    Pagination::ListTrainingDatasetsPaginationTraits<DerivedClient>>
  ListTrainingDatasetsPaginator(const Model::ListTrainingDatasetsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTrainingDatasetsRequest,
                                             Pagination::ListTrainingDatasetsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace CleanRoomsML
}  // namespace Aws
