/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/model/LiveTailSessionStart.h>
#include <aws/logs/model/LiveTailSessionUpdate.h>
#include <aws/logs/model/SessionTimeoutException.h>
#include <aws/logs/model/SessionStreamingException.h>
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
   * <p>This object includes the stream returned by your <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_StartLiveTail.html">StartLiveTail</a>
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/StartLiveTailResponseStream">AWS
   * API Reference</a></p>
   */
  class StartLiveTailResponseStream
  {
  public:
    AWS_CLOUDWATCHLOGS_API StartLiveTailResponseStream();
    AWS_CLOUDWATCHLOGS_API StartLiveTailResponseStream(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API StartLiveTailResponseStream& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>This object contains information about this Live Tail session, including the
     * log groups included and the log stream filters, if any.</p>
     */
    inline const LiveTailSessionStart& GetSessionStart() const{ return m_sessionStart; }

    /**
     * <p>This object contains information about this Live Tail session, including the
     * log groups included and the log stream filters, if any.</p>
     */
    inline bool SessionStartHasBeenSet() const { return m_sessionStartHasBeenSet; }

    /**
     * <p>This object contains information about this Live Tail session, including the
     * log groups included and the log stream filters, if any.</p>
     */
    inline void SetSessionStart(const LiveTailSessionStart& value) { m_sessionStartHasBeenSet = true; m_sessionStart = value; }

    /**
     * <p>This object contains information about this Live Tail session, including the
     * log groups included and the log stream filters, if any.</p>
     */
    inline void SetSessionStart(LiveTailSessionStart&& value) { m_sessionStartHasBeenSet = true; m_sessionStart = std::move(value); }

    /**
     * <p>This object contains information about this Live Tail session, including the
     * log groups included and the log stream filters, if any.</p>
     */
    inline StartLiveTailResponseStream& WithSessionStart(const LiveTailSessionStart& value) { SetSessionStart(value); return *this;}

    /**
     * <p>This object contains information about this Live Tail session, including the
     * log groups included and the log stream filters, if any.</p>
     */
    inline StartLiveTailResponseStream& WithSessionStart(LiveTailSessionStart&& value) { SetSessionStart(std::move(value)); return *this;}


    /**
     * <p>This object contains the log events and session metadata.</p>
     */
    inline const LiveTailSessionUpdate& GetSessionUpdate() const{ return m_sessionUpdate; }

    /**
     * <p>This object contains the log events and session metadata.</p>
     */
    inline bool SessionUpdateHasBeenSet() const { return m_sessionUpdateHasBeenSet; }

    /**
     * <p>This object contains the log events and session metadata.</p>
     */
    inline void SetSessionUpdate(const LiveTailSessionUpdate& value) { m_sessionUpdateHasBeenSet = true; m_sessionUpdate = value; }

    /**
     * <p>This object contains the log events and session metadata.</p>
     */
    inline void SetSessionUpdate(LiveTailSessionUpdate&& value) { m_sessionUpdateHasBeenSet = true; m_sessionUpdate = std::move(value); }

    /**
     * <p>This object contains the log events and session metadata.</p>
     */
    inline StartLiveTailResponseStream& WithSessionUpdate(const LiveTailSessionUpdate& value) { SetSessionUpdate(value); return *this;}

    /**
     * <p>This object contains the log events and session metadata.</p>
     */
    inline StartLiveTailResponseStream& WithSessionUpdate(LiveTailSessionUpdate&& value) { SetSessionUpdate(std::move(value)); return *this;}


    /**
     * <p>This exception is returned in the stream when the Live Tail session times
     * out. Live Tail sessions time out after three hours.</p>
     */
    inline const SessionTimeoutException& GetSessionTimeoutException() const{ return m_sessionTimeoutException; }

    /**
     * <p>This exception is returned in the stream when the Live Tail session times
     * out. Live Tail sessions time out after three hours.</p>
     */
    inline bool SessionTimeoutExceptionHasBeenSet() const { return m_sessionTimeoutExceptionHasBeenSet; }

    /**
     * <p>This exception is returned in the stream when the Live Tail session times
     * out. Live Tail sessions time out after three hours.</p>
     */
    inline void SetSessionTimeoutException(const SessionTimeoutException& value) { m_sessionTimeoutExceptionHasBeenSet = true; m_sessionTimeoutException = value; }

    /**
     * <p>This exception is returned in the stream when the Live Tail session times
     * out. Live Tail sessions time out after three hours.</p>
     */
    inline void SetSessionTimeoutException(SessionTimeoutException&& value) { m_sessionTimeoutExceptionHasBeenSet = true; m_sessionTimeoutException = std::move(value); }

    /**
     * <p>This exception is returned in the stream when the Live Tail session times
     * out. Live Tail sessions time out after three hours.</p>
     */
    inline StartLiveTailResponseStream& WithSessionTimeoutException(const SessionTimeoutException& value) { SetSessionTimeoutException(value); return *this;}

    /**
     * <p>This exception is returned in the stream when the Live Tail session times
     * out. Live Tail sessions time out after three hours.</p>
     */
    inline StartLiveTailResponseStream& WithSessionTimeoutException(SessionTimeoutException&& value) { SetSessionTimeoutException(std::move(value)); return *this;}


    /**
     * <p>This exception is returned if an unknown error occurs.</p>
     */
    inline const SessionStreamingException& GetSessionStreamingException() const{ return m_sessionStreamingException; }

    /**
     * <p>This exception is returned if an unknown error occurs.</p>
     */
    inline bool SessionStreamingExceptionHasBeenSet() const { return m_sessionStreamingExceptionHasBeenSet; }

    /**
     * <p>This exception is returned if an unknown error occurs.</p>
     */
    inline void SetSessionStreamingException(const SessionStreamingException& value) { m_sessionStreamingExceptionHasBeenSet = true; m_sessionStreamingException = value; }

    /**
     * <p>This exception is returned if an unknown error occurs.</p>
     */
    inline void SetSessionStreamingException(SessionStreamingException&& value) { m_sessionStreamingExceptionHasBeenSet = true; m_sessionStreamingException = std::move(value); }

    /**
     * <p>This exception is returned if an unknown error occurs.</p>
     */
    inline StartLiveTailResponseStream& WithSessionStreamingException(const SessionStreamingException& value) { SetSessionStreamingException(value); return *this;}

    /**
     * <p>This exception is returned if an unknown error occurs.</p>
     */
    inline StartLiveTailResponseStream& WithSessionStreamingException(SessionStreamingException&& value) { SetSessionStreamingException(std::move(value)); return *this;}

  private:

    LiveTailSessionStart m_sessionStart;
    bool m_sessionStartHasBeenSet = false;

    LiveTailSessionUpdate m_sessionUpdate;
    bool m_sessionUpdateHasBeenSet = false;

    SessionTimeoutException m_sessionTimeoutException;
    bool m_sessionTimeoutExceptionHasBeenSet = false;

    SessionStreamingException m_sessionStreamingException;
    bool m_sessionStreamingExceptionHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
