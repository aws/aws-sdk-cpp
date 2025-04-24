/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/model/LiveTailSessionStart.h>
#include <aws/logs/model/LiveTailSessionUpdate.h>
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
    AWS_CLOUDWATCHLOGS_API StartLiveTailResponseStream() = default;
    AWS_CLOUDWATCHLOGS_API StartLiveTailResponseStream(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API StartLiveTailResponseStream& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>This object contains information about this Live Tail session, including the
     * log groups included and the log stream filters, if any.</p>
     */
    inline const LiveTailSessionStart& GetSessionStart() const { return m_sessionStart; }
    inline bool SessionStartHasBeenSet() const { return m_sessionStartHasBeenSet; }
    template<typename SessionStartT = LiveTailSessionStart>
    void SetSessionStart(SessionStartT&& value) { m_sessionStartHasBeenSet = true; m_sessionStart = std::forward<SessionStartT>(value); }
    template<typename SessionStartT = LiveTailSessionStart>
    StartLiveTailResponseStream& WithSessionStart(SessionStartT&& value) { SetSessionStart(std::forward<SessionStartT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This object contains the log events and session metadata.</p>
     */
    inline const LiveTailSessionUpdate& GetSessionUpdate() const { return m_sessionUpdate; }
    inline bool SessionUpdateHasBeenSet() const { return m_sessionUpdateHasBeenSet; }
    template<typename SessionUpdateT = LiveTailSessionUpdate>
    void SetSessionUpdate(SessionUpdateT&& value) { m_sessionUpdateHasBeenSet = true; m_sessionUpdate = std::forward<SessionUpdateT>(value); }
    template<typename SessionUpdateT = LiveTailSessionUpdate>
    StartLiveTailResponseStream& WithSessionUpdate(SessionUpdateT&& value) { SetSessionUpdate(std::forward<SessionUpdateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This exception is returned in the stream when the Live Tail session times
     * out. Live Tail sessions time out after three hours.</p>
     */
    inline const CloudWatchLogsError& GetSessionTimeoutException() const { return m_sessionTimeoutException; }
    inline bool SessionTimeoutExceptionHasBeenSet() const { return m_sessionTimeoutExceptionHasBeenSet; }
    template<typename SessionTimeoutExceptionT = CloudWatchLogsError>
    void SetSessionTimeoutException(SessionTimeoutExceptionT&& value) { m_sessionTimeoutExceptionHasBeenSet = true; m_sessionTimeoutException = std::forward<SessionTimeoutExceptionT>(value); }
    template<typename SessionTimeoutExceptionT = CloudWatchLogsError>
    StartLiveTailResponseStream& WithSessionTimeoutException(SessionTimeoutExceptionT&& value) { SetSessionTimeoutException(std::forward<SessionTimeoutExceptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This exception is returned if an unknown error occurs.</p>
     */
    inline const CloudWatchLogsError& GetSessionStreamingException() const { return m_sessionStreamingException; }
    inline bool SessionStreamingExceptionHasBeenSet() const { return m_sessionStreamingExceptionHasBeenSet; }
    template<typename SessionStreamingExceptionT = CloudWatchLogsError>
    void SetSessionStreamingException(SessionStreamingExceptionT&& value) { m_sessionStreamingExceptionHasBeenSet = true; m_sessionStreamingException = std::forward<SessionStreamingExceptionT>(value); }
    template<typename SessionStreamingExceptionT = CloudWatchLogsError>
    StartLiveTailResponseStream& WithSessionStreamingException(SessionStreamingExceptionT&& value) { SetSessionStreamingException(std::forward<SessionStreamingExceptionT>(value)); return *this;}
    ///@}
  private:

    LiveTailSessionStart m_sessionStart;
    bool m_sessionStartHasBeenSet = false;

    LiveTailSessionUpdate m_sessionUpdate;
    bool m_sessionUpdateHasBeenSet = false;

    CloudWatchLogsError m_sessionTimeoutException;
    bool m_sessionTimeoutExceptionHasBeenSet = false;

    CloudWatchLogsError m_sessionStreamingException;
    bool m_sessionStreamingExceptionHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
