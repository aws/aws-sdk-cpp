/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/DataZoneEndpointProvider.h>
#include <aws/datazone/internal/DataZoneEndpointRules.h>

namespace Aws {
namespace DataZone {
namespace Endpoint {
DataZoneEndpointProvider::DataZoneEndpointProvider()
    : DataZoneDefaultEpProviderBase(Aws::DataZone::DataZoneEndpointRules::GetRulesBlob(),
                                    Aws::DataZone::DataZoneEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace DataZone
}  // namespace Aws
