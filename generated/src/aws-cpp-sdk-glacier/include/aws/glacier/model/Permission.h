/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glacier/Glacier_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Glacier
{
namespace Model
{
  enum class Permission
  {
    NOT_SET,
    FULL_CONTROL,
    WRITE,
    WRITE_ACP,
    READ,
    READ_ACP
  };

namespace PermissionMapper
{
AWS_GLACIER_API Permission GetPermissionForName(const Aws::String& name);

AWS_GLACIER_API Aws::String GetNameForPermission(Permission value);
} // namespace PermissionMapper
} // namespace Model
} // namespace Glacier
} // namespace Aws
