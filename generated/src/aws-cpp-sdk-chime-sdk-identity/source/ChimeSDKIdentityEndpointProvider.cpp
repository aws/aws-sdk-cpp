/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-identity/ChimeSDKIdentityEndpointProvider.h>
#include <aws/chime-sdk-identity/internal/ChimeSDKIdentityEndpointRules.h>

namespace Aws {
namespace ChimeSDKIdentity {
namespace Endpoint {
ChimeSDKIdentityEndpointProvider::ChimeSDKIdentityEndpointProvider()
    : ChimeSDKIdentityDefaultEpProviderBase(Aws::ChimeSDKIdentity::ChimeSDKIdentityEndpointRules::GetRulesBlob(),
                                            Aws::ChimeSDKIdentity::ChimeSDKIdentityEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace ChimeSDKIdentity
}  // namespace Aws
