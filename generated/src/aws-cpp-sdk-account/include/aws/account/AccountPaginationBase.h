/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/account/model/ListRegionsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace Account {

class AccountClient;

template <typename DerivedClient>
class AccountPaginationBase {
 public:
  /**
   * Create a paginator for ListRegions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRegionsRequest, Pagination::ListRegionsPaginationTraits<DerivedClient>>
  ListRegionsPaginator(const Model::ListRegionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRegionsRequest,
                                             Pagination::ListRegionsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }
};
}  // namespace Account
}  // namespace Aws
