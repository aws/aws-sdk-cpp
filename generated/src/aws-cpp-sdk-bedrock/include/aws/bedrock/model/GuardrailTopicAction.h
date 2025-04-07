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
  enum class GuardrailTopicAction
  {
    NOT_SET,
    BLOCK,
    NONE
  };

namespace GuardrailTopicActionMapper
{
AWS_BEDROCK_API GuardrailTopicAction GetGuardrailTopicActionForName(const Aws::String& name);

AWS_BEDROCK_API Aws::String GetNameForGuardrailTopicAction(GuardrailTopicAction value);
} // namespace GuardrailTopicActionMapper
} // namespace Model
} // namespace Bedrock
} // namespace Aws
