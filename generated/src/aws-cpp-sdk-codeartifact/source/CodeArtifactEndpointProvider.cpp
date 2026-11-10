/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeartifact/CodeArtifactEndpointProvider.h>
#include <aws/codeartifact/internal/CodeArtifactEndpointRules.h>

namespace Aws {
#ifndef AWS_CODEARTIFACT_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<CodeArtifact::Endpoint::CodeArtifactClientConfiguration,
                                                   CodeArtifact::Endpoint::CodeArtifactBuiltInParameters,
                                                   CodeArtifact::Endpoint::CodeArtifactClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<CodeArtifact::Endpoint::CodeArtifactClientConfiguration,
                                                  CodeArtifact::Endpoint::CodeArtifactBuiltInParameters,
                                                  CodeArtifact::Endpoint::CodeArtifactClientContextParameters>;
}  // namespace Endpoint
#endif

namespace CodeArtifact {
namespace Endpoint {
CodeArtifactEndpointProvider::CodeArtifactEndpointProvider()
    : CodeArtifactDefaultEpProviderBase(Aws::CodeArtifact::CodeArtifactEndpointRules::GetRulesBlob(),
                                        Aws::CodeArtifact::CodeArtifactEndpointRules::RulesBlobSize) {}

void CodeArtifactBuiltInParameters::SetFromClientConfiguration(const CodeArtifactClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const CodeArtifactClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void CodeArtifactBuiltInParameters::SetFromClientConfiguration(const CodeArtifactClientConfiguration& config,
                                                               const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const CodeArtifactClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void CodeArtifactBuiltInParameters::SetServiceSpecificParameters(const CodeArtifactClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace CodeArtifact
}  // namespace Aws
