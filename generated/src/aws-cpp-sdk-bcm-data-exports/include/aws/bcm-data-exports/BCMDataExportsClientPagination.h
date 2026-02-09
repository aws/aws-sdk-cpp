/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-data-exports/BCMDataExportsClient.h>
#include <aws/bcm-data-exports/model/ListExecutionsPaginationTraits.h>
#include <aws/bcm-data-exports/model/ListExportsPaginationTraits.h>
#include <aws/bcm-data-exports/model/ListTablesPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace BCMDataExports {

using ListExecutionsPaginator = Aws::Utils::Pagination::Paginator<BCMDataExportsClient, Model::ListExecutionsRequest,
                                                                  Pagination::ListExecutionsPaginationTraits<BCMDataExportsClient>>;
using ListExportsPaginator = Aws::Utils::Pagination::Paginator<BCMDataExportsClient, Model::ListExportsRequest,
                                                               Pagination::ListExportsPaginationTraits<BCMDataExportsClient>>;
using ListTablesPaginator = Aws::Utils::Pagination::Paginator<BCMDataExportsClient, Model::ListTablesRequest,
                                                              Pagination::ListTablesPaginationTraits<BCMDataExportsClient>>;

}  // namespace BCMDataExports
}  // namespace Aws
