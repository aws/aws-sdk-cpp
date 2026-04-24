/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/keyspaces/KeyspacesClient.h>
#include <aws/keyspaces/model/ListKeyspacesPaginationTraits.h>
#include <aws/keyspaces/model/ListTablesPaginationTraits.h>
#include <aws/keyspaces/model/ListTagsForResourcePaginationTraits.h>
#include <aws/keyspaces/model/ListTypesPaginationTraits.h>

namespace Aws {
namespace Keyspaces {

using ListKeyspacesPaginator = Aws::Utils::Pagination::Paginator<KeyspacesClient, Model::ListKeyspacesRequest,
                                                                 Pagination::ListKeyspacesPaginationTraits<KeyspacesClient>>;
using ListTablesPaginator =
    Aws::Utils::Pagination::Paginator<KeyspacesClient, Model::ListTablesRequest, Pagination::ListTablesPaginationTraits<KeyspacesClient>>;
using ListTagsForResourcePaginator = Aws::Utils::Pagination::Paginator<KeyspacesClient, Model::ListTagsForResourceRequest,
                                                                       Pagination::ListTagsForResourcePaginationTraits<KeyspacesClient>>;
using ListTypesPaginator =
    Aws::Utils::Pagination::Paginator<KeyspacesClient, Model::ListTypesRequest, Pagination::ListTypesPaginationTraits<KeyspacesClient>>;

}  // namespace Keyspaces
}  // namespace Aws
