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
  enum class CrawlFilterConfigurationType
  {
    NOT_SET,
    PATTERN
  };

namespace CrawlFilterConfigurationTypeMapper
{
AWS_BEDROCKAGENT_API CrawlFilterConfigurationType GetCrawlFilterConfigurationTypeForName(const Aws::String& name);

AWS_BEDROCKAGENT_API Aws::String GetNameForCrawlFilterConfigurationType(CrawlFilterConfigurationType value);
} // namespace CrawlFilterConfigurationTypeMapper
} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
