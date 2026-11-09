/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/account-access-runtime/AccountAccessRuntimeEndpointProvider.h>
#include <aws/account-access-runtime/internal/AccountAccessRuntimeEndpointRules.h>

namespace Aws {
namespace AccountAccessRuntime {
namespace Endpoint {
AccountAccessRuntimeEndpointProvider::AccountAccessRuntimeEndpointProvider()
    : AccountAccessRuntimeDefaultEpProviderBase(Aws::AccountAccessRuntime::AccountAccessRuntimeEndpointRules::GetRulesBlob(),
                                                Aws::AccountAccessRuntime::AccountAccessRuntimeEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace AccountAccessRuntime
}  // namespace Aws
