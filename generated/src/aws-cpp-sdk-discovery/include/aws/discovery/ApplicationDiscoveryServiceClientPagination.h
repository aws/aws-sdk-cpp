/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/discovery/ApplicationDiscoveryServiceClient.h>
#include <aws/discovery/model/DescribeAgentsPaginationTraits.h>
#include <aws/discovery/model/DescribeContinuousExportsPaginationTraits.h>
#include <aws/discovery/model/DescribeExportTasksPaginationTraits.h>
#include <aws/discovery/model/DescribeImportTasksPaginationTraits.h>
#include <aws/discovery/model/DescribeTagsPaginationTraits.h>
#include <aws/discovery/model/ListConfigurationsPaginationTraits.h>

namespace Aws {
namespace ApplicationDiscoveryService {

using DescribeAgentsPaginator =
    Aws::Utils::Pagination::Paginator<ApplicationDiscoveryServiceClient, Model::DescribeAgentsRequest,
                                      Pagination::DescribeAgentsPaginationTraits<ApplicationDiscoveryServiceClient>>;
using DescribeContinuousExportsPaginator =
    Aws::Utils::Pagination::Paginator<ApplicationDiscoveryServiceClient, Model::DescribeContinuousExportsRequest,
                                      Pagination::DescribeContinuousExportsPaginationTraits<ApplicationDiscoveryServiceClient>>;
using DescribeExportTasksPaginator =
    Aws::Utils::Pagination::Paginator<ApplicationDiscoveryServiceClient, Model::DescribeExportTasksRequest,
                                      Pagination::DescribeExportTasksPaginationTraits<ApplicationDiscoveryServiceClient>>;
using DescribeImportTasksPaginator =
    Aws::Utils::Pagination::Paginator<ApplicationDiscoveryServiceClient, Model::DescribeImportTasksRequest,
                                      Pagination::DescribeImportTasksPaginationTraits<ApplicationDiscoveryServiceClient>>;
using DescribeTagsPaginator =
    Aws::Utils::Pagination::Paginator<ApplicationDiscoveryServiceClient, Model::DescribeTagsRequest,
                                      Pagination::DescribeTagsPaginationTraits<ApplicationDiscoveryServiceClient>>;
using ListConfigurationsPaginator =
    Aws::Utils::Pagination::Paginator<ApplicationDiscoveryServiceClient, Model::ListConfigurationsRequest,
                                      Pagination::ListConfigurationsPaginationTraits<ApplicationDiscoveryServiceClient>>;

}  // namespace ApplicationDiscoveryService
}  // namespace Aws
