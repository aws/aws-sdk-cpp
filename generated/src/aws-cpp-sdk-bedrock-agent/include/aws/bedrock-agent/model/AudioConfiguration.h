/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/AudioSegmentationConfiguration.h>

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
 * <p>Configuration settings for processing audio content in multimodal knowledge
 * bases.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/AudioConfiguration">AWS
 * API Reference</a></p>
 */
class AudioConfiguration {
 public:
  AWS_BEDROCKAGENT_API AudioConfiguration() = default;
  AWS_BEDROCKAGENT_API AudioConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENT_API AudioConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Configuration for segmenting audio content during processing.</p>
   */
  inline const AudioSegmentationConfiguration& GetSegmentationConfiguration() const { return m_segmentationConfiguration; }
  inline bool SegmentationConfigurationHasBeenSet() const { return m_segmentationConfigurationHasBeenSet; }
  template <typename SegmentationConfigurationT = AudioSegmentationConfiguration>
  void SetSegmentationConfiguration(SegmentationConfigurationT&& value) {
    m_segmentationConfigurationHasBeenSet = true;
    m_segmentationConfiguration = std::forward<SegmentationConfigurationT>(value);
  }
  template <typename SegmentationConfigurationT = AudioSegmentationConfiguration>
  AudioConfiguration& WithSegmentationConfiguration(SegmentationConfigurationT&& value) {
    SetSegmentationConfiguration(std::forward<SegmentationConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  AudioSegmentationConfiguration m_segmentationConfiguration;
  bool m_segmentationConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
