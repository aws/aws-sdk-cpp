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
enum class ProtocolType { NOT_SET, ZWAVE, ZIGBEE, CUSTOM };

namespace ProtocolTypeMapper {
AWS_IOTMANAGEDINTEGRATIONS_API ProtocolType GetProtocolTypeForName(const Aws::String& name);

AWS_IOTMANAGEDINTEGRATIONS_API Aws::String GetNameForProtocolType(ProtocolType value);
}  // namespace ProtocolTypeMapper
}  // namespace Model
}  // namespace IoTManagedIntegrations
}  // namespace Aws
