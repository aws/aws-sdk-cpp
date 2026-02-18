/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

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

#include <memory>

namespace Aws {
namespace Batch {

class BatchClient;

template <typename DerivedClient>
class BatchPaginationBase {
 public:
  /**
   * Create a paginator for DescribeComputeEnvironments operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeComputeEnvironmentsRequest,
                                    Pagination::DescribeComputeEnvironmentsPaginationTraits<DerivedClient>>
  DescribeComputeEnvironmentsPaginator(const Model::DescribeComputeEnvironmentsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeComputeEnvironmentsRequest,
                                             Pagination::DescribeComputeEnvironmentsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeJobDefinitions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeJobDefinitionsRequest,
                                    Pagination::DescribeJobDefinitionsPaginationTraits<DerivedClient>>
  DescribeJobDefinitionsPaginator(const Model::DescribeJobDefinitionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeJobDefinitionsRequest,
                                             Pagination::DescribeJobDefinitionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeJobQueues operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeJobQueuesRequest,
                                    Pagination::DescribeJobQueuesPaginationTraits<DerivedClient>>
  DescribeJobQueuesPaginator(const Model::DescribeJobQueuesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeJobQueuesRequest,
                                             Pagination::DescribeJobQueuesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeServiceEnvironments operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeServiceEnvironmentsRequest,
                                    Pagination::DescribeServiceEnvironmentsPaginationTraits<DerivedClient>>
  DescribeServiceEnvironmentsPaginator(const Model::DescribeServiceEnvironmentsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeServiceEnvironmentsRequest,
                                             Pagination::DescribeServiceEnvironmentsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListConsumableResources operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConsumableResourcesRequest,
                                    Pagination::ListConsumableResourcesPaginationTraits<DerivedClient>>
  ListConsumableResourcesPaginator(const Model::ListConsumableResourcesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConsumableResourcesRequest,
                                             Pagination::ListConsumableResourcesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListJobsRequest, Pagination::ListJobsPaginationTraits<DerivedClient>>
  ListJobsPaginator(const Model::ListJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListJobsRequest, Pagination::ListJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListJobsByConsumableResource operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListJobsByConsumableResourceRequest,
                                    Pagination::ListJobsByConsumableResourcePaginationTraits<DerivedClient>>
  ListJobsByConsumableResourcePaginator(const Model::ListJobsByConsumableResourceRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListJobsByConsumableResourceRequest,
                                             Pagination::ListJobsByConsumableResourcePaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSchedulingPolicies operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSchedulingPoliciesRequest,
                                    Pagination::ListSchedulingPoliciesPaginationTraits<DerivedClient>>
  ListSchedulingPoliciesPaginator(const Model::ListSchedulingPoliciesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSchedulingPoliciesRequest,
                                             Pagination::ListSchedulingPoliciesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListServiceJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServiceJobsRequest,
                                    Pagination::ListServiceJobsPaginationTraits<DerivedClient>>
  ListServiceJobsPaginator(const Model::ListServiceJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServiceJobsRequest,
                                             Pagination::ListServiceJobsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }
};
}  // namespace Batch
}  // namespace Aws
