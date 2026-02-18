/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/lookoutequipment/model/ListDataIngestionJobsPaginationTraits.h>
#include <aws/lookoutequipment/model/ListDatasetsPaginationTraits.h>
#include <aws/lookoutequipment/model/ListInferenceEventsPaginationTraits.h>
#include <aws/lookoutequipment/model/ListInferenceExecutionsPaginationTraits.h>
#include <aws/lookoutequipment/model/ListInferenceSchedulersPaginationTraits.h>
#include <aws/lookoutequipment/model/ListLabelGroupsPaginationTraits.h>
#include <aws/lookoutequipment/model/ListLabelsPaginationTraits.h>
#include <aws/lookoutequipment/model/ListModelVersionsPaginationTraits.h>
#include <aws/lookoutequipment/model/ListModelsPaginationTraits.h>
#include <aws/lookoutequipment/model/ListRetrainingSchedulersPaginationTraits.h>
#include <aws/lookoutequipment/model/ListSensorStatisticsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace LookoutEquipment {

class LookoutEquipmentClient;

template <typename DerivedClient>
class LookoutEquipmentPaginationBase {
 public:
  /**
   * Create a paginator for ListDataIngestionJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataIngestionJobsRequest,
                                    Pagination::ListDataIngestionJobsPaginationTraits<DerivedClient>>
  ListDataIngestionJobsPaginator(const Model::ListDataIngestionJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataIngestionJobsRequest,
                                             Pagination::ListDataIngestionJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDatasets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDatasetsRequest, Pagination::ListDatasetsPaginationTraits<DerivedClient>>
  ListDatasetsPaginator(const Model::ListDatasetsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDatasetsRequest,
                                             Pagination::ListDatasetsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListInferenceEvents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInferenceEventsRequest,
                                    Pagination::ListInferenceEventsPaginationTraits<DerivedClient>>
  ListInferenceEventsPaginator(const Model::ListInferenceEventsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInferenceEventsRequest,
                                             Pagination::ListInferenceEventsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListInferenceExecutions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInferenceExecutionsRequest,
                                    Pagination::ListInferenceExecutionsPaginationTraits<DerivedClient>>
  ListInferenceExecutionsPaginator(const Model::ListInferenceExecutionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInferenceExecutionsRequest,
                                             Pagination::ListInferenceExecutionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListInferenceSchedulers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInferenceSchedulersRequest,
                                    Pagination::ListInferenceSchedulersPaginationTraits<DerivedClient>>
  ListInferenceSchedulersPaginator(const Model::ListInferenceSchedulersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInferenceSchedulersRequest,
                                             Pagination::ListInferenceSchedulersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListLabelGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLabelGroupsRequest,
                                    Pagination::ListLabelGroupsPaginationTraits<DerivedClient>>
  ListLabelGroupsPaginator(const Model::ListLabelGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLabelGroupsRequest,
                                             Pagination::ListLabelGroupsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListLabels operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLabelsRequest, Pagination::ListLabelsPaginationTraits<DerivedClient>>
  ListLabelsPaginator(const Model::ListLabelsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLabelsRequest,
                                             Pagination::ListLabelsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for ListModels operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListModelsRequest, Pagination::ListModelsPaginationTraits<DerivedClient>>
  ListModelsPaginator(const Model::ListModelsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListModelsRequest,
                                             Pagination::ListModelsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for ListModelVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListModelVersionsRequest,
                                    Pagination::ListModelVersionsPaginationTraits<DerivedClient>>
  ListModelVersionsPaginator(const Model::ListModelVersionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListModelVersionsRequest,
                                             Pagination::ListModelVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRetrainingSchedulers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRetrainingSchedulersRequest,
                                    Pagination::ListRetrainingSchedulersPaginationTraits<DerivedClient>>
  ListRetrainingSchedulersPaginator(const Model::ListRetrainingSchedulersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRetrainingSchedulersRequest,
                                             Pagination::ListRetrainingSchedulersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSensorStatistics operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSensorStatisticsRequest,
                                    Pagination::ListSensorStatisticsPaginationTraits<DerivedClient>>
  ListSensorStatisticsPaginator(const Model::ListSensorStatisticsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSensorStatisticsRequest,
                                             Pagination::ListSensorStatisticsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace LookoutEquipment
}  // namespace Aws
