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
  enum class MemoryType
  {
    NOT_SET,
    SESSION_SUMMARY
  };

namespace MemoryTypeMapper
{
AWS_BEDROCKAGENT_API MemoryType GetMemoryTypeForName(const Aws::String& name);

AWS_BEDROCKAGENT_API Aws::String GetNameForMemoryType(MemoryType value);
} // namespace MemoryTypeMapper
} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
