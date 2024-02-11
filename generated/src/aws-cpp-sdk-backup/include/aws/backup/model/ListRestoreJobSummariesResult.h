/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backup/model/RestoreJobSummary.h>
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
  class ListRestoreJobSummariesResult
  {
  public:
    AWS_BACKUP_API ListRestoreJobSummariesResult();
    AWS_BACKUP_API ListRestoreJobSummariesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API ListRestoreJobSummariesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>This return contains a summary that contains Region, Account, State,
     * ResourceType, MessageCategory, StartTime, EndTime, and Count of included
     * jobs.</p>
     */
    inline const Aws::Vector<RestoreJobSummary>& GetRestoreJobSummaries() const{ return m_restoreJobSummaries; }

    /**
     * <p>This return contains a summary that contains Region, Account, State,
     * ResourceType, MessageCategory, StartTime, EndTime, and Count of included
     * jobs.</p>
     */
    inline void SetRestoreJobSummaries(const Aws::Vector<RestoreJobSummary>& value) { m_restoreJobSummaries = value; }

    /**
     * <p>This return contains a summary that contains Region, Account, State,
     * ResourceType, MessageCategory, StartTime, EndTime, and Count of included
     * jobs.</p>
     */
    inline void SetRestoreJobSummaries(Aws::Vector<RestoreJobSummary>&& value) { m_restoreJobSummaries = std::move(value); }

    /**
     * <p>This return contains a summary that contains Region, Account, State,
     * ResourceType, MessageCategory, StartTime, EndTime, and Count of included
     * jobs.</p>
     */
    inline ListRestoreJobSummariesResult& WithRestoreJobSummaries(const Aws::Vector<RestoreJobSummary>& value) { SetRestoreJobSummaries(value); return *this;}

    /**
     * <p>This return contains a summary that contains Region, Account, State,
     * ResourceType, MessageCategory, StartTime, EndTime, and Count of included
     * jobs.</p>
     */
    inline ListRestoreJobSummariesResult& WithRestoreJobSummaries(Aws::Vector<RestoreJobSummary>&& value) { SetRestoreJobSummaries(std::move(value)); return *this;}

    /**
     * <p>This return contains a summary that contains Region, Account, State,
     * ResourceType, MessageCategory, StartTime, EndTime, and Count of included
     * jobs.</p>
     */
    inline ListRestoreJobSummariesResult& AddRestoreJobSummaries(const RestoreJobSummary& value) { m_restoreJobSummaries.push_back(value); return *this; }

    /**
     * <p>This return contains a summary that contains Region, Account, State,
     * ResourceType, MessageCategory, StartTime, EndTime, and Count of included
     * jobs.</p>
     */
    inline ListRestoreJobSummariesResult& AddRestoreJobSummaries(RestoreJobSummary&& value) { m_restoreJobSummaries.push_back(std::move(value)); return *this; }


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
    inline ListRestoreJobSummariesResult& WithAggregationPeriod(const Aws::String& value) { SetAggregationPeriod(value); return *this;}

    /**
     * <p>This is the period that sets the boundaries for returned results.</p> <ul>
     * <li> <p> <code>ONE_DAY</code> for daily job count for the prior 14 days.</p>
     * </li> <li> <p> <code>SEVEN_DAYS</code> for the aggregated job count for the
     * prior 7 days.</p> </li> <li> <p> <code>FOURTEEN_DAYS</code> for aggregated job
     * count for prior 14 days.</p> </li> </ul>
     */
    inline ListRestoreJobSummariesResult& WithAggregationPeriod(Aws::String&& value) { SetAggregationPeriod(std::move(value)); return *this;}

    /**
     * <p>This is the period that sets the boundaries for returned results.</p> <ul>
     * <li> <p> <code>ONE_DAY</code> for daily job count for the prior 14 days.</p>
     * </li> <li> <p> <code>SEVEN_DAYS</code> for the aggregated job count for the
     * prior 7 days.</p> </li> <li> <p> <code>FOURTEEN_DAYS</code> for aggregated job
     * count for prior 14 days.</p> </li> </ul>
     */
    inline ListRestoreJobSummariesResult& WithAggregationPeriod(const char* value) { SetAggregationPeriod(value); return *this;}


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
    inline ListRestoreJobSummariesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The next item following a partial list of returned resources. For example, if
     * a request is made to return <code>MaxResults</code> number of resources,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline ListRestoreJobSummariesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The next item following a partial list of returned resources. For example, if
     * a request is made to return <code>MaxResults</code> number of resources,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline ListRestoreJobSummariesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListRestoreJobSummariesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListRestoreJobSummariesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListRestoreJobSummariesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<RestoreJobSummary> m_restoreJobSummaries;

    Aws::String m_aggregationPeriod;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
