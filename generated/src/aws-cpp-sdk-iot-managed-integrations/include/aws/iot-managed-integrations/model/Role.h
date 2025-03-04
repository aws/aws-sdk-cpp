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
  enum class Role
  {
    NOT_SET,
    CONTROLLER,
    DEVICE
  };

namespace RoleMapper
{
AWS_IOTMANAGEDINTEGRATIONS_API Role GetRoleForName(const Aws::String& name);

AWS_IOTMANAGEDINTEGRATIONS_API Aws::String GetNameForRole(Role value);
} // namespace RoleMapper
} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
