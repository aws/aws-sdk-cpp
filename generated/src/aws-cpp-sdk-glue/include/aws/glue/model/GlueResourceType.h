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
enum class GlueResourceType { NOT_SET, JOB, SESSION };

namespace GlueResourceTypeMapper {
AWS_GLUE_API GlueResourceType GetGlueResourceTypeForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForGlueResourceType(GlueResourceType value);
}  // namespace GlueResourceTypeMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
