/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Summary information about a stream session.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/StreamSessionSummary">AWS
   * API Reference</a></p>
   */
  class StreamSessionSummary
  {
  public:
    AWS_IVS_API StreamSessionSummary();
    AWS_IVS_API StreamSessionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVS_API StreamSessionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVS_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline StreamSessionSummary& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>Time when the channel went offline. This is an ISO 8601 timestamp; <i>note
     * that this is returned as a string</i>. For live streams, this is
     * <code>NULL</code>.</p>
     */
    inline StreamSessionSummary& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>If <code>true</code>, this stream encountered a quota breach or failure.</p>
     */
    inline bool GetHasErrorEvent() const{ return m_hasErrorEvent; }

    /**
     * <p>If <code>true</code>, this stream encountered a quota breach or failure.</p>
     */
    inline bool HasErrorEventHasBeenSet() const { return m_hasErrorEventHasBeenSet; }

    /**
     * <p>If <code>true</code>, this stream encountered a quota breach or failure.</p>
     */
    inline void SetHasErrorEvent(bool value) { m_hasErrorEventHasBeenSet = true; m_hasErrorEvent = value; }

    /**
     * <p>If <code>true</code>, this stream encountered a quota breach or failure.</p>
     */
    inline StreamSessionSummary& WithHasErrorEvent(bool value) { SetHasErrorEvent(value); return *this;}


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
    inline StreamSessionSummary& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>Time when the channel went live. This is an ISO 8601 timestamp; <i>note that
     * this is returned as a string</i>.</p>
     */
    inline StreamSessionSummary& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


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
    inline StreamSessionSummary& WithStreamId(const Aws::String& value) { SetStreamId(value); return *this;}

    /**
     * <p>Unique identifier for a live or previously live stream in the specified
     * channel.</p>
     */
    inline StreamSessionSummary& WithStreamId(Aws::String&& value) { SetStreamId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for a live or previously live stream in the specified
     * channel.</p>
     */
    inline StreamSessionSummary& WithStreamId(const char* value) { SetStreamId(value); return *this;}

  private:

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    bool m_hasErrorEvent;
    bool m_hasErrorEventHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::String m_streamId;
    bool m_streamIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
