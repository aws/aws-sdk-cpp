/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptionsEndpointProvider.h>
#include <aws/license-manager-user-subscriptions/internal/LicenseManagerUserSubscriptionsEndpointRules.h>

namespace Aws {
#ifndef AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<
    LicenseManagerUserSubscriptions::Endpoint::LicenseManagerUserSubscriptionsClientConfiguration,
    LicenseManagerUserSubscriptions::Endpoint::LicenseManagerUserSubscriptionsBuiltInParameters,
    LicenseManagerUserSubscriptions::Endpoint::LicenseManagerUserSubscriptionsClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<
    LicenseManagerUserSubscriptions::Endpoint::LicenseManagerUserSubscriptionsClientConfiguration,
    LicenseManagerUserSubscriptions::Endpoint::LicenseManagerUserSubscriptionsBuiltInParameters,
    LicenseManagerUserSubscriptions::Endpoint::LicenseManagerUserSubscriptionsClientContextParameters>;
}  // namespace Endpoint
#endif

namespace LicenseManagerUserSubscriptions {
namespace Endpoint {
LicenseManagerUserSubscriptionsEndpointProvider::LicenseManagerUserSubscriptionsEndpointProvider()
    : LicenseManagerUserSubscriptionsDefaultEpProviderBase(
          Aws::LicenseManagerUserSubscriptions::LicenseManagerUserSubscriptionsEndpointRules::GetRulesBlob(),
          Aws::LicenseManagerUserSubscriptions::LicenseManagerUserSubscriptionsEndpointRules::RulesBlobSize) {}

void LicenseManagerUserSubscriptionsBuiltInParameters::SetFromClientConfiguration(
    const LicenseManagerUserSubscriptionsClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const LicenseManagerUserSubscriptionsClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void LicenseManagerUserSubscriptionsBuiltInParameters::SetFromClientConfiguration(
    const LicenseManagerUserSubscriptionsClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const LicenseManagerUserSubscriptionsClientConfiguration::BaseClientConfigClass&>(config),
                             serviceName);
  SetServiceSpecificParameters(config);
}

void LicenseManagerUserSubscriptionsBuiltInParameters::SetServiceSpecificParameters(
    const LicenseManagerUserSubscriptionsClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace LicenseManagerUserSubscriptions
}  // namespace Aws
