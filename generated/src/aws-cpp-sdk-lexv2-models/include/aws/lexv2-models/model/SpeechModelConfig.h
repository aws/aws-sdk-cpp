/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/DeepgramSpeechModelConfig.h>

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
 * <p>Configuration settings that define which speech-to-text model to use for
 * processing speech input.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/SpeechModelConfig">AWS
 * API Reference</a></p>
 */
class SpeechModelConfig {
 public:
  AWS_LEXMODELSV2_API SpeechModelConfig() = default;
  AWS_LEXMODELSV2_API SpeechModelConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_LEXMODELSV2_API SpeechModelConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Configuration settings for using Deepgram as the speech-to-text provider.</p>
   */
  inline const DeepgramSpeechModelConfig& GetDeepgramConfig() const { return m_deepgramConfig; }
  inline bool DeepgramConfigHasBeenSet() const { return m_deepgramConfigHasBeenSet; }
  template <typename DeepgramConfigT = DeepgramSpeechModelConfig>
  void SetDeepgramConfig(DeepgramConfigT&& value) {
    m_deepgramConfigHasBeenSet = true;
    m_deepgramConfig = std::forward<DeepgramConfigT>(value);
  }
  template <typename DeepgramConfigT = DeepgramSpeechModelConfig>
  SpeechModelConfig& WithDeepgramConfig(DeepgramConfigT&& value) {
    SetDeepgramConfig(std::forward<DeepgramConfigT>(value));
    return *this;
  }
  ///@}
 private:
  DeepgramSpeechModelConfig m_deepgramConfig;
  bool m_deepgramConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace LexModelsV2
}  // namespace Aws
