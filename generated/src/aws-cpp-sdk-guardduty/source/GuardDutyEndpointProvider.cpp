/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/GuardDutyEndpointProvider.h>
#include <aws/guardduty/internal/GuardDutyEndpointRules.h>

namespace Aws {
#ifndef AWS_GUARDDUTY_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<GuardDuty::Endpoint::GuardDutyClientConfiguration,
                                                   GuardDuty::Endpoint::GuardDutyBuiltInParameters,
                                                   GuardDuty::Endpoint::GuardDutyClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<GuardDuty::Endpoint::GuardDutyClientConfiguration,
                                                  GuardDuty::Endpoint::GuardDutyBuiltInParameters,
                                                  GuardDuty::Endpoint::GuardDutyClientContextParameters>;
}  // namespace Endpoint
#endif

namespace GuardDuty {
namespace Endpoint {
GuardDutyEndpointProvider::GuardDutyEndpointProvider()
    : GuardDutyDefaultEpProviderBase(Aws::GuardDuty::GuardDutyEndpointRules::GetRulesBlob(),
                                     Aws::GuardDuty::GuardDutyEndpointRules::RulesBlobSize) {}

void GuardDutyBuiltInParameters::SetFromClientConfiguration(const GuardDutyClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const GuardDutyClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void GuardDutyBuiltInParameters::SetFromClientConfiguration(const GuardDutyClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const GuardDutyClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void GuardDutyBuiltInParameters::SetServiceSpecificParameters(const GuardDutyClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace GuardDuty
}  // namespace Aws
