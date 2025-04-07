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
  enum class GuardrailTopicPolicyAction
  {
    NOT_SET,
    BLOCKED,
    NONE
  };

namespace GuardrailTopicPolicyActionMapper
{
AWS_BEDROCKRUNTIME_API GuardrailTopicPolicyAction GetGuardrailTopicPolicyActionForName(const Aws::String& name);

AWS_BEDROCKRUNTIME_API Aws::String GetNameForGuardrailTopicPolicyAction(GuardrailTopicPolicyAction value);
} // namespace GuardrailTopicPolicyActionMapper
} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
