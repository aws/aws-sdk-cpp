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
  enum class ContextEnrichmentType
  {
    NOT_SET,
    BEDROCK_FOUNDATION_MODEL
  };

namespace ContextEnrichmentTypeMapper
{
AWS_BEDROCKAGENT_API ContextEnrichmentType GetContextEnrichmentTypeForName(const Aws::String& name);

AWS_BEDROCKAGENT_API Aws::String GetNameForContextEnrichmentType(ContextEnrichmentType value);
} // namespace ContextEnrichmentTypeMapper
} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
