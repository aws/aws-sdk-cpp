/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/cloud9/model/DescribeEnvironmentMembershipsPaginationTraits.h>
#include <aws/cloud9/model/ListEnvironmentsPaginationTraits.h>
#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace Cloud9 {

template <typename DerivedClient>
class Cloud9PaginationBase {
 public:
  /**
   * Create a paginator for DescribeEnvironmentMemberships operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeEnvironmentMembershipsRequest,
                                    Pagination::DescribeEnvironmentMembershipsPaginationTraits<DerivedClient>>
  DescribeEnvironmentMembershipsPaginator(const Model::DescribeEnvironmentMembershipsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
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
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEnvironmentsRequest,
                                             Pagination::ListEnvironmentsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }
};
}  // namespace Cloud9
}  // namespace Aws
