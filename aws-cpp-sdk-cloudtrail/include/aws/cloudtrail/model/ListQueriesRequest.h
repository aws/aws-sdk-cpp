/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/cloudtrail/CloudTrailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cloudtrail/model/QueryStatus.h>
#include <utility>

namespace Aws
{
namespace CloudTrail
{
namespace Model
{

  /**
   */
  class ListQueriesRequest : public CloudTrailRequest
  {
  public:
    AWS_CLOUDTRAIL_API ListQueriesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListQueries"; }

    AWS_CLOUDTRAIL_API Aws::String SerializePayload() const override;

    AWS_CLOUDTRAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN (or the ID suffix of the ARN) of an event data store on which queries
     * were run.</p>
     */
    inline const Aws::String& GetEventDataStore() const{ return m_eventDataStore; }

    /**
     * <p>The ARN (or the ID suffix of the ARN) of an event data store on which queries
     * were run.</p>
     */
    inline bool EventDataStoreHasBeenSet() const { return m_eventDataStoreHasBeenSet; }

    /**
     * <p>The ARN (or the ID suffix of the ARN) of an event data store on which queries
     * were run.</p>
     */
    inline void SetEventDataStore(const Aws::String& value) { m_eventDataStoreHasBeenSet = true; m_eventDataStore = value; }

    /**
     * <p>The ARN (or the ID suffix of the ARN) of an event data store on which queries
     * were run.</p>
     */
    inline void SetEventDataStore(Aws::String&& value) { m_eventDataStoreHasBeenSet = true; m_eventDataStore = std::move(value); }

    /**
     * <p>The ARN (or the ID suffix of the ARN) of an event data store on which queries
     * were run.</p>
     */
    inline void SetEventDataStore(const char* value) { m_eventDataStoreHasBeenSet = true; m_eventDataStore.assign(value); }

    /**
     * <p>The ARN (or the ID suffix of the ARN) of an event data store on which queries
     * were run.</p>
     */
    inline ListQueriesRequest& WithEventDataStore(const Aws::String& value) { SetEventDataStore(value); return *this;}

    /**
     * <p>The ARN (or the ID suffix of the ARN) of an event data store on which queries
     * were run.</p>
     */
    inline ListQueriesRequest& WithEventDataStore(Aws::String&& value) { SetEventDataStore(std::move(value)); return *this;}

    /**
     * <p>The ARN (or the ID suffix of the ARN) of an event data store on which queries
     * were run.</p>
     */
    inline ListQueriesRequest& WithEventDataStore(const char* value) { SetEventDataStore(value); return *this;}


    /**
     * <p>A token you can use to get the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token you can use to get the next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token you can use to get the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token you can use to get the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token you can use to get the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token you can use to get the next page of results.</p>
     */
    inline ListQueriesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token you can use to get the next page of results.</p>
     */
    inline ListQueriesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token you can use to get the next page of results.</p>
     */
    inline ListQueriesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of queries to show on a page.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of queries to show on a page.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of queries to show on a page.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of queries to show on a page.</p>
     */
    inline ListQueriesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Use with <code>EndTime</code> to bound a <code>ListQueries</code> request,
     * and limit its results to only those queries run within a specified time
     * period.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>Use with <code>EndTime</code> to bound a <code>ListQueries</code> request,
     * and limit its results to only those queries run within a specified time
     * period.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>Use with <code>EndTime</code> to bound a <code>ListQueries</code> request,
     * and limit its results to only those queries run within a specified time
     * period.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>Use with <code>EndTime</code> to bound a <code>ListQueries</code> request,
     * and limit its results to only those queries run within a specified time
     * period.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>Use with <code>EndTime</code> to bound a <code>ListQueries</code> request,
     * and limit its results to only those queries run within a specified time
     * period.</p>
     */
    inline ListQueriesRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>Use with <code>EndTime</code> to bound a <code>ListQueries</code> request,
     * and limit its results to only those queries run within a specified time
     * period.</p>
     */
    inline ListQueriesRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>Use with <code>StartTime</code> to bound a <code>ListQueries</code> request,
     * and limit its results to only those queries run within a specified time
     * period.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>Use with <code>StartTime</code> to bound a <code>ListQueries</code> request,
     * and limit its results to only those queries run within a specified time
     * period.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>Use with <code>StartTime</code> to bound a <code>ListQueries</code> request,
     * and limit its results to only those queries run within a specified time
     * period.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>Use with <code>StartTime</code> to bound a <code>ListQueries</code> request,
     * and limit its results to only those queries run within a specified time
     * period.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>Use with <code>StartTime</code> to bound a <code>ListQueries</code> request,
     * and limit its results to only those queries run within a specified time
     * period.</p>
     */
    inline ListQueriesRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>Use with <code>StartTime</code> to bound a <code>ListQueries</code> request,
     * and limit its results to only those queries run within a specified time
     * period.</p>
     */
    inline ListQueriesRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The status of queries that you want to return in results. Valid values for
     * <code>QueryStatus</code> include <code>QUEUED</code>, <code>RUNNING</code>,
     * <code>FINISHED</code>, <code>FAILED</code>, <code>TIMED_OUT</code>, or
     * <code>CANCELLED</code>.</p>
     */
    inline const QueryStatus& GetQueryStatus() const{ return m_queryStatus; }

    /**
     * <p>The status of queries that you want to return in results. Valid values for
     * <code>QueryStatus</code> include <code>QUEUED</code>, <code>RUNNING</code>,
     * <code>FINISHED</code>, <code>FAILED</code>, <code>TIMED_OUT</code>, or
     * <code>CANCELLED</code>.</p>
     */
    inline bool QueryStatusHasBeenSet() const { return m_queryStatusHasBeenSet; }

    /**
     * <p>The status of queries that you want to return in results. Valid values for
     * <code>QueryStatus</code> include <code>QUEUED</code>, <code>RUNNING</code>,
     * <code>FINISHED</code>, <code>FAILED</code>, <code>TIMED_OUT</code>, or
     * <code>CANCELLED</code>.</p>
     */
    inline void SetQueryStatus(const QueryStatus& value) { m_queryStatusHasBeenSet = true; m_queryStatus = value; }

    /**
     * <p>The status of queries that you want to return in results. Valid values for
     * <code>QueryStatus</code> include <code>QUEUED</code>, <code>RUNNING</code>,
     * <code>FINISHED</code>, <code>FAILED</code>, <code>TIMED_OUT</code>, or
     * <code>CANCELLED</code>.</p>
     */
    inline void SetQueryStatus(QueryStatus&& value) { m_queryStatusHasBeenSet = true; m_queryStatus = std::move(value); }

    /**
     * <p>The status of queries that you want to return in results. Valid values for
     * <code>QueryStatus</code> include <code>QUEUED</code>, <code>RUNNING</code>,
     * <code>FINISHED</code>, <code>FAILED</code>, <code>TIMED_OUT</code>, or
     * <code>CANCELLED</code>.</p>
     */
    inline ListQueriesRequest& WithQueryStatus(const QueryStatus& value) { SetQueryStatus(value); return *this;}

    /**
     * <p>The status of queries that you want to return in results. Valid values for
     * <code>QueryStatus</code> include <code>QUEUED</code>, <code>RUNNING</code>,
     * <code>FINISHED</code>, <code>FAILED</code>, <code>TIMED_OUT</code>, or
     * <code>CANCELLED</code>.</p>
     */
    inline ListQueriesRequest& WithQueryStatus(QueryStatus&& value) { SetQueryStatus(std::move(value)); return *this;}

  private:

    Aws::String m_eventDataStore;
    bool m_eventDataStoreHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    QueryStatus m_queryStatus;
    bool m_queryStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
