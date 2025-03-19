/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/model/QueryLanguage.h>
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
    AWS_CLOUDWATCHLOGS_API QueryInfo() = default;
    AWS_CLOUDWATCHLOGS_API QueryInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API QueryInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The query language used for this query. For more information about the query
     * languages that CloudWatch Logs supports, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CWL_AnalyzeLogData_Languages.html">Supported
     * query languages</a>.</p>
     */
    inline QueryLanguage GetQueryLanguage() const { return m_queryLanguage; }
    inline bool QueryLanguageHasBeenSet() const { return m_queryLanguageHasBeenSet; }
    inline void SetQueryLanguage(QueryLanguage value) { m_queryLanguageHasBeenSet = true; m_queryLanguage = value; }
    inline QueryInfo& WithQueryLanguage(QueryLanguage value) { SetQueryLanguage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID number of this query.</p>
     */
    inline const Aws::String& GetQueryId() const { return m_queryId; }
    inline bool QueryIdHasBeenSet() const { return m_queryIdHasBeenSet; }
    template<typename QueryIdT = Aws::String>
    void SetQueryId(QueryIdT&& value) { m_queryIdHasBeenSet = true; m_queryId = std::forward<QueryIdT>(value); }
    template<typename QueryIdT = Aws::String>
    QueryInfo& WithQueryId(QueryIdT&& value) { SetQueryId(std::forward<QueryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The query string used in this query.</p>
     */
    inline const Aws::String& GetQueryString() const { return m_queryString; }
    inline bool QueryStringHasBeenSet() const { return m_queryStringHasBeenSet; }
    template<typename QueryStringT = Aws::String>
    void SetQueryString(QueryStringT&& value) { m_queryStringHasBeenSet = true; m_queryString = std::forward<QueryStringT>(value); }
    template<typename QueryStringT = Aws::String>
    QueryInfo& WithQueryString(QueryStringT&& value) { SetQueryString(std::forward<QueryStringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of this query. Possible values are <code>Cancelled</code>,
     * <code>Complete</code>, <code>Failed</code>, <code>Running</code>,
     * <code>Scheduled</code>, and <code>Unknown</code>.</p>
     */
    inline QueryStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(QueryStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline QueryInfo& WithStatus(QueryStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that this query was created.</p>
     */
    inline long long GetCreateTime() const { return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    inline void SetCreateTime(long long value) { m_createTimeHasBeenSet = true; m_createTime = value; }
    inline QueryInfo& WithCreateTime(long long value) { SetCreateTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the log group scanned by this query.</p>
     */
    inline const Aws::String& GetLogGroupName() const { return m_logGroupName; }
    inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }
    template<typename LogGroupNameT = Aws::String>
    void SetLogGroupName(LogGroupNameT&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::forward<LogGroupNameT>(value); }
    template<typename LogGroupNameT = Aws::String>
    QueryInfo& WithLogGroupName(LogGroupNameT&& value) { SetLogGroupName(std::forward<LogGroupNameT>(value)); return *this;}
    ///@}
  private:

    QueryLanguage m_queryLanguage{QueryLanguage::NOT_SET};
    bool m_queryLanguageHasBeenSet = false;

    Aws::String m_queryId;
    bool m_queryIdHasBeenSet = false;

    Aws::String m_queryString;
    bool m_queryStringHasBeenSet = false;

    QueryStatus m_status{QueryStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    long long m_createTime{0};
    bool m_createTimeHasBeenSet = false;

    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
