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
    AWS_BEDROCKDATAAUTOMATION_API StandardOutputConfiguration();
    AWS_BEDROCKDATAAUTOMATION_API StandardOutputConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API StandardOutputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const DocumentStandardOutputConfiguration& GetDocument() const{ return m_document; }
    inline bool DocumentHasBeenSet() const { return m_documentHasBeenSet; }
    inline void SetDocument(const DocumentStandardOutputConfiguration& value) { m_documentHasBeenSet = true; m_document = value; }
    inline void SetDocument(DocumentStandardOutputConfiguration&& value) { m_documentHasBeenSet = true; m_document = std::move(value); }
    inline StandardOutputConfiguration& WithDocument(const DocumentStandardOutputConfiguration& value) { SetDocument(value); return *this;}
    inline StandardOutputConfiguration& WithDocument(DocumentStandardOutputConfiguration&& value) { SetDocument(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ImageStandardOutputConfiguration& GetImage() const{ return m_image; }
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }
    inline void SetImage(const ImageStandardOutputConfiguration& value) { m_imageHasBeenSet = true; m_image = value; }
    inline void SetImage(ImageStandardOutputConfiguration&& value) { m_imageHasBeenSet = true; m_image = std::move(value); }
    inline StandardOutputConfiguration& WithImage(const ImageStandardOutputConfiguration& value) { SetImage(value); return *this;}
    inline StandardOutputConfiguration& WithImage(ImageStandardOutputConfiguration&& value) { SetImage(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const VideoStandardOutputConfiguration& GetVideo() const{ return m_video; }
    inline bool VideoHasBeenSet() const { return m_videoHasBeenSet; }
    inline void SetVideo(const VideoStandardOutputConfiguration& value) { m_videoHasBeenSet = true; m_video = value; }
    inline void SetVideo(VideoStandardOutputConfiguration&& value) { m_videoHasBeenSet = true; m_video = std::move(value); }
    inline StandardOutputConfiguration& WithVideo(const VideoStandardOutputConfiguration& value) { SetVideo(value); return *this;}
    inline StandardOutputConfiguration& WithVideo(VideoStandardOutputConfiguration&& value) { SetVideo(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const AudioStandardOutputConfiguration& GetAudio() const{ return m_audio; }
    inline bool AudioHasBeenSet() const { return m_audioHasBeenSet; }
    inline void SetAudio(const AudioStandardOutputConfiguration& value) { m_audioHasBeenSet = true; m_audio = value; }
    inline void SetAudio(AudioStandardOutputConfiguration&& value) { m_audioHasBeenSet = true; m_audio = std::move(value); }
    inline StandardOutputConfiguration& WithAudio(const AudioStandardOutputConfiguration& value) { SetAudio(value); return *this;}
    inline StandardOutputConfiguration& WithAudio(AudioStandardOutputConfiguration&& value) { SetAudio(std::move(value)); return *this;}
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
