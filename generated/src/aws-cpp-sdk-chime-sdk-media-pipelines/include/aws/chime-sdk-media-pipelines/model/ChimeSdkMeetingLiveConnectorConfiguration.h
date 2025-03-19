/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-media-pipelines/model/LiveConnectorMuxType.h>
#include <aws/chime-sdk-media-pipelines/model/CompositedVideoArtifactsConfiguration.h>
#include <aws/chime-sdk-media-pipelines/model/SourceConfiguration.h>
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
   * <p>The media pipeline's configuration object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/ChimeSdkMeetingLiveConnectorConfiguration">AWS
   * API Reference</a></p>
   */
  class ChimeSdkMeetingLiveConnectorConfiguration
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API ChimeSdkMeetingLiveConnectorConfiguration() = default;
    AWS_CHIMESDKMEDIAPIPELINES_API ChimeSdkMeetingLiveConnectorConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API ChimeSdkMeetingLiveConnectorConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration object's Chime SDK meeting ARN.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ChimeSdkMeetingLiveConnectorConfiguration& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration object's multiplex type.</p>
     */
    inline LiveConnectorMuxType GetMuxType() const { return m_muxType; }
    inline bool MuxTypeHasBeenSet() const { return m_muxTypeHasBeenSet; }
    inline void SetMuxType(LiveConnectorMuxType value) { m_muxTypeHasBeenSet = true; m_muxType = value; }
    inline ChimeSdkMeetingLiveConnectorConfiguration& WithMuxType(LiveConnectorMuxType value) { SetMuxType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The media pipeline's composited video.</p>
     */
    inline const CompositedVideoArtifactsConfiguration& GetCompositedVideo() const { return m_compositedVideo; }
    inline bool CompositedVideoHasBeenSet() const { return m_compositedVideoHasBeenSet; }
    template<typename CompositedVideoT = CompositedVideoArtifactsConfiguration>
    void SetCompositedVideo(CompositedVideoT&& value) { m_compositedVideoHasBeenSet = true; m_compositedVideo = std::forward<CompositedVideoT>(value); }
    template<typename CompositedVideoT = CompositedVideoArtifactsConfiguration>
    ChimeSdkMeetingLiveConnectorConfiguration& WithCompositedVideo(CompositedVideoT&& value) { SetCompositedVideo(std::forward<CompositedVideoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source configuration settings of the media pipeline's configuration
     * object.</p>
     */
    inline const SourceConfiguration& GetSourceConfiguration() const { return m_sourceConfiguration; }
    inline bool SourceConfigurationHasBeenSet() const { return m_sourceConfigurationHasBeenSet; }
    template<typename SourceConfigurationT = SourceConfiguration>
    void SetSourceConfiguration(SourceConfigurationT&& value) { m_sourceConfigurationHasBeenSet = true; m_sourceConfiguration = std::forward<SourceConfigurationT>(value); }
    template<typename SourceConfigurationT = SourceConfiguration>
    ChimeSdkMeetingLiveConnectorConfiguration& WithSourceConfiguration(SourceConfigurationT&& value) { SetSourceConfiguration(std::forward<SourceConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    LiveConnectorMuxType m_muxType{LiveConnectorMuxType::NOT_SET};
    bool m_muxTypeHasBeenSet = false;

    CompositedVideoArtifactsConfiguration m_compositedVideo;
    bool m_compositedVideoHasBeenSet = false;

    SourceConfiguration m_sourceConfiguration;
    bool m_sourceConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
