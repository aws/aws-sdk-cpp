/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/VideoSegmentationConfiguration.h>

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
 * <p>Configuration settings for processing video content in multimodal knowledge
 * bases.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/VideoConfiguration">AWS
 * API Reference</a></p>
 */
class VideoConfiguration {
 public:
  AWS_BEDROCKAGENT_API VideoConfiguration() = default;
  AWS_BEDROCKAGENT_API VideoConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENT_API VideoConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Configuration for segmenting video content during processing.</p>
   */
  inline const VideoSegmentationConfiguration& GetSegmentationConfiguration() const { return m_segmentationConfiguration; }
  inline bool SegmentationConfigurationHasBeenSet() const { return m_segmentationConfigurationHasBeenSet; }
  template <typename SegmentationConfigurationT = VideoSegmentationConfiguration>
  void SetSegmentationConfiguration(SegmentationConfigurationT&& value) {
    m_segmentationConfigurationHasBeenSet = true;
    m_segmentationConfiguration = std::forward<SegmentationConfigurationT>(value);
  }
  template <typename SegmentationConfigurationT = VideoSegmentationConfiguration>
  VideoConfiguration& WithSegmentationConfiguration(SegmentationConfigurationT&& value) {
    SetSegmentationConfiguration(std::forward<SegmentationConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  VideoSegmentationConfiguration m_segmentationConfiguration;
  bool m_segmentationConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
