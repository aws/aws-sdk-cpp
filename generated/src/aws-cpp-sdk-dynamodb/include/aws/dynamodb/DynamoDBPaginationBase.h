/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/dynamodb/model/ListContributorInsightsPaginationTraits.h>
#include <aws/dynamodb/model/ListExportsPaginationTraits.h>
#include <aws/dynamodb/model/ListImportsPaginationTraits.h>
#include <aws/dynamodb/model/ListTablesPaginationTraits.h>
#include <aws/dynamodb/model/QueryPaginationTraits.h>
#include <aws/dynamodb/model/ScanPaginationTraits.h>

#include <memory>

namespace Aws {
namespace DynamoDB {

class DynamoDBClient;

template <typename DerivedClient>
class DynamoDBPaginationBase {
 public:
  /**
   * Create a paginator for ListContributorInsights operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::ListContributorInsightsRequest,
                                        Pagination::ListContributorInsightsPaginationTraits<DerivedClient>>
  ListContributorInsightsPaginator(const Model::ListContributorInsightsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::ListContributorInsightsRequest,
                                                 Pagination::ListContributorInsightsPaginationTraits<DerivedClient>>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for ListExports operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::ListExportsRequest, Pagination::ListExportsPaginationTraits<DerivedClient>>
  ListExportsPaginator(const Model::ListExportsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::ListExportsRequest,
                                                 Pagination::ListExportsPaginationTraits<DerivedClient>>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for ListImports operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::ListImportsRequest, Pagination::ListImportsPaginationTraits<DerivedClient>>
  ListImportsPaginator(const Model::ListImportsRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::ListImportsRequest,
                                                 Pagination::ListImportsPaginationTraits<DerivedClient>>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for ListTables operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::ListTablesRequest, Pagination::ListTablesPaginationTraits<DerivedClient>>
  ListTablesPaginator(const Model::ListTablesRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::ListTablesRequest,
                                                 Pagination::ListTablesPaginationTraits<DerivedClient>>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for Query operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::QueryRequest, Pagination::QueryPaginationTraits<DerivedClient>>
  QueryPaginator(const Model::QueryRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::QueryRequest, Pagination::QueryPaginationTraits<DerivedClient>>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }

  /**
   * Create a paginator for Scan operation
   */
  Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::ScanRequest, Pagination::ScanPaginationTraits<DerivedClient>> ScanPaginator(
      const Model::ScanRequest& request) {
    return Aws::Utils::Pagination::PagePaginator<DerivedClient, Model::ScanRequest, Pagination::ScanPaginationTraits<DerivedClient>>{
        std::shared_ptr<DerivedClient>(static_cast<DerivedClient*>(this), [](DerivedClient*) {}), request};
  }
};
}  // namespace DynamoDB
}  // namespace Aws
