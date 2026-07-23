/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/CustomerProfilesEndpointProvider.h>
#include <aws/customer-profiles/internal/CustomerProfilesEndpointRules.h>

namespace Aws {
namespace CustomerProfiles {
namespace Endpoint {
CustomerProfilesEndpointProvider::CustomerProfilesEndpointProvider()
    : CustomerProfilesDefaultEpProviderBase(Aws::CustomerProfiles::CustomerProfilesEndpointRules::GetRulesBlob(),
                                            Aws::CustomerProfiles::CustomerProfilesEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace CustomerProfiles
}  // namespace Aws
