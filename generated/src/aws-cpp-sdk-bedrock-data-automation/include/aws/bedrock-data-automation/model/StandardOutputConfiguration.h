/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/bedrock-data-automation/model/DocumentStandardOutputConfiguration.h>
#include <aws/bedrock-data-automation/model/ImageStandardOutputConfiguration.h>
#include <aws/bedrock-data-automation/model/VideoStandardOutputConfiguration.h>
#include <aws/bedrock-data-automation/model/AudioStandardOutputConfiguration.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace BedrockDataAutomation
{
namespace Model
{

  /**
   * <p>Standard output configuration</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/StandardOutputConfiguration">AWS
   * API Reference</a></p>
   */
  class StandardOutputConfiguration
  {
  public:
    AWS_BEDROCKDATAAUTOMATION_API StandardOutputConfiguration() = default;
    AWS_BEDROCKDATAAUTOMATION_API StandardOutputConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API StandardOutputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const DocumentStandardOutputConfiguration& GetDocument() const { return m_document; }
    inline bool DocumentHasBeenSet() const { return m_documentHasBeenSet; }
    template<typename DocumentT = DocumentStandardOutputConfiguration>
    void SetDocument(DocumentT&& value) { m_documentHasBeenSet = true; m_document = std::forward<DocumentT>(value); }
    template<typename DocumentT = DocumentStandardOutputConfiguration>
    StandardOutputConfiguration& WithDocument(DocumentT&& value) { SetDocument(std::forward<DocumentT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ImageStandardOutputConfiguration& GetImage() const { return m_image; }
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }
    template<typename ImageT = ImageStandardOutputConfiguration>
    void SetImage(ImageT&& value) { m_imageHasBeenSet = true; m_image = std::forward<ImageT>(value); }
    template<typename ImageT = ImageStandardOutputConfiguration>
    StandardOutputConfiguration& WithImage(ImageT&& value) { SetImage(std::forward<ImageT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const VideoStandardOutputConfiguration& GetVideo() const { return m_video; }
    inline bool VideoHasBeenSet() const { return m_videoHasBeenSet; }
    template<typename VideoT = VideoStandardOutputConfiguration>
    void SetVideo(VideoT&& value) { m_videoHasBeenSet = true; m_video = std::forward<VideoT>(value); }
    template<typename VideoT = VideoStandardOutputConfiguration>
    StandardOutputConfiguration& WithVideo(VideoT&& value) { SetVideo(std::forward<VideoT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const AudioStandardOutputConfiguration& GetAudio() const { return m_audio; }
    inline bool AudioHasBeenSet() const { return m_audioHasBeenSet; }
    template<typename AudioT = AudioStandardOutputConfiguration>
    void SetAudio(AudioT&& value) { m_audioHasBeenSet = true; m_audio = std::forward<AudioT>(value); }
    template<typename AudioT = AudioStandardOutputConfiguration>
    StandardOutputConfiguration& WithAudio(AudioT&& value) { SetAudio(std::forward<AudioT>(value)); return *this;}
    ///@}
  private:

    DocumentStandardOutputConfiguration m_document;
    bool m_documentHasBeenSet = false;

    ImageStandardOutputConfiguration m_image;
    bool m_imageHasBeenSet = false;

    VideoStandardOutputConfiguration m_video;
    bool m_videoHasBeenSet = false;

    AudioStandardOutputConfiguration m_audio;
    bool m_audioHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
