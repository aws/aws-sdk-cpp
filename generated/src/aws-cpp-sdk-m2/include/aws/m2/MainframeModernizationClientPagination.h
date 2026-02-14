/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/m2/MainframeModernizationClient.h>
#include <aws/m2/model/ListApplicationVersionsPaginationTraits.h>
#include <aws/m2/model/ListApplicationsPaginationTraits.h>
#include <aws/m2/model/ListBatchJobDefinitionsPaginationTraits.h>
#include <aws/m2/model/ListBatchJobExecutionsPaginationTraits.h>
#include <aws/m2/model/ListDataSetExportHistoryPaginationTraits.h>
#include <aws/m2/model/ListDataSetImportHistoryPaginationTraits.h>
#include <aws/m2/model/ListDataSetsPaginationTraits.h>
#include <aws/m2/model/ListDeploymentsPaginationTraits.h>
#include <aws/m2/model/ListEngineVersionsPaginationTraits.h>
#include <aws/m2/model/ListEnvironmentsPaginationTraits.h>

namespace Aws {
namespace MainframeModernization {

using ListApplicationsPaginator =
    Aws::Utils::Pagination::Paginator<MainframeModernizationClient, Model::ListApplicationsRequest,
                                      Pagination::ListApplicationsPaginationTraits<MainframeModernizationClient>>;
using ListApplicationVersionsPaginator =
    Aws::Utils::Pagination::Paginator<MainframeModernizationClient, Model::ListApplicationVersionsRequest,
                                      Pagination::ListApplicationVersionsPaginationTraits<MainframeModernizationClient>>;
using ListBatchJobDefinitionsPaginator =
    Aws::Utils::Pagination::Paginator<MainframeModernizationClient, Model::ListBatchJobDefinitionsRequest,
                                      Pagination::ListBatchJobDefinitionsPaginationTraits<MainframeModernizationClient>>;
using ListBatchJobExecutionsPaginator =
    Aws::Utils::Pagination::Paginator<MainframeModernizationClient, Model::ListBatchJobExecutionsRequest,
                                      Pagination::ListBatchJobExecutionsPaginationTraits<MainframeModernizationClient>>;
using ListDataSetExportHistoryPaginator =
    Aws::Utils::Pagination::Paginator<MainframeModernizationClient, Model::ListDataSetExportHistoryRequest,
                                      Pagination::ListDataSetExportHistoryPaginationTraits<MainframeModernizationClient>>;
using ListDataSetImportHistoryPaginator =
    Aws::Utils::Pagination::Paginator<MainframeModernizationClient, Model::ListDataSetImportHistoryRequest,
                                      Pagination::ListDataSetImportHistoryPaginationTraits<MainframeModernizationClient>>;
using ListDataSetsPaginator = Aws::Utils::Pagination::Paginator<MainframeModernizationClient, Model::ListDataSetsRequest,
                                                                Pagination::ListDataSetsPaginationTraits<MainframeModernizationClient>>;
using ListDeploymentsPaginator =
    Aws::Utils::Pagination::Paginator<MainframeModernizationClient, Model::ListDeploymentsRequest,
                                      Pagination::ListDeploymentsPaginationTraits<MainframeModernizationClient>>;
using ListEngineVersionsPaginator =
    Aws::Utils::Pagination::Paginator<MainframeModernizationClient, Model::ListEngineVersionsRequest,
                                      Pagination::ListEngineVersionsPaginationTraits<MainframeModernizationClient>>;
using ListEnvironmentsPaginator =
    Aws::Utils::Pagination::Paginator<MainframeModernizationClient, Model::ListEnvironmentsRequest,
                                      Pagination::ListEnvironmentsPaginationTraits<MainframeModernizationClient>>;

}  // namespace MainframeModernization
}  // namespace Aws
