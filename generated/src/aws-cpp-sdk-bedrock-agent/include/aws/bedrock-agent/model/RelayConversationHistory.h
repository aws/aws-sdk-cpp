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
  enum class RelayConversationHistory
  {
    NOT_SET,
    TO_COLLABORATOR,
    DISABLED
  };

namespace RelayConversationHistoryMapper
{
AWS_BEDROCKAGENT_API RelayConversationHistory GetRelayConversationHistoryForName(const Aws::String& name);

AWS_BEDROCKAGENT_API Aws::String GetNameForRelayConversationHistory(RelayConversationHistory value);
} // namespace RelayConversationHistoryMapper
} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
