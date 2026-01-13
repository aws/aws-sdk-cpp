/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/AthenaClient.h>
#include <aws/athena/model/GetQueryResultsPaginationTraits.h>
#include <aws/athena/model/ListApplicationDPUSizesPaginationTraits.h>
#include <aws/athena/model/ListCalculationExecutionsPaginationTraits.h>
#include <aws/athena/model/ListCapacityReservationsPaginationTraits.h>
#include <aws/athena/model/ListDataCatalogsPaginationTraits.h>
#include <aws/athena/model/ListDatabasesPaginationTraits.h>
#include <aws/athena/model/ListEngineVersionsPaginationTraits.h>
#include <aws/athena/model/ListExecutorsPaginationTraits.h>
#include <aws/athena/model/ListNamedQueriesPaginationTraits.h>
#include <aws/athena/model/ListPreparedStatementsPaginationTraits.h>
#include <aws/athena/model/ListQueryExecutionsPaginationTraits.h>
#include <aws/athena/model/ListSessionsPaginationTraits.h>
#include <aws/athena/model/ListTableMetadataPaginationTraits.h>
#include <aws/athena/model/ListTagsForResourcePaginationTraits.h>
#include <aws/athena/model/ListWorkGroupsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace Athena {

using GetQueryResultsPaginator = Aws::Utils::Pagination::Paginator<AthenaClient, Model::GetQueryResultsRequest,
                                                                   Pagination::GetQueryResultsPaginationTraits<AthenaClient>>;
using ListApplicationDPUSizesPaginator =
    Aws::Utils::Pagination::Paginator<AthenaClient, Model::ListApplicationDPUSizesRequest,
                                      Pagination::ListApplicationDPUSizesPaginationTraits<AthenaClient>>;
using ListCalculationExecutionsPaginator =
    Aws::Utils::Pagination::Paginator<AthenaClient, Model::ListCalculationExecutionsRequest,
                                      Pagination::ListCalculationExecutionsPaginationTraits<AthenaClient>>;
using ListCapacityReservationsPaginator =
    Aws::Utils::Pagination::Paginator<AthenaClient, Model::ListCapacityReservationsRequest,
                                      Pagination::ListCapacityReservationsPaginationTraits<AthenaClient>>;
using ListDatabasesPaginator =
    Aws::Utils::Pagination::Paginator<AthenaClient, Model::ListDatabasesRequest, Pagination::ListDatabasesPaginationTraits<AthenaClient>>;
using ListDataCatalogsPaginator = Aws::Utils::Pagination::Paginator<AthenaClient, Model::ListDataCatalogsRequest,
                                                                    Pagination::ListDataCatalogsPaginationTraits<AthenaClient>>;
using ListEngineVersionsPaginator = Aws::Utils::Pagination::Paginator<AthenaClient, Model::ListEngineVersionsRequest,
                                                                      Pagination::ListEngineVersionsPaginationTraits<AthenaClient>>;
using ListExecutorsPaginator =
    Aws::Utils::Pagination::Paginator<AthenaClient, Model::ListExecutorsRequest, Pagination::ListExecutorsPaginationTraits<AthenaClient>>;
using ListNamedQueriesPaginator = Aws::Utils::Pagination::Paginator<AthenaClient, Model::ListNamedQueriesRequest,
                                                                    Pagination::ListNamedQueriesPaginationTraits<AthenaClient>>;
using ListPreparedStatementsPaginator = Aws::Utils::Pagination::Paginator<AthenaClient, Model::ListPreparedStatementsRequest,
                                                                          Pagination::ListPreparedStatementsPaginationTraits<AthenaClient>>;
using ListQueryExecutionsPaginator = Aws::Utils::Pagination::Paginator<AthenaClient, Model::ListQueryExecutionsRequest,
                                                                       Pagination::ListQueryExecutionsPaginationTraits<AthenaClient>>;
using ListSessionsPaginator =
    Aws::Utils::Pagination::Paginator<AthenaClient, Model::ListSessionsRequest, Pagination::ListSessionsPaginationTraits<AthenaClient>>;
using ListTableMetadataPaginator = Aws::Utils::Pagination::Paginator<AthenaClient, Model::ListTableMetadataRequest,
                                                                     Pagination::ListTableMetadataPaginationTraits<AthenaClient>>;
using ListTagsForResourcePaginator = Aws::Utils::Pagination::Paginator<AthenaClient, Model::ListTagsForResourceRequest,
                                                                       Pagination::ListTagsForResourcePaginationTraits<AthenaClient>>;
using ListWorkGroupsPaginator =
    Aws::Utils::Pagination::Paginator<AthenaClient, Model::ListWorkGroupsRequest, Pagination::ListWorkGroupsPaginationTraits<AthenaClient>>;

}  // namespace Athena
}  // namespace Aws
