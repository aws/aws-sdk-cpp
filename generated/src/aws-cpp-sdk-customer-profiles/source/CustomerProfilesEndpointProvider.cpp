/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/CustomerProfilesEndpointProvider.h>
#include <aws/customer-profiles/internal/CustomerProfilesEndpointRules.h>

namespace Aws {
#ifndef AWS_CUSTOMERPROFILES_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<CustomerProfiles::Endpoint::CustomerProfilesClientConfiguration,
                                                   CustomerProfiles::Endpoint::CustomerProfilesBuiltInParameters,
                                                   CustomerProfiles::Endpoint::CustomerProfilesClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<CustomerProfiles::Endpoint::CustomerProfilesClientConfiguration,
                                                  CustomerProfiles::Endpoint::CustomerProfilesBuiltInParameters,
                                                  CustomerProfiles::Endpoint::CustomerProfilesClientContextParameters>;
}  // namespace Endpoint
#endif

namespace CustomerProfiles {
namespace Endpoint {
CustomerProfilesEndpointProvider::CustomerProfilesEndpointProvider()
    : CustomerProfilesDefaultEpProviderBase(Aws::CustomerProfiles::CustomerProfilesEndpointRules::GetRulesBlob(),
                                            Aws::CustomerProfiles::CustomerProfilesEndpointRules::RulesBlobSize) {}

void CustomerProfilesBuiltInParameters::SetFromClientConfiguration(const CustomerProfilesClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const CustomerProfilesClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void CustomerProfilesBuiltInParameters::SetFromClientConfiguration(const CustomerProfilesClientConfiguration& config,
                                                                   const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const CustomerProfilesClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void CustomerProfilesBuiltInParameters::SetServiceSpecificParameters(const CustomerProfilesClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace CustomerProfiles
}  // namespace Aws
