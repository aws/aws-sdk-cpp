/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

  /**
   */
  class AWS_SECURITYHUB_API GetInsightsRequest : public SecurityHubRequest
  {
  public:
    GetInsightsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetInsights"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The ARNs of the insights that you want to describe.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInsightArns() const{ return m_insightArns; }

    /**
     * <p>The ARNs of the insights that you want to describe.</p>
     */
    inline bool InsightArnsHasBeenSet() const { return m_insightArnsHasBeenSet; }

    /**
     * <p>The ARNs of the insights that you want to describe.</p>
     */
    inline void SetInsightArns(const Aws::Vector<Aws::String>& value) { m_insightArnsHasBeenSet = true; m_insightArns = value; }

    /**
     * <p>The ARNs of the insights that you want to describe.</p>
     */
    inline void SetInsightArns(Aws::Vector<Aws::String>&& value) { m_insightArnsHasBeenSet = true; m_insightArns = std::move(value); }

    /**
     * <p>The ARNs of the insights that you want to describe.</p>
     */
    inline GetInsightsRequest& WithInsightArns(const Aws::Vector<Aws::String>& value) { SetInsightArns(value); return *this;}

    /**
     * <p>The ARNs of the insights that you want to describe.</p>
     */
    inline GetInsightsRequest& WithInsightArns(Aws::Vector<Aws::String>&& value) { SetInsightArns(std::move(value)); return *this;}

    /**
     * <p>The ARNs of the insights that you want to describe.</p>
     */
    inline GetInsightsRequest& AddInsightArns(const Aws::String& value) { m_insightArnsHasBeenSet = true; m_insightArns.push_back(value); return *this; }

    /**
     * <p>The ARNs of the insights that you want to describe.</p>
     */
    inline GetInsightsRequest& AddInsightArns(Aws::String&& value) { m_insightArnsHasBeenSet = true; m_insightArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The ARNs of the insights that you want to describe.</p>
     */
    inline GetInsightsRequest& AddInsightArns(const char* value) { m_insightArnsHasBeenSet = true; m_insightArns.push_back(value); return *this; }


    /**
     * <p>Paginates results. On your first call to the <code>GetInsights</code>
     * operation, set the value of this parameter to <code>NULL</code>. For subsequent
     * calls to the operation, fill <code>nextToken</code> in the request with the
     * value of <code>nextToken</code> from the previous response to continue listing
     * data.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Paginates results. On your first call to the <code>GetInsights</code>
     * operation, set the value of this parameter to <code>NULL</code>. For subsequent
     * calls to the operation, fill <code>nextToken</code> in the request with the
     * value of <code>nextToken</code> from the previous response to continue listing
     * data.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Paginates results. On your first call to the <code>GetInsights</code>
     * operation, set the value of this parameter to <code>NULL</code>. For subsequent
     * calls to the operation, fill <code>nextToken</code> in the request with the
     * value of <code>nextToken</code> from the previous response to continue listing
     * data.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Paginates results. On your first call to the <code>GetInsights</code>
     * operation, set the value of this parameter to <code>NULL</code>. For subsequent
     * calls to the operation, fill <code>nextToken</code> in the request with the
     * value of <code>nextToken</code> from the previous response to continue listing
     * data.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Paginates results. On your first call to the <code>GetInsights</code>
     * operation, set the value of this parameter to <code>NULL</code>. For subsequent
     * calls to the operation, fill <code>nextToken</code> in the request with the
     * value of <code>nextToken</code> from the previous response to continue listing
     * data.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Paginates results. On your first call to the <code>GetInsights</code>
     * operation, set the value of this parameter to <code>NULL</code>. For subsequent
     * calls to the operation, fill <code>nextToken</code> in the request with the
     * value of <code>nextToken</code> from the previous response to continue listing
     * data.</p>
     */
    inline GetInsightsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Paginates results. On your first call to the <code>GetInsights</code>
     * operation, set the value of this parameter to <code>NULL</code>. For subsequent
     * calls to the operation, fill <code>nextToken</code> in the request with the
     * value of <code>nextToken</code> from the previous response to continue listing
     * data.</p>
     */
    inline GetInsightsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Paginates results. On your first call to the <code>GetInsights</code>
     * operation, set the value of this parameter to <code>NULL</code>. For subsequent
     * calls to the operation, fill <code>nextToken</code> in the request with the
     * value of <code>nextToken</code> from the previous response to continue listing
     * data.</p>
     */
    inline GetInsightsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of items that you want in the response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of items that you want in the response.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of items that you want in the response.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of items that you want in the response.</p>
     */
    inline GetInsightsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_insightArns;
    bool m_insightArnsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
