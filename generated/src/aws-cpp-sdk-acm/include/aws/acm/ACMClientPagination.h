/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACMClient.h>
#include <aws/acm/model/ListCertificatesPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace ACM {

using ListCertificatesPaginator =
    Aws::Utils::Pagination::Paginator<ACMClient, Model::ListCertificatesRequest, Pagination::ListCertificatesPaginationTraits<ACMClient>>;

}  // namespace ACM
}  // namespace Aws
