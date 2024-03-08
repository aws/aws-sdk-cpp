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
  enum class ActionGroupSignature
  {
    NOT_SET,
    AMAZON_UserInput
  };

namespace ActionGroupSignatureMapper
{
AWS_BEDROCKAGENT_API ActionGroupSignature GetActionGroupSignatureForName(const Aws::String& name);

AWS_BEDROCKAGENT_API Aws::String GetNameForActionGroupSignature(ActionGroupSignature value);
} // namespace ActionGroupSignatureMapper
} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
