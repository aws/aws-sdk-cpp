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
  enum class GuardrailTopicType
  {
    NOT_SET,
    DENY
  };

namespace GuardrailTopicTypeMapper
{
AWS_BEDROCKRUNTIME_API GuardrailTopicType GetGuardrailTopicTypeForName(const Aws::String& name);

AWS_BEDROCKRUNTIME_API Aws::String GetNameForGuardrailTopicType(GuardrailTopicType value);
} // namespace GuardrailTopicTypeMapper
} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
