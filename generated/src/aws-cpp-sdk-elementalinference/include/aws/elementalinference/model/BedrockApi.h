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
enum class BedrockApi { NOT_SET, INVOKE_MODEL };

namespace BedrockApiMapper {
AWS_ELEMENTALINFERENCE_API BedrockApi GetBedrockApiForName(const Aws::String& name);

AWS_ELEMENTALINFERENCE_API Aws::String GetNameForBedrockApi(BedrockApi value);
}  // namespace BedrockApiMapper
}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
