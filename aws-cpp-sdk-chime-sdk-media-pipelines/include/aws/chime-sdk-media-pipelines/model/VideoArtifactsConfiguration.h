/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/chime-sdk-media-pipelines/model/ArtifactsState.h>
#include <aws/chime-sdk-media-pipelines/model/VideoMuxType.h>
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
namespace ChimeSDKMediaPipelines
{
namespace Model
{

  /**
   * <p>The video artifact configuration object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/VideoArtifactsConfiguration">AWS
   * API Reference</a></p>
   */
  class VideoArtifactsConfiguration
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API VideoArtifactsConfiguration();
    AWS_CHIMESDKMEDIAPIPELINES_API VideoArtifactsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API VideoArtifactsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates whether the video artifact is enabled or disabled.</p>
     */
    inline const ArtifactsState& GetState() const{ return m_state; }

    /**
     * <p>Indicates whether the video artifact is enabled or disabled.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>Indicates whether the video artifact is enabled or disabled.</p>
     */
    inline void SetState(const ArtifactsState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>Indicates whether the video artifact is enabled or disabled.</p>
     */
    inline void SetState(ArtifactsState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>Indicates whether the video artifact is enabled or disabled.</p>
     */
    inline VideoArtifactsConfiguration& WithState(const ArtifactsState& value) { SetState(value); return *this;}

    /**
     * <p>Indicates whether the video artifact is enabled or disabled.</p>
     */
    inline VideoArtifactsConfiguration& WithState(ArtifactsState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The MUX type of the video artifact configuration object.</p>
     */
    inline const VideoMuxType& GetMuxType() const{ return m_muxType; }

    /**
     * <p>The MUX type of the video artifact configuration object.</p>
     */
    inline bool MuxTypeHasBeenSet() const { return m_muxTypeHasBeenSet; }

    /**
     * <p>The MUX type of the video artifact configuration object.</p>
     */
    inline void SetMuxType(const VideoMuxType& value) { m_muxTypeHasBeenSet = true; m_muxType = value; }

    /**
     * <p>The MUX type of the video artifact configuration object.</p>
     */
    inline void SetMuxType(VideoMuxType&& value) { m_muxTypeHasBeenSet = true; m_muxType = std::move(value); }

    /**
     * <p>The MUX type of the video artifact configuration object.</p>
     */
    inline VideoArtifactsConfiguration& WithMuxType(const VideoMuxType& value) { SetMuxType(value); return *this;}

    /**
     * <p>The MUX type of the video artifact configuration object.</p>
     */
    inline VideoArtifactsConfiguration& WithMuxType(VideoMuxType&& value) { SetMuxType(std::move(value)); return *this;}

  private:

    ArtifactsState m_state;
    bool m_stateHasBeenSet = false;

    VideoMuxType m_muxType;
    bool m_muxTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
