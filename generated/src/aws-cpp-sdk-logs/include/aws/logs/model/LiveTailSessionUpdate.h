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
    AWS_CLOUDWATCHLOGS_API LiveTailSessionUpdate() = default;
    AWS_CLOUDWATCHLOGS_API LiveTailSessionUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API LiveTailSessionUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>This object contains the session metadata for a Live Tail session.</p>
     */
    inline const LiveTailSessionMetadata& GetSessionMetadata() const { return m_sessionMetadata; }
    inline bool SessionMetadataHasBeenSet() const { return m_sessionMetadataHasBeenSet; }
    template<typename SessionMetadataT = LiveTailSessionMetadata>
    void SetSessionMetadata(SessionMetadataT&& value) { m_sessionMetadataHasBeenSet = true; m_sessionMetadata = std::forward<SessionMetadataT>(value); }
    template<typename SessionMetadataT = LiveTailSessionMetadata>
    LiveTailSessionUpdate& WithSessionMetadata(SessionMetadataT&& value) { SetSessionMetadata(std::forward<SessionMetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array, where each member of the array includes the information for one log
     * event in the Live Tail session.</p> <p>A <code>sessionResults</code> array can
     * include as many as 500 log events. If the number of log events matching the
     * request exceeds 500 per second, the log events are sampled down to 500 log
     * events to be included in each <code>sessionUpdate</code> structure.</p>
     */
    inline const Aws::Vector<LiveTailSessionLogEvent>& GetSessionResults() const { return m_sessionResults; }
    inline bool SessionResultsHasBeenSet() const { return m_sessionResultsHasBeenSet; }
    template<typename SessionResultsT = Aws::Vector<LiveTailSessionLogEvent>>
    void SetSessionResults(SessionResultsT&& value) { m_sessionResultsHasBeenSet = true; m_sessionResults = std::forward<SessionResultsT>(value); }
    template<typename SessionResultsT = Aws::Vector<LiveTailSessionLogEvent>>
    LiveTailSessionUpdate& WithSessionResults(SessionResultsT&& value) { SetSessionResults(std::forward<SessionResultsT>(value)); return *this;}
    template<typename SessionResultsT = LiveTailSessionLogEvent>
    LiveTailSessionUpdate& AddSessionResults(SessionResultsT&& value) { m_sessionResultsHasBeenSet = true; m_sessionResults.emplace_back(std::forward<SessionResultsT>(value)); return *this; }
    ///@}
  private:

    LiveTailSessionMetadata m_sessionMetadata;
    bool m_sessionMetadataHasBeenSet = false;

    Aws::Vector<LiveTailSessionLogEvent> m_sessionResults;
    bool m_sessionResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
