/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BedrockDataAutomation
{
namespace Model
{
  enum class VideoExtractionCategoryType
  {
    NOT_SET,
    CONTENT_MODERATION,
    TEXT_DETECTION,
    TRANSCRIPT,
    LOGOS
  };

namespace VideoExtractionCategoryTypeMapper
{
AWS_BEDROCKDATAAUTOMATION_API VideoExtractionCategoryType GetVideoExtractionCategoryTypeForName(const Aws::String& name);

AWS_BEDROCKDATAAUTOMATION_API Aws::String GetNameForVideoExtractionCategoryType(VideoExtractionCategoryType value);
} // namespace VideoExtractionCategoryTypeMapper
} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
