/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{
  enum class ResourcePermission
  {
    NOT_SET,
    FULL_PERMISSION,
    MISSING_PERMISSION
  };

namespace ResourcePermissionMapper
{
AWS_DEVOPSGURU_API ResourcePermission GetResourcePermissionForName(const Aws::String& name);

AWS_DEVOPSGURU_API Aws::String GetNameForResourcePermission(ResourcePermission value);
} // namespace ResourcePermissionMapper
} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
