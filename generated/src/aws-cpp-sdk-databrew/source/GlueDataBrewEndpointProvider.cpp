/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/GlueDataBrewEndpointProvider.h>
#include <aws/databrew/internal/GlueDataBrewEndpointRules.h>

namespace Aws {
#ifndef AWS_GLUEDATABREW_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<GlueDataBrew::Endpoint::GlueDataBrewClientConfiguration,
                                                   GlueDataBrew::Endpoint::GlueDataBrewBuiltInParameters,
                                                   GlueDataBrew::Endpoint::GlueDataBrewClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<GlueDataBrew::Endpoint::GlueDataBrewClientConfiguration,
                                                  GlueDataBrew::Endpoint::GlueDataBrewBuiltInParameters,
                                                  GlueDataBrew::Endpoint::GlueDataBrewClientContextParameters>;
}  // namespace Endpoint
#endif

namespace GlueDataBrew {
namespace Endpoint {
GlueDataBrewEndpointProvider::GlueDataBrewEndpointProvider()
    : GlueDataBrewDefaultEpProviderBase(Aws::GlueDataBrew::GlueDataBrewEndpointRules::GetRulesBlob(),
                                        Aws::GlueDataBrew::GlueDataBrewEndpointRules::RulesBlobSize) {}

void GlueDataBrewBuiltInParameters::SetFromClientConfiguration(const GlueDataBrewClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const GlueDataBrewClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void GlueDataBrewBuiltInParameters::SetFromClientConfiguration(const GlueDataBrewClientConfiguration& config,
                                                               const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const GlueDataBrewClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void GlueDataBrewBuiltInParameters::SetServiceSpecificParameters(const GlueDataBrewClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace GlueDataBrew
}  // namespace Aws
