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
     * <p>The log group name for which log streams are to be listed.</p>
     */
    inline const Aws::String& GetLogGroupName() const{ return m_logGroupName; }

    /**
     * <p>The log group name for which log streams are to be listed.</p>
     */
    inline void SetLogGroupName(const Aws::String& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = value; }

    /**
     * <p>The log group name for which log streams are to be listed.</p>
     */
    inline void SetLogGroupName(Aws::String&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = value; }

    /**
     * <p>The log group name for which log streams are to be listed.</p>
     */
    inline void SetLogGroupName(const char* value) { m_logGroupNameHasBeenSet = true; m_logGroupName.assign(value); }

    /**
     * <p>The log group name for which log streams are to be listed.</p>
     */
    inline DescribeLogStreamsRequest& WithLogGroupName(const Aws::String& value) { SetLogGroupName(value); return *this;}

    /**
     * <p>The log group name for which log streams are to be listed.</p>
     */
    inline DescribeLogStreamsRequest& WithLogGroupName(Aws::String&& value) { SetLogGroupName(value); return *this;}

    /**
     * <p>The log group name for which log streams are to be listed.</p>
     */
    inline DescribeLogStreamsRequest& WithLogGroupName(const char* value) { SetLogGroupName(value); return *this;}

    /**
     * <p> Will only return log streams that match the provided logStreamNamePrefix. If
     * you don't specify a value, no prefix filter is applied. </p>
     */
    inline const Aws::String& GetLogStreamNamePrefix() const{ return m_logStreamNamePrefix; }

    /**
     * <p> Will only return log streams that match the provided logStreamNamePrefix. If
     * you don't specify a value, no prefix filter is applied. </p>
     */
    inline void SetLogStreamNamePrefix(const Aws::String& value) { m_logStreamNamePrefixHasBeenSet = true; m_logStreamNamePrefix = value; }

    /**
     * <p> Will only return log streams that match the provided logStreamNamePrefix. If
     * you don't specify a value, no prefix filter is applied. </p>
     */
    inline void SetLogStreamNamePrefix(Aws::String&& value) { m_logStreamNamePrefixHasBeenSet = true; m_logStreamNamePrefix = value; }

    /**
     * <p> Will only return log streams that match the provided logStreamNamePrefix. If
     * you don't specify a value, no prefix filter is applied. </p>
     */
    inline void SetLogStreamNamePrefix(const char* value) { m_logStreamNamePrefixHasBeenSet = true; m_logStreamNamePrefix.assign(value); }

    /**
     * <p> Will only return log streams that match the provided logStreamNamePrefix. If
     * you don't specify a value, no prefix filter is applied. </p>
     */
    inline DescribeLogStreamsRequest& WithLogStreamNamePrefix(const Aws::String& value) { SetLogStreamNamePrefix(value); return *this;}

    /**
     * <p> Will only return log streams that match the provided logStreamNamePrefix. If
     * you don't specify a value, no prefix filter is applied. </p>
     */
    inline DescribeLogStreamsRequest& WithLogStreamNamePrefix(Aws::String&& value) { SetLogStreamNamePrefix(value); return *this;}

    /**
     * <p> Will only return log streams that match the provided logStreamNamePrefix. If
     * you don't specify a value, no prefix filter is applied. </p>
     */
    inline DescribeLogStreamsRequest& WithLogStreamNamePrefix(const char* value) { SetLogStreamNamePrefix(value); return *this;}

    /**
     * <p> Specifies what to order the returned log streams by. Valid arguments are
     * 'LogStreamName' or 'LastEventTime'. If you don't specify a value, results are
     * ordered by LogStreamName. If 'LastEventTime' is chosen, the request cannot also
     * contain a logStreamNamePrefix. </p>
     */
    inline const OrderBy& GetOrderBy() const{ return m_orderBy; }

    /**
     * <p> Specifies what to order the returned log streams by. Valid arguments are
     * 'LogStreamName' or 'LastEventTime'. If you don't specify a value, results are
     * ordered by LogStreamName. If 'LastEventTime' is chosen, the request cannot also
     * contain a logStreamNamePrefix. </p>
     */
    inline void SetOrderBy(const OrderBy& value) { m_orderByHasBeenSet = true; m_orderBy = value; }

    /**
     * <p> Specifies what to order the returned log streams by. Valid arguments are
     * 'LogStreamName' or 'LastEventTime'. If you don't specify a value, results are
     * ordered by LogStreamName. If 'LastEventTime' is chosen, the request cannot also
     * contain a logStreamNamePrefix. </p>
     */
    inline void SetOrderBy(OrderBy&& value) { m_orderByHasBeenSet = true; m_orderBy = value; }

    /**
     * <p> Specifies what to order the returned log streams by. Valid arguments are
     * 'LogStreamName' or 'LastEventTime'. If you don't specify a value, results are
     * ordered by LogStreamName. If 'LastEventTime' is chosen, the request cannot also
     * contain a logStreamNamePrefix. </p>
     */
    inline DescribeLogStreamsRequest& WithOrderBy(const OrderBy& value) { SetOrderBy(value); return *this;}

    /**
     * <p> Specifies what to order the returned log streams by. Valid arguments are
     * 'LogStreamName' or 'LastEventTime'. If you don't specify a value, results are
     * ordered by LogStreamName. If 'LastEventTime' is chosen, the request cannot also
     * contain a logStreamNamePrefix. </p>
     */
    inline DescribeLogStreamsRequest& WithOrderBy(OrderBy&& value) { SetOrderBy(value); return *this;}

    /**
     * <p> If set to true, results are returned in descending order. If you don't
     * specify a value or set it to false, results are returned in ascending order.
     * </p>
     */
    inline bool GetDescending() const{ return m_descending; }

    /**
     * <p> If set to true, results are returned in descending order. If you don't
     * specify a value or set it to false, results are returned in ascending order.
     * </p>
     */
    inline void SetDescending(bool value) { m_descendingHasBeenSet = true; m_descending = value; }

    /**
     * <p> If set to true, results are returned in descending order. If you don't
     * specify a value or set it to false, results are returned in ascending order.
     * </p>
     */
    inline DescribeLogStreamsRequest& WithDescending(bool value) { SetDescending(value); return *this;}

    /**
     * <p> A string token used for pagination that points to the next page of results.
     * It must be a value obtained from the response of the previous <code
     * class="code">DescribeLogStreams</code> request. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> A string token used for pagination that points to the next page of results.
     * It must be a value obtained from the response of the previous <code
     * class="code">DescribeLogStreams</code> request. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p> A string token used for pagination that points to the next page of results.
     * It must be a value obtained from the response of the previous <code
     * class="code">DescribeLogStreams</code> request. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p> A string token used for pagination that points to the next page of results.
     * It must be a value obtained from the response of the previous <code
     * class="code">DescribeLogStreams</code> request. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p> A string token used for pagination that points to the next page of results.
     * It must be a value obtained from the response of the previous <code
     * class="code">DescribeLogStreams</code> request. </p>
     */
    inline DescribeLogStreamsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> A string token used for pagination that points to the next page of results.
     * It must be a value obtained from the response of the previous <code
     * class="code">DescribeLogStreams</code> request. </p>
     */
    inline DescribeLogStreamsRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p> A string token used for pagination that points to the next page of results.
     * It must be a value obtained from the response of the previous <code
     * class="code">DescribeLogStreams</code> request. </p>
     */
    inline DescribeLogStreamsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

    /**
     * <p> The maximum number of items returned in the response. If you don't specify a
     * value, the request would return up to 50 items. </p>
     */
    inline long GetLimit() const{ return m_limit; }

    /**
     * <p> The maximum number of items returned in the response. If you don't specify a
     * value, the request would return up to 50 items. </p>
     */
    inline void SetLimit(long value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p> The maximum number of items returned in the response. If you don't specify a
     * value, the request would return up to 50 items. </p>
     */
    inline DescribeLogStreamsRequest& WithLimit(long value) { SetLimit(value); return *this;}

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
    long m_limit;
    bool m_limitHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
