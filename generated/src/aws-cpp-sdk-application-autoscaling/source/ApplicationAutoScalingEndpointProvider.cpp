/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-autoscaling/ApplicationAutoScalingEndpointProvider.h>
#include <aws/application-autoscaling/internal/ApplicationAutoScalingEndpointRules.h>

namespace Aws {
namespace ApplicationAutoScaling {
namespace Endpoint {
ApplicationAutoScalingEndpointProvider::ApplicationAutoScalingEndpointProvider()
    : ApplicationAutoScalingDefaultEpProviderBase(Aws::ApplicationAutoScaling::ApplicationAutoScalingEndpointRules::GetRulesBlob(),
                                                  Aws::ApplicationAutoScaling::ApplicationAutoScalingEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace ApplicationAutoScaling
}  // namespace Aws
