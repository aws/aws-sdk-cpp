/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account-access/AccountAccessClient.h>
#include <aws/account-access/model/ListApplicationsPaginationTraits.h>
#include <aws/account-access/model/ListEntitlementsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace AccountAccess {

using ListApplicationsPaginator = Aws::Utils::Pagination::Paginator<AccountAccessClient, Model::ListApplicationsRequest,
                                                                    Pagination::ListApplicationsPaginationTraits<AccountAccessClient>>;
using ListEntitlementsPaginator = Aws::Utils::Pagination::Paginator<AccountAccessClient, Model::ListEntitlementsRequest,
                                                                    Pagination::ListEntitlementsPaginationTraits<AccountAccessClient>>;

}  // namespace AccountAccess
}  // namespace Aws
