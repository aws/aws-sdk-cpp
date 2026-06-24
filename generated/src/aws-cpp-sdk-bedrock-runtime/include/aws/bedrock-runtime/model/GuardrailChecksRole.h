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
enum class GuardrailChecksRole { NOT_SET, user, assistant, system };

namespace GuardrailChecksRoleMapper {
AWS_BEDROCKRUNTIME_API GuardrailChecksRole GetGuardrailChecksRoleForName(const Aws::String& name);

AWS_BEDROCKRUNTIME_API Aws::String GetNameForGuardrailChecksRole(GuardrailChecksRole value);
}  // namespace GuardrailChecksRoleMapper
}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
