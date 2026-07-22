/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/BillingConductorEndpointProvider.h>
#include <aws/billingconductor/internal/BillingConductorEndpointRules.h>

namespace Aws {
namespace BillingConductor {
namespace Endpoint {
BillingConductorEndpointProvider::BillingConductorEndpointProvider()
    : BillingConductorDefaultEpProviderBase(Aws::BillingConductor::BillingConductorEndpointRules::GetRulesBlob(),
                                            Aws::BillingConductor::BillingConductorEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace BillingConductor
}  // namespace Aws
