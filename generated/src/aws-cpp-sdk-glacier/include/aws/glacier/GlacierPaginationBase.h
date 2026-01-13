/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/glacier/model/ListJobsPaginationTraits.h>
#include <aws/glacier/model/ListMultipartUploadsPaginationTraits.h>
#include <aws/glacier/model/ListPartsPaginationTraits.h>
#include <aws/glacier/model/ListVaultsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace Glacier {

class GlacierClient;

template <typename DerivedClient>
class GlacierPaginationBase {
 public:
  /**
   * Create a paginator for ListJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListJobsRequest, Pagination::ListJobsPaginationTraits<DerivedClient>>
  ListJobsPaginator(const Model::ListJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListJobsRequest, Pagination::ListJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListMultipartUploads operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMultipartUploadsRequest,
                                    Pagination::ListMultipartUploadsPaginationTraits<DerivedClient>>
  ListMultipartUploadsPaginator(const Model::ListMultipartUploadsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMultipartUploadsRequest,
                                             Pagination::ListMultipartUploadsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListParts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPartsRequest, Pagination::ListPartsPaginationTraits<DerivedClient>>
  ListPartsPaginator(const Model::ListPartsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPartsRequest, Pagination::ListPartsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListVaults operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListVaultsRequest, Pagination::ListVaultsPaginationTraits<DerivedClient>>
  ListVaultsPaginator(const Model::ListVaultsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListVaultsRequest,
                                             Pagination::ListVaultsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }
};
}  // namespace Glacier
}  // namespace Aws
