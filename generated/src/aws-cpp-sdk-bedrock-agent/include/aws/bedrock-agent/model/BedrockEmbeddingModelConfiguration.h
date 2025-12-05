/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/AudioConfiguration.h>
#include <aws/bedrock-agent/model/EmbeddingDataType.h>
#include <aws/bedrock-agent/model/VideoConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

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
 * <p>The vector configuration details for the Bedrock embeddings
 * model.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/BedrockEmbeddingModelConfiguration">AWS
 * API Reference</a></p>
 */
class BedrockEmbeddingModelConfiguration {
 public:
  AWS_BEDROCKAGENT_API BedrockEmbeddingModelConfiguration() = default;
  AWS_BEDROCKAGENT_API BedrockEmbeddingModelConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENT_API BedrockEmbeddingModelConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The dimensions details for the vector configuration used on the Bedrock
   * embeddings model.</p>
   */
  inline int GetDimensions() const { return m_dimensions; }
  inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }
  inline void SetDimensions(int value) {
    m_dimensionsHasBeenSet = true;
    m_dimensions = value;
  }
  inline BedrockEmbeddingModelConfiguration& WithDimensions(int value) {
    SetDimensions(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The data type for the vectors when using a model to convert text into vector
   * embeddings. The model must support the specified data type for vector
   * embeddings. Floating-point (float32) is the default data type, and is supported
   * by most models for vector embeddings. See <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/knowledge-base-supported.html">Supported
   * embeddings models</a> for information on the available models and their vector
   * data types.</p>
   */
  inline EmbeddingDataType GetEmbeddingDataType() const { return m_embeddingDataType; }
  inline bool EmbeddingDataTypeHasBeenSet() const { return m_embeddingDataTypeHasBeenSet; }
  inline void SetEmbeddingDataType(EmbeddingDataType value) {
    m_embeddingDataTypeHasBeenSet = true;
    m_embeddingDataType = value;
  }
  inline BedrockEmbeddingModelConfiguration& WithEmbeddingDataType(EmbeddingDataType value) {
    SetEmbeddingDataType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration settings for processing audio content in multimodal knowledge
   * bases.</p>
   */
  inline const Aws::Vector<AudioConfiguration>& GetAudio() const { return m_audio; }
  inline bool AudioHasBeenSet() const { return m_audioHasBeenSet; }
  template <typename AudioT = Aws::Vector<AudioConfiguration>>
  void SetAudio(AudioT&& value) {
    m_audioHasBeenSet = true;
    m_audio = std::forward<AudioT>(value);
  }
  template <typename AudioT = Aws::Vector<AudioConfiguration>>
  BedrockEmbeddingModelConfiguration& WithAudio(AudioT&& value) {
    SetAudio(std::forward<AudioT>(value));
    return *this;
  }
  template <typename AudioT = AudioConfiguration>
  BedrockEmbeddingModelConfiguration& AddAudio(AudioT&& value) {
    m_audioHasBeenSet = true;
    m_audio.emplace_back(std::forward<AudioT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration settings for processing video content in multimodal knowledge
   * bases.</p>
   */
  inline const Aws::Vector<VideoConfiguration>& GetVideo() const { return m_video; }
  inline bool VideoHasBeenSet() const { return m_videoHasBeenSet; }
  template <typename VideoT = Aws::Vector<VideoConfiguration>>
  void SetVideo(VideoT&& value) {
    m_videoHasBeenSet = true;
    m_video = std::forward<VideoT>(value);
  }
  template <typename VideoT = Aws::Vector<VideoConfiguration>>
  BedrockEmbeddingModelConfiguration& WithVideo(VideoT&& value) {
    SetVideo(std::forward<VideoT>(value));
    return *this;
  }
  template <typename VideoT = VideoConfiguration>
  BedrockEmbeddingModelConfiguration& AddVideo(VideoT&& value) {
    m_videoHasBeenSet = true;
    m_video.emplace_back(std::forward<VideoT>(value));
    return *this;
  }
  ///@}
 private:
  int m_dimensions{0};

  EmbeddingDataType m_embeddingDataType{EmbeddingDataType::NOT_SET};

  Aws::Vector<AudioConfiguration> m_audio;

  Aws::Vector<VideoConfiguration> m_video;
  bool m_dimensionsHasBeenSet = false;
  bool m_embeddingDataTypeHasBeenSet = false;
  bool m_audioHasBeenSet = false;
  bool m_videoHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
