/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/license-manager-user-subscriptions/model/ListIdentityProvidersPaginationTraits.h>
#include <aws/license-manager-user-subscriptions/model/ListInstancesPaginationTraits.h>
#include <aws/license-manager-user-subscriptions/model/ListLicenseServerEndpointsPaginationTraits.h>
#include <aws/license-manager-user-subscriptions/model/ListProductSubscriptionsPaginationTraits.h>
#include <aws/license-manager-user-subscriptions/model/ListUserAssociationsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace LicenseManagerUserSubscriptions {

class LicenseManagerUserSubscriptionsClient;

template <typename DerivedClient>
class LicenseManagerUserSubscriptionsPaginationBase {
 public:
  /**
   * Create a paginator for ListIdentityProviders operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIdentityProvidersRequest,
                                    Pagination::ListIdentityProvidersPaginationTraits<DerivedClient>>
  ListIdentityProvidersPaginator(const Model::ListIdentityProvidersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIdentityProvidersRequest,
                                             Pagination::ListIdentityProvidersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListInstances operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInstancesRequest, Pagination::ListInstancesPaginationTraits<DerivedClient>>
  ListInstancesPaginator(const Model::ListInstancesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInstancesRequest,
                                             Pagination::ListInstancesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListLicenseServerEndpoints operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLicenseServerEndpointsRequest,
                                    Pagination::ListLicenseServerEndpointsPaginationTraits<DerivedClient>>
  ListLicenseServerEndpointsPaginator(const Model::ListLicenseServerEndpointsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLicenseServerEndpointsRequest,
                                             Pagination::ListLicenseServerEndpointsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListProductSubscriptions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProductSubscriptionsRequest,
                                    Pagination::ListProductSubscriptionsPaginationTraits<DerivedClient>>
  ListProductSubscriptionsPaginator(const Model::ListProductSubscriptionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProductSubscriptionsRequest,
                                             Pagination::ListProductSubscriptionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListUserAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListUserAssociationsRequest,
                                    Pagination::ListUserAssociationsPaginationTraits<DerivedClient>>
  ListUserAssociationsPaginator(const Model::ListUserAssociationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListUserAssociationsRequest,
                                             Pagination::ListUserAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace LicenseManagerUserSubscriptions
}  // namespace Aws
