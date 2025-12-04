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
enum class ReasoningEffort { NOT_SET, low, medium, high };

namespace ReasoningEffortMapper {
AWS_BEDROCK_API ReasoningEffort GetReasoningEffortForName(const Aws::String& name);

AWS_BEDROCK_API Aws::String GetNameForReasoningEffort(ReasoningEffort value);
}  // namespace ReasoningEffortMapper
}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
