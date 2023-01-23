/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/Inspector2Request.h>
#include <aws/inspector2/model/CoverageFilterCriteria.h>
#include <aws/inspector2/model/GroupKey.h>
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
  class ListCoverageStatisticsRequest : public Inspector2Request
  {
  public:
    AWS_INSPECTOR2_API ListCoverageStatisticsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListCoverageStatistics"; }

    AWS_INSPECTOR2_API Aws::String SerializePayload() const override;


    /**
     * <p>An object that contains details on the filters to apply to the coverage data
     * for your environment.</p>
     */
    inline const CoverageFilterCriteria& GetFilterCriteria() const{ return m_filterCriteria; }

    /**
     * <p>An object that contains details on the filters to apply to the coverage data
     * for your environment.</p>
     */
    inline bool FilterCriteriaHasBeenSet() const { return m_filterCriteriaHasBeenSet; }

    /**
     * <p>An object that contains details on the filters to apply to the coverage data
     * for your environment.</p>
     */
    inline void SetFilterCriteria(const CoverageFilterCriteria& value) { m_filterCriteriaHasBeenSet = true; m_filterCriteria = value; }

    /**
     * <p>An object that contains details on the filters to apply to the coverage data
     * for your environment.</p>
     */
    inline void SetFilterCriteria(CoverageFilterCriteria&& value) { m_filterCriteriaHasBeenSet = true; m_filterCriteria = std::move(value); }

    /**
     * <p>An object that contains details on the filters to apply to the coverage data
     * for your environment.</p>
     */
    inline ListCoverageStatisticsRequest& WithFilterCriteria(const CoverageFilterCriteria& value) { SetFilterCriteria(value); return *this;}

    /**
     * <p>An object that contains details on the filters to apply to the coverage data
     * for your environment.</p>
     */
    inline ListCoverageStatisticsRequest& WithFilterCriteria(CoverageFilterCriteria&& value) { SetFilterCriteria(std::move(value)); return *this;}


    /**
     * <p>The value to group the results by.</p>
     */
    inline const GroupKey& GetGroupBy() const{ return m_groupBy; }

    /**
     * <p>The value to group the results by.</p>
     */
    inline bool GroupByHasBeenSet() const { return m_groupByHasBeenSet; }

    /**
     * <p>The value to group the results by.</p>
     */
    inline void SetGroupBy(const GroupKey& value) { m_groupByHasBeenSet = true; m_groupBy = value; }

    /**
     * <p>The value to group the results by.</p>
     */
    inline void SetGroupBy(GroupKey&& value) { m_groupByHasBeenSet = true; m_groupBy = std::move(value); }

    /**
     * <p>The value to group the results by.</p>
     */
    inline ListCoverageStatisticsRequest& WithGroupBy(const GroupKey& value) { SetGroupBy(value); return *this;}

    /**
     * <p>The value to group the results by.</p>
     */
    inline ListCoverageStatisticsRequest& WithGroupBy(GroupKey&& value) { SetGroupBy(std::move(value)); return *this;}


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
    inline ListCoverageStatisticsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request to a list action. For
     * subsequent calls, use the <code>NextToken</code> value returned from the
     * previous request to continue listing results after the first page.</p>
     */
    inline ListCoverageStatisticsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request to a list action. For
     * subsequent calls, use the <code>NextToken</code> value returned from the
     * previous request to continue listing results after the first page.</p>
     */
    inline ListCoverageStatisticsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    CoverageFilterCriteria m_filterCriteria;
    bool m_filterCriteriaHasBeenSet = false;

    GroupKey m_groupBy;
    bool m_groupByHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
