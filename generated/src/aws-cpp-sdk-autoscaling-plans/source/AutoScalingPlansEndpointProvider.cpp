/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling-plans/AutoScalingPlansEndpointProvider.h>
#include <aws/autoscaling-plans/internal/AutoScalingPlansEndpointRules.h>

namespace Aws {
#ifndef AWS_AUTOSCALINGPLANS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<AutoScalingPlans::Endpoint::AutoScalingPlansClientConfiguration,
                                                   AutoScalingPlans::Endpoint::AutoScalingPlansBuiltInParameters,
                                                   AutoScalingPlans::Endpoint::AutoScalingPlansClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<AutoScalingPlans::Endpoint::AutoScalingPlansClientConfiguration,
                                                  AutoScalingPlans::Endpoint::AutoScalingPlansBuiltInParameters,
                                                  AutoScalingPlans::Endpoint::AutoScalingPlansClientContextParameters>;
}  // namespace Endpoint
#endif

namespace AutoScalingPlans {
namespace Endpoint {
AutoScalingPlansEndpointProvider::AutoScalingPlansEndpointProvider()
    : AutoScalingPlansDefaultEpProviderBase(Aws::AutoScalingPlans::AutoScalingPlansEndpointRules::GetRulesBlob(),
                                            Aws::AutoScalingPlans::AutoScalingPlansEndpointRules::RulesBlobSize) {}

void AutoScalingPlansBuiltInParameters::SetFromClientConfiguration(const AutoScalingPlansClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const AutoScalingPlansClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void AutoScalingPlansBuiltInParameters::SetFromClientConfiguration(const AutoScalingPlansClientConfiguration& config,
                                                                   const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const AutoScalingPlansClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void AutoScalingPlansBuiltInParameters::SetServiceSpecificParameters(const AutoScalingPlansClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace AutoScalingPlans
}  // namespace Aws
