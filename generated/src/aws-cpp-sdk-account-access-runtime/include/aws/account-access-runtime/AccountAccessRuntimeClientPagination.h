/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account-access-runtime/AccountAccessRuntimeClient.h>
#include <aws/account-access-runtime/model/ListRolesPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace AccountAccessRuntime {

using ListRolesPaginator = Aws::Utils::Pagination::Paginator<AccountAccessRuntimeClient, Model::ListRolesRequest,
                                                             Pagination::ListRolesPaginationTraits<AccountAccessRuntimeClient>>;

}  // namespace AccountAccessRuntime
}  // namespace Aws
