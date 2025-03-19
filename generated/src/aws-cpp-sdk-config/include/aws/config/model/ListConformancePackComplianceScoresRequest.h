/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/ConfigServiceRequest.h>
#include <aws/config/model/ConformancePackComplianceScoresFilters.h>
#include <aws/config/model/SortOrder.h>
#include <aws/config/model/SortBy.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   */
  class ListConformancePackComplianceScoresRequest : public ConfigServiceRequest
  {
  public:
    AWS_CONFIGSERVICE_API ListConformancePackComplianceScoresRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListConformancePackComplianceScores"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Filters the results based on the
     * <code>ConformancePackComplianceScoresFilters</code>.</p>
     */
    inline const ConformancePackComplianceScoresFilters& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = ConformancePackComplianceScoresFilters>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = ConformancePackComplianceScoresFilters>
    ListConformancePackComplianceScoresRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the order in which conformance pack compliance scores are sorted.
     * Either in ascending or descending order.</p> <p>By default, conformance pack
     * compliance scores are sorted in alphabetical order by name of the conformance
     * pack. Conformance pack compliance scores are sorted in reverse alphabetical
     * order if you enter <code>DESCENDING</code>.</p> <p>You can sort conformance pack
     * compliance scores by the numerical value of the compliance score by entering
     * <code>SCORE</code> in the <code>SortBy</code> action. When compliance scores are
     * sorted by <code>SCORE</code>, conformance packs with a compliance score of
     * <code>INSUFFICIENT_DATA</code> will be last when sorting by ascending order and
     * first when sorting by descending order.</p>
     */
    inline SortOrder GetSortOrder() const { return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(SortOrder value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline ListConformancePackComplianceScoresRequest& WithSortOrder(SortOrder value) { SetSortOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sorts your conformance pack compliance scores in either ascending or
     * descending order, depending on <code>SortOrder</code>.</p> <p>By default,
     * conformance pack compliance scores are sorted in alphabetical order by name of
     * the conformance pack. Enter <code>SCORE</code>, to sort conformance pack
     * compliance scores by the numerical value of the compliance score.</p>
     */
    inline SortBy GetSortBy() const { return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(SortBy value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline ListConformancePackComplianceScoresRequest& WithSortBy(SortBy value) { SetSortBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of conformance pack compliance scores returned on each
     * page.</p>
     */
    inline int GetLimit() const { return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline ListConformancePackComplianceScoresRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> string in a prior request that you can use to get
     * the paginated response for the next set of conformance pack compliance
     * scores.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListConformancePackComplianceScoresRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    ConformancePackComplianceScoresFilters m_filters;
    bool m_filtersHasBeenSet = false;

    SortOrder m_sortOrder{SortOrder::NOT_SET};
    bool m_sortOrderHasBeenSet = false;

    SortBy m_sortBy{SortBy::NOT_SET};
    bool m_sortByHasBeenSet = false;

    int m_limit{0};
    bool m_limitHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
