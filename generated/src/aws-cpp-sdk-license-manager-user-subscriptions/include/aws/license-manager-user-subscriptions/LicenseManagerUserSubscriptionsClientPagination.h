/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptionsClient.h>
#include <aws/license-manager-user-subscriptions/model/ListIdentityProvidersPaginationTraits.h>
#include <aws/license-manager-user-subscriptions/model/ListInstancesPaginationTraits.h>
#include <aws/license-manager-user-subscriptions/model/ListLicenseServerEndpointsPaginationTraits.h>
#include <aws/license-manager-user-subscriptions/model/ListProductSubscriptionsPaginationTraits.h>
#include <aws/license-manager-user-subscriptions/model/ListUserAssociationsPaginationTraits.h>

namespace Aws {
namespace LicenseManagerUserSubscriptions {

using ListIdentityProvidersPaginator =
    Aws::Utils::Pagination::Paginator<LicenseManagerUserSubscriptionsClient, Model::ListIdentityProvidersRequest,
                                      Pagination::ListIdentityProvidersPaginationTraits<LicenseManagerUserSubscriptionsClient>>;
using ListInstancesPaginator =
    Aws::Utils::Pagination::Paginator<LicenseManagerUserSubscriptionsClient, Model::ListInstancesRequest,
                                      Pagination::ListInstancesPaginationTraits<LicenseManagerUserSubscriptionsClient>>;
using ListLicenseServerEndpointsPaginator =
    Aws::Utils::Pagination::Paginator<LicenseManagerUserSubscriptionsClient, Model::ListLicenseServerEndpointsRequest,
                                      Pagination::ListLicenseServerEndpointsPaginationTraits<LicenseManagerUserSubscriptionsClient>>;
using ListProductSubscriptionsPaginator =
    Aws::Utils::Pagination::Paginator<LicenseManagerUserSubscriptionsClient, Model::ListProductSubscriptionsRequest,
                                      Pagination::ListProductSubscriptionsPaginationTraits<LicenseManagerUserSubscriptionsClient>>;
using ListUserAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<LicenseManagerUserSubscriptionsClient, Model::ListUserAssociationsRequest,
                                      Pagination::ListUserAssociationsPaginationTraits<LicenseManagerUserSubscriptionsClient>>;

}  // namespace LicenseManagerUserSubscriptions
}  // namespace Aws
