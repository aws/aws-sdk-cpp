/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/dynamodb/DynamoDBClient.h>
#include <aws/dynamodb/model/ListContributorInsightsPaginationTraits.h>
#include <aws/dynamodb/model/ListExportsPaginationTraits.h>
#include <aws/dynamodb/model/ListImportsPaginationTraits.h>
#include <aws/dynamodb/model/ListTablesPaginationTraits.h>
#include <aws/dynamodb/model/QueryPaginationTraits.h>
#include <aws/dynamodb/model/ScanPaginationTraits.h>

namespace Aws {
namespace DynamoDB {

using ListContributorInsightsPaginator = Aws::Utils::Pagination::PagePaginator<DynamoDBClient, Model::ListContributorInsightsRequest,
                                                                               Pagination::ListContributorInsightsPaginationTraits>;
using ListExportsPaginator =
    Aws::Utils::Pagination::PagePaginator<DynamoDBClient, Model::ListExportsRequest, Pagination::ListExportsPaginationTraits>;
using ListImportsPaginator =
    Aws::Utils::Pagination::PagePaginator<DynamoDBClient, Model::ListImportsRequest, Pagination::ListImportsPaginationTraits>;
using ListTablesPaginator =
    Aws::Utils::Pagination::PagePaginator<DynamoDBClient, Model::ListTablesRequest, Pagination::ListTablesPaginationTraits>;
using QueryPaginator = Aws::Utils::Pagination::PagePaginator<DynamoDBClient, Model::QueryRequest, Pagination::QueryPaginationTraits>;
using ScanPaginator = Aws::Utils::Pagination::PagePaginator<DynamoDBClient, Model::ScanRequest, Pagination::ScanPaginationTraits>;

}  // namespace DynamoDB
}  // namespace Aws
