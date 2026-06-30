/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACMClient.h>
#include <aws/acm/model/ListAcmeAccountsPaginationTraits.h>
#include <aws/acm/model/ListAcmeDomainValidationsPaginationTraits.h>
#include <aws/acm/model/ListAcmeEndpointsPaginationTraits.h>
#include <aws/acm/model/ListAcmeExternalAccountBindingsPaginationTraits.h>
#include <aws/acm/model/ListCertificatesPaginationTraits.h>
#include <aws/acm/model/SearchCertificatesPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace ACM {

using ListAcmeAccountsPaginator =
    Aws::Utils::Pagination::Paginator<ACMClient, Model::ListAcmeAccountsRequest, Pagination::ListAcmeAccountsPaginationTraits<ACMClient>>;
using ListAcmeDomainValidationsPaginator =
    Aws::Utils::Pagination::Paginator<ACMClient, Model::ListAcmeDomainValidationsRequest,
                                      Pagination::ListAcmeDomainValidationsPaginationTraits<ACMClient>>;
using ListAcmeEndpointsPaginator =
    Aws::Utils::Pagination::Paginator<ACMClient, Model::ListAcmeEndpointsRequest, Pagination::ListAcmeEndpointsPaginationTraits<ACMClient>>;
using ListAcmeExternalAccountBindingsPaginator =
    Aws::Utils::Pagination::Paginator<ACMClient, Model::ListAcmeExternalAccountBindingsRequest,
                                      Pagination::ListAcmeExternalAccountBindingsPaginationTraits<ACMClient>>;
using ListCertificatesPaginator =
    Aws::Utils::Pagination::Paginator<ACMClient, Model::ListCertificatesRequest, Pagination::ListCertificatesPaginationTraits<ACMClient>>;
using SearchCertificatesPaginator = Aws::Utils::Pagination::Paginator<ACMClient, Model::SearchCertificatesRequest,
                                                                      Pagination::SearchCertificatesPaginationTraits<ACMClient>>;

}  // namespace ACM
}  // namespace Aws
