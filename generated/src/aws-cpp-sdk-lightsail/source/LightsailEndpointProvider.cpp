/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/LightsailEndpointProvider.h>
#include <aws/lightsail/internal/LightsailEndpointRules.h>

namespace Aws {
namespace Lightsail {
namespace Endpoint {
LightsailEndpointProvider::LightsailEndpointProvider()
    : LightsailDefaultEpProviderBase(Aws::Lightsail::LightsailEndpointRules::GetRulesBlob(),
                                     Aws::Lightsail::LightsailEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace Lightsail
}  // namespace Aws
