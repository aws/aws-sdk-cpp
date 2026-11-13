/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/account/AccountEndpointProvider.h>
#include <aws/account/internal/AccountEndpointRules.h>

namespace Aws {
#ifndef AWS_ACCOUNT_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<Account::Endpoint::AccountClientConfiguration,
                                                   Account::Endpoint::AccountBuiltInParameters,
                                                   Account::Endpoint::AccountClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<Account::Endpoint::AccountClientConfiguration,
                                                  Account::Endpoint::AccountBuiltInParameters,
                                                  Account::Endpoint::AccountClientContextParameters>;
}  // namespace Endpoint
#endif

namespace Account {
namespace Endpoint {
AccountEndpointProvider::AccountEndpointProvider()
    : AccountDefaultEpProviderBase(Aws::Account::AccountEndpointRules::GetRulesBlob(), Aws::Account::AccountEndpointRules::RulesBlobSize) {}

void AccountBuiltInParameters::SetFromClientConfiguration(const AccountClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const AccountClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void AccountBuiltInParameters::SetFromClientConfiguration(const AccountClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const AccountClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void AccountBuiltInParameters::SetServiceSpecificParameters(const AccountClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace Account
}  // namespace Aws
