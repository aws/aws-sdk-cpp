/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/GuardDutyEndpointProvider.h>
#include <aws/guardduty/internal/GuardDutyEndpointRules.h>

namespace Aws {
namespace GuardDuty {
namespace Endpoint {
GuardDutyEndpointProvider::GuardDutyEndpointProvider()
    : GuardDutyDefaultEpProviderBase(Aws::GuardDuty::GuardDutyEndpointRules::GetRulesBlob(),
                                     Aws::GuardDuty::GuardDutyEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace GuardDuty
}  // namespace Aws
