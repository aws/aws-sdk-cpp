/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/budgets/BudgetsEndpointProvider.h>
#include <aws/budgets/internal/BudgetsEndpointRules.h>

namespace Aws {
#ifndef AWS_BUDGETS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<Budgets::Endpoint::BudgetsClientConfiguration,
                                                   Budgets::Endpoint::BudgetsBuiltInParameters,
                                                   Budgets::Endpoint::BudgetsClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<Budgets::Endpoint::BudgetsClientConfiguration,
                                                  Budgets::Endpoint::BudgetsBuiltInParameters,
                                                  Budgets::Endpoint::BudgetsClientContextParameters>;
}  // namespace Endpoint
#endif

namespace Budgets {
namespace Endpoint {
BudgetsEndpointProvider::BudgetsEndpointProvider()
    : BudgetsDefaultEpProviderBase(Aws::Budgets::BudgetsEndpointRules::GetRulesBlob(), Aws::Budgets::BudgetsEndpointRules::RulesBlobSize) {}

void BudgetsBuiltInParameters::SetFromClientConfiguration(const BudgetsClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const BudgetsClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void BudgetsBuiltInParameters::SetFromClientConfiguration(const BudgetsClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const BudgetsClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void BudgetsBuiltInParameters::SetServiceSpecificParameters(const BudgetsClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace Budgets
}  // namespace Aws
