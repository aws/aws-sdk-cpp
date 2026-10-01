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
 * <p>The delivery parameters for the WhatsApp channel.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/endusermessaging-2026-09-21/WhatsAppParameters">AWS
 * API Reference</a></p>
 */
class WhatsAppParameters {
 public:
  AWS_ENDUSERMESSAGING_API WhatsAppParameters() = default;
  AWS_ENDUSERMESSAGING_API WhatsAppParameters(Aws::Utils::Json::JsonView jsonValue);
  AWS_ENDUSERMESSAGING_API WhatsAppParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ENDUSERMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the Meta-approved WhatsApp authentication template.</p>
   */
  inline const Aws::String& GetWhatsAppTemplateName() const { return m_whatsAppTemplateName; }
  inline bool WhatsAppTemplateNameHasBeenSet() const { return m_whatsAppTemplateNameHasBeenSet; }
  template <typename WhatsAppTemplateNameT = Aws::String>
  void SetWhatsAppTemplateName(WhatsAppTemplateNameT&& value) {
    m_whatsAppTemplateNameHasBeenSet = true;
    m_whatsAppTemplateName = std::forward<WhatsAppTemplateNameT>(value);
  }
  template <typename WhatsAppTemplateNameT = Aws::String>
  WhatsAppParameters& WithWhatsAppTemplateName(WhatsAppTemplateNameT&& value) {
    SetWhatsAppTemplateName(std::forward<WhatsAppTemplateNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The BCP 47 language code used to render the template. This value is required
   * for the WhatsApp channel.</p>
   */
  inline const Aws::String& GetLanguageCode() const { return m_languageCode; }
  inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
  template <typename LanguageCodeT = Aws::String>
  void SetLanguageCode(LanguageCodeT&& value) {
    m_languageCodeHasBeenSet = true;
    m_languageCode = std::forward<LanguageCodeT>(value);
  }
  template <typename LanguageCodeT = Aws::String>
  WhatsAppParameters& WithLanguageCode(LanguageCodeT&& value) {
    SetLanguageCode(std::forward<LanguageCodeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_whatsAppTemplateName;

  Aws::String m_languageCode;
  bool m_whatsAppTemplateNameHasBeenSet = false;
  bool m_languageCodeHasBeenSet = false;
};

}  // namespace Model
}  // namespace EndUserMessaging
}  // namespace Aws
