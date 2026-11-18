/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/abuse-signal/model/ListAbuseReportStatusesPaginationTraits.h>
#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace AbuseSignal {

template <typename DerivedClient>
class AbuseSignalPaginationBase {
 public:
  /**
   * Create a paginator for ListAbuseReportStatuses operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAbuseReportStatusesRequest,
                                    Pagination::ListAbuseReportStatusesPaginationTraits<DerivedClient>>
  ListAbuseReportStatusesPaginator(const Model::ListAbuseReportStatusesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAbuseReportStatusesRequest,
                                             Pagination::ListAbuseReportStatusesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace AbuseSignal
}  // namespace Aws
