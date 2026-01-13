/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BIClient.h>
#include <aws/b2bi/model/ListCapabilitiesPaginationTraits.h>
#include <aws/b2bi/model/ListPartnershipsPaginationTraits.h>
#include <aws/b2bi/model/ListProfilesPaginationTraits.h>
#include <aws/b2bi/model/ListTransformersPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace B2BI {

using ListCapabilitiesPaginator =
    Aws::Utils::Pagination::Paginator<B2BIClient, Model::ListCapabilitiesRequest, Pagination::ListCapabilitiesPaginationTraits<B2BIClient>>;
using ListPartnershipsPaginator =
    Aws::Utils::Pagination::Paginator<B2BIClient, Model::ListPartnershipsRequest, Pagination::ListPartnershipsPaginationTraits<B2BIClient>>;
using ListProfilesPaginator =
    Aws::Utils::Pagination::Paginator<B2BIClient, Model::ListProfilesRequest, Pagination::ListProfilesPaginationTraits<B2BIClient>>;
using ListTransformersPaginator =
    Aws::Utils::Pagination::Paginator<B2BIClient, Model::ListTransformersRequest, Pagination::ListTransformersPaginationTraits<B2BIClient>>;

}  // namespace B2BI
}  // namespace Aws
