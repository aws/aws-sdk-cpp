/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/QueryInfo.h>
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
  class DescribeQueriesResult
  {
  public:
    AWS_CLOUDWATCHLOGS_API DescribeQueriesResult();
    AWS_CLOUDWATCHLOGS_API DescribeQueriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API DescribeQueriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of queries that match the request.</p>
     */
    inline const Aws::Vector<QueryInfo>& GetQueries() const{ return m_queries; }

    /**
     * <p>The list of queries that match the request.</p>
     */
    inline void SetQueries(const Aws::Vector<QueryInfo>& value) { m_queries = value; }

    /**
     * <p>The list of queries that match the request.</p>
     */
    inline void SetQueries(Aws::Vector<QueryInfo>&& value) { m_queries = std::move(value); }

    /**
     * <p>The list of queries that match the request.</p>
     */
    inline DescribeQueriesResult& WithQueries(const Aws::Vector<QueryInfo>& value) { SetQueries(value); return *this;}

    /**
     * <p>The list of queries that match the request.</p>
     */
    inline DescribeQueriesResult& WithQueries(Aws::Vector<QueryInfo>&& value) { SetQueries(std::move(value)); return *this;}

    /**
     * <p>The list of queries that match the request.</p>
     */
    inline DescribeQueriesResult& AddQueries(const QueryInfo& value) { m_queries.push_back(value); return *this; }

    /**
     * <p>The list of queries that match the request.</p>
     */
    inline DescribeQueriesResult& AddQueries(QueryInfo&& value) { m_queries.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline DescribeQueriesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline DescribeQueriesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline DescribeQueriesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeQueriesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeQueriesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeQueriesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<QueryInfo> m_queries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
