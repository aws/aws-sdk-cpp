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
  enum class CustomSourceType
  {
    NOT_SET,
    IN_LINE,
    S3_LOCATION
  };

namespace CustomSourceTypeMapper
{
AWS_BEDROCKAGENT_API CustomSourceType GetCustomSourceTypeForName(const Aws::String& name);

AWS_BEDROCKAGENT_API Aws::String GetNameForCustomSourceType(CustomSourceType value);
} // namespace CustomSourceTypeMapper
} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
