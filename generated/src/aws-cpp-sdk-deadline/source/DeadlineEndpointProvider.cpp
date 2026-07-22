/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/DeadlineEndpointProvider.h>
#include <aws/deadline/internal/DeadlineEndpointRules.h>

namespace Aws {
namespace deadline {
namespace Endpoint {
DeadlineEndpointProvider::DeadlineEndpointProvider()
    : DeadlineDefaultEpProviderBase(Aws::deadline::DeadlineEndpointRules::GetRulesBlob(),
                                    Aws::deadline::DeadlineEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace deadline
}  // namespace Aws
