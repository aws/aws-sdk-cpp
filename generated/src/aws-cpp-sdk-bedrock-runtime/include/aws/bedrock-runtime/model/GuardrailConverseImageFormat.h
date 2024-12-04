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
  enum class GuardrailConverseImageFormat
  {
    NOT_SET,
    png,
    jpeg
  };

namespace GuardrailConverseImageFormatMapper
{
AWS_BEDROCKRUNTIME_API GuardrailConverseImageFormat GetGuardrailConverseImageFormatForName(const Aws::String& name);

AWS_BEDROCKRUNTIME_API Aws::String GetNameForGuardrailConverseImageFormat(GuardrailConverseImageFormat value);
} // namespace GuardrailConverseImageFormatMapper
} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
