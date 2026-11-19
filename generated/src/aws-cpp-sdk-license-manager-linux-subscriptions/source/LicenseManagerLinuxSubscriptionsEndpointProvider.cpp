/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager-linux-subscriptions/LicenseManagerLinuxSubscriptionsEndpointProvider.h>
#include <aws/license-manager-linux-subscriptions/internal/LicenseManagerLinuxSubscriptionsEndpointRules.h>

namespace Aws {
#ifndef AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<
    LicenseManagerLinuxSubscriptions::Endpoint::LicenseManagerLinuxSubscriptionsClientConfiguration,
    LicenseManagerLinuxSubscriptions::Endpoint::LicenseManagerLinuxSubscriptionsBuiltInParameters,
    LicenseManagerLinuxSubscriptions::Endpoint::LicenseManagerLinuxSubscriptionsClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<
    LicenseManagerLinuxSubscriptions::Endpoint::LicenseManagerLinuxSubscriptionsClientConfiguration,
    LicenseManagerLinuxSubscriptions::Endpoint::LicenseManagerLinuxSubscriptionsBuiltInParameters,
    LicenseManagerLinuxSubscriptions::Endpoint::LicenseManagerLinuxSubscriptionsClientContextParameters>;
}  // namespace Endpoint
#endif

namespace LicenseManagerLinuxSubscriptions {
namespace Endpoint {
LicenseManagerLinuxSubscriptionsEndpointProvider::LicenseManagerLinuxSubscriptionsEndpointProvider()
    : LicenseManagerLinuxSubscriptionsDefaultEpProviderBase(
          Aws::LicenseManagerLinuxSubscriptions::LicenseManagerLinuxSubscriptionsEndpointRules::GetRulesBlob(),
          Aws::LicenseManagerLinuxSubscriptions::LicenseManagerLinuxSubscriptionsEndpointRules::RulesBlobSize) {}

void LicenseManagerLinuxSubscriptionsBuiltInParameters::SetFromClientConfiguration(
    const LicenseManagerLinuxSubscriptionsClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const LicenseManagerLinuxSubscriptionsClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void LicenseManagerLinuxSubscriptionsBuiltInParameters::SetFromClientConfiguration(
    const LicenseManagerLinuxSubscriptionsClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const LicenseManagerLinuxSubscriptionsClientConfiguration::BaseClientConfigClass&>(config),
                             serviceName);
  SetServiceSpecificParameters(config);
}

void LicenseManagerLinuxSubscriptionsBuiltInParameters::SetServiceSpecificParameters(
    const LicenseManagerLinuxSubscriptionsClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace LicenseManagerLinuxSubscriptions
}  // namespace Aws
