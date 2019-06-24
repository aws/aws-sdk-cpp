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
#include <aws/securityhub/model/AwsSecurityFindingFilters.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/SortCriterion.h>
#include <utility>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

  /**
   */
  class AWS_SECURITYHUB_API GetFindingsRequest : public SecurityHubRequest
  {
  public:
    GetFindingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetFindings"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The findings attributes used to define a condition to filter the findings
     * returned.</p>
     */
    inline const AwsSecurityFindingFilters& GetFilters() const{ return m_filters; }

    /**
     * <p>The findings attributes used to define a condition to filter the findings
     * returned.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>The findings attributes used to define a condition to filter the findings
     * returned.</p>
     */
    inline void SetFilters(const AwsSecurityFindingFilters& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>The findings attributes used to define a condition to filter the findings
     * returned.</p>
     */
    inline void SetFilters(AwsSecurityFindingFilters&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>The findings attributes used to define a condition to filter the findings
     * returned.</p>
     */
    inline GetFindingsRequest& WithFilters(const AwsSecurityFindingFilters& value) { SetFilters(value); return *this;}

    /**
     * <p>The findings attributes used to define a condition to filter the findings
     * returned.</p>
     */
    inline GetFindingsRequest& WithFilters(AwsSecurityFindingFilters&& value) { SetFilters(std::move(value)); return *this;}


    /**
     * <p>Findings attributes used to sort the list of findings returned.</p>
     */
    inline const Aws::Vector<SortCriterion>& GetSortCriteria() const{ return m_sortCriteria; }

    /**
     * <p>Findings attributes used to sort the list of findings returned.</p>
     */
    inline bool SortCriteriaHasBeenSet() const { return m_sortCriteriaHasBeenSet; }

    /**
     * <p>Findings attributes used to sort the list of findings returned.</p>
     */
    inline void SetSortCriteria(const Aws::Vector<SortCriterion>& value) { m_sortCriteriaHasBeenSet = true; m_sortCriteria = value; }

    /**
     * <p>Findings attributes used to sort the list of findings returned.</p>
     */
    inline void SetSortCriteria(Aws::Vector<SortCriterion>&& value) { m_sortCriteriaHasBeenSet = true; m_sortCriteria = std::move(value); }

    /**
     * <p>Findings attributes used to sort the list of findings returned.</p>
     */
    inline GetFindingsRequest& WithSortCriteria(const Aws::Vector<SortCriterion>& value) { SetSortCriteria(value); return *this;}

    /**
     * <p>Findings attributes used to sort the list of findings returned.</p>
     */
    inline GetFindingsRequest& WithSortCriteria(Aws::Vector<SortCriterion>&& value) { SetSortCriteria(std::move(value)); return *this;}

    /**
     * <p>Findings attributes used to sort the list of findings returned.</p>
     */
    inline GetFindingsRequest& AddSortCriteria(const SortCriterion& value) { m_sortCriteriaHasBeenSet = true; m_sortCriteria.push_back(value); return *this; }

    /**
     * <p>Findings attributes used to sort the list of findings returned.</p>
     */
    inline GetFindingsRequest& AddSortCriteria(SortCriterion&& value) { m_sortCriteriaHasBeenSet = true; m_sortCriteria.push_back(std::move(value)); return *this; }


    /**
     * <p>Paginates results. On your first call to the <code>GetFindings</code>
     * operation, set the value of this parameter to <code>NULL</code>. For subsequent
     * calls to the operation, fill <code>nextToken</code> in the request with the
     * value of <code>nextToken</code> from the previous response to continue listing
     * data.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Paginates results. On your first call to the <code>GetFindings</code>
     * operation, set the value of this parameter to <code>NULL</code>. For subsequent
     * calls to the operation, fill <code>nextToken</code> in the request with the
     * value of <code>nextToken</code> from the previous response to continue listing
     * data.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Paginates results. On your first call to the <code>GetFindings</code>
     * operation, set the value of this parameter to <code>NULL</code>. For subsequent
     * calls to the operation, fill <code>nextToken</code> in the request with the
     * value of <code>nextToken</code> from the previous response to continue listing
     * data.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Paginates results. On your first call to the <code>GetFindings</code>
     * operation, set the value of this parameter to <code>NULL</code>. For subsequent
     * calls to the operation, fill <code>nextToken</code> in the request with the
     * value of <code>nextToken</code> from the previous response to continue listing
     * data.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Paginates results. On your first call to the <code>GetFindings</code>
     * operation, set the value of this parameter to <code>NULL</code>. For subsequent
     * calls to the operation, fill <code>nextToken</code> in the request with the
     * value of <code>nextToken</code> from the previous response to continue listing
     * data.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Paginates results. On your first call to the <code>GetFindings</code>
     * operation, set the value of this parameter to <code>NULL</code>. For subsequent
     * calls to the operation, fill <code>nextToken</code> in the request with the
     * value of <code>nextToken</code> from the previous response to continue listing
     * data.</p>
     */
    inline GetFindingsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Paginates results. On your first call to the <code>GetFindings</code>
     * operation, set the value of this parameter to <code>NULL</code>. For subsequent
     * calls to the operation, fill <code>nextToken</code> in the request with the
     * value of <code>nextToken</code> from the previous response to continue listing
     * data.</p>
     */
    inline GetFindingsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Paginates results. On your first call to the <code>GetFindings</code>
     * operation, set the value of this parameter to <code>NULL</code>. For subsequent
     * calls to the operation, fill <code>nextToken</code> in the request with the
     * value of <code>nextToken</code> from the previous response to continue listing
     * data.</p>
     */
    inline GetFindingsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of findings to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of findings to return.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of findings to return.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of findings to return.</p>
     */
    inline GetFindingsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    AwsSecurityFindingFilters m_filters;
    bool m_filtersHasBeenSet;

    Aws::Vector<SortCriterion> m_sortCriteria;
    bool m_sortCriteriaHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
