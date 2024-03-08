/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/freetier/FreeTier_EXPORTS.h>
#include <aws/freetier/FreeTierRequest.h>
#include <aws/freetier/model/Expression.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace FreeTier
{
namespace Model
{

  /**
   */
  class GetFreeTierUsageRequest : public FreeTierRequest
  {
  public:
    AWS_FREETIER_API GetFreeTierUsageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetFreeTierUsage"; }

    AWS_FREETIER_API Aws::String SerializePayload() const override;

    AWS_FREETIER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>An expression that specifies the conditions that you want each
     * <code>FreeTierUsage</code> object to meet.</p>
     */
    inline const Expression& GetFilter() const{ return m_filter; }

    /**
     * <p>An expression that specifies the conditions that you want each
     * <code>FreeTierUsage</code> object to meet.</p>
     */
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }

    /**
     * <p>An expression that specifies the conditions that you want each
     * <code>FreeTierUsage</code> object to meet.</p>
     */
    inline void SetFilter(const Expression& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p>An expression that specifies the conditions that you want each
     * <code>FreeTierUsage</code> object to meet.</p>
     */
    inline void SetFilter(Expression&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    /**
     * <p>An expression that specifies the conditions that you want each
     * <code>FreeTierUsage</code> object to meet.</p>
     */
    inline GetFreeTierUsageRequest& WithFilter(const Expression& value) { SetFilter(value); return *this;}

    /**
     * <p>An expression that specifies the conditions that you want each
     * <code>FreeTierUsage</code> object to meet.</p>
     */
    inline GetFreeTierUsageRequest& WithFilter(Expression&& value) { SetFilter(std::move(value)); return *this;}


    /**
     * <p>The maximum number of results to return in the response.
     * <code>MaxResults</code> means that there can be up to the specified number of
     * values, but there might be fewer results based on your filters.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in the response.
     * <code>MaxResults</code> means that there can be up to the specified number of
     * values, but there might be fewer results based on your filters.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return in the response.
     * <code>MaxResults</code> means that there can be up to the specified number of
     * values, but there might be fewer results based on your filters.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in the response.
     * <code>MaxResults</code> means that there can be up to the specified number of
     * values, but there might be fewer results based on your filters.</p>
     */
    inline GetFreeTierUsageRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline GetFreeTierUsageRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline GetFreeTierUsageRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline GetFreeTierUsageRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Expression m_filter;
    bool m_filterHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace FreeTier
} // namespace Aws
