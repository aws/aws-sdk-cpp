/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer-automation/ComputeOptimizerAutomationEndpointProvider.h>
#include <aws/compute-optimizer-automation/internal/ComputeOptimizerAutomationEndpointRules.h>

namespace Aws {
namespace ComputeOptimizerAutomation {
namespace Endpoint {
ComputeOptimizerAutomationEndpointProvider::ComputeOptimizerAutomationEndpointProvider()
    : ComputeOptimizerAutomationDefaultEpProviderBase(
          Aws::ComputeOptimizerAutomation::ComputeOptimizerAutomationEndpointRules::GetRulesBlob(),
          Aws::ComputeOptimizerAutomation::ComputeOptimizerAutomationEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
