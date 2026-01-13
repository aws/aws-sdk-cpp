/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/evs/model/ListEnvironmentHostsPaginationTraits.h>
#include <aws/evs/model/ListEnvironmentVlansPaginationTraits.h>
#include <aws/evs/model/ListEnvironmentsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace EVS {

class EVSClient;

template <typename DerivedClient>
class EVSPaginationBase {
 public:
  /**
   * Create a paginator for ListEnvironmentHosts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEnvironmentHostsRequest,
                                    Pagination::ListEnvironmentHostsPaginationTraits<DerivedClient>>
  ListEnvironmentHostsPaginator(const Model::ListEnvironmentHostsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEnvironmentHostsRequest,
                                             Pagination::ListEnvironmentHostsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListEnvironments operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEnvironmentsRequest,
                                    Pagination::ListEnvironmentsPaginationTraits<DerivedClient>>
  ListEnvironmentsPaginator(const Model::ListEnvironmentsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEnvironmentsRequest,
                                             Pagination::ListEnvironmentsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListEnvironmentVlans operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEnvironmentVlansRequest,
                                    Pagination::ListEnvironmentVlansPaginationTraits<DerivedClient>>
  ListEnvironmentVlansPaginator(const Model::ListEnvironmentVlansRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEnvironmentVlansRequest,
                                             Pagination::ListEnvironmentVlansPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace EVS
}  // namespace Aws
