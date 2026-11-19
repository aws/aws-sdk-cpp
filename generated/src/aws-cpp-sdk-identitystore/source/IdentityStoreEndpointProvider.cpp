/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/identitystore/IdentityStoreEndpointProvider.h>
#include <aws/identitystore/internal/IdentityStoreEndpointRules.h>

namespace Aws {
#ifndef AWS_IDENTITYSTORE_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<IdentityStore::Endpoint::IdentityStoreClientConfiguration,
                                                   IdentityStore::Endpoint::IdentityStoreBuiltInParameters,
                                                   IdentityStore::Endpoint::IdentityStoreClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<IdentityStore::Endpoint::IdentityStoreClientConfiguration,
                                                  IdentityStore::Endpoint::IdentityStoreBuiltInParameters,
                                                  IdentityStore::Endpoint::IdentityStoreClientContextParameters>;
}  // namespace Endpoint
#endif

namespace IdentityStore {
namespace Endpoint {
IdentityStoreEndpointProvider::IdentityStoreEndpointProvider()
    : IdentityStoreDefaultEpProviderBase(Aws::IdentityStore::IdentityStoreEndpointRules::GetRulesBlob(),
                                         Aws::IdentityStore::IdentityStoreEndpointRules::RulesBlobSize) {}

void IdentityStoreBuiltInParameters::SetFromClientConfiguration(const IdentityStoreClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const IdentityStoreClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void IdentityStoreBuiltInParameters::SetFromClientConfiguration(const IdentityStoreClientConfiguration& config,
                                                                const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const IdentityStoreClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void IdentityStoreBuiltInParameters::SetServiceSpecificParameters(const IdentityStoreClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace IdentityStore
}  // namespace Aws
