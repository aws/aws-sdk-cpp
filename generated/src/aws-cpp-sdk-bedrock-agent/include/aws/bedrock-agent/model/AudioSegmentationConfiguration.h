/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>

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
 * <p>Configuration for segmenting audio content during multimodal knowledge base
 * ingestion. Determines how audio files are divided into chunks for
 * processing.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/AudioSegmentationConfiguration">AWS
 * API Reference</a></p>
 */
class AudioSegmentationConfiguration {
 public:
  AWS_BEDROCKAGENT_API AudioSegmentationConfiguration() = default;
  AWS_BEDROCKAGENT_API AudioSegmentationConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENT_API AudioSegmentationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The duration in seconds for each audio segment. Audio files will be divided
   * into chunks of this length for processing.</p>
   */
  inline int GetFixedLengthDuration() const { return m_fixedLengthDuration; }
  inline bool FixedLengthDurationHasBeenSet() const { return m_fixedLengthDurationHasBeenSet; }
  inline void SetFixedLengthDuration(int value) {
    m_fixedLengthDurationHasBeenSet = true;
    m_fixedLengthDuration = value;
  }
  inline AudioSegmentationConfiguration& WithFixedLengthDuration(int value) {
    SetFixedLengthDuration(value);
    return *this;
  }
  ///@}
 private:
  int m_fixedLengthDuration{0};
  bool m_fixedLengthDurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
