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
  enum class GuardrailContextualGroundingFilterType
  {
    NOT_SET,
    GROUNDING,
    RELEVANCE
  };

namespace GuardrailContextualGroundingFilterTypeMapper
{
AWS_BEDROCKRUNTIME_API GuardrailContextualGroundingFilterType GetGuardrailContextualGroundingFilterTypeForName(const Aws::String& name);

AWS_BEDROCKRUNTIME_API Aws::String GetNameForGuardrailContextualGroundingFilterType(GuardrailContextualGroundingFilterType value);
} // namespace GuardrailContextualGroundingFilterTypeMapper
} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
