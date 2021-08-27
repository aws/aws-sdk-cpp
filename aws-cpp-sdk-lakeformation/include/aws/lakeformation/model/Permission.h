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
  enum class Permission
  {
    NOT_SET,
    ALL,
    SELECT,
    ALTER,
    DROP,
    DELETE_,
    INSERT,
    DESCRIBE,
    CREATE_DATABASE,
    CREATE_TABLE,
    DATA_LOCATION_ACCESS
  };

namespace PermissionMapper
{
AWS_LAKEFORMATION_API Permission GetPermissionForName(const Aws::String& name);

AWS_LAKEFORMATION_API Aws::String GetNameForPermission(Permission value);
} // namespace PermissionMapper
} // namespace Model
} // namespace LakeFormation
} // namespace Aws
