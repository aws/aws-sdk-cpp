/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/elastictranscoder/ElasticTranscoder_EXPORTS.h>
#include <aws/elastictranscoder/ElasticTranscoderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elastictranscoder/model/VideoParameters.h>
#include <aws/elastictranscoder/model/AudioParameters.h>
#include <aws/elastictranscoder/model/Thumbnails.h>

namespace Aws
{
namespace ElasticTranscoder
{
namespace Model
{

  /**
   * <p>The <code>CreatePresetRequest</code> structure.</p>
   */
  class AWS_ELASTICTRANSCODER_API CreatePresetRequest : public ElasticTranscoderRequest
  {
  public:
    CreatePresetRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name of the preset. We recommend that the name be unique within the AWS
     * account, but uniqueness is not enforced.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the preset. We recommend that the name be unique within the AWS
     * account, but uniqueness is not enforced.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the preset. We recommend that the name be unique within the AWS
     * account, but uniqueness is not enforced.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the preset. We recommend that the name be unique within the AWS
     * account, but uniqueness is not enforced.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the preset. We recommend that the name be unique within the AWS
     * account, but uniqueness is not enforced.</p>
     */
    inline CreatePresetRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the preset. We recommend that the name be unique within the AWS
     * account, but uniqueness is not enforced.</p>
     */
    inline CreatePresetRequest& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name of the preset. We recommend that the name be unique within the AWS
     * account, but uniqueness is not enforced.</p>
     */
    inline CreatePresetRequest& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>A description of the preset.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the preset.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the preset.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the preset.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the preset.</p>
     */
    inline CreatePresetRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the preset.</p>
     */
    inline CreatePresetRequest& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the preset.</p>
     */
    inline CreatePresetRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>The container type for the output file. Valid values include
     * <code>flac</code>, <code>flv</code>, <code>fmp4</code>, <code>gif</code>,
     * <code>mp3</code>, <code>mp4</code>, <code>mpg</code>, <code>mxf</code>,
     * <code>oga</code>, <code>ogg</code>, <code>ts</code>, and <code>webm</code>.</p>
     */
    inline const Aws::String& GetContainer() const{ return m_container; }

    /**
     * <p>The container type for the output file. Valid values include
     * <code>flac</code>, <code>flv</code>, <code>fmp4</code>, <code>gif</code>,
     * <code>mp3</code>, <code>mp4</code>, <code>mpg</code>, <code>mxf</code>,
     * <code>oga</code>, <code>ogg</code>, <code>ts</code>, and <code>webm</code>.</p>
     */
    inline void SetContainer(const Aws::String& value) { m_containerHasBeenSet = true; m_container = value; }

    /**
     * <p>The container type for the output file. Valid values include
     * <code>flac</code>, <code>flv</code>, <code>fmp4</code>, <code>gif</code>,
     * <code>mp3</code>, <code>mp4</code>, <code>mpg</code>, <code>mxf</code>,
     * <code>oga</code>, <code>ogg</code>, <code>ts</code>, and <code>webm</code>.</p>
     */
    inline void SetContainer(Aws::String&& value) { m_containerHasBeenSet = true; m_container = value; }

    /**
     * <p>The container type for the output file. Valid values include
     * <code>flac</code>, <code>flv</code>, <code>fmp4</code>, <code>gif</code>,
     * <code>mp3</code>, <code>mp4</code>, <code>mpg</code>, <code>mxf</code>,
     * <code>oga</code>, <code>ogg</code>, <code>ts</code>, and <code>webm</code>.</p>
     */
    inline void SetContainer(const char* value) { m_containerHasBeenSet = true; m_container.assign(value); }

    /**
     * <p>The container type for the output file. Valid values include
     * <code>flac</code>, <code>flv</code>, <code>fmp4</code>, <code>gif</code>,
     * <code>mp3</code>, <code>mp4</code>, <code>mpg</code>, <code>mxf</code>,
     * <code>oga</code>, <code>ogg</code>, <code>ts</code>, and <code>webm</code>.</p>
     */
    inline CreatePresetRequest& WithContainer(const Aws::String& value) { SetContainer(value); return *this;}

    /**
     * <p>The container type for the output file. Valid values include
     * <code>flac</code>, <code>flv</code>, <code>fmp4</code>, <code>gif</code>,
     * <code>mp3</code>, <code>mp4</code>, <code>mpg</code>, <code>mxf</code>,
     * <code>oga</code>, <code>ogg</code>, <code>ts</code>, and <code>webm</code>.</p>
     */
    inline CreatePresetRequest& WithContainer(Aws::String&& value) { SetContainer(value); return *this;}

    /**
     * <p>The container type for the output file. Valid values include
     * <code>flac</code>, <code>flv</code>, <code>fmp4</code>, <code>gif</code>,
     * <code>mp3</code>, <code>mp4</code>, <code>mpg</code>, <code>mxf</code>,
     * <code>oga</code>, <code>ogg</code>, <code>ts</code>, and <code>webm</code>.</p>
     */
    inline CreatePresetRequest& WithContainer(const char* value) { SetContainer(value); return *this;}

    /**
     * <p>A section of the request body that specifies the video parameters.</p>
     */
    inline const VideoParameters& GetVideo() const{ return m_video; }

    /**
     * <p>A section of the request body that specifies the video parameters.</p>
     */
    inline void SetVideo(const VideoParameters& value) { m_videoHasBeenSet = true; m_video = value; }

    /**
     * <p>A section of the request body that specifies the video parameters.</p>
     */
    inline void SetVideo(VideoParameters&& value) { m_videoHasBeenSet = true; m_video = value; }

    /**
     * <p>A section of the request body that specifies the video parameters.</p>
     */
    inline CreatePresetRequest& WithVideo(const VideoParameters& value) { SetVideo(value); return *this;}

    /**
     * <p>A section of the request body that specifies the video parameters.</p>
     */
    inline CreatePresetRequest& WithVideo(VideoParameters&& value) { SetVideo(value); return *this;}

    /**
     * <p>A section of the request body that specifies the audio parameters.</p>
     */
    inline const AudioParameters& GetAudio() const{ return m_audio; }

    /**
     * <p>A section of the request body that specifies the audio parameters.</p>
     */
    inline void SetAudio(const AudioParameters& value) { m_audioHasBeenSet = true; m_audio = value; }

    /**
     * <p>A section of the request body that specifies the audio parameters.</p>
     */
    inline void SetAudio(AudioParameters&& value) { m_audioHasBeenSet = true; m_audio = value; }

    /**
     * <p>A section of the request body that specifies the audio parameters.</p>
     */
    inline CreatePresetRequest& WithAudio(const AudioParameters& value) { SetAudio(value); return *this;}

    /**
     * <p>A section of the request body that specifies the audio parameters.</p>
     */
    inline CreatePresetRequest& WithAudio(AudioParameters&& value) { SetAudio(value); return *this;}

    /**
     * <p>A section of the request body that specifies the thumbnail parameters, if
     * any.</p>
     */
    inline const Thumbnails& GetThumbnails() const{ return m_thumbnails; }

    /**
     * <p>A section of the request body that specifies the thumbnail parameters, if
     * any.</p>
     */
    inline void SetThumbnails(const Thumbnails& value) { m_thumbnailsHasBeenSet = true; m_thumbnails = value; }

    /**
     * <p>A section of the request body that specifies the thumbnail parameters, if
     * any.</p>
     */
    inline void SetThumbnails(Thumbnails&& value) { m_thumbnailsHasBeenSet = true; m_thumbnails = value; }

    /**
     * <p>A section of the request body that specifies the thumbnail parameters, if
     * any.</p>
     */
    inline CreatePresetRequest& WithThumbnails(const Thumbnails& value) { SetThumbnails(value); return *this;}

    /**
     * <p>A section of the request body that specifies the thumbnail parameters, if
     * any.</p>
     */
    inline CreatePresetRequest& WithThumbnails(Thumbnails&& value) { SetThumbnails(value); return *this;}

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    Aws::String m_container;
    bool m_containerHasBeenSet;
    VideoParameters m_video;
    bool m_videoHasBeenSet;
    AudioParameters m_audio;
    bool m_audioHasBeenSet;
    Thumbnails m_thumbnails;
    bool m_thumbnailsHasBeenSet;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
