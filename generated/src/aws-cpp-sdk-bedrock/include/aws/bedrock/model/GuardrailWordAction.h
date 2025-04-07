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
  enum class GuardrailWordAction
  {
    NOT_SET,
    BLOCK,
    NONE
  };

namespace GuardrailWordActionMapper
{
AWS_BEDROCK_API GuardrailWordAction GetGuardrailWordActionForName(const Aws::String& name);

AWS_BEDROCK_API Aws::String GetNameForGuardrailWordAction(GuardrailWordAction value);
} // namespace GuardrailWordActionMapper
} // namespace Model
} // namespace Bedrock
} // namespace Aws
