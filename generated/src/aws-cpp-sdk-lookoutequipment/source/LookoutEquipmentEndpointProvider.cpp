/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/LookoutEquipmentEndpointProvider.h>
#include <aws/lookoutequipment/internal/LookoutEquipmentEndpointRules.h>

namespace Aws {
namespace LookoutEquipment {
namespace Endpoint {
LookoutEquipmentEndpointProvider::LookoutEquipmentEndpointProvider()
    : LookoutEquipmentDefaultEpProviderBase(Aws::LookoutEquipment::LookoutEquipmentEndpointRules::GetRulesBlob(),
                                            Aws::LookoutEquipment::LookoutEquipmentEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace LookoutEquipment
}  // namespace Aws
