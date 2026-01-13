/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

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

#include <memory>

namespace Aws {
namespace AppSync {

class AppSyncClient;

template <typename DerivedClient>
class AppSyncPaginationBase {
 public:
  /**
   * Create a paginator for ListApiKeys operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApiKeysRequest, Pagination::ListApiKeysPaginationTraits<DerivedClient>>
  ListApiKeysPaginator(const Model::ListApiKeysRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApiKeysRequest,
                                             Pagination::ListApiKeysPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListApis operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApisRequest, Pagination::ListApisPaginationTraits<DerivedClient>>
  ListApisPaginator(const Model::ListApisRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApisRequest, Pagination::ListApisPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListChannelNamespaces operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListChannelNamespacesRequest,
                                    Pagination::ListChannelNamespacesPaginationTraits<DerivedClient>>
  ListChannelNamespacesPaginator(const Model::ListChannelNamespacesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListChannelNamespacesRequest,
                                             Pagination::ListChannelNamespacesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDataSources operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataSourcesRequest,
                                    Pagination::ListDataSourcesPaginationTraits<DerivedClient>>
  ListDataSourcesPaginator(const Model::ListDataSourcesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataSourcesRequest,
                                             Pagination::ListDataSourcesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListDomainNames operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDomainNamesRequest,
                                    Pagination::ListDomainNamesPaginationTraits<DerivedClient>>
  ListDomainNamesPaginator(const Model::ListDomainNamesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDomainNamesRequest,
                                             Pagination::ListDomainNamesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListFunctions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFunctionsRequest, Pagination::ListFunctionsPaginationTraits<DerivedClient>>
  ListFunctionsPaginator(const Model::ListFunctionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFunctionsRequest,
                                             Pagination::ListFunctionsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListGraphqlApis operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGraphqlApisRequest,
                                    Pagination::ListGraphqlApisPaginationTraits<DerivedClient>>
  ListGraphqlApisPaginator(const Model::ListGraphqlApisRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGraphqlApisRequest,
                                             Pagination::ListGraphqlApisPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListResolvers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResolversRequest, Pagination::ListResolversPaginationTraits<DerivedClient>>
  ListResolversPaginator(const Model::ListResolversRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResolversRequest,
                                             Pagination::ListResolversPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListResolversByFunction operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResolversByFunctionRequest,
                                    Pagination::ListResolversByFunctionPaginationTraits<DerivedClient>>
  ListResolversByFunctionPaginator(const Model::ListResolversByFunctionRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResolversByFunctionRequest,
                                             Pagination::ListResolversByFunctionPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSourceApiAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSourceApiAssociationsRequest,
                                    Pagination::ListSourceApiAssociationsPaginationTraits<DerivedClient>>
  ListSourceApiAssociationsPaginator(const Model::ListSourceApiAssociationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSourceApiAssociationsRequest,
                                             Pagination::ListSourceApiAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTypes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTypesRequest, Pagination::ListTypesPaginationTraits<DerivedClient>>
  ListTypesPaginator(const Model::ListTypesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTypesRequest, Pagination::ListTypesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTypesByAssociation operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTypesByAssociationRequest,
                                    Pagination::ListTypesByAssociationPaginationTraits<DerivedClient>>
  ListTypesByAssociationPaginator(const Model::ListTypesByAssociationRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTypesByAssociationRequest,
                                             Pagination::ListTypesByAssociationPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace AppSync
}  // namespace Aws
