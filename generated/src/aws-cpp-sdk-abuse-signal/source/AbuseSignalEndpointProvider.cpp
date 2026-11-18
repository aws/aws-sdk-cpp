/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/abuse-signal/AbuseSignalEndpointProvider.h>
#include <aws/abuse-signal/internal/AbuseSignalEndpointRules.h>

namespace Aws {
namespace AbuseSignal {
namespace Endpoint {
AbuseSignalEndpointProvider::AbuseSignalEndpointProvider()
    : AbuseSignalDefaultEpProviderBase(Aws::AbuseSignal::AbuseSignalEndpointRules::GetRulesBlob(),
                                       Aws::AbuseSignal::AbuseSignalEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace AbuseSignal
}  // namespace Aws
