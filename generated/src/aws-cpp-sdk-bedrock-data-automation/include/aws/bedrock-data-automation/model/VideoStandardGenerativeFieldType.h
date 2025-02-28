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
  enum class VideoStandardGenerativeFieldType
  {
    NOT_SET,
    VIDEO_SUMMARY,
    IAB,
    CHAPTER_SUMMARY
  };

namespace VideoStandardGenerativeFieldTypeMapper
{
AWS_BEDROCKDATAAUTOMATION_API VideoStandardGenerativeFieldType GetVideoStandardGenerativeFieldTypeForName(const Aws::String& name);

AWS_BEDROCKDATAAUTOMATION_API Aws::String GetNameForVideoStandardGenerativeFieldType(VideoStandardGenerativeFieldType value);
} // namespace VideoStandardGenerativeFieldTypeMapper
} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
