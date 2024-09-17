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
    AWS_CLOUDWATCHLOGS_API FilterLogEventsRequest();

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
    inline const Aws::String& GetLogGroupName() const{ return m_logGroupName; }
    inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }
    inline void SetLogGroupName(const Aws::String& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = value; }
    inline void SetLogGroupName(Aws::String&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::move(value); }
    inline void SetLogGroupName(const char* value) { m_logGroupNameHasBeenSet = true; m_logGroupName.assign(value); }
    inline FilterLogEventsRequest& WithLogGroupName(const Aws::String& value) { SetLogGroupName(value); return *this;}
    inline FilterLogEventsRequest& WithLogGroupName(Aws::String&& value) { SetLogGroupName(std::move(value)); return *this;}
    inline FilterLogEventsRequest& WithLogGroupName(const char* value) { SetLogGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify either the name or ARN of the log group to view log events from. If
     * the log group is in a source account and you are using a monitoring account, you
     * must use the log group ARN.</p>  <p> You must include either
     * <code>logGroupIdentifier</code> or <code>logGroupName</code>, but not both. </p>
     * 
     */
    inline const Aws::String& GetLogGroupIdentifier() const{ return m_logGroupIdentifier; }
    inline bool LogGroupIdentifierHasBeenSet() const { return m_logGroupIdentifierHasBeenSet; }
    inline void SetLogGroupIdentifier(const Aws::String& value) { m_logGroupIdentifierHasBeenSet = true; m_logGroupIdentifier = value; }
    inline void SetLogGroupIdentifier(Aws::String&& value) { m_logGroupIdentifierHasBeenSet = true; m_logGroupIdentifier = std::move(value); }
    inline void SetLogGroupIdentifier(const char* value) { m_logGroupIdentifierHasBeenSet = true; m_logGroupIdentifier.assign(value); }
    inline FilterLogEventsRequest& WithLogGroupIdentifier(const Aws::String& value) { SetLogGroupIdentifier(value); return *this;}
    inline FilterLogEventsRequest& WithLogGroupIdentifier(Aws::String&& value) { SetLogGroupIdentifier(std::move(value)); return *this;}
    inline FilterLogEventsRequest& WithLogGroupIdentifier(const char* value) { SetLogGroupIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the results to only logs from the log streams in this list.</p> <p>If
     * you specify a value for both <code>logStreamNames</code> and
     * <code>logStreamNamePrefix</code>, the action returns an
     * <code>InvalidParameterException</code> error.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLogStreamNames() const{ return m_logStreamNames; }
    inline bool LogStreamNamesHasBeenSet() const { return m_logStreamNamesHasBeenSet; }
    inline void SetLogStreamNames(const Aws::Vector<Aws::String>& value) { m_logStreamNamesHasBeenSet = true; m_logStreamNames = value; }
    inline void SetLogStreamNames(Aws::Vector<Aws::String>&& value) { m_logStreamNamesHasBeenSet = true; m_logStreamNames = std::move(value); }
    inline FilterLogEventsRequest& WithLogStreamNames(const Aws::Vector<Aws::String>& value) { SetLogStreamNames(value); return *this;}
    inline FilterLogEventsRequest& WithLogStreamNames(Aws::Vector<Aws::String>&& value) { SetLogStreamNames(std::move(value)); return *this;}
    inline FilterLogEventsRequest& AddLogStreamNames(const Aws::String& value) { m_logStreamNamesHasBeenSet = true; m_logStreamNames.push_back(value); return *this; }
    inline FilterLogEventsRequest& AddLogStreamNames(Aws::String&& value) { m_logStreamNamesHasBeenSet = true; m_logStreamNames.push_back(std::move(value)); return *this; }
    inline FilterLogEventsRequest& AddLogStreamNames(const char* value) { m_logStreamNamesHasBeenSet = true; m_logStreamNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Filters the results to include only events from log streams that have names
     * starting with this prefix.</p> <p>If you specify a value for both
     * <code>logStreamNamePrefix</code> and <code>logStreamNames</code>, the action
     * returns an <code>InvalidParameterException</code> error.</p>
     */
    inline const Aws::String& GetLogStreamNamePrefix() const{ return m_logStreamNamePrefix; }
    inline bool LogStreamNamePrefixHasBeenSet() const { return m_logStreamNamePrefixHasBeenSet; }
    inline void SetLogStreamNamePrefix(const Aws::String& value) { m_logStreamNamePrefixHasBeenSet = true; m_logStreamNamePrefix = value; }
    inline void SetLogStreamNamePrefix(Aws::String&& value) { m_logStreamNamePrefixHasBeenSet = true; m_logStreamNamePrefix = std::move(value); }
    inline void SetLogStreamNamePrefix(const char* value) { m_logStreamNamePrefixHasBeenSet = true; m_logStreamNamePrefix.assign(value); }
    inline FilterLogEventsRequest& WithLogStreamNamePrefix(const Aws::String& value) { SetLogStreamNamePrefix(value); return *this;}
    inline FilterLogEventsRequest& WithLogStreamNamePrefix(Aws::String&& value) { SetLogStreamNamePrefix(std::move(value)); return *this;}
    inline FilterLogEventsRequest& WithLogStreamNamePrefix(const char* value) { SetLogStreamNamePrefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start of the time range, expressed as the number of milliseconds after
     * <code>Jan 1, 1970 00:00:00 UTC</code>. Events with a timestamp before this time
     * are not returned.</p>
     */
    inline long long GetStartTime() const{ return m_startTime; }
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
    inline long long GetEndTime() const{ return m_endTime; }
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
    inline const Aws::String& GetFilterPattern() const{ return m_filterPattern; }
    inline bool FilterPatternHasBeenSet() const { return m_filterPatternHasBeenSet; }
    inline void SetFilterPattern(const Aws::String& value) { m_filterPatternHasBeenSet = true; m_filterPattern = value; }
    inline void SetFilterPattern(Aws::String&& value) { m_filterPatternHasBeenSet = true; m_filterPattern = std::move(value); }
    inline void SetFilterPattern(const char* value) { m_filterPatternHasBeenSet = true; m_filterPattern.assign(value); }
    inline FilterLogEventsRequest& WithFilterPattern(const Aws::String& value) { SetFilterPattern(value); return *this;}
    inline FilterLogEventsRequest& WithFilterPattern(Aws::String&& value) { SetFilterPattern(std::move(value)); return *this;}
    inline FilterLogEventsRequest& WithFilterPattern(const char* value) { SetFilterPattern(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of events to return. (You received this token from
     * a previous call.)</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline FilterLogEventsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline FilterLogEventsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline FilterLogEventsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of events to return. The default is 10,000 events.</p>
     */
    inline int GetLimit() const{ return m_limit; }
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
    inline bool GetUnmask() const{ return m_unmask; }
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

    long long m_startTime;
    bool m_startTimeHasBeenSet = false;

    long long m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::String m_filterPattern;
    bool m_filterPatternHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;

    bool m_unmask;
    bool m_unmaskHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
