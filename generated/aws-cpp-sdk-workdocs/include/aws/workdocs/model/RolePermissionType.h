/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WorkDocs
{
namespace Model
{
  enum class RolePermissionType
  {
    NOT_SET,
    DIRECT,
    INHERITED
  };

namespace RolePermissionTypeMapper
{
AWS_WORKDOCS_API RolePermissionType GetRolePermissionTypeForName(const Aws::String& name);

AWS_WORKDOCS_API Aws::String GetNameForRolePermissionType(RolePermissionType value);
} // namespace RolePermissionTypeMapper
} // namespace Model
} // namespace WorkDocs
} // namespace Aws
