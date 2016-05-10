/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

  /**
   */
  class AWS_CLOUDWATCHLOGS_API GetLogEventsRequest : public CloudWatchLogsRequest
  {
  public:
    GetLogEventsRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The name of the log group to query.</p>
     */
    inline const Aws::String& GetLogGroupName() const{ return m_logGroupName; }

    /**
     * <p>The name of the log group to query.</p>
     */
    inline void SetLogGroupName(const Aws::String& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = value; }

    /**
     * <p>The name of the log group to query.</p>
     */
    inline void SetLogGroupName(Aws::String&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = value; }

    /**
     * <p>The name of the log group to query.</p>
     */
    inline void SetLogGroupName(const char* value) { m_logGroupNameHasBeenSet = true; m_logGroupName.assign(value); }

    /**
     * <p>The name of the log group to query.</p>
     */
    inline GetLogEventsRequest& WithLogGroupName(const Aws::String& value) { SetLogGroupName(value); return *this;}

    /**
     * <p>The name of the log group to query.</p>
     */
    inline GetLogEventsRequest& WithLogGroupName(Aws::String&& value) { SetLogGroupName(value); return *this;}

    /**
     * <p>The name of the log group to query.</p>
     */
    inline GetLogEventsRequest& WithLogGroupName(const char* value) { SetLogGroupName(value); return *this;}

    /**
     * <p>The name of the log stream to query.</p>
     */
    inline const Aws::String& GetLogStreamName() const{ return m_logStreamName; }

    /**
     * <p>The name of the log stream to query.</p>
     */
    inline void SetLogStreamName(const Aws::String& value) { m_logStreamNameHasBeenSet = true; m_logStreamName = value; }

    /**
     * <p>The name of the log stream to query.</p>
     */
    inline void SetLogStreamName(Aws::String&& value) { m_logStreamNameHasBeenSet = true; m_logStreamName = value; }

    /**
     * <p>The name of the log stream to query.</p>
     */
    inline void SetLogStreamName(const char* value) { m_logStreamNameHasBeenSet = true; m_logStreamName.assign(value); }

    /**
     * <p>The name of the log stream to query.</p>
     */
    inline GetLogEventsRequest& WithLogStreamName(const Aws::String& value) { SetLogStreamName(value); return *this;}

    /**
     * <p>The name of the log stream to query.</p>
     */
    inline GetLogEventsRequest& WithLogStreamName(Aws::String&& value) { SetLogStreamName(value); return *this;}

    /**
     * <p>The name of the log stream to query.</p>
     */
    inline GetLogEventsRequest& WithLogStreamName(const char* value) { SetLogStreamName(value); return *this;}

    
    inline long long GetStartTime() const{ return m_startTime; }

    
    inline void SetStartTime(long long value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    
    inline GetLogEventsRequest& WithStartTime(long long value) { SetStartTime(value); return *this;}

    
    inline long long GetEndTime() const{ return m_endTime; }

    
    inline void SetEndTime(long long value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    
    inline GetLogEventsRequest& WithEndTime(long long value) { SetEndTime(value); return *this;}

    /**
     * <p> A string token used for pagination that points to the next page of results.
     * It must be a value obtained from the <code class="code">nextForwardToken</code>
     * or <code class="code">nextBackwardToken</code> fields in the response of the
     * previous <code class="code">GetLogEvents</code> request. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> A string token used for pagination that points to the next page of results.
     * It must be a value obtained from the <code class="code">nextForwardToken</code>
     * or <code class="code">nextBackwardToken</code> fields in the response of the
     * previous <code class="code">GetLogEvents</code> request. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p> A string token used for pagination that points to the next page of results.
     * It must be a value obtained from the <code class="code">nextForwardToken</code>
     * or <code class="code">nextBackwardToken</code> fields in the response of the
     * previous <code class="code">GetLogEvents</code> request. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p> A string token used for pagination that points to the next page of results.
     * It must be a value obtained from the <code class="code">nextForwardToken</code>
     * or <code class="code">nextBackwardToken</code> fields in the response of the
     * previous <code class="code">GetLogEvents</code> request. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p> A string token used for pagination that points to the next page of results.
     * It must be a value obtained from the <code class="code">nextForwardToken</code>
     * or <code class="code">nextBackwardToken</code> fields in the response of the
     * previous <code class="code">GetLogEvents</code> request. </p>
     */
    inline GetLogEventsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> A string token used for pagination that points to the next page of results.
     * It must be a value obtained from the <code class="code">nextForwardToken</code>
     * or <code class="code">nextBackwardToken</code> fields in the response of the
     * previous <code class="code">GetLogEvents</code> request. </p>
     */
    inline GetLogEventsRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p> A string token used for pagination that points to the next page of results.
     * It must be a value obtained from the <code class="code">nextForwardToken</code>
     * or <code class="code">nextBackwardToken</code> fields in the response of the
     * previous <code class="code">GetLogEvents</code> request. </p>
     */
    inline GetLogEventsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

    /**
     * <p> The maximum number of log events returned in the response. If you don't
     * specify a value, the request would return as many log events as can fit in a
     * response size of 1MB, up to 10,000 log events. </p>
     */
    inline long GetLimit() const{ return m_limit; }

    /**
     * <p> The maximum number of log events returned in the response. If you don't
     * specify a value, the request would return as many log events as can fit in a
     * response size of 1MB, up to 10,000 log events. </p>
     */
    inline void SetLimit(long value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p> The maximum number of log events returned in the response. If you don't
     * specify a value, the request would return as many log events as can fit in a
     * response size of 1MB, up to 10,000 log events. </p>
     */
    inline GetLogEventsRequest& WithLimit(long value) { SetLimit(value); return *this;}

    /**
     * <p>If set to true, the earliest log events would be returned first. The default
     * is false (the latest log events are returned first).</p>
     */
    inline bool GetStartFromHead() const{ return m_startFromHead; }

    /**
     * <p>If set to true, the earliest log events would be returned first. The default
     * is false (the latest log events are returned first).</p>
     */
    inline void SetStartFromHead(bool value) { m_startFromHeadHasBeenSet = true; m_startFromHead = value; }

    /**
     * <p>If set to true, the earliest log events would be returned first. The default
     * is false (the latest log events are returned first).</p>
     */
    inline GetLogEventsRequest& WithStartFromHead(bool value) { SetStartFromHead(value); return *this;}

  private:
    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet;
    Aws::String m_logStreamName;
    bool m_logStreamNameHasBeenSet;
    long long m_startTime;
    bool m_startTimeHasBeenSet;
    long long m_endTime;
    bool m_endTimeHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
    long m_limit;
    bool m_limitHasBeenSet;
    bool m_startFromHead;
    bool m_startFromHeadHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
