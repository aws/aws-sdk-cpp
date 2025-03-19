/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/cloudtrail/model/QueryStatus.h>
#include <aws/cloudtrail/model/QueryStatistics.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace CloudTrail
{
namespace Model
{
  class GetQueryResultsResult
  {
  public:
    AWS_CLOUDTRAIL_API GetQueryResultsResult() = default;
    AWS_CLOUDTRAIL_API GetQueryResultsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDTRAIL_API GetQueryResultsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The status of the query. Values include <code>QUEUED</code>,
     * <code>RUNNING</code>, <code>FINISHED</code>, <code>FAILED</code>,
     * <code>TIMED_OUT</code>, or <code>CANCELLED</code>.</p>
     */
    inline QueryStatus GetQueryStatus() const { return m_queryStatus; }
    inline void SetQueryStatus(QueryStatus value) { m_queryStatusHasBeenSet = true; m_queryStatus = value; }
    inline GetQueryResultsResult& WithQueryStatus(QueryStatus value) { SetQueryStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Shows the count of query results.</p>
     */
    inline const QueryStatistics& GetQueryStatistics() const { return m_queryStatistics; }
    template<typename QueryStatisticsT = QueryStatistics>
    void SetQueryStatistics(QueryStatisticsT&& value) { m_queryStatisticsHasBeenSet = true; m_queryStatistics = std::forward<QueryStatisticsT>(value); }
    template<typename QueryStatisticsT = QueryStatistics>
    GetQueryResultsResult& WithQueryStatistics(QueryStatisticsT&& value) { SetQueryStatistics(std::forward<QueryStatisticsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the individual event results of the query.</p>
     */
    inline const Aws::Vector<Aws::Vector<Aws::Map<Aws::String, Aws::String>>>& GetQueryResultRows() const { return m_queryResultRows; }
    template<typename QueryResultRowsT = Aws::Vector<Aws::Vector<Aws::Map<Aws::String, Aws::String>>>>
    void SetQueryResultRows(QueryResultRowsT&& value) { m_queryResultRowsHasBeenSet = true; m_queryResultRows = std::forward<QueryResultRowsT>(value); }
    template<typename QueryResultRowsT = Aws::Vector<Aws::Vector<Aws::Map<Aws::String, Aws::String>>>>
    GetQueryResultsResult& WithQueryResultRows(QueryResultRowsT&& value) { SetQueryResultRows(std::forward<QueryResultRowsT>(value)); return *this;}
    template<typename QueryResultRowsT = Aws::Vector<Aws::Map<Aws::String, Aws::String>>>
    GetQueryResultsResult& AddQueryResultRows(QueryResultRowsT&& value) { m_queryResultRowsHasBeenSet = true; m_queryResultRows.emplace_back(std::forward<QueryResultRowsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token you can use to get the next page of query results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetQueryResultsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message returned if a query failed.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    GetQueryResultsResult& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetQueryResultsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    QueryStatus m_queryStatus{QueryStatus::NOT_SET};
    bool m_queryStatusHasBeenSet = false;

    QueryStatistics m_queryStatistics;
    bool m_queryStatisticsHasBeenSet = false;

    Aws::Vector<Aws::Vector<Aws::Map<Aws::String, Aws::String>>> m_queryResultRows;
    bool m_queryResultRowsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
