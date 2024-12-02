/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/logs/model/QueryLanguage.h>
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
  class StartQueryRequest : public CloudWatchLogsRequest
  {
  public:
    AWS_CLOUDWATCHLOGS_API StartQueryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartQuery"; }

    AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specify the query language to use for this query. The options are Logs
     * Insights QL, OpenSearch PPL, and OpenSearch SQL. For more information about the
     * query languages that CloudWatch Logs supports, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CWL_AnalyzeLogData_Languages.html">Supported
     * query languages</a>.</p>
     */
    inline const QueryLanguage& GetQueryLanguage() const{ return m_queryLanguage; }
    inline bool QueryLanguageHasBeenSet() const { return m_queryLanguageHasBeenSet; }
    inline void SetQueryLanguage(const QueryLanguage& value) { m_queryLanguageHasBeenSet = true; m_queryLanguage = value; }
    inline void SetQueryLanguage(QueryLanguage&& value) { m_queryLanguageHasBeenSet = true; m_queryLanguage = std::move(value); }
    inline StartQueryRequest& WithQueryLanguage(const QueryLanguage& value) { SetQueryLanguage(value); return *this;}
    inline StartQueryRequest& WithQueryLanguage(QueryLanguage&& value) { SetQueryLanguage(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The log group on which to perform the query.</p>  <p>A
     * <code>StartQuery</code> operation must include exactly one of the following
     * parameters: <code>logGroupName</code>, <code>logGroupNames</code>, or
     * <code>logGroupIdentifiers</code>. The exception is queries using the OpenSearch
     * Service SQL query language, where you specify the log group names inside the
     * <code>querystring</code> instead of here.</p> 
     */
    inline const Aws::String& GetLogGroupName() const{ return m_logGroupName; }
    inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }
    inline void SetLogGroupName(const Aws::String& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = value; }
    inline void SetLogGroupName(Aws::String&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::move(value); }
    inline void SetLogGroupName(const char* value) { m_logGroupNameHasBeenSet = true; m_logGroupName.assign(value); }
    inline StartQueryRequest& WithLogGroupName(const Aws::String& value) { SetLogGroupName(value); return *this;}
    inline StartQueryRequest& WithLogGroupName(Aws::String&& value) { SetLogGroupName(std::move(value)); return *this;}
    inline StartQueryRequest& WithLogGroupName(const char* value) { SetLogGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of log groups to be queried. You can include up to 50 log
     * groups.</p>  <p>A <code>StartQuery</code> operation must include exactly
     * one of the following parameters: <code>logGroupName</code>,
     * <code>logGroupNames</code>, or <code>logGroupIdentifiers</code>. The exception
     * is queries using the OpenSearch Service SQL query language, where you specify
     * the log group names inside the <code>querystring</code> instead of here.</p>
     * 
     */
    inline const Aws::Vector<Aws::String>& GetLogGroupNames() const{ return m_logGroupNames; }
    inline bool LogGroupNamesHasBeenSet() const { return m_logGroupNamesHasBeenSet; }
    inline void SetLogGroupNames(const Aws::Vector<Aws::String>& value) { m_logGroupNamesHasBeenSet = true; m_logGroupNames = value; }
    inline void SetLogGroupNames(Aws::Vector<Aws::String>&& value) { m_logGroupNamesHasBeenSet = true; m_logGroupNames = std::move(value); }
    inline StartQueryRequest& WithLogGroupNames(const Aws::Vector<Aws::String>& value) { SetLogGroupNames(value); return *this;}
    inline StartQueryRequest& WithLogGroupNames(Aws::Vector<Aws::String>&& value) { SetLogGroupNames(std::move(value)); return *this;}
    inline StartQueryRequest& AddLogGroupNames(const Aws::String& value) { m_logGroupNamesHasBeenSet = true; m_logGroupNames.push_back(value); return *this; }
    inline StartQueryRequest& AddLogGroupNames(Aws::String&& value) { m_logGroupNamesHasBeenSet = true; m_logGroupNames.push_back(std::move(value)); return *this; }
    inline StartQueryRequest& AddLogGroupNames(const char* value) { m_logGroupNamesHasBeenSet = true; m_logGroupNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of log groups to query. You can include up to 50 log groups.</p>
     * <p>You can specify them by the log group name or ARN. If a log group that you're
     * querying is in a source account and you're using a monitoring account, you must
     * specify the ARN of the log group here. The query definition must also be defined
     * in the monitoring account.</p> <p>If you specify an ARN, use the format
     * arn:aws:logs:<i>region</i>:<i>account-id</i>:log-group:<i>log_group_name</i>
     * Don't include an * at the end.</p> <p>A <code>StartQuery</code> operation must
     * include exactly one of the following parameters: <code>logGroupName</code>,
     * <code>logGroupNames</code>, or <code>logGroupIdentifiers</code>. The exception
     * is queries using the OpenSearch Service SQL query language, where you specify
     * the log group names inside the <code>querystring</code> instead of here. </p>
     */
    inline const Aws::Vector<Aws::String>& GetLogGroupIdentifiers() const{ return m_logGroupIdentifiers; }
    inline bool LogGroupIdentifiersHasBeenSet() const { return m_logGroupIdentifiersHasBeenSet; }
    inline void SetLogGroupIdentifiers(const Aws::Vector<Aws::String>& value) { m_logGroupIdentifiersHasBeenSet = true; m_logGroupIdentifiers = value; }
    inline void SetLogGroupIdentifiers(Aws::Vector<Aws::String>&& value) { m_logGroupIdentifiersHasBeenSet = true; m_logGroupIdentifiers = std::move(value); }
    inline StartQueryRequest& WithLogGroupIdentifiers(const Aws::Vector<Aws::String>& value) { SetLogGroupIdentifiers(value); return *this;}
    inline StartQueryRequest& WithLogGroupIdentifiers(Aws::Vector<Aws::String>&& value) { SetLogGroupIdentifiers(std::move(value)); return *this;}
    inline StartQueryRequest& AddLogGroupIdentifiers(const Aws::String& value) { m_logGroupIdentifiersHasBeenSet = true; m_logGroupIdentifiers.push_back(value); return *this; }
    inline StartQueryRequest& AddLogGroupIdentifiers(Aws::String&& value) { m_logGroupIdentifiersHasBeenSet = true; m_logGroupIdentifiers.push_back(std::move(value)); return *this; }
    inline StartQueryRequest& AddLogGroupIdentifiers(const char* value) { m_logGroupIdentifiersHasBeenSet = true; m_logGroupIdentifiers.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The beginning of the time range to query. The range is inclusive, so the
     * specified start time is included in the query. Specified as epoch time, the
     * number of seconds since <code>January 1, 1970, 00:00:00 UTC</code>.</p>
     */
    inline long long GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(long long value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline StartQueryRequest& WithStartTime(long long value) { SetStartTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end of the time range to query. The range is inclusive, so the specified
     * end time is included in the query. Specified as epoch time, the number of
     * seconds since <code>January 1, 1970, 00:00:00 UTC</code>.</p>
     */
    inline long long GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(long long value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline StartQueryRequest& WithEndTime(long long value) { SetEndTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The query string to use. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CWL_QuerySyntax.html">CloudWatch
     * Logs Insights Query Syntax</a>.</p>
     */
    inline const Aws::String& GetQueryString() const{ return m_queryString; }
    inline bool QueryStringHasBeenSet() const { return m_queryStringHasBeenSet; }
    inline void SetQueryString(const Aws::String& value) { m_queryStringHasBeenSet = true; m_queryString = value; }
    inline void SetQueryString(Aws::String&& value) { m_queryStringHasBeenSet = true; m_queryString = std::move(value); }
    inline void SetQueryString(const char* value) { m_queryStringHasBeenSet = true; m_queryString.assign(value); }
    inline StartQueryRequest& WithQueryString(const Aws::String& value) { SetQueryString(value); return *this;}
    inline StartQueryRequest& WithQueryString(Aws::String&& value) { SetQueryString(std::move(value)); return *this;}
    inline StartQueryRequest& WithQueryString(const char* value) { SetQueryString(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of log events to return in the query. If the query string
     * uses the <code>fields</code> command, only the specified fields and their values
     * are returned. The default is 10,000.</p>
     */
    inline int GetLimit() const{ return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline StartQueryRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}
  private:

    QueryLanguage m_queryLanguage;
    bool m_queryLanguageHasBeenSet = false;

    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_logGroupNames;
    bool m_logGroupNamesHasBeenSet = false;

    Aws::Vector<Aws::String> m_logGroupIdentifiers;
    bool m_logGroupIdentifiersHasBeenSet = false;

    long long m_startTime;
    bool m_startTimeHasBeenSet = false;

    long long m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::String m_queryString;
    bool m_queryStringHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
