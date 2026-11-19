/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/account-access/AccountAccessEndpointProvider.h>
#include <aws/account-access/internal/AccountAccessEndpointRules.h>

namespace Aws {
#ifndef AWS_ACCOUNTACCESS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<AccountAccess::Endpoint::AccountAccessClientConfiguration,
                                                   AccountAccess::Endpoint::AccountAccessBuiltInParameters,
                                                   AccountAccess::Endpoint::AccountAccessClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<AccountAccess::Endpoint::AccountAccessClientConfiguration,
                                                  AccountAccess::Endpoint::AccountAccessBuiltInParameters,
                                                  AccountAccess::Endpoint::AccountAccessClientContextParameters>;
}  // namespace Endpoint
#endif

namespace AccountAccess {
namespace Endpoint {
AccountAccessEndpointProvider::AccountAccessEndpointProvider()
    : AccountAccessDefaultEpProviderBase(Aws::AccountAccess::AccountAccessEndpointRules::GetRulesBlob(),
                                         Aws::AccountAccess::AccountAccessEndpointRules::RulesBlobSize) {}

void AccountAccessBuiltInParameters::SetFromClientConfiguration(const AccountAccessClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const AccountAccessClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void AccountAccessBuiltInParameters::SetFromClientConfiguration(const AccountAccessClientConfiguration& config,
                                                                const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const AccountAccessClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void AccountAccessBuiltInParameters::SetServiceSpecificParameters(const AccountAccessClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
}
}  // namespace Endpoint
}  // namespace AccountAccess
}  // namespace Aws
