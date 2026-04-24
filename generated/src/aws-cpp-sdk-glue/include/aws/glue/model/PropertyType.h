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
enum class PropertyType { NOT_SET, USER_INPUT, SECRET, READ_ONLY, UNUSED, SECRET_OR_USER_INPUT };

namespace PropertyTypeMapper {
AWS_GLUE_API PropertyType GetPropertyTypeForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForPropertyType(PropertyType value);
}  // namespace PropertyTypeMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
