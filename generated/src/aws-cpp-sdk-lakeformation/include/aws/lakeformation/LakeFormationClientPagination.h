/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/lakeformation/LakeFormationClient.h>
#include <aws/lakeformation/model/GetEffectivePermissionsForPathPaginationTraits.h>
#include <aws/lakeformation/model/GetTableObjectsPaginationTraits.h>
#include <aws/lakeformation/model/GetWorkUnitsPaginationTraits.h>
#include <aws/lakeformation/model/ListDataCellsFilterPaginationTraits.h>
#include <aws/lakeformation/model/ListLFTagExpressionsPaginationTraits.h>
#include <aws/lakeformation/model/ListLFTagsPaginationTraits.h>
#include <aws/lakeformation/model/ListLakeFormationOptInsPaginationTraits.h>
#include <aws/lakeformation/model/ListPermissionsPaginationTraits.h>
#include <aws/lakeformation/model/ListResourcesPaginationTraits.h>
#include <aws/lakeformation/model/ListTableStorageOptimizersPaginationTraits.h>
#include <aws/lakeformation/model/ListTransactionsPaginationTraits.h>
#include <aws/lakeformation/model/SearchDatabasesByLFTagsPaginationTraits.h>
#include <aws/lakeformation/model/SearchTablesByLFTagsPaginationTraits.h>

namespace Aws {
namespace LakeFormation {

using GetEffectivePermissionsForPathPaginator =
    Aws::Utils::Pagination::Paginator<LakeFormationClient, Model::GetEffectivePermissionsForPathRequest,
                                      Pagination::GetEffectivePermissionsForPathPaginationTraits<LakeFormationClient>>;
using GetTableObjectsPaginator = Aws::Utils::Pagination::Paginator<LakeFormationClient, Model::GetTableObjectsRequest,
                                                                   Pagination::GetTableObjectsPaginationTraits<LakeFormationClient>>;
using GetWorkUnitsPaginator = Aws::Utils::Pagination::Paginator<LakeFormationClient, Model::GetWorkUnitsRequest,
                                                                Pagination::GetWorkUnitsPaginationTraits<LakeFormationClient>>;
using ListDataCellsFilterPaginator =
    Aws::Utils::Pagination::Paginator<LakeFormationClient, Model::ListDataCellsFilterRequest,
                                      Pagination::ListDataCellsFilterPaginationTraits<LakeFormationClient>>;
using ListLakeFormationOptInsPaginator =
    Aws::Utils::Pagination::Paginator<LakeFormationClient, Model::ListLakeFormationOptInsRequest,
                                      Pagination::ListLakeFormationOptInsPaginationTraits<LakeFormationClient>>;
using ListLFTagExpressionsPaginator =
    Aws::Utils::Pagination::Paginator<LakeFormationClient, Model::ListLFTagExpressionsRequest,
                                      Pagination::ListLFTagExpressionsPaginationTraits<LakeFormationClient>>;
using ListLFTagsPaginator = Aws::Utils::Pagination::Paginator<LakeFormationClient, Model::ListLFTagsRequest,
                                                              Pagination::ListLFTagsPaginationTraits<LakeFormationClient>>;
using ListPermissionsPaginator = Aws::Utils::Pagination::Paginator<LakeFormationClient, Model::ListPermissionsRequest,
                                                                   Pagination::ListPermissionsPaginationTraits<LakeFormationClient>>;
using ListResourcesPaginator = Aws::Utils::Pagination::Paginator<LakeFormationClient, Model::ListResourcesRequest,
                                                                 Pagination::ListResourcesPaginationTraits<LakeFormationClient>>;
using ListTableStorageOptimizersPaginator =
    Aws::Utils::Pagination::Paginator<LakeFormationClient, Model::ListTableStorageOptimizersRequest,
                                      Pagination::ListTableStorageOptimizersPaginationTraits<LakeFormationClient>>;
using ListTransactionsPaginator = Aws::Utils::Pagination::Paginator<LakeFormationClient, Model::ListTransactionsRequest,
                                                                    Pagination::ListTransactionsPaginationTraits<LakeFormationClient>>;
using SearchDatabasesByLFTagsPaginator =
    Aws::Utils::Pagination::Paginator<LakeFormationClient, Model::SearchDatabasesByLFTagsRequest,
                                      Pagination::SearchDatabasesByLFTagsPaginationTraits<LakeFormationClient>>;
using SearchTablesByLFTagsPaginator =
    Aws::Utils::Pagination::Paginator<LakeFormationClient, Model::SearchTablesByLFTagsRequest,
                                      Pagination::SearchTablesByLFTagsPaginationTraits<LakeFormationClient>>;

}  // namespace LakeFormation
}  // namespace Aws
