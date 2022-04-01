/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ManagedGrafana
{
namespace Model
{
  enum class PermissionType
  {
    NOT_SET,
    CUSTOMER_MANAGED,
    SERVICE_MANAGED
  };

namespace PermissionTypeMapper
{
AWS_MANAGEDGRAFANA_API PermissionType GetPermissionTypeForName(const Aws::String& name);

AWS_MANAGEDGRAFANA_API Aws::String GetNameForPermissionType(PermissionType value);
} // namespace PermissionTypeMapper
} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
