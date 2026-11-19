/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/MainframeModernizationEndpointProvider.h>
#include <aws/m2/internal/MainframeModernizationEndpointRules.h>

namespace Aws {
#ifndef AWS_MAINFRAMEMODERNIZATION_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<MainframeModernization::Endpoint::MainframeModernizationClientConfiguration,
                                                   MainframeModernization::Endpoint::MainframeModernizationBuiltInParameters,
                                                   MainframeModernization::Endpoint::MainframeModernizationClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<MainframeModernization::Endpoint::MainframeModernizationClientConfiguration,
                                                  MainframeModernization::Endpoint::MainframeModernizationBuiltInParameters,
                                                  MainframeModernization::Endpoint::MainframeModernizationClientContextParameters>;
}  // namespace Endpoint
#endif

namespace MainframeModernization {
namespace Endpoint {
MainframeModernizationEndpointProvider::MainframeModernizationEndpointProvider()
    : MainframeModernizationDefaultEpProviderBase(Aws::MainframeModernization::MainframeModernizationEndpointRules::GetRulesBlob(),
                                                  Aws::MainframeModernization::MainframeModernizationEndpointRules::RulesBlobSize) {}

void MainframeModernizationBuiltInParameters::SetFromClientConfiguration(const MainframeModernizationClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const MainframeModernizationClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void MainframeModernizationBuiltInParameters::SetFromClientConfiguration(const MainframeModernizationClientConfiguration& config,
                                                                         const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const MainframeModernizationClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void MainframeModernizationBuiltInParameters::SetServiceSpecificParameters(const MainframeModernizationClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace MainframeModernization
}  // namespace Aws
