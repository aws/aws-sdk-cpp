/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/Inspector2Request.h>
#include <aws/inspector2/model/FilterAction.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Inspector2
{
namespace Model
{

  /**
   */
  class ListFiltersRequest : public Inspector2Request
  {
  public:
    AWS_INSPECTOR2_API ListFiltersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListFilters"; }

    AWS_INSPECTOR2_API Aws::String SerializePayload() const override;


    /**
     * <p>The action the filter applies to matched findings.</p>
     */
    inline const FilterAction& GetAction() const{ return m_action; }

    /**
     * <p>The action the filter applies to matched findings.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The action the filter applies to matched findings.</p>
     */
    inline void SetAction(const FilterAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The action the filter applies to matched findings.</p>
     */
    inline void SetAction(FilterAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The action the filter applies to matched findings.</p>
     */
    inline ListFiltersRequest& WithAction(const FilterAction& value) { SetAction(value); return *this;}

    /**
     * <p>The action the filter applies to matched findings.</p>
     */
    inline ListFiltersRequest& WithAction(FilterAction&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>The Amazon resource number (ARN) of the filter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetArns() const{ return m_arns; }

    /**
     * <p>The Amazon resource number (ARN) of the filter.</p>
     */
    inline bool ArnsHasBeenSet() const { return m_arnsHasBeenSet; }

    /**
     * <p>The Amazon resource number (ARN) of the filter.</p>
     */
    inline void SetArns(const Aws::Vector<Aws::String>& value) { m_arnsHasBeenSet = true; m_arns = value; }

    /**
     * <p>The Amazon resource number (ARN) of the filter.</p>
     */
    inline void SetArns(Aws::Vector<Aws::String>&& value) { m_arnsHasBeenSet = true; m_arns = std::move(value); }

    /**
     * <p>The Amazon resource number (ARN) of the filter.</p>
     */
    inline ListFiltersRequest& WithArns(const Aws::Vector<Aws::String>& value) { SetArns(value); return *this;}

    /**
     * <p>The Amazon resource number (ARN) of the filter.</p>
     */
    inline ListFiltersRequest& WithArns(Aws::Vector<Aws::String>&& value) { SetArns(std::move(value)); return *this;}

    /**
     * <p>The Amazon resource number (ARN) of the filter.</p>
     */
    inline ListFiltersRequest& AddArns(const Aws::String& value) { m_arnsHasBeenSet = true; m_arns.push_back(value); return *this; }

    /**
     * <p>The Amazon resource number (ARN) of the filter.</p>
     */
    inline ListFiltersRequest& AddArns(Aws::String&& value) { m_arnsHasBeenSet = true; m_arns.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon resource number (ARN) of the filter.</p>
     */
    inline ListFiltersRequest& AddArns(const char* value) { m_arnsHasBeenSet = true; m_arns.push_back(value); return *this; }


    /**
     * <p>The maximum number of results to return in the response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in the response.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return in the response.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in the response.</p>
     */
    inline ListFiltersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request to a list action. For
     * subsequent calls, use the <code>NextToken</code> value returned from the
     * previous request to continue listing results after the first page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request to a list action. For
     * subsequent calls, use the <code>NextToken</code> value returned from the
     * previous request to continue listing results after the first page.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request to a list action. For
     * subsequent calls, use the <code>NextToken</code> value returned from the
     * previous request to continue listing results after the first page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request to a list action. For
     * subsequent calls, use the <code>NextToken</code> value returned from the
     * previous request to continue listing results after the first page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request to a list action. For
     * subsequent calls, use the <code>NextToken</code> value returned from the
     * previous request to continue listing results after the first page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request to a list action. For
     * subsequent calls, use the <code>NextToken</code> value returned from the
     * previous request to continue listing results after the first page.</p>
     */
    inline ListFiltersRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request to a list action. For
     * subsequent calls, use the <code>NextToken</code> value returned from the
     * previous request to continue listing results after the first page.</p>
     */
    inline ListFiltersRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request to a list action. For
     * subsequent calls, use the <code>NextToken</code> value returned from the
     * previous request to continue listing results after the first page.</p>
     */
    inline ListFiltersRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    FilterAction m_action;
    bool m_actionHasBeenSet = false;

    Aws::Vector<Aws::String> m_arns;
    bool m_arnsHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
