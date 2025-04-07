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
  enum class GuardrailContextualGroundingAction
  {
    NOT_SET,
    BLOCK,
    NONE
  };

namespace GuardrailContextualGroundingActionMapper
{
AWS_BEDROCK_API GuardrailContextualGroundingAction GetGuardrailContextualGroundingActionForName(const Aws::String& name);

AWS_BEDROCK_API Aws::String GetNameForGuardrailContextualGroundingAction(GuardrailContextualGroundingAction value);
} // namespace GuardrailContextualGroundingActionMapper
} // namespace Model
} // namespace Bedrock
} // namespace Aws
