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

using ListContributorInsightsPaginator =
    Aws::Utils::Pagination::Paginator<DynamoDBClient, Model::ListContributorInsightsRequest,
                                      Pagination::ListContributorInsightsPaginationTraits<DynamoDBClient>>;
using ListExportsPaginator =
    Aws::Utils::Pagination::Paginator<DynamoDBClient, Model::ListExportsRequest, Pagination::ListExportsPaginationTraits<DynamoDBClient>>;
using ListImportsPaginator =
    Aws::Utils::Pagination::Paginator<DynamoDBClient, Model::ListImportsRequest, Pagination::ListImportsPaginationTraits<DynamoDBClient>>;
using ListTablesPaginator =
    Aws::Utils::Pagination::Paginator<DynamoDBClient, Model::ListTablesRequest, Pagination::ListTablesPaginationTraits<DynamoDBClient>>;
using QueryPaginator =
    Aws::Utils::Pagination::Paginator<DynamoDBClient, Model::QueryRequest, Pagination::QueryPaginationTraits<DynamoDBClient>>;
using ScanPaginator =
    Aws::Utils::Pagination::Paginator<DynamoDBClient, Model::ScanRequest, Pagination::ScanPaginationTraits<DynamoDBClient>>;

}  // namespace DynamoDB
}  // namespace Aws
