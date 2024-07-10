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
  enum class GuardrailConverseContentQualifier
  {
    NOT_SET,
    grounding_source,
    query,
    guard_content
  };

namespace GuardrailConverseContentQualifierMapper
{
AWS_BEDROCKRUNTIME_API GuardrailConverseContentQualifier GetGuardrailConverseContentQualifierForName(const Aws::String& name);

AWS_BEDROCKRUNTIME_API Aws::String GetNameForGuardrailConverseContentQualifier(GuardrailConverseContentQualifier value);
} // namespace GuardrailConverseContentQualifierMapper
} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
