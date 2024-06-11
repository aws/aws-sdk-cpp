﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elastictranscoder/ElasticTranscoder_EXPORTS.h>
#include <aws/elastictranscoder/ElasticTranscoderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elastictranscoder/model/VideoParameters.h>
#include <aws/elastictranscoder/model/AudioParameters.h>
#include <aws/elastictranscoder/model/Thumbnails.h>
#include <utility>

namespace Aws
{
namespace ElasticTranscoder
{
namespace Model
{

  /**
   * <p>The <code>CreatePresetRequest</code> structure.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/CreatePresetRequest">AWS
   * API Reference</a></p>
   */
  class CreatePresetRequest : public ElasticTranscoderRequest
  {
  public:
    AWS_ELASTICTRANSCODER_API CreatePresetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePreset"; }

    AWS_ELASTICTRANSCODER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the preset. We recommend that the name be unique within the AWS
     * account, but uniqueness is not enforced.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreatePresetRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreatePresetRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreatePresetRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the preset.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreatePresetRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreatePresetRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreatePresetRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The container type for the output file. Valid values include
     * <code>flac</code>, <code>flv</code>, <code>fmp4</code>, <code>gif</code>,
     * <code>mp3</code>, <code>mp4</code>, <code>mpg</code>, <code>mxf</code>,
     * <code>oga</code>, <code>ogg</code>, <code>ts</code>, and <code>webm</code>.</p>
     */
    inline const Aws::String& GetContainer() const{ return m_container; }
    inline bool ContainerHasBeenSet() const { return m_containerHasBeenSet; }
    inline void SetContainer(const Aws::String& value) { m_containerHasBeenSet = true; m_container = value; }
    inline void SetContainer(Aws::String&& value) { m_containerHasBeenSet = true; m_container = std::move(value); }
    inline void SetContainer(const char* value) { m_containerHasBeenSet = true; m_container.assign(value); }
    inline CreatePresetRequest& WithContainer(const Aws::String& value) { SetContainer(value); return *this;}
    inline CreatePresetRequest& WithContainer(Aws::String&& value) { SetContainer(std::move(value)); return *this;}
    inline CreatePresetRequest& WithContainer(const char* value) { SetContainer(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A section of the request body that specifies the video parameters.</p>
     */
    inline const VideoParameters& GetVideo() const{ return m_video; }
    inline bool VideoHasBeenSet() const { return m_videoHasBeenSet; }
    inline void SetVideo(const VideoParameters& value) { m_videoHasBeenSet = true; m_video = value; }
    inline void SetVideo(VideoParameters&& value) { m_videoHasBeenSet = true; m_video = std::move(value); }
    inline CreatePresetRequest& WithVideo(const VideoParameters& value) { SetVideo(value); return *this;}
    inline CreatePresetRequest& WithVideo(VideoParameters&& value) { SetVideo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A section of the request body that specifies the audio parameters.</p>
     */
    inline const AudioParameters& GetAudio() const{ return m_audio; }
    inline bool AudioHasBeenSet() const { return m_audioHasBeenSet; }
    inline void SetAudio(const AudioParameters& value) { m_audioHasBeenSet = true; m_audio = value; }
    inline void SetAudio(AudioParameters&& value) { m_audioHasBeenSet = true; m_audio = std::move(value); }
    inline CreatePresetRequest& WithAudio(const AudioParameters& value) { SetAudio(value); return *this;}
    inline CreatePresetRequest& WithAudio(AudioParameters&& value) { SetAudio(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A section of the request body that specifies the thumbnail parameters, if
     * any.</p>
     */
    inline const Thumbnails& GetThumbnails() const{ return m_thumbnails; }
    inline bool ThumbnailsHasBeenSet() const { return m_thumbnailsHasBeenSet; }
    inline void SetThumbnails(const Thumbnails& value) { m_thumbnailsHasBeenSet = true; m_thumbnails = value; }
    inline void SetThumbnails(Thumbnails&& value) { m_thumbnailsHasBeenSet = true; m_thumbnails = std::move(value); }
    inline CreatePresetRequest& WithThumbnails(const Thumbnails& value) { SetThumbnails(value); return *this;}
    inline CreatePresetRequest& WithThumbnails(Thumbnails&& value) { SetThumbnails(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_container;
    bool m_containerHasBeenSet = false;

    VideoParameters m_video;
    bool m_videoHasBeenSet = false;

    AudioParameters m_audio;
    bool m_audioHasBeenSet = false;

    Thumbnails m_thumbnails;
    bool m_thumbnailsHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
