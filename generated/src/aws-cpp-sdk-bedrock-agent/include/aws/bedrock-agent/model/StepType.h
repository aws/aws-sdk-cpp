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
  enum class StepType
  {
    NOT_SET,
    POST_CHUNKING
  };

namespace StepTypeMapper
{
AWS_BEDROCKAGENT_API StepType GetStepTypeForName(const Aws::String& name);

AWS_BEDROCKAGENT_API Aws::String GetNameForStepType(StepType value);
} // namespace StepTypeMapper
} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
