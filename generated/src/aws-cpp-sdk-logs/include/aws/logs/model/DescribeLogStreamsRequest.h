/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/OrderBy.h>
#include <utility>

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

  /**
   */
  class DescribeLogStreamsRequest : public CloudWatchLogsRequest
  {
  public:
    AWS_CLOUDWATCHLOGS_API DescribeLogStreamsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeLogStreams"; }

    AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the log group.</p>  <p> You must include either
     * <code>logGroupIdentifier</code> or <code>logGroupName</code>, but not both. </p>
     * 
     */
    inline const Aws::String& GetLogGroupName() const{ return m_logGroupName; }

    /**
     * <p>The name of the log group.</p>  <p> You must include either
     * <code>logGroupIdentifier</code> or <code>logGroupName</code>, but not both. </p>
     * 
     */
    inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }

    /**
     * <p>The name of the log group.</p>  <p> You must include either
     * <code>logGroupIdentifier</code> or <code>logGroupName</code>, but not both. </p>
     * 
     */
    inline void SetLogGroupName(const Aws::String& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = value; }

    /**
     * <p>The name of the log group.</p>  <p> You must include either
     * <code>logGroupIdentifier</code> or <code>logGroupName</code>, but not both. </p>
     * 
     */
    inline void SetLogGroupName(Aws::String&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::move(value); }

    /**
     * <p>The name of the log group.</p>  <p> You must include either
     * <code>logGroupIdentifier</code> or <code>logGroupName</code>, but not both. </p>
     * 
     */
    inline void SetLogGroupName(const char* value) { m_logGroupNameHasBeenSet = true; m_logGroupName.assign(value); }

    /**
     * <p>The name of the log group.</p>  <p> You must include either
     * <code>logGroupIdentifier</code> or <code>logGroupName</code>, but not both. </p>
     * 
     */
    inline DescribeLogStreamsRequest& WithLogGroupName(const Aws::String& value) { SetLogGroupName(value); return *this;}

    /**
     * <p>The name of the log group.</p>  <p> You must include either
     * <code>logGroupIdentifier</code> or <code>logGroupName</code>, but not both. </p>
     * 
     */
    inline DescribeLogStreamsRequest& WithLogGroupName(Aws::String&& value) { SetLogGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the log group.</p>  <p> You must include either
     * <code>logGroupIdentifier</code> or <code>logGroupName</code>, but not both. </p>
     * 
     */
    inline DescribeLogStreamsRequest& WithLogGroupName(const char* value) { SetLogGroupName(value); return *this;}


    /**
     * <p>Specify either the name or ARN of the log group to view. If the log group is
     * in a source account and you are using a monitoring account, you must use the log
     * group ARN.</p>  <p> You must include either
     * <code>logGroupIdentifier</code> or <code>logGroupName</code>, but not both. </p>
     * 
     */
    inline const Aws::String& GetLogGroupIdentifier() const{ return m_logGroupIdentifier; }

    /**
     * <p>Specify either the name or ARN of the log group to view. If the log group is
     * in a source account and you are using a monitoring account, you must use the log
     * group ARN.</p>  <p> You must include either
     * <code>logGroupIdentifier</code> or <code>logGroupName</code>, but not both. </p>
     * 
     */
    inline bool LogGroupIdentifierHasBeenSet() const { return m_logGroupIdentifierHasBeenSet; }

    /**
     * <p>Specify either the name or ARN of the log group to view. If the log group is
     * in a source account and you are using a monitoring account, you must use the log
     * group ARN.</p>  <p> You must include either
     * <code>logGroupIdentifier</code> or <code>logGroupName</code>, but not both. </p>
     * 
     */
    inline void SetLogGroupIdentifier(const Aws::String& value) { m_logGroupIdentifierHasBeenSet = true; m_logGroupIdentifier = value; }

    /**
     * <p>Specify either the name or ARN of the log group to view. If the log group is
     * in a source account and you are using a monitoring account, you must use the log
     * group ARN.</p>  <p> You must include either
     * <code>logGroupIdentifier</code> or <code>logGroupName</code>, but not both. </p>
     * 
     */
    inline void SetLogGroupIdentifier(Aws::String&& value) { m_logGroupIdentifierHasBeenSet = true; m_logGroupIdentifier = std::move(value); }

    /**
     * <p>Specify either the name or ARN of the log group to view. If the log group is
     * in a source account and you are using a monitoring account, you must use the log
     * group ARN.</p>  <p> You must include either
     * <code>logGroupIdentifier</code> or <code>logGroupName</code>, but not both. </p>
     * 
     */
    inline void SetLogGroupIdentifier(const char* value) { m_logGroupIdentifierHasBeenSet = true; m_logGroupIdentifier.assign(value); }

    /**
     * <p>Specify either the name or ARN of the log group to view. If the log group is
     * in a source account and you are using a monitoring account, you must use the log
     * group ARN.</p>  <p> You must include either
     * <code>logGroupIdentifier</code> or <code>logGroupName</code>, but not both. </p>
     * 
     */
    inline DescribeLogStreamsRequest& WithLogGroupIdentifier(const Aws::String& value) { SetLogGroupIdentifier(value); return *this;}

    /**
     * <p>Specify either the name or ARN of the log group to view. If the log group is
     * in a source account and you are using a monitoring account, you must use the log
     * group ARN.</p>  <p> You must include either
     * <code>logGroupIdentifier</code> or <code>logGroupName</code>, but not both. </p>
     * 
     */
    inline DescribeLogStreamsRequest& WithLogGroupIdentifier(Aws::String&& value) { SetLogGroupIdentifier(std::move(value)); return *this;}

    /**
     * <p>Specify either the name or ARN of the log group to view. If the log group is
     * in a source account and you are using a monitoring account, you must use the log
     * group ARN.</p>  <p> You must include either
     * <code>logGroupIdentifier</code> or <code>logGroupName</code>, but not both. </p>
     * 
     */
    inline DescribeLogStreamsRequest& WithLogGroupIdentifier(const char* value) { SetLogGroupIdentifier(value); return *this;}


    /**
     * <p>The prefix to match.</p> <p>If <code>orderBy</code> is
     * <code>LastEventTime</code>, you cannot specify this parameter.</p>
     */
    inline const Aws::String& GetLogStreamNamePrefix() const{ return m_logStreamNamePrefix; }

    /**
     * <p>The prefix to match.</p> <p>If <code>orderBy</code> is
     * <code>LastEventTime</code>, you cannot specify this parameter.</p>
     */
    inline bool LogStreamNamePrefixHasBeenSet() const { return m_logStreamNamePrefixHasBeenSet; }

    /**
     * <p>The prefix to match.</p> <p>If <code>orderBy</code> is
     * <code>LastEventTime</code>, you cannot specify this parameter.</p>
     */
    inline void SetLogStreamNamePrefix(const Aws::String& value) { m_logStreamNamePrefixHasBeenSet = true; m_logStreamNamePrefix = value; }

    /**
     * <p>The prefix to match.</p> <p>If <code>orderBy</code> is
     * <code>LastEventTime</code>, you cannot specify this parameter.</p>
     */
    inline void SetLogStreamNamePrefix(Aws::String&& value) { m_logStreamNamePrefixHasBeenSet = true; m_logStreamNamePrefix = std::move(value); }

    /**
     * <p>The prefix to match.</p> <p>If <code>orderBy</code> is
     * <code>LastEventTime</code>, you cannot specify this parameter.</p>
     */
    inline void SetLogStreamNamePrefix(const char* value) { m_logStreamNamePrefixHasBeenSet = true; m_logStreamNamePrefix.assign(value); }

    /**
     * <p>The prefix to match.</p> <p>If <code>orderBy</code> is
     * <code>LastEventTime</code>, you cannot specify this parameter.</p>
     */
    inline DescribeLogStreamsRequest& WithLogStreamNamePrefix(const Aws::String& value) { SetLogStreamNamePrefix(value); return *this;}

    /**
     * <p>The prefix to match.</p> <p>If <code>orderBy</code> is
     * <code>LastEventTime</code>, you cannot specify this parameter.</p>
     */
    inline DescribeLogStreamsRequest& WithLogStreamNamePrefix(Aws::String&& value) { SetLogStreamNamePrefix(std::move(value)); return *this;}

    /**
     * <p>The prefix to match.</p> <p>If <code>orderBy</code> is
     * <code>LastEventTime</code>, you cannot specify this parameter.</p>
     */
    inline DescribeLogStreamsRequest& WithLogStreamNamePrefix(const char* value) { SetLogStreamNamePrefix(value); return *this;}


    /**
     * <p>If the value is <code>LogStreamName</code>, the results are ordered by log
     * stream name. If the value is <code>LastEventTime</code>, the results are ordered
     * by the event time. The default value is <code>LogStreamName</code>.</p> <p>If
     * you order the results by event time, you cannot specify the
     * <code>logStreamNamePrefix</code> parameter.</p> <p>
     * <code>lastEventTimestamp</code> represents the time of the most recent log event
     * in the log stream in CloudWatch Logs. This number is expressed as the number of
     * milliseconds after <code>Jan 1, 1970 00:00:00 UTC</code>.
     * <code>lastEventTimestamp</code> updates on an eventual consistency basis. It
     * typically updates in less than an hour from ingestion, but in rare situations
     * might take longer.</p>
     */
    inline const OrderBy& GetOrderBy() const{ return m_orderBy; }

    /**
     * <p>If the value is <code>LogStreamName</code>, the results are ordered by log
     * stream name. If the value is <code>LastEventTime</code>, the results are ordered
     * by the event time. The default value is <code>LogStreamName</code>.</p> <p>If
     * you order the results by event time, you cannot specify the
     * <code>logStreamNamePrefix</code> parameter.</p> <p>
     * <code>lastEventTimestamp</code> represents the time of the most recent log event
     * in the log stream in CloudWatch Logs. This number is expressed as the number of
     * milliseconds after <code>Jan 1, 1970 00:00:00 UTC</code>.
     * <code>lastEventTimestamp</code> updates on an eventual consistency basis. It
     * typically updates in less than an hour from ingestion, but in rare situations
     * might take longer.</p>
     */
    inline bool OrderByHasBeenSet() const { return m_orderByHasBeenSet; }

    /**
     * <p>If the value is <code>LogStreamName</code>, the results are ordered by log
     * stream name. If the value is <code>LastEventTime</code>, the results are ordered
     * by the event time. The default value is <code>LogStreamName</code>.</p> <p>If
     * you order the results by event time, you cannot specify the
     * <code>logStreamNamePrefix</code> parameter.</p> <p>
     * <code>lastEventTimestamp</code> represents the time of the most recent log event
     * in the log stream in CloudWatch Logs. This number is expressed as the number of
     * milliseconds after <code>Jan 1, 1970 00:00:00 UTC</code>.
     * <code>lastEventTimestamp</code> updates on an eventual consistency basis. It
     * typically updates in less than an hour from ingestion, but in rare situations
     * might take longer.</p>
     */
    inline void SetOrderBy(const OrderBy& value) { m_orderByHasBeenSet = true; m_orderBy = value; }

    /**
     * <p>If the value is <code>LogStreamName</code>, the results are ordered by log
     * stream name. If the value is <code>LastEventTime</code>, the results are ordered
     * by the event time. The default value is <code>LogStreamName</code>.</p> <p>If
     * you order the results by event time, you cannot specify the
     * <code>logStreamNamePrefix</code> parameter.</p> <p>
     * <code>lastEventTimestamp</code> represents the time of the most recent log event
     * in the log stream in CloudWatch Logs. This number is expressed as the number of
     * milliseconds after <code>Jan 1, 1970 00:00:00 UTC</code>.
     * <code>lastEventTimestamp</code> updates on an eventual consistency basis. It
     * typically updates in less than an hour from ingestion, but in rare situations
     * might take longer.</p>
     */
    inline void SetOrderBy(OrderBy&& value) { m_orderByHasBeenSet = true; m_orderBy = std::move(value); }

    /**
     * <p>If the value is <code>LogStreamName</code>, the results are ordered by log
     * stream name. If the value is <code>LastEventTime</code>, the results are ordered
     * by the event time. The default value is <code>LogStreamName</code>.</p> <p>If
     * you order the results by event time, you cannot specify the
     * <code>logStreamNamePrefix</code> parameter.</p> <p>
     * <code>lastEventTimestamp</code> represents the time of the most recent log event
     * in the log stream in CloudWatch Logs. This number is expressed as the number of
     * milliseconds after <code>Jan 1, 1970 00:00:00 UTC</code>.
     * <code>lastEventTimestamp</code> updates on an eventual consistency basis. It
     * typically updates in less than an hour from ingestion, but in rare situations
     * might take longer.</p>
     */
    inline DescribeLogStreamsRequest& WithOrderBy(const OrderBy& value) { SetOrderBy(value); return *this;}

    /**
     * <p>If the value is <code>LogStreamName</code>, the results are ordered by log
     * stream name. If the value is <code>LastEventTime</code>, the results are ordered
     * by the event time. The default value is <code>LogStreamName</code>.</p> <p>If
     * you order the results by event time, you cannot specify the
     * <code>logStreamNamePrefix</code> parameter.</p> <p>
     * <code>lastEventTimestamp</code> represents the time of the most recent log event
     * in the log stream in CloudWatch Logs. This number is expressed as the number of
     * milliseconds after <code>Jan 1, 1970 00:00:00 UTC</code>.
     * <code>lastEventTimestamp</code> updates on an eventual consistency basis. It
     * typically updates in less than an hour from ingestion, but in rare situations
     * might take longer.</p>
     */
    inline DescribeLogStreamsRequest& WithOrderBy(OrderBy&& value) { SetOrderBy(std::move(value)); return *this;}


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
    inline bool DescendingHasBeenSet() const { return m_descendingHasBeenSet; }

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
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

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
    inline DescribeLogStreamsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

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
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

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
    bool m_logGroupNameHasBeenSet = false;

    Aws::String m_logGroupIdentifier;
    bool m_logGroupIdentifierHasBeenSet = false;

    Aws::String m_logStreamNamePrefix;
    bool m_logStreamNamePrefixHasBeenSet = false;

    OrderBy m_orderBy;
    bool m_orderByHasBeenSet = false;

    bool m_descending;
    bool m_descendingHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
