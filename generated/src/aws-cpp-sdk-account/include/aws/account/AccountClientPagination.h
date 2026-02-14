/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account/AccountClient.h>
#include <aws/account/model/ListRegionsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace Account {

using ListRegionsPaginator =
    Aws::Utils::Pagination::Paginator<AccountClient, Model::ListRegionsRequest, Pagination::ListRegionsPaginationTraits<AccountClient>>;

}  // namespace Account
}  // namespace Aws
