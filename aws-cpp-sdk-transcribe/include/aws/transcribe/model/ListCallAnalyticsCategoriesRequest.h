/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/TranscribeServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace TranscribeService
{
namespace Model
{

  /**
   */
  class AWS_TRANSCRIBESERVICE_API ListCallAnalyticsCategoriesRequest : public TranscribeServiceRequest
  {
  public:
    ListCallAnalyticsCategoriesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListCallAnalyticsCategories"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>When included, <code>NextToken</code>fetches the next set of categories if
     * the result of the previous request was truncated.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>When included, <code>NextToken</code>fetches the next set of categories if
     * the result of the previous request was truncated.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>When included, <code>NextToken</code>fetches the next set of categories if
     * the result of the previous request was truncated.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>When included, <code>NextToken</code>fetches the next set of categories if
     * the result of the previous request was truncated.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>When included, <code>NextToken</code>fetches the next set of categories if
     * the result of the previous request was truncated.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>When included, <code>NextToken</code>fetches the next set of categories if
     * the result of the previous request was truncated.</p>
     */
    inline ListCallAnalyticsCategoriesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>When included, <code>NextToken</code>fetches the next set of categories if
     * the result of the previous request was truncated.</p>
     */
    inline ListCallAnalyticsCategoriesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>When included, <code>NextToken</code>fetches the next set of categories if
     * the result of the previous request was truncated.</p>
     */
    inline ListCallAnalyticsCategoriesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of categories to return in the response. If there are
     * fewer results in the list, the response contains only the actual results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of categories to return in the response. If there are
     * fewer results in the list, the response contains only the actual results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of categories to return in the response. If there are
     * fewer results in the list, the response contains only the actual results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of categories to return in the response. If there are
     * fewer results in the list, the response contains only the actual results.</p>
     */
    inline ListCallAnalyticsCategoriesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
