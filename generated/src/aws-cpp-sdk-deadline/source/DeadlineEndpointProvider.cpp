/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/DeadlineEndpointProvider.h>
#include <aws/deadline/internal/DeadlineEndpointRules.h>

namespace Aws {
#ifndef AWS_DEADLINE_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<deadline::Endpoint::DeadlineClientConfiguration,
                                                   deadline::Endpoint::DeadlineBuiltInParameters,
                                                   deadline::Endpoint::DeadlineClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<deadline::Endpoint::DeadlineClientConfiguration,
                                                  deadline::Endpoint::DeadlineBuiltInParameters,
                                                  deadline::Endpoint::DeadlineClientContextParameters>;
}  // namespace Endpoint
#endif

namespace deadline {
namespace Endpoint {
DeadlineEndpointProvider::DeadlineEndpointProvider()
    : DeadlineDefaultEpProviderBase(Aws::deadline::DeadlineEndpointRules::GetRulesBlob(),
                                    Aws::deadline::DeadlineEndpointRules::RulesBlobSize) {}

void DeadlineBuiltInParameters::SetFromClientConfiguration(const DeadlineClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const DeadlineClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void DeadlineBuiltInParameters::SetFromClientConfiguration(const DeadlineClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const DeadlineClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void DeadlineBuiltInParameters::SetServiceSpecificParameters(const DeadlineClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace deadline
}  // namespace Aws
