/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/license-manager-linux-subscriptions/LicenseManagerLinuxSubscriptionsClient.h>
#include <aws/license-manager-linux-subscriptions/model/ListLinuxSubscriptionInstancesPaginationTraits.h>
#include <aws/license-manager-linux-subscriptions/model/ListLinuxSubscriptionsPaginationTraits.h>
#include <aws/license-manager-linux-subscriptions/model/ListRegisteredSubscriptionProvidersPaginationTraits.h>

namespace Aws {
namespace LicenseManagerLinuxSubscriptions {

using ListLinuxSubscriptionInstancesPaginator =
    Aws::Utils::Pagination::Paginator<LicenseManagerLinuxSubscriptionsClient, Model::ListLinuxSubscriptionInstancesRequest,
                                      Pagination::ListLinuxSubscriptionInstancesPaginationTraits<LicenseManagerLinuxSubscriptionsClient>>;
using ListLinuxSubscriptionsPaginator =
    Aws::Utils::Pagination::Paginator<LicenseManagerLinuxSubscriptionsClient, Model::ListLinuxSubscriptionsRequest,
                                      Pagination::ListLinuxSubscriptionsPaginationTraits<LicenseManagerLinuxSubscriptionsClient>>;
using ListRegisteredSubscriptionProvidersPaginator = Aws::Utils::Pagination::Paginator<
    LicenseManagerLinuxSubscriptionsClient, Model::ListRegisteredSubscriptionProvidersRequest,
    Pagination::ListRegisteredSubscriptionProvidersPaginationTraits<LicenseManagerLinuxSubscriptionsClient>>;

}  // namespace LicenseManagerLinuxSubscriptions
}  // namespace Aws
