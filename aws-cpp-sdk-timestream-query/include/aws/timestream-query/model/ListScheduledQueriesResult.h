/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/timestream-query/model/ScheduledQuery.h>
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
namespace TimestreamQuery
{
namespace Model
{
  class ListScheduledQueriesResult
  {
  public:
    AWS_TIMESTREAMQUERY_API ListScheduledQueriesResult();
    AWS_TIMESTREAMQUERY_API ListScheduledQueriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TIMESTREAMQUERY_API ListScheduledQueriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of scheduled queries.</p>
     */
    inline const Aws::Vector<ScheduledQuery>& GetScheduledQueries() const{ return m_scheduledQueries; }

    /**
     * <p>A list of scheduled queries.</p>
     */
    inline void SetScheduledQueries(const Aws::Vector<ScheduledQuery>& value) { m_scheduledQueries = value; }

    /**
     * <p>A list of scheduled queries.</p>
     */
    inline void SetScheduledQueries(Aws::Vector<ScheduledQuery>&& value) { m_scheduledQueries = std::move(value); }

    /**
     * <p>A list of scheduled queries.</p>
     */
    inline ListScheduledQueriesResult& WithScheduledQueries(const Aws::Vector<ScheduledQuery>& value) { SetScheduledQueries(value); return *this;}

    /**
     * <p>A list of scheduled queries.</p>
     */
    inline ListScheduledQueriesResult& WithScheduledQueries(Aws::Vector<ScheduledQuery>&& value) { SetScheduledQueries(std::move(value)); return *this;}

    /**
     * <p>A list of scheduled queries.</p>
     */
    inline ListScheduledQueriesResult& AddScheduledQueries(const ScheduledQuery& value) { m_scheduledQueries.push_back(value); return *this; }

    /**
     * <p>A list of scheduled queries.</p>
     */
    inline ListScheduledQueriesResult& AddScheduledQueries(ScheduledQuery&& value) { m_scheduledQueries.push_back(std::move(value)); return *this; }


    /**
     * <p>A token to specify where to start paginating. This is the NextToken from a
     * previously truncated response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token to specify where to start paginating. This is the NextToken from a
     * previously truncated response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token to specify where to start paginating. This is the NextToken from a
     * previously truncated response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token to specify where to start paginating. This is the NextToken from a
     * previously truncated response.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token to specify where to start paginating. This is the NextToken from a
     * previously truncated response.</p>
     */
    inline ListScheduledQueriesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token to specify where to start paginating. This is the NextToken from a
     * previously truncated response.</p>
     */
    inline ListScheduledQueriesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token to specify where to start paginating. This is the NextToken from a
     * previously truncated response.</p>
     */
    inline ListScheduledQueriesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ScheduledQuery> m_scheduledQueries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
