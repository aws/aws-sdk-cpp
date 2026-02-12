/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/elasticbeanstalk/ElasticBeanstalkClient.h>
#include <aws/elasticbeanstalk/model/DescribeEnvironmentManagedActionHistoryPaginationTraits.h>
#include <aws/elasticbeanstalk/model/DescribeEventsPaginationTraits.h>
#include <aws/elasticbeanstalk/model/ListPlatformBranchesPaginationTraits.h>
#include <aws/elasticbeanstalk/model/ListPlatformVersionsPaginationTraits.h>

namespace Aws {
namespace ElasticBeanstalk {

using DescribeEnvironmentManagedActionHistoryPaginator =
    Aws::Utils::Pagination::Paginator<ElasticBeanstalkClient, Model::DescribeEnvironmentManagedActionHistoryRequest,
                                      Pagination::DescribeEnvironmentManagedActionHistoryPaginationTraits<ElasticBeanstalkClient>>;
using DescribeEventsPaginator = Aws::Utils::Pagination::Paginator<ElasticBeanstalkClient, Model::DescribeEventsRequest,
                                                                  Pagination::DescribeEventsPaginationTraits<ElasticBeanstalkClient>>;
using ListPlatformBranchesPaginator =
    Aws::Utils::Pagination::Paginator<ElasticBeanstalkClient, Model::ListPlatformBranchesRequest,
                                      Pagination::ListPlatformBranchesPaginationTraits<ElasticBeanstalkClient>>;
using ListPlatformVersionsPaginator =
    Aws::Utils::Pagination::Paginator<ElasticBeanstalkClient, Model::ListPlatformVersionsRequest,
                                      Pagination::ListPlatformVersionsPaginationTraits<ElasticBeanstalkClient>>;

}  // namespace ElasticBeanstalk
}  // namespace Aws
