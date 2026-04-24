/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace BedrockDataAutomation {
namespace Model {
enum class AudioGenerativeOutputLanguage { NOT_SET, DEFAULT, EN };

namespace AudioGenerativeOutputLanguageMapper {
AWS_BEDROCKDATAAUTOMATION_API AudioGenerativeOutputLanguage GetAudioGenerativeOutputLanguageForName(const Aws::String& name);

AWS_BEDROCKDATAAUTOMATION_API Aws::String GetNameForAudioGenerativeOutputLanguage(AudioGenerativeOutputLanguage value);
}  // namespace AudioGenerativeOutputLanguageMapper
}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws
