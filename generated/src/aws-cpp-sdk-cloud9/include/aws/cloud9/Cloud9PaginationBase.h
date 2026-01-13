/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/cloud9/model/DescribeEnvironmentMembershipsPaginationTraits.h>
#include <aws/cloud9/model/ListEnvironmentsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace Cloud9 {

class Cloud9Client;

template <typename DerivedClient>
class Cloud9PaginationBase {
 public:
  /**
   * Create a paginator for DescribeEnvironmentMemberships operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeEnvironmentMembershipsRequest,
                                    Pagination::DescribeEnvironmentMembershipsPaginationTraits<DerivedClient>>
  DescribeEnvironmentMembershipsPaginator(const Model::DescribeEnvironmentMembershipsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeEnvironmentMembershipsRequest,
                                             Pagination::DescribeEnvironmentMembershipsPaginationTraits<DerivedClient>>{
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
};
}  // namespace Cloud9
}  // namespace Aws
