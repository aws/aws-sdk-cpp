﻿/**
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
  class AWS_CLOUDWATCHLOGS_API StartQueryRequest : public CloudWatchLogsRequest
  {
  public:
    StartQueryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartQuery"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The log group on which to perform the query.</p> <p>A <code>StartQuery</code>
     * operation must include a <code>logGroupNames</code> or a
     * <code>logGroupName</code> parameter, but not both.</p>
     */
    inline const Aws::String& GetLogGroupName() const{ return m_logGroupName; }

    /**
     * <p>The log group on which to perform the query.</p> <p>A <code>StartQuery</code>
     * operation must include a <code>logGroupNames</code> or a
     * <code>logGroupName</code> parameter, but not both.</p>
     */
    inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }

    /**
     * <p>The log group on which to perform the query.</p> <p>A <code>StartQuery</code>
     * operation must include a <code>logGroupNames</code> or a
     * <code>logGroupName</code> parameter, but not both.</p>
     */
    inline void SetLogGroupName(const Aws::String& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = value; }

    /**
     * <p>The log group on which to perform the query.</p> <p>A <code>StartQuery</code>
     * operation must include a <code>logGroupNames</code> or a
     * <code>logGroupName</code> parameter, but not both.</p>
     */
    inline void SetLogGroupName(Aws::String&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::move(value); }

    /**
     * <p>The log group on which to perform the query.</p> <p>A <code>StartQuery</code>
     * operation must include a <code>logGroupNames</code> or a
     * <code>logGroupName</code> parameter, but not both.</p>
     */
    inline void SetLogGroupName(const char* value) { m_logGroupNameHasBeenSet = true; m_logGroupName.assign(value); }

    /**
     * <p>The log group on which to perform the query.</p> <p>A <code>StartQuery</code>
     * operation must include a <code>logGroupNames</code> or a
     * <code>logGroupName</code> parameter, but not both.</p>
     */
    inline StartQueryRequest& WithLogGroupName(const Aws::String& value) { SetLogGroupName(value); return *this;}

    /**
     * <p>The log group on which to perform the query.</p> <p>A <code>StartQuery</code>
     * operation must include a <code>logGroupNames</code> or a
     * <code>logGroupName</code> parameter, but not both.</p>
     */
    inline StartQueryRequest& WithLogGroupName(Aws::String&& value) { SetLogGroupName(std::move(value)); return *this;}

    /**
     * <p>The log group on which to perform the query.</p> <p>A <code>StartQuery</code>
     * operation must include a <code>logGroupNames</code> or a
     * <code>logGroupName</code> parameter, but not both.</p>
     */
    inline StartQueryRequest& WithLogGroupName(const char* value) { SetLogGroupName(value); return *this;}


    /**
     * <p>The list of log groups to be queried. You can include up to 20 log
     * groups.</p> <p>A <code>StartQuery</code> operation must include a
     * <code>logGroupNames</code> or a <code>logGroupName</code> parameter, but not
     * both.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLogGroupNames() const{ return m_logGroupNames; }

    /**
     * <p>The list of log groups to be queried. You can include up to 20 log
     * groups.</p> <p>A <code>StartQuery</code> operation must include a
     * <code>logGroupNames</code> or a <code>logGroupName</code> parameter, but not
     * both.</p>
     */
    inline bool LogGroupNamesHasBeenSet() const { return m_logGroupNamesHasBeenSet; }

    /**
     * <p>The list of log groups to be queried. You can include up to 20 log
     * groups.</p> <p>A <code>StartQuery</code> operation must include a
     * <code>logGroupNames</code> or a <code>logGroupName</code> parameter, but not
     * both.</p>
     */
    inline void SetLogGroupNames(const Aws::Vector<Aws::String>& value) { m_logGroupNamesHasBeenSet = true; m_logGroupNames = value; }

    /**
     * <p>The list of log groups to be queried. You can include up to 20 log
     * groups.</p> <p>A <code>StartQuery</code> operation must include a
     * <code>logGroupNames</code> or a <code>logGroupName</code> parameter, but not
     * both.</p>
     */
    inline void SetLogGroupNames(Aws::Vector<Aws::String>&& value) { m_logGroupNamesHasBeenSet = true; m_logGroupNames = std::move(value); }

    /**
     * <p>The list of log groups to be queried. You can include up to 20 log
     * groups.</p> <p>A <code>StartQuery</code> operation must include a
     * <code>logGroupNames</code> or a <code>logGroupName</code> parameter, but not
     * both.</p>
     */
    inline StartQueryRequest& WithLogGroupNames(const Aws::Vector<Aws::String>& value) { SetLogGroupNames(value); return *this;}

    /**
     * <p>The list of log groups to be queried. You can include up to 20 log
     * groups.</p> <p>A <code>StartQuery</code> operation must include a
     * <code>logGroupNames</code> or a <code>logGroupName</code> parameter, but not
     * both.</p>
     */
    inline StartQueryRequest& WithLogGroupNames(Aws::Vector<Aws::String>&& value) { SetLogGroupNames(std::move(value)); return *this;}

    /**
     * <p>The list of log groups to be queried. You can include up to 20 log
     * groups.</p> <p>A <code>StartQuery</code> operation must include a
     * <code>logGroupNames</code> or a <code>logGroupName</code> parameter, but not
     * both.</p>
     */
    inline StartQueryRequest& AddLogGroupNames(const Aws::String& value) { m_logGroupNamesHasBeenSet = true; m_logGroupNames.push_back(value); return *this; }

    /**
     * <p>The list of log groups to be queried. You can include up to 20 log
     * groups.</p> <p>A <code>StartQuery</code> operation must include a
     * <code>logGroupNames</code> or a <code>logGroupName</code> parameter, but not
     * both.</p>
     */
    inline StartQueryRequest& AddLogGroupNames(Aws::String&& value) { m_logGroupNamesHasBeenSet = true; m_logGroupNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of log groups to be queried. You can include up to 20 log
     * groups.</p> <p>A <code>StartQuery</code> operation must include a
     * <code>logGroupNames</code> or a <code>logGroupName</code> parameter, but not
     * both.</p>
     */
    inline StartQueryRequest& AddLogGroupNames(const char* value) { m_logGroupNamesHasBeenSet = true; m_logGroupNames.push_back(value); return *this; }


    /**
     * <p>The beginning of the time range to query. The range is inclusive, so the
     * specified start time is included in the query. Specified as epoch time, the
     * number of seconds since January 1, 1970, 00:00:00 UTC.</p>
     */
    inline long long GetStartTime() const{ return m_startTime; }

    /**
     * <p>The beginning of the time range to query. The range is inclusive, so the
     * specified start time is included in the query. Specified as epoch time, the
     * number of seconds since January 1, 1970, 00:00:00 UTC.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The beginning of the time range to query. The range is inclusive, so the
     * specified start time is included in the query. Specified as epoch time, the
     * number of seconds since January 1, 1970, 00:00:00 UTC.</p>
     */
    inline void SetStartTime(long long value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The beginning of the time range to query. The range is inclusive, so the
     * specified start time is included in the query. Specified as epoch time, the
     * number of seconds since January 1, 1970, 00:00:00 UTC.</p>
     */
    inline StartQueryRequest& WithStartTime(long long value) { SetStartTime(value); return *this;}


    /**
     * <p>The end of the time range to query. The range is inclusive, so the specified
     * end time is included in the query. Specified as epoch time, the number of
     * seconds since January 1, 1970, 00:00:00 UTC.</p>
     */
    inline long long GetEndTime() const{ return m_endTime; }

    /**
     * <p>The end of the time range to query. The range is inclusive, so the specified
     * end time is included in the query. Specified as epoch time, the number of
     * seconds since January 1, 1970, 00:00:00 UTC.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The end of the time range to query. The range is inclusive, so the specified
     * end time is included in the query. Specified as epoch time, the number of
     * seconds since January 1, 1970, 00:00:00 UTC.</p>
     */
    inline void SetEndTime(long long value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The end of the time range to query. The range is inclusive, so the specified
     * end time is included in the query. Specified as epoch time, the number of
     * seconds since January 1, 1970, 00:00:00 UTC.</p>
     */
    inline StartQueryRequest& WithEndTime(long long value) { SetEndTime(value); return *this;}


    /**
     * <p>The query string to use. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CWL_QuerySyntax.html">CloudWatch
     * Logs Insights Query Syntax</a>.</p>
     */
    inline const Aws::String& GetQueryString() const{ return m_queryString; }

    /**
     * <p>The query string to use. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CWL_QuerySyntax.html">CloudWatch
     * Logs Insights Query Syntax</a>.</p>
     */
    inline bool QueryStringHasBeenSet() const { return m_queryStringHasBeenSet; }

    /**
     * <p>The query string to use. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CWL_QuerySyntax.html">CloudWatch
     * Logs Insights Query Syntax</a>.</p>
     */
    inline void SetQueryString(const Aws::String& value) { m_queryStringHasBeenSet = true; m_queryString = value; }

    /**
     * <p>The query string to use. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CWL_QuerySyntax.html">CloudWatch
     * Logs Insights Query Syntax</a>.</p>
     */
    inline void SetQueryString(Aws::String&& value) { m_queryStringHasBeenSet = true; m_queryString = std::move(value); }

    /**
     * <p>The query string to use. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CWL_QuerySyntax.html">CloudWatch
     * Logs Insights Query Syntax</a>.</p>
     */
    inline void SetQueryString(const char* value) { m_queryStringHasBeenSet = true; m_queryString.assign(value); }

    /**
     * <p>The query string to use. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CWL_QuerySyntax.html">CloudWatch
     * Logs Insights Query Syntax</a>.</p>
     */
    inline StartQueryRequest& WithQueryString(const Aws::String& value) { SetQueryString(value); return *this;}

    /**
     * <p>The query string to use. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CWL_QuerySyntax.html">CloudWatch
     * Logs Insights Query Syntax</a>.</p>
     */
    inline StartQueryRequest& WithQueryString(Aws::String&& value) { SetQueryString(std::move(value)); return *this;}

    /**
     * <p>The query string to use. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CWL_QuerySyntax.html">CloudWatch
     * Logs Insights Query Syntax</a>.</p>
     */
    inline StartQueryRequest& WithQueryString(const char* value) { SetQueryString(value); return *this;}


    /**
     * <p>The maximum number of log events to return in the query. If the query string
     * uses the <code>fields</code> command, only the specified fields and their values
     * are returned. The default is 1000.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of log events to return in the query. If the query string
     * uses the <code>fields</code> command, only the specified fields and their values
     * are returned. The default is 1000.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The maximum number of log events to return in the query. If the query string
     * uses the <code>fields</code> command, only the specified fields and their values
     * are returned. The default is 1000.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of log events to return in the query. If the query string
     * uses the <code>fields</code> command, only the specified fields and their values
     * are returned. The default is 1000.</p>
     */
    inline StartQueryRequest& WithLimit(int value) { SetLimit(value); return *this;}

  private:

    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet;

    Aws::Vector<Aws::String> m_logGroupNames;
    bool m_logGroupNamesHasBeenSet;

    long long m_startTime;
    bool m_startTimeHasBeenSet;

    long long m_endTime;
    bool m_endTimeHasBeenSet;

    Aws::String m_queryString;
    bool m_queryStringHasBeenSet;

    int m_limit;
    bool m_limitHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
