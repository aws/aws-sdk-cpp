/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/BatchClient.h>
#include <aws/batch/model/DescribeComputeEnvironmentsPaginationTraits.h>
#include <aws/batch/model/DescribeJobDefinitionsPaginationTraits.h>
#include <aws/batch/model/DescribeJobQueuesPaginationTraits.h>
#include <aws/batch/model/DescribeServiceEnvironmentsPaginationTraits.h>
#include <aws/batch/model/ListConsumableResourcesPaginationTraits.h>
#include <aws/batch/model/ListJobsByConsumableResourcePaginationTraits.h>
#include <aws/batch/model/ListJobsPaginationTraits.h>
#include <aws/batch/model/ListSchedulingPoliciesPaginationTraits.h>
#include <aws/batch/model/ListServiceJobsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace Batch {

using DescribeComputeEnvironmentsPaginator =
    Aws::Utils::Pagination::Paginator<BatchClient, Model::DescribeComputeEnvironmentsRequest,
                                      Pagination::DescribeComputeEnvironmentsPaginationTraits<BatchClient>>;
using DescribeJobDefinitionsPaginator = Aws::Utils::Pagination::Paginator<BatchClient, Model::DescribeJobDefinitionsRequest,
                                                                          Pagination::DescribeJobDefinitionsPaginationTraits<BatchClient>>;
using DescribeJobQueuesPaginator = Aws::Utils::Pagination::Paginator<BatchClient, Model::DescribeJobQueuesRequest,
                                                                     Pagination::DescribeJobQueuesPaginationTraits<BatchClient>>;
using DescribeServiceEnvironmentsPaginator =
    Aws::Utils::Pagination::Paginator<BatchClient, Model::DescribeServiceEnvironmentsRequest,
                                      Pagination::DescribeServiceEnvironmentsPaginationTraits<BatchClient>>;
using ListConsumableResourcesPaginator =
    Aws::Utils::Pagination::Paginator<BatchClient, Model::ListConsumableResourcesRequest,
                                      Pagination::ListConsumableResourcesPaginationTraits<BatchClient>>;
using ListJobsPaginator =
    Aws::Utils::Pagination::Paginator<BatchClient, Model::ListJobsRequest, Pagination::ListJobsPaginationTraits<BatchClient>>;
using ListJobsByConsumableResourcePaginator =
    Aws::Utils::Pagination::Paginator<BatchClient, Model::ListJobsByConsumableResourceRequest,
                                      Pagination::ListJobsByConsumableResourcePaginationTraits<BatchClient>>;
using ListSchedulingPoliciesPaginator = Aws::Utils::Pagination::Paginator<BatchClient, Model::ListSchedulingPoliciesRequest,
                                                                          Pagination::ListSchedulingPoliciesPaginationTraits<BatchClient>>;
using ListServiceJobsPaginator =
    Aws::Utils::Pagination::Paginator<BatchClient, Model::ListServiceJobsRequest, Pagination::ListServiceJobsPaginationTraits<BatchClient>>;

}  // namespace Batch
}  // namespace Aws
