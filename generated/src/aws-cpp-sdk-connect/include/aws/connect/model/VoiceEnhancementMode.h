/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Connect {
namespace Model {
enum class VoiceEnhancementMode { NOT_SET, VOICE_ISOLATION, NOISE_SUPPRESSION, NONE };

namespace VoiceEnhancementModeMapper {
AWS_CONNECT_API VoiceEnhancementMode GetVoiceEnhancementModeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForVoiceEnhancementMode(VoiceEnhancementMode value);
}  // namespace VoiceEnhancementModeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
