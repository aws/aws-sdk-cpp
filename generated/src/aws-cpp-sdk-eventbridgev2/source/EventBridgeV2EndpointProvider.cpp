/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eventbridgev2/EventBridgeV2EndpointProvider.h>
#include <aws/eventbridgev2/internal/EventBridgeV2EndpointRules.h>

namespace Aws {
#ifndef AWS_EVENTBRIDGEV2_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<EventBridgeV2::Endpoint::EventBridgeV2ClientConfiguration,
                                                   EventBridgeV2::Endpoint::EventBridgeV2BuiltInParameters,
                                                   EventBridgeV2::Endpoint::EventBridgeV2ClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<EventBridgeV2::Endpoint::EventBridgeV2ClientConfiguration,
                                                  EventBridgeV2::Endpoint::EventBridgeV2BuiltInParameters,
                                                  EventBridgeV2::Endpoint::EventBridgeV2ClientContextParameters>;
}  // namespace Endpoint
#endif

namespace EventBridgeV2 {
namespace Endpoint {
EventBridgeV2EndpointProvider::EventBridgeV2EndpointProvider()
    : EventBridgeV2DefaultEpProviderBase(Aws::EventBridgeV2::EventBridgeV2EndpointRules::GetRulesBlob(),
                                         Aws::EventBridgeV2::EventBridgeV2EndpointRules::RulesBlobSize) {}

void EventBridgeV2BuiltInParameters::SetFromClientConfiguration(const EventBridgeV2ClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const EventBridgeV2ClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void EventBridgeV2BuiltInParameters::SetFromClientConfiguration(const EventBridgeV2ClientConfiguration& config,
                                                                const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const EventBridgeV2ClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void EventBridgeV2BuiltInParameters::SetServiceSpecificParameters(const EventBridgeV2ClientConfiguration& config) {
  if (!config.accountId.empty()) {
    SetStringParameter("AccountId", config.accountId);
  }
  if (!config.accountIdEndpointMode.empty()) {
    SetStringParameter("AccountIdEndpointMode", config.accountIdEndpointMode);
  }
}
}  // namespace Endpoint
}  // namespace EventBridgeV2
}  // namespace Aws
