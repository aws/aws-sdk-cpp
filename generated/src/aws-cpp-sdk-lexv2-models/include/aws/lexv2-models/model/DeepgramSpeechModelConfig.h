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
 * <p>Configuration settings for integrating Deepgram speech-to-text models with
 * Amazon Lex.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DeepgramSpeechModelConfig">AWS
 * API Reference</a></p>
 */
class DeepgramSpeechModelConfig {
 public:
  AWS_LEXMODELSV2_API DeepgramSpeechModelConfig() = default;
  AWS_LEXMODELSV2_API DeepgramSpeechModelConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_LEXMODELSV2_API DeepgramSpeechModelConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Secrets Manager secret that contains
   * the Deepgram API token.</p>
   */
  inline const Aws::String& GetApiTokenSecretArn() const { return m_apiTokenSecretArn; }
  inline bool ApiTokenSecretArnHasBeenSet() const { return m_apiTokenSecretArnHasBeenSet; }
  template <typename ApiTokenSecretArnT = Aws::String>
  void SetApiTokenSecretArn(ApiTokenSecretArnT&& value) {
    m_apiTokenSecretArnHasBeenSet = true;
    m_apiTokenSecretArn = std::forward<ApiTokenSecretArnT>(value);
  }
  template <typename ApiTokenSecretArnT = Aws::String>
  DeepgramSpeechModelConfig& WithApiTokenSecretArn(ApiTokenSecretArnT&& value) {
    SetApiTokenSecretArn(std::forward<ApiTokenSecretArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the Deepgram speech-to-text model to use for processing
   * speech input.</p>
   */
  inline const Aws::String& GetModelId() const { return m_modelId; }
  inline bool ModelIdHasBeenSet() const { return m_modelIdHasBeenSet; }
  template <typename ModelIdT = Aws::String>
  void SetModelId(ModelIdT&& value) {
    m_modelIdHasBeenSet = true;
    m_modelId = std::forward<ModelIdT>(value);
  }
  template <typename ModelIdT = Aws::String>
  DeepgramSpeechModelConfig& WithModelId(ModelIdT&& value) {
    SetModelId(std::forward<ModelIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_apiTokenSecretArn;

  Aws::String m_modelId;
  bool m_apiTokenSecretArnHasBeenSet = false;
  bool m_modelIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace LexModelsV2
}  // namespace Aws
