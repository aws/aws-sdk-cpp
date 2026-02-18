/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/elasticbeanstalk/model/DescribeEnvironmentManagedActionHistoryPaginationTraits.h>
#include <aws/elasticbeanstalk/model/DescribeEventsPaginationTraits.h>
#include <aws/elasticbeanstalk/model/ListPlatformBranchesPaginationTraits.h>
#include <aws/elasticbeanstalk/model/ListPlatformVersionsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace ElasticBeanstalk {

class ElasticBeanstalkClient;

template <typename DerivedClient>
class ElasticBeanstalkPaginationBase {
 public:
  /**
   * Create a paginator for DescribeEnvironmentManagedActionHistory operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeEnvironmentManagedActionHistoryRequest,
                                    Pagination::DescribeEnvironmentManagedActionHistoryPaginationTraits<DerivedClient>>
  DescribeEnvironmentManagedActionHistoryPaginator(const Model::DescribeEnvironmentManagedActionHistoryRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeEnvironmentManagedActionHistoryRequest,
                                             Pagination::DescribeEnvironmentManagedActionHistoryPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeEvents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeEventsRequest, Pagination::DescribeEventsPaginationTraits<DerivedClient>>
  DescribeEventsPaginator(const Model::DescribeEventsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeEventsRequest,
                                             Pagination::DescribeEventsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListPlatformBranches operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPlatformBranchesRequest,
                                    Pagination::ListPlatformBranchesPaginationTraits<DerivedClient>>
  ListPlatformBranchesPaginator(const Model::ListPlatformBranchesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPlatformBranchesRequest,
                                             Pagination::ListPlatformBranchesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPlatformVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPlatformVersionsRequest,
                                    Pagination::ListPlatformVersionsPaginationTraits<DerivedClient>>
  ListPlatformVersionsPaginator(const Model::ListPlatformVersionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPlatformVersionsRequest,
                                             Pagination::ListPlatformVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace ElasticBeanstalk
}  // namespace Aws
