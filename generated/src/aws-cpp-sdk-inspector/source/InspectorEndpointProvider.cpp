/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/InspectorEndpointProvider.h>
#include <aws/inspector/internal/InspectorEndpointRules.h>

namespace Aws {
#ifndef AWS_INSPECTOR_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<Inspector::Endpoint::InspectorClientConfiguration,
                                                   Inspector::Endpoint::InspectorBuiltInParameters,
                                                   Inspector::Endpoint::InspectorClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<Inspector::Endpoint::InspectorClientConfiguration,
                                                  Inspector::Endpoint::InspectorBuiltInParameters,
                                                  Inspector::Endpoint::InspectorClientContextParameters>;
}  // namespace Endpoint
#endif

namespace Inspector {
namespace Endpoint {
InspectorEndpointProvider::InspectorEndpointProvider()
    : InspectorDefaultEpProviderBase(Aws::Inspector::InspectorEndpointRules::GetRulesBlob(),
                                     Aws::Inspector::InspectorEndpointRules::RulesBlobSize) {}

void InspectorBuiltInParameters::SetFromClientConfiguration(const InspectorClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const InspectorClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void InspectorBuiltInParameters::SetFromClientConfiguration(const InspectorClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const InspectorClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void InspectorBuiltInParameters::SetServiceSpecificParameters(const InspectorClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace Inspector
}  // namespace Aws
