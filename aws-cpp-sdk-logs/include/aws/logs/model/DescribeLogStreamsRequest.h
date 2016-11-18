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
#include <aws/logs/model/OrderBy.h>

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

  /**
   */
  class AWS_CLOUDWATCHLOGS_API DescribeLogStreamsRequest : public CloudWatchLogsRequest
  {
  public:
    DescribeLogStreamsRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The name of the log group.</p>
     */
    inline const Aws::String& GetLogGroupName() const{ return m_logGroupName; }

    /**
     * <p>The name of the log group.</p>
     */
    inline void SetLogGroupName(const Aws::String& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = value; }

    /**
     * <p>The name of the log group.</p>
     */
    inline void SetLogGroupName(Aws::String&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = value; }

    /**
     * <p>The name of the log group.</p>
     */
    inline void SetLogGroupName(const char* value) { m_logGroupNameHasBeenSet = true; m_logGroupName.assign(value); }

    /**
     * <p>The name of the log group.</p>
     */
    inline DescribeLogStreamsRequest& WithLogGroupName(const Aws::String& value) { SetLogGroupName(value); return *this;}

    /**
     * <p>The name of the log group.</p>
     */
    inline DescribeLogStreamsRequest& WithLogGroupName(Aws::String&& value) { SetLogGroupName(value); return *this;}

    /**
     * <p>The name of the log group.</p>
     */
    inline DescribeLogStreamsRequest& WithLogGroupName(const char* value) { SetLogGroupName(value); return *this;}

    /**
     * <p>The prefix to match.</p> <p>You cannot specify this parameter if
     * <code>orderBy</code> is <code>LastEventTime</code>.</p>
     */
    inline const Aws::String& GetLogStreamNamePrefix() const{ return m_logStreamNamePrefix; }

    /**
     * <p>The prefix to match.</p> <p>You cannot specify this parameter if
     * <code>orderBy</code> is <code>LastEventTime</code>.</p>
     */
    inline void SetLogStreamNamePrefix(const Aws::String& value) { m_logStreamNamePrefixHasBeenSet = true; m_logStreamNamePrefix = value; }

    /**
     * <p>The prefix to match.</p> <p>You cannot specify this parameter if
     * <code>orderBy</code> is <code>LastEventTime</code>.</p>
     */
    inline void SetLogStreamNamePrefix(Aws::String&& value) { m_logStreamNamePrefixHasBeenSet = true; m_logStreamNamePrefix = value; }

    /**
     * <p>The prefix to match.</p> <p>You cannot specify this parameter if
     * <code>orderBy</code> is <code>LastEventTime</code>.</p>
     */
    inline void SetLogStreamNamePrefix(const char* value) { m_logStreamNamePrefixHasBeenSet = true; m_logStreamNamePrefix.assign(value); }

    /**
     * <p>The prefix to match.</p> <p>You cannot specify this parameter if
     * <code>orderBy</code> is <code>LastEventTime</code>.</p>
     */
    inline DescribeLogStreamsRequest& WithLogStreamNamePrefix(const Aws::String& value) { SetLogStreamNamePrefix(value); return *this;}

    /**
     * <p>The prefix to match.</p> <p>You cannot specify this parameter if
     * <code>orderBy</code> is <code>LastEventTime</code>.</p>
     */
    inline DescribeLogStreamsRequest& WithLogStreamNamePrefix(Aws::String&& value) { SetLogStreamNamePrefix(value); return *this;}

    /**
     * <p>The prefix to match.</p> <p>You cannot specify this parameter if
     * <code>orderBy</code> is <code>LastEventTime</code>.</p>
     */
    inline DescribeLogStreamsRequest& WithLogStreamNamePrefix(const char* value) { SetLogStreamNamePrefix(value); return *this;}

    /**
     * <p>If the value is <code>LogStreamName</code>, the results are ordered by log
     * stream name. If the value is <code>LastEventTime</code>, the results are ordered
     * by the event time. The default value is <code>LogStreamName</code>.</p> <p>If
     * you order the results by event time, you cannot specify the
     * <code>logStreamNamePrefix</code> parameter.</p>
     */
    inline const OrderBy& GetOrderBy() const{ return m_orderBy; }

    /**
     * <p>If the value is <code>LogStreamName</code>, the results are ordered by log
     * stream name. If the value is <code>LastEventTime</code>, the results are ordered
     * by the event time. The default value is <code>LogStreamName</code>.</p> <p>If
     * you order the results by event time, you cannot specify the
     * <code>logStreamNamePrefix</code> parameter.</p>
     */
    inline void SetOrderBy(const OrderBy& value) { m_orderByHasBeenSet = true; m_orderBy = value; }

    /**
     * <p>If the value is <code>LogStreamName</code>, the results are ordered by log
     * stream name. If the value is <code>LastEventTime</code>, the results are ordered
     * by the event time. The default value is <code>LogStreamName</code>.</p> <p>If
     * you order the results by event time, you cannot specify the
     * <code>logStreamNamePrefix</code> parameter.</p>
     */
    inline void SetOrderBy(OrderBy&& value) { m_orderByHasBeenSet = true; m_orderBy = value; }

    /**
     * <p>If the value is <code>LogStreamName</code>, the results are ordered by log
     * stream name. If the value is <code>LastEventTime</code>, the results are ordered
     * by the event time. The default value is <code>LogStreamName</code>.</p> <p>If
     * you order the results by event time, you cannot specify the
     * <code>logStreamNamePrefix</code> parameter.</p>
     */
    inline DescribeLogStreamsRequest& WithOrderBy(const OrderBy& value) { SetOrderBy(value); return *this;}

    /**
     * <p>If the value is <code>LogStreamName</code>, the results are ordered by log
     * stream name. If the value is <code>LastEventTime</code>, the results are ordered
     * by the event time. The default value is <code>LogStreamName</code>.</p> <p>If
     * you order the results by event time, you cannot specify the
     * <code>logStreamNamePrefix</code> parameter.</p>
     */
    inline DescribeLogStreamsRequest& WithOrderBy(OrderBy&& value) { SetOrderBy(value); return *this;}

    /**
     * <p>If the value is true, results are returned in descending order. If the value
     * is to false, results are returned in ascending order. The default value is
     * false.</p>
     */
    inline bool GetDescending() const{ return m_descending; }

    /**
     * <p>If the value is true, results are returned in descending order. If the value
     * is to false, results are returned in ascending order. The default value is
     * false.</p>
     */
    inline void SetDescending(bool value) { m_descendingHasBeenSet = true; m_descending = value; }

    /**
     * <p>If the value is true, results are returned in descending order. If the value
     * is to false, results are returned in ascending order. The default value is
     * false.</p>
     */
    inline DescribeLogStreamsRequest& WithDescending(bool value) { SetDescending(value); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeLogStreamsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeLogStreamsRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeLogStreamsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

    /**
     * <p>The maximum number of items returned. If you don't specify a value, the
     * default is up to 50 items.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of items returned. If you don't specify a value, the
     * default is up to 50 items.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of items returned. If you don't specify a value, the
     * default is up to 50 items.</p>
     */
    inline DescribeLogStreamsRequest& WithLimit(int value) { SetLimit(value); return *this;}

  private:
    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet;
    Aws::String m_logStreamNamePrefix;
    bool m_logStreamNamePrefixHasBeenSet;
    OrderBy m_orderBy;
    bool m_orderByHasBeenSet;
    bool m_descending;
    bool m_descendingHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
    int m_limit;
    bool m_limitHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
