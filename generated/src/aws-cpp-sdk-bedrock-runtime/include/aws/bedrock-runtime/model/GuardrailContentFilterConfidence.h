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
  enum class GuardrailContentFilterConfidence
  {
    NOT_SET,
    NONE,
    LOW,
    MEDIUM,
    HIGH
  };

namespace GuardrailContentFilterConfidenceMapper
{
AWS_BEDROCKRUNTIME_API GuardrailContentFilterConfidence GetGuardrailContentFilterConfidenceForName(const Aws::String& name);

AWS_BEDROCKRUNTIME_API Aws::String GetNameForGuardrailContentFilterConfidence(GuardrailContentFilterConfidence value);
} // namespace GuardrailContentFilterConfidenceMapper
} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
