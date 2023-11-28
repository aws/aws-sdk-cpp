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
  enum class CreationMode
  {
    NOT_SET,
    DEFAULT,
    OVERRIDDEN
  };

namespace CreationModeMapper
{
AWS_BEDROCKAGENT_API CreationMode GetCreationModeForName(const Aws::String& name);

AWS_BEDROCKAGENT_API Aws::String GetNameForCreationMode(CreationMode value);
} // namespace CreationModeMapper
} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
