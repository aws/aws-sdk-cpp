/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/freetier/FreeTierEndpointProvider.h>
#include <aws/freetier/internal/FreeTierEndpointRules.h>

namespace Aws {
namespace FreeTier {
namespace Endpoint {
FreeTierEndpointProvider::FreeTierEndpointProvider()
    : FreeTierDefaultEpProviderBase(Aws::FreeTier::FreeTierEndpointRules::GetRulesBlob(),
                                    Aws::FreeTier::FreeTierEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace FreeTier
}  // namespace Aws
