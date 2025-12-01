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
 * <p>Configuration for a foundation model used for speech synthesis and
 * recognition capabilities.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/SpeechFoundationModel">AWS
 * API Reference</a></p>
 */
class SpeechFoundationModel {
 public:
  AWS_LEXMODELSV2_API SpeechFoundationModel() = default;
  AWS_LEXMODELSV2_API SpeechFoundationModel(Aws::Utils::Json::JsonView jsonValue);
  AWS_LEXMODELSV2_API SpeechFoundationModel& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the foundation model used for speech
   * processing.</p>
   */
  inline const Aws::String& GetModelArn() const { return m_modelArn; }
  inline bool ModelArnHasBeenSet() const { return m_modelArnHasBeenSet; }
  template <typename ModelArnT = Aws::String>
  void SetModelArn(ModelArnT&& value) {
    m_modelArnHasBeenSet = true;
    m_modelArn = std::forward<ModelArnT>(value);
  }
  template <typename ModelArnT = Aws::String>
  SpeechFoundationModel& WithModelArn(ModelArnT&& value) {
    SetModelArn(std::forward<ModelArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the voice to use for speech synthesis with the foundation
   * model.</p>
   */
  inline const Aws::String& GetVoiceId() const { return m_voiceId; }
  inline bool VoiceIdHasBeenSet() const { return m_voiceIdHasBeenSet; }
  template <typename VoiceIdT = Aws::String>
  void SetVoiceId(VoiceIdT&& value) {
    m_voiceIdHasBeenSet = true;
    m_voiceId = std::forward<VoiceIdT>(value);
  }
  template <typename VoiceIdT = Aws::String>
  SpeechFoundationModel& WithVoiceId(VoiceIdT&& value) {
    SetVoiceId(std::forward<VoiceIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_modelArn;
  bool m_modelArnHasBeenSet = false;

  Aws::String m_voiceId;
  bool m_voiceIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace LexModelsV2
}  // namespace Aws
