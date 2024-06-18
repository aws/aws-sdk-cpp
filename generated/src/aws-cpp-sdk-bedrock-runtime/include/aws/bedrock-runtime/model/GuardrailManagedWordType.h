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
  enum class GuardrailManagedWordType
  {
    NOT_SET,
    PROFANITY
  };

namespace GuardrailManagedWordTypeMapper
{
AWS_BEDROCKRUNTIME_API GuardrailManagedWordType GetGuardrailManagedWordTypeForName(const Aws::String& name);

AWS_BEDROCKRUNTIME_API Aws::String GetNameForGuardrailManagedWordType(GuardrailManagedWordType value);
} // namespace GuardrailManagedWordTypeMapper
} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
