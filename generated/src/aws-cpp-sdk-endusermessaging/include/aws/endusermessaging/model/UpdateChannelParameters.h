/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/endusermessaging/EndUserMessaging_EXPORTS.h>
#include <aws/endusermessaging/model/UpdateNotifyParameters.h>
#include <aws/endusermessaging/model/UpdateTextParameters.h>
#include <aws/endusermessaging/model/UpdateVoiceParameters.h>
#include <aws/endusermessaging/model/UpdateWhatsAppParameters.h>

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
 * <p>The updated channel-specific parameters used only when you update a notify
 * code configuration. When you omit a channel, that channel's parameters remain
 * unchanged. When you supply a channel, you can clear individual fields by using
 * the empty-string or empty-map sentinel on a member, or drop the whole channel's
 * parameters by clearing every member. These sentinels apply only when you update
 * a configuration; a create request rejects empty values with a validation
 * error.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/endusermessaging-2026-09-21/UpdateChannelParameters">AWS
 * API Reference</a></p>
 */
class UpdateChannelParameters {
 public:
  AWS_ENDUSERMESSAGING_API UpdateChannelParameters() = default;
  AWS_ENDUSERMESSAGING_API UpdateChannelParameters(Aws::Utils::Json::JsonView jsonValue);
  AWS_ENDUSERMESSAGING_API UpdateChannelParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ENDUSERMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The text-channel parameters to update. Omit this member to leave the
   * text-channel parameters unchanged.</p>
   */
  inline const UpdateTextParameters& GetText() const { return m_text; }
  inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
  template <typename TextT = UpdateTextParameters>
  void SetText(TextT&& value) {
    m_textHasBeenSet = true;
    m_text = std::forward<TextT>(value);
  }
  template <typename TextT = UpdateTextParameters>
  UpdateChannelParameters& WithText(TextT&& value) {
    SetText(std::forward<TextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The voice-channel parameters to update. Omit this member to leave the
   * voice-channel parameters unchanged.</p>
   */
  inline const UpdateVoiceParameters& GetVoice() const { return m_voice; }
  inline bool VoiceHasBeenSet() const { return m_voiceHasBeenSet; }
  template <typename VoiceT = UpdateVoiceParameters>
  void SetVoice(VoiceT&& value) {
    m_voiceHasBeenSet = true;
    m_voice = std::forward<VoiceT>(value);
  }
  template <typename VoiceT = UpdateVoiceParameters>
  UpdateChannelParameters& WithVoice(VoiceT&& value) {
    SetVoice(std::forward<VoiceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The notify-template-route parameters to update. Omit this member to leave
   * them unchanged.</p>
   */
  inline const UpdateNotifyParameters& GetNotify() const { return m_notify; }
  inline bool NotifyHasBeenSet() const { return m_notifyHasBeenSet; }
  template <typename NotifyT = UpdateNotifyParameters>
  void SetNotify(NotifyT&& value) {
    m_notifyHasBeenSet = true;
    m_notify = std::forward<NotifyT>(value);
  }
  template <typename NotifyT = UpdateNotifyParameters>
  UpdateChannelParameters& WithNotify(NotifyT&& value) {
    SetNotify(std::forward<NotifyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The WhatsApp-channel parameters to update. Omit this member to leave the
   * WhatsApp-channel parameters unchanged.</p>
   */
  inline const UpdateWhatsAppParameters& GetWhatsApp() const { return m_whatsApp; }
  inline bool WhatsAppHasBeenSet() const { return m_whatsAppHasBeenSet; }
  template <typename WhatsAppT = UpdateWhatsAppParameters>
  void SetWhatsApp(WhatsAppT&& value) {
    m_whatsAppHasBeenSet = true;
    m_whatsApp = std::forward<WhatsAppT>(value);
  }
  template <typename WhatsAppT = UpdateWhatsAppParameters>
  UpdateChannelParameters& WithWhatsApp(WhatsAppT&& value) {
    SetWhatsApp(std::forward<WhatsAppT>(value));
    return *this;
  }
  ///@}
 private:
  UpdateTextParameters m_text;

  UpdateVoiceParameters m_voice;

  UpdateNotifyParameters m_notify;

  UpdateWhatsAppParameters m_whatsApp;
  bool m_textHasBeenSet = false;
  bool m_voiceHasBeenSet = false;
  bool m_notifyHasBeenSet = false;
  bool m_whatsAppHasBeenSet = false;
};

}  // namespace Model
}  // namespace EndUserMessaging
}  // namespace Aws
