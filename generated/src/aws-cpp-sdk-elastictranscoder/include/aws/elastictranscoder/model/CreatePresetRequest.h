/**
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
    AWS_ELASTICTRANSCODER_API CreatePresetRequest() = default;

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
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreatePresetRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the preset.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreatePresetRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The container type for the output file. Valid values include
     * <code>flac</code>, <code>flv</code>, <code>fmp4</code>, <code>gif</code>,
     * <code>mp3</code>, <code>mp4</code>, <code>mpg</code>, <code>mxf</code>,
     * <code>oga</code>, <code>ogg</code>, <code>ts</code>, and <code>webm</code>.</p>
     */
    inline const Aws::String& GetContainer() const { return m_container; }
    inline bool ContainerHasBeenSet() const { return m_containerHasBeenSet; }
    template<typename ContainerT = Aws::String>
    void SetContainer(ContainerT&& value) { m_containerHasBeenSet = true; m_container = std::forward<ContainerT>(value); }
    template<typename ContainerT = Aws::String>
    CreatePresetRequest& WithContainer(ContainerT&& value) { SetContainer(std::forward<ContainerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A section of the request body that specifies the video parameters.</p>
     */
    inline const VideoParameters& GetVideo() const { return m_video; }
    inline bool VideoHasBeenSet() const { return m_videoHasBeenSet; }
    template<typename VideoT = VideoParameters>
    void SetVideo(VideoT&& value) { m_videoHasBeenSet = true; m_video = std::forward<VideoT>(value); }
    template<typename VideoT = VideoParameters>
    CreatePresetRequest& WithVideo(VideoT&& value) { SetVideo(std::forward<VideoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A section of the request body that specifies the audio parameters.</p>
     */
    inline const AudioParameters& GetAudio() const { return m_audio; }
    inline bool AudioHasBeenSet() const { return m_audioHasBeenSet; }
    template<typename AudioT = AudioParameters>
    void SetAudio(AudioT&& value) { m_audioHasBeenSet = true; m_audio = std::forward<AudioT>(value); }
    template<typename AudioT = AudioParameters>
    CreatePresetRequest& WithAudio(AudioT&& value) { SetAudio(std::forward<AudioT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A section of the request body that specifies the thumbnail parameters, if
     * any.</p>
     */
    inline const Thumbnails& GetThumbnails() const { return m_thumbnails; }
    inline bool ThumbnailsHasBeenSet() const { return m_thumbnailsHasBeenSet; }
    template<typename ThumbnailsT = Thumbnails>
    void SetThumbnails(ThumbnailsT&& value) { m_thumbnailsHasBeenSet = true; m_thumbnails = std::forward<ThumbnailsT>(value); }
    template<typename ThumbnailsT = Thumbnails>
    CreatePresetRequest& WithThumbnails(ThumbnailsT&& value) { SetThumbnails(std::forward<ThumbnailsT>(value)); return *this;}
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
