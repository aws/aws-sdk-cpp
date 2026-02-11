/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/VoiceEnhancementConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

VoiceEnhancementConfig::VoiceEnhancementConfig(JsonView jsonValue) { *this = jsonValue; }

VoiceEnhancementConfig& VoiceEnhancementConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Channel")) {
    m_channel = ChannelMapper::GetChannelForName(jsonValue.GetString("Channel"));
    m_channelHasBeenSet = true;
  }
  if (jsonValue.ValueExists("VoiceEnhancementMode")) {
    m_voiceEnhancementMode = VoiceEnhancementModeMapper::GetVoiceEnhancementModeForName(jsonValue.GetString("VoiceEnhancementMode"));
    m_voiceEnhancementModeHasBeenSet = true;
  }
  return *this;
}

JsonValue VoiceEnhancementConfig::Jsonize() const {
  JsonValue payload;

  if (m_channelHasBeenSet) {
    payload.WithString("Channel", ChannelMapper::GetNameForChannel(m_channel));
  }

  if (m_voiceEnhancementModeHasBeenSet) {
    payload.WithString("VoiceEnhancementMode", VoiceEnhancementModeMapper::GetNameForVoiceEnhancementMode(m_voiceEnhancementMode));
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
