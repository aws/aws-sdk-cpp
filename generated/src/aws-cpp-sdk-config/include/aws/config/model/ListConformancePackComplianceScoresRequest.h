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
    AWS_CONFIGSERVICE_API ListConformancePackComplianceScoresRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListConformancePackComplianceScores"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Filters the results based on the
     * <code>ConformancePackComplianceScoresFilters</code>.</p>
     */
    inline const ConformancePackComplianceScoresFilters& GetFilters() const{ return m_filters; }

    /**
     * <p>Filters the results based on the
     * <code>ConformancePackComplianceScoresFilters</code>.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>Filters the results based on the
     * <code>ConformancePackComplianceScoresFilters</code>.</p>
     */
    inline void SetFilters(const ConformancePackComplianceScoresFilters& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>Filters the results based on the
     * <code>ConformancePackComplianceScoresFilters</code>.</p>
     */
    inline void SetFilters(ConformancePackComplianceScoresFilters&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>Filters the results based on the
     * <code>ConformancePackComplianceScoresFilters</code>.</p>
     */
    inline ListConformancePackComplianceScoresRequest& WithFilters(const ConformancePackComplianceScoresFilters& value) { SetFilters(value); return *this;}

    /**
     * <p>Filters the results based on the
     * <code>ConformancePackComplianceScoresFilters</code>.</p>
     */
    inline ListConformancePackComplianceScoresRequest& WithFilters(ConformancePackComplianceScoresFilters&& value) { SetFilters(std::move(value)); return *this;}


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
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }

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
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

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
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

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
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

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
    inline ListConformancePackComplianceScoresRequest& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}

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
    inline ListConformancePackComplianceScoresRequest& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}


    /**
     * <p>Sorts your conformance pack compliance scores in either ascending or
     * descending order, depending on <code>SortOrder</code>.</p> <p>By default,
     * conformance pack compliance scores are sorted in alphabetical order by name of
     * the conformance pack. Enter <code>SCORE</code>, to sort conformance pack
     * compliance scores by the numerical value of the compliance score.</p>
     */
    inline const SortBy& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>Sorts your conformance pack compliance scores in either ascending or
     * descending order, depending on <code>SortOrder</code>.</p> <p>By default,
     * conformance pack compliance scores are sorted in alphabetical order by name of
     * the conformance pack. Enter <code>SCORE</code>, to sort conformance pack
     * compliance scores by the numerical value of the compliance score.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>Sorts your conformance pack compliance scores in either ascending or
     * descending order, depending on <code>SortOrder</code>.</p> <p>By default,
     * conformance pack compliance scores are sorted in alphabetical order by name of
     * the conformance pack. Enter <code>SCORE</code>, to sort conformance pack
     * compliance scores by the numerical value of the compliance score.</p>
     */
    inline void SetSortBy(const SortBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>Sorts your conformance pack compliance scores in either ascending or
     * descending order, depending on <code>SortOrder</code>.</p> <p>By default,
     * conformance pack compliance scores are sorted in alphabetical order by name of
     * the conformance pack. Enter <code>SCORE</code>, to sort conformance pack
     * compliance scores by the numerical value of the compliance score.</p>
     */
    inline void SetSortBy(SortBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>Sorts your conformance pack compliance scores in either ascending or
     * descending order, depending on <code>SortOrder</code>.</p> <p>By default,
     * conformance pack compliance scores are sorted in alphabetical order by name of
     * the conformance pack. Enter <code>SCORE</code>, to sort conformance pack
     * compliance scores by the numerical value of the compliance score.</p>
     */
    inline ListConformancePackComplianceScoresRequest& WithSortBy(const SortBy& value) { SetSortBy(value); return *this;}

    /**
     * <p>Sorts your conformance pack compliance scores in either ascending or
     * descending order, depending on <code>SortOrder</code>.</p> <p>By default,
     * conformance pack compliance scores are sorted in alphabetical order by name of
     * the conformance pack. Enter <code>SCORE</code>, to sort conformance pack
     * compliance scores by the numerical value of the compliance score.</p>
     */
    inline ListConformancePackComplianceScoresRequest& WithSortBy(SortBy&& value) { SetSortBy(std::move(value)); return *this;}


    /**
     * <p>The maximum number of conformance pack compliance scores returned on each
     * page.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of conformance pack compliance scores returned on each
     * page.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The maximum number of conformance pack compliance scores returned on each
     * page.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of conformance pack compliance scores returned on each
     * page.</p>
     */
    inline ListConformancePackComplianceScoresRequest& WithLimit(int value) { SetLimit(value); return *this;}


    /**
     * <p>The <code>nextToken</code> string in a prior request that you can use to get
     * the paginated response for next set of conformance pack compliance scores.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> string in a prior request that you can use to get
     * the paginated response for next set of conformance pack compliance scores.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The <code>nextToken</code> string in a prior request that you can use to get
     * the paginated response for next set of conformance pack compliance scores.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> string in a prior request that you can use to get
     * the paginated response for next set of conformance pack compliance scores.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> string in a prior request that you can use to get
     * the paginated response for next set of conformance pack compliance scores.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> string in a prior request that you can use to get
     * the paginated response for next set of conformance pack compliance scores.</p>
     */
    inline ListConformancePackComplianceScoresRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> string in a prior request that you can use to get
     * the paginated response for next set of conformance pack compliance scores.</p>
     */
    inline ListConformancePackComplianceScoresRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> string in a prior request that you can use to get
     * the paginated response for next set of conformance pack compliance scores.</p>
     */
    inline ListConformancePackComplianceScoresRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    ConformancePackComplianceScoresFilters m_filters;
    bool m_filtersHasBeenSet = false;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;

    SortBy m_sortBy;
    bool m_sortByHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
