/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime-sdk-voice/model/MediaInsightsConfiguration.h>
#include <aws/chime-sdk-voice/model/StreamingNotificationTarget.h>
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
namespace ChimeSDKVoice
{
namespace Model
{

  /**
   * <p>The streaming configuration associated with an Amazon Chime SDK Voice
   * Connector. Specifies whether media streaming is enabled for sending to Amazon
   * Kinesis, and shows the retention period for the Amazon Kinesis data, in
   * hours.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/StreamingConfiguration">AWS
   * API Reference</a></p>
   */
  class StreamingConfiguration
  {
  public:
    AWS_CHIMESDKVOICE_API StreamingConfiguration() = default;
    AWS_CHIMESDKVOICE_API StreamingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API StreamingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The amount of time, in hours, to the Kinesis data.</p>
     */
    inline int GetDataRetentionInHours() const { return m_dataRetentionInHours; }
    inline bool DataRetentionInHoursHasBeenSet() const { return m_dataRetentionInHoursHasBeenSet; }
    inline void SetDataRetentionInHours(int value) { m_dataRetentionInHoursHasBeenSet = true; m_dataRetentionInHours = value; }
    inline StreamingConfiguration& WithDataRetentionInHours(int value) { SetDataRetentionInHours(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When true, streaming to Kinesis is off.</p>
     */
    inline bool GetDisabled() const { return m_disabled; }
    inline bool DisabledHasBeenSet() const { return m_disabledHasBeenSet; }
    inline void SetDisabled(bool value) { m_disabledHasBeenSet = true; m_disabled = value; }
    inline StreamingConfiguration& WithDisabled(bool value) { SetDisabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The streaming notification targets.</p>
     */
    inline const Aws::Vector<StreamingNotificationTarget>& GetStreamingNotificationTargets() const { return m_streamingNotificationTargets; }
    inline bool StreamingNotificationTargetsHasBeenSet() const { return m_streamingNotificationTargetsHasBeenSet; }
    template<typename StreamingNotificationTargetsT = Aws::Vector<StreamingNotificationTarget>>
    void SetStreamingNotificationTargets(StreamingNotificationTargetsT&& value) { m_streamingNotificationTargetsHasBeenSet = true; m_streamingNotificationTargets = std::forward<StreamingNotificationTargetsT>(value); }
    template<typename StreamingNotificationTargetsT = Aws::Vector<StreamingNotificationTarget>>
    StreamingConfiguration& WithStreamingNotificationTargets(StreamingNotificationTargetsT&& value) { SetStreamingNotificationTargets(std::forward<StreamingNotificationTargetsT>(value)); return *this;}
    template<typename StreamingNotificationTargetsT = StreamingNotificationTarget>
    StreamingConfiguration& AddStreamingNotificationTargets(StreamingNotificationTargetsT&& value) { m_streamingNotificationTargetsHasBeenSet = true; m_streamingNotificationTargets.emplace_back(std::forward<StreamingNotificationTargetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The call analytics configuration.</p>
     */
    inline const MediaInsightsConfiguration& GetMediaInsightsConfiguration() const { return m_mediaInsightsConfiguration; }
    inline bool MediaInsightsConfigurationHasBeenSet() const { return m_mediaInsightsConfigurationHasBeenSet; }
    template<typename MediaInsightsConfigurationT = MediaInsightsConfiguration>
    void SetMediaInsightsConfiguration(MediaInsightsConfigurationT&& value) { m_mediaInsightsConfigurationHasBeenSet = true; m_mediaInsightsConfiguration = std::forward<MediaInsightsConfigurationT>(value); }
    template<typename MediaInsightsConfigurationT = MediaInsightsConfiguration>
    StreamingConfiguration& WithMediaInsightsConfiguration(MediaInsightsConfigurationT&& value) { SetMediaInsightsConfiguration(std::forward<MediaInsightsConfigurationT>(value)); return *this;}
    ///@}
  private:

    int m_dataRetentionInHours{0};
    bool m_dataRetentionInHoursHasBeenSet = false;

    bool m_disabled{false};
    bool m_disabledHasBeenSet = false;

    Aws::Vector<StreamingNotificationTarget> m_streamingNotificationTargets;
    bool m_streamingNotificationTargetsHasBeenSet = false;

    MediaInsightsConfiguration m_mediaInsightsConfiguration;
    bool m_mediaInsightsConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
