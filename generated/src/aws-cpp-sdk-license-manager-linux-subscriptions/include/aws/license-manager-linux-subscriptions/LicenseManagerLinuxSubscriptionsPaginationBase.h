/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/license-manager-linux-subscriptions/model/ListLinuxSubscriptionInstancesPaginationTraits.h>
#include <aws/license-manager-linux-subscriptions/model/ListLinuxSubscriptionsPaginationTraits.h>
#include <aws/license-manager-linux-subscriptions/model/ListRegisteredSubscriptionProvidersPaginationTraits.h>

#include <memory>

namespace Aws {
namespace LicenseManagerLinuxSubscriptions {

class LicenseManagerLinuxSubscriptionsClient;

template <typename DerivedClient>
class LicenseManagerLinuxSubscriptionsPaginationBase {
 public:
  /**
   * Create a paginator for ListLinuxSubscriptionInstances operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLinuxSubscriptionInstancesRequest,
                                    Pagination::ListLinuxSubscriptionInstancesPaginationTraits<DerivedClient>>
  ListLinuxSubscriptionInstancesPaginator(const Model::ListLinuxSubscriptionInstancesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLinuxSubscriptionInstancesRequest,
                                             Pagination::ListLinuxSubscriptionInstancesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListLinuxSubscriptions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLinuxSubscriptionsRequest,
                                    Pagination::ListLinuxSubscriptionsPaginationTraits<DerivedClient>>
  ListLinuxSubscriptionsPaginator(const Model::ListLinuxSubscriptionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLinuxSubscriptionsRequest,
                                             Pagination::ListLinuxSubscriptionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRegisteredSubscriptionProviders operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRegisteredSubscriptionProvidersRequest,
                                    Pagination::ListRegisteredSubscriptionProvidersPaginationTraits<DerivedClient>>
  ListRegisteredSubscriptionProvidersPaginator(const Model::ListRegisteredSubscriptionProvidersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRegisteredSubscriptionProvidersRequest,
                                             Pagination::ListRegisteredSubscriptionProvidersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace LicenseManagerLinuxSubscriptions
}  // namespace Aws
