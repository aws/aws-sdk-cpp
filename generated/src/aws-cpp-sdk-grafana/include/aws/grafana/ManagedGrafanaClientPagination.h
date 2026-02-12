/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/grafana/ManagedGrafanaClient.h>
#include <aws/grafana/model/ListPermissionsPaginationTraits.h>
#include <aws/grafana/model/ListVersionsPaginationTraits.h>
#include <aws/grafana/model/ListWorkspaceServiceAccountTokensPaginationTraits.h>
#include <aws/grafana/model/ListWorkspaceServiceAccountsPaginationTraits.h>
#include <aws/grafana/model/ListWorkspacesPaginationTraits.h>

namespace Aws {
namespace ManagedGrafana {

using ListPermissionsPaginator = Aws::Utils::Pagination::Paginator<ManagedGrafanaClient, Model::ListPermissionsRequest,
                                                                   Pagination::ListPermissionsPaginationTraits<ManagedGrafanaClient>>;
using ListVersionsPaginator = Aws::Utils::Pagination::Paginator<ManagedGrafanaClient, Model::ListVersionsRequest,
                                                                Pagination::ListVersionsPaginationTraits<ManagedGrafanaClient>>;
using ListWorkspacesPaginator = Aws::Utils::Pagination::Paginator<ManagedGrafanaClient, Model::ListWorkspacesRequest,
                                                                  Pagination::ListWorkspacesPaginationTraits<ManagedGrafanaClient>>;
using ListWorkspaceServiceAccountsPaginator =
    Aws::Utils::Pagination::Paginator<ManagedGrafanaClient, Model::ListWorkspaceServiceAccountsRequest,
                                      Pagination::ListWorkspaceServiceAccountsPaginationTraits<ManagedGrafanaClient>>;
using ListWorkspaceServiceAccountTokensPaginator =
    Aws::Utils::Pagination::Paginator<ManagedGrafanaClient, Model::ListWorkspaceServiceAccountTokensRequest,
                                      Pagination::ListWorkspaceServiceAccountTokensPaginationTraits<ManagedGrafanaClient>>;

}  // namespace ManagedGrafana
}  // namespace Aws
