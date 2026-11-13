/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/LicenseManagerEndpointProvider.h>
#include <aws/license-manager/internal/LicenseManagerEndpointRules.h>

namespace Aws {
#ifndef AWS_LICENSEMANAGER_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<LicenseManager::Endpoint::LicenseManagerClientConfiguration,
                                                   LicenseManager::Endpoint::LicenseManagerBuiltInParameters,
                                                   LicenseManager::Endpoint::LicenseManagerClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<LicenseManager::Endpoint::LicenseManagerClientConfiguration,
                                                  LicenseManager::Endpoint::LicenseManagerBuiltInParameters,
                                                  LicenseManager::Endpoint::LicenseManagerClientContextParameters>;
}  // namespace Endpoint
#endif

namespace LicenseManager {
namespace Endpoint {
LicenseManagerEndpointProvider::LicenseManagerEndpointProvider()
    : LicenseManagerDefaultEpProviderBase(Aws::LicenseManager::LicenseManagerEndpointRules::GetRulesBlob(),
                                          Aws::LicenseManager::LicenseManagerEndpointRules::RulesBlobSize) {}

void LicenseManagerBuiltInParameters::SetFromClientConfiguration(const LicenseManagerClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const LicenseManagerClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void LicenseManagerBuiltInParameters::SetFromClientConfiguration(const LicenseManagerClientConfiguration& config,
                                                                 const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const LicenseManagerClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void LicenseManagerBuiltInParameters::SetServiceSpecificParameters(const LicenseManagerClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace LicenseManager
}  // namespace Aws
