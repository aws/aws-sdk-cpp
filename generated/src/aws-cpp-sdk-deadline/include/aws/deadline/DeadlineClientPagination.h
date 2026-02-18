/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/deadline/DeadlineClient.h>
#include <aws/deadline/model/GetSessionsStatisticsAggregationPaginationTraits.h>
#include <aws/deadline/model/ListAvailableMeteredProductsPaginationTraits.h>
#include <aws/deadline/model/ListBudgetsPaginationTraits.h>
#include <aws/deadline/model/ListFarmMembersPaginationTraits.h>
#include <aws/deadline/model/ListFarmsPaginationTraits.h>
#include <aws/deadline/model/ListFleetMembersPaginationTraits.h>
#include <aws/deadline/model/ListFleetsPaginationTraits.h>
#include <aws/deadline/model/ListJobMembersPaginationTraits.h>
#include <aws/deadline/model/ListJobParameterDefinitionsPaginationTraits.h>
#include <aws/deadline/model/ListJobsPaginationTraits.h>
#include <aws/deadline/model/ListLicenseEndpointsPaginationTraits.h>
#include <aws/deadline/model/ListLimitsPaginationTraits.h>
#include <aws/deadline/model/ListMeteredProductsPaginationTraits.h>
#include <aws/deadline/model/ListMonitorsPaginationTraits.h>
#include <aws/deadline/model/ListQueueEnvironmentsPaginationTraits.h>
#include <aws/deadline/model/ListQueueFleetAssociationsPaginationTraits.h>
#include <aws/deadline/model/ListQueueLimitAssociationsPaginationTraits.h>
#include <aws/deadline/model/ListQueueMembersPaginationTraits.h>
#include <aws/deadline/model/ListQueuesPaginationTraits.h>
#include <aws/deadline/model/ListSessionActionsPaginationTraits.h>
#include <aws/deadline/model/ListSessionsForWorkerPaginationTraits.h>
#include <aws/deadline/model/ListSessionsPaginationTraits.h>
#include <aws/deadline/model/ListStepConsumersPaginationTraits.h>
#include <aws/deadline/model/ListStepDependenciesPaginationTraits.h>
#include <aws/deadline/model/ListStepsPaginationTraits.h>
#include <aws/deadline/model/ListStorageProfilesForQueuePaginationTraits.h>
#include <aws/deadline/model/ListStorageProfilesPaginationTraits.h>
#include <aws/deadline/model/ListTasksPaginationTraits.h>
#include <aws/deadline/model/ListWorkersPaginationTraits.h>

namespace Aws {
namespace deadline {

using GetSessionsStatisticsAggregationPaginator =
    Aws::Utils::Pagination::Paginator<DeadlineClient, Model::GetSessionsStatisticsAggregationRequest,
                                      Pagination::GetSessionsStatisticsAggregationPaginationTraits<DeadlineClient>>;
using ListAvailableMeteredProductsPaginator =
    Aws::Utils::Pagination::Paginator<DeadlineClient, Model::ListAvailableMeteredProductsRequest,
                                      Pagination::ListAvailableMeteredProductsPaginationTraits<DeadlineClient>>;
using ListBudgetsPaginator =
    Aws::Utils::Pagination::Paginator<DeadlineClient, Model::ListBudgetsRequest, Pagination::ListBudgetsPaginationTraits<DeadlineClient>>;
using ListFarmMembersPaginator = Aws::Utils::Pagination::Paginator<DeadlineClient, Model::ListFarmMembersRequest,
                                                                   Pagination::ListFarmMembersPaginationTraits<DeadlineClient>>;
using ListFarmsPaginator =
    Aws::Utils::Pagination::Paginator<DeadlineClient, Model::ListFarmsRequest, Pagination::ListFarmsPaginationTraits<DeadlineClient>>;
using ListFleetMembersPaginator = Aws::Utils::Pagination::Paginator<DeadlineClient, Model::ListFleetMembersRequest,
                                                                    Pagination::ListFleetMembersPaginationTraits<DeadlineClient>>;
using ListFleetsPaginator =
    Aws::Utils::Pagination::Paginator<DeadlineClient, Model::ListFleetsRequest, Pagination::ListFleetsPaginationTraits<DeadlineClient>>;
using ListJobMembersPaginator = Aws::Utils::Pagination::Paginator<DeadlineClient, Model::ListJobMembersRequest,
                                                                  Pagination::ListJobMembersPaginationTraits<DeadlineClient>>;
using ListJobParameterDefinitionsPaginator =
    Aws::Utils::Pagination::Paginator<DeadlineClient, Model::ListJobParameterDefinitionsRequest,
                                      Pagination::ListJobParameterDefinitionsPaginationTraits<DeadlineClient>>;
using ListJobsPaginator =
    Aws::Utils::Pagination::Paginator<DeadlineClient, Model::ListJobsRequest, Pagination::ListJobsPaginationTraits<DeadlineClient>>;
using ListLicenseEndpointsPaginator = Aws::Utils::Pagination::Paginator<DeadlineClient, Model::ListLicenseEndpointsRequest,
                                                                        Pagination::ListLicenseEndpointsPaginationTraits<DeadlineClient>>;
using ListLimitsPaginator =
    Aws::Utils::Pagination::Paginator<DeadlineClient, Model::ListLimitsRequest, Pagination::ListLimitsPaginationTraits<DeadlineClient>>;
using ListMeteredProductsPaginator = Aws::Utils::Pagination::Paginator<DeadlineClient, Model::ListMeteredProductsRequest,
                                                                       Pagination::ListMeteredProductsPaginationTraits<DeadlineClient>>;
using ListMonitorsPaginator =
    Aws::Utils::Pagination::Paginator<DeadlineClient, Model::ListMonitorsRequest, Pagination::ListMonitorsPaginationTraits<DeadlineClient>>;
using ListQueueEnvironmentsPaginator = Aws::Utils::Pagination::Paginator<DeadlineClient, Model::ListQueueEnvironmentsRequest,
                                                                         Pagination::ListQueueEnvironmentsPaginationTraits<DeadlineClient>>;
using ListQueueFleetAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<DeadlineClient, Model::ListQueueFleetAssociationsRequest,
                                      Pagination::ListQueueFleetAssociationsPaginationTraits<DeadlineClient>>;
using ListQueueLimitAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<DeadlineClient, Model::ListQueueLimitAssociationsRequest,
                                      Pagination::ListQueueLimitAssociationsPaginationTraits<DeadlineClient>>;
using ListQueueMembersPaginator = Aws::Utils::Pagination::Paginator<DeadlineClient, Model::ListQueueMembersRequest,
                                                                    Pagination::ListQueueMembersPaginationTraits<DeadlineClient>>;
using ListQueuesPaginator =
    Aws::Utils::Pagination::Paginator<DeadlineClient, Model::ListQueuesRequest, Pagination::ListQueuesPaginationTraits<DeadlineClient>>;
using ListSessionActionsPaginator = Aws::Utils::Pagination::Paginator<DeadlineClient, Model::ListSessionActionsRequest,
                                                                      Pagination::ListSessionActionsPaginationTraits<DeadlineClient>>;
using ListSessionsPaginator =
    Aws::Utils::Pagination::Paginator<DeadlineClient, Model::ListSessionsRequest, Pagination::ListSessionsPaginationTraits<DeadlineClient>>;
using ListSessionsForWorkerPaginator = Aws::Utils::Pagination::Paginator<DeadlineClient, Model::ListSessionsForWorkerRequest,
                                                                         Pagination::ListSessionsForWorkerPaginationTraits<DeadlineClient>>;
using ListStepConsumersPaginator = Aws::Utils::Pagination::Paginator<DeadlineClient, Model::ListStepConsumersRequest,
                                                                     Pagination::ListStepConsumersPaginationTraits<DeadlineClient>>;
using ListStepDependenciesPaginator = Aws::Utils::Pagination::Paginator<DeadlineClient, Model::ListStepDependenciesRequest,
                                                                        Pagination::ListStepDependenciesPaginationTraits<DeadlineClient>>;
using ListStepsPaginator =
    Aws::Utils::Pagination::Paginator<DeadlineClient, Model::ListStepsRequest, Pagination::ListStepsPaginationTraits<DeadlineClient>>;
using ListStorageProfilesPaginator = Aws::Utils::Pagination::Paginator<DeadlineClient, Model::ListStorageProfilesRequest,
                                                                       Pagination::ListStorageProfilesPaginationTraits<DeadlineClient>>;
using ListStorageProfilesForQueuePaginator =
    Aws::Utils::Pagination::Paginator<DeadlineClient, Model::ListStorageProfilesForQueueRequest,
                                      Pagination::ListStorageProfilesForQueuePaginationTraits<DeadlineClient>>;
using ListTasksPaginator =
    Aws::Utils::Pagination::Paginator<DeadlineClient, Model::ListTasksRequest, Pagination::ListTasksPaginationTraits<DeadlineClient>>;
using ListWorkersPaginator =
    Aws::Utils::Pagination::Paginator<DeadlineClient, Model::ListWorkersRequest, Pagination::ListWorkersPaginationTraits<DeadlineClient>>;

}  // namespace deadline
}  // namespace Aws
