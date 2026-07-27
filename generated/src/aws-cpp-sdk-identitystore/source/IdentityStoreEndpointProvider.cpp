/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/identitystore/IdentityStoreEndpointProvider.h>
#include <aws/identitystore/internal/IdentityStoreEndpointRules.h>

namespace Aws {
namespace IdentityStore {
namespace Endpoint {
IdentityStoreEndpointProvider::IdentityStoreEndpointProvider()
    : IdentityStoreDefaultEpProviderBase(Aws::IdentityStore::IdentityStoreEndpointRules::GetRulesBlob(),
                                         Aws::IdentityStore::IdentityStoreEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace IdentityStore
}  // namespace Aws
