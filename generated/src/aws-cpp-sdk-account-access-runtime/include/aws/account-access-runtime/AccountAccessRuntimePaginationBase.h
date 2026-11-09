/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/account-access-runtime/model/ListRolesPaginationTraits.h>
#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace AccountAccessRuntime {

template <typename DerivedClient>
class AccountAccessRuntimePaginationBase {
 public:
  /**
   * Create a paginator for ListRoles operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRolesRequest, Pagination::ListRolesPaginationTraits<DerivedClient>>
  ListRolesPaginator(const Model::ListRolesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRolesRequest, Pagination::ListRolesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace AccountAccessRuntime
}  // namespace Aws
