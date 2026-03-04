/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/keyspaces/model/ListKeyspacesPaginationTraits.h>
#include <aws/keyspaces/model/ListTablesPaginationTraits.h>
#include <aws/keyspaces/model/ListTagsForResourcePaginationTraits.h>
#include <aws/keyspaces/model/ListTypesPaginationTraits.h>

#include <memory>

namespace Aws {
namespace Keyspaces {

class KeyspacesClient;

template <typename DerivedClient>
class KeyspacesPaginationBase {
 public:
  /**
   * Create a paginator for ListKeyspaces operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListKeyspacesRequest, Pagination::ListKeyspacesPaginationTraits<DerivedClient>>
  ListKeyspacesPaginator(const Model::ListKeyspacesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListKeyspacesRequest,
                                             Pagination::ListKeyspacesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListTables operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTablesRequest, Pagination::ListTablesPaginationTraits<DerivedClient>>
  ListTablesPaginator(const Model::ListTablesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTablesRequest,
                                             Pagination::ListTablesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for ListTagsForResource operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTagsForResourceRequest,
                                    Pagination::ListTagsForResourcePaginationTraits<DerivedClient>>
  ListTagsForResourcePaginator(const Model::ListTagsForResourceRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTagsForResourceRequest,
                                             Pagination::ListTagsForResourcePaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTypes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTypesRequest, Pagination::ListTypesPaginationTraits<DerivedClient>>
  ListTypesPaginator(const Model::ListTypesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTypesRequest, Pagination::ListTypesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace Keyspaces
}  // namespace Aws
