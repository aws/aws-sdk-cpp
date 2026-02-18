/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/chime-sdk-identity/model/ListAppInstanceAdminsPaginationTraits.h>
#include <aws/chime-sdk-identity/model/ListAppInstanceBotsPaginationTraits.h>
#include <aws/chime-sdk-identity/model/ListAppInstanceUserEndpointsPaginationTraits.h>
#include <aws/chime-sdk-identity/model/ListAppInstanceUsersPaginationTraits.h>
#include <aws/chime-sdk-identity/model/ListAppInstancesPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace ChimeSDKIdentity {

class ChimeSDKIdentityClient;

template <typename DerivedClient>
class ChimeSDKIdentityPaginationBase {
 public:
  /**
   * Create a paginator for ListAppInstanceAdmins operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAppInstanceAdminsRequest,
                                    Pagination::ListAppInstanceAdminsPaginationTraits<DerivedClient>>
  ListAppInstanceAdminsPaginator(const Model::ListAppInstanceAdminsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAppInstanceAdminsRequest,
                                             Pagination::ListAppInstanceAdminsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAppInstanceBots operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAppInstanceBotsRequest,
                                    Pagination::ListAppInstanceBotsPaginationTraits<DerivedClient>>
  ListAppInstanceBotsPaginator(const Model::ListAppInstanceBotsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAppInstanceBotsRequest,
                                             Pagination::ListAppInstanceBotsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAppInstances operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAppInstancesRequest,
                                    Pagination::ListAppInstancesPaginationTraits<DerivedClient>>
  ListAppInstancesPaginator(const Model::ListAppInstancesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAppInstancesRequest,
                                             Pagination::ListAppInstancesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListAppInstanceUserEndpoints operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAppInstanceUserEndpointsRequest,
                                    Pagination::ListAppInstanceUserEndpointsPaginationTraits<DerivedClient>>
  ListAppInstanceUserEndpointsPaginator(const Model::ListAppInstanceUserEndpointsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAppInstanceUserEndpointsRequest,
                                             Pagination::ListAppInstanceUserEndpointsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAppInstanceUsers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAppInstanceUsersRequest,
                                    Pagination::ListAppInstanceUsersPaginationTraits<DerivedClient>>
  ListAppInstanceUsersPaginator(const Model::ListAppInstanceUsersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAppInstanceUsersRequest,
                                             Pagination::ListAppInstanceUsersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace ChimeSDKIdentity
}  // namespace Aws
