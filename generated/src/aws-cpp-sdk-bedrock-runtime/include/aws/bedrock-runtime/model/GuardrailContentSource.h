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
  enum class GuardrailContentSource
  {
    NOT_SET,
    INPUT,
    OUTPUT
  };

namespace GuardrailContentSourceMapper
{
AWS_BEDROCKRUNTIME_API GuardrailContentSource GetGuardrailContentSourceForName(const Aws::String& name);

AWS_BEDROCKRUNTIME_API Aws::String GetNameForGuardrailContentSource(GuardrailContentSource value);
} // namespace GuardrailContentSourceMapper
} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
