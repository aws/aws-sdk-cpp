/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/account-access/AccountAccessEndpointProvider.h>
#include <aws/account-access/internal/AccountAccessEndpointRules.h>

namespace Aws {
namespace AccountAccess {
namespace Endpoint {
AccountAccessEndpointProvider::AccountAccessEndpointProvider()
    : AccountAccessDefaultEpProviderBase(Aws::AccountAccess::AccountAccessEndpointRules::GetRulesBlob(),
                                         Aws::AccountAccess::AccountAccessEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace AccountAccess
}  // namespace Aws
