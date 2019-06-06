/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_CLOUDWATCHLOGS_API FilterLogEventsRequest : public CloudWatchLogsRequest
  {
  public:
    FilterLogEventsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "FilterLogEvents"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the log group to search.</p>
     */
    inline const Aws::String& GetLogGroupName() const{ return m_logGroupName; }

    /**
     * <p>The name of the log group to search.</p>
     */
    inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }

    /**
     * <p>The name of the log group to search.</p>
     */
    inline void SetLogGroupName(const Aws::String& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = value; }

    /**
     * <p>The name of the log group to search.</p>
     */
    inline void SetLogGroupName(Aws::String&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::move(value); }

    /**
     * <p>The name of the log group to search.</p>
     */
    inline void SetLogGroupName(const char* value) { m_logGroupNameHasBeenSet = true; m_logGroupName.assign(value); }

    /**
     * <p>The name of the log group to search.</p>
     */
    inline FilterLogEventsRequest& WithLogGroupName(const Aws::String& value) { SetLogGroupName(value); return *this;}

    /**
     * <p>The name of the log group to search.</p>
     */
    inline FilterLogEventsRequest& WithLogGroupName(Aws::String&& value) { SetLogGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the log group to search.</p>
     */
    inline FilterLogEventsRequest& WithLogGroupName(const char* value) { SetLogGroupName(value); return *this;}


    /**
     * <p>Filters the results to only logs from the log streams in this list.</p> <p>If
     * you specify a value for both <code>logStreamNamePrefix</code> and
     * <code>logStreamNames</code>, the action returns an
     * <code>InvalidParameterException</code> error.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLogStreamNames() const{ return m_logStreamNames; }

    /**
     * <p>Filters the results to only logs from the log streams in this list.</p> <p>If
     * you specify a value for both <code>logStreamNamePrefix</code> and
     * <code>logStreamNames</code>, the action returns an
     * <code>InvalidParameterException</code> error.</p>
     */
    inline bool LogStreamNamesHasBeenSet() const { return m_logStreamNamesHasBeenSet; }

    /**
     * <p>Filters the results to only logs from the log streams in this list.</p> <p>If
     * you specify a value for both <code>logStreamNamePrefix</code> and
     * <code>logStreamNames</code>, the action returns an
     * <code>InvalidParameterException</code> error.</p>
     */
    inline void SetLogStreamNames(const Aws::Vector<Aws::String>& value) { m_logStreamNamesHasBeenSet = true; m_logStreamNames = value; }

    /**
     * <p>Filters the results to only logs from the log streams in this list.</p> <p>If
     * you specify a value for both <code>logStreamNamePrefix</code> and
     * <code>logStreamNames</code>, the action returns an
     * <code>InvalidParameterException</code> error.</p>
     */
    inline void SetLogStreamNames(Aws::Vector<Aws::String>&& value) { m_logStreamNamesHasBeenSet = true; m_logStreamNames = std::move(value); }

    /**
     * <p>Filters the results to only logs from the log streams in this list.</p> <p>If
     * you specify a value for both <code>logStreamNamePrefix</code> and
     * <code>logStreamNames</code>, the action returns an
     * <code>InvalidParameterException</code> error.</p>
     */
    inline FilterLogEventsRequest& WithLogStreamNames(const Aws::Vector<Aws::String>& value) { SetLogStreamNames(value); return *this;}

    /**
     * <p>Filters the results to only logs from the log streams in this list.</p> <p>If
     * you specify a value for both <code>logStreamNamePrefix</code> and
     * <code>logStreamNames</code>, the action returns an
     * <code>InvalidParameterException</code> error.</p>
     */
    inline FilterLogEventsRequest& WithLogStreamNames(Aws::Vector<Aws::String>&& value) { SetLogStreamNames(std::move(value)); return *this;}

    /**
     * <p>Filters the results to only logs from the log streams in this list.</p> <p>If
     * you specify a value for both <code>logStreamNamePrefix</code> and
     * <code>logStreamNames</code>, the action returns an
     * <code>InvalidParameterException</code> error.</p>
     */
    inline FilterLogEventsRequest& AddLogStreamNames(const Aws::String& value) { m_logStreamNamesHasBeenSet = true; m_logStreamNames.push_back(value); return *this; }

    /**
     * <p>Filters the results to only logs from the log streams in this list.</p> <p>If
     * you specify a value for both <code>logStreamNamePrefix</code> and
     * <code>logStreamNames</code>, the action returns an
     * <code>InvalidParameterException</code> error.</p>
     */
    inline FilterLogEventsRequest& AddLogStreamNames(Aws::String&& value) { m_logStreamNamesHasBeenSet = true; m_logStreamNames.push_back(std::move(value)); return *this; }

    /**
     * <p>Filters the results to only logs from the log streams in this list.</p> <p>If
     * you specify a value for both <code>logStreamNamePrefix</code> and
     * <code>logStreamNames</code>, the action returns an
     * <code>InvalidParameterException</code> error.</p>
     */
    inline FilterLogEventsRequest& AddLogStreamNames(const char* value) { m_logStreamNamesHasBeenSet = true; m_logStreamNames.push_back(value); return *this; }


    /**
     * <p>Filters the results to include only events from log streams that have names
     * starting with this prefix.</p> <p>If you specify a value for both
     * <code>logStreamNamePrefix</code> and <code>logStreamNames</code>, but the value
     * for <code>logStreamNamePrefix</code> does not match any log stream names
     * specified in <code>logStreamNames</code>, the action returns an
     * <code>InvalidParameterException</code> error.</p>
     */
    inline const Aws::String& GetLogStreamNamePrefix() const{ return m_logStreamNamePrefix; }

    /**
     * <p>Filters the results to include only events from log streams that have names
     * starting with this prefix.</p> <p>If you specify a value for both
     * <code>logStreamNamePrefix</code> and <code>logStreamNames</code>, but the value
     * for <code>logStreamNamePrefix</code> does not match any log stream names
     * specified in <code>logStreamNames</code>, the action returns an
     * <code>InvalidParameterException</code> error.</p>
     */
    inline bool LogStreamNamePrefixHasBeenSet() const { return m_logStreamNamePrefixHasBeenSet; }

    /**
     * <p>Filters the results to include only events from log streams that have names
     * starting with this prefix.</p> <p>If you specify a value for both
     * <code>logStreamNamePrefix</code> and <code>logStreamNames</code>, but the value
     * for <code>logStreamNamePrefix</code> does not match any log stream names
     * specified in <code>logStreamNames</code>, the action returns an
     * <code>InvalidParameterException</code> error.</p>
     */
    inline void SetLogStreamNamePrefix(const Aws::String& value) { m_logStreamNamePrefixHasBeenSet = true; m_logStreamNamePrefix = value; }

    /**
     * <p>Filters the results to include only events from log streams that have names
     * starting with this prefix.</p> <p>If you specify a value for both
     * <code>logStreamNamePrefix</code> and <code>logStreamNames</code>, but the value
     * for <code>logStreamNamePrefix</code> does not match any log stream names
     * specified in <code>logStreamNames</code>, the action returns an
     * <code>InvalidParameterException</code> error.</p>
     */
    inline void SetLogStreamNamePrefix(Aws::String&& value) { m_logStreamNamePrefixHasBeenSet = true; m_logStreamNamePrefix = std::move(value); }

    /**
     * <p>Filters the results to include only events from log streams that have names
     * starting with this prefix.</p> <p>If you specify a value for both
     * <code>logStreamNamePrefix</code> and <code>logStreamNames</code>, but the value
     * for <code>logStreamNamePrefix</code> does not match any log stream names
     * specified in <code>logStreamNames</code>, the action returns an
     * <code>InvalidParameterException</code> error.</p>
     */
    inline void SetLogStreamNamePrefix(const char* value) { m_logStreamNamePrefixHasBeenSet = true; m_logStreamNamePrefix.assign(value); }

    /**
     * <p>Filters the results to include only events from log streams that have names
     * starting with this prefix.</p> <p>If you specify a value for both
     * <code>logStreamNamePrefix</code> and <code>logStreamNames</code>, but the value
     * for <code>logStreamNamePrefix</code> does not match any log stream names
     * specified in <code>logStreamNames</code>, the action returns an
     * <code>InvalidParameterException</code> error.</p>
     */
    inline FilterLogEventsRequest& WithLogStreamNamePrefix(const Aws::String& value) { SetLogStreamNamePrefix(value); return *this;}

    /**
     * <p>Filters the results to include only events from log streams that have names
     * starting with this prefix.</p> <p>If you specify a value for both
     * <code>logStreamNamePrefix</code> and <code>logStreamNames</code>, but the value
     * for <code>logStreamNamePrefix</code> does not match any log stream names
     * specified in <code>logStreamNames</code>, the action returns an
     * <code>InvalidParameterException</code> error.</p>
     */
    inline FilterLogEventsRequest& WithLogStreamNamePrefix(Aws::String&& value) { SetLogStreamNamePrefix(std::move(value)); return *this;}

    /**
     * <p>Filters the results to include only events from log streams that have names
     * starting with this prefix.</p> <p>If you specify a value for both
     * <code>logStreamNamePrefix</code> and <code>logStreamNames</code>, but the value
     * for <code>logStreamNamePrefix</code> does not match any log stream names
     * specified in <code>logStreamNames</code>, the action returns an
     * <code>InvalidParameterException</code> error.</p>
     */
    inline FilterLogEventsRequest& WithLogStreamNamePrefix(const char* value) { SetLogStreamNamePrefix(value); return *this;}


    /**
     * <p>The start of the time range, expressed as the number of milliseconds after
     * Jan 1, 1970 00:00:00 UTC. Events with a timestamp before this time are not
     * returned.</p>
     */
    inline long long GetStartTime() const{ return m_startTime; }

    /**
     * <p>The start of the time range, expressed as the number of milliseconds after
     * Jan 1, 1970 00:00:00 UTC. Events with a timestamp before this time are not
     * returned.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The start of the time range, expressed as the number of milliseconds after
     * Jan 1, 1970 00:00:00 UTC. Events with a timestamp before this time are not
     * returned.</p>
     */
    inline void SetStartTime(long long value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The start of the time range, expressed as the number of milliseconds after
     * Jan 1, 1970 00:00:00 UTC. Events with a timestamp before this time are not
     * returned.</p>
     */
    inline FilterLogEventsRequest& WithStartTime(long long value) { SetStartTime(value); return *this;}


    /**
     * <p>The end of the time range, expressed as the number of milliseconds after Jan
     * 1, 1970 00:00:00 UTC. Events with a timestamp later than this time are not
     * returned.</p>
     */
    inline long long GetEndTime() const{ return m_endTime; }

    /**
     * <p>The end of the time range, expressed as the number of milliseconds after Jan
     * 1, 1970 00:00:00 UTC. Events with a timestamp later than this time are not
     * returned.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The end of the time range, expressed as the number of milliseconds after Jan
     * 1, 1970 00:00:00 UTC. Events with a timestamp later than this time are not
     * returned.</p>
     */
    inline void SetEndTime(long long value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The end of the time range, expressed as the number of milliseconds after Jan
     * 1, 1970 00:00:00 UTC. Events with a timestamp later than this time are not
     * returned.</p>
     */
    inline FilterLogEventsRequest& WithEndTime(long long value) { SetEndTime(value); return *this;}


    /**
     * <p>The filter pattern to use. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/FilterAndPatternSyntax.html">Filter
     * and Pattern Syntax</a>.</p> <p>If not provided, all the events are matched.</p>
     */
    inline const Aws::String& GetFilterPattern() const{ return m_filterPattern; }

    /**
     * <p>The filter pattern to use. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/FilterAndPatternSyntax.html">Filter
     * and Pattern Syntax</a>.</p> <p>If not provided, all the events are matched.</p>
     */
    inline bool FilterPatternHasBeenSet() const { return m_filterPatternHasBeenSet; }

    /**
     * <p>The filter pattern to use. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/FilterAndPatternSyntax.html">Filter
     * and Pattern Syntax</a>.</p> <p>If not provided, all the events are matched.</p>
     */
    inline void SetFilterPattern(const Aws::String& value) { m_filterPatternHasBeenSet = true; m_filterPattern = value; }

    /**
     * <p>The filter pattern to use. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/FilterAndPatternSyntax.html">Filter
     * and Pattern Syntax</a>.</p> <p>If not provided, all the events are matched.</p>
     */
    inline void SetFilterPattern(Aws::String&& value) { m_filterPatternHasBeenSet = true; m_filterPattern = std::move(value); }

    /**
     * <p>The filter pattern to use. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/FilterAndPatternSyntax.html">Filter
     * and Pattern Syntax</a>.</p> <p>If not provided, all the events are matched.</p>
     */
    inline void SetFilterPattern(const char* value) { m_filterPatternHasBeenSet = true; m_filterPattern.assign(value); }

    /**
     * <p>The filter pattern to use. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/FilterAndPatternSyntax.html">Filter
     * and Pattern Syntax</a>.</p> <p>If not provided, all the events are matched.</p>
     */
    inline FilterLogEventsRequest& WithFilterPattern(const Aws::String& value) { SetFilterPattern(value); return *this;}

    /**
     * <p>The filter pattern to use. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/FilterAndPatternSyntax.html">Filter
     * and Pattern Syntax</a>.</p> <p>If not provided, all the events are matched.</p>
     */
    inline FilterLogEventsRequest& WithFilterPattern(Aws::String&& value) { SetFilterPattern(std::move(value)); return *this;}

    /**
     * <p>The filter pattern to use. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/FilterAndPatternSyntax.html">Filter
     * and Pattern Syntax</a>.</p> <p>If not provided, all the events are matched.</p>
     */
    inline FilterLogEventsRequest& WithFilterPattern(const char* value) { SetFilterPattern(value); return *this;}


    /**
     * <p>The token for the next set of events to return. (You received this token from
     * a previous call.)</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of events to return. (You received this token from
     * a previous call.)</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next set of events to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of events to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of events to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of events to return. (You received this token from
     * a previous call.)</p>
     */
    inline FilterLogEventsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of events to return. (You received this token from
     * a previous call.)</p>
     */
    inline FilterLogEventsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of events to return. (You received this token from
     * a previous call.)</p>
     */
    inline FilterLogEventsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of events to return. The default is 10,000 events.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of events to return. The default is 10,000 events.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The maximum number of events to return. The default is 10,000 events.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of events to return. The default is 10,000 events.</p>
     */
    inline FilterLogEventsRequest& WithLimit(int value) { SetLimit(value); return *this;}


    /**
     * <p>If the value is true, the operation makes a best effort to provide responses
     * that contain events from multiple log streams within the log group, interleaved
     * in a single response. If the value is false, all the matched log events in the
     * first log stream are searched first, then those in the next log stream, and so
     * on. The default is false.</p> <p> <b>IMPORTANT:</b> Starting on June 17, 2019,
     * this parameter will be ignored and the value will be assumed to be true. The
     * response from this operation will always interleave events from multiple log
     * streams within a log group.</p>
     */
    inline bool GetInterleaved() const{ return m_interleaved; }

    /**
     * <p>If the value is true, the operation makes a best effort to provide responses
     * that contain events from multiple log streams within the log group, interleaved
     * in a single response. If the value is false, all the matched log events in the
     * first log stream are searched first, then those in the next log stream, and so
     * on. The default is false.</p> <p> <b>IMPORTANT:</b> Starting on June 17, 2019,
     * this parameter will be ignored and the value will be assumed to be true. The
     * response from this operation will always interleave events from multiple log
     * streams within a log group.</p>
     */
    inline bool InterleavedHasBeenSet() const { return m_interleavedHasBeenSet; }

    /**
     * <p>If the value is true, the operation makes a best effort to provide responses
     * that contain events from multiple log streams within the log group, interleaved
     * in a single response. If the value is false, all the matched log events in the
     * first log stream are searched first, then those in the next log stream, and so
     * on. The default is false.</p> <p> <b>IMPORTANT:</b> Starting on June 17, 2019,
     * this parameter will be ignored and the value will be assumed to be true. The
     * response from this operation will always interleave events from multiple log
     * streams within a log group.</p>
     */
    inline void SetInterleaved(bool value) { m_interleavedHasBeenSet = true; m_interleaved = value; }

    /**
     * <p>If the value is true, the operation makes a best effort to provide responses
     * that contain events from multiple log streams within the log group, interleaved
     * in a single response. If the value is false, all the matched log events in the
     * first log stream are searched first, then those in the next log stream, and so
     * on. The default is false.</p> <p> <b>IMPORTANT:</b> Starting on June 17, 2019,
     * this parameter will be ignored and the value will be assumed to be true. The
     * response from this operation will always interleave events from multiple log
     * streams within a log group.</p>
     */
    inline FilterLogEventsRequest& WithInterleaved(bool value) { SetInterleaved(value); return *this;}

  private:

    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet;

    Aws::Vector<Aws::String> m_logStreamNames;
    bool m_logStreamNamesHasBeenSet;

    Aws::String m_logStreamNamePrefix;
    bool m_logStreamNamePrefixHasBeenSet;

    long long m_startTime;
    bool m_startTimeHasBeenSet;

    long long m_endTime;
    bool m_endTimeHasBeenSet;

    Aws::String m_filterPattern;
    bool m_filterPatternHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_limit;
    bool m_limitHasBeenSet;

    bool m_interleaved;
    bool m_interleavedHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
