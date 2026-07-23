/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/keyspaces/KeyspacesEndpointProvider.h>
#include <aws/keyspaces/internal/KeyspacesEndpointRules.h>

namespace Aws {
namespace Keyspaces {
namespace Endpoint {
KeyspacesEndpointProvider::KeyspacesEndpointProvider()
    : KeyspacesDefaultEpProviderBase(Aws::Keyspaces::KeyspacesEndpointRules::GetRulesBlob(),
                                     Aws::Keyspaces::KeyspacesEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace Keyspaces
}  // namespace Aws
