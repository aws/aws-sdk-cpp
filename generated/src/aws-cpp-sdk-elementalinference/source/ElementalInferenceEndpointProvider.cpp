/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elementalinference/ElementalInferenceEndpointProvider.h>
#include <aws/elementalinference/internal/ElementalInferenceEndpointRules.h>

namespace Aws {
#ifndef AWS_ELEMENTALINFERENCE_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<ElementalInference::Endpoint::ElementalInferenceClientConfiguration,
                                                   ElementalInference::Endpoint::ElementalInferenceBuiltInParameters,
                                                   ElementalInference::Endpoint::ElementalInferenceClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<ElementalInference::Endpoint::ElementalInferenceClientConfiguration,
                                                  ElementalInference::Endpoint::ElementalInferenceBuiltInParameters,
                                                  ElementalInference::Endpoint::ElementalInferenceClientContextParameters>;
}  // namespace Endpoint
#endif

namespace ElementalInference {
namespace Endpoint {
ElementalInferenceEndpointProvider::ElementalInferenceEndpointProvider()
    : ElementalInferenceDefaultEpProviderBase(Aws::ElementalInference::ElementalInferenceEndpointRules::GetRulesBlob(),
                                              Aws::ElementalInference::ElementalInferenceEndpointRules::RulesBlobSize) {}

void ElementalInferenceBuiltInParameters::SetFromClientConfiguration(const ElementalInferenceClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const ElementalInferenceClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void ElementalInferenceBuiltInParameters::SetFromClientConfiguration(const ElementalInferenceClientConfiguration& config,
                                                                     const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const ElementalInferenceClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void ElementalInferenceBuiltInParameters::SetServiceSpecificParameters(const ElementalInferenceClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace ElementalInference
}  // namespace Aws
