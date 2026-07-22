/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/account/AccountEndpointProvider.h>
#include <aws/account/internal/AccountEndpointRules.h>

namespace Aws {
namespace Account {
namespace Endpoint {
AccountEndpointProvider::AccountEndpointProvider()
    : AccountDefaultEpProviderBase(Aws::Account::AccountEndpointRules::GetRulesBlob(), Aws::Account::AccountEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace Account
}  // namespace Aws
