/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/bcm-dashboards/model/ListDashboardsPaginationTraits.h>
#include <aws/bcm-dashboards/model/ListScheduledReportsPaginationTraits.h>
#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace BCMDashboards {

template <typename DerivedClient>
class BCMDashboardsPaginationBase {
 public:
  /**
   * Create a paginator for ListDashboards operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDashboardsRequest, Pagination::ListDashboardsPaginationTraits<DerivedClient>>
  ListDashboardsPaginator(const Model::ListDashboardsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDashboardsRequest,
                                             Pagination::ListDashboardsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListScheduledReports operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListScheduledReportsRequest,
                                    Pagination::ListScheduledReportsPaginationTraits<DerivedClient>>
  ListScheduledReportsPaginator(const Model::ListScheduledReportsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListScheduledReportsRequest,
                                             Pagination::ListScheduledReportsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace BCMDashboards
}  // namespace Aws
