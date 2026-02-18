/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignalsClient.h>
#include <aws/application-signals/model/ListEntityEventsPaginationTraits.h>
#include <aws/application-signals/model/ListServiceDependenciesPaginationTraits.h>
#include <aws/application-signals/model/ListServiceDependentsPaginationTraits.h>
#include <aws/application-signals/model/ListServiceLevelObjectiveExclusionWindowsPaginationTraits.h>
#include <aws/application-signals/model/ListServiceLevelObjectivesPaginationTraits.h>
#include <aws/application-signals/model/ListServiceOperationsPaginationTraits.h>
#include <aws/application-signals/model/ListServiceStatesPaginationTraits.h>
#include <aws/application-signals/model/ListServicesPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace ApplicationSignals {

using ListEntityEventsPaginator = Aws::Utils::Pagination::Paginator<ApplicationSignalsClient, Model::ListEntityEventsRequest,
                                                                    Pagination::ListEntityEventsPaginationTraits<ApplicationSignalsClient>>;
using ListServiceDependenciesPaginator =
    Aws::Utils::Pagination::Paginator<ApplicationSignalsClient, Model::ListServiceDependenciesRequest,
                                      Pagination::ListServiceDependenciesPaginationTraits<ApplicationSignalsClient>>;
using ListServiceDependentsPaginator =
    Aws::Utils::Pagination::Paginator<ApplicationSignalsClient, Model::ListServiceDependentsRequest,
                                      Pagination::ListServiceDependentsPaginationTraits<ApplicationSignalsClient>>;
using ListServiceLevelObjectiveExclusionWindowsPaginator =
    Aws::Utils::Pagination::Paginator<ApplicationSignalsClient, Model::ListServiceLevelObjectiveExclusionWindowsRequest,
                                      Pagination::ListServiceLevelObjectiveExclusionWindowsPaginationTraits<ApplicationSignalsClient>>;
using ListServiceLevelObjectivesPaginator =
    Aws::Utils::Pagination::Paginator<ApplicationSignalsClient, Model::ListServiceLevelObjectivesRequest,
                                      Pagination::ListServiceLevelObjectivesPaginationTraits<ApplicationSignalsClient>>;
using ListServiceOperationsPaginator =
    Aws::Utils::Pagination::Paginator<ApplicationSignalsClient, Model::ListServiceOperationsRequest,
                                      Pagination::ListServiceOperationsPaginationTraits<ApplicationSignalsClient>>;
using ListServicesPaginator = Aws::Utils::Pagination::Paginator<ApplicationSignalsClient, Model::ListServicesRequest,
                                                                Pagination::ListServicesPaginationTraits<ApplicationSignalsClient>>;
using ListServiceStatesPaginator =
    Aws::Utils::Pagination::Paginator<ApplicationSignalsClient, Model::ListServiceStatesRequest,
                                      Pagination::ListServiceStatesPaginationTraits<ApplicationSignalsClient>>;

}  // namespace ApplicationSignals
}  // namespace Aws
