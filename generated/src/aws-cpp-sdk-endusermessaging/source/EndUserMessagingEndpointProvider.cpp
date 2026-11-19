/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/endusermessaging/EndUserMessagingEndpointProvider.h>
#include <aws/endusermessaging/internal/EndUserMessagingEndpointRules.h>

namespace Aws {
#ifndef AWS_ENDUSERMESSAGING_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<EndUserMessaging::Endpoint::EndUserMessagingClientConfiguration,
                                                   EndUserMessaging::Endpoint::EndUserMessagingBuiltInParameters,
                                                   EndUserMessaging::Endpoint::EndUserMessagingClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<EndUserMessaging::Endpoint::EndUserMessagingClientConfiguration,
                                                  EndUserMessaging::Endpoint::EndUserMessagingBuiltInParameters,
                                                  EndUserMessaging::Endpoint::EndUserMessagingClientContextParameters>;
}  // namespace Endpoint
#endif

namespace EndUserMessaging {
namespace Endpoint {
EndUserMessagingEndpointProvider::EndUserMessagingEndpointProvider()
    : EndUserMessagingDefaultEpProviderBase(Aws::EndUserMessaging::EndUserMessagingEndpointRules::GetRulesBlob(),
                                            Aws::EndUserMessaging::EndUserMessagingEndpointRules::RulesBlobSize) {}

void EndUserMessagingBuiltInParameters::SetFromClientConfiguration(const EndUserMessagingClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const EndUserMessagingClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void EndUserMessagingBuiltInParameters::SetFromClientConfiguration(const EndUserMessagingClientConfiguration& config,
                                                                   const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const EndUserMessagingClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void EndUserMessagingBuiltInParameters::SetServiceSpecificParameters(const EndUserMessagingClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace EndUserMessaging
}  // namespace Aws
