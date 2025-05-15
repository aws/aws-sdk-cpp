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
  enum class ConcurrencyType
  {
    NOT_SET,
    Automatic,
    Manual
  };

namespace ConcurrencyTypeMapper
{
AWS_BEDROCKAGENT_API ConcurrencyType GetConcurrencyTypeForName(const Aws::String& name);

AWS_BEDROCKAGENT_API Aws::String GetNameForConcurrencyType(ConcurrencyType value);
} // namespace ConcurrencyTypeMapper
} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
