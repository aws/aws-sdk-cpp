/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/healthlake/model/ListFHIRDatastoresPaginationTraits.h>
#include <aws/healthlake/model/ListFHIRExportJobsPaginationTraits.h>
#include <aws/healthlake/model/ListFHIRImportJobsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace HealthLake {

class HealthLakeClient;

template <typename DerivedClient>
class HealthLakePaginationBase {
 public:
  /**
   * Create a paginator for ListFHIRDatastores operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFHIRDatastoresRequest,
                                    Pagination::ListFHIRDatastoresPaginationTraits<DerivedClient>>
  ListFHIRDatastoresPaginator(const Model::ListFHIRDatastoresRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFHIRDatastoresRequest,
                                             Pagination::ListFHIRDatastoresPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListFHIRExportJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFHIRExportJobsRequest,
                                    Pagination::ListFHIRExportJobsPaginationTraits<DerivedClient>>
  ListFHIRExportJobsPaginator(const Model::ListFHIRExportJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFHIRExportJobsRequest,
                                             Pagination::ListFHIRExportJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListFHIRImportJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFHIRImportJobsRequest,
                                    Pagination::ListFHIRImportJobsPaginationTraits<DerivedClient>>
  ListFHIRImportJobsPaginator(const Model::ListFHIRImportJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFHIRImportJobsRequest,
                                             Pagination::ListFHIRImportJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace HealthLake
}  // namespace Aws
