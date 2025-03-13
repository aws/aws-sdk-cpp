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
    AWS_CLOUDWATCHLOGS_API DescribeLogStreamsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeLogStreams"; }

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
    DescribeLogStreamsRequest& WithLogGroupName(LogGroupNameT&& value) { SetLogGroupName(std::forward<LogGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify either the name or ARN of the log group to view. If the log group is
     * in a source account and you are using a monitoring account, you must use the log
     * group ARN.</p>  <p> You must include either
     * <code>logGroupIdentifier</code> or <code>logGroupName</code>, but not both. </p>
     * 
     */
    inline const Aws::String& GetLogGroupIdentifier() const { return m_logGroupIdentifier; }
    inline bool LogGroupIdentifierHasBeenSet() const { return m_logGroupIdentifierHasBeenSet; }
    template<typename LogGroupIdentifierT = Aws::String>
    void SetLogGroupIdentifier(LogGroupIdentifierT&& value) { m_logGroupIdentifierHasBeenSet = true; m_logGroupIdentifier = std::forward<LogGroupIdentifierT>(value); }
    template<typename LogGroupIdentifierT = Aws::String>
    DescribeLogStreamsRequest& WithLogGroupIdentifier(LogGroupIdentifierT&& value) { SetLogGroupIdentifier(std::forward<LogGroupIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prefix to match.</p> <p>If <code>orderBy</code> is
     * <code>LastEventTime</code>, you cannot specify this parameter.</p>
     */
    inline const Aws::String& GetLogStreamNamePrefix() const { return m_logStreamNamePrefix; }
    inline bool LogStreamNamePrefixHasBeenSet() const { return m_logStreamNamePrefixHasBeenSet; }
    template<typename LogStreamNamePrefixT = Aws::String>
    void SetLogStreamNamePrefix(LogStreamNamePrefixT&& value) { m_logStreamNamePrefixHasBeenSet = true; m_logStreamNamePrefix = std::forward<LogStreamNamePrefixT>(value); }
    template<typename LogStreamNamePrefixT = Aws::String>
    DescribeLogStreamsRequest& WithLogStreamNamePrefix(LogStreamNamePrefixT&& value) { SetLogStreamNamePrefix(std::forward<LogStreamNamePrefixT>(value)); return *this;}
    ///@}

    ///@{
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
    inline OrderBy GetOrderBy() const { return m_orderBy; }
    inline bool OrderByHasBeenSet() const { return m_orderByHasBeenSet; }
    inline void SetOrderBy(OrderBy value) { m_orderByHasBeenSet = true; m_orderBy = value; }
    inline DescribeLogStreamsRequest& WithOrderBy(OrderBy value) { SetOrderBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the value is true, results are returned in descending order. If the value
     * is to false, results are returned in ascending order. The default value is
     * false.</p>
     */
    inline bool GetDescending() const { return m_descending; }
    inline bool DescendingHasBeenSet() const { return m_descendingHasBeenSet; }
    inline void SetDescending(bool value) { m_descendingHasBeenSet = true; m_descending = value; }
    inline DescribeLogStreamsRequest& WithDescending(bool value) { SetDescending(value); return *this;}
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
    DescribeLogStreamsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items returned. If you don't specify a value, the
     * default is up to 50 items.</p>
     */
    inline int GetLimit() const { return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline DescribeLogStreamsRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}
  private:

    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet = false;

    Aws::String m_logGroupIdentifier;
    bool m_logGroupIdentifierHasBeenSet = false;

    Aws::String m_logStreamNamePrefix;
    bool m_logStreamNamePrefixHasBeenSet = false;

    OrderBy m_orderBy{OrderBy::NOT_SET};
    bool m_orderByHasBeenSet = false;

    bool m_descending{false};
    bool m_descendingHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_limit{0};
    bool m_limitHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
