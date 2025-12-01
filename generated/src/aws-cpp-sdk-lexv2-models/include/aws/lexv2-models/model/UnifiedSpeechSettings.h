/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/SpeechFoundationModel.h>

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
 * <p>Unified configuration settings that combine speech recognition and synthesis
 * capabilities.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/UnifiedSpeechSettings">AWS
 * API Reference</a></p>
 */
class UnifiedSpeechSettings {
 public:
  AWS_LEXMODELSV2_API UnifiedSpeechSettings() = default;
  AWS_LEXMODELSV2_API UnifiedSpeechSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_LEXMODELSV2_API UnifiedSpeechSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The foundation model configuration to use for unified speech processing
   * capabilities.</p>
   */
  inline const SpeechFoundationModel& GetSpeechFoundationModel() const { return m_speechFoundationModel; }
  inline bool SpeechFoundationModelHasBeenSet() const { return m_speechFoundationModelHasBeenSet; }
  template <typename SpeechFoundationModelT = SpeechFoundationModel>
  void SetSpeechFoundationModel(SpeechFoundationModelT&& value) {
    m_speechFoundationModelHasBeenSet = true;
    m_speechFoundationModel = std::forward<SpeechFoundationModelT>(value);
  }
  template <typename SpeechFoundationModelT = SpeechFoundationModel>
  UnifiedSpeechSettings& WithSpeechFoundationModel(SpeechFoundationModelT&& value) {
    SetSpeechFoundationModel(std::forward<SpeechFoundationModelT>(value));
    return *this;
  }
  ///@}
 private:
  SpeechFoundationModel m_speechFoundationModel;
  bool m_speechFoundationModelHasBeenSet = false;
};

}  // namespace Model
}  // namespace LexModelsV2
}  // namespace Aws
