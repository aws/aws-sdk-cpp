/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Bedrock {
namespace Model {
enum class SelectiveGuardingMode { NOT_SET, SELECTIVE, COMPREHENSIVE };

namespace SelectiveGuardingModeMapper {
AWS_BEDROCK_API SelectiveGuardingMode GetSelectiveGuardingModeForName(const Aws::String& name);

AWS_BEDROCK_API Aws::String GetNameForSelectiveGuardingMode(SelectiveGuardingMode value);
}  // namespace SelectiveGuardingModeMapper
}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
