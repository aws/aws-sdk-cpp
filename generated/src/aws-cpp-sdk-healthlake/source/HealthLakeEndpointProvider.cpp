/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/healthlake/HealthLakeEndpointProvider.h>
#include <aws/healthlake/internal/HealthLakeEndpointRules.h>

namespace Aws {
namespace HealthLake {
namespace Endpoint {
HealthLakeEndpointProvider::HealthLakeEndpointProvider()
    : HealthLakeDefaultEpProviderBase(Aws::HealthLake::HealthLakeEndpointRules::GetRulesBlob(),
                                      Aws::HealthLake::HealthLakeEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace HealthLake
}  // namespace Aws
