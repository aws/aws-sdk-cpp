/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/ContinuumEndpointProvider.h>
#include <aws/continuum/internal/ContinuumEndpointRules.h>

namespace Aws {
namespace Continuum {
namespace Endpoint {
ContinuumEndpointProvider::ContinuumEndpointProvider()
    : ContinuumDefaultEpProviderBase(Aws::Continuum::ContinuumEndpointRules::GetRulesBlob(),
                                     Aws::Continuum::ContinuumEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace Continuum
}  // namespace Aws
