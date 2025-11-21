/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/AssistedNluMode.h>
#include <aws/lexv2-models/model/IntentDisambiguationSettings.h>

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
 * <p>Configures the Assisted Natural Language Understanding (NLU) feature for your
 * bot. This specification determines whether enhanced intent recognition and
 * utterance understanding capabilities are active.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/NluImprovementSpecification">AWS
 * API Reference</a></p>
 */
class NluImprovementSpecification {
 public:
  AWS_LEXMODELSV2_API NluImprovementSpecification() = default;
  AWS_LEXMODELSV2_API NluImprovementSpecification(Aws::Utils::Json::JsonView jsonValue);
  AWS_LEXMODELSV2_API NluImprovementSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Determines whether the Assisted NLU feature is enabled for the bot. When set
   * to <code>true</code>, Amazon Lex uses advanced models to improve intent
   * recognition and slot resolution, with the default being <code>false</code>.</p>
   */
  inline bool GetEnabled() const { return m_enabled; }
  inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
  inline void SetEnabled(bool value) {
    m_enabledHasBeenSet = true;
    m_enabled = value;
  }
  inline NluImprovementSpecification& WithEnabled(bool value) {
    SetEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the mode for Assisted NLU operation. Use <code>Primary</code> to
   * make Assisted NLU the primary intent recognition method, or
   * <code>Fallback</code> to use it only when standard NLU confidence is low.</p>
   */
  inline AssistedNluMode GetAssistedNluMode() const { return m_assistedNluMode; }
  inline bool AssistedNluModeHasBeenSet() const { return m_assistedNluModeHasBeenSet; }
  inline void SetAssistedNluMode(AssistedNluMode value) {
    m_assistedNluModeHasBeenSet = true;
    m_assistedNluMode = value;
  }
  inline NluImprovementSpecification& WithAssistedNluMode(AssistedNluMode value) {
    SetAssistedNluMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An object containing specifications for the Intent Disambiguation feature
   * within the Assisted NLU settings. These settings determine how the bot handles
   * ambiguous user inputs that could match multiple intents.</p>
   */
  inline const IntentDisambiguationSettings& GetIntentDisambiguationSettings() const { return m_intentDisambiguationSettings; }
  inline bool IntentDisambiguationSettingsHasBeenSet() const { return m_intentDisambiguationSettingsHasBeenSet; }
  template <typename IntentDisambiguationSettingsT = IntentDisambiguationSettings>
  void SetIntentDisambiguationSettings(IntentDisambiguationSettingsT&& value) {
    m_intentDisambiguationSettingsHasBeenSet = true;
    m_intentDisambiguationSettings = std::forward<IntentDisambiguationSettingsT>(value);
  }
  template <typename IntentDisambiguationSettingsT = IntentDisambiguationSettings>
  NluImprovementSpecification& WithIntentDisambiguationSettings(IntentDisambiguationSettingsT&& value) {
    SetIntentDisambiguationSettings(std::forward<IntentDisambiguationSettingsT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_enabled{false};
  bool m_enabledHasBeenSet = false;

  AssistedNluMode m_assistedNluMode{AssistedNluMode::NOT_SET};
  bool m_assistedNluModeHasBeenSet = false;

  IntentDisambiguationSettings m_intentDisambiguationSettings;
  bool m_intentDisambiguationSettingsHasBeenSet = false;
};

}  // namespace Model
}  // namespace LexModelsV2
}  // namespace Aws
