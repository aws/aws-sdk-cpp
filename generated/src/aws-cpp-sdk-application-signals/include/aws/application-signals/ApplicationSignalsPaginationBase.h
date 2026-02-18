/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/application-signals/model/ListEntityEventsPaginationTraits.h>
#include <aws/application-signals/model/ListServiceDependenciesPaginationTraits.h>
#include <aws/application-signals/model/ListServiceDependentsPaginationTraits.h>
#include <aws/application-signals/model/ListServiceLevelObjectiveExclusionWindowsPaginationTraits.h>
#include <aws/application-signals/model/ListServiceLevelObjectivesPaginationTraits.h>
#include <aws/application-signals/model/ListServiceOperationsPaginationTraits.h>
#include <aws/application-signals/model/ListServiceStatesPaginationTraits.h>
#include <aws/application-signals/model/ListServicesPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace ApplicationSignals {

class ApplicationSignalsClient;

template <typename DerivedClient>
class ApplicationSignalsPaginationBase {
 public:
  /**
   * Create a paginator for ListEntityEvents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEntityEventsRequest,
                                    Pagination::ListEntityEventsPaginationTraits<DerivedClient>>
  ListEntityEventsPaginator(const Model::ListEntityEventsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEntityEventsRequest,
                                             Pagination::ListEntityEventsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListServiceDependencies operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServiceDependenciesRequest,
                                    Pagination::ListServiceDependenciesPaginationTraits<DerivedClient>>
  ListServiceDependenciesPaginator(const Model::ListServiceDependenciesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServiceDependenciesRequest,
                                             Pagination::ListServiceDependenciesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListServiceDependents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServiceDependentsRequest,
                                    Pagination::ListServiceDependentsPaginationTraits<DerivedClient>>
  ListServiceDependentsPaginator(const Model::ListServiceDependentsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServiceDependentsRequest,
                                             Pagination::ListServiceDependentsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListServiceLevelObjectiveExclusionWindows operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServiceLevelObjectiveExclusionWindowsRequest,
                                    Pagination::ListServiceLevelObjectiveExclusionWindowsPaginationTraits<DerivedClient>>
  ListServiceLevelObjectiveExclusionWindowsPaginator(const Model::ListServiceLevelObjectiveExclusionWindowsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServiceLevelObjectiveExclusionWindowsRequest,
                                             Pagination::ListServiceLevelObjectiveExclusionWindowsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListServiceLevelObjectives operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServiceLevelObjectivesRequest,
                                    Pagination::ListServiceLevelObjectivesPaginationTraits<DerivedClient>>
  ListServiceLevelObjectivesPaginator(const Model::ListServiceLevelObjectivesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServiceLevelObjectivesRequest,
                                             Pagination::ListServiceLevelObjectivesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListServiceOperations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServiceOperationsRequest,
                                    Pagination::ListServiceOperationsPaginationTraits<DerivedClient>>
  ListServiceOperationsPaginator(const Model::ListServiceOperationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServiceOperationsRequest,
                                             Pagination::ListServiceOperationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListServices operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServicesRequest, Pagination::ListServicesPaginationTraits<DerivedClient>>
  ListServicesPaginator(const Model::ListServicesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServicesRequest,
                                             Pagination::ListServicesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListServiceStates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServiceStatesRequest,
                                    Pagination::ListServiceStatesPaginationTraits<DerivedClient>>
  ListServiceStatesPaginator(const Model::ListServiceStatesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServiceStatesRequest,
                                             Pagination::ListServiceStatesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace ApplicationSignals
}  // namespace Aws
