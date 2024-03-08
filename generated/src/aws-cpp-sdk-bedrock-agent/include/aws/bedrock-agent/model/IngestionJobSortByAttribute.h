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
  enum class IngestionJobSortByAttribute
  {
    NOT_SET,
    STATUS,
    STARTED_AT
  };

namespace IngestionJobSortByAttributeMapper
{
AWS_BEDROCKAGENT_API IngestionJobSortByAttribute GetIngestionJobSortByAttributeForName(const Aws::String& name);

AWS_BEDROCKAGENT_API Aws::String GetNameForIngestionJobSortByAttribute(IngestionJobSortByAttribute value);
} // namespace IngestionJobSortByAttributeMapper
} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
