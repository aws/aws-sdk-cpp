/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/ChimeEndpointProvider.h>
#include <aws/chime/internal/ChimeEndpointRules.h>

namespace Aws {
#ifndef AWS_CHIME_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<Chime::Endpoint::ChimeClientConfiguration, Chime::Endpoint::ChimeBuiltInParameters,
                                                   Chime::Endpoint::ChimeClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<Chime::Endpoint::ChimeClientConfiguration, Chime::Endpoint::ChimeBuiltInParameters,
                                                  Chime::Endpoint::ChimeClientContextParameters>;
}  // namespace Endpoint
#endif

namespace Chime {
namespace Endpoint {
ChimeEndpointProvider::ChimeEndpointProvider()
    : ChimeDefaultEpProviderBase(Aws::Chime::ChimeEndpointRules::GetRulesBlob(), Aws::Chime::ChimeEndpointRules::RulesBlobSize) {}

void ChimeBuiltInParameters::SetFromClientConfiguration(const ChimeClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const ChimeClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void ChimeBuiltInParameters::SetFromClientConfiguration(const ChimeClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const ChimeClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void ChimeBuiltInParameters::SetServiceSpecificParameters(const ChimeClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace Chime
}  // namespace Aws
