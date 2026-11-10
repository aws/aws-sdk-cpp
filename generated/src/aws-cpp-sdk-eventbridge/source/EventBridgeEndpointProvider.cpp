/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eventbridge/EventBridgeEndpointProvider.h>
#include <aws/eventbridge/internal/EventBridgeEndpointRules.h>

namespace Aws {
#ifndef AWS_EVENTBRIDGE_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<EventBridge::Endpoint::EventBridgeClientConfiguration,
                                                   EventBridge::Endpoint::EventBridgeBuiltInParameters,
                                                   EventBridge::Endpoint::EventBridgeClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<EventBridge::Endpoint::EventBridgeClientConfiguration,
                                                  EventBridge::Endpoint::EventBridgeBuiltInParameters,
                                                  EventBridge::Endpoint::EventBridgeClientContextParameters>;
}  // namespace Endpoint
#endif

namespace EventBridge {
namespace Endpoint {
EventBridgeEndpointProvider::EventBridgeEndpointProvider()
    : EventBridgeDefaultEpProviderBase(Aws::EventBridge::EventBridgeEndpointRules::GetRulesBlob(),
                                       Aws::EventBridge::EventBridgeEndpointRules::RulesBlobSize) {}

void EventBridgeBuiltInParameters::SetFromClientConfiguration(const EventBridgeClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const EventBridgeClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void EventBridgeBuiltInParameters::SetFromClientConfiguration(const EventBridgeClientConfiguration& config,
                                                              const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const EventBridgeClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void EventBridgeBuiltInParameters::SetServiceSpecificParameters(const EventBridgeClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace EventBridge
}  // namespace Aws
