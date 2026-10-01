/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/endusermessaging/EndUserMessaging_EXPORTS.h>
#include <aws/endusermessaging/model/VoiceMessageBodyTextType.h>

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
 * <p>The updated delivery parameters for the voice channel. Absent members
 * preserve the current value, and the empty sentinel on a member clears
 * it.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/endusermessaging-2026-09-21/UpdateVoiceParameters">AWS
 * API Reference</a></p>
 */
class UpdateVoiceParameters {
 public:
  AWS_ENDUSERMESSAGING_API UpdateVoiceParameters() = default;
  AWS_ENDUSERMESSAGING_API UpdateVoiceParameters(Aws::Utils::Json::JsonView jsonValue);
  AWS_ENDUSERMESSAGING_API UpdateVoiceParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ENDUSERMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The updated freeform voice template body. An empty string clears the
   * previously stored value.</p>
   */
  inline const Aws::String& GetInlineTemplateBody() const { return m_inlineTemplateBody; }
  inline bool InlineTemplateBodyHasBeenSet() const { return m_inlineTemplateBodyHasBeenSet; }
  template <typename InlineTemplateBodyT = Aws::String>
  void SetInlineTemplateBody(InlineTemplateBodyT&& value) {
    m_inlineTemplateBodyHasBeenSet = true;
    m_inlineTemplateBody = std::forward<InlineTemplateBodyT>(value);
  }
  template <typename InlineTemplateBodyT = Aws::String>
  UpdateVoiceParameters& WithInlineTemplateBody(InlineTemplateBodyT&& value) {
    SetInlineTemplateBody(std::forward<InlineTemplateBodyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated BCP 47 language code. An empty string clears the previously
   * stored value.</p>
   */
  inline const Aws::String& GetLanguageCode() const { return m_languageCode; }
  inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
  template <typename LanguageCodeT = Aws::String>
  void SetLanguageCode(LanguageCodeT&& value) {
    m_languageCodeHasBeenSet = true;
    m_languageCode = std::forward<LanguageCodeT>(value);
  }
  template <typename LanguageCodeT = Aws::String>
  UpdateVoiceParameters& WithLanguageCode(LanguageCodeT&& value) {
    SetLanguageCode(std::forward<LanguageCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated Amazon Polly voice ID. An empty string clears the previously
   * stored value.</p>
   */
  inline const Aws::String& GetVoiceId() const { return m_voiceId; }
  inline bool VoiceIdHasBeenSet() const { return m_voiceIdHasBeenSet; }
  template <typename VoiceIdT = Aws::String>
  void SetVoiceId(VoiceIdT&& value) {
    m_voiceIdHasBeenSet = true;
    m_voiceId = std::forward<VoiceIdT>(value);
  }
  template <typename VoiceIdT = Aws::String>
  UpdateVoiceParameters& WithVoiceId(VoiceIdT&& value) {
    SetVoiceId(std::forward<VoiceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated format of the voice message body. Valid values are TEXT and SSML.
   * Omit this member to preserve the current value.</p>
   */
  inline VoiceMessageBodyTextType GetVoiceMessageBodyTextType() const { return m_voiceMessageBodyTextType; }
  inline bool VoiceMessageBodyTextTypeHasBeenSet() const { return m_voiceMessageBodyTextTypeHasBeenSet; }
  inline void SetVoiceMessageBodyTextType(VoiceMessageBodyTextType value) {
    m_voiceMessageBodyTextTypeHasBeenSet = true;
    m_voiceMessageBodyTextType = value;
  }
  inline UpdateVoiceParameters& WithVoiceMessageBodyTextType(VoiceMessageBodyTextType value) {
    SetVoiceMessageBodyTextType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_inlineTemplateBody;

  Aws::String m_languageCode;

  Aws::String m_voiceId;

  VoiceMessageBodyTextType m_voiceMessageBodyTextType{VoiceMessageBodyTextType::NOT_SET};
  bool m_inlineTemplateBodyHasBeenSet = false;
  bool m_languageCodeHasBeenSet = false;
  bool m_voiceIdHasBeenSet = false;
  bool m_voiceMessageBodyTextTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace EndUserMessaging
}  // namespace Aws
