/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/artifact/ArtifactEndpointProvider.h>
#include <aws/artifact/internal/ArtifactEndpointRules.h>

namespace Aws {
#ifndef AWS_ARTIFACT_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<Artifact::Endpoint::ArtifactClientConfiguration,
                                                   Artifact::Endpoint::ArtifactBuiltInParameters,
                                                   Artifact::Endpoint::ArtifactClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<Artifact::Endpoint::ArtifactClientConfiguration,
                                                  Artifact::Endpoint::ArtifactBuiltInParameters,
                                                  Artifact::Endpoint::ArtifactClientContextParameters>;
}  // namespace Endpoint
#endif

namespace Artifact {
namespace Endpoint {
ArtifactEndpointProvider::ArtifactEndpointProvider()
    : ArtifactDefaultEpProviderBase(Aws::Artifact::ArtifactEndpointRules::GetRulesBlob(),
                                    Aws::Artifact::ArtifactEndpointRules::RulesBlobSize) {}

void ArtifactBuiltInParameters::SetFromClientConfiguration(const ArtifactClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const ArtifactClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void ArtifactBuiltInParameters::SetFromClientConfiguration(const ArtifactClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const ArtifactClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void ArtifactBuiltInParameters::SetServiceSpecificParameters(const ArtifactClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace Artifact
}  // namespace Aws
