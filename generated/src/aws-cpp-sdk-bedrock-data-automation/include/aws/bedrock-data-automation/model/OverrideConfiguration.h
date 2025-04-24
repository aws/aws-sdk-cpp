/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/bedrock-data-automation/model/DocumentOverrideConfiguration.h>
#include <aws/bedrock-data-automation/model/ImageOverrideConfiguration.h>
#include <aws/bedrock-data-automation/model/VideoOverrideConfiguration.h>
#include <aws/bedrock-data-automation/model/AudioOverrideConfiguration.h>
#include <aws/bedrock-data-automation/model/ModalityRoutingConfiguration.h>
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
   * <p>Override configuration</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/OverrideConfiguration">AWS
   * API Reference</a></p>
   */
  class OverrideConfiguration
  {
  public:
    AWS_BEDROCKDATAAUTOMATION_API OverrideConfiguration() = default;
    AWS_BEDROCKDATAAUTOMATION_API OverrideConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API OverrideConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const DocumentOverrideConfiguration& GetDocument() const { return m_document; }
    inline bool DocumentHasBeenSet() const { return m_documentHasBeenSet; }
    template<typename DocumentT = DocumentOverrideConfiguration>
    void SetDocument(DocumentT&& value) { m_documentHasBeenSet = true; m_document = std::forward<DocumentT>(value); }
    template<typename DocumentT = DocumentOverrideConfiguration>
    OverrideConfiguration& WithDocument(DocumentT&& value) { SetDocument(std::forward<DocumentT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ImageOverrideConfiguration& GetImage() const { return m_image; }
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }
    template<typename ImageT = ImageOverrideConfiguration>
    void SetImage(ImageT&& value) { m_imageHasBeenSet = true; m_image = std::forward<ImageT>(value); }
    template<typename ImageT = ImageOverrideConfiguration>
    OverrideConfiguration& WithImage(ImageT&& value) { SetImage(std::forward<ImageT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const VideoOverrideConfiguration& GetVideo() const { return m_video; }
    inline bool VideoHasBeenSet() const { return m_videoHasBeenSet; }
    template<typename VideoT = VideoOverrideConfiguration>
    void SetVideo(VideoT&& value) { m_videoHasBeenSet = true; m_video = std::forward<VideoT>(value); }
    template<typename VideoT = VideoOverrideConfiguration>
    OverrideConfiguration& WithVideo(VideoT&& value) { SetVideo(std::forward<VideoT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const AudioOverrideConfiguration& GetAudio() const { return m_audio; }
    inline bool AudioHasBeenSet() const { return m_audioHasBeenSet; }
    template<typename AudioT = AudioOverrideConfiguration>
    void SetAudio(AudioT&& value) { m_audioHasBeenSet = true; m_audio = std::forward<AudioT>(value); }
    template<typename AudioT = AudioOverrideConfiguration>
    OverrideConfiguration& WithAudio(AudioT&& value) { SetAudio(std::forward<AudioT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ModalityRoutingConfiguration& GetModalityRouting() const { return m_modalityRouting; }
    inline bool ModalityRoutingHasBeenSet() const { return m_modalityRoutingHasBeenSet; }
    template<typename ModalityRoutingT = ModalityRoutingConfiguration>
    void SetModalityRouting(ModalityRoutingT&& value) { m_modalityRoutingHasBeenSet = true; m_modalityRouting = std::forward<ModalityRoutingT>(value); }
    template<typename ModalityRoutingT = ModalityRoutingConfiguration>
    OverrideConfiguration& WithModalityRouting(ModalityRoutingT&& value) { SetModalityRouting(std::forward<ModalityRoutingT>(value)); return *this;}
    ///@}
  private:

    DocumentOverrideConfiguration m_document;
    bool m_documentHasBeenSet = false;

    ImageOverrideConfiguration m_image;
    bool m_imageHasBeenSet = false;

    VideoOverrideConfiguration m_video;
    bool m_videoHasBeenSet = false;

    AudioOverrideConfiguration m_audio;
    bool m_audioHasBeenSet = false;

    ModalityRoutingConfiguration m_modalityRouting;
    bool m_modalityRoutingHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
