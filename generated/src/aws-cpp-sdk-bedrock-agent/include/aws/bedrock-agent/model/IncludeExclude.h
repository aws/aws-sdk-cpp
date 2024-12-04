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
  enum class IncludeExclude
  {
    NOT_SET,
    INCLUDE,
    EXCLUDE
  };

namespace IncludeExcludeMapper
{
AWS_BEDROCKAGENT_API IncludeExclude GetIncludeExcludeForName(const Aws::String& name);

AWS_BEDROCKAGENT_API Aws::String GetNameForIncludeExclude(IncludeExclude value);
} // namespace IncludeExcludeMapper
} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
