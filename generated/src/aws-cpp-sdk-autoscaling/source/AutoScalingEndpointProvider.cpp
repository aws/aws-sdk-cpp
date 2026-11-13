/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/AutoScalingEndpointProvider.h>
#include <aws/autoscaling/internal/AutoScalingEndpointRules.h>

namespace Aws {
#ifndef AWS_AUTOSCALING_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<AutoScaling::Endpoint::AutoScalingClientConfiguration,
                                                   AutoScaling::Endpoint::AutoScalingBuiltInParameters,
                                                   AutoScaling::Endpoint::AutoScalingClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<AutoScaling::Endpoint::AutoScalingClientConfiguration,
                                                  AutoScaling::Endpoint::AutoScalingBuiltInParameters,
                                                  AutoScaling::Endpoint::AutoScalingClientContextParameters>;
}  // namespace Endpoint
#endif

namespace AutoScaling {
namespace Endpoint {
AutoScalingEndpointProvider::AutoScalingEndpointProvider()
    : AutoScalingDefaultEpProviderBase(Aws::AutoScaling::AutoScalingEndpointRules::GetRulesBlob(),
                                       Aws::AutoScaling::AutoScalingEndpointRules::RulesBlobSize) {}

void AutoScalingBuiltInParameters::SetFromClientConfiguration(const AutoScalingClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const AutoScalingClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void AutoScalingBuiltInParameters::SetFromClientConfiguration(const AutoScalingClientConfiguration& config,
                                                              const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const AutoScalingClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void AutoScalingBuiltInParameters::SetServiceSpecificParameters(const AutoScalingClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace AutoScaling
}  // namespace Aws
