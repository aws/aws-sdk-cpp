/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/application-insights/model/ListApplicationsPaginationTraits.h>
#include <aws/application-insights/model/ListComponentsPaginationTraits.h>
#include <aws/application-insights/model/ListConfigurationHistoryPaginationTraits.h>
#include <aws/application-insights/model/ListLogPatternSetsPaginationTraits.h>
#include <aws/application-insights/model/ListLogPatternsPaginationTraits.h>
#include <aws/application-insights/model/ListProblemsPaginationTraits.h>
#include <aws/application-insights/model/ListWorkloadsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace ApplicationInsights {

class ApplicationInsightsClient;

template <typename DerivedClient>
class ApplicationInsightsPaginationBase {
 public:
  /**
   * Create a paginator for ListApplications operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApplicationsRequest,
                                    Pagination::ListApplicationsPaginationTraits<DerivedClient>>
  ListApplicationsPaginator(const Model::ListApplicationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApplicationsRequest,
                                             Pagination::ListApplicationsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListComponents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListComponentsRequest, Pagination::ListComponentsPaginationTraits<DerivedClient>>
  ListComponentsPaginator(const Model::ListComponentsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListComponentsRequest,
                                             Pagination::ListComponentsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListConfigurationHistory operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConfigurationHistoryRequest,
                                    Pagination::ListConfigurationHistoryPaginationTraits<DerivedClient>>
  ListConfigurationHistoryPaginator(const Model::ListConfigurationHistoryRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConfigurationHistoryRequest,
                                             Pagination::ListConfigurationHistoryPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListLogPatterns operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLogPatternsRequest,
                                    Pagination::ListLogPatternsPaginationTraits<DerivedClient>>
  ListLogPatternsPaginator(const Model::ListLogPatternsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLogPatternsRequest,
                                             Pagination::ListLogPatternsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListLogPatternSets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLogPatternSetsRequest,
                                    Pagination::ListLogPatternSetsPaginationTraits<DerivedClient>>
  ListLogPatternSetsPaginator(const Model::ListLogPatternSetsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLogPatternSetsRequest,
                                             Pagination::ListLogPatternSetsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListProblems operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProblemsRequest, Pagination::ListProblemsPaginationTraits<DerivedClient>>
  ListProblemsPaginator(const Model::ListProblemsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProblemsRequest,
                                             Pagination::ListProblemsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListWorkloads operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkloadsRequest, Pagination::ListWorkloadsPaginationTraits<DerivedClient>>
  ListWorkloadsPaginator(const Model::ListWorkloadsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkloadsRequest,
                                             Pagination::ListWorkloadsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }
};
}  // namespace ApplicationInsights
}  // namespace Aws
