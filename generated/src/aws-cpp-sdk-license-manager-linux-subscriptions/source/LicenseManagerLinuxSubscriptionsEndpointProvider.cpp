/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager-linux-subscriptions/LicenseManagerLinuxSubscriptionsEndpointProvider.h>
#include <aws/license-manager-linux-subscriptions/internal/LicenseManagerLinuxSubscriptionsEndpointRules.h>

namespace Aws {
namespace LicenseManagerLinuxSubscriptions {
namespace Endpoint {
LicenseManagerLinuxSubscriptionsEndpointProvider::LicenseManagerLinuxSubscriptionsEndpointProvider()
    : LicenseManagerLinuxSubscriptionsDefaultEpProviderBase(
          Aws::LicenseManagerLinuxSubscriptions::LicenseManagerLinuxSubscriptionsEndpointRules::GetRulesBlob(),
          Aws::LicenseManagerLinuxSubscriptions::LicenseManagerLinuxSubscriptionsEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace LicenseManagerLinuxSubscriptions
}  // namespace Aws
