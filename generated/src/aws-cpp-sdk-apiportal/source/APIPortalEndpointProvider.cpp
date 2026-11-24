/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apiportal/APIPortalEndpointProvider.h>
#include <aws/apiportal/internal/APIPortalEndpointRules.h>

namespace Aws {
namespace APIPortal {
namespace Endpoint {
APIPortalEndpointProvider::APIPortalEndpointProvider()
    : APIPortalDefaultEpProviderBase(Aws::APIPortal::APIPortalEndpointRules::GetRulesBlob(),
                                     Aws::APIPortal::APIPortalEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace APIPortal
}  // namespace Aws
