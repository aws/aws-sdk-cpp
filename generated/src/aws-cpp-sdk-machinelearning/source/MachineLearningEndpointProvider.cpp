/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/machinelearning/MachineLearningEndpointProvider.h>
#include <aws/machinelearning/internal/MachineLearningEndpointRules.h>

namespace Aws {
#ifndef AWS_MACHINELEARNING_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<MachineLearning::Endpoint::MachineLearningClientConfiguration,
                                                   MachineLearning::Endpoint::MachineLearningBuiltInParameters,
                                                   MachineLearning::Endpoint::MachineLearningClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<MachineLearning::Endpoint::MachineLearningClientConfiguration,
                                                  MachineLearning::Endpoint::MachineLearningBuiltInParameters,
                                                  MachineLearning::Endpoint::MachineLearningClientContextParameters>;
}  // namespace Endpoint
#endif

namespace MachineLearning {
namespace Endpoint {
MachineLearningEndpointProvider::MachineLearningEndpointProvider()
    : MachineLearningDefaultEpProviderBase(Aws::MachineLearning::MachineLearningEndpointRules::GetRulesBlob(),
                                           Aws::MachineLearning::MachineLearningEndpointRules::RulesBlobSize) {}

void MachineLearningBuiltInParameters::SetFromClientConfiguration(const MachineLearningClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const MachineLearningClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void MachineLearningBuiltInParameters::SetFromClientConfiguration(const MachineLearningClientConfiguration& config,
                                                                  const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const MachineLearningClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void MachineLearningBuiltInParameters::SetServiceSpecificParameters(const MachineLearningClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace MachineLearning
}  // namespace Aws
