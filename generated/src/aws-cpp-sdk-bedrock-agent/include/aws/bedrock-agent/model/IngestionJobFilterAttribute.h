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
  enum class IngestionJobFilterAttribute
  {
    NOT_SET,
    STATUS
  };

namespace IngestionJobFilterAttributeMapper
{
AWS_BEDROCKAGENT_API IngestionJobFilterAttribute GetIngestionJobFilterAttributeForName(const Aws::String& name);

AWS_BEDROCKAGENT_API Aws::String GetNameForIngestionJobFilterAttribute(IngestionJobFilterAttribute value);
} // namespace IngestionJobFilterAttributeMapper
} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
