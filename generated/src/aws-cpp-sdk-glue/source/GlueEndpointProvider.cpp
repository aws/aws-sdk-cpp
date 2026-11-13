/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/GlueEndpointProvider.h>
#include <aws/glue/internal/GlueEndpointRules.h>

namespace Aws {
#ifndef AWS_GLUE_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<Glue::Endpoint::GlueClientConfiguration, Glue::Endpoint::GlueBuiltInParameters,
                                                   Glue::Endpoint::GlueClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<Glue::Endpoint::GlueClientConfiguration, Glue::Endpoint::GlueBuiltInParameters,
                                                  Glue::Endpoint::GlueClientContextParameters>;
}  // namespace Endpoint
#endif

namespace Glue {
namespace Endpoint {
GlueEndpointProvider::GlueEndpointProvider()
    : GlueDefaultEpProviderBase(Aws::Glue::GlueEndpointRules::GetRulesBlob(), Aws::Glue::GlueEndpointRules::RulesBlobSize) {}

void GlueBuiltInParameters::SetFromClientConfiguration(const GlueClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const GlueClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void GlueBuiltInParameters::SetFromClientConfiguration(const GlueClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const GlueClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void GlueBuiltInParameters::SetServiceSpecificParameters(const GlueClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace Glue
}  // namespace Aws
