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
  enum class MetadataValueType
  {
    NOT_SET,
    BOOLEAN,
    NUMBER,
    STRING,
    STRING_LIST
  };

namespace MetadataValueTypeMapper
{
AWS_BEDROCKAGENT_API MetadataValueType GetMetadataValueTypeForName(const Aws::String& name);

AWS_BEDROCKAGENT_API Aws::String GetNameForMetadataValueType(MetadataValueType value);
} // namespace MetadataValueTypeMapper
} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
