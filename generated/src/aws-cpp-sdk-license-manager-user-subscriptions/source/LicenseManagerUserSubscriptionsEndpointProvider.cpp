/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptionsEndpointProvider.h>
#include <aws/license-manager-user-subscriptions/internal/LicenseManagerUserSubscriptionsEndpointRules.h>

namespace Aws {
namespace LicenseManagerUserSubscriptions {
namespace Endpoint {
LicenseManagerUserSubscriptionsEndpointProvider::LicenseManagerUserSubscriptionsEndpointProvider()
    : LicenseManagerUserSubscriptionsDefaultEpProviderBase(
          Aws::LicenseManagerUserSubscriptions::LicenseManagerUserSubscriptionsEndpointRules::GetRulesBlob(),
          Aws::LicenseManagerUserSubscriptions::LicenseManagerUserSubscriptionsEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace LicenseManagerUserSubscriptions
}  // namespace Aws
