/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/model/QueryLanguage.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/logs/model/QueryStatistics.h>
#include <aws/logs/model/QueryStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetQueryResultsResult
  {
  public:
    AWS_CLOUDWATCHLOGS_API GetQueryResultsResult();
    AWS_CLOUDWATCHLOGS_API GetQueryResultsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API GetQueryResultsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The query language used for this query. For more information about the query
     * languages that CloudWatch Logs supports, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CWL_AnalyzeLogData_Languages.html">Supported
     * query languages</a>.</p>
     */
    inline const QueryLanguage& GetQueryLanguage() const{ return m_queryLanguage; }
    inline void SetQueryLanguage(const QueryLanguage& value) { m_queryLanguage = value; }
    inline void SetQueryLanguage(QueryLanguage&& value) { m_queryLanguage = std::move(value); }
    inline GetQueryResultsResult& WithQueryLanguage(const QueryLanguage& value) { SetQueryLanguage(value); return *this;}
    inline GetQueryResultsResult& WithQueryLanguage(QueryLanguage&& value) { SetQueryLanguage(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The log events that matched the query criteria during the most recent time it
     * ran.</p> <p>The <code>results</code> value is an array of arrays. Each log event
     * is one object in the top-level array. Each of these log event objects is an
     * array of <code>field</code>/<code>value</code> pairs.</p>
     */
    inline const Aws::Vector<Aws::Vector<ResultField>>& GetResults() const{ return m_results; }
    inline void SetResults(const Aws::Vector<Aws::Vector<ResultField>>& value) { m_results = value; }
    inline void SetResults(Aws::Vector<Aws::Vector<ResultField>>&& value) { m_results = std::move(value); }
    inline GetQueryResultsResult& WithResults(const Aws::Vector<Aws::Vector<ResultField>>& value) { SetResults(value); return *this;}
    inline GetQueryResultsResult& WithResults(Aws::Vector<Aws::Vector<ResultField>>&& value) { SetResults(std::move(value)); return *this;}
    inline GetQueryResultsResult& AddResults(const Aws::Vector<ResultField>& value) { m_results.push_back(value); return *this; }
    inline GetQueryResultsResult& AddResults(Aws::Vector<ResultField>&& value) { m_results.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Includes the number of log events scanned by the query, the number of log
     * events that matched the query criteria, and the total number of bytes in the
     * scanned log events. These values reflect the full raw results of the query.</p>
     */
    inline const QueryStatistics& GetStatistics() const{ return m_statistics; }
    inline void SetStatistics(const QueryStatistics& value) { m_statistics = value; }
    inline void SetStatistics(QueryStatistics&& value) { m_statistics = std::move(value); }
    inline GetQueryResultsResult& WithStatistics(const QueryStatistics& value) { SetStatistics(value); return *this;}
    inline GetQueryResultsResult& WithStatistics(QueryStatistics&& value) { SetStatistics(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the most recent running of the query. Possible values are
     * <code>Cancelled</code>, <code>Complete</code>, <code>Failed</code>,
     * <code>Running</code>, <code>Scheduled</code>, <code>Timeout</code>, and
     * <code>Unknown</code>.</p> <p>Queries time out after 60 minutes of runtime. To
     * avoid having your queries time out, reduce the time range being searched or
     * partition your query into a number of queries.</p>
     */
    inline const QueryStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const QueryStatus& value) { m_status = value; }
    inline void SetStatus(QueryStatus&& value) { m_status = std::move(value); }
    inline GetQueryResultsResult& WithStatus(const QueryStatus& value) { SetStatus(value); return *this;}
    inline GetQueryResultsResult& WithStatus(QueryStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you associated an KMS key with the CloudWatch Logs Insights query results
     * in this account, this field displays the ARN of the key that's used to encrypt
     * the query results when <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_StartQuery.html">StartQuery</a>
     * stores them.</p>
     */
    inline const Aws::String& GetEncryptionKey() const{ return m_encryptionKey; }
    inline void SetEncryptionKey(const Aws::String& value) { m_encryptionKey = value; }
    inline void SetEncryptionKey(Aws::String&& value) { m_encryptionKey = std::move(value); }
    inline void SetEncryptionKey(const char* value) { m_encryptionKey.assign(value); }
    inline GetQueryResultsResult& WithEncryptionKey(const Aws::String& value) { SetEncryptionKey(value); return *this;}
    inline GetQueryResultsResult& WithEncryptionKey(Aws::String&& value) { SetEncryptionKey(std::move(value)); return *this;}
    inline GetQueryResultsResult& WithEncryptionKey(const char* value) { SetEncryptionKey(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetQueryResultsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetQueryResultsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetQueryResultsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    QueryLanguage m_queryLanguage;

    Aws::Vector<Aws::Vector<ResultField>> m_results;

    QueryStatistics m_statistics;

    QueryStatus m_status;

    Aws::String m_encryptionKey;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
