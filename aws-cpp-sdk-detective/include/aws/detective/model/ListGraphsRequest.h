/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
#include <aws/detective/DetectiveRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Detective
{
namespace Model
{

  /**
   */
  class ListGraphsRequest : public DetectiveRequest
  {
  public:
    AWS_DETECTIVE_API ListGraphsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListGraphs"; }

    AWS_DETECTIVE_API Aws::String SerializePayload() const override;


    /**
     * <p>For requests to get the next page of results, the pagination token that was
     * returned with the previous set of results. The initial request does not include
     * a pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>For requests to get the next page of results, the pagination token that was
     * returned with the previous set of results. The initial request does not include
     * a pagination token.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>For requests to get the next page of results, the pagination token that was
     * returned with the previous set of results. The initial request does not include
     * a pagination token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>For requests to get the next page of results, the pagination token that was
     * returned with the previous set of results. The initial request does not include
     * a pagination token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>For requests to get the next page of results, the pagination token that was
     * returned with the previous set of results. The initial request does not include
     * a pagination token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>For requests to get the next page of results, the pagination token that was
     * returned with the previous set of results. The initial request does not include
     * a pagination token.</p>
     */
    inline ListGraphsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>For requests to get the next page of results, the pagination token that was
     * returned with the previous set of results. The initial request does not include
     * a pagination token.</p>
     */
    inline ListGraphsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>For requests to get the next page of results, the pagination token that was
     * returned with the previous set of results. The initial request does not include
     * a pagination token.</p>
     */
    inline ListGraphsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of graphs to return at a time. The total must be less than
     * the overall limit on the number of results to return, which is currently
     * 200.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of graphs to return at a time. The total must be less than
     * the overall limit on the number of results to return, which is currently
     * 200.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of graphs to return at a time. The total must be less than
     * the overall limit on the number of results to return, which is currently
     * 200.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of graphs to return at a time. The total must be less than
     * the overall limit on the number of results to return, which is currently
     * 200.</p>
     */
    inline ListGraphsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
