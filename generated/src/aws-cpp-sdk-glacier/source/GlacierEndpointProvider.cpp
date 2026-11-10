/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glacier/GlacierEndpointProvider.h>
#include <aws/glacier/internal/GlacierEndpointRules.h>

namespace Aws {
#ifndef AWS_GLACIER_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<Glacier::Endpoint::GlacierClientConfiguration,
                                                   Glacier::Endpoint::GlacierBuiltInParameters,
                                                   Glacier::Endpoint::GlacierClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<Glacier::Endpoint::GlacierClientConfiguration,
                                                  Glacier::Endpoint::GlacierBuiltInParameters,
                                                  Glacier::Endpoint::GlacierClientContextParameters>;
}  // namespace Endpoint
#endif

namespace Glacier {
namespace Endpoint {
GlacierEndpointProvider::GlacierEndpointProvider()
    : GlacierDefaultEpProviderBase(Aws::Glacier::GlacierEndpointRules::GetRulesBlob(), Aws::Glacier::GlacierEndpointRules::RulesBlobSize) {}

void GlacierBuiltInParameters::SetFromClientConfiguration(const GlacierClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const GlacierClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void GlacierBuiltInParameters::SetFromClientConfiguration(const GlacierClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const GlacierClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void GlacierBuiltInParameters::SetServiceSpecificParameters(const GlacierClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace Glacier
}  // namespace Aws
