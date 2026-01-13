/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-connections/CodeStarconnectionsClient.h>
#include <aws/codestar-connections/model/ListConnectionsPaginationTraits.h>
#include <aws/codestar-connections/model/ListHostsPaginationTraits.h>
#include <aws/codestar-connections/model/ListRepositoryLinksPaginationTraits.h>
#include <aws/codestar-connections/model/ListSyncConfigurationsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace CodeStarconnections {

using ListConnectionsPaginator = Aws::Utils::Pagination::Paginator<CodeStarconnectionsClient, Model::ListConnectionsRequest,
                                                                   Pagination::ListConnectionsPaginationTraits<CodeStarconnectionsClient>>;
using ListHostsPaginator = Aws::Utils::Pagination::Paginator<CodeStarconnectionsClient, Model::ListHostsRequest,
                                                             Pagination::ListHostsPaginationTraits<CodeStarconnectionsClient>>;
using ListRepositoryLinksPaginator =
    Aws::Utils::Pagination::Paginator<CodeStarconnectionsClient, Model::ListRepositoryLinksRequest,
                                      Pagination::ListRepositoryLinksPaginationTraits<CodeStarconnectionsClient>>;
using ListSyncConfigurationsPaginator =
    Aws::Utils::Pagination::Paginator<CodeStarconnectionsClient, Model::ListSyncConfigurationsRequest,
                                      Pagination::ListSyncConfigurationsPaginationTraits<CodeStarconnectionsClient>>;

}  // namespace CodeStarconnections
}  // namespace Aws
