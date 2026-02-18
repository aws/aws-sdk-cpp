/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
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

#include <memory>

namespace Aws {
namespace deadline {

class DeadlineClient;

template <typename DerivedClient>
class DeadlinePaginationBase {
 public:
  /**
   * Create a paginator for GetSessionsStatisticsAggregation operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetSessionsStatisticsAggregationRequest,
                                    Pagination::GetSessionsStatisticsAggregationPaginationTraits<DerivedClient>>
  GetSessionsStatisticsAggregationPaginator(const Model::GetSessionsStatisticsAggregationRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetSessionsStatisticsAggregationRequest,
                                             Pagination::GetSessionsStatisticsAggregationPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAvailableMeteredProducts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAvailableMeteredProductsRequest,
                                    Pagination::ListAvailableMeteredProductsPaginationTraits<DerivedClient>>
  ListAvailableMeteredProductsPaginator(const Model::ListAvailableMeteredProductsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAvailableMeteredProductsRequest,
                                             Pagination::ListAvailableMeteredProductsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListBudgets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBudgetsRequest, Pagination::ListBudgetsPaginationTraits<DerivedClient>>
  ListBudgetsPaginator(const Model::ListBudgetsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBudgetsRequest,
                                             Pagination::ListBudgetsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListFarmMembers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFarmMembersRequest,
                                    Pagination::ListFarmMembersPaginationTraits<DerivedClient>>
  ListFarmMembersPaginator(const Model::ListFarmMembersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFarmMembersRequest,
                                             Pagination::ListFarmMembersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListFarms operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFarmsRequest, Pagination::ListFarmsPaginationTraits<DerivedClient>>
  ListFarmsPaginator(const Model::ListFarmsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFarmsRequest, Pagination::ListFarmsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListFleetMembers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFleetMembersRequest,
                                    Pagination::ListFleetMembersPaginationTraits<DerivedClient>>
  ListFleetMembersPaginator(const Model::ListFleetMembersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFleetMembersRequest,
                                             Pagination::ListFleetMembersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListFleets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFleetsRequest, Pagination::ListFleetsPaginationTraits<DerivedClient>>
  ListFleetsPaginator(const Model::ListFleetsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFleetsRequest,
                                             Pagination::ListFleetsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for ListJobMembers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListJobMembersRequest, Pagination::ListJobMembersPaginationTraits<DerivedClient>>
  ListJobMembersPaginator(const Model::ListJobMembersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListJobMembersRequest,
                                             Pagination::ListJobMembersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListJobParameterDefinitions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListJobParameterDefinitionsRequest,
                                    Pagination::ListJobParameterDefinitionsPaginationTraits<DerivedClient>>
  ListJobParameterDefinitionsPaginator(const Model::ListJobParameterDefinitionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListJobParameterDefinitionsRequest,
                                             Pagination::ListJobParameterDefinitionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListJobsRequest, Pagination::ListJobsPaginationTraits<DerivedClient>>
  ListJobsPaginator(const Model::ListJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListJobsRequest, Pagination::ListJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListLicenseEndpoints operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLicenseEndpointsRequest,
                                    Pagination::ListLicenseEndpointsPaginationTraits<DerivedClient>>
  ListLicenseEndpointsPaginator(const Model::ListLicenseEndpointsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLicenseEndpointsRequest,
                                             Pagination::ListLicenseEndpointsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListLimits operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLimitsRequest, Pagination::ListLimitsPaginationTraits<DerivedClient>>
  ListLimitsPaginator(const Model::ListLimitsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLimitsRequest,
                                             Pagination::ListLimitsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for ListMeteredProducts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMeteredProductsRequest,
                                    Pagination::ListMeteredProductsPaginationTraits<DerivedClient>>
  ListMeteredProductsPaginator(const Model::ListMeteredProductsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMeteredProductsRequest,
                                             Pagination::ListMeteredProductsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListMonitors operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMonitorsRequest, Pagination::ListMonitorsPaginationTraits<DerivedClient>>
  ListMonitorsPaginator(const Model::ListMonitorsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMonitorsRequest,
                                             Pagination::ListMonitorsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListQueueEnvironments operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListQueueEnvironmentsRequest,
                                    Pagination::ListQueueEnvironmentsPaginationTraits<DerivedClient>>
  ListQueueEnvironmentsPaginator(const Model::ListQueueEnvironmentsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListQueueEnvironmentsRequest,
                                             Pagination::ListQueueEnvironmentsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListQueueFleetAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListQueueFleetAssociationsRequest,
                                    Pagination::ListQueueFleetAssociationsPaginationTraits<DerivedClient>>
  ListQueueFleetAssociationsPaginator(const Model::ListQueueFleetAssociationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListQueueFleetAssociationsRequest,
                                             Pagination::ListQueueFleetAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListQueueLimitAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListQueueLimitAssociationsRequest,
                                    Pagination::ListQueueLimitAssociationsPaginationTraits<DerivedClient>>
  ListQueueLimitAssociationsPaginator(const Model::ListQueueLimitAssociationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListQueueLimitAssociationsRequest,
                                             Pagination::ListQueueLimitAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListQueueMembers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListQueueMembersRequest,
                                    Pagination::ListQueueMembersPaginationTraits<DerivedClient>>
  ListQueueMembersPaginator(const Model::ListQueueMembersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListQueueMembersRequest,
                                             Pagination::ListQueueMembersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListQueues operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListQueuesRequest, Pagination::ListQueuesPaginationTraits<DerivedClient>>
  ListQueuesPaginator(const Model::ListQueuesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListQueuesRequest,
                                             Pagination::ListQueuesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for ListSessionActions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSessionActionsRequest,
                                    Pagination::ListSessionActionsPaginationTraits<DerivedClient>>
  ListSessionActionsPaginator(const Model::ListSessionActionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSessionActionsRequest,
                                             Pagination::ListSessionActionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSessions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSessionsRequest, Pagination::ListSessionsPaginationTraits<DerivedClient>>
  ListSessionsPaginator(const Model::ListSessionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSessionsRequest,
                                             Pagination::ListSessionsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListSessionsForWorker operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSessionsForWorkerRequest,
                                    Pagination::ListSessionsForWorkerPaginationTraits<DerivedClient>>
  ListSessionsForWorkerPaginator(const Model::ListSessionsForWorkerRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSessionsForWorkerRequest,
                                             Pagination::ListSessionsForWorkerPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListStepConsumers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStepConsumersRequest,
                                    Pagination::ListStepConsumersPaginationTraits<DerivedClient>>
  ListStepConsumersPaginator(const Model::ListStepConsumersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStepConsumersRequest,
                                             Pagination::ListStepConsumersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListStepDependencies operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStepDependenciesRequest,
                                    Pagination::ListStepDependenciesPaginationTraits<DerivedClient>>
  ListStepDependenciesPaginator(const Model::ListStepDependenciesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStepDependenciesRequest,
                                             Pagination::ListStepDependenciesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSteps operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStepsRequest, Pagination::ListStepsPaginationTraits<DerivedClient>>
  ListStepsPaginator(const Model::ListStepsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStepsRequest, Pagination::ListStepsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListStorageProfiles operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStorageProfilesRequest,
                                    Pagination::ListStorageProfilesPaginationTraits<DerivedClient>>
  ListStorageProfilesPaginator(const Model::ListStorageProfilesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStorageProfilesRequest,
                                             Pagination::ListStorageProfilesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListStorageProfilesForQueue operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStorageProfilesForQueueRequest,
                                    Pagination::ListStorageProfilesForQueuePaginationTraits<DerivedClient>>
  ListStorageProfilesForQueuePaginator(const Model::ListStorageProfilesForQueueRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListStorageProfilesForQueueRequest,
                                             Pagination::ListStorageProfilesForQueuePaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTasks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTasksRequest, Pagination::ListTasksPaginationTraits<DerivedClient>>
  ListTasksPaginator(const Model::ListTasksRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTasksRequest, Pagination::ListTasksPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListWorkers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkersRequest, Pagination::ListWorkersPaginationTraits<DerivedClient>>
  ListWorkersPaginator(const Model::ListWorkersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkersRequest,
                                             Pagination::ListWorkersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }
};
}  // namespace deadline
}  // namespace Aws
