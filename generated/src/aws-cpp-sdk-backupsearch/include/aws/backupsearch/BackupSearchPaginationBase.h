/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/backupsearch/model/ListSearchJobBackupsPaginationTraits.h>
#include <aws/backupsearch/model/ListSearchJobResultsPaginationTraits.h>
#include <aws/backupsearch/model/ListSearchJobsPaginationTraits.h>
#include <aws/backupsearch/model/ListSearchResultExportJobsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace BackupSearch {

class BackupSearchClient;

template <typename DerivedClient>
class BackupSearchPaginationBase {
 public:
  /**
   * Create a paginator for ListSearchJobBackups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSearchJobBackupsRequest,
                                    Pagination::ListSearchJobBackupsPaginationTraits<DerivedClient>>
  ListSearchJobBackupsPaginator(const Model::ListSearchJobBackupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSearchJobBackupsRequest,
                                             Pagination::ListSearchJobBackupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSearchJobResults operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSearchJobResultsRequest,
                                    Pagination::ListSearchJobResultsPaginationTraits<DerivedClient>>
  ListSearchJobResultsPaginator(const Model::ListSearchJobResultsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSearchJobResultsRequest,
                                             Pagination::ListSearchJobResultsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSearchJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSearchJobsRequest, Pagination::ListSearchJobsPaginationTraits<DerivedClient>>
  ListSearchJobsPaginator(const Model::ListSearchJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSearchJobsRequest,
                                             Pagination::ListSearchJobsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListSearchResultExportJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSearchResultExportJobsRequest,
                                    Pagination::ListSearchResultExportJobsPaginationTraits<DerivedClient>>
  ListSearchResultExportJobsPaginator(const Model::ListSearchResultExportJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSearchResultExportJobsRequest,
                                             Pagination::ListSearchResultExportJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace BackupSearch
}  // namespace Aws
