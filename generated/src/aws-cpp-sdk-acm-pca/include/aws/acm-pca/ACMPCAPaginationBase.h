/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/acm-pca/model/ListCertificateAuthoritiesPaginationTraits.h>
#include <aws/acm-pca/model/ListPermissionsPaginationTraits.h>
#include <aws/acm-pca/model/ListTagsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace ACMPCA {

class ACMPCAClient;

template <typename DerivedClient>
class ACMPCAPaginationBase {
 public:
  /**
   * Create a paginator for ListCertificateAuthorities operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCertificateAuthoritiesRequest,
                                    Pagination::ListCertificateAuthoritiesPaginationTraits<DerivedClient>>
  ListCertificateAuthoritiesPaginator(const Model::ListCertificateAuthoritiesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCertificateAuthoritiesRequest,
                                             Pagination::ListCertificateAuthoritiesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPermissions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPermissionsRequest,
                                    Pagination::ListPermissionsPaginationTraits<DerivedClient>>
  ListPermissionsPaginator(const Model::ListPermissionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPermissionsRequest,
                                             Pagination::ListPermissionsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListTags operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTagsRequest, Pagination::ListTagsPaginationTraits<DerivedClient>>
  ListTagsPaginator(const Model::ListTagsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTagsRequest, Pagination::ListTagsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace ACMPCA
}  // namespace Aws
