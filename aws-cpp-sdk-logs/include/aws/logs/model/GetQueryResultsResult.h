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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/logs/model/QueryStatistics.h>
#include <aws/logs/model/QueryStatus.h>
#include <aws/logs/model/ResultField.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CloudWatchLogs
{
namespace Model
{
  class AWS_CLOUDWATCHLOGS_API GetQueryResultsResult
  {
  public:
    GetQueryResultsResult();
    GetQueryResultsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetQueryResultsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The log events that matched the query criteria during the most recent time it
     * ran.</p> <p>The <code>results</code> value is an array of arrays. Each log event
     * is one object in the top-level array. Each of these log event objects is an
     * array of <code>field</code>/<code>value</code> pairs.</p>
     */
    inline const Aws::Vector<Aws::Vector<ResultField>>& GetResults() const{ return m_results; }

    /**
     * <p>The log events that matched the query criteria during the most recent time it
     * ran.</p> <p>The <code>results</code> value is an array of arrays. Each log event
     * is one object in the top-level array. Each of these log event objects is an
     * array of <code>field</code>/<code>value</code> pairs.</p>
     */
    inline void SetResults(const Aws::Vector<Aws::Vector<ResultField>>& value) { m_results = value; }

    /**
     * <p>The log events that matched the query criteria during the most recent time it
     * ran.</p> <p>The <code>results</code> value is an array of arrays. Each log event
     * is one object in the top-level array. Each of these log event objects is an
     * array of <code>field</code>/<code>value</code> pairs.</p>
     */
    inline void SetResults(Aws::Vector<Aws::Vector<ResultField>>&& value) { m_results = std::move(value); }

    /**
     * <p>The log events that matched the query criteria during the most recent time it
     * ran.</p> <p>The <code>results</code> value is an array of arrays. Each log event
     * is one object in the top-level array. Each of these log event objects is an
     * array of <code>field</code>/<code>value</code> pairs.</p>
     */
    inline GetQueryResultsResult& WithResults(const Aws::Vector<Aws::Vector<ResultField>>& value) { SetResults(value); return *this;}

    /**
     * <p>The log events that matched the query criteria during the most recent time it
     * ran.</p> <p>The <code>results</code> value is an array of arrays. Each log event
     * is one object in the top-level array. Each of these log event objects is an
     * array of <code>field</code>/<code>value</code> pairs.</p>
     */
    inline GetQueryResultsResult& WithResults(Aws::Vector<Aws::Vector<ResultField>>&& value) { SetResults(std::move(value)); return *this;}

    /**
     * <p>The log events that matched the query criteria during the most recent time it
     * ran.</p> <p>The <code>results</code> value is an array of arrays. Each log event
     * is one object in the top-level array. Each of these log event objects is an
     * array of <code>field</code>/<code>value</code> pairs.</p>
     */
    inline GetQueryResultsResult& AddResults(const Aws::Vector<ResultField>& value) { m_results.push_back(value); return *this; }

    /**
     * <p>The log events that matched the query criteria during the most recent time it
     * ran.</p> <p>The <code>results</code> value is an array of arrays. Each log event
     * is one object in the top-level array. Each of these log event objects is an
     * array of <code>field</code>/<code>value</code> pairs.</p>
     */
    inline GetQueryResultsResult& AddResults(Aws::Vector<ResultField>&& value) { m_results.push_back(std::move(value)); return *this; }


    /**
     * <p>Includes the number of log events scanned by the query, the number of log
     * events that matched the query criteria, and the total number of bytes in the log
     * events that were scanned.</p>
     */
    inline const QueryStatistics& GetStatistics() const{ return m_statistics; }

    /**
     * <p>Includes the number of log events scanned by the query, the number of log
     * events that matched the query criteria, and the total number of bytes in the log
     * events that were scanned.</p>
     */
    inline void SetStatistics(const QueryStatistics& value) { m_statistics = value; }

    /**
     * <p>Includes the number of log events scanned by the query, the number of log
     * events that matched the query criteria, and the total number of bytes in the log
     * events that were scanned.</p>
     */
    inline void SetStatistics(QueryStatistics&& value) { m_statistics = std::move(value); }

    /**
     * <p>Includes the number of log events scanned by the query, the number of log
     * events that matched the query criteria, and the total number of bytes in the log
     * events that were scanned.</p>
     */
    inline GetQueryResultsResult& WithStatistics(const QueryStatistics& value) { SetStatistics(value); return *this;}

    /**
     * <p>Includes the number of log events scanned by the query, the number of log
     * events that matched the query criteria, and the total number of bytes in the log
     * events that were scanned.</p>
     */
    inline GetQueryResultsResult& WithStatistics(QueryStatistics&& value) { SetStatistics(std::move(value)); return *this;}


    /**
     * <p>The status of the most recent running of the query. Possible values are
     * <code>Cancelled</code>, <code>Complete</code>, <code>Failed</code>,
     * <code>Running</code>, <code>Scheduled</code>, <code>Timeout</code>, and
     * <code>Unknown</code>.</p> <p>Queries time out after 15 minutes of execution. To
     * avoid having your queries time out, reduce the time range being searched, or
     * partition your query into a number of queries.</p>
     */
    inline const QueryStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the most recent running of the query. Possible values are
     * <code>Cancelled</code>, <code>Complete</code>, <code>Failed</code>,
     * <code>Running</code>, <code>Scheduled</code>, <code>Timeout</code>, and
     * <code>Unknown</code>.</p> <p>Queries time out after 15 minutes of execution. To
     * avoid having your queries time out, reduce the time range being searched, or
     * partition your query into a number of queries.</p>
     */
    inline void SetStatus(const QueryStatus& value) { m_status = value; }

    /**
     * <p>The status of the most recent running of the query. Possible values are
     * <code>Cancelled</code>, <code>Complete</code>, <code>Failed</code>,
     * <code>Running</code>, <code>Scheduled</code>, <code>Timeout</code>, and
     * <code>Unknown</code>.</p> <p>Queries time out after 15 minutes of execution. To
     * avoid having your queries time out, reduce the time range being searched, or
     * partition your query into a number of queries.</p>
     */
    inline void SetStatus(QueryStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the most recent running of the query. Possible values are
     * <code>Cancelled</code>, <code>Complete</code>, <code>Failed</code>,
     * <code>Running</code>, <code>Scheduled</code>, <code>Timeout</code>, and
     * <code>Unknown</code>.</p> <p>Queries time out after 15 minutes of execution. To
     * avoid having your queries time out, reduce the time range being searched, or
     * partition your query into a number of queries.</p>
     */
    inline GetQueryResultsResult& WithStatus(const QueryStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the most recent running of the query. Possible values are
     * <code>Cancelled</code>, <code>Complete</code>, <code>Failed</code>,
     * <code>Running</code>, <code>Scheduled</code>, <code>Timeout</code>, and
     * <code>Unknown</code>.</p> <p>Queries time out after 15 minutes of execution. To
     * avoid having your queries time out, reduce the time range being searched, or
     * partition your query into a number of queries.</p>
     */
    inline GetQueryResultsResult& WithStatus(QueryStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::Vector<ResultField>> m_results;

    QueryStatistics m_statistics;

    QueryStatus m_status;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
