/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/discovery/model/DescribeAgentsPaginationTraits.h>
#include <aws/discovery/model/DescribeContinuousExportsPaginationTraits.h>
#include <aws/discovery/model/DescribeExportTasksPaginationTraits.h>
#include <aws/discovery/model/DescribeImportTasksPaginationTraits.h>
#include <aws/discovery/model/DescribeTagsPaginationTraits.h>
#include <aws/discovery/model/ListConfigurationsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace ApplicationDiscoveryService {

class ApplicationDiscoveryServiceClient;

template <typename DerivedClient>
class ApplicationDiscoveryServicePaginationBase {
 public:
  /**
   * Create a paginator for DescribeAgents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeAgentsRequest, Pagination::DescribeAgentsPaginationTraits<DerivedClient>>
  DescribeAgentsPaginator(const Model::DescribeAgentsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeAgentsRequest,
                                             Pagination::DescribeAgentsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for DescribeContinuousExports operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeContinuousExportsRequest,
                                    Pagination::DescribeContinuousExportsPaginationTraits<DerivedClient>>
  DescribeContinuousExportsPaginator(const Model::DescribeContinuousExportsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeContinuousExportsRequest,
                                             Pagination::DescribeContinuousExportsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeExportTasks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeExportTasksRequest,
                                    Pagination::DescribeExportTasksPaginationTraits<DerivedClient>>
  DescribeExportTasksPaginator(const Model::DescribeExportTasksRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeExportTasksRequest,
                                             Pagination::DescribeExportTasksPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeImportTasks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeImportTasksRequest,
                                    Pagination::DescribeImportTasksPaginationTraits<DerivedClient>>
  DescribeImportTasksPaginator(const Model::DescribeImportTasksRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeImportTasksRequest,
                                             Pagination::DescribeImportTasksPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeTags operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeTagsRequest, Pagination::DescribeTagsPaginationTraits<DerivedClient>>
  DescribeTagsPaginator(const Model::DescribeTagsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeTagsRequest,
                                             Pagination::DescribeTagsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListConfigurations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConfigurationsRequest,
                                    Pagination::ListConfigurationsPaginationTraits<DerivedClient>>
  ListConfigurationsPaginator(const Model::ListConfigurationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConfigurationsRequest,
                                             Pagination::ListConfigurationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace ApplicationDiscoveryService
}  // namespace Aws
