/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codestar-notifications/CodeStarNotificationsEndpointProvider.h>
#include <aws/codestar-notifications/internal/CodeStarNotificationsEndpointRules.h>

namespace Aws {
namespace CodeStarNotifications {
namespace Endpoint {
CodeStarNotificationsEndpointProvider::CodeStarNotificationsEndpointProvider()
    : CodeStarNotificationsDefaultEpProviderBase(Aws::CodeStarNotifications::CodeStarNotificationsEndpointRules::GetRulesBlob(),
                                                 Aws::CodeStarNotifications::CodeStarNotificationsEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace CodeStarNotifications
}  // namespace Aws
