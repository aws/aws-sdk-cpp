/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Bedrock
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
AWS_BEDROCK_API GuardrailContextualGroundingFilterType GetGuardrailContextualGroundingFilterTypeForName(const Aws::String& name);

AWS_BEDROCK_API Aws::String GetNameForGuardrailContextualGroundingFilterType(GuardrailContextualGroundingFilterType value);
} // namespace GuardrailContextualGroundingFilterTypeMapper
} // namespace Model
} // namespace Bedrock
} // namespace Aws
