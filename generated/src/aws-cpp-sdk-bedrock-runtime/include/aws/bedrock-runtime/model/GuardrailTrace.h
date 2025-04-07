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
  enum class GuardrailTrace
  {
    NOT_SET,
    enabled,
    disabled,
    enabled_full
  };

namespace GuardrailTraceMapper
{
AWS_BEDROCKRUNTIME_API GuardrailTrace GetGuardrailTraceForName(const Aws::String& name);

AWS_BEDROCKRUNTIME_API Aws::String GetNameForGuardrailTrace(GuardrailTrace value);
} // namespace GuardrailTraceMapper
} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
