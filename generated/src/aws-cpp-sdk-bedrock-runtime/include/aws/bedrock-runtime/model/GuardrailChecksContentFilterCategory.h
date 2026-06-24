/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace BedrockRuntime {
namespace Model {
enum class GuardrailChecksContentFilterCategory { NOT_SET, VIOLENCE, HATE, SEXUAL, MISCONDUCT, INSULTS };

namespace GuardrailChecksContentFilterCategoryMapper {
AWS_BEDROCKRUNTIME_API GuardrailChecksContentFilterCategory GetGuardrailChecksContentFilterCategoryForName(const Aws::String& name);

AWS_BEDROCKRUNTIME_API Aws::String GetNameForGuardrailChecksContentFilterCategory(GuardrailChecksContentFilterCategory value);
}  // namespace GuardrailChecksContentFilterCategoryMapper
}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
