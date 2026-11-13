/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/BillingConductorEndpointProvider.h>
#include <aws/billingconductor/internal/BillingConductorEndpointRules.h>

namespace Aws {
#ifndef AWS_BILLINGCONDUCTOR_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<BillingConductor::Endpoint::BillingConductorClientConfiguration,
                                                   BillingConductor::Endpoint::BillingConductorBuiltInParameters,
                                                   BillingConductor::Endpoint::BillingConductorClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<BillingConductor::Endpoint::BillingConductorClientConfiguration,
                                                  BillingConductor::Endpoint::BillingConductorBuiltInParameters,
                                                  BillingConductor::Endpoint::BillingConductorClientContextParameters>;
}  // namespace Endpoint
#endif

namespace BillingConductor {
namespace Endpoint {
BillingConductorEndpointProvider::BillingConductorEndpointProvider()
    : BillingConductorDefaultEpProviderBase(Aws::BillingConductor::BillingConductorEndpointRules::GetRulesBlob(),
                                            Aws::BillingConductor::BillingConductorEndpointRules::RulesBlobSize) {}

void BillingConductorBuiltInParameters::SetFromClientConfiguration(const BillingConductorClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const BillingConductorClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void BillingConductorBuiltInParameters::SetFromClientConfiguration(const BillingConductorClientConfiguration& config,
                                                                   const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const BillingConductorClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void BillingConductorBuiltInParameters::SetServiceSpecificParameters(const BillingConductorClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace BillingConductor
}  // namespace Aws
