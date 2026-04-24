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
enum class ParamType { NOT_SET, str, int_, float_, complex, bool_, list, null };

namespace ParamTypeMapper {
AWS_GLUE_API ParamType GetParamTypeForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForParamType(ParamType value);
}  // namespace ParamTypeMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
