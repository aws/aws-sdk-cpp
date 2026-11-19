/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/BillingEndpointProvider.h>
#include <aws/billing/internal/BillingEndpointRules.h>

namespace Aws {
#ifndef AWS_BILLING_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<Billing::Endpoint::BillingClientConfiguration,
                                                   Billing::Endpoint::BillingBuiltInParameters,
                                                   Billing::Endpoint::BillingClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<Billing::Endpoint::BillingClientConfiguration,
                                                  Billing::Endpoint::BillingBuiltInParameters,
                                                  Billing::Endpoint::BillingClientContextParameters>;
}  // namespace Endpoint
#endif

namespace Billing {
namespace Endpoint {
BillingEndpointProvider::BillingEndpointProvider()
    : BillingDefaultEpProviderBase(Aws::Billing::BillingEndpointRules::GetRulesBlob(), Aws::Billing::BillingEndpointRules::RulesBlobSize) {}

void BillingBuiltInParameters::SetFromClientConfiguration(const BillingClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const BillingClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void BillingBuiltInParameters::SetFromClientConfiguration(const BillingClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const BillingClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void BillingBuiltInParameters::SetServiceSpecificParameters(const BillingClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace Billing
}  // namespace Aws
