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
  enum class DiscoveryAuthMaterialType
  {
    NOT_SET,
    ZWAVE_INSTALL_CODE
  };

namespace DiscoveryAuthMaterialTypeMapper
{
AWS_IOTMANAGEDINTEGRATIONS_API DiscoveryAuthMaterialType GetDiscoveryAuthMaterialTypeForName(const Aws::String& name);

AWS_IOTMANAGEDINTEGRATIONS_API Aws::String GetNameForDiscoveryAuthMaterialType(DiscoveryAuthMaterialType value);
} // namespace DiscoveryAuthMaterialTypeMapper
} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
