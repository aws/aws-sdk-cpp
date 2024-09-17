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
  enum class RequireConfirmation
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace RequireConfirmationMapper
{
AWS_BEDROCKAGENT_API RequireConfirmation GetRequireConfirmationForName(const Aws::String& name);

AWS_BEDROCKAGENT_API Aws::String GetNameForRequireConfirmation(RequireConfirmation value);
} // namespace RequireConfirmationMapper
} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
