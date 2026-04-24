/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/Channel.h>
#include <aws/connect/model/VoiceEnhancementMode.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {

/**
 * <p>Configuration settings for voice enhancement.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/VoiceEnhancementConfig">AWS
 * API Reference</a></p>
 */
class VoiceEnhancementConfig {
 public:
  AWS_CONNECT_API VoiceEnhancementConfig() = default;
  AWS_CONNECT_API VoiceEnhancementConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API VoiceEnhancementConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The channel for this voice enhancement configuration. <b>Only
   * <code>VOICE</code> is supported for this data type.</b> </p>
   */
  inline Channel GetChannel() const { return m_channel; }
  inline bool ChannelHasBeenSet() const { return m_channelHasBeenSet; }
  inline void SetChannel(Channel value) {
    m_channelHasBeenSet = true;
    m_channel = value;
  }
  inline VoiceEnhancementConfig& WithChannel(Channel value) {
    SetChannel(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The voice enhancement mode.</p>
   */
  inline VoiceEnhancementMode GetVoiceEnhancementMode() const { return m_voiceEnhancementMode; }
  inline bool VoiceEnhancementModeHasBeenSet() const { return m_voiceEnhancementModeHasBeenSet; }
  inline void SetVoiceEnhancementMode(VoiceEnhancementMode value) {
    m_voiceEnhancementModeHasBeenSet = true;
    m_voiceEnhancementMode = value;
  }
  inline VoiceEnhancementConfig& WithVoiceEnhancementMode(VoiceEnhancementMode value) {
    SetVoiceEnhancementMode(value);
    return *this;
  }
  ///@}
 private:
  Channel m_channel{Channel::NOT_SET};

  VoiceEnhancementMode m_voiceEnhancementMode{VoiceEnhancementMode::NOT_SET};
  bool m_channelHasBeenSet = false;
  bool m_voiceEnhancementModeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
