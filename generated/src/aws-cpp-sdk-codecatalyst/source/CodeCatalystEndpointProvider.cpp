/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecatalyst/CodeCatalystEndpointProvider.h>
#include <aws/codecatalyst/internal/CodeCatalystEndpointRules.h>

namespace Aws {
#ifndef AWS_CODECATALYST_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<CodeCatalyst::Endpoint::CodeCatalystClientConfiguration,
                                                   CodeCatalyst::Endpoint::CodeCatalystBuiltInParameters,
                                                   CodeCatalyst::Endpoint::CodeCatalystClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<CodeCatalyst::Endpoint::CodeCatalystClientConfiguration,
                                                  CodeCatalyst::Endpoint::CodeCatalystBuiltInParameters,
                                                  CodeCatalyst::Endpoint::CodeCatalystClientContextParameters>;
}  // namespace Endpoint
#endif

namespace CodeCatalyst {
namespace Endpoint {
CodeCatalystEndpointProvider::CodeCatalystEndpointProvider()
    : CodeCatalystDefaultEpProviderBase(Aws::CodeCatalyst::CodeCatalystEndpointRules::GetRulesBlob(),
                                        Aws::CodeCatalyst::CodeCatalystEndpointRules::RulesBlobSize) {}

void CodeCatalystBuiltInParameters::SetFromClientConfiguration(const CodeCatalystClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const CodeCatalystClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void CodeCatalystBuiltInParameters::SetFromClientConfiguration(const CodeCatalystClientConfiguration& config,
                                                               const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const CodeCatalystClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void CodeCatalystBuiltInParameters::SetServiceSpecificParameters(const CodeCatalystClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
}
}  // namespace Endpoint
}  // namespace CodeCatalyst
}  // namespace Aws
