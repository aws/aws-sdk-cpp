/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/acm/model/ListCertificatesPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace ACM {

class ACMClient;

template <typename DerivedClient>
class ACMPaginationBase {
 public:
  /**
   * Create a paginator for ListCertificates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCertificatesRequest,
                                    Pagination::ListCertificatesPaginationTraits<DerivedClient>>
  ListCertificatesPaginator(const Model::ListCertificatesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCertificatesRequest,
                                             Pagination::ListCertificatesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }
};
}  // namespace ACM
}  // namespace Aws
