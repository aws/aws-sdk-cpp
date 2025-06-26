/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTManagedIntegrations
{
namespace Model
{
  enum class AuthMaterialType
  {
    NOT_SET,
    CUSTOM_PROTOCOL_QR_BAR_CODE,
    WIFI_SETUP_QR_BAR_CODE,
    ZWAVE_QR_BAR_CODE,
    ZIGBEE_QR_BAR_CODE,
    DISCOVERED_DEVICE
  };

namespace AuthMaterialTypeMapper
{
AWS_IOTMANAGEDINTEGRATIONS_API AuthMaterialType GetAuthMaterialTypeForName(const Aws::String& name);

AWS_IOTMANAGEDINTEGRATIONS_API Aws::String GetNameForAuthMaterialType(AuthMaterialType value);
} // namespace AuthMaterialTypeMapper
} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
