/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>

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
 * <p>Specifies configuration that restricts speech detection to the primary
 * (loudest) speaker during streaming audio conversations, so that speech from
 * background speakers does not start a turn, interrupt the bot, or reach speech
 * recognition.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/SpeakerDiarizationSettings">AWS
 * API Reference</a></p>
 */
class SpeakerDiarizationSettings {
 public:
  AWS_LEXMODELSV2_API SpeakerDiarizationSettings() = default;
  AWS_LEXMODELSV2_API SpeakerDiarizationSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_LEXMODELSV2_API SpeakerDiarizationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies whether speaker diarization is enabled for the bot locale. Set to
   * <code>true</code> to have Amazon Lex treat speech from speakers other than the
   * primary speaker as non-speech. Set to <code>false</code> to disable speaker
   * diarization and rely on voice activity detection alone.</p>
   */
  inline bool GetEnabled() const { return m_enabled; }
  inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
  inline void SetEnabled(bool value) {
    m_enabledHasBeenSet = true;
    m_enabled = value;
  }
  inline SpeakerDiarizationSettings& WithEnabled(bool value) {
    SetEnabled(value);
    return *this;
  }
  ///@}
 private:
  bool m_enabled{false};
  bool m_enabledHasBeenSet = false;
};

}  // namespace Model
}  // namespace LexModelsV2
}  // namespace Aws
