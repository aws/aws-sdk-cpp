/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/SpeechModelConfig.h>
#include <aws/lexv2-models/model/SpeechModelPreference.h>

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
 * <p>Settings that control how Amazon Lex processes and recognizes speech input
 * from users.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/SpeechRecognitionSettings">AWS
 * API Reference</a></p>
 */
class SpeechRecognitionSettings {
 public:
  AWS_LEXMODELSV2_API SpeechRecognitionSettings() = default;
  AWS_LEXMODELSV2_API SpeechRecognitionSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_LEXMODELSV2_API SpeechRecognitionSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The speech-to-text model to use.</p>
   */
  inline SpeechModelPreference GetSpeechModelPreference() const { return m_speechModelPreference; }
  inline bool SpeechModelPreferenceHasBeenSet() const { return m_speechModelPreferenceHasBeenSet; }
  inline void SetSpeechModelPreference(SpeechModelPreference value) {
    m_speechModelPreferenceHasBeenSet = true;
    m_speechModelPreference = value;
  }
  inline SpeechRecognitionSettings& WithSpeechModelPreference(SpeechModelPreference value) {
    SetSpeechModelPreference(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration settings for the selected speech-to-text model.</p>
   */
  inline const SpeechModelConfig& GetSpeechModelConfig() const { return m_speechModelConfig; }
  inline bool SpeechModelConfigHasBeenSet() const { return m_speechModelConfigHasBeenSet; }
  template <typename SpeechModelConfigT = SpeechModelConfig>
  void SetSpeechModelConfig(SpeechModelConfigT&& value) {
    m_speechModelConfigHasBeenSet = true;
    m_speechModelConfig = std::forward<SpeechModelConfigT>(value);
  }
  template <typename SpeechModelConfigT = SpeechModelConfig>
  SpeechRecognitionSettings& WithSpeechModelConfig(SpeechModelConfigT&& value) {
    SetSpeechModelConfig(std::forward<SpeechModelConfigT>(value));
    return *this;
  }
  ///@}
 private:
  SpeechModelPreference m_speechModelPreference{SpeechModelPreference::NOT_SET};

  SpeechModelConfig m_speechModelConfig;
  bool m_speechModelPreferenceHasBeenSet = false;
  bool m_speechModelConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace LexModelsV2
}  // namespace Aws
