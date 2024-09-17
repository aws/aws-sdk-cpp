/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BedrockAgentRuntime
{
namespace Model
{
  enum class GuadrailAction
  {
    NOT_SET,
    INTERVENED,
    NONE
  };

namespace GuadrailActionMapper
{
AWS_BEDROCKAGENTRUNTIME_API GuadrailAction GetGuadrailActionForName(const Aws::String& name);

AWS_BEDROCKAGENTRUNTIME_API Aws::String GetNameForGuadrailAction(GuadrailAction value);
} // namespace GuadrailActionMapper
} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
