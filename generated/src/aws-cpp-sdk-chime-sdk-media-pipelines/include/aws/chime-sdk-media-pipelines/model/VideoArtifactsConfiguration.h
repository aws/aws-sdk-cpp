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
    AWS_CHIMESDKMEDIAPIPELINES_API VideoArtifactsConfiguration() = default;
    AWS_CHIMESDKMEDIAPIPELINES_API VideoArtifactsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API VideoArtifactsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether the video artifact is enabled or disabled.</p>
     */
    inline ArtifactsState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(ArtifactsState value) { m_stateHasBeenSet = true; m_state = value; }
    inline VideoArtifactsConfiguration& WithState(ArtifactsState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The MUX type of the video artifact configuration object.</p>
     */
    inline VideoMuxType GetMuxType() const { return m_muxType; }
    inline bool MuxTypeHasBeenSet() const { return m_muxTypeHasBeenSet; }
    inline void SetMuxType(VideoMuxType value) { m_muxTypeHasBeenSet = true; m_muxType = value; }
    inline VideoArtifactsConfiguration& WithMuxType(VideoMuxType value) { SetMuxType(value); return *this;}
    ///@}
  private:

    ArtifactsState m_state{ArtifactsState::NOT_SET};
    bool m_stateHasBeenSet = false;

    VideoMuxType m_muxType{VideoMuxType::NOT_SET};
    bool m_muxTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
