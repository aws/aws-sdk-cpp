/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/keyspaces/KeyspacesEndpointProvider.h>
#include <aws/keyspaces/internal/KeyspacesEndpointRules.h>

namespace Aws {
#ifndef AWS_KEYSPACES_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<Keyspaces::Endpoint::KeyspacesClientConfiguration,
                                                   Keyspaces::Endpoint::KeyspacesBuiltInParameters,
                                                   Keyspaces::Endpoint::KeyspacesClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<Keyspaces::Endpoint::KeyspacesClientConfiguration,
                                                  Keyspaces::Endpoint::KeyspacesBuiltInParameters,
                                                  Keyspaces::Endpoint::KeyspacesClientContextParameters>;
}  // namespace Endpoint
#endif

namespace Keyspaces {
namespace Endpoint {
KeyspacesEndpointProvider::KeyspacesEndpointProvider()
    : KeyspacesDefaultEpProviderBase(Aws::Keyspaces::KeyspacesEndpointRules::GetRulesBlob(),
                                     Aws::Keyspaces::KeyspacesEndpointRules::RulesBlobSize) {}

void KeyspacesBuiltInParameters::SetFromClientConfiguration(const KeyspacesClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const KeyspacesClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void KeyspacesBuiltInParameters::SetFromClientConfiguration(const KeyspacesClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const KeyspacesClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void KeyspacesBuiltInParameters::SetServiceSpecificParameters(const KeyspacesClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace Keyspaces
}  // namespace Aws
