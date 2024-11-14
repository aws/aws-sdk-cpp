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
    AWS_IVS_API StreamSession();
    AWS_IVS_API StreamSession(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVS_API StreamSession& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The properties of the channel at the time of going live.</p>
     */
    inline const Channel& GetChannel() const{ return m_channel; }
    inline bool ChannelHasBeenSet() const { return m_channelHasBeenSet; }
    inline void SetChannel(const Channel& value) { m_channelHasBeenSet = true; m_channel = value; }
    inline void SetChannel(Channel&& value) { m_channelHasBeenSet = true; m_channel = std::move(value); }
    inline StreamSession& WithChannel(const Channel& value) { SetChannel(value); return *this;}
    inline StreamSession& WithChannel(Channel&& value) { SetChannel(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time when the channel went offline. This is an ISO 8601 timestamp; <i>note
     * that this is returned as a string</i>. For live streams, this is
     * <code>NULL</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline StreamSession& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline StreamSession& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
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
    inline const IngestConfiguration& GetIngestConfiguration() const{ return m_ingestConfiguration; }
    inline bool IngestConfigurationHasBeenSet() const { return m_ingestConfigurationHasBeenSet; }
    inline void SetIngestConfiguration(const IngestConfiguration& value) { m_ingestConfigurationHasBeenSet = true; m_ingestConfiguration = value; }
    inline void SetIngestConfiguration(IngestConfiguration&& value) { m_ingestConfigurationHasBeenSet = true; m_ingestConfiguration = std::move(value); }
    inline StreamSession& WithIngestConfiguration(const IngestConfiguration& value) { SetIngestConfiguration(value); return *this;}
    inline StreamSession& WithIngestConfiguration(IngestConfiguration&& value) { SetIngestConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The properties of the incoming RTMP stream. If multitrack is enabled,
     * <code>ingestConfigurations</code> contains data for all tracks; otherwise, it
     * contains data only for track0 (the sole track).</p>
     */
    inline const IngestConfigurations& GetIngestConfigurations() const{ return m_ingestConfigurations; }
    inline bool IngestConfigurationsHasBeenSet() const { return m_ingestConfigurationsHasBeenSet; }
    inline void SetIngestConfigurations(const IngestConfigurations& value) { m_ingestConfigurationsHasBeenSet = true; m_ingestConfigurations = value; }
    inline void SetIngestConfigurations(IngestConfigurations&& value) { m_ingestConfigurationsHasBeenSet = true; m_ingestConfigurations = std::move(value); }
    inline StreamSession& WithIngestConfigurations(const IngestConfigurations& value) { SetIngestConfigurations(value); return *this;}
    inline StreamSession& WithIngestConfigurations(IngestConfigurations&& value) { SetIngestConfigurations(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The properties of recording the live stream.</p>
     */
    inline const RecordingConfiguration& GetRecordingConfiguration() const{ return m_recordingConfiguration; }
    inline bool RecordingConfigurationHasBeenSet() const { return m_recordingConfigurationHasBeenSet; }
    inline void SetRecordingConfiguration(const RecordingConfiguration& value) { m_recordingConfigurationHasBeenSet = true; m_recordingConfiguration = value; }
    inline void SetRecordingConfiguration(RecordingConfiguration&& value) { m_recordingConfigurationHasBeenSet = true; m_recordingConfiguration = std::move(value); }
    inline StreamSession& WithRecordingConfiguration(const RecordingConfiguration& value) { SetRecordingConfiguration(value); return *this;}
    inline StreamSession& WithRecordingConfiguration(RecordingConfiguration&& value) { SetRecordingConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time when the channel went live. This is an ISO 8601 timestamp; <i>note that
     * this is returned as a string</i>.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline StreamSession& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline StreamSession& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique identifier for a live or previously live stream in the specified
     * channel.</p>
     */
    inline const Aws::String& GetStreamId() const{ return m_streamId; }
    inline bool StreamIdHasBeenSet() const { return m_streamIdHasBeenSet; }
    inline void SetStreamId(const Aws::String& value) { m_streamIdHasBeenSet = true; m_streamId = value; }
    inline void SetStreamId(Aws::String&& value) { m_streamIdHasBeenSet = true; m_streamId = std::move(value); }
    inline void SetStreamId(const char* value) { m_streamIdHasBeenSet = true; m_streamId.assign(value); }
    inline StreamSession& WithStreamId(const Aws::String& value) { SetStreamId(value); return *this;}
    inline StreamSession& WithStreamId(Aws::String&& value) { SetStreamId(std::move(value)); return *this;}
    inline StreamSession& WithStreamId(const char* value) { SetStreamId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of Amazon IVS events that the stream encountered. The list is sorted by
     * most recent events and contains up to 500 events. For Amazon IVS events, see <a
     * href="https://docs.aws.amazon.com/ivs/latest/userguide/eventbridge.html">Using
     * Amazon EventBridge with Amazon IVS</a>.</p>
     */
    inline const Aws::Vector<StreamEvent>& GetTruncatedEvents() const{ return m_truncatedEvents; }
    inline bool TruncatedEventsHasBeenSet() const { return m_truncatedEventsHasBeenSet; }
    inline void SetTruncatedEvents(const Aws::Vector<StreamEvent>& value) { m_truncatedEventsHasBeenSet = true; m_truncatedEvents = value; }
    inline void SetTruncatedEvents(Aws::Vector<StreamEvent>&& value) { m_truncatedEventsHasBeenSet = true; m_truncatedEvents = std::move(value); }
    inline StreamSession& WithTruncatedEvents(const Aws::Vector<StreamEvent>& value) { SetTruncatedEvents(value); return *this;}
    inline StreamSession& WithTruncatedEvents(Aws::Vector<StreamEvent>&& value) { SetTruncatedEvents(std::move(value)); return *this;}
    inline StreamSession& AddTruncatedEvents(const StreamEvent& value) { m_truncatedEventsHasBeenSet = true; m_truncatedEvents.push_back(value); return *this; }
    inline StreamSession& AddTruncatedEvents(StreamEvent&& value) { m_truncatedEventsHasBeenSet = true; m_truncatedEvents.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Channel m_channel;
    bool m_channelHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    IngestConfiguration m_ingestConfiguration;
    bool m_ingestConfigurationHasBeenSet = false;

    IngestConfigurations m_ingestConfigurations;
    bool m_ingestConfigurationsHasBeenSet = false;

    RecordingConfiguration m_recordingConfiguration;
    bool m_recordingConfigurationHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::String m_streamId;
    bool m_streamIdHasBeenSet = false;

    Aws::Vector<StreamEvent> m_truncatedEvents;
    bool m_truncatedEventsHasBeenSet = false;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
