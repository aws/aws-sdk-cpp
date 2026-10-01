/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/endusermessaging/EndUserMessaging_EXPORTS.h>

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
 * <p>The delivery parameters for the preapproved notify-template route over the
 * SMS or voice channels.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/endusermessaging-2026-09-21/NotifyParameters">AWS
 * API Reference</a></p>
 */
class NotifyParameters {
 public:
  AWS_ENDUSERMESSAGING_API NotifyParameters() = default;
  AWS_ENDUSERMESSAGING_API NotifyParameters(Aws::Utils::Json::JsonView jsonValue);
  AWS_ENDUSERMESSAGING_API NotifyParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ENDUSERMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of a preapproved notify template for the SMS or voice
   * channels.</p>
   */
  inline const Aws::String& GetNotifyTemplateId() const { return m_notifyTemplateId; }
  inline bool NotifyTemplateIdHasBeenSet() const { return m_notifyTemplateIdHasBeenSet; }
  template <typename NotifyTemplateIdT = Aws::String>
  void SetNotifyTemplateId(NotifyTemplateIdT&& value) {
    m_notifyTemplateIdHasBeenSet = true;
    m_notifyTemplateId = std::forward<NotifyTemplateIdT>(value);
  }
  template <typename NotifyTemplateIdT = Aws::String>
  NotifyParameters& WithNotifyTemplateId(NotifyTemplateIdT&& value) {
    SetNotifyTemplateId(std::forward<NotifyTemplateIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Polly voice ID used when the notify template is delivered over the
   * voice channel.</p>
   */
  inline const Aws::String& GetVoiceId() const { return m_voiceId; }
  inline bool VoiceIdHasBeenSet() const { return m_voiceIdHasBeenSet; }
  template <typename VoiceIdT = Aws::String>
  void SetVoiceId(VoiceIdT&& value) {
    m_voiceIdHasBeenSet = true;
    m_voiceId = std::forward<VoiceIdT>(value);
  }
  template <typename VoiceIdT = Aws::String>
  NotifyParameters& WithVoiceId(VoiceIdT&& value) {
    SetVoiceId(std::forward<VoiceIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_notifyTemplateId;

  Aws::String m_voiceId;
  bool m_notifyTemplateIdHasBeenSet = false;
  bool m_voiceIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace EndUserMessaging
}  // namespace Aws
