/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/ivs/model/Channel.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ivs/model/IngestConfiguration.h>
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


    /**
     * <p>The properties of the channel at the time of going live.</p>
     */
    inline const Channel& GetChannel() const{ return m_channel; }

    /**
     * <p>The properties of the channel at the time of going live.</p>
     */
    inline bool ChannelHasBeenSet() const { return m_channelHasBeenSet; }

    /**
     * <p>The properties of the channel at the time of going live.</p>
     */
    inline void SetChannel(const Channel& value) { m_channelHasBeenSet = true; m_channel = value; }

    /**
     * <p>The properties of the channel at the time of going live.</p>
     */
    inline void SetChannel(Channel&& value) { m_channelHasBeenSet = true; m_channel = std::move(value); }

    /**
     * <p>The properties of the channel at the time of going live.</p>
     */
    inline StreamSession& WithChannel(const Channel& value) { SetChannel(value); return *this;}

    /**
     * <p>The properties of the channel at the time of going live.</p>
     */
    inline StreamSession& WithChannel(Channel&& value) { SetChannel(std::move(value)); return *this;}


    /**
     * <p>Time when the channel went offline. This is an ISO 8601 timestamp; <i>note
     * that this is returned as a string</i>. For live streams, this is
     * <code>NULL</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>Time when the channel went offline. This is an ISO 8601 timestamp; <i>note
     * that this is returned as a string</i>. For live streams, this is
     * <code>NULL</code>.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>Time when the channel went offline. This is an ISO 8601 timestamp; <i>note
     * that this is returned as a string</i>. For live streams, this is
     * <code>NULL</code>.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>Time when the channel went offline. This is an ISO 8601 timestamp; <i>note
     * that this is returned as a string</i>. For live streams, this is
     * <code>NULL</code>.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>Time when the channel went offline. This is an ISO 8601 timestamp; <i>note
     * that this is returned as a string</i>. For live streams, this is
     * <code>NULL</code>.</p>
     */
    inline StreamSession& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>Time when the channel went offline. This is an ISO 8601 timestamp; <i>note
     * that this is returned as a string</i>. For live streams, this is
     * <code>NULL</code>.</p>
     */
    inline StreamSession& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The properties of the incoming RTMP stream for the stream.</p>
     */
    inline const IngestConfiguration& GetIngestConfiguration() const{ return m_ingestConfiguration; }

    /**
     * <p>The properties of the incoming RTMP stream for the stream.</p>
     */
    inline bool IngestConfigurationHasBeenSet() const { return m_ingestConfigurationHasBeenSet; }

    /**
     * <p>The properties of the incoming RTMP stream for the stream.</p>
     */
    inline void SetIngestConfiguration(const IngestConfiguration& value) { m_ingestConfigurationHasBeenSet = true; m_ingestConfiguration = value; }

    /**
     * <p>The properties of the incoming RTMP stream for the stream.</p>
     */
    inline void SetIngestConfiguration(IngestConfiguration&& value) { m_ingestConfigurationHasBeenSet = true; m_ingestConfiguration = std::move(value); }

    /**
     * <p>The properties of the incoming RTMP stream for the stream.</p>
     */
    inline StreamSession& WithIngestConfiguration(const IngestConfiguration& value) { SetIngestConfiguration(value); return *this;}

    /**
     * <p>The properties of the incoming RTMP stream for the stream.</p>
     */
    inline StreamSession& WithIngestConfiguration(IngestConfiguration&& value) { SetIngestConfiguration(std::move(value)); return *this;}


    /**
     * <p>The properties of recording the live stream.</p>
     */
    inline const RecordingConfiguration& GetRecordingConfiguration() const{ return m_recordingConfiguration; }

    /**
     * <p>The properties of recording the live stream.</p>
     */
    inline bool RecordingConfigurationHasBeenSet() const { return m_recordingConfigurationHasBeenSet; }

    /**
     * <p>The properties of recording the live stream.</p>
     */
    inline void SetRecordingConfiguration(const RecordingConfiguration& value) { m_recordingConfigurationHasBeenSet = true; m_recordingConfiguration = value; }

    /**
     * <p>The properties of recording the live stream.</p>
     */
    inline void SetRecordingConfiguration(RecordingConfiguration&& value) { m_recordingConfigurationHasBeenSet = true; m_recordingConfiguration = std::move(value); }

    /**
     * <p>The properties of recording the live stream.</p>
     */
    inline StreamSession& WithRecordingConfiguration(const RecordingConfiguration& value) { SetRecordingConfiguration(value); return *this;}

    /**
     * <p>The properties of recording the live stream.</p>
     */
    inline StreamSession& WithRecordingConfiguration(RecordingConfiguration&& value) { SetRecordingConfiguration(std::move(value)); return *this;}


    /**
     * <p>Time when the channel went live. This is an ISO 8601 timestamp; <i>note that
     * this is returned as a string</i>.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>Time when the channel went live. This is an ISO 8601 timestamp; <i>note that
     * this is returned as a string</i>.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>Time when the channel went live. This is an ISO 8601 timestamp; <i>note that
     * this is returned as a string</i>.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>Time when the channel went live. This is an ISO 8601 timestamp; <i>note that
     * this is returned as a string</i>.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>Time when the channel went live. This is an ISO 8601 timestamp; <i>note that
     * this is returned as a string</i>.</p>
     */
    inline StreamSession& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>Time when the channel went live. This is an ISO 8601 timestamp; <i>note that
     * this is returned as a string</i>.</p>
     */
    inline StreamSession& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>Unique identifier for a live or previously live stream in the specified
     * channel.</p>
     */
    inline const Aws::String& GetStreamId() const{ return m_streamId; }

    /**
     * <p>Unique identifier for a live or previously live stream in the specified
     * channel.</p>
     */
    inline bool StreamIdHasBeenSet() const { return m_streamIdHasBeenSet; }

    /**
     * <p>Unique identifier for a live or previously live stream in the specified
     * channel.</p>
     */
    inline void SetStreamId(const Aws::String& value) { m_streamIdHasBeenSet = true; m_streamId = value; }

    /**
     * <p>Unique identifier for a live or previously live stream in the specified
     * channel.</p>
     */
    inline void SetStreamId(Aws::String&& value) { m_streamIdHasBeenSet = true; m_streamId = std::move(value); }

    /**
     * <p>Unique identifier for a live or previously live stream in the specified
     * channel.</p>
     */
    inline void SetStreamId(const char* value) { m_streamIdHasBeenSet = true; m_streamId.assign(value); }

    /**
     * <p>Unique identifier for a live or previously live stream in the specified
     * channel.</p>
     */
    inline StreamSession& WithStreamId(const Aws::String& value) { SetStreamId(value); return *this;}

    /**
     * <p>Unique identifier for a live or previously live stream in the specified
     * channel.</p>
     */
    inline StreamSession& WithStreamId(Aws::String&& value) { SetStreamId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for a live or previously live stream in the specified
     * channel.</p>
     */
    inline StreamSession& WithStreamId(const char* value) { SetStreamId(value); return *this;}


    /**
     * <p>List of Amazon IVS events that the stream encountered. The list is sorted by
     * most recent events and contains up to 500 events. For Amazon IVS events, see <a
     * href="https://docs.aws.amazon.com/ivs/latest/userguide/eventbridge.html">Using
     * Amazon EventBridge with Amazon IVS</a>.</p>
     */
    inline const Aws::Vector<StreamEvent>& GetTruncatedEvents() const{ return m_truncatedEvents; }

    /**
     * <p>List of Amazon IVS events that the stream encountered. The list is sorted by
     * most recent events and contains up to 500 events. For Amazon IVS events, see <a
     * href="https://docs.aws.amazon.com/ivs/latest/userguide/eventbridge.html">Using
     * Amazon EventBridge with Amazon IVS</a>.</p>
     */
    inline bool TruncatedEventsHasBeenSet() const { return m_truncatedEventsHasBeenSet; }

    /**
     * <p>List of Amazon IVS events that the stream encountered. The list is sorted by
     * most recent events and contains up to 500 events. For Amazon IVS events, see <a
     * href="https://docs.aws.amazon.com/ivs/latest/userguide/eventbridge.html">Using
     * Amazon EventBridge with Amazon IVS</a>.</p>
     */
    inline void SetTruncatedEvents(const Aws::Vector<StreamEvent>& value) { m_truncatedEventsHasBeenSet = true; m_truncatedEvents = value; }

    /**
     * <p>List of Amazon IVS events that the stream encountered. The list is sorted by
     * most recent events and contains up to 500 events. For Amazon IVS events, see <a
     * href="https://docs.aws.amazon.com/ivs/latest/userguide/eventbridge.html">Using
     * Amazon EventBridge with Amazon IVS</a>.</p>
     */
    inline void SetTruncatedEvents(Aws::Vector<StreamEvent>&& value) { m_truncatedEventsHasBeenSet = true; m_truncatedEvents = std::move(value); }

    /**
     * <p>List of Amazon IVS events that the stream encountered. The list is sorted by
     * most recent events and contains up to 500 events. For Amazon IVS events, see <a
     * href="https://docs.aws.amazon.com/ivs/latest/userguide/eventbridge.html">Using
     * Amazon EventBridge with Amazon IVS</a>.</p>
     */
    inline StreamSession& WithTruncatedEvents(const Aws::Vector<StreamEvent>& value) { SetTruncatedEvents(value); return *this;}

    /**
     * <p>List of Amazon IVS events that the stream encountered. The list is sorted by
     * most recent events and contains up to 500 events. For Amazon IVS events, see <a
     * href="https://docs.aws.amazon.com/ivs/latest/userguide/eventbridge.html">Using
     * Amazon EventBridge with Amazon IVS</a>.</p>
     */
    inline StreamSession& WithTruncatedEvents(Aws::Vector<StreamEvent>&& value) { SetTruncatedEvents(std::move(value)); return *this;}

    /**
     * <p>List of Amazon IVS events that the stream encountered. The list is sorted by
     * most recent events and contains up to 500 events. For Amazon IVS events, see <a
     * href="https://docs.aws.amazon.com/ivs/latest/userguide/eventbridge.html">Using
     * Amazon EventBridge with Amazon IVS</a>.</p>
     */
    inline StreamSession& AddTruncatedEvents(const StreamEvent& value) { m_truncatedEventsHasBeenSet = true; m_truncatedEvents.push_back(value); return *this; }

    /**
     * <p>List of Amazon IVS events that the stream encountered. The list is sorted by
     * most recent events and contains up to 500 events. For Amazon IVS events, see <a
     * href="https://docs.aws.amazon.com/ivs/latest/userguide/eventbridge.html">Using
     * Amazon EventBridge with Amazon IVS</a>.</p>
     */
    inline StreamSession& AddTruncatedEvents(StreamEvent&& value) { m_truncatedEventsHasBeenSet = true; m_truncatedEvents.push_back(std::move(value)); return *this; }

  private:

    Channel m_channel;
    bool m_channelHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    IngestConfiguration m_ingestConfiguration;
    bool m_ingestConfigurationHasBeenSet = false;

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
