/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/lookoutequipment/LookoutEquipmentClient.h>
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

namespace Aws {
namespace LookoutEquipment {

using ListDataIngestionJobsPaginator =
    Aws::Utils::Pagination::Paginator<LookoutEquipmentClient, Model::ListDataIngestionJobsRequest,
                                      Pagination::ListDataIngestionJobsPaginationTraits<LookoutEquipmentClient>>;
using ListDatasetsPaginator = Aws::Utils::Pagination::Paginator<LookoutEquipmentClient, Model::ListDatasetsRequest,
                                                                Pagination::ListDatasetsPaginationTraits<LookoutEquipmentClient>>;
using ListInferenceEventsPaginator =
    Aws::Utils::Pagination::Paginator<LookoutEquipmentClient, Model::ListInferenceEventsRequest,
                                      Pagination::ListInferenceEventsPaginationTraits<LookoutEquipmentClient>>;
using ListInferenceExecutionsPaginator =
    Aws::Utils::Pagination::Paginator<LookoutEquipmentClient, Model::ListInferenceExecutionsRequest,
                                      Pagination::ListInferenceExecutionsPaginationTraits<LookoutEquipmentClient>>;
using ListInferenceSchedulersPaginator =
    Aws::Utils::Pagination::Paginator<LookoutEquipmentClient, Model::ListInferenceSchedulersRequest,
                                      Pagination::ListInferenceSchedulersPaginationTraits<LookoutEquipmentClient>>;
using ListLabelGroupsPaginator = Aws::Utils::Pagination::Paginator<LookoutEquipmentClient, Model::ListLabelGroupsRequest,
                                                                   Pagination::ListLabelGroupsPaginationTraits<LookoutEquipmentClient>>;
using ListLabelsPaginator = Aws::Utils::Pagination::Paginator<LookoutEquipmentClient, Model::ListLabelsRequest,
                                                              Pagination::ListLabelsPaginationTraits<LookoutEquipmentClient>>;
using ListModelsPaginator = Aws::Utils::Pagination::Paginator<LookoutEquipmentClient, Model::ListModelsRequest,
                                                              Pagination::ListModelsPaginationTraits<LookoutEquipmentClient>>;
using ListModelVersionsPaginator = Aws::Utils::Pagination::Paginator<LookoutEquipmentClient, Model::ListModelVersionsRequest,
                                                                     Pagination::ListModelVersionsPaginationTraits<LookoutEquipmentClient>>;
using ListRetrainingSchedulersPaginator =
    Aws::Utils::Pagination::Paginator<LookoutEquipmentClient, Model::ListRetrainingSchedulersRequest,
                                      Pagination::ListRetrainingSchedulersPaginationTraits<LookoutEquipmentClient>>;
using ListSensorStatisticsPaginator =
    Aws::Utils::Pagination::Paginator<LookoutEquipmentClient, Model::ListSensorStatisticsRequest,
                                      Pagination::ListSensorStatisticsPaginationTraits<LookoutEquipmentClient>>;

}  // namespace LookoutEquipment
}  // namespace Aws
