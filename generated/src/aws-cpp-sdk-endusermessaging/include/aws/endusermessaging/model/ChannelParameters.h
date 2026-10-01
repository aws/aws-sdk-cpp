/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/endusermessaging/EndUserMessaging_EXPORTS.h>
#include <aws/endusermessaging/model/NotifyParameters.h>
#include <aws/endusermessaging/model/TextParameters.h>
#include <aws/endusermessaging/model/VoiceParameters.h>
#include <aws/endusermessaging/model/WhatsAppParameters.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace EndUserMessaging {
namespace Model {

/**
 * <p>The channel-specific parameters used to render and deliver a one-time
 * passcode. Each member configures the parameters for one delivery route. Populate
 * only the channels that a configuration or send request supports. A notify code
 * configuration can carry every channel at once, and a send request resolves to a
 * single route that selects the matching channel at send time.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/endusermessaging-2026-09-21/ChannelParameters">AWS
 * API Reference</a></p>
 */
class ChannelParameters {
 public:
  AWS_ENDUSERMESSAGING_API ChannelParameters() = default;
  AWS_ENDUSERMESSAGING_API ChannelParameters(Aws::Utils::Json::JsonView jsonValue);
  AWS_ENDUSERMESSAGING_API ChannelParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ENDUSERMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The parameters for the text channel, which delivers over SMS or RCS.</p>
   */
  inline const TextParameters& GetText() const { return m_text; }
  inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
  template <typename TextT = TextParameters>
  void SetText(TextT&& value) {
    m_textHasBeenSet = true;
    m_text = std::forward<TextT>(value);
  }
  template <typename TextT = TextParameters>
  ChannelParameters& WithText(TextT&& value) {
    SetText(std::forward<TextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The parameters for the voice channel.</p>
   */
  inline const VoiceParameters& GetVoice() const { return m_voice; }
  inline bool VoiceHasBeenSet() const { return m_voiceHasBeenSet; }
  template <typename VoiceT = VoiceParameters>
  void SetVoice(VoiceT&& value) {
    m_voiceHasBeenSet = true;
    m_voice = std::forward<VoiceT>(value);
  }
  template <typename VoiceT = VoiceParameters>
  ChannelParameters& WithVoice(VoiceT&& value) {
    SetVoice(std::forward<VoiceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The parameters for the preapproved notify-template route over the SMS or
   * voice channels.</p>
   */
  inline const NotifyParameters& GetNotify() const { return m_notify; }
  inline bool NotifyHasBeenSet() const { return m_notifyHasBeenSet; }
  template <typename NotifyT = NotifyParameters>
  void SetNotify(NotifyT&& value) {
    m_notifyHasBeenSet = true;
    m_notify = std::forward<NotifyT>(value);
  }
  template <typename NotifyT = NotifyParameters>
  ChannelParameters& WithNotify(NotifyT&& value) {
    SetNotify(std::forward<NotifyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The parameters for the WhatsApp channel.</p>
   */
  inline const WhatsAppParameters& GetWhatsApp() const { return m_whatsApp; }
  inline bool WhatsAppHasBeenSet() const { return m_whatsAppHasBeenSet; }
  template <typename WhatsAppT = WhatsAppParameters>
  void SetWhatsApp(WhatsAppT&& value) {
    m_whatsAppHasBeenSet = true;
    m_whatsApp = std::forward<WhatsAppT>(value);
  }
  template <typename WhatsAppT = WhatsAppParameters>
  ChannelParameters& WithWhatsApp(WhatsAppT&& value) {
    SetWhatsApp(std::forward<WhatsAppT>(value));
    return *this;
  }
  ///@}
 private:
  TextParameters m_text;

  VoiceParameters m_voice;

  NotifyParameters m_notify;

  WhatsAppParameters m_whatsApp;
  bool m_textHasBeenSet = false;
  bool m_voiceHasBeenSet = false;
  bool m_notifyHasBeenSet = false;
  bool m_whatsAppHasBeenSet = false;
};

}  // namespace Model
}  // namespace EndUserMessaging
}  // namespace Aws
