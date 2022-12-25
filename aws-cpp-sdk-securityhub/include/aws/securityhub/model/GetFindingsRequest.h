/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetFindingsRequest : public SecurityHubRequest
  {
  public:
    AWS_SECURITYHUB_API GetFindingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetFindings"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;


    /**
     * <p>The finding attributes used to define a condition to filter the returned
     * findings.</p> <p>You can filter by up to 10 finding attributes. For each
     * attribute, you can provide up to 20 filter values.</p> <p>Note that in the
     * available filter fields, <code>WorkflowState</code> is deprecated. To search for
     * a finding based on its workflow status, use <code>WorkflowStatus</code>.</p>
     */
    inline const AwsSecurityFindingFilters& GetFilters() const{ return m_filters; }

    /**
     * <p>The finding attributes used to define a condition to filter the returned
     * findings.</p> <p>You can filter by up to 10 finding attributes. For each
     * attribute, you can provide up to 20 filter values.</p> <p>Note that in the
     * available filter fields, <code>WorkflowState</code> is deprecated. To search for
     * a finding based on its workflow status, use <code>WorkflowStatus</code>.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>The finding attributes used to define a condition to filter the returned
     * findings.</p> <p>You can filter by up to 10 finding attributes. For each
     * attribute, you can provide up to 20 filter values.</p> <p>Note that in the
     * available filter fields, <code>WorkflowState</code> is deprecated. To search for
     * a finding based on its workflow status, use <code>WorkflowStatus</code>.</p>
     */
    inline void SetFilters(const AwsSecurityFindingFilters& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>The finding attributes used to define a condition to filter the returned
     * findings.</p> <p>You can filter by up to 10 finding attributes. For each
     * attribute, you can provide up to 20 filter values.</p> <p>Note that in the
     * available filter fields, <code>WorkflowState</code> is deprecated. To search for
     * a finding based on its workflow status, use <code>WorkflowStatus</code>.</p>
     */
    inline void SetFilters(AwsSecurityFindingFilters&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>The finding attributes used to define a condition to filter the returned
     * findings.</p> <p>You can filter by up to 10 finding attributes. For each
     * attribute, you can provide up to 20 filter values.</p> <p>Note that in the
     * available filter fields, <code>WorkflowState</code> is deprecated. To search for
     * a finding based on its workflow status, use <code>WorkflowStatus</code>.</p>
     */
    inline GetFindingsRequest& WithFilters(const AwsSecurityFindingFilters& value) { SetFilters(value); return *this;}

    /**
     * <p>The finding attributes used to define a condition to filter the returned
     * findings.</p> <p>You can filter by up to 10 finding attributes. For each
     * attribute, you can provide up to 20 filter values.</p> <p>Note that in the
     * available filter fields, <code>WorkflowState</code> is deprecated. To search for
     * a finding based on its workflow status, use <code>WorkflowStatus</code>.</p>
     */
    inline GetFindingsRequest& WithFilters(AwsSecurityFindingFilters&& value) { SetFilters(std::move(value)); return *this;}


    /**
     * <p>The finding attributes used to sort the list of returned findings.</p>
     */
    inline const Aws::Vector<SortCriterion>& GetSortCriteria() const{ return m_sortCriteria; }

    /**
     * <p>The finding attributes used to sort the list of returned findings.</p>
     */
    inline bool SortCriteriaHasBeenSet() const { return m_sortCriteriaHasBeenSet; }

    /**
     * <p>The finding attributes used to sort the list of returned findings.</p>
     */
    inline void SetSortCriteria(const Aws::Vector<SortCriterion>& value) { m_sortCriteriaHasBeenSet = true; m_sortCriteria = value; }

    /**
     * <p>The finding attributes used to sort the list of returned findings.</p>
     */
    inline void SetSortCriteria(Aws::Vector<SortCriterion>&& value) { m_sortCriteriaHasBeenSet = true; m_sortCriteria = std::move(value); }

    /**
     * <p>The finding attributes used to sort the list of returned findings.</p>
     */
    inline GetFindingsRequest& WithSortCriteria(const Aws::Vector<SortCriterion>& value) { SetSortCriteria(value); return *this;}

    /**
     * <p>The finding attributes used to sort the list of returned findings.</p>
     */
    inline GetFindingsRequest& WithSortCriteria(Aws::Vector<SortCriterion>&& value) { SetSortCriteria(std::move(value)); return *this;}

    /**
     * <p>The finding attributes used to sort the list of returned findings.</p>
     */
    inline GetFindingsRequest& AddSortCriteria(const SortCriterion& value) { m_sortCriteriaHasBeenSet = true; m_sortCriteria.push_back(value); return *this; }

    /**
     * <p>The finding attributes used to sort the list of returned findings.</p>
     */
    inline GetFindingsRequest& AddSortCriteria(SortCriterion&& value) { m_sortCriteriaHasBeenSet = true; m_sortCriteria.push_back(std::move(value)); return *this; }


    /**
     * <p>The token that is required for pagination. On your first call to the
     * <code>GetFindings</code> operation, set the value of this parameter to
     * <code>NULL</code>.</p> <p>For subsequent calls to the operation, to continue
     * listing data, set the value of this parameter to the value returned from the
     * previous response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token that is required for pagination. On your first call to the
     * <code>GetFindings</code> operation, set the value of this parameter to
     * <code>NULL</code>.</p> <p>For subsequent calls to the operation, to continue
     * listing data, set the value of this parameter to the value returned from the
     * previous response.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token that is required for pagination. On your first call to the
     * <code>GetFindings</code> operation, set the value of this parameter to
     * <code>NULL</code>.</p> <p>For subsequent calls to the operation, to continue
     * listing data, set the value of this parameter to the value returned from the
     * previous response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token that is required for pagination. On your first call to the
     * <code>GetFindings</code> operation, set the value of this parameter to
     * <code>NULL</code>.</p> <p>For subsequent calls to the operation, to continue
     * listing data, set the value of this parameter to the value returned from the
     * previous response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token that is required for pagination. On your first call to the
     * <code>GetFindings</code> operation, set the value of this parameter to
     * <code>NULL</code>.</p> <p>For subsequent calls to the operation, to continue
     * listing data, set the value of this parameter to the value returned from the
     * previous response.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token that is required for pagination. On your first call to the
     * <code>GetFindings</code> operation, set the value of this parameter to
     * <code>NULL</code>.</p> <p>For subsequent calls to the operation, to continue
     * listing data, set the value of this parameter to the value returned from the
     * previous response.</p>
     */
    inline GetFindingsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token that is required for pagination. On your first call to the
     * <code>GetFindings</code> operation, set the value of this parameter to
     * <code>NULL</code>.</p> <p>For subsequent calls to the operation, to continue
     * listing data, set the value of this parameter to the value returned from the
     * previous response.</p>
     */
    inline GetFindingsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token that is required for pagination. On your first call to the
     * <code>GetFindings</code> operation, set the value of this parameter to
     * <code>NULL</code>.</p> <p>For subsequent calls to the operation, to continue
     * listing data, set the value of this parameter to the value returned from the
     * previous response.</p>
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
    bool m_filtersHasBeenSet = false;

    Aws::Vector<SortCriterion> m_sortCriteria;
    bool m_sortCriteriaHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
