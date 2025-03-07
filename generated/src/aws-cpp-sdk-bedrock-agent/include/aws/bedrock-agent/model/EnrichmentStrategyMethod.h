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
  enum class EnrichmentStrategyMethod
  {
    NOT_SET,
    CHUNK_ENTITY_EXTRACTION
  };

namespace EnrichmentStrategyMethodMapper
{
AWS_BEDROCKAGENT_API EnrichmentStrategyMethod GetEnrichmentStrategyMethodForName(const Aws::String& name);

AWS_BEDROCKAGENT_API Aws::String GetNameForEnrichmentStrategyMethod(EnrichmentStrategyMethod value);
} // namespace EnrichmentStrategyMethodMapper
} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
