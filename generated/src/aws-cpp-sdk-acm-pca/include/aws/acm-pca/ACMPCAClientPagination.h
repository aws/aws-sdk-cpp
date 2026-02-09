/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm-pca/ACMPCAClient.h>
#include <aws/acm-pca/model/ListCertificateAuthoritiesPaginationTraits.h>
#include <aws/acm-pca/model/ListPermissionsPaginationTraits.h>
#include <aws/acm-pca/model/ListTagsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace ACMPCA {

using ListCertificateAuthoritiesPaginator =
    Aws::Utils::Pagination::Paginator<ACMPCAClient, Model::ListCertificateAuthoritiesRequest,
                                      Pagination::ListCertificateAuthoritiesPaginationTraits<ACMPCAClient>>;
using ListPermissionsPaginator = Aws::Utils::Pagination::Paginator<ACMPCAClient, Model::ListPermissionsRequest,
                                                                   Pagination::ListPermissionsPaginationTraits<ACMPCAClient>>;
using ListTagsPaginator =
    Aws::Utils::Pagination::Paginator<ACMPCAClient, Model::ListTagsRequest, Pagination::ListTagsPaginationTraits<ACMPCAClient>>;

}  // namespace ACMPCA
}  // namespace Aws
