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
  enum class AudioExtractionCategoryType
  {
    NOT_SET,
    AUDIO_CONTENT_MODERATION,
    TRANSCRIPT,
    TOPIC_CONTENT_MODERATION
  };

namespace AudioExtractionCategoryTypeMapper
{
AWS_BEDROCKDATAAUTOMATION_API AudioExtractionCategoryType GetAudioExtractionCategoryTypeForName(const Aws::String& name);

AWS_BEDROCKDATAAUTOMATION_API Aws::String GetNameForAudioExtractionCategoryType(AudioExtractionCategoryType value);
} // namespace AudioExtractionCategoryTypeMapper
} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
