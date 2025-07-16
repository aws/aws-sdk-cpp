/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BedrockAgentCoreControl
{
namespace Model
{
  enum class KeyType
  {
    NOT_SET,
    CustomerManagedKey,
    ServiceManagedKey
  };

namespace KeyTypeMapper
{
AWS_BEDROCKAGENTCORECONTROL_API KeyType GetKeyTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForKeyType(KeyType value);
} // namespace KeyTypeMapper
} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
