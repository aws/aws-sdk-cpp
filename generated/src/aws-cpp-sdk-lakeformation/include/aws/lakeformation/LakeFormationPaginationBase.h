/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
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

#include <memory>

namespace Aws {
namespace LakeFormation {

class LakeFormationClient;

template <typename DerivedClient>
class LakeFormationPaginationBase {
 public:
  /**
   * Create a paginator for GetEffectivePermissionsForPath operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetEffectivePermissionsForPathRequest,
                                    Pagination::GetEffectivePermissionsForPathPaginationTraits<DerivedClient>>
  GetEffectivePermissionsForPathPaginator(const Model::GetEffectivePermissionsForPathRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetEffectivePermissionsForPathRequest,
                                             Pagination::GetEffectivePermissionsForPathPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetTableObjects operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetTableObjectsRequest,
                                    Pagination::GetTableObjectsPaginationTraits<DerivedClient>>
  GetTableObjectsPaginator(const Model::GetTableObjectsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetTableObjectsRequest,
                                             Pagination::GetTableObjectsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for GetWorkUnits operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetWorkUnitsRequest, Pagination::GetWorkUnitsPaginationTraits<DerivedClient>>
  GetWorkUnitsPaginator(const Model::GetWorkUnitsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetWorkUnitsRequest,
                                             Pagination::GetWorkUnitsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListDataCellsFilter operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataCellsFilterRequest,
                                    Pagination::ListDataCellsFilterPaginationTraits<DerivedClient>>
  ListDataCellsFilterPaginator(const Model::ListDataCellsFilterRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataCellsFilterRequest,
                                             Pagination::ListDataCellsFilterPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListLakeFormationOptIns operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLakeFormationOptInsRequest,
                                    Pagination::ListLakeFormationOptInsPaginationTraits<DerivedClient>>
  ListLakeFormationOptInsPaginator(const Model::ListLakeFormationOptInsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLakeFormationOptInsRequest,
                                             Pagination::ListLakeFormationOptInsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListLFTagExpressions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLFTagExpressionsRequest,
                                    Pagination::ListLFTagExpressionsPaginationTraits<DerivedClient>>
  ListLFTagExpressionsPaginator(const Model::ListLFTagExpressionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLFTagExpressionsRequest,
                                             Pagination::ListLFTagExpressionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListLFTags operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLFTagsRequest, Pagination::ListLFTagsPaginationTraits<DerivedClient>>
  ListLFTagsPaginator(const Model::ListLFTagsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLFTagsRequest,
                                             Pagination::ListLFTagsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for ListPermissions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPermissionsRequest,
                                    Pagination::ListPermissionsPaginationTraits<DerivedClient>>
  ListPermissionsPaginator(const Model::ListPermissionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPermissionsRequest,
                                             Pagination::ListPermissionsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListResources operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourcesRequest, Pagination::ListResourcesPaginationTraits<DerivedClient>>
  ListResourcesPaginator(const Model::ListResourcesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourcesRequest,
                                             Pagination::ListResourcesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListTableStorageOptimizers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTableStorageOptimizersRequest,
                                    Pagination::ListTableStorageOptimizersPaginationTraits<DerivedClient>>
  ListTableStorageOptimizersPaginator(const Model::ListTableStorageOptimizersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTableStorageOptimizersRequest,
                                             Pagination::ListTableStorageOptimizersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTransactions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTransactionsRequest,
                                    Pagination::ListTransactionsPaginationTraits<DerivedClient>>
  ListTransactionsPaginator(const Model::ListTransactionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTransactionsRequest,
                                             Pagination::ListTransactionsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for SearchDatabasesByLFTags operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchDatabasesByLFTagsRequest,
                                    Pagination::SearchDatabasesByLFTagsPaginationTraits<DerivedClient>>
  SearchDatabasesByLFTagsPaginator(const Model::SearchDatabasesByLFTagsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchDatabasesByLFTagsRequest,
                                             Pagination::SearchDatabasesByLFTagsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for SearchTablesByLFTags operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchTablesByLFTagsRequest,
                                    Pagination::SearchTablesByLFTagsPaginationTraits<DerivedClient>>
  SearchTablesByLFTagsPaginator(const Model::SearchTablesByLFTagsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchTablesByLFTagsRequest,
                                             Pagination::SearchTablesByLFTagsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace LakeFormation
}  // namespace Aws
