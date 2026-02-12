/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/AppflowClient.h>
#include <aws/appflow/model/DescribeConnectorProfilesPaginationTraits.h>
#include <aws/appflow/model/DescribeConnectorsPaginationTraits.h>
#include <aws/appflow/model/DescribeFlowExecutionRecordsPaginationTraits.h>
#include <aws/appflow/model/ListConnectorsPaginationTraits.h>
#include <aws/appflow/model/ListFlowsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace Appflow {

using DescribeConnectorProfilesPaginator =
    Aws::Utils::Pagination::Paginator<AppflowClient, Model::DescribeConnectorProfilesRequest,
                                      Pagination::DescribeConnectorProfilesPaginationTraits<AppflowClient>>;
using DescribeConnectorsPaginator = Aws::Utils::Pagination::Paginator<AppflowClient, Model::DescribeConnectorsRequest,
                                                                      Pagination::DescribeConnectorsPaginationTraits<AppflowClient>>;
using DescribeFlowExecutionRecordsPaginator =
    Aws::Utils::Pagination::Paginator<AppflowClient, Model::DescribeFlowExecutionRecordsRequest,
                                      Pagination::DescribeFlowExecutionRecordsPaginationTraits<AppflowClient>>;
using ListConnectorsPaginator = Aws::Utils::Pagination::Paginator<AppflowClient, Model::ListConnectorsRequest,
                                                                  Pagination::ListConnectorsPaginationTraits<AppflowClient>>;
using ListFlowsPaginator =
    Aws::Utils::Pagination::Paginator<AppflowClient, Model::ListFlowsRequest, Pagination::ListFlowsPaginationTraits<AppflowClient>>;

}  // namespace Appflow
}  // namespace Aws
