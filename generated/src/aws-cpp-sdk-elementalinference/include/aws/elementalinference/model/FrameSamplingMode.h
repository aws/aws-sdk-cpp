/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elementalinference/ElementalInference_EXPORTS.h>

namespace Aws {
namespace ElementalInference {
namespace Model {
enum class FrameSamplingMode { NOT_SET, FIRST, UNIFORM, LAST };

namespace FrameSamplingModeMapper {
AWS_ELEMENTALINFERENCE_API FrameSamplingMode GetFrameSamplingModeForName(const Aws::String& name);

AWS_ELEMENTALINFERENCE_API Aws::String GetNameForFrameSamplingMode(FrameSamplingMode value);
}  // namespace FrameSamplingModeMapper
}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
