/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/freetier/model/GetFreeTierUsagePaginationTraits.h>
#include <aws/freetier/model/ListAccountActivitiesPaginationTraits.h>

#include <memory>

namespace Aws {
namespace FreeTier {

template <typename DerivedClient>
class FreeTierPaginationBase {
 public:
  /**
   * Create a paginator for GetFreeTierUsage operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetFreeTierUsageRequest,
                                    Pagination::GetFreeTierUsagePaginationTraits<DerivedClient>>
  GetFreeTierUsagePaginator(const Model::GetFreeTierUsageRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetFreeTierUsageRequest,
                                             Pagination::GetFreeTierUsagePaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListAccountActivities operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccountActivitiesRequest,
                                    Pagination::ListAccountActivitiesPaginationTraits<DerivedClient>>
  ListAccountActivitiesPaginator(const Model::ListAccountActivitiesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccountActivitiesRequest,
                                             Pagination::ListAccountActivitiesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace FreeTier
}  // namespace Aws
