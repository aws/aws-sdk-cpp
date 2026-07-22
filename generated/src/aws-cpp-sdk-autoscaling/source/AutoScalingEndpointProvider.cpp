/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/AutoScalingEndpointProvider.h>
#include <aws/autoscaling/internal/AutoScalingEndpointRules.h>

namespace Aws {
namespace AutoScaling {
namespace Endpoint {
AutoScalingEndpointProvider::AutoScalingEndpointProvider()
    : AutoScalingDefaultEpProviderBase(Aws::AutoScaling::AutoScalingEndpointRules::GetRulesBlob(),
                                       Aws::AutoScaling::AutoScalingEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace AutoScaling
}  // namespace Aws
