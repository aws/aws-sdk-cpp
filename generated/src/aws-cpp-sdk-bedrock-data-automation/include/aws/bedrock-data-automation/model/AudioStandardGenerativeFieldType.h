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
  enum class AudioStandardGenerativeFieldType
  {
    NOT_SET,
    AUDIO_SUMMARY,
    IAB,
    TOPIC_SUMMARY
  };

namespace AudioStandardGenerativeFieldTypeMapper
{
AWS_BEDROCKDATAAUTOMATION_API AudioStandardGenerativeFieldType GetAudioStandardGenerativeFieldTypeForName(const Aws::String& name);

AWS_BEDROCKDATAAUTOMATION_API Aws::String GetNameForAudioStandardGenerativeFieldType(AudioStandardGenerativeFieldType value);
} // namespace AudioStandardGenerativeFieldTypeMapper
} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
