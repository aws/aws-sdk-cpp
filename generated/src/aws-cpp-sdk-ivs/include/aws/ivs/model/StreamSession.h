/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/ivs/model/Channel.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ivs/model/IngestConfiguration.h>
#include <aws/ivs/model/IngestConfigurations.h>
#include <aws/ivs/model/RecordingConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ivs/model/StreamEvent.h>
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
namespace IVS
{
namespace Model
{

  /**
   * <p>Object that captures the Amazon IVS configuration that the customer
   * provisioned, the ingest configurations that the broadcaster used, and the most
   * recent Amazon IVS stream events it encountered.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/StreamSession">AWS
   * API Reference</a></p>
   */
  class StreamSession
  {
  public:
    AWS_IVS_API StreamSession() = default;
    AWS_IVS_API StreamSession(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVS_API StreamSession& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The properties of the channel at the time of going live.</p>
     */
    inline const Channel& GetChannel() const { return m_channel; }
    inline bool ChannelHasBeenSet() const { return m_channelHasBeenSet; }
    template<typename ChannelT = Channel>
    void SetChannel(ChannelT&& value) { m_channelHasBeenSet = true; m_channel = std::forward<ChannelT>(value); }
    template<typename ChannelT = Channel>
    StreamSession& WithChannel(ChannelT&& value) { SetChannel(std::forward<ChannelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time when the channel went offline. This is an ISO 8601 timestamp; <i>note
     * that this is returned as a string</i>. For live streams, this is
     * <code>NULL</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    StreamSession& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The properties of the incoming RTMP stream.</p> <p> <b>Note:</b>
     * <code>ingestConfiguration</code> is deprecated in favor of
     * <code>ingestConfigurations</code> but retained to ensure backward compatibility.
     * If multitrack is not enabled, <code>ingestConfiguration</code> and
     * <code>ingestConfigurations</code> contain the same data, namely information
     * about track0 (the sole track). If multitrack is enabled,
     * <code>ingestConfiguration</code> contains data for only the first track (track0)
     * and <code>ingestConfigurations</code> contains data for all tracks.</p>
     */
    inline const IngestConfiguration& GetIngestConfiguration() const { return m_ingestConfiguration; }
    inline bool IngestConfigurationHasBeenSet() const { return m_ingestConfigurationHasBeenSet; }
    template<typename IngestConfigurationT = IngestConfiguration>
    void SetIngestConfiguration(IngestConfigurationT&& value) { m_ingestConfigurationHasBeenSet = true; m_ingestConfiguration = std::forward<IngestConfigurationT>(value); }
    template<typename IngestConfigurationT = IngestConfiguration>
    StreamSession& WithIngestConfiguration(IngestConfigurationT&& value) { SetIngestConfiguration(std::forward<IngestConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The properties of the incoming RTMP stream. If multitrack is enabled,
     * <code>ingestConfigurations</code> contains data for all tracks; otherwise, it
     * contains data only for track0 (the sole track).</p>
     */
    inline const IngestConfigurations& GetIngestConfigurations() const { return m_ingestConfigurations; }
    inline bool IngestConfigurationsHasBeenSet() const { return m_ingestConfigurationsHasBeenSet; }
    template<typename IngestConfigurationsT = IngestConfigurations>
    void SetIngestConfigurations(IngestConfigurationsT&& value) { m_ingestConfigurationsHasBeenSet = true; m_ingestConfigurations = std::forward<IngestConfigurationsT>(value); }
    template<typename IngestConfigurationsT = IngestConfigurations>
    StreamSession& WithIngestConfigurations(IngestConfigurationsT&& value) { SetIngestConfigurations(std::forward<IngestConfigurationsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The properties of recording the live stream.</p>
     */
    inline const RecordingConfiguration& GetRecordingConfiguration() const { return m_recordingConfiguration; }
    inline bool RecordingConfigurationHasBeenSet() const { return m_recordingConfigurationHasBeenSet; }
    template<typename RecordingConfigurationT = RecordingConfiguration>
    void SetRecordingConfiguration(RecordingConfigurationT&& value) { m_recordingConfigurationHasBeenSet = true; m_recordingConfiguration = std::forward<RecordingConfigurationT>(value); }
    template<typename RecordingConfigurationT = RecordingConfiguration>
    StreamSession& WithRecordingConfiguration(RecordingConfigurationT&& value) { SetRecordingConfiguration(std::forward<RecordingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time when the channel went live. This is an ISO 8601 timestamp; <i>note that
     * this is returned as a string</i>.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    StreamSession& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique identifier for a live or previously live stream in the specified
     * channel.</p>
     */
    inline const Aws::String& GetStreamId() const { return m_streamId; }
    inline bool StreamIdHasBeenSet() const { return m_streamIdHasBeenSet; }
    template<typename StreamIdT = Aws::String>
    void SetStreamId(StreamIdT&& value) { m_streamIdHasBeenSet = true; m_streamId = std::forward<StreamIdT>(value); }
    template<typename StreamIdT = Aws::String>
    StreamSession& WithStreamId(StreamIdT&& value) { SetStreamId(std::forward<StreamIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of Amazon IVS events that the stream encountered. The list is sorted by
     * most recent events and contains up to 500 events. For Amazon IVS events, see <a
     * href="https://docs.aws.amazon.com/ivs/latest/userguide/eventbridge.html">Using
     * Amazon EventBridge with Amazon IVS</a>.</p>
     */
    inline const Aws::Vector<StreamEvent>& GetTruncatedEvents() const { return m_truncatedEvents; }
    inline bool TruncatedEventsHasBeenSet() const { return m_truncatedEventsHasBeenSet; }
    template<typename TruncatedEventsT = Aws::Vector<StreamEvent>>
    void SetTruncatedEvents(TruncatedEventsT&& value) { m_truncatedEventsHasBeenSet = true; m_truncatedEvents = std::forward<TruncatedEventsT>(value); }
    template<typename TruncatedEventsT = Aws::Vector<StreamEvent>>
    StreamSession& WithTruncatedEvents(TruncatedEventsT&& value) { SetTruncatedEvents(std::forward<TruncatedEventsT>(value)); return *this;}
    template<typename TruncatedEventsT = StreamEvent>
    StreamSession& AddTruncatedEvents(TruncatedEventsT&& value) { m_truncatedEventsHasBeenSet = true; m_truncatedEvents.emplace_back(std::forward<TruncatedEventsT>(value)); return *this; }
    ///@}
  private:

    Channel m_channel;
    bool m_channelHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    IngestConfiguration m_ingestConfiguration;
    bool m_ingestConfigurationHasBeenSet = false;

    IngestConfigurations m_ingestConfigurations;
    bool m_ingestConfigurationsHasBeenSet = false;

    RecordingConfiguration m_recordingConfiguration;
    bool m_recordingConfigurationHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::String m_streamId;
    bool m_streamIdHasBeenSet = false;

    Aws::Vector<StreamEvent> m_truncatedEvents;
    bool m_truncatedEventsHasBeenSet = false;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
