/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backupsearch/BackupSearchClient.h>
#include <aws/backupsearch/model/ListSearchJobBackupsPaginationTraits.h>
#include <aws/backupsearch/model/ListSearchJobResultsPaginationTraits.h>
#include <aws/backupsearch/model/ListSearchJobsPaginationTraits.h>
#include <aws/backupsearch/model/ListSearchResultExportJobsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace BackupSearch {

using ListSearchJobBackupsPaginator =
    Aws::Utils::Pagination::Paginator<BackupSearchClient, Model::ListSearchJobBackupsRequest,
                                      Pagination::ListSearchJobBackupsPaginationTraits<BackupSearchClient>>;
using ListSearchJobResultsPaginator =
    Aws::Utils::Pagination::Paginator<BackupSearchClient, Model::ListSearchJobResultsRequest,
                                      Pagination::ListSearchJobResultsPaginationTraits<BackupSearchClient>>;
using ListSearchJobsPaginator = Aws::Utils::Pagination::Paginator<BackupSearchClient, Model::ListSearchJobsRequest,
                                                                  Pagination::ListSearchJobsPaginationTraits<BackupSearchClient>>;
using ListSearchResultExportJobsPaginator =
    Aws::Utils::Pagination::Paginator<BackupSearchClient, Model::ListSearchResultExportJobsRequest,
                                      Pagination::ListSearchResultExportJobsPaginationTraits<BackupSearchClient>>;

}  // namespace BackupSearch
}  // namespace Aws
