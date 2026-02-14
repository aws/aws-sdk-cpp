/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/datapipeline/DataPipelineClient.h>
#include <aws/datapipeline/model/DescribeObjectsPaginationTraits.h>
#include <aws/datapipeline/model/ListPipelinesPaginationTraits.h>
#include <aws/datapipeline/model/QueryObjectsPaginationTraits.h>

namespace Aws {
namespace DataPipeline {

using DescribeObjectsPaginator = Aws::Utils::Pagination::Paginator<DataPipelineClient, Model::DescribeObjectsRequest,
                                                                   Pagination::DescribeObjectsPaginationTraits<DataPipelineClient>>;
using ListPipelinesPaginator = Aws::Utils::Pagination::Paginator<DataPipelineClient, Model::ListPipelinesRequest,
                                                                 Pagination::ListPipelinesPaginationTraits<DataPipelineClient>>;
using QueryObjectsPaginator = Aws::Utils::Pagination::Paginator<DataPipelineClient, Model::QueryObjectsRequest,
                                                                Pagination::QueryObjectsPaginationTraits<DataPipelineClient>>;

}  // namespace DataPipeline
}  // namespace Aws
