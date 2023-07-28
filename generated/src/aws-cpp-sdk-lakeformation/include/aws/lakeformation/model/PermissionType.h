/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LakeFormation
{
namespace Model
{
  enum class PermissionType
  {
    NOT_SET,
    COLUMN_PERMISSION,
    CELL_FILTER_PERMISSION,
    NESTED_PERMISSION,
    NESTED_CELL_PERMISSION
  };

namespace PermissionTypeMapper
{
AWS_LAKEFORMATION_API PermissionType GetPermissionTypeForName(const Aws::String& name);

AWS_LAKEFORMATION_API Aws::String GetNameForPermissionType(PermissionType value);
} // namespace PermissionTypeMapper
} // namespace Model
} // namespace LakeFormation
} // namespace Aws
