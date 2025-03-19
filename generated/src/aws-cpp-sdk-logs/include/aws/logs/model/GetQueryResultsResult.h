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
    AWS_CLOUDWATCHLOGS_API GetQueryResultsResult() = default;
    AWS_CLOUDWATCHLOGS_API GetQueryResultsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API GetQueryResultsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The query language used for this query. For more information about the query
     * languages that CloudWatch Logs supports, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CWL_AnalyzeLogData_Languages.html">Supported
     * query languages</a>.</p>
     */
    inline QueryLanguage GetQueryLanguage() const { return m_queryLanguage; }
    inline void SetQueryLanguage(QueryLanguage value) { m_queryLanguageHasBeenSet = true; m_queryLanguage = value; }
    inline GetQueryResultsResult& WithQueryLanguage(QueryLanguage value) { SetQueryLanguage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The log events that matched the query criteria during the most recent time it
     * ran.</p> <p>The <code>results</code> value is an array of arrays. Each log event
     * is one object in the top-level array. Each of these log event objects is an
     * array of <code>field</code>/<code>value</code> pairs.</p>
     */
    inline const Aws::Vector<Aws::Vector<ResultField>>& GetResults() const { return m_results; }
    template<typename ResultsT = Aws::Vector<Aws::Vector<ResultField>>>
    void SetResults(ResultsT&& value) { m_resultsHasBeenSet = true; m_results = std::forward<ResultsT>(value); }
    template<typename ResultsT = Aws::Vector<Aws::Vector<ResultField>>>
    GetQueryResultsResult& WithResults(ResultsT&& value) { SetResults(std::forward<ResultsT>(value)); return *this;}
    template<typename ResultsT = Aws::Vector<ResultField>>
    GetQueryResultsResult& AddResults(ResultsT&& value) { m_resultsHasBeenSet = true; m_results.emplace_back(std::forward<ResultsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Includes the number of log events scanned by the query, the number of log
     * events that matched the query criteria, and the total number of bytes in the
     * scanned log events. These values reflect the full raw results of the query.</p>
     */
    inline const QueryStatistics& GetStatistics() const { return m_statistics; }
    template<typename StatisticsT = QueryStatistics>
    void SetStatistics(StatisticsT&& value) { m_statisticsHasBeenSet = true; m_statistics = std::forward<StatisticsT>(value); }
    template<typename StatisticsT = QueryStatistics>
    GetQueryResultsResult& WithStatistics(StatisticsT&& value) { SetStatistics(std::forward<StatisticsT>(value)); return *this;}
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
    inline QueryStatus GetStatus() const { return m_status; }
    inline void SetStatus(QueryStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetQueryResultsResult& WithStatus(QueryStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you associated an KMS key with the CloudWatch Logs Insights query results
     * in this account, this field displays the ARN of the key that's used to encrypt
     * the query results when <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_StartQuery.html">StartQuery</a>
     * stores them.</p>
     */
    inline const Aws::String& GetEncryptionKey() const { return m_encryptionKey; }
    template<typename EncryptionKeyT = Aws::String>
    void SetEncryptionKey(EncryptionKeyT&& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = std::forward<EncryptionKeyT>(value); }
    template<typename EncryptionKeyT = Aws::String>
    GetQueryResultsResult& WithEncryptionKey(EncryptionKeyT&& value) { SetEncryptionKey(std::forward<EncryptionKeyT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetQueryResultsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    QueryLanguage m_queryLanguage{QueryLanguage::NOT_SET};
    bool m_queryLanguageHasBeenSet = false;

    Aws::Vector<Aws::Vector<ResultField>> m_results;
    bool m_resultsHasBeenSet = false;

    QueryStatistics m_statistics;
    bool m_statisticsHasBeenSet = false;

    QueryStatus m_status{QueryStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_encryptionKey;
    bool m_encryptionKeyHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
