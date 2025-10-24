/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>

namespace Aws {
namespace IoTManagedIntegrations {
namespace Model {
enum class DiscoveryType { NOT_SET, ZWAVE, ZIGBEE, CLOUD, CUSTOM };

namespace DiscoveryTypeMapper {
AWS_IOTMANAGEDINTEGRATIONS_API DiscoveryType GetDiscoveryTypeForName(const Aws::String& name);

AWS_IOTMANAGEDINTEGRATIONS_API Aws::String GetNameForDiscoveryType(DiscoveryType value);
}  // namespace DiscoveryTypeMapper
}  // namespace Model
}  // namespace IoTManagedIntegrations
}  // namespace Aws
