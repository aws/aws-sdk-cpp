/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-messaging/ChimeSDKMessagingEndpointProvider.h>
#include <aws/chime-sdk-messaging/internal/ChimeSDKMessagingEndpointRules.h>

namespace Aws {
#ifndef AWS_CHIMESDKMESSAGING_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<ChimeSDKMessaging::Endpoint::ChimeSDKMessagingClientConfiguration,
                                                   ChimeSDKMessaging::Endpoint::ChimeSDKMessagingBuiltInParameters,
                                                   ChimeSDKMessaging::Endpoint::ChimeSDKMessagingClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<ChimeSDKMessaging::Endpoint::ChimeSDKMessagingClientConfiguration,
                                                  ChimeSDKMessaging::Endpoint::ChimeSDKMessagingBuiltInParameters,
                                                  ChimeSDKMessaging::Endpoint::ChimeSDKMessagingClientContextParameters>;
}  // namespace Endpoint
#endif

namespace ChimeSDKMessaging {
namespace Endpoint {
ChimeSDKMessagingEndpointProvider::ChimeSDKMessagingEndpointProvider()
    : ChimeSDKMessagingDefaultEpProviderBase(Aws::ChimeSDKMessaging::ChimeSDKMessagingEndpointRules::GetRulesBlob(),
                                             Aws::ChimeSDKMessaging::ChimeSDKMessagingEndpointRules::RulesBlobSize) {}

void ChimeSDKMessagingBuiltInParameters::SetFromClientConfiguration(const ChimeSDKMessagingClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const ChimeSDKMessagingClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void ChimeSDKMessagingBuiltInParameters::SetFromClientConfiguration(const ChimeSDKMessagingClientConfiguration& config,
                                                                    const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const ChimeSDKMessagingClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void ChimeSDKMessagingBuiltInParameters::SetServiceSpecificParameters(const ChimeSDKMessagingClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace ChimeSDKMessaging
}  // namespace Aws
