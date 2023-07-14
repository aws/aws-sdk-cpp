/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppStream
{
namespace Model
{
  enum class Permission
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace PermissionMapper
{
AWS_APPSTREAM_API Permission GetPermissionForName(const Aws::String& name);

AWS_APPSTREAM_API Aws::String GetNameForPermission(Permission value);
} // namespace PermissionMapper
} // namespace Model
} // namespace AppStream
} // namespace Aws
