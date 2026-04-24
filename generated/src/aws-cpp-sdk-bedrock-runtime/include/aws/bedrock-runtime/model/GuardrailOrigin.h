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
enum class GuardrailOrigin { NOT_SET, REQUEST, ACCOUNT_ENFORCED, ORGANIZATION_ENFORCED };

namespace GuardrailOriginMapper {
AWS_BEDROCKRUNTIME_API GuardrailOrigin GetGuardrailOriginForName(const Aws::String& name);

AWS_BEDROCKRUNTIME_API Aws::String GetNameForGuardrailOrigin(GuardrailOrigin value);
}  // namespace GuardrailOriginMapper
}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
