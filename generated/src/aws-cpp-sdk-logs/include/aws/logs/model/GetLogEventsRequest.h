/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

  /**
   */
  class GetLogEventsRequest : public CloudWatchLogsRequest
  {
  public:
    AWS_CLOUDWATCHLOGS_API GetLogEventsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetLogEvents"; }

    AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the log group.</p>  <p> You must include either
     * <code>logGroupIdentifier</code> or <code>logGroupName</code>, but not both. </p>
     * 
     */
    inline const Aws::String& GetLogGroupName() const { return m_logGroupName; }
    inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }
    template<typename LogGroupNameT = Aws::String>
    void SetLogGroupName(LogGroupNameT&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::forward<LogGroupNameT>(value); }
    template<typename LogGroupNameT = Aws::String>
    GetLogEventsRequest& WithLogGroupName(LogGroupNameT&& value) { SetLogGroupName(std::forward<LogGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify either the name or ARN of the log group to view events from. If the
     * log group is in a source account and you are using a monitoring account, you
     * must use the log group ARN.</p>  <p> You must include either
     * <code>logGroupIdentifier</code> or <code>logGroupName</code>, but not both. </p>
     * 
     */
    inline const Aws::String& GetLogGroupIdentifier() const { return m_logGroupIdentifier; }
    inline bool LogGroupIdentifierHasBeenSet() const { return m_logGroupIdentifierHasBeenSet; }
    template<typename LogGroupIdentifierT = Aws::String>
    void SetLogGroupIdentifier(LogGroupIdentifierT&& value) { m_logGroupIdentifierHasBeenSet = true; m_logGroupIdentifier = std::forward<LogGroupIdentifierT>(value); }
    template<typename LogGroupIdentifierT = Aws::String>
    GetLogEventsRequest& WithLogGroupIdentifier(LogGroupIdentifierT&& value) { SetLogGroupIdentifier(std::forward<LogGroupIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the log stream.</p>
     */
    inline const Aws::String& GetLogStreamName() const { return m_logStreamName; }
    inline bool LogStreamNameHasBeenSet() const { return m_logStreamNameHasBeenSet; }
    template<typename LogStreamNameT = Aws::String>
    void SetLogStreamName(LogStreamNameT&& value) { m_logStreamNameHasBeenSet = true; m_logStreamName = std::forward<LogStreamNameT>(value); }
    template<typename LogStreamNameT = Aws::String>
    GetLogEventsRequest& WithLogStreamName(LogStreamNameT&& value) { SetLogStreamName(std::forward<LogStreamNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start of the time range, expressed as the number of milliseconds after
     * <code>Jan 1, 1970 00:00:00 UTC</code>. Events with a timestamp equal to this
     * time or later than this time are included. Events with a timestamp earlier than
     * this time are not included.</p>
     */
    inline long long GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(long long value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline GetLogEventsRequest& WithStartTime(long long value) { SetStartTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end of the time range, expressed as the number of milliseconds after
     * <code>Jan 1, 1970 00:00:00 UTC</code>. Events with a timestamp equal to or later
     * than this time are not included.</p>
     */
    inline long long GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(long long value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline GetLogEventsRequest& WithEndTime(long long value) { SetEndTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetLogEventsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of log events returned. If you don't specify a limit, the
     * default is as many log events as can fit in a response size of 1 MB (up to
     * 10,000 log events).</p>
     */
    inline int GetLimit() const { return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline GetLogEventsRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the value is true, the earliest log events are returned first. If the
     * value is false, the latest log events are returned first. The default value is
     * false.</p> <p>If you are using a previous <code>nextForwardToken</code> value as
     * the <code>nextToken</code> in this operation, you must specify <code>true</code>
     * for <code>startFromHead</code>.</p>
     */
    inline bool GetStartFromHead() const { return m_startFromHead; }
    inline bool StartFromHeadHasBeenSet() const { return m_startFromHeadHasBeenSet; }
    inline void SetStartFromHead(bool value) { m_startFromHeadHasBeenSet = true; m_startFromHead = value; }
    inline GetLogEventsRequest& WithStartFromHead(bool value) { SetStartFromHead(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify <code>true</code> to display the log event fields with all sensitive
     * data unmasked and visible. The default is <code>false</code>.</p> <p>To use this
     * operation with this parameter, you must be signed into an account with the
     * <code>logs:Unmask</code> permission.</p>
     */
    inline bool GetUnmask() const { return m_unmask; }
    inline bool UnmaskHasBeenSet() const { return m_unmaskHasBeenSet; }
    inline void SetUnmask(bool value) { m_unmaskHasBeenSet = true; m_unmask = value; }
    inline GetLogEventsRequest& WithUnmask(bool value) { SetUnmask(value); return *this;}
    ///@}
  private:

    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet = false;

    Aws::String m_logGroupIdentifier;
    bool m_logGroupIdentifierHasBeenSet = false;

    Aws::String m_logStreamName;
    bool m_logStreamNameHasBeenSet = false;

    long long m_startTime{0};
    bool m_startTimeHasBeenSet = false;

    long long m_endTime{0};
    bool m_endTimeHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_limit{0};
    bool m_limitHasBeenSet = false;

    bool m_startFromHead{false};
    bool m_startFromHeadHasBeenSet = false;

    bool m_unmask{false};
    bool m_unmaskHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
