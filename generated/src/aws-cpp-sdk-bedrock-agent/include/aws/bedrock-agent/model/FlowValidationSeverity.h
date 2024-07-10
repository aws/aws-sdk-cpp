/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{
  enum class FlowValidationSeverity
  {
    NOT_SET,
    Warning,
    Error
  };

namespace FlowValidationSeverityMapper
{
AWS_BEDROCKAGENT_API FlowValidationSeverity GetFlowValidationSeverityForName(const Aws::String& name);

AWS_BEDROCKAGENT_API Aws::String GetNameForFlowValidationSeverity(FlowValidationSeverity value);
} // namespace FlowValidationSeverityMapper
} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
