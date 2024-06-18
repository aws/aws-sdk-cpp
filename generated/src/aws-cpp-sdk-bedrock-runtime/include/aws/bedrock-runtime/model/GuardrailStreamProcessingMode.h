/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BedrockRuntime
{
namespace Model
{
  enum class GuardrailStreamProcessingMode
  {
    NOT_SET,
    sync,
    async
  };

namespace GuardrailStreamProcessingModeMapper
{
AWS_BEDROCKRUNTIME_API GuardrailStreamProcessingMode GetGuardrailStreamProcessingModeForName(const Aws::String& name);

AWS_BEDROCKRUNTIME_API Aws::String GetNameForGuardrailStreamProcessingMode(GuardrailStreamProcessingMode value);
} // namespace GuardrailStreamProcessingModeMapper
} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
