/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
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
namespace CloudWatchLogs
{
namespace Model
{

  /**
   * <p>This structure describes one log event field that is used as an index in at
   * least one index policy in this account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/FieldIndex">AWS API
   * Reference</a></p>
   */
  class FieldIndex
  {
  public:
    AWS_CLOUDWATCHLOGS_API FieldIndex() = default;
    AWS_CLOUDWATCHLOGS_API FieldIndex(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API FieldIndex& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>If this field index appears in an index policy that applies only to a single
     * log group, the ARN of that log group is displayed here.</p>
     */
    inline const Aws::String& GetLogGroupIdentifier() const { return m_logGroupIdentifier; }
    inline bool LogGroupIdentifierHasBeenSet() const { return m_logGroupIdentifierHasBeenSet; }
    template<typename LogGroupIdentifierT = Aws::String>
    void SetLogGroupIdentifier(LogGroupIdentifierT&& value) { m_logGroupIdentifierHasBeenSet = true; m_logGroupIdentifier = std::forward<LogGroupIdentifierT>(value); }
    template<typename LogGroupIdentifierT = Aws::String>
    FieldIndex& WithLogGroupIdentifier(LogGroupIdentifierT&& value) { SetLogGroupIdentifier(std::forward<LogGroupIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The string that this field index matches.</p>
     */
    inline const Aws::String& GetFieldIndexName() const { return m_fieldIndexName; }
    inline bool FieldIndexNameHasBeenSet() const { return m_fieldIndexNameHasBeenSet; }
    template<typename FieldIndexNameT = Aws::String>
    void SetFieldIndexName(FieldIndexNameT&& value) { m_fieldIndexNameHasBeenSet = true; m_fieldIndexName = std::forward<FieldIndexNameT>(value); }
    template<typename FieldIndexNameT = Aws::String>
    FieldIndex& WithFieldIndexName(FieldIndexNameT&& value) { SetFieldIndexName(std::forward<FieldIndexNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The most recent time that CloudWatch Logs scanned ingested log events to
     * search for this field index to improve the speed of future CloudWatch Logs
     * Insights queries that search for this field index.</p>
     */
    inline long long GetLastScanTime() const { return m_lastScanTime; }
    inline bool LastScanTimeHasBeenSet() const { return m_lastScanTimeHasBeenSet; }
    inline void SetLastScanTime(long long value) { m_lastScanTimeHasBeenSet = true; m_lastScanTime = value; }
    inline FieldIndex& WithLastScanTime(long long value) { SetLastScanTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time and date of the earliest log event that matches this field index,
     * after the index policy that contains it was created. </p>
     */
    inline long long GetFirstEventTime() const { return m_firstEventTime; }
    inline bool FirstEventTimeHasBeenSet() const { return m_firstEventTimeHasBeenSet; }
    inline void SetFirstEventTime(long long value) { m_firstEventTimeHasBeenSet = true; m_firstEventTime = value; }
    inline FieldIndex& WithFirstEventTime(long long value) { SetFirstEventTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time and date of the most recent log event that matches this field index.
     * </p>
     */
    inline long long GetLastEventTime() const { return m_lastEventTime; }
    inline bool LastEventTimeHasBeenSet() const { return m_lastEventTimeHasBeenSet; }
    inline void SetLastEventTime(long long value) { m_lastEventTimeHasBeenSet = true; m_lastEventTime = value; }
    inline FieldIndex& WithLastEventTime(long long value) { SetLastEventTime(value); return *this;}
    ///@}
  private:

    Aws::String m_logGroupIdentifier;
    bool m_logGroupIdentifierHasBeenSet = false;

    Aws::String m_fieldIndexName;
    bool m_fieldIndexNameHasBeenSet = false;

    long long m_lastScanTime{0};
    bool m_lastScanTimeHasBeenSet = false;

    long long m_firstEventTime{0};
    bool m_firstEventTimeHasBeenSet = false;

    long long m_lastEventTime{0};
    bool m_lastEventTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
