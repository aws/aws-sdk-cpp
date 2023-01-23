/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/ComputeOptimizerRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ComputeOptimizer
{
namespace Model
{

  /**
   */
  class GetRecommendationSummariesRequest : public ComputeOptimizerRequest
  {
  public:
    AWS_COMPUTEOPTIMIZER_API GetRecommendationSummariesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetRecommendationSummaries"; }

    AWS_COMPUTEOPTIMIZER_API Aws::String SerializePayload() const override;

    AWS_COMPUTEOPTIMIZER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the Amazon Web Services account for which to return recommendation
     * summaries.</p> <p>If your account is the management account of an organization,
     * use this parameter to specify the member account for which you want to return
     * recommendation summaries.</p> <p>Only one account ID can be specified per
     * request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountIds() const{ return m_accountIds; }

    /**
     * <p>The ID of the Amazon Web Services account for which to return recommendation
     * summaries.</p> <p>If your account is the management account of an organization,
     * use this parameter to specify the member account for which you want to return
     * recommendation summaries.</p> <p>Only one account ID can be specified per
     * request.</p>
     */
    inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services account for which to return recommendation
     * summaries.</p> <p>If your account is the management account of an organization,
     * use this parameter to specify the member account for which you want to return
     * recommendation summaries.</p> <p>Only one account ID can be specified per
     * request.</p>
     */
    inline void SetAccountIds(const Aws::Vector<Aws::String>& value) { m_accountIdsHasBeenSet = true; m_accountIds = value; }

    /**
     * <p>The ID of the Amazon Web Services account for which to return recommendation
     * summaries.</p> <p>If your account is the management account of an organization,
     * use this parameter to specify the member account for which you want to return
     * recommendation summaries.</p> <p>Only one account ID can be specified per
     * request.</p>
     */
    inline void SetAccountIds(Aws::Vector<Aws::String>&& value) { m_accountIdsHasBeenSet = true; m_accountIds = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account for which to return recommendation
     * summaries.</p> <p>If your account is the management account of an organization,
     * use this parameter to specify the member account for which you want to return
     * recommendation summaries.</p> <p>Only one account ID can be specified per
     * request.</p>
     */
    inline GetRecommendationSummariesRequest& WithAccountIds(const Aws::Vector<Aws::String>& value) { SetAccountIds(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account for which to return recommendation
     * summaries.</p> <p>If your account is the management account of an organization,
     * use this parameter to specify the member account for which you want to return
     * recommendation summaries.</p> <p>Only one account ID can be specified per
     * request.</p>
     */
    inline GetRecommendationSummariesRequest& WithAccountIds(Aws::Vector<Aws::String>&& value) { SetAccountIds(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account for which to return recommendation
     * summaries.</p> <p>If your account is the management account of an organization,
     * use this parameter to specify the member account for which you want to return
     * recommendation summaries.</p> <p>Only one account ID can be specified per
     * request.</p>
     */
    inline GetRecommendationSummariesRequest& AddAccountIds(const Aws::String& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }

    /**
     * <p>The ID of the Amazon Web Services account for which to return recommendation
     * summaries.</p> <p>If your account is the management account of an organization,
     * use this parameter to specify the member account for which you want to return
     * recommendation summaries.</p> <p>Only one account ID can be specified per
     * request.</p>
     */
    inline GetRecommendationSummariesRequest& AddAccountIds(Aws::String&& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The ID of the Amazon Web Services account for which to return recommendation
     * summaries.</p> <p>If your account is the management account of an organization,
     * use this parameter to specify the member account for which you want to return
     * recommendation summaries.</p> <p>Only one account ID can be specified per
     * request.</p>
     */
    inline GetRecommendationSummariesRequest& AddAccountIds(const char* value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }


    /**
     * <p>The token to advance to the next page of recommendation summaries.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to advance to the next page of recommendation summaries.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token to advance to the next page of recommendation summaries.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token to advance to the next page of recommendation summaries.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token to advance to the next page of recommendation summaries.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token to advance to the next page of recommendation summaries.</p>
     */
    inline GetRecommendationSummariesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to advance to the next page of recommendation summaries.</p>
     */
    inline GetRecommendationSummariesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to advance to the next page of recommendation summaries.</p>
     */
    inline GetRecommendationSummariesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of recommendation summaries to return with a single
     * request.</p> <p>To retrieve the remaining results, make another request with the
     * returned <code>nextToken</code> value.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of recommendation summaries to return with a single
     * request.</p> <p>To retrieve the remaining results, make another request with the
     * returned <code>nextToken</code> value.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of recommendation summaries to return with a single
     * request.</p> <p>To retrieve the remaining results, make another request with the
     * returned <code>nextToken</code> value.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of recommendation summaries to return with a single
     * request.</p> <p>To retrieve the remaining results, make another request with the
     * returned <code>nextToken</code> value.</p>
     */
    inline GetRecommendationSummariesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_accountIds;
    bool m_accountIdsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
