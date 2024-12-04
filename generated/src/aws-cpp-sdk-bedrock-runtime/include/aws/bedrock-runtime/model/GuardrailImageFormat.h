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
  enum class GuardrailImageFormat
  {
    NOT_SET,
    png,
    jpeg
  };

namespace GuardrailImageFormatMapper
{
AWS_BEDROCKRUNTIME_API GuardrailImageFormat GetGuardrailImageFormatForName(const Aws::String& name);

AWS_BEDROCKRUNTIME_API Aws::String GetNameForGuardrailImageFormat(GuardrailImageFormat value);
} // namespace GuardrailImageFormatMapper
} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
