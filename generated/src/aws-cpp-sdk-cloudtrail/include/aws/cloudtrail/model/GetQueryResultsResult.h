﻿/**
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
    AWS_CLOUDTRAIL_API GetQueryResultsResult();
    AWS_CLOUDTRAIL_API GetQueryResultsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDTRAIL_API GetQueryResultsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The status of the query. Values include <code>QUEUED</code>,
     * <code>RUNNING</code>, <code>FINISHED</code>, <code>FAILED</code>,
     * <code>TIMED_OUT</code>, or <code>CANCELLED</code>.</p>
     */
    inline const QueryStatus& GetQueryStatus() const{ return m_queryStatus; }
    inline void SetQueryStatus(const QueryStatus& value) { m_queryStatus = value; }
    inline void SetQueryStatus(QueryStatus&& value) { m_queryStatus = std::move(value); }
    inline GetQueryResultsResult& WithQueryStatus(const QueryStatus& value) { SetQueryStatus(value); return *this;}
    inline GetQueryResultsResult& WithQueryStatus(QueryStatus&& value) { SetQueryStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Shows the count of query results.</p>
     */
    inline const QueryStatistics& GetQueryStatistics() const{ return m_queryStatistics; }
    inline void SetQueryStatistics(const QueryStatistics& value) { m_queryStatistics = value; }
    inline void SetQueryStatistics(QueryStatistics&& value) { m_queryStatistics = std::move(value); }
    inline GetQueryResultsResult& WithQueryStatistics(const QueryStatistics& value) { SetQueryStatistics(value); return *this;}
    inline GetQueryResultsResult& WithQueryStatistics(QueryStatistics&& value) { SetQueryStatistics(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the individual event results of the query.</p>
     */
    inline const Aws::Vector<Aws::Vector<Aws::Map<Aws::String, Aws::String>>>& GetQueryResultRows() const{ return m_queryResultRows; }
    inline void SetQueryResultRows(const Aws::Vector<Aws::Vector<Aws::Map<Aws::String, Aws::String>>>& value) { m_queryResultRows = value; }
    inline void SetQueryResultRows(Aws::Vector<Aws::Vector<Aws::Map<Aws::String, Aws::String>>>&& value) { m_queryResultRows = std::move(value); }
    inline GetQueryResultsResult& WithQueryResultRows(const Aws::Vector<Aws::Vector<Aws::Map<Aws::String, Aws::String>>>& value) { SetQueryResultRows(value); return *this;}
    inline GetQueryResultsResult& WithQueryResultRows(Aws::Vector<Aws::Vector<Aws::Map<Aws::String, Aws::String>>>&& value) { SetQueryResultRows(std::move(value)); return *this;}
    inline GetQueryResultsResult& AddQueryResultRows(const Aws::Vector<Aws::Map<Aws::String, Aws::String>>& value) { m_queryResultRows.push_back(value); return *this; }
    inline GetQueryResultsResult& AddQueryResultRows(Aws::Vector<Aws::Map<Aws::String, Aws::String>>&& value) { m_queryResultRows.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token you can use to get the next page of query results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetQueryResultsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetQueryResultsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetQueryResultsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message returned if a query failed.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessage = value; }
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessage = std::move(value); }
    inline void SetErrorMessage(const char* value) { m_errorMessage.assign(value); }
    inline GetQueryResultsResult& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}
    inline GetQueryResultsResult& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}
    inline GetQueryResultsResult& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}
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

    QueryStatus m_queryStatus;

    QueryStatistics m_queryStatistics;

    Aws::Vector<Aws::Vector<Aws::Map<Aws::String, Aws::String>>> m_queryResultRows;

    Aws::String m_nextToken;

    Aws::String m_errorMessage;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
