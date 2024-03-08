/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/model/LiveTailSessionMetadata.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/logs/model/LiveTailSessionLogEvent.h>
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
namespace CloudWatchLogs
{
namespace Model
{

  /**
   * <p>This object contains the log events and metadata for a Live Tail
   * session.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/LiveTailSessionUpdate">AWS
   * API Reference</a></p>
   */
  class LiveTailSessionUpdate
  {
  public:
    AWS_CLOUDWATCHLOGS_API LiveTailSessionUpdate();
    AWS_CLOUDWATCHLOGS_API LiveTailSessionUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API LiveTailSessionUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>This object contains the session metadata for a Live Tail session.</p>
     */
    inline const LiveTailSessionMetadata& GetSessionMetadata() const{ return m_sessionMetadata; }

    /**
     * <p>This object contains the session metadata for a Live Tail session.</p>
     */
    inline bool SessionMetadataHasBeenSet() const { return m_sessionMetadataHasBeenSet; }

    /**
     * <p>This object contains the session metadata for a Live Tail session.</p>
     */
    inline void SetSessionMetadata(const LiveTailSessionMetadata& value) { m_sessionMetadataHasBeenSet = true; m_sessionMetadata = value; }

    /**
     * <p>This object contains the session metadata for a Live Tail session.</p>
     */
    inline void SetSessionMetadata(LiveTailSessionMetadata&& value) { m_sessionMetadataHasBeenSet = true; m_sessionMetadata = std::move(value); }

    /**
     * <p>This object contains the session metadata for a Live Tail session.</p>
     */
    inline LiveTailSessionUpdate& WithSessionMetadata(const LiveTailSessionMetadata& value) { SetSessionMetadata(value); return *this;}

    /**
     * <p>This object contains the session metadata for a Live Tail session.</p>
     */
    inline LiveTailSessionUpdate& WithSessionMetadata(LiveTailSessionMetadata&& value) { SetSessionMetadata(std::move(value)); return *this;}


    /**
     * <p>An array, where each member of the array includes the information for one log
     * event in the Live Tail session.</p> <p>A <code>sessionResults</code> array can
     * include as many as 500 log events. If the number of log events matching the
     * request exceeds 500 per second, the log events are sampled down to 500 log
     * events to be included in each <code>sessionUpdate</code> structure.</p>
     */
    inline const Aws::Vector<LiveTailSessionLogEvent>& GetSessionResults() const{ return m_sessionResults; }

    /**
     * <p>An array, where each member of the array includes the information for one log
     * event in the Live Tail session.</p> <p>A <code>sessionResults</code> array can
     * include as many as 500 log events. If the number of log events matching the
     * request exceeds 500 per second, the log events are sampled down to 500 log
     * events to be included in each <code>sessionUpdate</code> structure.</p>
     */
    inline bool SessionResultsHasBeenSet() const { return m_sessionResultsHasBeenSet; }

    /**
     * <p>An array, where each member of the array includes the information for one log
     * event in the Live Tail session.</p> <p>A <code>sessionResults</code> array can
     * include as many as 500 log events. If the number of log events matching the
     * request exceeds 500 per second, the log events are sampled down to 500 log
     * events to be included in each <code>sessionUpdate</code> structure.</p>
     */
    inline void SetSessionResults(const Aws::Vector<LiveTailSessionLogEvent>& value) { m_sessionResultsHasBeenSet = true; m_sessionResults = value; }

    /**
     * <p>An array, where each member of the array includes the information for one log
     * event in the Live Tail session.</p> <p>A <code>sessionResults</code> array can
     * include as many as 500 log events. If the number of log events matching the
     * request exceeds 500 per second, the log events are sampled down to 500 log
     * events to be included in each <code>sessionUpdate</code> structure.</p>
     */
    inline void SetSessionResults(Aws::Vector<LiveTailSessionLogEvent>&& value) { m_sessionResultsHasBeenSet = true; m_sessionResults = std::move(value); }

    /**
     * <p>An array, where each member of the array includes the information for one log
     * event in the Live Tail session.</p> <p>A <code>sessionResults</code> array can
     * include as many as 500 log events. If the number of log events matching the
     * request exceeds 500 per second, the log events are sampled down to 500 log
     * events to be included in each <code>sessionUpdate</code> structure.</p>
     */
    inline LiveTailSessionUpdate& WithSessionResults(const Aws::Vector<LiveTailSessionLogEvent>& value) { SetSessionResults(value); return *this;}

    /**
     * <p>An array, where each member of the array includes the information for one log
     * event in the Live Tail session.</p> <p>A <code>sessionResults</code> array can
     * include as many as 500 log events. If the number of log events matching the
     * request exceeds 500 per second, the log events are sampled down to 500 log
     * events to be included in each <code>sessionUpdate</code> structure.</p>
     */
    inline LiveTailSessionUpdate& WithSessionResults(Aws::Vector<LiveTailSessionLogEvent>&& value) { SetSessionResults(std::move(value)); return *this;}

    /**
     * <p>An array, where each member of the array includes the information for one log
     * event in the Live Tail session.</p> <p>A <code>sessionResults</code> array can
     * include as many as 500 log events. If the number of log events matching the
     * request exceeds 500 per second, the log events are sampled down to 500 log
     * events to be included in each <code>sessionUpdate</code> structure.</p>
     */
    inline LiveTailSessionUpdate& AddSessionResults(const LiveTailSessionLogEvent& value) { m_sessionResultsHasBeenSet = true; m_sessionResults.push_back(value); return *this; }

    /**
     * <p>An array, where each member of the array includes the information for one log
     * event in the Live Tail session.</p> <p>A <code>sessionResults</code> array can
     * include as many as 500 log events. If the number of log events matching the
     * request exceeds 500 per second, the log events are sampled down to 500 log
     * events to be included in each <code>sessionUpdate</code> structure.</p>
     */
    inline LiveTailSessionUpdate& AddSessionResults(LiveTailSessionLogEvent&& value) { m_sessionResultsHasBeenSet = true; m_sessionResults.push_back(std::move(value)); return *this; }

  private:

    LiveTailSessionMetadata m_sessionMetadata;
    bool m_sessionMetadataHasBeenSet = false;

    Aws::Vector<LiveTailSessionLogEvent> m_sessionResults;
    bool m_sessionResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
