/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/EnabledOrDisabledState.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgent {
namespace Model {

/**
 * <p>Configuration for audio extraction.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/AudioExtractionConfiguration">AWS
 * API Reference</a></p>
 */
class AudioExtractionConfiguration {
 public:
  AWS_BEDROCKAGENT_API AudioExtractionConfiguration() = default;
  AWS_BEDROCKAGENT_API AudioExtractionConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENT_API AudioExtractionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Whether audio extraction is enabled or disabled.</p>
   */
  inline EnabledOrDisabledState GetAudioExtractionStatus() const { return m_audioExtractionStatus; }
  inline bool AudioExtractionStatusHasBeenSet() const { return m_audioExtractionStatusHasBeenSet; }
  inline void SetAudioExtractionStatus(EnabledOrDisabledState value) {
    m_audioExtractionStatusHasBeenSet = true;
    m_audioExtractionStatus = value;
  }
  inline AudioExtractionConfiguration& WithAudioExtractionStatus(EnabledOrDisabledState value) {
    SetAudioExtractionStatus(value);
    return *this;
  }
  ///@}
 private:
  EnabledOrDisabledState m_audioExtractionStatus{EnabledOrDisabledState::NOT_SET};
  bool m_audioExtractionStatusHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
