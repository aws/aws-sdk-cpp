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
  enum class AliasInvocationState
  {
    NOT_SET,
    ACCEPT_INVOCATIONS,
    REJECT_INVOCATIONS
  };

namespace AliasInvocationStateMapper
{
AWS_BEDROCKAGENT_API AliasInvocationState GetAliasInvocationStateForName(const Aws::String& name);

AWS_BEDROCKAGENT_API Aws::String GetNameForAliasInvocationState(AliasInvocationState value);
} // namespace AliasInvocationStateMapper
} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
