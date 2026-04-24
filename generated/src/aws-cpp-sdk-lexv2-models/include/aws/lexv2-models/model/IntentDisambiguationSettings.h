/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace LexModelsV2 {
namespace Model {

/**
 * <p>Configures the Intent Disambiguation feature that helps resolve ambiguous
 * user inputs when multiple intents could match. When enabled, the system presents
 * clarifying questions to users, helping them specify their exact intent for
 * improved conversation accuracy.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/IntentDisambiguationSettings">AWS
 * API Reference</a></p>
 */
class IntentDisambiguationSettings {
 public:
  AWS_LEXMODELSV2_API IntentDisambiguationSettings() = default;
  AWS_LEXMODELSV2_API IntentDisambiguationSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_LEXMODELSV2_API IntentDisambiguationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Determines whether the Intent Disambiguation feature is enabled. When set to
   * <code>true</code>, Amazon Lex will present disambiguation options to users when
   * multiple intents could match their input, with the default being
   * <code>false</code>.</p>
   */
  inline bool GetEnabled() const { return m_enabled; }
  inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
  inline void SetEnabled(bool value) {
    m_enabledHasBeenSet = true;
    m_enabled = value;
  }
  inline IntentDisambiguationSettings& WithEnabled(bool value) {
    SetEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the maximum number of intent options (2-5) to present to users when
   * disambiguation is needed. This setting determines how many intent options will
   * be shown to users when the system detects ambiguous input. The default value is
   * 3.</p>
   */
  inline int GetMaxDisambiguationIntents() const { return m_maxDisambiguationIntents; }
  inline bool MaxDisambiguationIntentsHasBeenSet() const { return m_maxDisambiguationIntentsHasBeenSet; }
  inline void SetMaxDisambiguationIntents(int value) {
    m_maxDisambiguationIntentsHasBeenSet = true;
    m_maxDisambiguationIntents = value;
  }
  inline IntentDisambiguationSettings& WithMaxDisambiguationIntents(int value) {
    SetMaxDisambiguationIntents(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Provides a custom message that will be displayed before presenting the
   * disambiguation options to users. This message helps set the context for users
   * and can be customized to match your bot's tone and brand. If not specified, a
   * default message will be used.</p>
   */
  inline const Aws::String& GetCustomDisambiguationMessage() const { return m_customDisambiguationMessage; }
  inline bool CustomDisambiguationMessageHasBeenSet() const { return m_customDisambiguationMessageHasBeenSet; }
  template <typename CustomDisambiguationMessageT = Aws::String>
  void SetCustomDisambiguationMessage(CustomDisambiguationMessageT&& value) {
    m_customDisambiguationMessageHasBeenSet = true;
    m_customDisambiguationMessage = std::forward<CustomDisambiguationMessageT>(value);
  }
  template <typename CustomDisambiguationMessageT = Aws::String>
  IntentDisambiguationSettings& WithCustomDisambiguationMessage(CustomDisambiguationMessageT&& value) {
    SetCustomDisambiguationMessage(std::forward<CustomDisambiguationMessageT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_enabled{false};

  int m_maxDisambiguationIntents{0};

  Aws::String m_customDisambiguationMessage;
  bool m_enabledHasBeenSet = false;
  bool m_maxDisambiguationIntentsHasBeenSet = false;
  bool m_customDisambiguationMessageHasBeenSet = false;
};

}  // namespace Model
}  // namespace LexModelsV2
}  // namespace Aws
