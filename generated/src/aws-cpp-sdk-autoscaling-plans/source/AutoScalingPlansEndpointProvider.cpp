/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling-plans/AutoScalingPlansEndpointProvider.h>
#include <aws/autoscaling-plans/internal/AutoScalingPlansEndpointRules.h>

namespace Aws {
namespace AutoScalingPlans {
namespace Endpoint {
AutoScalingPlansEndpointProvider::AutoScalingPlansEndpointProvider()
    : AutoScalingPlansDefaultEpProviderBase(Aws::AutoScalingPlans::AutoScalingPlansEndpointRules::GetRulesBlob(),
                                            Aws::AutoScalingPlans::AutoScalingPlansEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace AutoScalingPlans
}  // namespace Aws
