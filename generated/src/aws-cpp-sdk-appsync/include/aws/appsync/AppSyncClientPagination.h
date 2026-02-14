/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSyncClient.h>
#include <aws/appsync/model/ListApiKeysPaginationTraits.h>
#include <aws/appsync/model/ListApisPaginationTraits.h>
#include <aws/appsync/model/ListChannelNamespacesPaginationTraits.h>
#include <aws/appsync/model/ListDataSourcesPaginationTraits.h>
#include <aws/appsync/model/ListDomainNamesPaginationTraits.h>
#include <aws/appsync/model/ListFunctionsPaginationTraits.h>
#include <aws/appsync/model/ListGraphqlApisPaginationTraits.h>
#include <aws/appsync/model/ListResolversByFunctionPaginationTraits.h>
#include <aws/appsync/model/ListResolversPaginationTraits.h>
#include <aws/appsync/model/ListSourceApiAssociationsPaginationTraits.h>
#include <aws/appsync/model/ListTypesByAssociationPaginationTraits.h>
#include <aws/appsync/model/ListTypesPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace AppSync {

using ListApiKeysPaginator =
    Aws::Utils::Pagination::Paginator<AppSyncClient, Model::ListApiKeysRequest, Pagination::ListApiKeysPaginationTraits<AppSyncClient>>;
using ListApisPaginator =
    Aws::Utils::Pagination::Paginator<AppSyncClient, Model::ListApisRequest, Pagination::ListApisPaginationTraits<AppSyncClient>>;
using ListChannelNamespacesPaginator = Aws::Utils::Pagination::Paginator<AppSyncClient, Model::ListChannelNamespacesRequest,
                                                                         Pagination::ListChannelNamespacesPaginationTraits<AppSyncClient>>;
using ListDataSourcesPaginator = Aws::Utils::Pagination::Paginator<AppSyncClient, Model::ListDataSourcesRequest,
                                                                   Pagination::ListDataSourcesPaginationTraits<AppSyncClient>>;
using ListDomainNamesPaginator = Aws::Utils::Pagination::Paginator<AppSyncClient, Model::ListDomainNamesRequest,
                                                                   Pagination::ListDomainNamesPaginationTraits<AppSyncClient>>;
using ListFunctionsPaginator =
    Aws::Utils::Pagination::Paginator<AppSyncClient, Model::ListFunctionsRequest, Pagination::ListFunctionsPaginationTraits<AppSyncClient>>;
using ListGraphqlApisPaginator = Aws::Utils::Pagination::Paginator<AppSyncClient, Model::ListGraphqlApisRequest,
                                                                   Pagination::ListGraphqlApisPaginationTraits<AppSyncClient>>;
using ListResolversPaginator =
    Aws::Utils::Pagination::Paginator<AppSyncClient, Model::ListResolversRequest, Pagination::ListResolversPaginationTraits<AppSyncClient>>;
using ListResolversByFunctionPaginator =
    Aws::Utils::Pagination::Paginator<AppSyncClient, Model::ListResolversByFunctionRequest,
                                      Pagination::ListResolversByFunctionPaginationTraits<AppSyncClient>>;
using ListSourceApiAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<AppSyncClient, Model::ListSourceApiAssociationsRequest,
                                      Pagination::ListSourceApiAssociationsPaginationTraits<AppSyncClient>>;
using ListTypesPaginator =
    Aws::Utils::Pagination::Paginator<AppSyncClient, Model::ListTypesRequest, Pagination::ListTypesPaginationTraits<AppSyncClient>>;
using ListTypesByAssociationPaginator =
    Aws::Utils::Pagination::Paginator<AppSyncClient, Model::ListTypesByAssociationRequest,
                                      Pagination::ListTypesByAssociationPaginationTraits<AppSyncClient>>;

}  // namespace AppSync
}  // namespace Aws
