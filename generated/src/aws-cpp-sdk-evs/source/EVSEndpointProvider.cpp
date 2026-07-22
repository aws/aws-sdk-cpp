/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evs/EVSEndpointProvider.h>
#include <aws/evs/internal/EVSEndpointRules.h>

namespace Aws {
namespace EVS {
namespace Endpoint {
EVSEndpointProvider::EVSEndpointProvider()
    : EVSDefaultEpProviderBase(Aws::EVS::EVSEndpointRules::GetRulesBlob(), Aws::EVS::EVSEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace EVS
}  // namespace Aws
