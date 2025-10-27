/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrass/Greengrass_EXPORTS.h>

namespace Aws {
namespace Greengrass {
namespace Model {
enum class Permission { NOT_SET, ro, rw };

namespace PermissionMapper {
AWS_GREENGRASS_API Permission GetPermissionForName(const Aws::String& name);

AWS_GREENGRASS_API Aws::String GetNameForPermission(Permission value);
}  // namespace PermissionMapper
}  // namespace Model
}  // namespace Greengrass
}  // namespace Aws
