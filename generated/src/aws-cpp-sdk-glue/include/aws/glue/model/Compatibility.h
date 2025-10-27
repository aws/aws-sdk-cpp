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
enum class Compatibility { NOT_SET, NONE, DISABLED, BACKWARD, BACKWARD_ALL, FORWARD, FORWARD_ALL, FULL, FULL_ALL };

namespace CompatibilityMapper {
AWS_GLUE_API Compatibility GetCompatibilityForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForCompatibility(Compatibility value);
}  // namespace CompatibilityMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
