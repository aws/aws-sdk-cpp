/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codestar-connections/CodeStarconnectionsEndpointProvider.h>
#include <aws/codestar-connections/internal/CodeStarconnectionsEndpointRules.h>

namespace Aws {
#ifndef AWS_CODESTARCONNECTIONS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<CodeStarconnections::Endpoint::CodeStarconnectionsClientConfiguration,
                                                   CodeStarconnections::Endpoint::CodeStarconnectionsBuiltInParameters,
                                                   CodeStarconnections::Endpoint::CodeStarconnectionsClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<CodeStarconnections::Endpoint::CodeStarconnectionsClientConfiguration,
                                                  CodeStarconnections::Endpoint::CodeStarconnectionsBuiltInParameters,
                                                  CodeStarconnections::Endpoint::CodeStarconnectionsClientContextParameters>;
}  // namespace Endpoint
#endif

namespace CodeStarconnections {
namespace Endpoint {
CodeStarconnectionsEndpointProvider::CodeStarconnectionsEndpointProvider()
    : CodeStarconnectionsDefaultEpProviderBase(Aws::CodeStarconnections::CodeStarconnectionsEndpointRules::GetRulesBlob(),
                                               Aws::CodeStarconnections::CodeStarconnectionsEndpointRules::RulesBlobSize) {}

void CodeStarconnectionsBuiltInParameters::SetFromClientConfiguration(const CodeStarconnectionsClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const CodeStarconnectionsClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void CodeStarconnectionsBuiltInParameters::SetFromClientConfiguration(const CodeStarconnectionsClientConfiguration& config,
                                                                      const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const CodeStarconnectionsClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void CodeStarconnectionsBuiltInParameters::SetServiceSpecificParameters(const CodeStarconnectionsClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace CodeStarconnections
}  // namespace Aws
