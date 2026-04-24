/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/Glue_EXPORTS.h>

namespace Aws {
namespace Glue {
namespace Model {
enum class OverwriteChildResourcePermissionsWithDefaultEnum { NOT_SET, Accept, Deny };

namespace OverwriteChildResourcePermissionsWithDefaultEnumMapper {
AWS_GLUE_API OverwriteChildResourcePermissionsWithDefaultEnum
GetOverwriteChildResourcePermissionsWithDefaultEnumForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForOverwriteChildResourcePermissionsWithDefaultEnum(OverwriteChildResourcePermissionsWithDefaultEnum value);
}  // namespace OverwriteChildResourcePermissionsWithDefaultEnumMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
