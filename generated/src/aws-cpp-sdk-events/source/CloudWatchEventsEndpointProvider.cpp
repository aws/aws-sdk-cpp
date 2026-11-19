/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/events/CloudWatchEventsEndpointProvider.h>
#include <aws/events/internal/CloudWatchEventsEndpointRules.h>

namespace Aws {
#ifndef AWS_CLOUDWATCHEVENTS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<CloudWatchEvents::Endpoint::CloudWatchEventsClientConfiguration,
                                                   CloudWatchEvents::Endpoint::CloudWatchEventsBuiltInParameters,
                                                   CloudWatchEvents::Endpoint::CloudWatchEventsClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<CloudWatchEvents::Endpoint::CloudWatchEventsClientConfiguration,
                                                  CloudWatchEvents::Endpoint::CloudWatchEventsBuiltInParameters,
                                                  CloudWatchEvents::Endpoint::CloudWatchEventsClientContextParameters>;
}  // namespace Endpoint
#endif

namespace CloudWatchEvents {
namespace Endpoint {
CloudWatchEventsEndpointProvider::CloudWatchEventsEndpointProvider()
    : CloudWatchEventsDefaultEpProviderBase(Aws::CloudWatchEvents::CloudWatchEventsEndpointRules::GetRulesBlob(),
                                            Aws::CloudWatchEvents::CloudWatchEventsEndpointRules::RulesBlobSize) {}

void CloudWatchEventsBuiltInParameters::SetFromClientConfiguration(const CloudWatchEventsClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const CloudWatchEventsClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void CloudWatchEventsBuiltInParameters::SetFromClientConfiguration(const CloudWatchEventsClientConfiguration& config,
                                                                   const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const CloudWatchEventsClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void CloudWatchEventsBuiltInParameters::SetServiceSpecificParameters(const CloudWatchEventsClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace CloudWatchEvents
}  // namespace Aws
