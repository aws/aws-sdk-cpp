/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/BillingEndpointProvider.h>
#include <aws/billing/internal/BillingEndpointRules.h>

namespace Aws {
namespace Billing {
namespace Endpoint {
BillingEndpointProvider::BillingEndpointProvider()
    : BillingDefaultEpProviderBase(Aws::Billing::BillingEndpointRules::GetRulesBlob(), Aws::Billing::BillingEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace Billing
}  // namespace Aws
