/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/budgets/BudgetsEndpointProvider.h>
#include <aws/budgets/internal/BudgetsEndpointRules.h>

namespace Aws {
namespace Budgets {
namespace Endpoint {
BudgetsEndpointProvider::BudgetsEndpointProvider()
    : BudgetsDefaultEpProviderBase(Aws::Budgets::BudgetsEndpointRules::GetRulesBlob(), Aws::Budgets::BudgetsEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace Budgets
}  // namespace Aws
