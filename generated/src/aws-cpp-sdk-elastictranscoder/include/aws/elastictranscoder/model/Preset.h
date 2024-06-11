/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elastictranscoder/ElasticTranscoder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elastictranscoder/model/AudioParameters.h>
#include <aws/elastictranscoder/model/VideoParameters.h>
#include <aws/elastictranscoder/model/Thumbnails.h>
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
namespace ElasticTranscoder
{
namespace Model
{

  /**
   * <p>Presets are templates that contain most of the settings for transcoding media
   * files from one format to another. Elastic Transcoder includes some default
   * presets for common formats, for example, several iPod and iPhone versions. You
   * can also create your own presets for formats that aren't included among the
   * default presets. You specify which preset you want to use when you create a
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/Preset">AWS
   * API Reference</a></p>
   */
  class Preset
  {
  public:
    AWS_ELASTICTRANSCODER_API Preset();
    AWS_ELASTICTRANSCODER_API Preset(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICTRANSCODER_API Preset& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICTRANSCODER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Identifier for the new preset. You use this value to get settings for the
     * preset or to delete it.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline Preset& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline Preset& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline Preset& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the preset.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline Preset& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline Preset& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline Preset& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the preset.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Preset& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Preset& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Preset& WithName(const char* value) { SetName(value); return *this;}
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
    inline Preset& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline Preset& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline Preset& WithDescription(const char* value) { SetDescription(value); return *this;}
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
    inline Preset& WithContainer(const Aws::String& value) { SetContainer(value); return *this;}
    inline Preset& WithContainer(Aws::String&& value) { SetContainer(std::move(value)); return *this;}
    inline Preset& WithContainer(const char* value) { SetContainer(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A section of the response body that provides information about the audio
     * preset values.</p>
     */
    inline const AudioParameters& GetAudio() const{ return m_audio; }
    inline bool AudioHasBeenSet() const { return m_audioHasBeenSet; }
    inline void SetAudio(const AudioParameters& value) { m_audioHasBeenSet = true; m_audio = value; }
    inline void SetAudio(AudioParameters&& value) { m_audioHasBeenSet = true; m_audio = std::move(value); }
    inline Preset& WithAudio(const AudioParameters& value) { SetAudio(value); return *this;}
    inline Preset& WithAudio(AudioParameters&& value) { SetAudio(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A section of the response body that provides information about the video
     * preset values.</p>
     */
    inline const VideoParameters& GetVideo() const{ return m_video; }
    inline bool VideoHasBeenSet() const { return m_videoHasBeenSet; }
    inline void SetVideo(const VideoParameters& value) { m_videoHasBeenSet = true; m_video = value; }
    inline void SetVideo(VideoParameters&& value) { m_videoHasBeenSet = true; m_video = std::move(value); }
    inline Preset& WithVideo(const VideoParameters& value) { SetVideo(value); return *this;}
    inline Preset& WithVideo(VideoParameters&& value) { SetVideo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A section of the response body that provides information about the thumbnail
     * preset values, if any.</p>
     */
    inline const Thumbnails& GetThumbnails() const{ return m_thumbnails; }
    inline bool ThumbnailsHasBeenSet() const { return m_thumbnailsHasBeenSet; }
    inline void SetThumbnails(const Thumbnails& value) { m_thumbnailsHasBeenSet = true; m_thumbnails = value; }
    inline void SetThumbnails(Thumbnails&& value) { m_thumbnailsHasBeenSet = true; m_thumbnails = std::move(value); }
    inline Preset& WithThumbnails(const Thumbnails& value) { SetThumbnails(value); return *this;}
    inline Preset& WithThumbnails(Thumbnails&& value) { SetThumbnails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the preset is a default preset provided by Elastic Transcoder
     * (<code>System</code>) or a preset that you have defined
     * (<code>Custom</code>).</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline Preset& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline Preset& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline Preset& WithType(const char* value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_container;
    bool m_containerHasBeenSet = false;

    AudioParameters m_audio;
    bool m_audioHasBeenSet = false;

    VideoParameters m_video;
    bool m_videoHasBeenSet = false;

    Thumbnails m_thumbnails;
    bool m_thumbnailsHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
