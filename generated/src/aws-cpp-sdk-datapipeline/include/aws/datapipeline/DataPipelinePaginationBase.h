/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/datapipeline/model/DescribeObjectsPaginationTraits.h>
#include <aws/datapipeline/model/ListPipelinesPaginationTraits.h>
#include <aws/datapipeline/model/QueryObjectsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace DataPipeline {

class DataPipelineClient;

template <typename DerivedClient>
class DataPipelinePaginationBase {
 public:
  /**
   * Create a paginator for DescribeObjects operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeObjectsRequest,
                                    Pagination::DescribeObjectsPaginationTraits<DerivedClient>>
  DescribeObjectsPaginator(const Model::DescribeObjectsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeObjectsRequest,
                                             Pagination::DescribeObjectsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListPipelines operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPipelinesRequest, Pagination::ListPipelinesPaginationTraits<DerivedClient>>
  ListPipelinesPaginator(const Model::ListPipelinesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPipelinesRequest,
                                             Pagination::ListPipelinesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for QueryObjects operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::QueryObjectsRequest, Pagination::QueryObjectsPaginationTraits<DerivedClient>>
  QueryObjectsPaginator(const Model::QueryObjectsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::QueryObjectsRequest,
                                             Pagination::QueryObjectsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }
};
}  // namespace DataPipeline
}  // namespace Aws
