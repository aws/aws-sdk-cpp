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
  class GetQueryResultsRequest : public CloudTrailRequest
  {
  public:
    AWS_CLOUDTRAIL_API GetQueryResultsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetQueryResults"; }

    AWS_CLOUDTRAIL_API Aws::String SerializePayload() const override;

    AWS_CLOUDTRAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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

    Aws::String m_queryId;
    bool m_queryIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxQueryResults;
    bool m_maxQueryResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
