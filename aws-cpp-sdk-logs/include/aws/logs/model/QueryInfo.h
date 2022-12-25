/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/QueryStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CloudWatchLogs
{
namespace Model
{

  /**
   * <p>Information about one CloudWatch Logs Insights query that matches the request
   * in a <code>DescribeQueries</code> operation. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/QueryInfo">AWS API
   * Reference</a></p>
   */
  class QueryInfo
  {
  public:
    AWS_CLOUDWATCHLOGS_API QueryInfo();
    AWS_CLOUDWATCHLOGS_API QueryInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API QueryInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique ID number of this query.</p>
     */
    inline const Aws::String& GetQueryId() const{ return m_queryId; }

    /**
     * <p>The unique ID number of this query.</p>
     */
    inline bool QueryIdHasBeenSet() const { return m_queryIdHasBeenSet; }

    /**
     * <p>The unique ID number of this query.</p>
     */
    inline void SetQueryId(const Aws::String& value) { m_queryIdHasBeenSet = true; m_queryId = value; }

    /**
     * <p>The unique ID number of this query.</p>
     */
    inline void SetQueryId(Aws::String&& value) { m_queryIdHasBeenSet = true; m_queryId = std::move(value); }

    /**
     * <p>The unique ID number of this query.</p>
     */
    inline void SetQueryId(const char* value) { m_queryIdHasBeenSet = true; m_queryId.assign(value); }

    /**
     * <p>The unique ID number of this query.</p>
     */
    inline QueryInfo& WithQueryId(const Aws::String& value) { SetQueryId(value); return *this;}

    /**
     * <p>The unique ID number of this query.</p>
     */
    inline QueryInfo& WithQueryId(Aws::String&& value) { SetQueryId(std::move(value)); return *this;}

    /**
     * <p>The unique ID number of this query.</p>
     */
    inline QueryInfo& WithQueryId(const char* value) { SetQueryId(value); return *this;}


    /**
     * <p>The query string used in this query.</p>
     */
    inline const Aws::String& GetQueryString() const{ return m_queryString; }

    /**
     * <p>The query string used in this query.</p>
     */
    inline bool QueryStringHasBeenSet() const { return m_queryStringHasBeenSet; }

    /**
     * <p>The query string used in this query.</p>
     */
    inline void SetQueryString(const Aws::String& value) { m_queryStringHasBeenSet = true; m_queryString = value; }

    /**
     * <p>The query string used in this query.</p>
     */
    inline void SetQueryString(Aws::String&& value) { m_queryStringHasBeenSet = true; m_queryString = std::move(value); }

    /**
     * <p>The query string used in this query.</p>
     */
    inline void SetQueryString(const char* value) { m_queryStringHasBeenSet = true; m_queryString.assign(value); }

    /**
     * <p>The query string used in this query.</p>
     */
    inline QueryInfo& WithQueryString(const Aws::String& value) { SetQueryString(value); return *this;}

    /**
     * <p>The query string used in this query.</p>
     */
    inline QueryInfo& WithQueryString(Aws::String&& value) { SetQueryString(std::move(value)); return *this;}

    /**
     * <p>The query string used in this query.</p>
     */
    inline QueryInfo& WithQueryString(const char* value) { SetQueryString(value); return *this;}


    /**
     * <p>The status of this query. Possible values are <code>Cancelled</code>,
     * <code>Complete</code>, <code>Failed</code>, <code>Running</code>,
     * <code>Scheduled</code>, and <code>Unknown</code>.</p>
     */
    inline const QueryStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of this query. Possible values are <code>Cancelled</code>,
     * <code>Complete</code>, <code>Failed</code>, <code>Running</code>,
     * <code>Scheduled</code>, and <code>Unknown</code>.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of this query. Possible values are <code>Cancelled</code>,
     * <code>Complete</code>, <code>Failed</code>, <code>Running</code>,
     * <code>Scheduled</code>, and <code>Unknown</code>.</p>
     */
    inline void SetStatus(const QueryStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of this query. Possible values are <code>Cancelled</code>,
     * <code>Complete</code>, <code>Failed</code>, <code>Running</code>,
     * <code>Scheduled</code>, and <code>Unknown</code>.</p>
     */
    inline void SetStatus(QueryStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of this query. Possible values are <code>Cancelled</code>,
     * <code>Complete</code>, <code>Failed</code>, <code>Running</code>,
     * <code>Scheduled</code>, and <code>Unknown</code>.</p>
     */
    inline QueryInfo& WithStatus(const QueryStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of this query. Possible values are <code>Cancelled</code>,
     * <code>Complete</code>, <code>Failed</code>, <code>Running</code>,
     * <code>Scheduled</code>, and <code>Unknown</code>.</p>
     */
    inline QueryInfo& WithStatus(QueryStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The date and time that this query was created.</p>
     */
    inline long long GetCreateTime() const{ return m_createTime; }

    /**
     * <p>The date and time that this query was created.</p>
     */
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }

    /**
     * <p>The date and time that this query was created.</p>
     */
    inline void SetCreateTime(long long value) { m_createTimeHasBeenSet = true; m_createTime = value; }

    /**
     * <p>The date and time that this query was created.</p>
     */
    inline QueryInfo& WithCreateTime(long long value) { SetCreateTime(value); return *this;}


    /**
     * <p>The name of the log group scanned by this query.</p>
     */
    inline const Aws::String& GetLogGroupName() const{ return m_logGroupName; }

    /**
     * <p>The name of the log group scanned by this query.</p>
     */
    inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }

    /**
     * <p>The name of the log group scanned by this query.</p>
     */
    inline void SetLogGroupName(const Aws::String& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = value; }

    /**
     * <p>The name of the log group scanned by this query.</p>
     */
    inline void SetLogGroupName(Aws::String&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::move(value); }

    /**
     * <p>The name of the log group scanned by this query.</p>
     */
    inline void SetLogGroupName(const char* value) { m_logGroupNameHasBeenSet = true; m_logGroupName.assign(value); }

    /**
     * <p>The name of the log group scanned by this query.</p>
     */
    inline QueryInfo& WithLogGroupName(const Aws::String& value) { SetLogGroupName(value); return *this;}

    /**
     * <p>The name of the log group scanned by this query.</p>
     */
    inline QueryInfo& WithLogGroupName(Aws::String&& value) { SetLogGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the log group scanned by this query.</p>
     */
    inline QueryInfo& WithLogGroupName(const char* value) { SetLogGroupName(value); return *this;}

  private:

    Aws::String m_queryId;
    bool m_queryIdHasBeenSet = false;

    Aws::String m_queryString;
    bool m_queryStringHasBeenSet = false;

    QueryStatus m_status;
    bool m_statusHasBeenSet = false;

    long long m_createTime;
    bool m_createTimeHasBeenSet = false;

    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
