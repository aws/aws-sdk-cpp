/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/cloudcontrol/model/ListResourceRequestsPaginationTraits.h>
#include <aws/cloudcontrol/model/ListResourcesPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace CloudControlApi {

class CloudControlApiClient;

template <typename DerivedClient>
class CloudControlApiPaginationBase {
 public:
  /**
   * Create a paginator for ListResourceRequests operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourceRequestsRequest,
                                    Pagination::ListResourceRequestsPaginationTraits<DerivedClient>>
  ListResourceRequestsPaginator(const Model::ListResourceRequestsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourceRequestsRequest,
                                             Pagination::ListResourceRequestsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListResources operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourcesRequest, Pagination::ListResourcesPaginationTraits<DerivedClient>>
  ListResourcesPaginator(const Model::ListResourcesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourcesRequest,
                                             Pagination::ListResourcesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }
};
}  // namespace CloudControlApi
}  // namespace Aws
