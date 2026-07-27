/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/LocationServiceEndpointProvider.h>
#include <aws/location/internal/LocationServiceEndpointRules.h>

namespace Aws {
namespace LocationService {
namespace Endpoint {
LocationServiceEndpointProvider::LocationServiceEndpointProvider()
    : LocationServiceDefaultEpProviderBase(Aws::LocationService::LocationServiceEndpointRules::GetRulesBlob(),
                                           Aws::LocationService::LocationServiceEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace LocationService
}  // namespace Aws
