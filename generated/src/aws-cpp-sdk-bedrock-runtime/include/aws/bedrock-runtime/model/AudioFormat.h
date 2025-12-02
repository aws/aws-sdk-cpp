/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace BedrockRuntime {
namespace Model {
enum class AudioFormat { NOT_SET, mp3, opus, wav, aac, flac, mp4, ogg, mkv, mka, x_aac, m4a, mpeg, mpga, pcm, webm };

namespace AudioFormatMapper {
AWS_BEDROCKRUNTIME_API AudioFormat GetAudioFormatForName(const Aws::String& name);

AWS_BEDROCKRUNTIME_API Aws::String GetNameForAudioFormat(AudioFormat value);
}  // namespace AudioFormatMapper
}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
