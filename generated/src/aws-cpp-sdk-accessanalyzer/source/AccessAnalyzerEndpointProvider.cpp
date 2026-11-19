/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/AccessAnalyzerEndpointProvider.h>
#include <aws/accessanalyzer/internal/AccessAnalyzerEndpointRules.h>

namespace Aws {
#ifndef AWS_ACCESSANALYZER_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<AccessAnalyzer::Endpoint::AccessAnalyzerClientConfiguration,
                                                   AccessAnalyzer::Endpoint::AccessAnalyzerBuiltInParameters,
                                                   AccessAnalyzer::Endpoint::AccessAnalyzerClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<AccessAnalyzer::Endpoint::AccessAnalyzerClientConfiguration,
                                                  AccessAnalyzer::Endpoint::AccessAnalyzerBuiltInParameters,
                                                  AccessAnalyzer::Endpoint::AccessAnalyzerClientContextParameters>;
}  // namespace Endpoint
#endif

namespace AccessAnalyzer {
namespace Endpoint {
AccessAnalyzerEndpointProvider::AccessAnalyzerEndpointProvider()
    : AccessAnalyzerDefaultEpProviderBase(Aws::AccessAnalyzer::AccessAnalyzerEndpointRules::GetRulesBlob(),
                                          Aws::AccessAnalyzer::AccessAnalyzerEndpointRules::RulesBlobSize) {}

void AccessAnalyzerBuiltInParameters::SetFromClientConfiguration(const AccessAnalyzerClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const AccessAnalyzerClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void AccessAnalyzerBuiltInParameters::SetFromClientConfiguration(const AccessAnalyzerClientConfiguration& config,
                                                                 const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const AccessAnalyzerClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void AccessAnalyzerBuiltInParameters::SetServiceSpecificParameters(const AccessAnalyzerClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace AccessAnalyzer
}  // namespace Aws
