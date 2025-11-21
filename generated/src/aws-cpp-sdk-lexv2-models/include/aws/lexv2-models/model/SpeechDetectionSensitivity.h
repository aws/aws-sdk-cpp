/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>

namespace Aws {
namespace LexModelsV2 {
namespace Model {
enum class SpeechDetectionSensitivity { NOT_SET, Default, HighNoiseTolerance, MaximumNoiseTolerance };

namespace SpeechDetectionSensitivityMapper {
AWS_LEXMODELSV2_API SpeechDetectionSensitivity GetSpeechDetectionSensitivityForName(const Aws::String& name);

AWS_LEXMODELSV2_API Aws::String GetNameForSpeechDetectionSensitivity(SpeechDetectionSensitivity value);
}  // namespace SpeechDetectionSensitivityMapper
}  // namespace Model
}  // namespace LexModelsV2
}  // namespace Aws
