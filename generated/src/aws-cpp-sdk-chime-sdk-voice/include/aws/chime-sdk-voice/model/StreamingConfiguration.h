﻿/**
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
    AWS_CHIMESDKVOICE_API StreamingConfiguration();
    AWS_CHIMESDKVOICE_API StreamingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API StreamingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The amount of time, in hours, to the Kinesis data.</p>
     */
    inline int GetDataRetentionInHours() const{ return m_dataRetentionInHours; }
    inline bool DataRetentionInHoursHasBeenSet() const { return m_dataRetentionInHoursHasBeenSet; }
    inline void SetDataRetentionInHours(int value) { m_dataRetentionInHoursHasBeenSet = true; m_dataRetentionInHours = value; }
    inline StreamingConfiguration& WithDataRetentionInHours(int value) { SetDataRetentionInHours(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When true, streaming to Kinesis is off.</p>
     */
    inline bool GetDisabled() const{ return m_disabled; }
    inline bool DisabledHasBeenSet() const { return m_disabledHasBeenSet; }
    inline void SetDisabled(bool value) { m_disabledHasBeenSet = true; m_disabled = value; }
    inline StreamingConfiguration& WithDisabled(bool value) { SetDisabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The streaming notification targets.</p>
     */
    inline const Aws::Vector<StreamingNotificationTarget>& GetStreamingNotificationTargets() const{ return m_streamingNotificationTargets; }
    inline bool StreamingNotificationTargetsHasBeenSet() const { return m_streamingNotificationTargetsHasBeenSet; }
    inline void SetStreamingNotificationTargets(const Aws::Vector<StreamingNotificationTarget>& value) { m_streamingNotificationTargetsHasBeenSet = true; m_streamingNotificationTargets = value; }
    inline void SetStreamingNotificationTargets(Aws::Vector<StreamingNotificationTarget>&& value) { m_streamingNotificationTargetsHasBeenSet = true; m_streamingNotificationTargets = std::move(value); }
    inline StreamingConfiguration& WithStreamingNotificationTargets(const Aws::Vector<StreamingNotificationTarget>& value) { SetStreamingNotificationTargets(value); return *this;}
    inline StreamingConfiguration& WithStreamingNotificationTargets(Aws::Vector<StreamingNotificationTarget>&& value) { SetStreamingNotificationTargets(std::move(value)); return *this;}
    inline StreamingConfiguration& AddStreamingNotificationTargets(const StreamingNotificationTarget& value) { m_streamingNotificationTargetsHasBeenSet = true; m_streamingNotificationTargets.push_back(value); return *this; }
    inline StreamingConfiguration& AddStreamingNotificationTargets(StreamingNotificationTarget&& value) { m_streamingNotificationTargetsHasBeenSet = true; m_streamingNotificationTargets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The call analytics configuration.</p>
     */
    inline const MediaInsightsConfiguration& GetMediaInsightsConfiguration() const{ return m_mediaInsightsConfiguration; }
    inline bool MediaInsightsConfigurationHasBeenSet() const { return m_mediaInsightsConfigurationHasBeenSet; }
    inline void SetMediaInsightsConfiguration(const MediaInsightsConfiguration& value) { m_mediaInsightsConfigurationHasBeenSet = true; m_mediaInsightsConfiguration = value; }
    inline void SetMediaInsightsConfiguration(MediaInsightsConfiguration&& value) { m_mediaInsightsConfigurationHasBeenSet = true; m_mediaInsightsConfiguration = std::move(value); }
    inline StreamingConfiguration& WithMediaInsightsConfiguration(const MediaInsightsConfiguration& value) { SetMediaInsightsConfiguration(value); return *this;}
    inline StreamingConfiguration& WithMediaInsightsConfiguration(MediaInsightsConfiguration&& value) { SetMediaInsightsConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    int m_dataRetentionInHours;
    bool m_dataRetentionInHoursHasBeenSet = false;

    bool m_disabled;
    bool m_disabledHasBeenSet = false;

    Aws::Vector<StreamingNotificationTarget> m_streamingNotificationTargets;
    bool m_streamingNotificationTargetsHasBeenSet = false;

    MediaInsightsConfiguration m_mediaInsightsConfiguration;
    bool m_mediaInsightsConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
