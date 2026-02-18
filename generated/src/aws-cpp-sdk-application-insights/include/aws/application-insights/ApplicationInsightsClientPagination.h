/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-insights/ApplicationInsightsClient.h>
#include <aws/application-insights/model/ListApplicationsPaginationTraits.h>
#include <aws/application-insights/model/ListComponentsPaginationTraits.h>
#include <aws/application-insights/model/ListConfigurationHistoryPaginationTraits.h>
#include <aws/application-insights/model/ListLogPatternSetsPaginationTraits.h>
#include <aws/application-insights/model/ListLogPatternsPaginationTraits.h>
#include <aws/application-insights/model/ListProblemsPaginationTraits.h>
#include <aws/application-insights/model/ListWorkloadsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace ApplicationInsights {

using ListApplicationsPaginator =
    Aws::Utils::Pagination::Paginator<ApplicationInsightsClient, Model::ListApplicationsRequest,
                                      Pagination::ListApplicationsPaginationTraits<ApplicationInsightsClient>>;
using ListComponentsPaginator = Aws::Utils::Pagination::Paginator<ApplicationInsightsClient, Model::ListComponentsRequest,
                                                                  Pagination::ListComponentsPaginationTraits<ApplicationInsightsClient>>;
using ListConfigurationHistoryPaginator =
    Aws::Utils::Pagination::Paginator<ApplicationInsightsClient, Model::ListConfigurationHistoryRequest,
                                      Pagination::ListConfigurationHistoryPaginationTraits<ApplicationInsightsClient>>;
using ListLogPatternsPaginator = Aws::Utils::Pagination::Paginator<ApplicationInsightsClient, Model::ListLogPatternsRequest,
                                                                   Pagination::ListLogPatternsPaginationTraits<ApplicationInsightsClient>>;
using ListLogPatternSetsPaginator =
    Aws::Utils::Pagination::Paginator<ApplicationInsightsClient, Model::ListLogPatternSetsRequest,
                                      Pagination::ListLogPatternSetsPaginationTraits<ApplicationInsightsClient>>;
using ListProblemsPaginator = Aws::Utils::Pagination::Paginator<ApplicationInsightsClient, Model::ListProblemsRequest,
                                                                Pagination::ListProblemsPaginationTraits<ApplicationInsightsClient>>;
using ListWorkloadsPaginator = Aws::Utils::Pagination::Paginator<ApplicationInsightsClient, Model::ListWorkloadsRequest,
                                                                 Pagination::ListWorkloadsPaginationTraits<ApplicationInsightsClient>>;

}  // namespace ApplicationInsights
}  // namespace Aws
