/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

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

#include <memory>

namespace Aws {
namespace Athena {

class AthenaClient;

template <typename DerivedClient>
class AthenaPaginationBase {
 public:
  /**
   * Create a paginator for GetQueryResults operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetQueryResultsRequest,
                                    Pagination::GetQueryResultsPaginationTraits<DerivedClient>>
  GetQueryResultsPaginator(const Model::GetQueryResultsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetQueryResultsRequest,
                                             Pagination::GetQueryResultsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListApplicationDPUSizes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApplicationDPUSizesRequest,
                                    Pagination::ListApplicationDPUSizesPaginationTraits<DerivedClient>>
  ListApplicationDPUSizesPaginator(const Model::ListApplicationDPUSizesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApplicationDPUSizesRequest,
                                             Pagination::ListApplicationDPUSizesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCalculationExecutions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCalculationExecutionsRequest,
                                    Pagination::ListCalculationExecutionsPaginationTraits<DerivedClient>>
  ListCalculationExecutionsPaginator(const Model::ListCalculationExecutionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCalculationExecutionsRequest,
                                             Pagination::ListCalculationExecutionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCapacityReservations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCapacityReservationsRequest,
                                    Pagination::ListCapacityReservationsPaginationTraits<DerivedClient>>
  ListCapacityReservationsPaginator(const Model::ListCapacityReservationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCapacityReservationsRequest,
                                             Pagination::ListCapacityReservationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDatabases operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDatabasesRequest, Pagination::ListDatabasesPaginationTraits<DerivedClient>>
  ListDatabasesPaginator(const Model::ListDatabasesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDatabasesRequest,
                                             Pagination::ListDatabasesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListDataCatalogs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataCatalogsRequest,
                                    Pagination::ListDataCatalogsPaginationTraits<DerivedClient>>
  ListDataCatalogsPaginator(const Model::ListDataCatalogsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataCatalogsRequest,
                                             Pagination::ListDataCatalogsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListEngineVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEngineVersionsRequest,
                                    Pagination::ListEngineVersionsPaginationTraits<DerivedClient>>
  ListEngineVersionsPaginator(const Model::ListEngineVersionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEngineVersionsRequest,
                                             Pagination::ListEngineVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListExecutors operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListExecutorsRequest, Pagination::ListExecutorsPaginationTraits<DerivedClient>>
  ListExecutorsPaginator(const Model::ListExecutorsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListExecutorsRequest,
                                             Pagination::ListExecutorsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListNamedQueries operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNamedQueriesRequest,
                                    Pagination::ListNamedQueriesPaginationTraits<DerivedClient>>
  ListNamedQueriesPaginator(const Model::ListNamedQueriesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNamedQueriesRequest,
                                             Pagination::ListNamedQueriesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListPreparedStatements operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPreparedStatementsRequest,
                                    Pagination::ListPreparedStatementsPaginationTraits<DerivedClient>>
  ListPreparedStatementsPaginator(const Model::ListPreparedStatementsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPreparedStatementsRequest,
                                             Pagination::ListPreparedStatementsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListQueryExecutions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListQueryExecutionsRequest,
                                    Pagination::ListQueryExecutionsPaginationTraits<DerivedClient>>
  ListQueryExecutionsPaginator(const Model::ListQueryExecutionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListQueryExecutionsRequest,
                                             Pagination::ListQueryExecutionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSessions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSessionsRequest, Pagination::ListSessionsPaginationTraits<DerivedClient>>
  ListSessionsPaginator(const Model::ListSessionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSessionsRequest,
                                             Pagination::ListSessionsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListTableMetadata operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTableMetadataRequest,
                                    Pagination::ListTableMetadataPaginationTraits<DerivedClient>>
  ListTableMetadataPaginator(const Model::ListTableMetadataRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTableMetadataRequest,
                                             Pagination::ListTableMetadataPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTagsForResource operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTagsForResourceRequest,
                                    Pagination::ListTagsForResourcePaginationTraits<DerivedClient>>
  ListTagsForResourcePaginator(const Model::ListTagsForResourceRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTagsForResourceRequest,
                                             Pagination::ListTagsForResourcePaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListWorkGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkGroupsRequest, Pagination::ListWorkGroupsPaginationTraits<DerivedClient>>
  ListWorkGroupsPaginator(const Model::ListWorkGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkGroupsRequest,
                                             Pagination::ListWorkGroupsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }
};
}  // namespace Athena
}  // namespace Aws
