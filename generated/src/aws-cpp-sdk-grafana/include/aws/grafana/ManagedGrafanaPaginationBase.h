/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/grafana/model/ListPermissionsPaginationTraits.h>
#include <aws/grafana/model/ListVersionsPaginationTraits.h>
#include <aws/grafana/model/ListWorkspaceServiceAccountTokensPaginationTraits.h>
#include <aws/grafana/model/ListWorkspaceServiceAccountsPaginationTraits.h>
#include <aws/grafana/model/ListWorkspacesPaginationTraits.h>

#include <memory>

namespace Aws {
namespace ManagedGrafana {

template <typename DerivedClient>
class ManagedGrafanaPaginationBase {
 public:
  /**
   * Create a paginator for ListPermissions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPermissionsRequest,
                                    Pagination::ListPermissionsPaginationTraits<DerivedClient>>
  ListPermissionsPaginator(const Model::ListPermissionsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPermissionsRequest,
                                             Pagination::ListPermissionsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListVersionsRequest, Pagination::ListVersionsPaginationTraits<DerivedClient>>
  ListVersionsPaginator(const Model::ListVersionsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListVersionsRequest,
                                             Pagination::ListVersionsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListWorkspaces operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkspacesRequest, Pagination::ListWorkspacesPaginationTraits<DerivedClient>>
  ListWorkspacesPaginator(const Model::ListWorkspacesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkspacesRequest,
                                             Pagination::ListWorkspacesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListWorkspaceServiceAccounts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkspaceServiceAccountsRequest,
                                    Pagination::ListWorkspaceServiceAccountsPaginationTraits<DerivedClient>>
  ListWorkspaceServiceAccountsPaginator(const Model::ListWorkspaceServiceAccountsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkspaceServiceAccountsRequest,
                                             Pagination::ListWorkspaceServiceAccountsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListWorkspaceServiceAccountTokens operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkspaceServiceAccountTokensRequest,
                                    Pagination::ListWorkspaceServiceAccountTokensPaginationTraits<DerivedClient>>
  ListWorkspaceServiceAccountTokensPaginator(const Model::ListWorkspaceServiceAccountTokensRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkspaceServiceAccountTokensRequest,
                                             Pagination::ListWorkspaceServiceAccountTokensPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace ManagedGrafana
}  // namespace Aws
