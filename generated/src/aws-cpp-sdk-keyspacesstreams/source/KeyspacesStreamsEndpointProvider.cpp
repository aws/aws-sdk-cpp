/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/keyspacesstreams/KeyspacesStreamsEndpointProvider.h>
#include <aws/keyspacesstreams/internal/KeyspacesStreamsEndpointRules.h>

namespace Aws {
#ifndef AWS_KEYSPACESSTREAMS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<KeyspacesStreams::Endpoint::KeyspacesStreamsClientConfiguration,
                                                   KeyspacesStreams::Endpoint::KeyspacesStreamsBuiltInParameters,
                                                   KeyspacesStreams::Endpoint::KeyspacesStreamsClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<KeyspacesStreams::Endpoint::KeyspacesStreamsClientConfiguration,
                                                  KeyspacesStreams::Endpoint::KeyspacesStreamsBuiltInParameters,
                                                  KeyspacesStreams::Endpoint::KeyspacesStreamsClientContextParameters>;
}  // namespace Endpoint
#endif

namespace KeyspacesStreams {
namespace Endpoint {
KeyspacesStreamsEndpointProvider::KeyspacesStreamsEndpointProvider()
    : KeyspacesStreamsDefaultEpProviderBase(Aws::KeyspacesStreams::KeyspacesStreamsEndpointRules::GetRulesBlob(),
                                            Aws::KeyspacesStreams::KeyspacesStreamsEndpointRules::RulesBlobSize) {}

void KeyspacesStreamsBuiltInParameters::SetFromClientConfiguration(const KeyspacesStreamsClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const KeyspacesStreamsClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void KeyspacesStreamsBuiltInParameters::SetFromClientConfiguration(const KeyspacesStreamsClientConfiguration& config,
                                                                   const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const KeyspacesStreamsClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void KeyspacesStreamsBuiltInParameters::SetServiceSpecificParameters(const KeyspacesStreamsClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
}
}  // namespace Endpoint
}  // namespace KeyspacesStreams
}  // namespace Aws
