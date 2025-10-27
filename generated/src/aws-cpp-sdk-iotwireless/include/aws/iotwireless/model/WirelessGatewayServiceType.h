/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/IoTWireless_EXPORTS.h>

namespace Aws {
namespace IoTWireless {
namespace Model {
enum class WirelessGatewayServiceType { NOT_SET, CUPS, LNS };

namespace WirelessGatewayServiceTypeMapper {
AWS_IOTWIRELESS_API WirelessGatewayServiceType GetWirelessGatewayServiceTypeForName(const Aws::String& name);

AWS_IOTWIRELESS_API Aws::String GetNameForWirelessGatewayServiceType(WirelessGatewayServiceType value);
}  // namespace WirelessGatewayServiceTypeMapper
}  // namespace Model
}  // namespace IoTWireless
}  // namespace Aws
