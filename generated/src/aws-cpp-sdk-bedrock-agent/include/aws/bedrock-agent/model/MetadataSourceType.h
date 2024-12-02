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
  enum class MetadataSourceType
  {
    NOT_SET,
    IN_LINE_ATTRIBUTE,
    S3_LOCATION
  };

namespace MetadataSourceTypeMapper
{
AWS_BEDROCKAGENT_API MetadataSourceType GetMetadataSourceTypeForName(const Aws::String& name);

AWS_BEDROCKAGENT_API Aws::String GetNameForMetadataSourceType(MetadataSourceType value);
} // namespace MetadataSourceTypeMapper
} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
