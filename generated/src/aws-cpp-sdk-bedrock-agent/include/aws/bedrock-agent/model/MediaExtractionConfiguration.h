/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/AudioExtractionConfiguration.h>
#include <aws/bedrock-agent/model/ImageExtractionConfiguration.h>
#include <aws/bedrock-agent/model/VideoExtractionConfiguration.h>

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
 * <p>Configuration for media extraction settings.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/MediaExtractionConfiguration">AWS
 * API Reference</a></p>
 */
class MediaExtractionConfiguration {
 public:
  AWS_BEDROCKAGENT_API MediaExtractionConfiguration() = default;
  AWS_BEDROCKAGENT_API MediaExtractionConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENT_API MediaExtractionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Configuration for image extraction.</p>
   */
  inline const ImageExtractionConfiguration& GetImageExtractionConfiguration() const { return m_imageExtractionConfiguration; }
  inline bool ImageExtractionConfigurationHasBeenSet() const { return m_imageExtractionConfigurationHasBeenSet; }
  template <typename ImageExtractionConfigurationT = ImageExtractionConfiguration>
  void SetImageExtractionConfiguration(ImageExtractionConfigurationT&& value) {
    m_imageExtractionConfigurationHasBeenSet = true;
    m_imageExtractionConfiguration = std::forward<ImageExtractionConfigurationT>(value);
  }
  template <typename ImageExtractionConfigurationT = ImageExtractionConfiguration>
  MediaExtractionConfiguration& WithImageExtractionConfiguration(ImageExtractionConfigurationT&& value) {
    SetImageExtractionConfiguration(std::forward<ImageExtractionConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration for audio extraction.</p>
   */
  inline const AudioExtractionConfiguration& GetAudioExtractionConfiguration() const { return m_audioExtractionConfiguration; }
  inline bool AudioExtractionConfigurationHasBeenSet() const { return m_audioExtractionConfigurationHasBeenSet; }
  template <typename AudioExtractionConfigurationT = AudioExtractionConfiguration>
  void SetAudioExtractionConfiguration(AudioExtractionConfigurationT&& value) {
    m_audioExtractionConfigurationHasBeenSet = true;
    m_audioExtractionConfiguration = std::forward<AudioExtractionConfigurationT>(value);
  }
  template <typename AudioExtractionConfigurationT = AudioExtractionConfiguration>
  MediaExtractionConfiguration& WithAudioExtractionConfiguration(AudioExtractionConfigurationT&& value) {
    SetAudioExtractionConfiguration(std::forward<AudioExtractionConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration for video extraction.</p>
   */
  inline const VideoExtractionConfiguration& GetVideoExtractionConfiguration() const { return m_videoExtractionConfiguration; }
  inline bool VideoExtractionConfigurationHasBeenSet() const { return m_videoExtractionConfigurationHasBeenSet; }
  template <typename VideoExtractionConfigurationT = VideoExtractionConfiguration>
  void SetVideoExtractionConfiguration(VideoExtractionConfigurationT&& value) {
    m_videoExtractionConfigurationHasBeenSet = true;
    m_videoExtractionConfiguration = std::forward<VideoExtractionConfigurationT>(value);
  }
  template <typename VideoExtractionConfigurationT = VideoExtractionConfiguration>
  MediaExtractionConfiguration& WithVideoExtractionConfiguration(VideoExtractionConfigurationT&& value) {
    SetVideoExtractionConfiguration(std::forward<VideoExtractionConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  ImageExtractionConfiguration m_imageExtractionConfiguration;

  AudioExtractionConfiguration m_audioExtractionConfiguration;

  VideoExtractionConfiguration m_videoExtractionConfiguration;
  bool m_imageExtractionConfigurationHasBeenSet = false;
  bool m_audioExtractionConfigurationHasBeenSet = false;
  bool m_videoExtractionConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
