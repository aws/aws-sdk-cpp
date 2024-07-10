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
  enum class GuardrailContentQualifier
  {
    NOT_SET,
    grounding_source,
    query,
    guard_content
  };

namespace GuardrailContentQualifierMapper
{
AWS_BEDROCKRUNTIME_API GuardrailContentQualifier GetGuardrailContentQualifierForName(const Aws::String& name);

AWS_BEDROCKRUNTIME_API Aws::String GetNameForGuardrailContentQualifier(GuardrailContentQualifier value);
} // namespace GuardrailContentQualifierMapper
} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
