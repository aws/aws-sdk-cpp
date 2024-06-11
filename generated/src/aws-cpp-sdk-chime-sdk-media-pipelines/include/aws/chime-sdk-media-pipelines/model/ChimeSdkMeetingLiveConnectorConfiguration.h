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
    AWS_CHIMESDKMEDIAPIPELINES_API ChimeSdkMeetingLiveConnectorConfiguration();
    AWS_CHIMESDKMEDIAPIPELINES_API ChimeSdkMeetingLiveConnectorConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API ChimeSdkMeetingLiveConnectorConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration object's Chime SDK meeting ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline ChimeSdkMeetingLiveConnectorConfiguration& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ChimeSdkMeetingLiveConnectorConfiguration& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ChimeSdkMeetingLiveConnectorConfiguration& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration object's multiplex type.</p>
     */
    inline const LiveConnectorMuxType& GetMuxType() const{ return m_muxType; }
    inline bool MuxTypeHasBeenSet() const { return m_muxTypeHasBeenSet; }
    inline void SetMuxType(const LiveConnectorMuxType& value) { m_muxTypeHasBeenSet = true; m_muxType = value; }
    inline void SetMuxType(LiveConnectorMuxType&& value) { m_muxTypeHasBeenSet = true; m_muxType = std::move(value); }
    inline ChimeSdkMeetingLiveConnectorConfiguration& WithMuxType(const LiveConnectorMuxType& value) { SetMuxType(value); return *this;}
    inline ChimeSdkMeetingLiveConnectorConfiguration& WithMuxType(LiveConnectorMuxType&& value) { SetMuxType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The media pipeline's composited video.</p>
     */
    inline const CompositedVideoArtifactsConfiguration& GetCompositedVideo() const{ return m_compositedVideo; }
    inline bool CompositedVideoHasBeenSet() const { return m_compositedVideoHasBeenSet; }
    inline void SetCompositedVideo(const CompositedVideoArtifactsConfiguration& value) { m_compositedVideoHasBeenSet = true; m_compositedVideo = value; }
    inline void SetCompositedVideo(CompositedVideoArtifactsConfiguration&& value) { m_compositedVideoHasBeenSet = true; m_compositedVideo = std::move(value); }
    inline ChimeSdkMeetingLiveConnectorConfiguration& WithCompositedVideo(const CompositedVideoArtifactsConfiguration& value) { SetCompositedVideo(value); return *this;}
    inline ChimeSdkMeetingLiveConnectorConfiguration& WithCompositedVideo(CompositedVideoArtifactsConfiguration&& value) { SetCompositedVideo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source configuration settings of the media pipeline's configuration
     * object.</p>
     */
    inline const SourceConfiguration& GetSourceConfiguration() const{ return m_sourceConfiguration; }
    inline bool SourceConfigurationHasBeenSet() const { return m_sourceConfigurationHasBeenSet; }
    inline void SetSourceConfiguration(const SourceConfiguration& value) { m_sourceConfigurationHasBeenSet = true; m_sourceConfiguration = value; }
    inline void SetSourceConfiguration(SourceConfiguration&& value) { m_sourceConfigurationHasBeenSet = true; m_sourceConfiguration = std::move(value); }
    inline ChimeSdkMeetingLiveConnectorConfiguration& WithSourceConfiguration(const SourceConfiguration& value) { SetSourceConfiguration(value); return *this;}
    inline ChimeSdkMeetingLiveConnectorConfiguration& WithSourceConfiguration(SourceConfiguration&& value) { SetSourceConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    LiveConnectorMuxType m_muxType;
    bool m_muxTypeHasBeenSet = false;

    CompositedVideoArtifactsConfiguration m_compositedVideo;
    bool m_compositedVideoHasBeenSet = false;

    SourceConfiguration m_sourceConfiguration;
    bool m_sourceConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
