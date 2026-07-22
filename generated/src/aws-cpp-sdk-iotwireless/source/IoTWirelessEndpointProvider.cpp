/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/IoTWirelessEndpointProvider.h>
#include <aws/iotwireless/internal/IoTWirelessEndpointRules.h>

namespace Aws {
namespace IoTWireless {
namespace Endpoint {
IoTWirelessEndpointProvider::IoTWirelessEndpointProvider()
    : IoTWirelessDefaultEpProviderBase(Aws::IoTWireless::IoTWirelessEndpointRules::GetRulesBlob(),
                                       Aws::IoTWireless::IoTWirelessEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace IoTWireless
}  // namespace Aws
