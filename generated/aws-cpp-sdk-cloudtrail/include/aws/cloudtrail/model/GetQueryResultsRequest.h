/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/cloudtrail/CloudTrailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudTrail
{
namespace Model
{

  /**
   */
  class AWS_CLOUDTRAIL_API GetQueryResultsRequest : public CloudTrailRequest
  {
  public:
    GetQueryResultsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetQueryResults"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN (or ID suffix of the ARN) of the event data store against which the
     * query was run.</p>
     */
    inline const Aws::String& GetEventDataStore() const{ return m_eventDataStore; }

    /**
     * <p>The ARN (or ID suffix of the ARN) of the event data store against which the
     * query was run.</p>
     */
    inline bool EventDataStoreHasBeenSet() const { return m_eventDataStoreHasBeenSet; }

    /**
     * <p>The ARN (or ID suffix of the ARN) of the event data store against which the
     * query was run.</p>
     */
    inline void SetEventDataStore(const Aws::String& value) { m_eventDataStoreHasBeenSet = true; m_eventDataStore = value; }

    /**
     * <p>The ARN (or ID suffix of the ARN) of the event data store against which the
     * query was run.</p>
     */
    inline void SetEventDataStore(Aws::String&& value) { m_eventDataStoreHasBeenSet = true; m_eventDataStore = std::move(value); }

    /**
     * <p>The ARN (or ID suffix of the ARN) of the event data store against which the
     * query was run.</p>
     */
    inline void SetEventDataStore(const char* value) { m_eventDataStoreHasBeenSet = true; m_eventDataStore.assign(value); }

    /**
     * <p>The ARN (or ID suffix of the ARN) of the event data store against which the
     * query was run.</p>
     */
    inline GetQueryResultsRequest& WithEventDataStore(const Aws::String& value) { SetEventDataStore(value); return *this;}

    /**
     * <p>The ARN (or ID suffix of the ARN) of the event data store against which the
     * query was run.</p>
     */
    inline GetQueryResultsRequest& WithEventDataStore(Aws::String&& value) { SetEventDataStore(std::move(value)); return *this;}

    /**
     * <p>The ARN (or ID suffix of the ARN) of the event data store against which the
     * query was run.</p>
     */
    inline GetQueryResultsRequest& WithEventDataStore(const char* value) { SetEventDataStore(value); return *this;}


    /**
     * <p>The ID of the query for which you want to get results.</p>
     */
    inline const Aws::String& GetQueryId() const{ return m_queryId; }

    /**
     * <p>The ID of the query for which you want to get results.</p>
     */
    inline bool QueryIdHasBeenSet() const { return m_queryIdHasBeenSet; }

    /**
     * <p>The ID of the query for which you want to get results.</p>
     */
    inline void SetQueryId(const Aws::String& value) { m_queryIdHasBeenSet = true; m_queryId = value; }

    /**
     * <p>The ID of the query for which you want to get results.</p>
     */
    inline void SetQueryId(Aws::String&& value) { m_queryIdHasBeenSet = true; m_queryId = std::move(value); }

    /**
     * <p>The ID of the query for which you want to get results.</p>
     */
    inline void SetQueryId(const char* value) { m_queryIdHasBeenSet = true; m_queryId.assign(value); }

    /**
     * <p>The ID of the query for which you want to get results.</p>
     */
    inline GetQueryResultsRequest& WithQueryId(const Aws::String& value) { SetQueryId(value); return *this;}

    /**
     * <p>The ID of the query for which you want to get results.</p>
     */
    inline GetQueryResultsRequest& WithQueryId(Aws::String&& value) { SetQueryId(std::move(value)); return *this;}

    /**
     * <p>The ID of the query for which you want to get results.</p>
     */
    inline GetQueryResultsRequest& WithQueryId(const char* value) { SetQueryId(value); return *this;}


    /**
     * <p>A token you can use to get the next page of query results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token you can use to get the next page of query results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token you can use to get the next page of query results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token you can use to get the next page of query results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token you can use to get the next page of query results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token you can use to get the next page of query results.</p>
     */
    inline GetQueryResultsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token you can use to get the next page of query results.</p>
     */
    inline GetQueryResultsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token you can use to get the next page of query results.</p>
     */
    inline GetQueryResultsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of query results to display on a single page.</p>
     */
    inline int GetMaxQueryResults() const{ return m_maxQueryResults; }

    /**
     * <p>The maximum number of query results to display on a single page.</p>
     */
    inline bool MaxQueryResultsHasBeenSet() const { return m_maxQueryResultsHasBeenSet; }

    /**
     * <p>The maximum number of query results to display on a single page.</p>
     */
    inline void SetMaxQueryResults(int value) { m_maxQueryResultsHasBeenSet = true; m_maxQueryResults = value; }

    /**
     * <p>The maximum number of query results to display on a single page.</p>
     */
    inline GetQueryResultsRequest& WithMaxQueryResults(int value) { SetMaxQueryResults(value); return *this;}

  private:

    Aws::String m_eventDataStore;
    bool m_eventDataStoreHasBeenSet;

    Aws::String m_queryId;
    bool m_queryIdHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxQueryResults;
    bool m_maxQueryResultsHasBeenSet;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
