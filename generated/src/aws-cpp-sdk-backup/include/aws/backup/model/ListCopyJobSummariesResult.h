/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backup/model/CopyJobSummary.h>
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
namespace Backup
{
namespace Model
{
  class ListCopyJobSummariesResult
  {
  public:
    AWS_BACKUP_API ListCopyJobSummariesResult();
    AWS_BACKUP_API ListCopyJobSummariesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API ListCopyJobSummariesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>This return shows a summary that contains Region, Account, State,
     * ResourceType, MessageCategory, StartTime, EndTime, and Count of included
     * jobs.</p>
     */
    inline const Aws::Vector<CopyJobSummary>& GetCopyJobSummaries() const{ return m_copyJobSummaries; }

    /**
     * <p>This return shows a summary that contains Region, Account, State,
     * ResourceType, MessageCategory, StartTime, EndTime, and Count of included
     * jobs.</p>
     */
    inline void SetCopyJobSummaries(const Aws::Vector<CopyJobSummary>& value) { m_copyJobSummaries = value; }

    /**
     * <p>This return shows a summary that contains Region, Account, State,
     * ResourceType, MessageCategory, StartTime, EndTime, and Count of included
     * jobs.</p>
     */
    inline void SetCopyJobSummaries(Aws::Vector<CopyJobSummary>&& value) { m_copyJobSummaries = std::move(value); }

    /**
     * <p>This return shows a summary that contains Region, Account, State,
     * ResourceType, MessageCategory, StartTime, EndTime, and Count of included
     * jobs.</p>
     */
    inline ListCopyJobSummariesResult& WithCopyJobSummaries(const Aws::Vector<CopyJobSummary>& value) { SetCopyJobSummaries(value); return *this;}

    /**
     * <p>This return shows a summary that contains Region, Account, State,
     * ResourceType, MessageCategory, StartTime, EndTime, and Count of included
     * jobs.</p>
     */
    inline ListCopyJobSummariesResult& WithCopyJobSummaries(Aws::Vector<CopyJobSummary>&& value) { SetCopyJobSummaries(std::move(value)); return *this;}

    /**
     * <p>This return shows a summary that contains Region, Account, State,
     * ResourceType, MessageCategory, StartTime, EndTime, and Count of included
     * jobs.</p>
     */
    inline ListCopyJobSummariesResult& AddCopyJobSummaries(const CopyJobSummary& value) { m_copyJobSummaries.push_back(value); return *this; }

    /**
     * <p>This return shows a summary that contains Region, Account, State,
     * ResourceType, MessageCategory, StartTime, EndTime, and Count of included
     * jobs.</p>
     */
    inline ListCopyJobSummariesResult& AddCopyJobSummaries(CopyJobSummary&& value) { m_copyJobSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>This is the period that sets the boundaries for returned results.</p> <ul>
     * <li> <p> <code>ONE_DAY</code> for daily job count for the prior 14 days.</p>
     * </li> <li> <p> <code>SEVEN_DAYS</code> for the aggregated job count for the
     * prior 7 days.</p> </li> <li> <p> <code>FOURTEEN_DAYS</code> for aggregated job
     * count for prior 14 days.</p> </li> </ul>
     */
    inline const Aws::String& GetAggregationPeriod() const{ return m_aggregationPeriod; }

    /**
     * <p>This is the period that sets the boundaries for returned results.</p> <ul>
     * <li> <p> <code>ONE_DAY</code> for daily job count for the prior 14 days.</p>
     * </li> <li> <p> <code>SEVEN_DAYS</code> for the aggregated job count for the
     * prior 7 days.</p> </li> <li> <p> <code>FOURTEEN_DAYS</code> for aggregated job
     * count for prior 14 days.</p> </li> </ul>
     */
    inline void SetAggregationPeriod(const Aws::String& value) { m_aggregationPeriod = value; }

    /**
     * <p>This is the period that sets the boundaries for returned results.</p> <ul>
     * <li> <p> <code>ONE_DAY</code> for daily job count for the prior 14 days.</p>
     * </li> <li> <p> <code>SEVEN_DAYS</code> for the aggregated job count for the
     * prior 7 days.</p> </li> <li> <p> <code>FOURTEEN_DAYS</code> for aggregated job
     * count for prior 14 days.</p> </li> </ul>
     */
    inline void SetAggregationPeriod(Aws::String&& value) { m_aggregationPeriod = std::move(value); }

    /**
     * <p>This is the period that sets the boundaries for returned results.</p> <ul>
     * <li> <p> <code>ONE_DAY</code> for daily job count for the prior 14 days.</p>
     * </li> <li> <p> <code>SEVEN_DAYS</code> for the aggregated job count for the
     * prior 7 days.</p> </li> <li> <p> <code>FOURTEEN_DAYS</code> for aggregated job
     * count for prior 14 days.</p> </li> </ul>
     */
    inline void SetAggregationPeriod(const char* value) { m_aggregationPeriod.assign(value); }

    /**
     * <p>This is the period that sets the boundaries for returned results.</p> <ul>
     * <li> <p> <code>ONE_DAY</code> for daily job count for the prior 14 days.</p>
     * </li> <li> <p> <code>SEVEN_DAYS</code> for the aggregated job count for the
     * prior 7 days.</p> </li> <li> <p> <code>FOURTEEN_DAYS</code> for aggregated job
     * count for prior 14 days.</p> </li> </ul>
     */
    inline ListCopyJobSummariesResult& WithAggregationPeriod(const Aws::String& value) { SetAggregationPeriod(value); return *this;}

    /**
     * <p>This is the period that sets the boundaries for returned results.</p> <ul>
     * <li> <p> <code>ONE_DAY</code> for daily job count for the prior 14 days.</p>
     * </li> <li> <p> <code>SEVEN_DAYS</code> for the aggregated job count for the
     * prior 7 days.</p> </li> <li> <p> <code>FOURTEEN_DAYS</code> for aggregated job
     * count for prior 14 days.</p> </li> </ul>
     */
    inline ListCopyJobSummariesResult& WithAggregationPeriod(Aws::String&& value) { SetAggregationPeriod(std::move(value)); return *this;}

    /**
     * <p>This is the period that sets the boundaries for returned results.</p> <ul>
     * <li> <p> <code>ONE_DAY</code> for daily job count for the prior 14 days.</p>
     * </li> <li> <p> <code>SEVEN_DAYS</code> for the aggregated job count for the
     * prior 7 days.</p> </li> <li> <p> <code>FOURTEEN_DAYS</code> for aggregated job
     * count for prior 14 days.</p> </li> </ul>
     */
    inline ListCopyJobSummariesResult& WithAggregationPeriod(const char* value) { SetAggregationPeriod(value); return *this;}


    /**
     * <p>The next item following a partial list of returned resources. For example, if
     * a request is made to return <code>MaxResults</code> number of resources,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The next item following a partial list of returned resources. For example, if
     * a request is made to return <code>MaxResults</code> number of resources,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The next item following a partial list of returned resources. For example, if
     * a request is made to return <code>MaxResults</code> number of resources,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The next item following a partial list of returned resources. For example, if
     * a request is made to return <code>MaxResults</code> number of resources,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The next item following a partial list of returned resources. For example, if
     * a request is made to return <code>MaxResults</code> number of resources,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline ListCopyJobSummariesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The next item following a partial list of returned resources. For example, if
     * a request is made to return <code>MaxResults</code> number of resources,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline ListCopyJobSummariesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The next item following a partial list of returned resources. For example, if
     * a request is made to return <code>MaxResults</code> number of resources,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline ListCopyJobSummariesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListCopyJobSummariesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListCopyJobSummariesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListCopyJobSummariesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<CopyJobSummary> m_copyJobSummaries;

    Aws::String m_aggregationPeriod;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
