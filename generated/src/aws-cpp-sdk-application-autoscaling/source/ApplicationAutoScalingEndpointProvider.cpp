/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-autoscaling/ApplicationAutoScalingEndpointProvider.h>
#include <aws/application-autoscaling/internal/ApplicationAutoScalingEndpointRules.h>

namespace Aws {
#ifndef AWS_APPLICATIONAUTOSCALING_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<ApplicationAutoScaling::Endpoint::ApplicationAutoScalingClientConfiguration,
                                                   ApplicationAutoScaling::Endpoint::ApplicationAutoScalingBuiltInParameters,
                                                   ApplicationAutoScaling::Endpoint::ApplicationAutoScalingClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<ApplicationAutoScaling::Endpoint::ApplicationAutoScalingClientConfiguration,
                                                  ApplicationAutoScaling::Endpoint::ApplicationAutoScalingBuiltInParameters,
                                                  ApplicationAutoScaling::Endpoint::ApplicationAutoScalingClientContextParameters>;
}  // namespace Endpoint
#endif

namespace ApplicationAutoScaling {
namespace Endpoint {
ApplicationAutoScalingEndpointProvider::ApplicationAutoScalingEndpointProvider()
    : ApplicationAutoScalingDefaultEpProviderBase(Aws::ApplicationAutoScaling::ApplicationAutoScalingEndpointRules::GetRulesBlob(),
                                                  Aws::ApplicationAutoScaling::ApplicationAutoScalingEndpointRules::RulesBlobSize) {}

void ApplicationAutoScalingBuiltInParameters::SetFromClientConfiguration(const ApplicationAutoScalingClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const ApplicationAutoScalingClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void ApplicationAutoScalingBuiltInParameters::SetFromClientConfiguration(const ApplicationAutoScalingClientConfiguration& config,
                                                                         const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const ApplicationAutoScalingClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void ApplicationAutoScalingBuiltInParameters::SetServiceSpecificParameters(const ApplicationAutoScalingClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace ApplicationAutoScaling
}  // namespace Aws
