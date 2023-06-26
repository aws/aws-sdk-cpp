/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Glue
{
namespace Model
{
  enum class Permission
  {
    NOT_SET,
    ALL,
    SELECT,
    ALTER,
    DROP,
    DELETE_,
    INSERT,
    CREATE_DATABASE,
    CREATE_TABLE,
    DATA_LOCATION_ACCESS
  };

namespace PermissionMapper
{
AWS_GLUE_API Permission GetPermissionForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForPermission(Permission value);
} // namespace PermissionMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
