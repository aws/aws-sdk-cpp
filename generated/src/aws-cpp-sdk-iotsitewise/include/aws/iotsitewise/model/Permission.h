/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{
  enum class Permission
  {
    NOT_SET,
    ADMINISTRATOR,
    VIEWER
  };

namespace PermissionMapper
{
AWS_IOTSITEWISE_API Permission GetPermissionForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForPermission(Permission value);
} // namespace PermissionMapper
} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
