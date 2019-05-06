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
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/sagemaker/model/ResourceType.h>
#include <aws/sagemaker/model/SearchExpression.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/SearchSortOrder.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class AWS_SAGEMAKER_API SearchRequest : public SageMakerRequest
  {
  public:
    SearchRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "Search"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the Amazon SageMaker resource to search for. Currently, the only
     * valid <code>Resource</code> value is <code>TrainingJob</code>.</p>
     */
    inline const ResourceType& GetResource() const{ return m_resource; }

    /**
     * <p>The name of the Amazon SageMaker resource to search for. Currently, the only
     * valid <code>Resource</code> value is <code>TrainingJob</code>.</p>
     */
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }

    /**
     * <p>The name of the Amazon SageMaker resource to search for. Currently, the only
     * valid <code>Resource</code> value is <code>TrainingJob</code>.</p>
     */
    inline void SetResource(const ResourceType& value) { m_resourceHasBeenSet = true; m_resource = value; }

    /**
     * <p>The name of the Amazon SageMaker resource to search for. Currently, the only
     * valid <code>Resource</code> value is <code>TrainingJob</code>.</p>
     */
    inline void SetResource(ResourceType&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }

    /**
     * <p>The name of the Amazon SageMaker resource to search for. Currently, the only
     * valid <code>Resource</code> value is <code>TrainingJob</code>.</p>
     */
    inline SearchRequest& WithResource(const ResourceType& value) { SetResource(value); return *this;}

    /**
     * <p>The name of the Amazon SageMaker resource to search for. Currently, the only
     * valid <code>Resource</code> value is <code>TrainingJob</code>.</p>
     */
    inline SearchRequest& WithResource(ResourceType&& value) { SetResource(std::move(value)); return *this;}


    /**
     * <p>A Boolean conditional statement. Resource objects must satisfy this condition
     * to be included in search results. You must provide at least one subexpression,
     * filter, or nested filter. The maximum number of recursive
     * <code>SubExpressions</code>, <code>NestedFilters</code>, and
     * <code>Filters</code> that can be included in a <code>SearchExpression</code>
     * object is 50.</p>
     */
    inline const SearchExpression& GetSearchExpression() const{ return m_searchExpression; }

    /**
     * <p>A Boolean conditional statement. Resource objects must satisfy this condition
     * to be included in search results. You must provide at least one subexpression,
     * filter, or nested filter. The maximum number of recursive
     * <code>SubExpressions</code>, <code>NestedFilters</code>, and
     * <code>Filters</code> that can be included in a <code>SearchExpression</code>
     * object is 50.</p>
     */
    inline bool SearchExpressionHasBeenSet() const { return m_searchExpressionHasBeenSet; }

    /**
     * <p>A Boolean conditional statement. Resource objects must satisfy this condition
     * to be included in search results. You must provide at least one subexpression,
     * filter, or nested filter. The maximum number of recursive
     * <code>SubExpressions</code>, <code>NestedFilters</code>, and
     * <code>Filters</code> that can be included in a <code>SearchExpression</code>
     * object is 50.</p>
     */
    inline void SetSearchExpression(const SearchExpression& value) { m_searchExpressionHasBeenSet = true; m_searchExpression = value; }

    /**
     * <p>A Boolean conditional statement. Resource objects must satisfy this condition
     * to be included in search results. You must provide at least one subexpression,
     * filter, or nested filter. The maximum number of recursive
     * <code>SubExpressions</code>, <code>NestedFilters</code>, and
     * <code>Filters</code> that can be included in a <code>SearchExpression</code>
     * object is 50.</p>
     */
    inline void SetSearchExpression(SearchExpression&& value) { m_searchExpressionHasBeenSet = true; m_searchExpression = std::move(value); }

    /**
     * <p>A Boolean conditional statement. Resource objects must satisfy this condition
     * to be included in search results. You must provide at least one subexpression,
     * filter, or nested filter. The maximum number of recursive
     * <code>SubExpressions</code>, <code>NestedFilters</code>, and
     * <code>Filters</code> that can be included in a <code>SearchExpression</code>
     * object is 50.</p>
     */
    inline SearchRequest& WithSearchExpression(const SearchExpression& value) { SetSearchExpression(value); return *this;}

    /**
     * <p>A Boolean conditional statement. Resource objects must satisfy this condition
     * to be included in search results. You must provide at least one subexpression,
     * filter, or nested filter. The maximum number of recursive
     * <code>SubExpressions</code>, <code>NestedFilters</code>, and
     * <code>Filters</code> that can be included in a <code>SearchExpression</code>
     * object is 50.</p>
     */
    inline SearchRequest& WithSearchExpression(SearchExpression&& value) { SetSearchExpression(std::move(value)); return *this;}


    /**
     * <p>The name of the resource property used to sort the
     * <code>SearchResults</code>. The default is <code>LastModifiedTime</code>.</p>
     */
    inline const Aws::String& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>The name of the resource property used to sort the
     * <code>SearchResults</code>. The default is <code>LastModifiedTime</code>.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>The name of the resource property used to sort the
     * <code>SearchResults</code>. The default is <code>LastModifiedTime</code>.</p>
     */
    inline void SetSortBy(const Aws::String& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>The name of the resource property used to sort the
     * <code>SearchResults</code>. The default is <code>LastModifiedTime</code>.</p>
     */
    inline void SetSortBy(Aws::String&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>The name of the resource property used to sort the
     * <code>SearchResults</code>. The default is <code>LastModifiedTime</code>.</p>
     */
    inline void SetSortBy(const char* value) { m_sortByHasBeenSet = true; m_sortBy.assign(value); }

    /**
     * <p>The name of the resource property used to sort the
     * <code>SearchResults</code>. The default is <code>LastModifiedTime</code>.</p>
     */
    inline SearchRequest& WithSortBy(const Aws::String& value) { SetSortBy(value); return *this;}

    /**
     * <p>The name of the resource property used to sort the
     * <code>SearchResults</code>. The default is <code>LastModifiedTime</code>.</p>
     */
    inline SearchRequest& WithSortBy(Aws::String&& value) { SetSortBy(std::move(value)); return *this;}

    /**
     * <p>The name of the resource property used to sort the
     * <code>SearchResults</code>. The default is <code>LastModifiedTime</code>.</p>
     */
    inline SearchRequest& WithSortBy(const char* value) { SetSortBy(value); return *this;}


    /**
     * <p>How <code>SearchResults</code> are ordered. Valid values are
     * <code>Ascending</code> or <code>Descending</code>. The default is
     * <code>Descending</code>.</p>
     */
    inline const SearchSortOrder& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>How <code>SearchResults</code> are ordered. Valid values are
     * <code>Ascending</code> or <code>Descending</code>. The default is
     * <code>Descending</code>.</p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>How <code>SearchResults</code> are ordered. Valid values are
     * <code>Ascending</code> or <code>Descending</code>. The default is
     * <code>Descending</code>.</p>
     */
    inline void SetSortOrder(const SearchSortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>How <code>SearchResults</code> are ordered. Valid values are
     * <code>Ascending</code> or <code>Descending</code>. The default is
     * <code>Descending</code>.</p>
     */
    inline void SetSortOrder(SearchSortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>How <code>SearchResults</code> are ordered. Valid values are
     * <code>Ascending</code> or <code>Descending</code>. The default is
     * <code>Descending</code>.</p>
     */
    inline SearchRequest& WithSortOrder(const SearchSortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p>How <code>SearchResults</code> are ordered. Valid values are
     * <code>Ascending</code> or <code>Descending</code>. The default is
     * <code>Descending</code>.</p>
     */
    inline SearchRequest& WithSortOrder(SearchSortOrder&& value) { SetSortOrder(std::move(value)); return *this;}


    /**
     * <p>If more than <code>MaxResults</code> resource objects match the specified
     * <code>SearchExpression</code>, the <code>SearchResponse</code> includes a
     * <code>NextToken</code>. The <code>NextToken</code> can be passed to the next
     * <code>SearchRequest</code> to continue retrieving results for the specified
     * <code>SearchExpression</code> and <code>Sort</code> parameters.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If more than <code>MaxResults</code> resource objects match the specified
     * <code>SearchExpression</code>, the <code>SearchResponse</code> includes a
     * <code>NextToken</code>. The <code>NextToken</code> can be passed to the next
     * <code>SearchRequest</code> to continue retrieving results for the specified
     * <code>SearchExpression</code> and <code>Sort</code> parameters.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If more than <code>MaxResults</code> resource objects match the specified
     * <code>SearchExpression</code>, the <code>SearchResponse</code> includes a
     * <code>NextToken</code>. The <code>NextToken</code> can be passed to the next
     * <code>SearchRequest</code> to continue retrieving results for the specified
     * <code>SearchExpression</code> and <code>Sort</code> parameters.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If more than <code>MaxResults</code> resource objects match the specified
     * <code>SearchExpression</code>, the <code>SearchResponse</code> includes a
     * <code>NextToken</code>. The <code>NextToken</code> can be passed to the next
     * <code>SearchRequest</code> to continue retrieving results for the specified
     * <code>SearchExpression</code> and <code>Sort</code> parameters.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If more than <code>MaxResults</code> resource objects match the specified
     * <code>SearchExpression</code>, the <code>SearchResponse</code> includes a
     * <code>NextToken</code>. The <code>NextToken</code> can be passed to the next
     * <code>SearchRequest</code> to continue retrieving results for the specified
     * <code>SearchExpression</code> and <code>Sort</code> parameters.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If more than <code>MaxResults</code> resource objects match the specified
     * <code>SearchExpression</code>, the <code>SearchResponse</code> includes a
     * <code>NextToken</code>. The <code>NextToken</code> can be passed to the next
     * <code>SearchRequest</code> to continue retrieving results for the specified
     * <code>SearchExpression</code> and <code>Sort</code> parameters.</p>
     */
    inline SearchRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If more than <code>MaxResults</code> resource objects match the specified
     * <code>SearchExpression</code>, the <code>SearchResponse</code> includes a
     * <code>NextToken</code>. The <code>NextToken</code> can be passed to the next
     * <code>SearchRequest</code> to continue retrieving results for the specified
     * <code>SearchExpression</code> and <code>Sort</code> parameters.</p>
     */
    inline SearchRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If more than <code>MaxResults</code> resource objects match the specified
     * <code>SearchExpression</code>, the <code>SearchResponse</code> includes a
     * <code>NextToken</code>. The <code>NextToken</code> can be passed to the next
     * <code>SearchRequest</code> to continue retrieving results for the specified
     * <code>SearchExpression</code> and <code>Sort</code> parameters.</p>
     */
    inline SearchRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return in a <code>SearchResponse</code>.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in a <code>SearchResponse</code>.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return in a <code>SearchResponse</code>.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in a <code>SearchResponse</code>.</p>
     */
    inline SearchRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    ResourceType m_resource;
    bool m_resourceHasBeenSet;

    SearchExpression m_searchExpression;
    bool m_searchExpressionHasBeenSet;

    Aws::String m_sortBy;
    bool m_sortByHasBeenSet;

    SearchSortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
