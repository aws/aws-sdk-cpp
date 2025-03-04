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
  enum class ProvisioningType
  {
    NOT_SET,
    FLEET_PROVISIONING,
    JITR
  };

namespace ProvisioningTypeMapper
{
AWS_IOTMANAGEDINTEGRATIONS_API ProvisioningType GetProvisioningTypeForName(const Aws::String& name);

AWS_IOTMANAGEDINTEGRATIONS_API Aws::String GetNameForProvisioningType(ProvisioningType value);
} // namespace ProvisioningTypeMapper
} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
