/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra-ranking/KendraRanking_EXPORTS.h>
#include <aws/kendra-ranking/KendraRankingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace KendraRanking
{
namespace Model
{

  /**
   */
  class ListRescoreExecutionPlansRequest : public KendraRankingRequest
  {
  public:
    AWS_KENDRARANKING_API ListRescoreExecutionPlansRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListRescoreExecutionPlans"; }

    AWS_KENDRARANKING_API Aws::String SerializePayload() const override;

    AWS_KENDRARANKING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>If the response is truncated, Amazon Kendra Intelligent Ranking returns a
     * pagination token in the response. You can use this pagination token to retrieve
     * the next set of rescore execution plans.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response is truncated, Amazon Kendra Intelligent Ranking returns a
     * pagination token in the response. You can use this pagination token to retrieve
     * the next set of rescore execution plans.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the response is truncated, Amazon Kendra Intelligent Ranking returns a
     * pagination token in the response. You can use this pagination token to retrieve
     * the next set of rescore execution plans.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the response is truncated, Amazon Kendra Intelligent Ranking returns a
     * pagination token in the response. You can use this pagination token to retrieve
     * the next set of rescore execution plans.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the response is truncated, Amazon Kendra Intelligent Ranking returns a
     * pagination token in the response. You can use this pagination token to retrieve
     * the next set of rescore execution plans.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the response is truncated, Amazon Kendra Intelligent Ranking returns a
     * pagination token in the response. You can use this pagination token to retrieve
     * the next set of rescore execution plans.</p>
     */
    inline ListRescoreExecutionPlansRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response is truncated, Amazon Kendra Intelligent Ranking returns a
     * pagination token in the response. You can use this pagination token to retrieve
     * the next set of rescore execution plans.</p>
     */
    inline ListRescoreExecutionPlansRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response is truncated, Amazon Kendra Intelligent Ranking returns a
     * pagination token in the response. You can use this pagination token to retrieve
     * the next set of rescore execution plans.</p>
     */
    inline ListRescoreExecutionPlansRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of rescore execution plans to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of rescore execution plans to return.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of rescore execution plans to return.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of rescore execution plans to return.</p>
     */
    inline ListRescoreExecutionPlansRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace KendraRanking
} // namespace Aws
