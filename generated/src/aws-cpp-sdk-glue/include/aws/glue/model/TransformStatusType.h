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
enum class TransformStatusType { NOT_SET, NOT_READY, READY, DELETING };

namespace TransformStatusTypeMapper {
AWS_GLUE_API TransformStatusType GetTransformStatusTypeForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForTransformStatusType(TransformStatusType value);
}  // namespace TransformStatusTypeMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
