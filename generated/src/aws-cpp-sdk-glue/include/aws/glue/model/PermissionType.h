﻿/**
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
  enum class PermissionType
  {
    NOT_SET,
    COLUMN_PERMISSION,
    CELL_FILTER_PERMISSION
  };

namespace PermissionTypeMapper
{
AWS_GLUE_API PermissionType GetPermissionTypeForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForPermissionType(PermissionType value);
} // namespace PermissionTypeMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
