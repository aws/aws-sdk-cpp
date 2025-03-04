/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

  /**
   */
  class FilterLogEventsRequest : public CloudWatchLogsRequest
  {
  public:
    AWS_CLOUDWATCHLOGS_API FilterLogEventsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "FilterLogEvents"; }

    AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the log group to search.</p>  <p> You must include either
     * <code>logGroupIdentifier</code> or <code>logGroupName</code>, but not both. </p>
     * 
     */
    inline const Aws::String& GetLogGroupName() const { return m_logGroupName; }
    inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }
    template<typename LogGroupNameT = Aws::String>
    void SetLogGroupName(LogGroupNameT&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::forward<LogGroupNameT>(value); }
    template<typename LogGroupNameT = Aws::String>
    FilterLogEventsRequest& WithLogGroupName(LogGroupNameT&& value) { SetLogGroupName(std::forward<LogGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify either the name or ARN of the log group to view log events from. If
     * the log group is in a source account and you are using a monitoring account, you
     * must use the log group ARN.</p>  <p> You must include either
     * <code>logGroupIdentifier</code> or <code>logGroupName</code>, but not both. </p>
     * 
     */
    inline const Aws::String& GetLogGroupIdentifier() const { return m_logGroupIdentifier; }
    inline bool LogGroupIdentifierHasBeenSet() const { return m_logGroupIdentifierHasBeenSet; }
    template<typename LogGroupIdentifierT = Aws::String>
    void SetLogGroupIdentifier(LogGroupIdentifierT&& value) { m_logGroupIdentifierHasBeenSet = true; m_logGroupIdentifier = std::forward<LogGroupIdentifierT>(value); }
    template<typename LogGroupIdentifierT = Aws::String>
    FilterLogEventsRequest& WithLogGroupIdentifier(LogGroupIdentifierT&& value) { SetLogGroupIdentifier(std::forward<LogGroupIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the results to only logs from the log streams in this list.</p> <p>If
     * you specify a value for both <code>logStreamNames</code> and
     * <code>logStreamNamePrefix</code>, the action returns an
     * <code>InvalidParameterException</code> error.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLogStreamNames() const { return m_logStreamNames; }
    inline bool LogStreamNamesHasBeenSet() const { return m_logStreamNamesHasBeenSet; }
    template<typename LogStreamNamesT = Aws::Vector<Aws::String>>
    void SetLogStreamNames(LogStreamNamesT&& value) { m_logStreamNamesHasBeenSet = true; m_logStreamNames = std::forward<LogStreamNamesT>(value); }
    template<typename LogStreamNamesT = Aws::Vector<Aws::String>>
    FilterLogEventsRequest& WithLogStreamNames(LogStreamNamesT&& value) { SetLogStreamNames(std::forward<LogStreamNamesT>(value)); return *this;}
    template<typename LogStreamNamesT = Aws::String>
    FilterLogEventsRequest& AddLogStreamNames(LogStreamNamesT&& value) { m_logStreamNamesHasBeenSet = true; m_logStreamNames.emplace_back(std::forward<LogStreamNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Filters the results to include only events from log streams that have names
     * starting with this prefix.</p> <p>If you specify a value for both
     * <code>logStreamNamePrefix</code> and <code>logStreamNames</code>, the action
     * returns an <code>InvalidParameterException</code> error.</p>
     */
    inline const Aws::String& GetLogStreamNamePrefix() const { return m_logStreamNamePrefix; }
    inline bool LogStreamNamePrefixHasBeenSet() const { return m_logStreamNamePrefixHasBeenSet; }
    template<typename LogStreamNamePrefixT = Aws::String>
    void SetLogStreamNamePrefix(LogStreamNamePrefixT&& value) { m_logStreamNamePrefixHasBeenSet = true; m_logStreamNamePrefix = std::forward<LogStreamNamePrefixT>(value); }
    template<typename LogStreamNamePrefixT = Aws::String>
    FilterLogEventsRequest& WithLogStreamNamePrefix(LogStreamNamePrefixT&& value) { SetLogStreamNamePrefix(std::forward<LogStreamNamePrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start of the time range, expressed as the number of milliseconds after
     * <code>Jan 1, 1970 00:00:00 UTC</code>. Events with a timestamp before this time
     * are not returned.</p>
     */
    inline long long GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(long long value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline FilterLogEventsRequest& WithStartTime(long long value) { SetStartTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end of the time range, expressed as the number of milliseconds after
     * <code>Jan 1, 1970 00:00:00 UTC</code>. Events with a timestamp later than this
     * time are not returned.</p>
     */
    inline long long GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(long long value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline FilterLogEventsRequest& WithEndTime(long long value) { SetEndTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filter pattern to use. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/FilterAndPatternSyntax.html">Filter
     * and Pattern Syntax</a>.</p> <p>If not provided, all the events are matched.</p>
     */
    inline const Aws::String& GetFilterPattern() const { return m_filterPattern; }
    inline bool FilterPatternHasBeenSet() const { return m_filterPatternHasBeenSet; }
    template<typename FilterPatternT = Aws::String>
    void SetFilterPattern(FilterPatternT&& value) { m_filterPatternHasBeenSet = true; m_filterPattern = std::forward<FilterPatternT>(value); }
    template<typename FilterPatternT = Aws::String>
    FilterLogEventsRequest& WithFilterPattern(FilterPatternT&& value) { SetFilterPattern(std::forward<FilterPatternT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of events to return. (You received this token from
     * a previous call.)</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    FilterLogEventsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of events to return. The default is 10,000 events.</p>
     */
    inline int GetLimit() const { return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline FilterLogEventsRequest& WithLimit(int value) { SetLimit(value); return *this;}
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
    inline FilterLogEventsRequest& WithUnmask(bool value) { SetUnmask(value); return *this;}
    ///@}
  private:

    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet = false;

    Aws::String m_logGroupIdentifier;
    bool m_logGroupIdentifierHasBeenSet = false;

    Aws::Vector<Aws::String> m_logStreamNames;
    bool m_logStreamNamesHasBeenSet = false;

    Aws::String m_logStreamNamePrefix;
    bool m_logStreamNamePrefixHasBeenSet = false;

    long long m_startTime{0};
    bool m_startTimeHasBeenSet = false;

    long long m_endTime{0};
    bool m_endTimeHasBeenSet = false;

    Aws::String m_filterPattern;
    bool m_filterPatternHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_limit{0};
    bool m_limitHasBeenSet = false;

    bool m_unmask{false};
    bool m_unmaskHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
